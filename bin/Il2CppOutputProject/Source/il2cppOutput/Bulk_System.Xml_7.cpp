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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
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

// System.Action
struct Action_t1264377477;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_t4283450917;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t2925877523;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t157279074;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t3046556399;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t2075988643;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3384741;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t3943099367;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.Xml.IDtdEntityInfo,System.Xml.IDtdEntityInfo>
struct Dictionary_2_t1740447880;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t39404347;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t96558379;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t892470886;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Exception
struct Exception_t;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t1600215562;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t2317969963;
// System.Func`2<System.Object,System.String>
struct Func_2_t1214474899;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.IO.Stream>>
struct Func_2_t2489992967;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t2108926;
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
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t156472862;
// System.IO.TextReader
struct TextReader_t283511965;
// System.IO.TextWriter
struct TextWriter_t3478189236;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_t2923596909;
// System.Net.ICredentials
struct ICredentials_t725721261;
// System.Net.IWebProxy
struct IWebProxy_t688979836;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Predicate`1<System.Object>
struct Predicate_1_t3905400288;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t4012569436;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t923100567;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.Decoder
struct Decoder_t2204182725;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t2402303981;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.ContextCallback
struct ContextCallback_t3823316192;
// System.Threading.ReaderWriterLock
struct ReaderWriterLock_t367846299;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2974092902;
// System.Threading.Tasks.StackGuard
struct StackGuard_t1472778820;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t2170468915;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t2660013028;
// System.Threading.Tasks.TaskFactory`1<System.IO.Stream>
struct TaskFactory_1_t1332451455;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t3139534710;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1196198384;
// System.Threading.Tasks.Task`1<System.IO.Stream>
struct Task_1_t2678563084;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t190679043;
// System.Threading.Tasks.Task`1<System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>>
struct Task_1_t1685771062;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Uri
struct Uri_t100236324;
// System.Uri/UriInfo
struct UriInfo_t1092684687;
// System.UriParser
struct UriParser_t3890150400;
// System.Void
struct Void_t1185182177;
// System.Xml.Base64Encoder
struct Base64Encoder_t3938083961;
// System.Xml.DomNameTable
struct DomNameTable_t751058560;
// System.Xml.EmptyEnumerator
struct EmptyEnumerator_t1830168813;
// System.Xml.IDtdDefaultAttributeInfo
struct IDtdDefaultAttributeInfo_t2775364687;
// System.Xml.IDtdEntityInfo
struct IDtdEntityInfo_t3492232514;
// System.Xml.IDtdInfo
struct IDtdInfo_t4056024937;
// System.Xml.IDtdParser
struct IDtdParser_t2016838004;
// System.Xml.IValidationEventHandling
struct IValidationEventHandling_t3880195220;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t535375154;
// System.Xml.IncrementalReadDecoder
struct IncrementalReadDecoder_t3011954239;
// System.Xml.PositionInfo
struct PositionInfo_t2441432568;
// System.Xml.ReadContentAsBinaryHelper
struct ReadContentAsBinaryHelper_t3017207972;
// System.Xml.Schema.BaseValidator
struct BaseValidator_t868759770;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t934654762;
// System.Xml.Schema.SchemaAttDef
struct SchemaAttDef_t2429541159;
// System.Xml.Schema.SchemaInfo
struct SchemaInfo_t3347508623;
// System.Xml.Schema.SchemaNames
struct SchemaNames_t661607975;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t2784773869;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t791314227;
// System.Xml.Schema.ValidationState
struct ValidationState_t603008718;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t2797257020;
// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t3610399789;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t322714710;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t3511258692;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1315720168;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t266093086;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t2033747345;
// System.Xml.SecureStringHasher
struct SecureStringHasher_t95812985;
// System.Xml.SecureStringHasher/HashCodeOfStringDelegate
struct HashCodeOfStringDelegate_t1614268366;
// System.Xml.XmlAttribute
struct XmlAttribute_t1173852259;
// System.Xml.XmlCharacterData
struct XmlCharacterData_t1167807131;
// System.Xml.XmlDocument
struct XmlDocument_t2837193595;
// System.Xml.XmlDownloadManager
struct XmlDownloadManager_t2540579765;
// System.Xml.XmlException
struct XmlException_t1761730631;
// System.Xml.XmlImplementation
struct XmlImplementation_t254178875;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1437094927;
// System.Xml.XmlName
struct XmlName_t4150142242;
// System.Xml.XmlNameTable
struct XmlNameTable_t71772148;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t2821286253;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t418790500;
// System.Xml.XmlNamespaceManager/NamespaceDeclaration[]
struct NamespaceDeclarationU5BU5D_t3609802718;
// System.Xml.XmlNode
struct XmlNode_t3767805227;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t1533444722;
// System.Xml.XmlParserContext
struct XmlParserContext_t2544895291;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2760654312;
// System.Xml.XmlReader
struct XmlReader_t3121518892;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t2186285234;
// System.Xml.XmlResolver
struct XmlResolver_t626023767;
// System.Xml.XmlTextEncoder
struct XmlTextEncoder_t1632274355;
// System.Xml.XmlTextReaderImpl
struct XmlTextReaderImpl_t178060594;
// System.Xml.XmlTextReaderImpl/DtdDefaultAttributeInfoToNodeDataComparer
struct DtdDefaultAttributeInfoToNodeDataComparer_t1152788373;
// System.Xml.XmlTextReaderImpl/DtdParserProxy
struct DtdParserProxy_t3101460057;
// System.Xml.XmlTextReaderImpl/LaterInitParam
struct LaterInitParam_t1449395818;
// System.Xml.XmlTextReaderImpl/NoNamespaceManager
struct NoNamespaceManager_t2350683444;
// System.Xml.XmlTextReaderImpl/NodeData
struct NodeData_t1817330133;
// System.Xml.XmlTextReaderImpl/NodeData[]
struct NodeDataU5BU5D_t1309219640;
// System.Xml.XmlTextReaderImpl/OnDefaultAttributeUseDelegate
struct OnDefaultAttributeUseDelegate_t2911570364;
// System.Xml.XmlTextReaderImpl/ParsingState[]
struct ParsingStateU5BU5D_t1980313167;
// System.Xml.XmlTextReaderImpl/XmlContext
struct XmlContext_t1618903103;
// System.Xml.XmlTextWriter
struct XmlTextWriter_t2114213153;
// System.Xml.XmlTextWriter/Namespace[]
struct NamespaceU5BU5D_t4259279085;
// System.Xml.XmlTextWriter/State[]
struct StateU5BU5D_t428546178;
// System.Xml.XmlTextWriter/TagInfo[]
struct TagInfoU5BU5D_t2840723532;
// System.Xml.XmlTextWriterBase64Encoder
struct XmlTextWriterBase64Encoder_t4259465041;
// System.Xml.XmlUnspecifiedAttribute
struct XmlUnspecifiedAttribute_t999215640;
// System.Xml.XmlUrlResolver
struct XmlUrlResolver_t817895037;
// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t1719295192;
// System.Xml.XmlValidatingReaderImpl
struct XmlValidatingReaderImpl_t1817762384;
// System.Xml.XmlValidatingReaderImpl/ValidationEventHandling
struct ValidationEventHandling_t3812646699;
// System.Xml.XmlWhitespace
struct XmlWhitespace_t131741354;
// System.Xml.XmlWriter
struct XmlWriter_t127905479;

extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncTaskMethodBuilder_1_t1106113378_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2736202052_il2cpp_TypeInfo_var;
extern RuntimeClass* DtdDefaultAttributeInfoToNodeDataComparer_t1152788373_il2cpp_TypeInfo_var;
extern RuntimeClass* DtdParserProxy_t3101460057_il2cpp_TypeInfo_var;
extern RuntimeClass* DtdParser_t1117044511_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IDtdAttributeInfo_t1491794539_il2cpp_TypeInfo_var;
extern RuntimeClass* IDtdDefaultAttributeInfo_t2775364687_il2cpp_TypeInfo_var;
extern RuntimeClass* IDtdParser_t2016838004_il2cpp_TypeInfo_var;
extern RuntimeClass* IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var;
extern RuntimeClass* IXmlNamespaceResolver_t535375154_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* NamespaceU5BU5D_t4259279085_il2cpp_TypeInfo_var;
extern RuntimeClass* NodeData_t1817330133_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* SecureStringHasher_t95812985_il2cpp_TypeInfo_var;
extern RuntimeClass* StateU5BU5D_t428546178_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TagInfoU5BU5D_t2840723532_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t100236324_il2cpp_TypeInfo_var;
extern RuntimeClass* ValidateNames_t2360135496_il2cpp_TypeInfo_var;
extern RuntimeClass* ValidationEventArgs_t2784773869_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlConvert_t1981561327_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlDownloadManager_t2540579765_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlException_t1761730631_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlReaderSettings_t2186285234_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlSchemaException_t3511258692_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlTextEncoder_t1632274355_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlTextWriter_t2114213153_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlUnspecifiedAttribute_t999215640_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlUrlResolver_t817895037_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlValidatingReaderImpl_t1817762384_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255362____6A0D50D692745A6663128CD315B71079584F3E59_12_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255362____B368804F0C6DAB083B253A6B106D0783D5C32E90_20_FieldInfo_var;
extern String_t* _stringLiteral106153172;
extern String_t* _stringLiteral127451004;
extern String_t* _stringLiteral1340994742;
extern String_t* _stringLiteral1557367511;
extern String_t* _stringLiteral1591324992;
extern String_t* _stringLiteral1595870731;
extern String_t* _stringLiteral1613539661;
extern String_t* _stringLiteral1645562609;
extern String_t* _stringLiteral175581707;
extern String_t* _stringLiteral1829473371;
extern String_t* _stringLiteral1871148010;
extern String_t* _stringLiteral1910992359;
extern String_t* _stringLiteral191191352;
extern String_t* _stringLiteral1918332503;
extern String_t* _stringLiteral1942376246;
extern String_t* _stringLiteral1948332219;
extern String_t* _stringLiteral227014553;
extern String_t* _stringLiteral2352036316;
extern String_t* _stringLiteral2359536473;
extern String_t* _stringLiteral2405474268;
extern String_t* _stringLiteral2409271576;
extern String_t* _stringLiteral2551850054;
extern String_t* _stringLiteral2577568443;
extern String_t* _stringLiteral25813508;
extern String_t* _stringLiteral2707270972;
extern String_t* _stringLiteral2787691749;
extern String_t* _stringLiteral2821368693;
extern String_t* _stringLiteral2828667252;
extern String_t* _stringLiteral2829469855;
extern String_t* _stringLiteral2909972470;
extern String_t* _stringLiteral2984480440;
extern String_t* _stringLiteral300414924;
extern String_t* _stringLiteral3013553869;
extern String_t* _stringLiteral3137061838;
extern String_t* _stringLiteral3143643306;
extern String_t* _stringLiteral3159092532;
extern String_t* _stringLiteral3247522831;
extern String_t* _stringLiteral3261264283;
extern String_t* _stringLiteral3261774195;
extern String_t* _stringLiteral3318781820;
extern String_t* _stringLiteral3333968179;
extern String_t* _stringLiteral3450582912;
extern String_t* _stringLiteral3450713987;
extern String_t* _stringLiteral3451631508;
extern String_t* _stringLiteral3451697041;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral3452614550;
extern String_t* _stringLiteral3452614588;
extern String_t* _stringLiteral3452614608;
extern String_t* _stringLiteral3452614643;
extern String_t* _stringLiteral3452614645;
extern String_t* _stringLiteral3457267696;
extern String_t* _stringLiteral3481649703;
extern String_t* _stringLiteral3498566577;
extern String_t* _stringLiteral3529812268;
extern String_t* _stringLiteral3559080196;
extern String_t* _stringLiteral3658093331;
extern String_t* _stringLiteral3664297627;
extern String_t* _stringLiteral3751299867;
extern String_t* _stringLiteral3788866564;
extern String_t* _stringLiteral3796264707;
extern String_t* _stringLiteral380173303;
extern String_t* _stringLiteral3831402877;
extern String_t* _stringLiteral3929236445;
extern String_t* _stringLiteral3938305162;
extern String_t* _stringLiteral3984887517;
extern String_t* _stringLiteral3987158284;
extern String_t* _stringLiteral398961912;
extern String_t* _stringLiteral4026494280;
extern String_t* _stringLiteral4059541177;
extern String_t* _stringLiteral4158462482;
extern String_t* _stringLiteral445580989;
extern String_t* _stringLiteral515442337;
extern String_t* _stringLiteral515958032;
extern String_t* _stringLiteral635897680;
extern String_t* _stringLiteral712752238;
extern String_t* _stringLiteral792871693;
extern String_t* _stringLiteral95344243;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2595523894_TisU3CGetEntityAsyncU3Ed__15_t1599719825_m2713669507_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m457539829_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m131199109_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m1633157453_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m2671839336_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetEntityAsyncU3Ed__15_t1599719825_m489318611_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m317986670_RuntimeMethod_var;
extern const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m1368673375_RuntimeMethod_var;
extern const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m4037153341_RuntimeMethod_var;
extern const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m3975404_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m3684469573_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m626081792_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m4248307107_RuntimeMethod_var;
extern const RuntimeMethod* DtdDefaultAttributeInfoToNodeDataComparer_Compare_m3502533735_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_ConfigureAwait_m2606086103_RuntimeMethod_var;
extern const RuntimeMethod* U3CGetEntityAsyncU3Ed__15_MoveNext_m3272980288_RuntimeMethod_var;
extern const RuntimeMethod* ValidationEventHandling_System_Xml_IValidationEventHandling_SendEvent_m1258189665_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_AutoComplete_m1937294162_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_HandleSpecialAttribute_m4129581347_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_InternalWriteEndElement_m1354321211_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_PushNamespace_m1850895031_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_ValidateName_m909992142_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_VerifyPrefixXml_m3875935888_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteCData_m644505252_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteChars_m3320946362_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteComment_m3551275356_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteDocType_m3875009899_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteEndAttribute_m380495009_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteEntityRef_m586114214_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteProcessingInstruction_m1814082884_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteStartAttribute_m796971626_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteStartElement_m362096410_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteString_m406191177_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteWhitespace_m1664061271_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_set_Namespaces_m457395416_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_set_QuoteChar_m136892219_RuntimeMethod_var;
extern const RuntimeMethod* XmlUrlResolver_GetEntity_m2245402732_RuntimeMethod_var;
extern const RuntimeMethod* XmlWhitespace__ctor_m949230574_RuntimeMethod_var;
extern const RuntimeMethod* XmlWhitespace_set_Value_m1380309567_RuntimeMethod_var;
extern const RuntimeMethod* XmlWriter_WriteAttributes_m2606792557_RuntimeMethod_var;
extern const RuntimeMethod* XmlWriter_WriteNode_m263666930_RuntimeMethod_var;
extern const RuntimeType* RuntimeObject_0_0_0_var;
extern const RuntimeType* Stream_t1273022909_0_0_0_var;
extern const uint32_t DtdDefaultAttributeInfoToNodeDataComparer_Compare_m3502533735_MetadataUsageId;
extern const uint32_t DtdDefaultAttributeInfoToNodeDataComparer__cctor_m1980840547_MetadataUsageId;
extern const uint32_t DtdDefaultAttributeInfoToNodeDataComparer_get_Instance_m836403038_MetadataUsageId;
extern const uint32_t NoNamespaceManager_LookupNamespace_m232290611_MetadataUsageId;
extern const uint32_t NoNamespaceManager_get_DefaultNamespace_m3470153446_MetadataUsageId;
extern const uint32_t NodeData_ClearName_m3208556405_MetadataUsageId;
extern const uint32_t NodeData_Clear_m38823411_MetadataUsageId;
extern const uint32_t NodeData_CreateNameWPrefix_m2233675805_MetadataUsageId;
extern const uint32_t NodeData_SetNamedNode_m2279543916_MetadataUsageId;
extern const uint32_t NodeData_SetNamedNode_m2353585377_MetadataUsageId;
extern const uint32_t NodeData_System_IComparable_CompareTo_m2862513728_MetadataUsageId;
extern const uint32_t NodeData_get_None_m3057106844_MetadataUsageId;
extern const uint32_t ParsingState_Clear_m828353238_MetadataUsageId;
extern const uint32_t TagInfo_Init_m2043286854_MetadataUsageId;
extern const uint32_t U3CGetEntityAsyncU3Ed__15_MoveNext_m3272980288_MetadataUsageId;
extern const uint32_t U3CGetEntityAsyncU3Ed__15_SetStateMachine_m2134769911_MetadataUsageId;
extern const uint32_t ValidationEventHandling_System_Xml_IValidationEventHandling_SendEvent_m1258189665_MetadataUsageId;
extern const uint32_t XmlContext__ctor_m2990086058_MetadataUsageId;
extern const uint32_t XmlTextWriter_AddNamespace_m2720473980_MetadataUsageId;
extern const uint32_t XmlTextWriter_AddToNamespaceHashtable_m1294370216_MetadataUsageId;
extern const uint32_t XmlTextWriter_AutoComplete_m1937294162_MetadataUsageId;
extern const uint32_t XmlTextWriter_Close_m3579947138_MetadataUsageId;
extern const uint32_t XmlTextWriter_GeneratePrefix_m3218539683_MetadataUsageId;
extern const uint32_t XmlTextWriter_HandleSpecialAttribute_m4129581347_MetadataUsageId;
extern const uint32_t XmlTextWriter_InternalWriteEndElement_m1354321211_MetadataUsageId;
extern const uint32_t XmlTextWriter_InternalWriteProcessingInstruction_m2337169049_MetadataUsageId;
extern const uint32_t XmlTextWriter_LookupNamespaceInCurrentScope_m855670366_MetadataUsageId;
extern const uint32_t XmlTextWriter_LookupNamespace_m3389725513_MetadataUsageId;
extern const uint32_t XmlTextWriter_PopNamespaces_m3917735882_MetadataUsageId;
extern const uint32_t XmlTextWriter_PushNamespace_m1850895031_MetadataUsageId;
extern const uint32_t XmlTextWriter_PushStack_m2287986788_MetadataUsageId;
extern const uint32_t XmlTextWriter_ValidateName_m909992142_MetadataUsageId;
extern const uint32_t XmlTextWriter_VerifyPrefixXml_m3875935888_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteCData_m644505252_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteChars_m3320946362_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteComment_m3551275356_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteDocType_m3875009899_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteEndAttribute_m380495009_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteEndStartTag_m844906772_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteEntityRef_m586114214_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteProcessingInstruction_m1814082884_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteStartAttribute_m796971626_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteStartElement_m362096410_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteString_m406191177_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteWhitespace_m1664061271_MetadataUsageId;
extern const uint32_t XmlTextWriter__cctor_m1817862492_MetadataUsageId;
extern const uint32_t XmlTextWriter__ctor_m1436555789_MetadataUsageId;
extern const uint32_t XmlTextWriter__ctor_m1850551870_MetadataUsageId;
extern const uint32_t XmlTextWriter_set_Namespaces_m457395416_MetadataUsageId;
extern const uint32_t XmlTextWriter_set_QuoteChar_m136892219_MetadataUsageId;
extern const uint32_t XmlUnspecifiedAttribute_CloneNode_m1424207050_MetadataUsageId;
extern const uint32_t XmlUrlResolver_GetEntityAsync_m3433676114_MetadataUsageId;
extern const uint32_t XmlUrlResolver_GetEntity_m2245402732_MetadataUsageId;
extern const uint32_t XmlUrlResolver_get_DownloadManager_m3478324606_MetadataUsageId;
extern const uint32_t XmlValidatingReaderImpl_GetResolver_m1302585018_MetadataUsageId;
extern const uint32_t XmlValidatingReaderImpl_LookupPrefix_m3915215833_MetadataUsageId;
extern const uint32_t XmlValidatingReaderImpl_ParseDtdFromParserContext_m1435797303_MetadataUsageId;
extern const uint32_t XmlValidatingReaderImpl_SetupValidation_m3368487000_MetadataUsageId;
extern const uint32_t XmlValidatingReaderImpl_get_LineNumber_m4241875698_MetadataUsageId;
extern const uint32_t XmlValidatingReaderImpl_get_LinePosition_m4261359789_MetadataUsageId;
extern const uint32_t XmlValidatingReaderImpl_get_Settings_m4287834649_MetadataUsageId;
extern const uint32_t XmlWhitespace__ctor_m949230574_MetadataUsageId;
extern const uint32_t XmlWhitespace_set_Value_m1380309567_MetadataUsageId;
extern const uint32_t XmlWriter_WriteAttributes_m2606792557_MetadataUsageId;
extern const uint32_t XmlWriter_WriteNode_m263666930_MetadataUsageId;
struct CultureData_t1899656083_marshaled_com;
struct CultureData_t1899656083_marshaled_pinvoke;
struct CultureInfo_t4157843068_marshaled_com;
struct CultureInfo_t4157843068_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;
struct DelegateU5BU5D_t1703627840;
struct ObjectU5BU5D_t2843939325;
struct StringU5BU5D_t1281789340;
struct NamespaceU5BU5D_t4259279085;
struct StateU5BU5D_t428546178;
struct TagInfoU5BU5D_t2840723532;


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
#ifndef DICTIONARY_2_T2736202052_H
#define DICTIONARY_2_T2736202052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct  Dictionary_2_t2736202052  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t4283450917* ___entries_1;
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
	KeyCollection_t2925877523 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t157279074 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___entries_1)); }
	inline EntryU5BU5D_t4283450917* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t4283450917** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t4283450917* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___keys_7)); }
	inline KeyCollection_t2925877523 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t2925877523 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t2925877523 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___values_8)); }
	inline ValueCollection_t157279074 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t157279074 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t157279074 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ____syncRoot_9)); }
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
#endif // DICTIONARY_2_T2736202052_H
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
#ifndef DECODER_T2204182725_H
#define DECODER_T2204182725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Decoder
struct  Decoder_t2204182725  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::m_fallback
	DecoderFallback_t3123823036 * ___m_fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::m_fallbackBuffer
	DecoderFallbackBuffer_t2402303981 * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t2204182725, ___m_fallback_0)); }
	inline DecoderFallback_t3123823036 * get_m_fallback_0() const { return ___m_fallback_0; }
	inline DecoderFallback_t3123823036 ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(DecoderFallback_t3123823036 * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_fallback_0), value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Decoder_t2204182725, ___m_fallbackBuffer_1)); }
	inline DecoderFallbackBuffer_t2402303981 * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline DecoderFallbackBuffer_t2402303981 ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(DecoderFallbackBuffer_t2402303981 * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_fallbackBuffer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T2204182725_H
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
#ifndef BASE64ENCODER_T3938083961_H
#define BASE64ENCODER_T3938083961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Base64Encoder
struct  Base64Encoder_t3938083961  : public RuntimeObject
{
public:
	// System.Byte[] System.Xml.Base64Encoder::leftOverBytes
	ByteU5BU5D_t4116647657* ___leftOverBytes_0;
	// System.Int32 System.Xml.Base64Encoder::leftOverBytesCount
	int32_t ___leftOverBytesCount_1;
	// System.Char[] System.Xml.Base64Encoder::charsLine
	CharU5BU5D_t3528271667* ___charsLine_2;

public:
	inline static int32_t get_offset_of_leftOverBytes_0() { return static_cast<int32_t>(offsetof(Base64Encoder_t3938083961, ___leftOverBytes_0)); }
	inline ByteU5BU5D_t4116647657* get_leftOverBytes_0() const { return ___leftOverBytes_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_leftOverBytes_0() { return &___leftOverBytes_0; }
	inline void set_leftOverBytes_0(ByteU5BU5D_t4116647657* value)
	{
		___leftOverBytes_0 = value;
		Il2CppCodeGenWriteBarrier((&___leftOverBytes_0), value);
	}

	inline static int32_t get_offset_of_leftOverBytesCount_1() { return static_cast<int32_t>(offsetof(Base64Encoder_t3938083961, ___leftOverBytesCount_1)); }
	inline int32_t get_leftOverBytesCount_1() const { return ___leftOverBytesCount_1; }
	inline int32_t* get_address_of_leftOverBytesCount_1() { return &___leftOverBytesCount_1; }
	inline void set_leftOverBytesCount_1(int32_t value)
	{
		___leftOverBytesCount_1 = value;
	}

	inline static int32_t get_offset_of_charsLine_2() { return static_cast<int32_t>(offsetof(Base64Encoder_t3938083961, ___charsLine_2)); }
	inline CharU5BU5D_t3528271667* get_charsLine_2() const { return ___charsLine_2; }
	inline CharU5BU5D_t3528271667** get_address_of_charsLine_2() { return &___charsLine_2; }
	inline void set_charsLine_2(CharU5BU5D_t3528271667* value)
	{
		___charsLine_2 = value;
		Il2CppCodeGenWriteBarrier((&___charsLine_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASE64ENCODER_T3938083961_H
#ifndef BASEVALIDATOR_T868759770_H
#define BASEVALIDATOR_T868759770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.BaseValidator
struct  BaseValidator_t868759770  : public RuntimeObject
{
public:
	// System.Xml.Schema.XmlSchemaCollection System.Xml.Schema.BaseValidator::schemaCollection
	XmlSchemaCollection_t3610399789 * ___schemaCollection_0;
	// System.Xml.IValidationEventHandling System.Xml.Schema.BaseValidator::eventHandling
	RuntimeObject* ___eventHandling_1;
	// System.Xml.XmlNameTable System.Xml.Schema.BaseValidator::nameTable
	XmlNameTable_t71772148 * ___nameTable_2;
	// System.Xml.Schema.SchemaNames System.Xml.Schema.BaseValidator::schemaNames
	SchemaNames_t661607975 * ___schemaNames_3;
	// System.Xml.PositionInfo System.Xml.Schema.BaseValidator::positionInfo
	PositionInfo_t2441432568 * ___positionInfo_4;
	// System.Xml.XmlResolver System.Xml.Schema.BaseValidator::xmlResolver
	XmlResolver_t626023767 * ___xmlResolver_5;
	// System.Uri System.Xml.Schema.BaseValidator::baseUri
	Uri_t100236324 * ___baseUri_6;
	// System.Xml.Schema.SchemaInfo System.Xml.Schema.BaseValidator::schemaInfo
	SchemaInfo_t3347508623 * ___schemaInfo_7;
	// System.Xml.XmlValidatingReaderImpl System.Xml.Schema.BaseValidator::reader
	XmlValidatingReaderImpl_t1817762384 * ___reader_8;
	// System.Xml.XmlQualifiedName System.Xml.Schema.BaseValidator::elementName
	XmlQualifiedName_t2760654312 * ___elementName_9;
	// System.Xml.Schema.ValidationState System.Xml.Schema.BaseValidator::context
	ValidationState_t603008718 * ___context_10;
	// System.Text.StringBuilder System.Xml.Schema.BaseValidator::textValue
	StringBuilder_t * ___textValue_11;
	// System.String System.Xml.Schema.BaseValidator::textString
	String_t* ___textString_12;
	// System.Boolean System.Xml.Schema.BaseValidator::hasSibling
	bool ___hasSibling_13;
	// System.Boolean System.Xml.Schema.BaseValidator::checkDatatype
	bool ___checkDatatype_14;

public:
	inline static int32_t get_offset_of_schemaCollection_0() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___schemaCollection_0)); }
	inline XmlSchemaCollection_t3610399789 * get_schemaCollection_0() const { return ___schemaCollection_0; }
	inline XmlSchemaCollection_t3610399789 ** get_address_of_schemaCollection_0() { return &___schemaCollection_0; }
	inline void set_schemaCollection_0(XmlSchemaCollection_t3610399789 * value)
	{
		___schemaCollection_0 = value;
		Il2CppCodeGenWriteBarrier((&___schemaCollection_0), value);
	}

	inline static int32_t get_offset_of_eventHandling_1() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___eventHandling_1)); }
	inline RuntimeObject* get_eventHandling_1() const { return ___eventHandling_1; }
	inline RuntimeObject** get_address_of_eventHandling_1() { return &___eventHandling_1; }
	inline void set_eventHandling_1(RuntimeObject* value)
	{
		___eventHandling_1 = value;
		Il2CppCodeGenWriteBarrier((&___eventHandling_1), value);
	}

	inline static int32_t get_offset_of_nameTable_2() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___nameTable_2)); }
	inline XmlNameTable_t71772148 * get_nameTable_2() const { return ___nameTable_2; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_2() { return &___nameTable_2; }
	inline void set_nameTable_2(XmlNameTable_t71772148 * value)
	{
		___nameTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_2), value);
	}

	inline static int32_t get_offset_of_schemaNames_3() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___schemaNames_3)); }
	inline SchemaNames_t661607975 * get_schemaNames_3() const { return ___schemaNames_3; }
	inline SchemaNames_t661607975 ** get_address_of_schemaNames_3() { return &___schemaNames_3; }
	inline void set_schemaNames_3(SchemaNames_t661607975 * value)
	{
		___schemaNames_3 = value;
		Il2CppCodeGenWriteBarrier((&___schemaNames_3), value);
	}

	inline static int32_t get_offset_of_positionInfo_4() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___positionInfo_4)); }
	inline PositionInfo_t2441432568 * get_positionInfo_4() const { return ___positionInfo_4; }
	inline PositionInfo_t2441432568 ** get_address_of_positionInfo_4() { return &___positionInfo_4; }
	inline void set_positionInfo_4(PositionInfo_t2441432568 * value)
	{
		___positionInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&___positionInfo_4), value);
	}

	inline static int32_t get_offset_of_xmlResolver_5() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___xmlResolver_5)); }
	inline XmlResolver_t626023767 * get_xmlResolver_5() const { return ___xmlResolver_5; }
	inline XmlResolver_t626023767 ** get_address_of_xmlResolver_5() { return &___xmlResolver_5; }
	inline void set_xmlResolver_5(XmlResolver_t626023767 * value)
	{
		___xmlResolver_5 = value;
		Il2CppCodeGenWriteBarrier((&___xmlResolver_5), value);
	}

	inline static int32_t get_offset_of_baseUri_6() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___baseUri_6)); }
	inline Uri_t100236324 * get_baseUri_6() const { return ___baseUri_6; }
	inline Uri_t100236324 ** get_address_of_baseUri_6() { return &___baseUri_6; }
	inline void set_baseUri_6(Uri_t100236324 * value)
	{
		___baseUri_6 = value;
		Il2CppCodeGenWriteBarrier((&___baseUri_6), value);
	}

	inline static int32_t get_offset_of_schemaInfo_7() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___schemaInfo_7)); }
	inline SchemaInfo_t3347508623 * get_schemaInfo_7() const { return ___schemaInfo_7; }
	inline SchemaInfo_t3347508623 ** get_address_of_schemaInfo_7() { return &___schemaInfo_7; }
	inline void set_schemaInfo_7(SchemaInfo_t3347508623 * value)
	{
		___schemaInfo_7 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_7), value);
	}

	inline static int32_t get_offset_of_reader_8() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___reader_8)); }
	inline XmlValidatingReaderImpl_t1817762384 * get_reader_8() const { return ___reader_8; }
	inline XmlValidatingReaderImpl_t1817762384 ** get_address_of_reader_8() { return &___reader_8; }
	inline void set_reader_8(XmlValidatingReaderImpl_t1817762384 * value)
	{
		___reader_8 = value;
		Il2CppCodeGenWriteBarrier((&___reader_8), value);
	}

	inline static int32_t get_offset_of_elementName_9() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___elementName_9)); }
	inline XmlQualifiedName_t2760654312 * get_elementName_9() const { return ___elementName_9; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_elementName_9() { return &___elementName_9; }
	inline void set_elementName_9(XmlQualifiedName_t2760654312 * value)
	{
		___elementName_9 = value;
		Il2CppCodeGenWriteBarrier((&___elementName_9), value);
	}

	inline static int32_t get_offset_of_context_10() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___context_10)); }
	inline ValidationState_t603008718 * get_context_10() const { return ___context_10; }
	inline ValidationState_t603008718 ** get_address_of_context_10() { return &___context_10; }
	inline void set_context_10(ValidationState_t603008718 * value)
	{
		___context_10 = value;
		Il2CppCodeGenWriteBarrier((&___context_10), value);
	}

	inline static int32_t get_offset_of_textValue_11() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___textValue_11)); }
	inline StringBuilder_t * get_textValue_11() const { return ___textValue_11; }
	inline StringBuilder_t ** get_address_of_textValue_11() { return &___textValue_11; }
	inline void set_textValue_11(StringBuilder_t * value)
	{
		___textValue_11 = value;
		Il2CppCodeGenWriteBarrier((&___textValue_11), value);
	}

	inline static int32_t get_offset_of_textString_12() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___textString_12)); }
	inline String_t* get_textString_12() const { return ___textString_12; }
	inline String_t** get_address_of_textString_12() { return &___textString_12; }
	inline void set_textString_12(String_t* value)
	{
		___textString_12 = value;
		Il2CppCodeGenWriteBarrier((&___textString_12), value);
	}

	inline static int32_t get_offset_of_hasSibling_13() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___hasSibling_13)); }
	inline bool get_hasSibling_13() const { return ___hasSibling_13; }
	inline bool* get_address_of_hasSibling_13() { return &___hasSibling_13; }
	inline void set_hasSibling_13(bool value)
	{
		___hasSibling_13 = value;
	}

	inline static int32_t get_offset_of_checkDatatype_14() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___checkDatatype_14)); }
	inline bool get_checkDatatype_14() const { return ___checkDatatype_14; }
	inline bool* get_address_of_checkDatatype_14() { return &___checkDatatype_14; }
	inline void set_checkDatatype_14(bool value)
	{
		___checkDatatype_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEVALIDATOR_T868759770_H
#ifndef XMLSCHEMACOLLECTION_T3610399789_H
#define XMLSCHEMACOLLECTION_T3610399789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaCollection
struct  XmlSchemaCollection_t3610399789  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Xml.Schema.XmlSchemaCollection::collection
	Hashtable_t1853889766 * ___collection_0;
	// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaCollection::nameTable
	XmlNameTable_t71772148 * ___nameTable_1;
	// System.Xml.Schema.SchemaNames System.Xml.Schema.XmlSchemaCollection::schemaNames
	SchemaNames_t661607975 * ___schemaNames_2;
	// System.Threading.ReaderWriterLock System.Xml.Schema.XmlSchemaCollection::wLock
	ReaderWriterLock_t367846299 * ___wLock_3;
	// System.Int32 System.Xml.Schema.XmlSchemaCollection::timeout
	int32_t ___timeout_4;
	// System.Boolean System.Xml.Schema.XmlSchemaCollection::isThreadSafe
	bool ___isThreadSafe_5;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaCollection::validationEventHandler
	ValidationEventHandler_t791314227 * ___validationEventHandler_6;
	// System.Xml.XmlResolver System.Xml.Schema.XmlSchemaCollection::xmlResolver
	XmlResolver_t626023767 * ___xmlResolver_7;

public:
	inline static int32_t get_offset_of_collection_0() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___collection_0)); }
	inline Hashtable_t1853889766 * get_collection_0() const { return ___collection_0; }
	inline Hashtable_t1853889766 ** get_address_of_collection_0() { return &___collection_0; }
	inline void set_collection_0(Hashtable_t1853889766 * value)
	{
		___collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___collection_0), value);
	}

	inline static int32_t get_offset_of_nameTable_1() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___nameTable_1)); }
	inline XmlNameTable_t71772148 * get_nameTable_1() const { return ___nameTable_1; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_1() { return &___nameTable_1; }
	inline void set_nameTable_1(XmlNameTable_t71772148 * value)
	{
		___nameTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_1), value);
	}

	inline static int32_t get_offset_of_schemaNames_2() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___schemaNames_2)); }
	inline SchemaNames_t661607975 * get_schemaNames_2() const { return ___schemaNames_2; }
	inline SchemaNames_t661607975 ** get_address_of_schemaNames_2() { return &___schemaNames_2; }
	inline void set_schemaNames_2(SchemaNames_t661607975 * value)
	{
		___schemaNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___schemaNames_2), value);
	}

	inline static int32_t get_offset_of_wLock_3() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___wLock_3)); }
	inline ReaderWriterLock_t367846299 * get_wLock_3() const { return ___wLock_3; }
	inline ReaderWriterLock_t367846299 ** get_address_of_wLock_3() { return &___wLock_3; }
	inline void set_wLock_3(ReaderWriterLock_t367846299 * value)
	{
		___wLock_3 = value;
		Il2CppCodeGenWriteBarrier((&___wLock_3), value);
	}

	inline static int32_t get_offset_of_timeout_4() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___timeout_4)); }
	inline int32_t get_timeout_4() const { return ___timeout_4; }
	inline int32_t* get_address_of_timeout_4() { return &___timeout_4; }
	inline void set_timeout_4(int32_t value)
	{
		___timeout_4 = value;
	}

	inline static int32_t get_offset_of_isThreadSafe_5() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___isThreadSafe_5)); }
	inline bool get_isThreadSafe_5() const { return ___isThreadSafe_5; }
	inline bool* get_address_of_isThreadSafe_5() { return &___isThreadSafe_5; }
	inline void set_isThreadSafe_5(bool value)
	{
		___isThreadSafe_5 = value;
	}

	inline static int32_t get_offset_of_validationEventHandler_6() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___validationEventHandler_6)); }
	inline ValidationEventHandler_t791314227 * get_validationEventHandler_6() const { return ___validationEventHandler_6; }
	inline ValidationEventHandler_t791314227 ** get_address_of_validationEventHandler_6() { return &___validationEventHandler_6; }
	inline void set_validationEventHandler_6(ValidationEventHandler_t791314227 * value)
	{
		___validationEventHandler_6 = value;
		Il2CppCodeGenWriteBarrier((&___validationEventHandler_6), value);
	}

	inline static int32_t get_offset_of_xmlResolver_7() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___xmlResolver_7)); }
	inline XmlResolver_t626023767 * get_xmlResolver_7() const { return ___xmlResolver_7; }
	inline XmlResolver_t626023767 ** get_address_of_xmlResolver_7() { return &___xmlResolver_7; }
	inline void set_xmlResolver_7(XmlResolver_t626023767 * value)
	{
		___xmlResolver_7 = value;
		Il2CppCodeGenWriteBarrier((&___xmlResolver_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMACOLLECTION_T3610399789_H
#ifndef SECURESTRINGHASHER_T95812985_H
#define SECURESTRINGHASHER_T95812985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.SecureStringHasher
struct  SecureStringHasher_t95812985  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.SecureStringHasher::hashCodeRandomizer
	int32_t ___hashCodeRandomizer_1;

public:
	inline static int32_t get_offset_of_hashCodeRandomizer_1() { return static_cast<int32_t>(offsetof(SecureStringHasher_t95812985, ___hashCodeRandomizer_1)); }
	inline int32_t get_hashCodeRandomizer_1() const { return ___hashCodeRandomizer_1; }
	inline int32_t* get_address_of_hashCodeRandomizer_1() { return &___hashCodeRandomizer_1; }
	inline void set_hashCodeRandomizer_1(int32_t value)
	{
		___hashCodeRandomizer_1 = value;
	}
};

struct SecureStringHasher_t95812985_StaticFields
{
public:
	// System.Xml.SecureStringHasher/HashCodeOfStringDelegate System.Xml.SecureStringHasher::hashCodeDelegate
	HashCodeOfStringDelegate_t1614268366 * ___hashCodeDelegate_0;

public:
	inline static int32_t get_offset_of_hashCodeDelegate_0() { return static_cast<int32_t>(offsetof(SecureStringHasher_t95812985_StaticFields, ___hashCodeDelegate_0)); }
	inline HashCodeOfStringDelegate_t1614268366 * get_hashCodeDelegate_0() const { return ___hashCodeDelegate_0; }
	inline HashCodeOfStringDelegate_t1614268366 ** get_address_of_hashCodeDelegate_0() { return &___hashCodeDelegate_0; }
	inline void set_hashCodeDelegate_0(HashCodeOfStringDelegate_t1614268366 * value)
	{
		___hashCodeDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashCodeDelegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURESTRINGHASHER_T95812985_H
#ifndef XMLDOWNLOADMANAGER_T2540579765_H
#define XMLDOWNLOADMANAGER_T2540579765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDownloadManager
struct  XmlDownloadManager_t2540579765  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Xml.XmlDownloadManager::connections
	Hashtable_t1853889766 * ___connections_0;

public:
	inline static int32_t get_offset_of_connections_0() { return static_cast<int32_t>(offsetof(XmlDownloadManager_t2540579765, ___connections_0)); }
	inline Hashtable_t1853889766 * get_connections_0() const { return ___connections_0; }
	inline Hashtable_t1853889766 ** get_address_of_connections_0() { return &___connections_0; }
	inline void set_connections_0(Hashtable_t1853889766 * value)
	{
		___connections_0 = value;
		Il2CppCodeGenWriteBarrier((&___connections_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDOWNLOADMANAGER_T2540579765_H
#ifndef XMLNAMETABLE_T71772148_H
#define XMLNAMETABLE_T71772148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNameTable
struct  XmlNameTable_t71772148  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNAMETABLE_T71772148_H
#ifndef XMLNAMESPACEMANAGER_T418790500_H
#define XMLNAMESPACEMANAGER_T418790500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNamespaceManager
struct  XmlNamespaceManager_t418790500  : public RuntimeObject
{
public:
	// System.Xml.XmlNamespaceManager/NamespaceDeclaration[] System.Xml.XmlNamespaceManager::nsdecls
	NamespaceDeclarationU5BU5D_t3609802718* ___nsdecls_0;
	// System.Int32 System.Xml.XmlNamespaceManager::lastDecl
	int32_t ___lastDecl_1;
	// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::nameTable
	XmlNameTable_t71772148 * ___nameTable_2;
	// System.Int32 System.Xml.XmlNamespaceManager::scopeId
	int32_t ___scopeId_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNamespaceManager::hashTable
	Dictionary_2_t2736202052 * ___hashTable_4;
	// System.Boolean System.Xml.XmlNamespaceManager::useHashtable
	bool ___useHashtable_5;
	// System.String System.Xml.XmlNamespaceManager::xml
	String_t* ___xml_6;
	// System.String System.Xml.XmlNamespaceManager::xmlNs
	String_t* ___xmlNs_7;

public:
	inline static int32_t get_offset_of_nsdecls_0() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___nsdecls_0)); }
	inline NamespaceDeclarationU5BU5D_t3609802718* get_nsdecls_0() const { return ___nsdecls_0; }
	inline NamespaceDeclarationU5BU5D_t3609802718** get_address_of_nsdecls_0() { return &___nsdecls_0; }
	inline void set_nsdecls_0(NamespaceDeclarationU5BU5D_t3609802718* value)
	{
		___nsdecls_0 = value;
		Il2CppCodeGenWriteBarrier((&___nsdecls_0), value);
	}

	inline static int32_t get_offset_of_lastDecl_1() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___lastDecl_1)); }
	inline int32_t get_lastDecl_1() const { return ___lastDecl_1; }
	inline int32_t* get_address_of_lastDecl_1() { return &___lastDecl_1; }
	inline void set_lastDecl_1(int32_t value)
	{
		___lastDecl_1 = value;
	}

	inline static int32_t get_offset_of_nameTable_2() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___nameTable_2)); }
	inline XmlNameTable_t71772148 * get_nameTable_2() const { return ___nameTable_2; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_2() { return &___nameTable_2; }
	inline void set_nameTable_2(XmlNameTable_t71772148 * value)
	{
		___nameTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_2), value);
	}

	inline static int32_t get_offset_of_scopeId_3() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___scopeId_3)); }
	inline int32_t get_scopeId_3() const { return ___scopeId_3; }
	inline int32_t* get_address_of_scopeId_3() { return &___scopeId_3; }
	inline void set_scopeId_3(int32_t value)
	{
		___scopeId_3 = value;
	}

	inline static int32_t get_offset_of_hashTable_4() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___hashTable_4)); }
	inline Dictionary_2_t2736202052 * get_hashTable_4() const { return ___hashTable_4; }
	inline Dictionary_2_t2736202052 ** get_address_of_hashTable_4() { return &___hashTable_4; }
	inline void set_hashTable_4(Dictionary_2_t2736202052 * value)
	{
		___hashTable_4 = value;
		Il2CppCodeGenWriteBarrier((&___hashTable_4), value);
	}

	inline static int32_t get_offset_of_useHashtable_5() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___useHashtable_5)); }
	inline bool get_useHashtable_5() const { return ___useHashtable_5; }
	inline bool* get_address_of_useHashtable_5() { return &___useHashtable_5; }
	inline void set_useHashtable_5(bool value)
	{
		___useHashtable_5 = value;
	}

	inline static int32_t get_offset_of_xml_6() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___xml_6)); }
	inline String_t* get_xml_6() const { return ___xml_6; }
	inline String_t** get_address_of_xml_6() { return &___xml_6; }
	inline void set_xml_6(String_t* value)
	{
		___xml_6 = value;
		Il2CppCodeGenWriteBarrier((&___xml_6), value);
	}

	inline static int32_t get_offset_of_xmlNs_7() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___xmlNs_7)); }
	inline String_t* get_xmlNs_7() const { return ___xmlNs_7; }
	inline String_t** get_address_of_xmlNs_7() { return &___xmlNs_7; }
	inline void set_xmlNs_7(String_t* value)
	{
		___xmlNs_7 = value;
		Il2CppCodeGenWriteBarrier((&___xmlNs_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNAMESPACEMANAGER_T418790500_H
#ifndef XMLNODE_T3767805227_H
#define XMLNODE_T3767805227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNode
struct  XmlNode_t3767805227  : public RuntimeObject
{
public:
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t3767805227 * ___parentNode_0;

public:
	inline static int32_t get_offset_of_parentNode_0() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___parentNode_0)); }
	inline XmlNode_t3767805227 * get_parentNode_0() const { return ___parentNode_0; }
	inline XmlNode_t3767805227 ** get_address_of_parentNode_0() { return &___parentNode_0; }
	inline void set_parentNode_0(XmlNode_t3767805227 * value)
	{
		___parentNode_0 = value;
		Il2CppCodeGenWriteBarrier((&___parentNode_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODE_T3767805227_H
#ifndef XMLREADER_T3121518892_H
#define XMLREADER_T3121518892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReader
struct  XmlReader_t3121518892  : public RuntimeObject
{
public:

public:
};

struct XmlReader_t3121518892_StaticFields
{
public:
	// System.UInt32 System.Xml.XmlReader::IsTextualNodeBitmap
	uint32_t ___IsTextualNodeBitmap_0;
	// System.UInt32 System.Xml.XmlReader::CanReadContentAsBitmap
	uint32_t ___CanReadContentAsBitmap_1;
	// System.UInt32 System.Xml.XmlReader::HasValueBitmap
	uint32_t ___HasValueBitmap_2;

public:
	inline static int32_t get_offset_of_IsTextualNodeBitmap_0() { return static_cast<int32_t>(offsetof(XmlReader_t3121518892_StaticFields, ___IsTextualNodeBitmap_0)); }
	inline uint32_t get_IsTextualNodeBitmap_0() const { return ___IsTextualNodeBitmap_0; }
	inline uint32_t* get_address_of_IsTextualNodeBitmap_0() { return &___IsTextualNodeBitmap_0; }
	inline void set_IsTextualNodeBitmap_0(uint32_t value)
	{
		___IsTextualNodeBitmap_0 = value;
	}

	inline static int32_t get_offset_of_CanReadContentAsBitmap_1() { return static_cast<int32_t>(offsetof(XmlReader_t3121518892_StaticFields, ___CanReadContentAsBitmap_1)); }
	inline uint32_t get_CanReadContentAsBitmap_1() const { return ___CanReadContentAsBitmap_1; }
	inline uint32_t* get_address_of_CanReadContentAsBitmap_1() { return &___CanReadContentAsBitmap_1; }
	inline void set_CanReadContentAsBitmap_1(uint32_t value)
	{
		___CanReadContentAsBitmap_1 = value;
	}

	inline static int32_t get_offset_of_HasValueBitmap_2() { return static_cast<int32_t>(offsetof(XmlReader_t3121518892_StaticFields, ___HasValueBitmap_2)); }
	inline uint32_t get_HasValueBitmap_2() const { return ___HasValueBitmap_2; }
	inline uint32_t* get_address_of_HasValueBitmap_2() { return &___HasValueBitmap_2; }
	inline void set_HasValueBitmap_2(uint32_t value)
	{
		___HasValueBitmap_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLREADER_T3121518892_H
#ifndef XMLRESOLVER_T626023767_H
#define XMLRESOLVER_T626023767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlResolver
struct  XmlResolver_t626023767  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLRESOLVER_T626023767_H
#ifndef DTDDEFAULTATTRIBUTEINFOTONODEDATACOMPARER_T1152788373_H
#define DTDDEFAULTATTRIBUTEINFOTONODEDATACOMPARER_T1152788373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReaderImpl/DtdDefaultAttributeInfoToNodeDataComparer
struct  DtdDefaultAttributeInfoToNodeDataComparer_t1152788373  : public RuntimeObject
{
public:

public:
};

struct DtdDefaultAttributeInfoToNodeDataComparer_t1152788373_StaticFields
{
public:
	// System.Collections.Generic.IComparer`1<System.Object> System.Xml.XmlTextReaderImpl/DtdDefaultAttributeInfoToNodeDataComparer::s_instance
	RuntimeObject* ___s_instance_0;

public:
	inline static int32_t get_offset_of_s_instance_0() { return static_cast<int32_t>(offsetof(DtdDefaultAttributeInfoToNodeDataComparer_t1152788373_StaticFields, ___s_instance_0)); }
	inline RuntimeObject* get_s_instance_0() const { return ___s_instance_0; }
	inline RuntimeObject** get_address_of_s_instance_0() { return &___s_instance_0; }
	inline void set_s_instance_0(RuntimeObject* value)
	{
		___s_instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDDEFAULTATTRIBUTEINFOTONODEDATACOMPARER_T1152788373_H
#ifndef DTDPARSERPROXY_T3101460057_H
#define DTDPARSERPROXY_T3101460057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReaderImpl/DtdParserProxy
struct  DtdParserProxy_t3101460057  : public RuntimeObject
{
public:
	// System.Xml.XmlTextReaderImpl System.Xml.XmlTextReaderImpl/DtdParserProxy::reader
	XmlTextReaderImpl_t178060594 * ___reader_0;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(DtdParserProxy_t3101460057, ___reader_0)); }
	inline XmlTextReaderImpl_t178060594 * get_reader_0() const { return ___reader_0; }
	inline XmlTextReaderImpl_t178060594 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(XmlTextReaderImpl_t178060594 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDPARSERPROXY_T3101460057_H
#ifndef VALIDATIONEVENTHANDLING_T3812646699_H
#define VALIDATIONEVENTHANDLING_T3812646699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlValidatingReaderImpl/ValidationEventHandling
struct  ValidationEventHandling_t3812646699  : public RuntimeObject
{
public:
	// System.Xml.XmlValidatingReaderImpl System.Xml.XmlValidatingReaderImpl/ValidationEventHandling::reader
	XmlValidatingReaderImpl_t1817762384 * ___reader_0;
	// System.Xml.Schema.ValidationEventHandler System.Xml.XmlValidatingReaderImpl/ValidationEventHandling::eventHandler
	ValidationEventHandler_t791314227 * ___eventHandler_1;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ValidationEventHandling_t3812646699, ___reader_0)); }
	inline XmlValidatingReaderImpl_t1817762384 * get_reader_0() const { return ___reader_0; }
	inline XmlValidatingReaderImpl_t1817762384 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(XmlValidatingReaderImpl_t1817762384 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_eventHandler_1() { return static_cast<int32_t>(offsetof(ValidationEventHandling_t3812646699, ___eventHandler_1)); }
	inline ValidationEventHandler_t791314227 * get_eventHandler_1() const { return ___eventHandler_1; }
	inline ValidationEventHandler_t791314227 ** get_address_of_eventHandler_1() { return &___eventHandler_1; }
	inline void set_eventHandler_1(ValidationEventHandler_t791314227 * value)
	{
		___eventHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___eventHandler_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATIONEVENTHANDLING_T3812646699_H
#ifndef XMLWRITER_T127905479_H
#define XMLWRITER_T127905479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWriter
struct  XmlWriter_t127905479  : public RuntimeObject
{
public:
	// System.Char[] System.Xml.XmlWriter::writeNodeBuffer
	CharU5BU5D_t3528271667* ___writeNodeBuffer_0;

public:
	inline static int32_t get_offset_of_writeNodeBuffer_0() { return static_cast<int32_t>(offsetof(XmlWriter_t127905479, ___writeNodeBuffer_0)); }
	inline CharU5BU5D_t3528271667* get_writeNodeBuffer_0() const { return ___writeNodeBuffer_0; }
	inline CharU5BU5D_t3528271667** get_address_of_writeNodeBuffer_0() { return &___writeNodeBuffer_0; }
	inline void set_writeNodeBuffer_0(CharU5BU5D_t3528271667* value)
	{
		___writeNodeBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___writeNodeBuffer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWRITER_T127905479_H
#ifndef __STATICARRAYINITTYPESIZEU3D112_T3318095804_H
#define __STATICARRAYINITTYPESIZEU3D112_T3318095804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112
struct  __StaticArrayInitTypeSizeU3D112_t3318095804 
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
		uint8_t __StaticArrayInitTypeSizeU3D112_t3318095804__padding[112];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D112_T3318095804_H
#ifndef __STATICARRAYINITTYPESIZEU3D12_T2710994318_H
#define __STATICARRAYINITTYPESIZEU3D12_T2710994318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct  __StaticArrayInitTypeSizeU3D12_t2710994318 
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
		uint8_t __StaticArrayInitTypeSizeU3D12_t2710994318__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D12_T2710994318_H
#ifndef __STATICARRAYINITTYPESIZEU3D144_T573424107_H
#define __STATICARRAYINITTYPESIZEU3D144_T573424107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144
struct  __StaticArrayInitTypeSizeU3D144_t573424107 
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
		uint8_t __StaticArrayInitTypeSizeU3D144_t573424107__padding[144];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D144_T573424107_H
#ifndef __STATICARRAYINITTYPESIZEU3D16_T385395490_H
#define __STATICARRAYINITTYPESIZEU3D16_T385395490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct  __StaticArrayInitTypeSizeU3D16_t385395490 
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
		uint8_t __StaticArrayInitTypeSizeU3D16_t385395490__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D16_T385395490_H
#ifndef __STATICARRAYINITTYPESIZEU3D20_T1548391512_H
#define __STATICARRAYINITTYPESIZEU3D20_T1548391512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct  __StaticArrayInitTypeSizeU3D20_t1548391512 
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
		uint8_t __StaticArrayInitTypeSizeU3D20_t1548391512__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D20_T1548391512_H
#ifndef __STATICARRAYINITTYPESIZEU3D24_T3517759980_H
#define __STATICARRAYINITTYPESIZEU3D24_T3517759980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct  __StaticArrayInitTypeSizeU3D24_t3517759980 
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
		uint8_t __StaticArrayInitTypeSizeU3D24_t3517759980__padding[24];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D24_T3517759980_H
#ifndef __STATICARRAYINITTYPESIZEU3D28_T1904621871_H
#define __STATICARRAYINITTYPESIZEU3D28_T1904621871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct  __StaticArrayInitTypeSizeU3D28_t1904621871 
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
		uint8_t __StaticArrayInitTypeSizeU3D28_t1904621871__padding[28];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D28_T1904621871_H
#ifndef __STATICARRAYINITTYPESIZEU3D32_T2711125390_H
#define __STATICARRAYINITTYPESIZEU3D32_T2711125390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct  __StaticArrayInitTypeSizeU3D32_t2711125390 
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
		uint8_t __StaticArrayInitTypeSizeU3D32_t2711125390__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D32_T2711125390_H
#ifndef __STATICARRAYINITTYPESIZEU3D36_T385526562_H
#define __STATICARRAYINITTYPESIZEU3D36_T385526562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
struct  __StaticArrayInitTypeSizeU3D36_t385526562 
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
		uint8_t __StaticArrayInitTypeSizeU3D36_t385526562__padding[36];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D36_T385526562_H
#ifndef __STATICARRAYINITTYPESIZEU3D40_T1547998296_H
#define __STATICARRAYINITTYPESIZEU3D40_T1547998296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct  __StaticArrayInitTypeSizeU3D40_t1547998296 
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
		uint8_t __StaticArrayInitTypeSizeU3D40_t1547998296__padding[40];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D40_T1547998296_H
#ifndef __STATICARRAYINITTYPESIZEU3D416_T4082573244_H
#define __STATICARRAYINITTYPESIZEU3D416_T4082573244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=416
struct  __StaticArrayInitTypeSizeU3D416_t4082573244 
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
		uint8_t __StaticArrayInitTypeSizeU3D416_t4082573244__padding[416];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D416_T4082573244_H
#ifndef __STATICARRAYINITTYPESIZEU3D44_T3517366764_H
#define __STATICARRAYINITTYPESIZEU3D44_T3517366764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct  __StaticArrayInitTypeSizeU3D44_t3517366764 
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
		uint8_t __StaticArrayInitTypeSizeU3D44_t3517366764__padding[44];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D44_T3517366764_H
#ifndef __STATICARRAYINITTYPESIZEU3D56_T385133346_H
#define __STATICARRAYINITTYPESIZEU3D56_T385133346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56
struct  __StaticArrayInitTypeSizeU3D56_t385133346 
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
		uint8_t __StaticArrayInitTypeSizeU3D56_t385133346__padding[56];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D56_T385133346_H
#ifndef __STATICARRAYINITTYPESIZEU3D6_T3217689075_H
#define __STATICARRAYINITTYPESIZEU3D6_T3217689075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
struct  __StaticArrayInitTypeSizeU3D6_t3217689075 
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
		uint8_t __StaticArrayInitTypeSizeU3D6_t3217689075__padding[6];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D6_T3217689075_H
#ifndef __STATICARRAYINITTYPESIZEU3D64_T3517497836_H
#define __STATICARRAYINITTYPESIZEU3D64_T3517497836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct  __StaticArrayInitTypeSizeU3D64_t3517497836 
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
		uint8_t __StaticArrayInitTypeSizeU3D64_t3517497836__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D64_T3517497836_H
#ifndef __STATICARRAYINITTYPESIZEU3D68_T1904359727_H
#define __STATICARRAYINITTYPESIZEU3D68_T1904359727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68
struct  __StaticArrayInitTypeSizeU3D68_t1904359727 
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
		uint8_t __StaticArrayInitTypeSizeU3D68_t1904359727__padding[68];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D68_T1904359727_H
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
#ifndef TEXTWRITER_T3478189236_H
#define TEXTWRITER_T3478189236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t3478189236  : public MarshalByRefObject_t2760389100
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t3528271667* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___CoreNewLine_9)); }
	inline CharU5BU5D_t3528271667* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t3528271667** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t3528271667* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_9), value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((&___InternalFormatProvider_10), value);
	}
};

struct TextWriter_t3478189236_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t3478189236 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_t3252573759 * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_t3252573759 * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_t3252573759 * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_t3252573759 * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_t3252573759 * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_t3252573759 * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_t3252573759 * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ___Null_1)); }
	inline TextWriter_t3478189236 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t3478189236 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t3478189236 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_t3252573759 * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_t3252573759 ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_t3252573759 * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&____WriteCharDelegate_2), value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_t3252573759 * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_t3252573759 ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_t3252573759 * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((&____WriteStringDelegate_3), value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_t3252573759 * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_t3252573759 ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_t3252573759 * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((&____WriteCharArrayRangeDelegate_4), value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_t3252573759 * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_t3252573759 ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_t3252573759 * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineCharDelegate_5), value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_t3252573759 * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_t3252573759 ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_t3252573759 * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineStringDelegate_6), value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_t3252573759 * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_t3252573759 ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_t3252573759 * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineCharArrayRangeDelegate_7), value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_t3252573759 * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_t3252573759 ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_t3252573759 * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((&____FlushDelegate_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T3478189236_H
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
#ifndef NULLABLE_1_T1819850047_H
#define NULLABLE_1_T1819850047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1819850047 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1819850047_H
#ifndef ASYNCMETHODBUILDERCORE_T2955600131_H
#define ASYNCMETHODBUILDERCORE_T2955600131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t2955600131 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t1264377477 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2955600131, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_0), value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2955600131, ___m_defaultContextAction_1)); }
	inline Action_t1264377477 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t1264377477 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t1264377477 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultContextAction_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2955600131_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2955600131_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
#endif // ASYNCMETHODBUILDERCORE_T2955600131_H
#ifndef CONFIGUREDTASKAWAITER_T2595523894_H
#define CONFIGUREDTASKAWAITER_T2595523894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream>
struct  ConfiguredTaskAwaiter_t2595523894 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t2678563084 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2595523894, ___m_task_0)); }
	inline Task_1_t2678563084 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t2678563084 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t2678563084 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2595523894, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGUREDTASKAWAITER_T2595523894_H
#ifndef CONFIGUREDTASKAWAITER_T107639853_H
#define CONFIGUREDTASKAWAITER_T107639853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>
struct  ConfiguredTaskAwaiter_t107639853 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t190679043 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t107639853, ___m_task_0)); }
	inline Task_1_t190679043 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t190679043 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t190679043 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t107639853, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGUREDTASKAWAITER_T107639853_H
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
#ifndef LINEINFO_T3266778363_H
#define LINEINFO_T3266778363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.LineInfo
struct  LineInfo_t3266778363 
{
public:
	// System.Int32 System.Xml.LineInfo::lineNo
	int32_t ___lineNo_0;
	// System.Int32 System.Xml.LineInfo::linePos
	int32_t ___linePos_1;

public:
	inline static int32_t get_offset_of_lineNo_0() { return static_cast<int32_t>(offsetof(LineInfo_t3266778363, ___lineNo_0)); }
	inline int32_t get_lineNo_0() const { return ___lineNo_0; }
	inline int32_t* get_address_of_lineNo_0() { return &___lineNo_0; }
	inline void set_lineNo_0(int32_t value)
	{
		___lineNo_0 = value;
	}

	inline static int32_t get_offset_of_linePos_1() { return static_cast<int32_t>(offsetof(LineInfo_t3266778363, ___linePos_1)); }
	inline int32_t get_linePos_1() const { return ___linePos_1; }
	inline int32_t* get_address_of_linePos_1() { return &___linePos_1; }
	inline void set_linePos_1(int32_t value)
	{
		___linePos_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINEINFO_T3266778363_H
#ifndef XMLATTRIBUTE_T1173852259_H
#define XMLATTRIBUTE_T1173852259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlAttribute
struct  XmlAttribute_t1173852259  : public XmlNode_t3767805227
{
public:
	// System.Xml.XmlName System.Xml.XmlAttribute::name
	XmlName_t4150142242 * ___name_1;
	// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::lastChild
	XmlLinkedNode_t1437094927 * ___lastChild_2;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(XmlAttribute_t1173852259, ___name_1)); }
	inline XmlName_t4150142242 * get_name_1() const { return ___name_1; }
	inline XmlName_t4150142242 ** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(XmlName_t4150142242 * value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_lastChild_2() { return static_cast<int32_t>(offsetof(XmlAttribute_t1173852259, ___lastChild_2)); }
	inline XmlLinkedNode_t1437094927 * get_lastChild_2() const { return ___lastChild_2; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_lastChild_2() { return &___lastChild_2; }
	inline void set_lastChild_2(XmlLinkedNode_t1437094927 * value)
	{
		___lastChild_2 = value;
		Il2CppCodeGenWriteBarrier((&___lastChild_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLATTRIBUTE_T1173852259_H
#ifndef XMLCHARTYPE_T2277243275_H
#define XMLCHARTYPE_T2277243275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlCharType
struct  XmlCharType_t2277243275 
{
public:
	// System.Byte[] System.Xml.XmlCharType::charProperties
	ByteU5BU5D_t4116647657* ___charProperties_2;

public:
	inline static int32_t get_offset_of_charProperties_2() { return static_cast<int32_t>(offsetof(XmlCharType_t2277243275, ___charProperties_2)); }
	inline ByteU5BU5D_t4116647657* get_charProperties_2() const { return ___charProperties_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_charProperties_2() { return &___charProperties_2; }
	inline void set_charProperties_2(ByteU5BU5D_t4116647657* value)
	{
		___charProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___charProperties_2), value);
	}
};

struct XmlCharType_t2277243275_StaticFields
{
public:
	// System.Object System.Xml.XmlCharType::s_Lock
	RuntimeObject * ___s_Lock_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.XmlCharType::s_CharProperties
	ByteU5BU5D_t4116647657* ___s_CharProperties_1;

public:
	inline static int32_t get_offset_of_s_Lock_0() { return static_cast<int32_t>(offsetof(XmlCharType_t2277243275_StaticFields, ___s_Lock_0)); }
	inline RuntimeObject * get_s_Lock_0() const { return ___s_Lock_0; }
	inline RuntimeObject ** get_address_of_s_Lock_0() { return &___s_Lock_0; }
	inline void set_s_Lock_0(RuntimeObject * value)
	{
		___s_Lock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Lock_0), value);
	}

	inline static int32_t get_offset_of_s_CharProperties_1() { return static_cast<int32_t>(offsetof(XmlCharType_t2277243275_StaticFields, ___s_CharProperties_1)); }
	inline ByteU5BU5D_t4116647657* get_s_CharProperties_1() const { return ___s_CharProperties_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_s_CharProperties_1() { return &___s_CharProperties_1; }
	inline void set_s_CharProperties_1(ByteU5BU5D_t4116647657* value)
	{
		___s_CharProperties_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_CharProperties_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.XmlCharType
struct XmlCharType_t2277243275_marshaled_pinvoke
{
	uint8_t* ___charProperties_2;
};
// Native definition for COM marshalling of System.Xml.XmlCharType
struct XmlCharType_t2277243275_marshaled_com
{
	uint8_t* ___charProperties_2;
};
#endif // XMLCHARTYPE_T2277243275_H
#ifndef XMLDOCUMENT_T2837193595_H
#define XMLDOCUMENT_T2837193595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDocument
struct  XmlDocument_t2837193595  : public XmlNode_t3767805227
{
public:
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t254178875 * ___implementation_1;
	// System.Xml.DomNameTable System.Xml.XmlDocument::domNameTable
	DomNameTable_t751058560 * ___domNameTable_2;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastChild
	XmlLinkedNode_t1437094927 * ___lastChild_3;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocument::entities
	XmlNamedNodeMap_t2821286253 * ___entities_4;
	// System.Collections.Hashtable System.Xml.XmlDocument::htElementIdMap
	Hashtable_t1853889766 * ___htElementIdMap_5;
	// System.Collections.Hashtable System.Xml.XmlDocument::htElementIDAttrDecl
	Hashtable_t1853889766 * ___htElementIDAttrDecl_6;
	// System.Xml.Schema.SchemaInfo System.Xml.XmlDocument::schemaInfo
	SchemaInfo_t3347508623 * ___schemaInfo_7;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlDocument::schemas
	XmlSchemaSet_t266093086 * ___schemas_8;
	// System.Boolean System.Xml.XmlDocument::reportValidity
	bool ___reportValidity_9;
	// System.Boolean System.Xml.XmlDocument::actualLoadingStatus
	bool ___actualLoadingStatus_10;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeInsertingDelegate
	XmlNodeChangedEventHandler_t1533444722 * ___onNodeInsertingDelegate_11;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeInsertedDelegate
	XmlNodeChangedEventHandler_t1533444722 * ___onNodeInsertedDelegate_12;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeRemovingDelegate
	XmlNodeChangedEventHandler_t1533444722 * ___onNodeRemovingDelegate_13;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeRemovedDelegate
	XmlNodeChangedEventHandler_t1533444722 * ___onNodeRemovedDelegate_14;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeChangingDelegate
	XmlNodeChangedEventHandler_t1533444722 * ___onNodeChangingDelegate_15;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeChangedDelegate
	XmlNodeChangedEventHandler_t1533444722 * ___onNodeChangedDelegate_16;
	// System.Boolean System.Xml.XmlDocument::fEntRefNodesPresent
	bool ___fEntRefNodesPresent_17;
	// System.Boolean System.Xml.XmlDocument::fCDataNodesPresent
	bool ___fCDataNodesPresent_18;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_19;
	// System.Boolean System.Xml.XmlDocument::isLoading
	bool ___isLoading_20;
	// System.String System.Xml.XmlDocument::strDocumentName
	String_t* ___strDocumentName_21;
	// System.String System.Xml.XmlDocument::strDocumentFragmentName
	String_t* ___strDocumentFragmentName_22;
	// System.String System.Xml.XmlDocument::strCommentName
	String_t* ___strCommentName_23;
	// System.String System.Xml.XmlDocument::strTextName
	String_t* ___strTextName_24;
	// System.String System.Xml.XmlDocument::strCDataSectionName
	String_t* ___strCDataSectionName_25;
	// System.String System.Xml.XmlDocument::strEntityName
	String_t* ___strEntityName_26;
	// System.String System.Xml.XmlDocument::strID
	String_t* ___strID_27;
	// System.String System.Xml.XmlDocument::strXmlns
	String_t* ___strXmlns_28;
	// System.String System.Xml.XmlDocument::strXml
	String_t* ___strXml_29;
	// System.String System.Xml.XmlDocument::strSpace
	String_t* ___strSpace_30;
	// System.String System.Xml.XmlDocument::strLang
	String_t* ___strLang_31;
	// System.String System.Xml.XmlDocument::strEmpty
	String_t* ___strEmpty_32;
	// System.String System.Xml.XmlDocument::strNonSignificantWhitespaceName
	String_t* ___strNonSignificantWhitespaceName_33;
	// System.String System.Xml.XmlDocument::strSignificantWhitespaceName
	String_t* ___strSignificantWhitespaceName_34;
	// System.String System.Xml.XmlDocument::strReservedXmlns
	String_t* ___strReservedXmlns_35;
	// System.String System.Xml.XmlDocument::strReservedXml
	String_t* ___strReservedXml_36;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_37;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_t626023767 * ___resolver_38;
	// System.Boolean System.Xml.XmlDocument::bSetResolver
	bool ___bSetResolver_39;
	// System.Object System.Xml.XmlDocument::objLock
	RuntimeObject * ___objLock_40;

public:
	inline static int32_t get_offset_of_implementation_1() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___implementation_1)); }
	inline XmlImplementation_t254178875 * get_implementation_1() const { return ___implementation_1; }
	inline XmlImplementation_t254178875 ** get_address_of_implementation_1() { return &___implementation_1; }
	inline void set_implementation_1(XmlImplementation_t254178875 * value)
	{
		___implementation_1 = value;
		Il2CppCodeGenWriteBarrier((&___implementation_1), value);
	}

	inline static int32_t get_offset_of_domNameTable_2() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___domNameTable_2)); }
	inline DomNameTable_t751058560 * get_domNameTable_2() const { return ___domNameTable_2; }
	inline DomNameTable_t751058560 ** get_address_of_domNameTable_2() { return &___domNameTable_2; }
	inline void set_domNameTable_2(DomNameTable_t751058560 * value)
	{
		___domNameTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___domNameTable_2), value);
	}

	inline static int32_t get_offset_of_lastChild_3() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___lastChild_3)); }
	inline XmlLinkedNode_t1437094927 * get_lastChild_3() const { return ___lastChild_3; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_lastChild_3() { return &___lastChild_3; }
	inline void set_lastChild_3(XmlLinkedNode_t1437094927 * value)
	{
		___lastChild_3 = value;
		Il2CppCodeGenWriteBarrier((&___lastChild_3), value);
	}

	inline static int32_t get_offset_of_entities_4() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___entities_4)); }
	inline XmlNamedNodeMap_t2821286253 * get_entities_4() const { return ___entities_4; }
	inline XmlNamedNodeMap_t2821286253 ** get_address_of_entities_4() { return &___entities_4; }
	inline void set_entities_4(XmlNamedNodeMap_t2821286253 * value)
	{
		___entities_4 = value;
		Il2CppCodeGenWriteBarrier((&___entities_4), value);
	}

	inline static int32_t get_offset_of_htElementIdMap_5() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___htElementIdMap_5)); }
	inline Hashtable_t1853889766 * get_htElementIdMap_5() const { return ___htElementIdMap_5; }
	inline Hashtable_t1853889766 ** get_address_of_htElementIdMap_5() { return &___htElementIdMap_5; }
	inline void set_htElementIdMap_5(Hashtable_t1853889766 * value)
	{
		___htElementIdMap_5 = value;
		Il2CppCodeGenWriteBarrier((&___htElementIdMap_5), value);
	}

	inline static int32_t get_offset_of_htElementIDAttrDecl_6() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___htElementIDAttrDecl_6)); }
	inline Hashtable_t1853889766 * get_htElementIDAttrDecl_6() const { return ___htElementIDAttrDecl_6; }
	inline Hashtable_t1853889766 ** get_address_of_htElementIDAttrDecl_6() { return &___htElementIDAttrDecl_6; }
	inline void set_htElementIDAttrDecl_6(Hashtable_t1853889766 * value)
	{
		___htElementIDAttrDecl_6 = value;
		Il2CppCodeGenWriteBarrier((&___htElementIDAttrDecl_6), value);
	}

	inline static int32_t get_offset_of_schemaInfo_7() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___schemaInfo_7)); }
	inline SchemaInfo_t3347508623 * get_schemaInfo_7() const { return ___schemaInfo_7; }
	inline SchemaInfo_t3347508623 ** get_address_of_schemaInfo_7() { return &___schemaInfo_7; }
	inline void set_schemaInfo_7(SchemaInfo_t3347508623 * value)
	{
		___schemaInfo_7 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_7), value);
	}

	inline static int32_t get_offset_of_schemas_8() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___schemas_8)); }
	inline XmlSchemaSet_t266093086 * get_schemas_8() const { return ___schemas_8; }
	inline XmlSchemaSet_t266093086 ** get_address_of_schemas_8() { return &___schemas_8; }
	inline void set_schemas_8(XmlSchemaSet_t266093086 * value)
	{
		___schemas_8 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_8), value);
	}

	inline static int32_t get_offset_of_reportValidity_9() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___reportValidity_9)); }
	inline bool get_reportValidity_9() const { return ___reportValidity_9; }
	inline bool* get_address_of_reportValidity_9() { return &___reportValidity_9; }
	inline void set_reportValidity_9(bool value)
	{
		___reportValidity_9 = value;
	}

	inline static int32_t get_offset_of_actualLoadingStatus_10() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___actualLoadingStatus_10)); }
	inline bool get_actualLoadingStatus_10() const { return ___actualLoadingStatus_10; }
	inline bool* get_address_of_actualLoadingStatus_10() { return &___actualLoadingStatus_10; }
	inline void set_actualLoadingStatus_10(bool value)
	{
		___actualLoadingStatus_10 = value;
	}

	inline static int32_t get_offset_of_onNodeInsertingDelegate_11() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___onNodeInsertingDelegate_11)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_onNodeInsertingDelegate_11() const { return ___onNodeInsertingDelegate_11; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_onNodeInsertingDelegate_11() { return &___onNodeInsertingDelegate_11; }
	inline void set_onNodeInsertingDelegate_11(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___onNodeInsertingDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((&___onNodeInsertingDelegate_11), value);
	}

	inline static int32_t get_offset_of_onNodeInsertedDelegate_12() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___onNodeInsertedDelegate_12)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_onNodeInsertedDelegate_12() const { return ___onNodeInsertedDelegate_12; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_onNodeInsertedDelegate_12() { return &___onNodeInsertedDelegate_12; }
	inline void set_onNodeInsertedDelegate_12(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___onNodeInsertedDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((&___onNodeInsertedDelegate_12), value);
	}

	inline static int32_t get_offset_of_onNodeRemovingDelegate_13() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___onNodeRemovingDelegate_13)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_onNodeRemovingDelegate_13() const { return ___onNodeRemovingDelegate_13; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_onNodeRemovingDelegate_13() { return &___onNodeRemovingDelegate_13; }
	inline void set_onNodeRemovingDelegate_13(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___onNodeRemovingDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((&___onNodeRemovingDelegate_13), value);
	}

	inline static int32_t get_offset_of_onNodeRemovedDelegate_14() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___onNodeRemovedDelegate_14)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_onNodeRemovedDelegate_14() const { return ___onNodeRemovedDelegate_14; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_onNodeRemovedDelegate_14() { return &___onNodeRemovedDelegate_14; }
	inline void set_onNodeRemovedDelegate_14(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___onNodeRemovedDelegate_14 = value;
		Il2CppCodeGenWriteBarrier((&___onNodeRemovedDelegate_14), value);
	}

	inline static int32_t get_offset_of_onNodeChangingDelegate_15() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___onNodeChangingDelegate_15)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_onNodeChangingDelegate_15() const { return ___onNodeChangingDelegate_15; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_onNodeChangingDelegate_15() { return &___onNodeChangingDelegate_15; }
	inline void set_onNodeChangingDelegate_15(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___onNodeChangingDelegate_15 = value;
		Il2CppCodeGenWriteBarrier((&___onNodeChangingDelegate_15), value);
	}

	inline static int32_t get_offset_of_onNodeChangedDelegate_16() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___onNodeChangedDelegate_16)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_onNodeChangedDelegate_16() const { return ___onNodeChangedDelegate_16; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_onNodeChangedDelegate_16() { return &___onNodeChangedDelegate_16; }
	inline void set_onNodeChangedDelegate_16(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___onNodeChangedDelegate_16 = value;
		Il2CppCodeGenWriteBarrier((&___onNodeChangedDelegate_16), value);
	}

	inline static int32_t get_offset_of_fEntRefNodesPresent_17() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___fEntRefNodesPresent_17)); }
	inline bool get_fEntRefNodesPresent_17() const { return ___fEntRefNodesPresent_17; }
	inline bool* get_address_of_fEntRefNodesPresent_17() { return &___fEntRefNodesPresent_17; }
	inline void set_fEntRefNodesPresent_17(bool value)
	{
		___fEntRefNodesPresent_17 = value;
	}

	inline static int32_t get_offset_of_fCDataNodesPresent_18() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___fCDataNodesPresent_18)); }
	inline bool get_fCDataNodesPresent_18() const { return ___fCDataNodesPresent_18; }
	inline bool* get_address_of_fCDataNodesPresent_18() { return &___fCDataNodesPresent_18; }
	inline void set_fCDataNodesPresent_18(bool value)
	{
		___fCDataNodesPresent_18 = value;
	}

	inline static int32_t get_offset_of_preserveWhitespace_19() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___preserveWhitespace_19)); }
	inline bool get_preserveWhitespace_19() const { return ___preserveWhitespace_19; }
	inline bool* get_address_of_preserveWhitespace_19() { return &___preserveWhitespace_19; }
	inline void set_preserveWhitespace_19(bool value)
	{
		___preserveWhitespace_19 = value;
	}

	inline static int32_t get_offset_of_isLoading_20() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___isLoading_20)); }
	inline bool get_isLoading_20() const { return ___isLoading_20; }
	inline bool* get_address_of_isLoading_20() { return &___isLoading_20; }
	inline void set_isLoading_20(bool value)
	{
		___isLoading_20 = value;
	}

	inline static int32_t get_offset_of_strDocumentName_21() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___strDocumentName_21)); }
	inline String_t* get_strDocumentName_21() const { return ___strDocumentName_21; }
	inline String_t** get_address_of_strDocumentName_21() { return &___strDocumentName_21; }
	inline void set_strDocumentName_21(String_t* value)
	{
		___strDocumentName_21 = value;
		Il2CppCodeGenWriteBarrier((&___strDocumentName_21), value);
	}

	inline static int32_t get_offset_of_strDocumentFragmentName_22() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___strDocumentFragmentName_22)); }
	inline String_t* get_strDocumentFragmentName_22() const { return ___strDocumentFragmentName_22; }
	inline String_t** get_address_of_strDocumentFragmentName_22() { return &___strDocumentFragmentName_22; }
	inline void set_strDocumentFragmentName_22(String_t* value)
	{
		___strDocumentFragmentName_22 = value;
		Il2CppCodeGenWriteBarrier((&___strDocumentFragmentName_22), value);
	}

	inline static int32_t get_offset_of_strCommentName_23() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___strCommentName_23)); }
	inline String_t* get_strCommentName_23() const { return ___strCommentName_23; }
	inline String_t** get_address_of_strCommentName_23() { return &___strCommentName_23; }
	inline void set_strCommentName_23(String_t* value)
	{
		___strCommentName_23 = value;
		Il2CppCodeGenWriteBarrier((&___strCommentName_23), value);
	}

	inline static int32_t get_offset_of_strTextName_24() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___strTextName_24)); }
	inline String_t* get_strTextName_24() const { return ___strTextName_24; }
	inline String_t** get_address_of_strTextName_24() { return &___strTextName_24; }
	inline void set_strTextName_24(String_t* value)
	{
		___strTextName_24 = value;
		Il2CppCodeGenWriteBarrier((&___strTextName_24), value);
	}

	inline static int32_t get_offset_of_strCDataSectionName_25() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___strCDataSectionName_25)); }
	inline String_t* get_strCDataSectionName_25() const { return ___strCDataSectionName_25; }
	inline String_t** get_address_of_strCDataSectionName_25() { return &___strCDataSectionName_25; }
	inline void set_strCDataSectionName_25(String_t* value)
	{
		___strCDataSectionName_25 = value;
		Il2CppCodeGenWriteBarrier((&___strCDataSectionName_25), value);
	}

	inline static int32_t get_offset_of_strEntityName_26() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___strEntityName_26)); }
	inline String_t* get_strEntityName_26() const { return ___strEntityName_26; }
	inline String_t** get_address_of_strEntityName_26() { return &___strEntityName_26; }
	inline void set_strEntityName_26(String_t* value)
	{
		___strEntityName_26 = value;
		Il2CppCodeGenWriteBarrier((&___strEntityName_26), value);
	}

	inline static int32_t get_offset_of_strID_27() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___strID_27)); }
	inline String_t* get_strID_27() const { return ___strID_27; }
	inline String_t** get_address_of_strID_27() { return &___strID_27; }
	inline void set_strID_27(String_t* value)
	{
		___strID_27 = value;
		Il2CppCodeGenWriteBarrier((&___strID_27), value);
	}

	inline static int32_t get_offset_of_strXmlns_28() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___strXmlns_28)); }
	inline String_t* get_strXmlns_28() const { return ___strXmlns_28; }
	inline String_t** get_address_of_strXmlns_28() { return &___strXmlns_28; }
	inline void set_strXmlns_28(String_t* value)
	{
		___strXmlns_28 = value;
		Il2CppCodeGenWriteBarrier((&___strXmlns_28), value);
	}

	inline static int32_t get_offset_of_strXml_29() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___strXml_29)); }
	inline String_t* get_strXml_29() const { return ___strXml_29; }
	inline String_t** get_address_of_strXml_29() { return &___strXml_29; }
	inline void set_strXml_29(String_t* value)
	{
		___strXml_29 = value;
		Il2CppCodeGenWriteBarrier((&___strXml_29), value);
	}

	inline static int32_t get_offset_of_strSpace_30() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___strSpace_30)); }
	inline String_t* get_strSpace_30() const { return ___strSpace_30; }
	inline String_t** get_address_of_strSpace_30() { return &___strSpace_30; }
	inline void set_strSpace_30(String_t* value)
	{
		___strSpace_30 = value;
		Il2CppCodeGenWriteBarrier((&___strSpace_30), value);
	}

	inline static int32_t get_offset_of_strLang_31() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___strLang_31)); }
	inline String_t* get_strLang_31() const { return ___strLang_31; }
	inline String_t** get_address_of_strLang_31() { return &___strLang_31; }
	inline void set_strLang_31(String_t* value)
	{
		___strLang_31 = value;
		Il2CppCodeGenWriteBarrier((&___strLang_31), value);
	}

	inline static int32_t get_offset_of_strEmpty_32() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___strEmpty_32)); }
	inline String_t* get_strEmpty_32() const { return ___strEmpty_32; }
	inline String_t** get_address_of_strEmpty_32() { return &___strEmpty_32; }
	inline void set_strEmpty_32(String_t* value)
	{
		___strEmpty_32 = value;
		Il2CppCodeGenWriteBarrier((&___strEmpty_32), value);
	}

	inline static int32_t get_offset_of_strNonSignificantWhitespaceName_33() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___strNonSignificantWhitespaceName_33)); }
	inline String_t* get_strNonSignificantWhitespaceName_33() const { return ___strNonSignificantWhitespaceName_33; }
	inline String_t** get_address_of_strNonSignificantWhitespaceName_33() { return &___strNonSignificantWhitespaceName_33; }
	inline void set_strNonSignificantWhitespaceName_33(String_t* value)
	{
		___strNonSignificantWhitespaceName_33 = value;
		Il2CppCodeGenWriteBarrier((&___strNonSignificantWhitespaceName_33), value);
	}

	inline static int32_t get_offset_of_strSignificantWhitespaceName_34() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___strSignificantWhitespaceName_34)); }
	inline String_t* get_strSignificantWhitespaceName_34() const { return ___strSignificantWhitespaceName_34; }
	inline String_t** get_address_of_strSignificantWhitespaceName_34() { return &___strSignificantWhitespaceName_34; }
	inline void set_strSignificantWhitespaceName_34(String_t* value)
	{
		___strSignificantWhitespaceName_34 = value;
		Il2CppCodeGenWriteBarrier((&___strSignificantWhitespaceName_34), value);
	}

	inline static int32_t get_offset_of_strReservedXmlns_35() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___strReservedXmlns_35)); }
	inline String_t* get_strReservedXmlns_35() const { return ___strReservedXmlns_35; }
	inline String_t** get_address_of_strReservedXmlns_35() { return &___strReservedXmlns_35; }
	inline void set_strReservedXmlns_35(String_t* value)
	{
		___strReservedXmlns_35 = value;
		Il2CppCodeGenWriteBarrier((&___strReservedXmlns_35), value);
	}

	inline static int32_t get_offset_of_strReservedXml_36() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___strReservedXml_36)); }
	inline String_t* get_strReservedXml_36() const { return ___strReservedXml_36; }
	inline String_t** get_address_of_strReservedXml_36() { return &___strReservedXml_36; }
	inline void set_strReservedXml_36(String_t* value)
	{
		___strReservedXml_36 = value;
		Il2CppCodeGenWriteBarrier((&___strReservedXml_36), value);
	}

	inline static int32_t get_offset_of_baseURI_37() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___baseURI_37)); }
	inline String_t* get_baseURI_37() const { return ___baseURI_37; }
	inline String_t** get_address_of_baseURI_37() { return &___baseURI_37; }
	inline void set_baseURI_37(String_t* value)
	{
		___baseURI_37 = value;
		Il2CppCodeGenWriteBarrier((&___baseURI_37), value);
	}

	inline static int32_t get_offset_of_resolver_38() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___resolver_38)); }
	inline XmlResolver_t626023767 * get_resolver_38() const { return ___resolver_38; }
	inline XmlResolver_t626023767 ** get_address_of_resolver_38() { return &___resolver_38; }
	inline void set_resolver_38(XmlResolver_t626023767 * value)
	{
		___resolver_38 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_38), value);
	}

	inline static int32_t get_offset_of_bSetResolver_39() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___bSetResolver_39)); }
	inline bool get_bSetResolver_39() const { return ___bSetResolver_39; }
	inline bool* get_address_of_bSetResolver_39() { return &___bSetResolver_39; }
	inline void set_bSetResolver_39(bool value)
	{
		___bSetResolver_39 = value;
	}

	inline static int32_t get_offset_of_objLock_40() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___objLock_40)); }
	inline RuntimeObject * get_objLock_40() const { return ___objLock_40; }
	inline RuntimeObject ** get_address_of_objLock_40() { return &___objLock_40; }
	inline void set_objLock_40(RuntimeObject * value)
	{
		___objLock_40 = value;
		Il2CppCodeGenWriteBarrier((&___objLock_40), value);
	}
};

struct XmlDocument_t2837193595_StaticFields
{
public:
	// System.Xml.EmptyEnumerator System.Xml.XmlDocument::EmptyEnumerator
	EmptyEnumerator_t1830168813 * ___EmptyEnumerator_41;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::NotKnownSchemaInfo
	RuntimeObject* ___NotKnownSchemaInfo_42;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::ValidSchemaInfo
	RuntimeObject* ___ValidSchemaInfo_43;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::InvalidSchemaInfo
	RuntimeObject* ___InvalidSchemaInfo_44;

public:
	inline static int32_t get_offset_of_EmptyEnumerator_41() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595_StaticFields, ___EmptyEnumerator_41)); }
	inline EmptyEnumerator_t1830168813 * get_EmptyEnumerator_41() const { return ___EmptyEnumerator_41; }
	inline EmptyEnumerator_t1830168813 ** get_address_of_EmptyEnumerator_41() { return &___EmptyEnumerator_41; }
	inline void set_EmptyEnumerator_41(EmptyEnumerator_t1830168813 * value)
	{
		___EmptyEnumerator_41 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyEnumerator_41), value);
	}

	inline static int32_t get_offset_of_NotKnownSchemaInfo_42() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595_StaticFields, ___NotKnownSchemaInfo_42)); }
	inline RuntimeObject* get_NotKnownSchemaInfo_42() const { return ___NotKnownSchemaInfo_42; }
	inline RuntimeObject** get_address_of_NotKnownSchemaInfo_42() { return &___NotKnownSchemaInfo_42; }
	inline void set_NotKnownSchemaInfo_42(RuntimeObject* value)
	{
		___NotKnownSchemaInfo_42 = value;
		Il2CppCodeGenWriteBarrier((&___NotKnownSchemaInfo_42), value);
	}

	inline static int32_t get_offset_of_ValidSchemaInfo_43() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595_StaticFields, ___ValidSchemaInfo_43)); }
	inline RuntimeObject* get_ValidSchemaInfo_43() const { return ___ValidSchemaInfo_43; }
	inline RuntimeObject** get_address_of_ValidSchemaInfo_43() { return &___ValidSchemaInfo_43; }
	inline void set_ValidSchemaInfo_43(RuntimeObject* value)
	{
		___ValidSchemaInfo_43 = value;
		Il2CppCodeGenWriteBarrier((&___ValidSchemaInfo_43), value);
	}

	inline static int32_t get_offset_of_InvalidSchemaInfo_44() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595_StaticFields, ___InvalidSchemaInfo_44)); }
	inline RuntimeObject* get_InvalidSchemaInfo_44() const { return ___InvalidSchemaInfo_44; }
	inline RuntimeObject** get_address_of_InvalidSchemaInfo_44() { return &___InvalidSchemaInfo_44; }
	inline void set_InvalidSchemaInfo_44(RuntimeObject* value)
	{
		___InvalidSchemaInfo_44 = value;
		Il2CppCodeGenWriteBarrier((&___InvalidSchemaInfo_44), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDOCUMENT_T2837193595_H
#ifndef XMLLINKEDNODE_T1437094927_H
#define XMLLINKEDNODE_T1437094927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlLinkedNode
struct  XmlLinkedNode_t1437094927  : public XmlNode_t3767805227
{
public:
	// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::next
	XmlLinkedNode_t1437094927 * ___next_1;

public:
	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(XmlLinkedNode_t1437094927, ___next_1)); }
	inline XmlLinkedNode_t1437094927 * get_next_1() const { return ___next_1; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(XmlLinkedNode_t1437094927 * value)
	{
		___next_1 = value;
		Il2CppCodeGenWriteBarrier((&___next_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLLINKEDNODE_T1437094927_H
#ifndef NONAMESPACEMANAGER_T2350683444_H
#define NONAMESPACEMANAGER_T2350683444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReaderImpl/NoNamespaceManager
struct  NoNamespaceManager_t2350683444  : public XmlNamespaceManager_t418790500
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONAMESPACEMANAGER_T2350683444_H
#ifndef PARSINGSTATE_T1780334922_H
#define PARSINGSTATE_T1780334922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReaderImpl/ParsingState
struct  ParsingState_t1780334922 
{
public:
	// System.Char[] System.Xml.XmlTextReaderImpl/ParsingState::chars
	CharU5BU5D_t3528271667* ___chars_0;
	// System.Int32 System.Xml.XmlTextReaderImpl/ParsingState::charPos
	int32_t ___charPos_1;
	// System.Int32 System.Xml.XmlTextReaderImpl/ParsingState::charsUsed
	int32_t ___charsUsed_2;
	// System.Text.Encoding System.Xml.XmlTextReaderImpl/ParsingState::encoding
	Encoding_t1523322056 * ___encoding_3;
	// System.Boolean System.Xml.XmlTextReaderImpl/ParsingState::appendMode
	bool ___appendMode_4;
	// System.IO.Stream System.Xml.XmlTextReaderImpl/ParsingState::stream
	Stream_t1273022909 * ___stream_5;
	// System.Text.Decoder System.Xml.XmlTextReaderImpl/ParsingState::decoder
	Decoder_t2204182725 * ___decoder_6;
	// System.Byte[] System.Xml.XmlTextReaderImpl/ParsingState::bytes
	ByteU5BU5D_t4116647657* ___bytes_7;
	// System.Int32 System.Xml.XmlTextReaderImpl/ParsingState::bytePos
	int32_t ___bytePos_8;
	// System.Int32 System.Xml.XmlTextReaderImpl/ParsingState::bytesUsed
	int32_t ___bytesUsed_9;
	// System.IO.TextReader System.Xml.XmlTextReaderImpl/ParsingState::textReader
	TextReader_t283511965 * ___textReader_10;
	// System.Int32 System.Xml.XmlTextReaderImpl/ParsingState::lineNo
	int32_t ___lineNo_11;
	// System.Int32 System.Xml.XmlTextReaderImpl/ParsingState::lineStartPos
	int32_t ___lineStartPos_12;
	// System.String System.Xml.XmlTextReaderImpl/ParsingState::baseUriStr
	String_t* ___baseUriStr_13;
	// System.Uri System.Xml.XmlTextReaderImpl/ParsingState::baseUri
	Uri_t100236324 * ___baseUri_14;
	// System.Boolean System.Xml.XmlTextReaderImpl/ParsingState::isEof
	bool ___isEof_15;
	// System.Boolean System.Xml.XmlTextReaderImpl/ParsingState::isStreamEof
	bool ___isStreamEof_16;
	// System.Xml.IDtdEntityInfo System.Xml.XmlTextReaderImpl/ParsingState::entity
	RuntimeObject* ___entity_17;
	// System.Int32 System.Xml.XmlTextReaderImpl/ParsingState::entityId
	int32_t ___entityId_18;
	// System.Boolean System.Xml.XmlTextReaderImpl/ParsingState::eolNormalized
	bool ___eolNormalized_19;
	// System.Boolean System.Xml.XmlTextReaderImpl/ParsingState::entityResolvedManually
	bool ___entityResolvedManually_20;

public:
	inline static int32_t get_offset_of_chars_0() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___chars_0)); }
	inline CharU5BU5D_t3528271667* get_chars_0() const { return ___chars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_chars_0() { return &___chars_0; }
	inline void set_chars_0(CharU5BU5D_t3528271667* value)
	{
		___chars_0 = value;
		Il2CppCodeGenWriteBarrier((&___chars_0), value);
	}

	inline static int32_t get_offset_of_charPos_1() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___charPos_1)); }
	inline int32_t get_charPos_1() const { return ___charPos_1; }
	inline int32_t* get_address_of_charPos_1() { return &___charPos_1; }
	inline void set_charPos_1(int32_t value)
	{
		___charPos_1 = value;
	}

	inline static int32_t get_offset_of_charsUsed_2() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___charsUsed_2)); }
	inline int32_t get_charsUsed_2() const { return ___charsUsed_2; }
	inline int32_t* get_address_of_charsUsed_2() { return &___charsUsed_2; }
	inline void set_charsUsed_2(int32_t value)
	{
		___charsUsed_2 = value;
	}

	inline static int32_t get_offset_of_encoding_3() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___encoding_3)); }
	inline Encoding_t1523322056 * get_encoding_3() const { return ___encoding_3; }
	inline Encoding_t1523322056 ** get_address_of_encoding_3() { return &___encoding_3; }
	inline void set_encoding_3(Encoding_t1523322056 * value)
	{
		___encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_3), value);
	}

	inline static int32_t get_offset_of_appendMode_4() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___appendMode_4)); }
	inline bool get_appendMode_4() const { return ___appendMode_4; }
	inline bool* get_address_of_appendMode_4() { return &___appendMode_4; }
	inline void set_appendMode_4(bool value)
	{
		___appendMode_4 = value;
	}

	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___stream_5)); }
	inline Stream_t1273022909 * get_stream_5() const { return ___stream_5; }
	inline Stream_t1273022909 ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t1273022909 * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((&___stream_5), value);
	}

	inline static int32_t get_offset_of_decoder_6() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___decoder_6)); }
	inline Decoder_t2204182725 * get_decoder_6() const { return ___decoder_6; }
	inline Decoder_t2204182725 ** get_address_of_decoder_6() { return &___decoder_6; }
	inline void set_decoder_6(Decoder_t2204182725 * value)
	{
		___decoder_6 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_6), value);
	}

	inline static int32_t get_offset_of_bytes_7() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___bytes_7)); }
	inline ByteU5BU5D_t4116647657* get_bytes_7() const { return ___bytes_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_bytes_7() { return &___bytes_7; }
	inline void set_bytes_7(ByteU5BU5D_t4116647657* value)
	{
		___bytes_7 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_7), value);
	}

	inline static int32_t get_offset_of_bytePos_8() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___bytePos_8)); }
	inline int32_t get_bytePos_8() const { return ___bytePos_8; }
	inline int32_t* get_address_of_bytePos_8() { return &___bytePos_8; }
	inline void set_bytePos_8(int32_t value)
	{
		___bytePos_8 = value;
	}

	inline static int32_t get_offset_of_bytesUsed_9() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___bytesUsed_9)); }
	inline int32_t get_bytesUsed_9() const { return ___bytesUsed_9; }
	inline int32_t* get_address_of_bytesUsed_9() { return &___bytesUsed_9; }
	inline void set_bytesUsed_9(int32_t value)
	{
		___bytesUsed_9 = value;
	}

	inline static int32_t get_offset_of_textReader_10() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___textReader_10)); }
	inline TextReader_t283511965 * get_textReader_10() const { return ___textReader_10; }
	inline TextReader_t283511965 ** get_address_of_textReader_10() { return &___textReader_10; }
	inline void set_textReader_10(TextReader_t283511965 * value)
	{
		___textReader_10 = value;
		Il2CppCodeGenWriteBarrier((&___textReader_10), value);
	}

	inline static int32_t get_offset_of_lineNo_11() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___lineNo_11)); }
	inline int32_t get_lineNo_11() const { return ___lineNo_11; }
	inline int32_t* get_address_of_lineNo_11() { return &___lineNo_11; }
	inline void set_lineNo_11(int32_t value)
	{
		___lineNo_11 = value;
	}

	inline static int32_t get_offset_of_lineStartPos_12() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___lineStartPos_12)); }
	inline int32_t get_lineStartPos_12() const { return ___lineStartPos_12; }
	inline int32_t* get_address_of_lineStartPos_12() { return &___lineStartPos_12; }
	inline void set_lineStartPos_12(int32_t value)
	{
		___lineStartPos_12 = value;
	}

	inline static int32_t get_offset_of_baseUriStr_13() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___baseUriStr_13)); }
	inline String_t* get_baseUriStr_13() const { return ___baseUriStr_13; }
	inline String_t** get_address_of_baseUriStr_13() { return &___baseUriStr_13; }
	inline void set_baseUriStr_13(String_t* value)
	{
		___baseUriStr_13 = value;
		Il2CppCodeGenWriteBarrier((&___baseUriStr_13), value);
	}

	inline static int32_t get_offset_of_baseUri_14() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___baseUri_14)); }
	inline Uri_t100236324 * get_baseUri_14() const { return ___baseUri_14; }
	inline Uri_t100236324 ** get_address_of_baseUri_14() { return &___baseUri_14; }
	inline void set_baseUri_14(Uri_t100236324 * value)
	{
		___baseUri_14 = value;
		Il2CppCodeGenWriteBarrier((&___baseUri_14), value);
	}

	inline static int32_t get_offset_of_isEof_15() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___isEof_15)); }
	inline bool get_isEof_15() const { return ___isEof_15; }
	inline bool* get_address_of_isEof_15() { return &___isEof_15; }
	inline void set_isEof_15(bool value)
	{
		___isEof_15 = value;
	}

	inline static int32_t get_offset_of_isStreamEof_16() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___isStreamEof_16)); }
	inline bool get_isStreamEof_16() const { return ___isStreamEof_16; }
	inline bool* get_address_of_isStreamEof_16() { return &___isStreamEof_16; }
	inline void set_isStreamEof_16(bool value)
	{
		___isStreamEof_16 = value;
	}

	inline static int32_t get_offset_of_entity_17() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___entity_17)); }
	inline RuntimeObject* get_entity_17() const { return ___entity_17; }
	inline RuntimeObject** get_address_of_entity_17() { return &___entity_17; }
	inline void set_entity_17(RuntimeObject* value)
	{
		___entity_17 = value;
		Il2CppCodeGenWriteBarrier((&___entity_17), value);
	}

	inline static int32_t get_offset_of_entityId_18() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___entityId_18)); }
	inline int32_t get_entityId_18() const { return ___entityId_18; }
	inline int32_t* get_address_of_entityId_18() { return &___entityId_18; }
	inline void set_entityId_18(int32_t value)
	{
		___entityId_18 = value;
	}

	inline static int32_t get_offset_of_eolNormalized_19() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___eolNormalized_19)); }
	inline bool get_eolNormalized_19() const { return ___eolNormalized_19; }
	inline bool* get_address_of_eolNormalized_19() { return &___eolNormalized_19; }
	inline void set_eolNormalized_19(bool value)
	{
		___eolNormalized_19 = value;
	}

	inline static int32_t get_offset_of_entityResolvedManually_20() { return static_cast<int32_t>(offsetof(ParsingState_t1780334922, ___entityResolvedManually_20)); }
	inline bool get_entityResolvedManually_20() const { return ___entityResolvedManually_20; }
	inline bool* get_address_of_entityResolvedManually_20() { return &___entityResolvedManually_20; }
	inline void set_entityResolvedManually_20(bool value)
	{
		___entityResolvedManually_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.XmlTextReaderImpl/ParsingState
struct ParsingState_t1780334922_marshaled_pinvoke
{
	uint8_t* ___chars_0;
	int32_t ___charPos_1;
	int32_t ___charsUsed_2;
	Encoding_t1523322056 * ___encoding_3;
	int32_t ___appendMode_4;
	Stream_t1273022909 * ___stream_5;
	Decoder_t2204182725 * ___decoder_6;
	uint8_t* ___bytes_7;
	int32_t ___bytePos_8;
	int32_t ___bytesUsed_9;
	TextReader_t283511965 * ___textReader_10;
	int32_t ___lineNo_11;
	int32_t ___lineStartPos_12;
	char* ___baseUriStr_13;
	Uri_t100236324 * ___baseUri_14;
	int32_t ___isEof_15;
	int32_t ___isStreamEof_16;
	RuntimeObject* ___entity_17;
	int32_t ___entityId_18;
	int32_t ___eolNormalized_19;
	int32_t ___entityResolvedManually_20;
};
// Native definition for COM marshalling of System.Xml.XmlTextReaderImpl/ParsingState
struct ParsingState_t1780334922_marshaled_com
{
	uint8_t* ___chars_0;
	int32_t ___charPos_1;
	int32_t ___charsUsed_2;
	Encoding_t1523322056 * ___encoding_3;
	int32_t ___appendMode_4;
	Stream_t1273022909 * ___stream_5;
	Decoder_t2204182725 * ___decoder_6;
	uint8_t* ___bytes_7;
	int32_t ___bytePos_8;
	int32_t ___bytesUsed_9;
	TextReader_t283511965 * ___textReader_10;
	int32_t ___lineNo_11;
	int32_t ___lineStartPos_12;
	Il2CppChar* ___baseUriStr_13;
	Uri_t100236324 * ___baseUri_14;
	int32_t ___isEof_15;
	int32_t ___isStreamEof_16;
	RuntimeObject* ___entity_17;
	int32_t ___entityId_18;
	int32_t ___eolNormalized_19;
	int32_t ___entityResolvedManually_20;
};
#endif // PARSINGSTATE_T1780334922_H
#ifndef NAMESPACE_T2218256516_H
#define NAMESPACE_T2218256516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/Namespace
struct  Namespace_t2218256516 
{
public:
	// System.String System.Xml.XmlTextWriter/Namespace::prefix
	String_t* ___prefix_0;
	// System.String System.Xml.XmlTextWriter/Namespace::ns
	String_t* ___ns_1;
	// System.Boolean System.Xml.XmlTextWriter/Namespace::declared
	bool ___declared_2;
	// System.Int32 System.Xml.XmlTextWriter/Namespace::prevNsIndex
	int32_t ___prevNsIndex_3;

public:
	inline static int32_t get_offset_of_prefix_0() { return static_cast<int32_t>(offsetof(Namespace_t2218256516, ___prefix_0)); }
	inline String_t* get_prefix_0() const { return ___prefix_0; }
	inline String_t** get_address_of_prefix_0() { return &___prefix_0; }
	inline void set_prefix_0(String_t* value)
	{
		___prefix_0 = value;
		Il2CppCodeGenWriteBarrier((&___prefix_0), value);
	}

	inline static int32_t get_offset_of_ns_1() { return static_cast<int32_t>(offsetof(Namespace_t2218256516, ___ns_1)); }
	inline String_t* get_ns_1() const { return ___ns_1; }
	inline String_t** get_address_of_ns_1() { return &___ns_1; }
	inline void set_ns_1(String_t* value)
	{
		___ns_1 = value;
		Il2CppCodeGenWriteBarrier((&___ns_1), value);
	}

	inline static int32_t get_offset_of_declared_2() { return static_cast<int32_t>(offsetof(Namespace_t2218256516, ___declared_2)); }
	inline bool get_declared_2() const { return ___declared_2; }
	inline bool* get_address_of_declared_2() { return &___declared_2; }
	inline void set_declared_2(bool value)
	{
		___declared_2 = value;
	}

	inline static int32_t get_offset_of_prevNsIndex_3() { return static_cast<int32_t>(offsetof(Namespace_t2218256516, ___prevNsIndex_3)); }
	inline int32_t get_prevNsIndex_3() const { return ___prevNsIndex_3; }
	inline int32_t* get_address_of_prevNsIndex_3() { return &___prevNsIndex_3; }
	inline void set_prevNsIndex_3(int32_t value)
	{
		___prevNsIndex_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.XmlTextWriter/Namespace
struct Namespace_t2218256516_marshaled_pinvoke
{
	char* ___prefix_0;
	char* ___ns_1;
	int32_t ___declared_2;
	int32_t ___prevNsIndex_3;
};
// Native definition for COM marshalling of System.Xml.XmlTextWriter/Namespace
struct Namespace_t2218256516_marshaled_com
{
	Il2CppChar* ___prefix_0;
	Il2CppChar* ___ns_1;
	int32_t ___declared_2;
	int32_t ___prevNsIndex_3;
};
#endif // NAMESPACE_T2218256516_H
#ifndef XMLTEXTWRITERBASE64ENCODER_T4259465041_H
#define XMLTEXTWRITERBASE64ENCODER_T4259465041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriterBase64Encoder
struct  XmlTextWriterBase64Encoder_t4259465041  : public Base64Encoder_t3938083961
{
public:
	// System.Xml.XmlTextEncoder System.Xml.XmlTextWriterBase64Encoder::xmlTextEncoder
	XmlTextEncoder_t1632274355 * ___xmlTextEncoder_3;

public:
	inline static int32_t get_offset_of_xmlTextEncoder_3() { return static_cast<int32_t>(offsetof(XmlTextWriterBase64Encoder_t4259465041, ___xmlTextEncoder_3)); }
	inline XmlTextEncoder_t1632274355 * get_xmlTextEncoder_3() const { return ___xmlTextEncoder_3; }
	inline XmlTextEncoder_t1632274355 ** get_address_of_xmlTextEncoder_3() { return &___xmlTextEncoder_3; }
	inline void set_xmlTextEncoder_3(XmlTextEncoder_t1632274355 * value)
	{
		___xmlTextEncoder_3 = value;
		Il2CppCodeGenWriteBarrier((&___xmlTextEncoder_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLTEXTWRITERBASE64ENCODER_T4259465041_H
#ifndef XMLURLRESOLVER_T817895037_H
#define XMLURLRESOLVER_T817895037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlUrlResolver
struct  XmlUrlResolver_t817895037  : public XmlResolver_t626023767
{
public:
	// System.Net.ICredentials System.Xml.XmlUrlResolver::_credentials
	RuntimeObject* ____credentials_1;
	// System.Net.IWebProxy System.Xml.XmlUrlResolver::_proxy
	RuntimeObject* ____proxy_2;
	// System.Net.Cache.RequestCachePolicy System.Xml.XmlUrlResolver::_cachePolicy
	RequestCachePolicy_t2923596909 * ____cachePolicy_3;

public:
	inline static int32_t get_offset_of__credentials_1() { return static_cast<int32_t>(offsetof(XmlUrlResolver_t817895037, ____credentials_1)); }
	inline RuntimeObject* get__credentials_1() const { return ____credentials_1; }
	inline RuntimeObject** get_address_of__credentials_1() { return &____credentials_1; }
	inline void set__credentials_1(RuntimeObject* value)
	{
		____credentials_1 = value;
		Il2CppCodeGenWriteBarrier((&____credentials_1), value);
	}

	inline static int32_t get_offset_of__proxy_2() { return static_cast<int32_t>(offsetof(XmlUrlResolver_t817895037, ____proxy_2)); }
	inline RuntimeObject* get__proxy_2() const { return ____proxy_2; }
	inline RuntimeObject** get_address_of__proxy_2() { return &____proxy_2; }
	inline void set__proxy_2(RuntimeObject* value)
	{
		____proxy_2 = value;
		Il2CppCodeGenWriteBarrier((&____proxy_2), value);
	}

	inline static int32_t get_offset_of__cachePolicy_3() { return static_cast<int32_t>(offsetof(XmlUrlResolver_t817895037, ____cachePolicy_3)); }
	inline RequestCachePolicy_t2923596909 * get__cachePolicy_3() const { return ____cachePolicy_3; }
	inline RequestCachePolicy_t2923596909 ** get_address_of__cachePolicy_3() { return &____cachePolicy_3; }
	inline void set__cachePolicy_3(RequestCachePolicy_t2923596909 * value)
	{
		____cachePolicy_3 = value;
		Il2CppCodeGenWriteBarrier((&____cachePolicy_3), value);
	}
};

struct XmlUrlResolver_t817895037_StaticFields
{
public:
	// System.Object System.Xml.XmlUrlResolver::s_DownloadManager
	RuntimeObject * ___s_DownloadManager_0;

public:
	inline static int32_t get_offset_of_s_DownloadManager_0() { return static_cast<int32_t>(offsetof(XmlUrlResolver_t817895037_StaticFields, ___s_DownloadManager_0)); }
	inline RuntimeObject * get_s_DownloadManager_0() const { return ___s_DownloadManager_0; }
	inline RuntimeObject ** get_address_of_s_DownloadManager_0() { return &___s_DownloadManager_0; }
	inline void set_s_DownloadManager_0(RuntimeObject * value)
	{
		___s_DownloadManager_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_DownloadManager_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLURLRESOLVER_T817895037_H
#ifndef XMLVALIDATINGREADER_T1719295192_H
#define XMLVALIDATINGREADER_T1719295192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlValidatingReader
struct  XmlValidatingReader_t1719295192  : public XmlReader_t3121518892
{
public:
	// System.Xml.XmlValidatingReaderImpl System.Xml.XmlValidatingReader::impl
	XmlValidatingReaderImpl_t1817762384 * ___impl_3;

public:
	inline static int32_t get_offset_of_impl_3() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t1719295192, ___impl_3)); }
	inline XmlValidatingReaderImpl_t1817762384 * get_impl_3() const { return ___impl_3; }
	inline XmlValidatingReaderImpl_t1817762384 ** get_address_of_impl_3() { return &___impl_3; }
	inline void set_impl_3(XmlValidatingReaderImpl_t1817762384 * value)
	{
		___impl_3 = value;
		Il2CppCodeGenWriteBarrier((&___impl_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLVALIDATINGREADER_T1719295192_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255362_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255362  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::0701435C4E2C38EFE43C51BD22C114AB8B80124D
	__StaticArrayInitTypeSizeU3D12_t2710994318  ___0701435C4E2C38EFE43C51BD22C114AB8B80124D_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::0F6A1E2CEA2FA691D57F3F3FDCF9B82A3FBF6EE1
	__StaticArrayInitTypeSizeU3D68_t1904359727  ___0F6A1E2CEA2FA691D57F3F3FDCF9B82A3FBF6EE1_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::161F91CE1721D8F16622810CBB39887D21C47031
	__StaticArrayInitTypeSizeU3D12_t2710994318  ___161F91CE1721D8F16622810CBB39887D21C47031_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::221CE291CD044114B4369175B9B91177F5932876
	__StaticArrayInitTypeSizeU3D44_t3517366764  ___221CE291CD044114B4369175B9B91177F5932876_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::360487BE4278986419B568EFD887F6145383168A
	__StaticArrayInitTypeSizeU3D40_t1547998296  ___360487BE4278986419B568EFD887F6145383168A_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::42DDBEE388AB59C20A3D7D4D6555E78D74A45AE1
	__StaticArrayInitTypeSizeU3D20_t1548391512  ___42DDBEE388AB59C20A3D7D4D6555E78D74A45AE1_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::485F43E332C2F7530815B17C08DAC169A8F697E0
	__StaticArrayInitTypeSizeU3D32_t2711125390  ___485F43E332C2F7530815B17C08DAC169A8F697E0_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112 <PrivateImplementationDetails>::49C5BA13401986EC93E4677F52CBE2248184DFBD
	__StaticArrayInitTypeSizeU3D112_t3318095804  ___49C5BA13401986EC93E4677F52CBE2248184DFBD_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::51E4CA1C2B009A2876C6E57D8E69E3502BCA3440
	__StaticArrayInitTypeSizeU3D24_t3517759980  ___51E4CA1C2B009A2876C6E57D8E69E3502BCA3440_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::574B9D4E4C39F6E8004181E5765B627B75EB1AD1
	__StaticArrayInitTypeSizeU3D56_t385133346  ___574B9D4E4C39F6E8004181E5765B627B75EB1AD1_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::5BE9DB9EEB9CBB4D22472CA9734B1FA1D36126BD
	__StaticArrayInitTypeSizeU3D12_t2710994318  ___5BE9DB9EEB9CBB4D22472CA9734B1FA1D36126BD_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::5D100A87B697F3AE2015A5D3B2A7B5419E1BCA98
	__StaticArrayInitTypeSizeU3D6_t3217689075  ___5D100A87B697F3AE2015A5D3B2A7B5419E1BCA98_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=416 <PrivateImplementationDetails>::6A0D50D692745A6663128CD315B71079584F3E59
	__StaticArrayInitTypeSizeU3D416_t4082573244  ___6A0D50D692745A6663128CD315B71079584F3E59_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::702F6A3276CBE481D247A77C20B5459FB94D07D2
	__StaticArrayInitTypeSizeU3D24_t3517759980  ___702F6A3276CBE481D247A77C20B5459FB94D07D2_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::7A32E1A19C182315E4263A65A72066492550D8CD
	__StaticArrayInitTypeSizeU3D32_t2711125390  ___7A32E1A19C182315E4263A65A72066492550D8CD_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::8B4E5E81A88D29642679AFCE41DCA380F9000462
	__StaticArrayInitTypeSizeU3D16_t385395490  ___8B4E5E81A88D29642679AFCE41DCA380F9000462_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::99F0664C2AC8464B51252D92FC24F3834C6FB90C
	__StaticArrayInitTypeSizeU3D12_t2710994318  ___99F0664C2AC8464B51252D92FC24F3834C6FB90C_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::9E31F24F64765FCAA589F589324D17C9FCF6A06D
	__StaticArrayInitTypeSizeU3D28_t1904621871  ___9E31F24F64765FCAA589F589324D17C9FCF6A06D_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144 <PrivateImplementationDetails>::9E374D7263B2452E25DE3D6E617F6A728D98A439
	__StaticArrayInitTypeSizeU3D144_t573424107  ___9E374D7263B2452E25DE3D6E617F6A728D98A439_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::AB4EAD1DB94B8220FAAEDAA6A593B2E6DB0A8A9C
	__StaticArrayInitTypeSizeU3D24_t3517759980  ___AB4EAD1DB94B8220FAAEDAA6A593B2E6DB0A8A9C_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=416 <PrivateImplementationDetails>::B368804F0C6DAB083B253A6B106D0783D5C32E90
	__StaticArrayInitTypeSizeU3D416_t4082573244  ___B368804F0C6DAB083B253A6B106D0783D5C32E90_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::B9F0004E3873FDDCABFDA6174EA18F0859B637B4
	__StaticArrayInitTypeSizeU3D40_t1547998296  ___B9F0004E3873FDDCABFDA6174EA18F0859B637B4_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::BAD037B714E1CD1052149B51238A3D4351DD10B5
	__StaticArrayInitTypeSizeU3D20_t1548391512  ___BAD037B714E1CD1052149B51238A3D4351DD10B5_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::C2D6E36D84DDA5D661B95D7B32D3F47CD7ACBF6C
	__StaticArrayInitTypeSizeU3D16_t385395490  ___C2D6E36D84DDA5D661B95D7B32D3F47CD7ACBF6C_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::DCF398750721AA7A27A6BA56E99350329B06E8B1
	__StaticArrayInitTypeSizeU3D16_t385395490  ___DCF398750721AA7A27A6BA56E99350329B06E8B1_24;
	// System.Int64 <PrivateImplementationDetails>::EBC658B067B5C785A3F0BB67D73755F6FEE7F70C
	int64_t ___EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::ED18A4A1FF7C89B400D7CA156BA8D11BB09E1DE4
	__StaticArrayInitTypeSizeU3D36_t385526562  ___ED18A4A1FF7C89B400D7CA156BA8D11BB09E1DE4_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::EE3413A2C088FF9432054D6E60A7CB6A498D25F0
	__StaticArrayInitTypeSizeU3D64_t3517497836  ___EE3413A2C088FF9432054D6E60A7CB6A498D25F0_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::FFE3F15642234E7FAD6951D432F1134D5AD15922
	__StaticArrayInitTypeSizeU3D20_t1548391512  ___FFE3F15642234E7FAD6951D432F1134D5AD15922_28;

public:
	inline static int32_t get_offset_of_U30701435C4E2C38EFE43C51BD22C114AB8B80124D_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___0701435C4E2C38EFE43C51BD22C114AB8B80124D_0)); }
	inline __StaticArrayInitTypeSizeU3D12_t2710994318  get_U30701435C4E2C38EFE43C51BD22C114AB8B80124D_0() const { return ___0701435C4E2C38EFE43C51BD22C114AB8B80124D_0; }
	inline __StaticArrayInitTypeSizeU3D12_t2710994318 * get_address_of_U30701435C4E2C38EFE43C51BD22C114AB8B80124D_0() { return &___0701435C4E2C38EFE43C51BD22C114AB8B80124D_0; }
	inline void set_U30701435C4E2C38EFE43C51BD22C114AB8B80124D_0(__StaticArrayInitTypeSizeU3D12_t2710994318  value)
	{
		___0701435C4E2C38EFE43C51BD22C114AB8B80124D_0 = value;
	}

	inline static int32_t get_offset_of_U30F6A1E2CEA2FA691D57F3F3FDCF9B82A3FBF6EE1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___0F6A1E2CEA2FA691D57F3F3FDCF9B82A3FBF6EE1_1)); }
	inline __StaticArrayInitTypeSizeU3D68_t1904359727  get_U30F6A1E2CEA2FA691D57F3F3FDCF9B82A3FBF6EE1_1() const { return ___0F6A1E2CEA2FA691D57F3F3FDCF9B82A3FBF6EE1_1; }
	inline __StaticArrayInitTypeSizeU3D68_t1904359727 * get_address_of_U30F6A1E2CEA2FA691D57F3F3FDCF9B82A3FBF6EE1_1() { return &___0F6A1E2CEA2FA691D57F3F3FDCF9B82A3FBF6EE1_1; }
	inline void set_U30F6A1E2CEA2FA691D57F3F3FDCF9B82A3FBF6EE1_1(__StaticArrayInitTypeSizeU3D68_t1904359727  value)
	{
		___0F6A1E2CEA2FA691D57F3F3FDCF9B82A3FBF6EE1_1 = value;
	}

	inline static int32_t get_offset_of_U3161F91CE1721D8F16622810CBB39887D21C47031_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___161F91CE1721D8F16622810CBB39887D21C47031_2)); }
	inline __StaticArrayInitTypeSizeU3D12_t2710994318  get_U3161F91CE1721D8F16622810CBB39887D21C47031_2() const { return ___161F91CE1721D8F16622810CBB39887D21C47031_2; }
	inline __StaticArrayInitTypeSizeU3D12_t2710994318 * get_address_of_U3161F91CE1721D8F16622810CBB39887D21C47031_2() { return &___161F91CE1721D8F16622810CBB39887D21C47031_2; }
	inline void set_U3161F91CE1721D8F16622810CBB39887D21C47031_2(__StaticArrayInitTypeSizeU3D12_t2710994318  value)
	{
		___161F91CE1721D8F16622810CBB39887D21C47031_2 = value;
	}

	inline static int32_t get_offset_of_U3221CE291CD044114B4369175B9B91177F5932876_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___221CE291CD044114B4369175B9B91177F5932876_3)); }
	inline __StaticArrayInitTypeSizeU3D44_t3517366764  get_U3221CE291CD044114B4369175B9B91177F5932876_3() const { return ___221CE291CD044114B4369175B9B91177F5932876_3; }
	inline __StaticArrayInitTypeSizeU3D44_t3517366764 * get_address_of_U3221CE291CD044114B4369175B9B91177F5932876_3() { return &___221CE291CD044114B4369175B9B91177F5932876_3; }
	inline void set_U3221CE291CD044114B4369175B9B91177F5932876_3(__StaticArrayInitTypeSizeU3D44_t3517366764  value)
	{
		___221CE291CD044114B4369175B9B91177F5932876_3 = value;
	}

	inline static int32_t get_offset_of_U3360487BE4278986419B568EFD887F6145383168A_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___360487BE4278986419B568EFD887F6145383168A_4)); }
	inline __StaticArrayInitTypeSizeU3D40_t1547998296  get_U3360487BE4278986419B568EFD887F6145383168A_4() const { return ___360487BE4278986419B568EFD887F6145383168A_4; }
	inline __StaticArrayInitTypeSizeU3D40_t1547998296 * get_address_of_U3360487BE4278986419B568EFD887F6145383168A_4() { return &___360487BE4278986419B568EFD887F6145383168A_4; }
	inline void set_U3360487BE4278986419B568EFD887F6145383168A_4(__StaticArrayInitTypeSizeU3D40_t1547998296  value)
	{
		___360487BE4278986419B568EFD887F6145383168A_4 = value;
	}

	inline static int32_t get_offset_of_U342DDBEE388AB59C20A3D7D4D6555E78D74A45AE1_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___42DDBEE388AB59C20A3D7D4D6555E78D74A45AE1_5)); }
	inline __StaticArrayInitTypeSizeU3D20_t1548391512  get_U342DDBEE388AB59C20A3D7D4D6555E78D74A45AE1_5() const { return ___42DDBEE388AB59C20A3D7D4D6555E78D74A45AE1_5; }
	inline __StaticArrayInitTypeSizeU3D20_t1548391512 * get_address_of_U342DDBEE388AB59C20A3D7D4D6555E78D74A45AE1_5() { return &___42DDBEE388AB59C20A3D7D4D6555E78D74A45AE1_5; }
	inline void set_U342DDBEE388AB59C20A3D7D4D6555E78D74A45AE1_5(__StaticArrayInitTypeSizeU3D20_t1548391512  value)
	{
		___42DDBEE388AB59C20A3D7D4D6555E78D74A45AE1_5 = value;
	}

	inline static int32_t get_offset_of_U3485F43E332C2F7530815B17C08DAC169A8F697E0_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___485F43E332C2F7530815B17C08DAC169A8F697E0_6)); }
	inline __StaticArrayInitTypeSizeU3D32_t2711125390  get_U3485F43E332C2F7530815B17C08DAC169A8F697E0_6() const { return ___485F43E332C2F7530815B17C08DAC169A8F697E0_6; }
	inline __StaticArrayInitTypeSizeU3D32_t2711125390 * get_address_of_U3485F43E332C2F7530815B17C08DAC169A8F697E0_6() { return &___485F43E332C2F7530815B17C08DAC169A8F697E0_6; }
	inline void set_U3485F43E332C2F7530815B17C08DAC169A8F697E0_6(__StaticArrayInitTypeSizeU3D32_t2711125390  value)
	{
		___485F43E332C2F7530815B17C08DAC169A8F697E0_6 = value;
	}

	inline static int32_t get_offset_of_U349C5BA13401986EC93E4677F52CBE2248184DFBD_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___49C5BA13401986EC93E4677F52CBE2248184DFBD_7)); }
	inline __StaticArrayInitTypeSizeU3D112_t3318095804  get_U349C5BA13401986EC93E4677F52CBE2248184DFBD_7() const { return ___49C5BA13401986EC93E4677F52CBE2248184DFBD_7; }
	inline __StaticArrayInitTypeSizeU3D112_t3318095804 * get_address_of_U349C5BA13401986EC93E4677F52CBE2248184DFBD_7() { return &___49C5BA13401986EC93E4677F52CBE2248184DFBD_7; }
	inline void set_U349C5BA13401986EC93E4677F52CBE2248184DFBD_7(__StaticArrayInitTypeSizeU3D112_t3318095804  value)
	{
		___49C5BA13401986EC93E4677F52CBE2248184DFBD_7 = value;
	}

	inline static int32_t get_offset_of_U351E4CA1C2B009A2876C6E57D8E69E3502BCA3440_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___51E4CA1C2B009A2876C6E57D8E69E3502BCA3440_8)); }
	inline __StaticArrayInitTypeSizeU3D24_t3517759980  get_U351E4CA1C2B009A2876C6E57D8E69E3502BCA3440_8() const { return ___51E4CA1C2B009A2876C6E57D8E69E3502BCA3440_8; }
	inline __StaticArrayInitTypeSizeU3D24_t3517759980 * get_address_of_U351E4CA1C2B009A2876C6E57D8E69E3502BCA3440_8() { return &___51E4CA1C2B009A2876C6E57D8E69E3502BCA3440_8; }
	inline void set_U351E4CA1C2B009A2876C6E57D8E69E3502BCA3440_8(__StaticArrayInitTypeSizeU3D24_t3517759980  value)
	{
		___51E4CA1C2B009A2876C6E57D8E69E3502BCA3440_8 = value;
	}

	inline static int32_t get_offset_of_U3574B9D4E4C39F6E8004181E5765B627B75EB1AD1_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___574B9D4E4C39F6E8004181E5765B627B75EB1AD1_9)); }
	inline __StaticArrayInitTypeSizeU3D56_t385133346  get_U3574B9D4E4C39F6E8004181E5765B627B75EB1AD1_9() const { return ___574B9D4E4C39F6E8004181E5765B627B75EB1AD1_9; }
	inline __StaticArrayInitTypeSizeU3D56_t385133346 * get_address_of_U3574B9D4E4C39F6E8004181E5765B627B75EB1AD1_9() { return &___574B9D4E4C39F6E8004181E5765B627B75EB1AD1_9; }
	inline void set_U3574B9D4E4C39F6E8004181E5765B627B75EB1AD1_9(__StaticArrayInitTypeSizeU3D56_t385133346  value)
	{
		___574B9D4E4C39F6E8004181E5765B627B75EB1AD1_9 = value;
	}

	inline static int32_t get_offset_of_U35BE9DB9EEB9CBB4D22472CA9734B1FA1D36126BD_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___5BE9DB9EEB9CBB4D22472CA9734B1FA1D36126BD_10)); }
	inline __StaticArrayInitTypeSizeU3D12_t2710994318  get_U35BE9DB9EEB9CBB4D22472CA9734B1FA1D36126BD_10() const { return ___5BE9DB9EEB9CBB4D22472CA9734B1FA1D36126BD_10; }
	inline __StaticArrayInitTypeSizeU3D12_t2710994318 * get_address_of_U35BE9DB9EEB9CBB4D22472CA9734B1FA1D36126BD_10() { return &___5BE9DB9EEB9CBB4D22472CA9734B1FA1D36126BD_10; }
	inline void set_U35BE9DB9EEB9CBB4D22472CA9734B1FA1D36126BD_10(__StaticArrayInitTypeSizeU3D12_t2710994318  value)
	{
		___5BE9DB9EEB9CBB4D22472CA9734B1FA1D36126BD_10 = value;
	}

	inline static int32_t get_offset_of_U35D100A87B697F3AE2015A5D3B2A7B5419E1BCA98_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___5D100A87B697F3AE2015A5D3B2A7B5419E1BCA98_11)); }
	inline __StaticArrayInitTypeSizeU3D6_t3217689075  get_U35D100A87B697F3AE2015A5D3B2A7B5419E1BCA98_11() const { return ___5D100A87B697F3AE2015A5D3B2A7B5419E1BCA98_11; }
	inline __StaticArrayInitTypeSizeU3D6_t3217689075 * get_address_of_U35D100A87B697F3AE2015A5D3B2A7B5419E1BCA98_11() { return &___5D100A87B697F3AE2015A5D3B2A7B5419E1BCA98_11; }
	inline void set_U35D100A87B697F3AE2015A5D3B2A7B5419E1BCA98_11(__StaticArrayInitTypeSizeU3D6_t3217689075  value)
	{
		___5D100A87B697F3AE2015A5D3B2A7B5419E1BCA98_11 = value;
	}

	inline static int32_t get_offset_of_U36A0D50D692745A6663128CD315B71079584F3E59_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___6A0D50D692745A6663128CD315B71079584F3E59_12)); }
	inline __StaticArrayInitTypeSizeU3D416_t4082573244  get_U36A0D50D692745A6663128CD315B71079584F3E59_12() const { return ___6A0D50D692745A6663128CD315B71079584F3E59_12; }
	inline __StaticArrayInitTypeSizeU3D416_t4082573244 * get_address_of_U36A0D50D692745A6663128CD315B71079584F3E59_12() { return &___6A0D50D692745A6663128CD315B71079584F3E59_12; }
	inline void set_U36A0D50D692745A6663128CD315B71079584F3E59_12(__StaticArrayInitTypeSizeU3D416_t4082573244  value)
	{
		___6A0D50D692745A6663128CD315B71079584F3E59_12 = value;
	}

	inline static int32_t get_offset_of_U3702F6A3276CBE481D247A77C20B5459FB94D07D2_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___702F6A3276CBE481D247A77C20B5459FB94D07D2_13)); }
	inline __StaticArrayInitTypeSizeU3D24_t3517759980  get_U3702F6A3276CBE481D247A77C20B5459FB94D07D2_13() const { return ___702F6A3276CBE481D247A77C20B5459FB94D07D2_13; }
	inline __StaticArrayInitTypeSizeU3D24_t3517759980 * get_address_of_U3702F6A3276CBE481D247A77C20B5459FB94D07D2_13() { return &___702F6A3276CBE481D247A77C20B5459FB94D07D2_13; }
	inline void set_U3702F6A3276CBE481D247A77C20B5459FB94D07D2_13(__StaticArrayInitTypeSizeU3D24_t3517759980  value)
	{
		___702F6A3276CBE481D247A77C20B5459FB94D07D2_13 = value;
	}

	inline static int32_t get_offset_of_U37A32E1A19C182315E4263A65A72066492550D8CD_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___7A32E1A19C182315E4263A65A72066492550D8CD_14)); }
	inline __StaticArrayInitTypeSizeU3D32_t2711125390  get_U37A32E1A19C182315E4263A65A72066492550D8CD_14() const { return ___7A32E1A19C182315E4263A65A72066492550D8CD_14; }
	inline __StaticArrayInitTypeSizeU3D32_t2711125390 * get_address_of_U37A32E1A19C182315E4263A65A72066492550D8CD_14() { return &___7A32E1A19C182315E4263A65A72066492550D8CD_14; }
	inline void set_U37A32E1A19C182315E4263A65A72066492550D8CD_14(__StaticArrayInitTypeSizeU3D32_t2711125390  value)
	{
		___7A32E1A19C182315E4263A65A72066492550D8CD_14 = value;
	}

	inline static int32_t get_offset_of_U38B4E5E81A88D29642679AFCE41DCA380F9000462_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___8B4E5E81A88D29642679AFCE41DCA380F9000462_15)); }
	inline __StaticArrayInitTypeSizeU3D16_t385395490  get_U38B4E5E81A88D29642679AFCE41DCA380F9000462_15() const { return ___8B4E5E81A88D29642679AFCE41DCA380F9000462_15; }
	inline __StaticArrayInitTypeSizeU3D16_t385395490 * get_address_of_U38B4E5E81A88D29642679AFCE41DCA380F9000462_15() { return &___8B4E5E81A88D29642679AFCE41DCA380F9000462_15; }
	inline void set_U38B4E5E81A88D29642679AFCE41DCA380F9000462_15(__StaticArrayInitTypeSizeU3D16_t385395490  value)
	{
		___8B4E5E81A88D29642679AFCE41DCA380F9000462_15 = value;
	}

	inline static int32_t get_offset_of_U399F0664C2AC8464B51252D92FC24F3834C6FB90C_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___99F0664C2AC8464B51252D92FC24F3834C6FB90C_16)); }
	inline __StaticArrayInitTypeSizeU3D12_t2710994318  get_U399F0664C2AC8464B51252D92FC24F3834C6FB90C_16() const { return ___99F0664C2AC8464B51252D92FC24F3834C6FB90C_16; }
	inline __StaticArrayInitTypeSizeU3D12_t2710994318 * get_address_of_U399F0664C2AC8464B51252D92FC24F3834C6FB90C_16() { return &___99F0664C2AC8464B51252D92FC24F3834C6FB90C_16; }
	inline void set_U399F0664C2AC8464B51252D92FC24F3834C6FB90C_16(__StaticArrayInitTypeSizeU3D12_t2710994318  value)
	{
		___99F0664C2AC8464B51252D92FC24F3834C6FB90C_16 = value;
	}

	inline static int32_t get_offset_of_U39E31F24F64765FCAA589F589324D17C9FCF6A06D_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___9E31F24F64765FCAA589F589324D17C9FCF6A06D_17)); }
	inline __StaticArrayInitTypeSizeU3D28_t1904621871  get_U39E31F24F64765FCAA589F589324D17C9FCF6A06D_17() const { return ___9E31F24F64765FCAA589F589324D17C9FCF6A06D_17; }
	inline __StaticArrayInitTypeSizeU3D28_t1904621871 * get_address_of_U39E31F24F64765FCAA589F589324D17C9FCF6A06D_17() { return &___9E31F24F64765FCAA589F589324D17C9FCF6A06D_17; }
	inline void set_U39E31F24F64765FCAA589F589324D17C9FCF6A06D_17(__StaticArrayInitTypeSizeU3D28_t1904621871  value)
	{
		___9E31F24F64765FCAA589F589324D17C9FCF6A06D_17 = value;
	}

	inline static int32_t get_offset_of_U39E374D7263B2452E25DE3D6E617F6A728D98A439_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___9E374D7263B2452E25DE3D6E617F6A728D98A439_18)); }
	inline __StaticArrayInitTypeSizeU3D144_t573424107  get_U39E374D7263B2452E25DE3D6E617F6A728D98A439_18() const { return ___9E374D7263B2452E25DE3D6E617F6A728D98A439_18; }
	inline __StaticArrayInitTypeSizeU3D144_t573424107 * get_address_of_U39E374D7263B2452E25DE3D6E617F6A728D98A439_18() { return &___9E374D7263B2452E25DE3D6E617F6A728D98A439_18; }
	inline void set_U39E374D7263B2452E25DE3D6E617F6A728D98A439_18(__StaticArrayInitTypeSizeU3D144_t573424107  value)
	{
		___9E374D7263B2452E25DE3D6E617F6A728D98A439_18 = value;
	}

	inline static int32_t get_offset_of_AB4EAD1DB94B8220FAAEDAA6A593B2E6DB0A8A9C_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___AB4EAD1DB94B8220FAAEDAA6A593B2E6DB0A8A9C_19)); }
	inline __StaticArrayInitTypeSizeU3D24_t3517759980  get_AB4EAD1DB94B8220FAAEDAA6A593B2E6DB0A8A9C_19() const { return ___AB4EAD1DB94B8220FAAEDAA6A593B2E6DB0A8A9C_19; }
	inline __StaticArrayInitTypeSizeU3D24_t3517759980 * get_address_of_AB4EAD1DB94B8220FAAEDAA6A593B2E6DB0A8A9C_19() { return &___AB4EAD1DB94B8220FAAEDAA6A593B2E6DB0A8A9C_19; }
	inline void set_AB4EAD1DB94B8220FAAEDAA6A593B2E6DB0A8A9C_19(__StaticArrayInitTypeSizeU3D24_t3517759980  value)
	{
		___AB4EAD1DB94B8220FAAEDAA6A593B2E6DB0A8A9C_19 = value;
	}

	inline static int32_t get_offset_of_B368804F0C6DAB083B253A6B106D0783D5C32E90_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___B368804F0C6DAB083B253A6B106D0783D5C32E90_20)); }
	inline __StaticArrayInitTypeSizeU3D416_t4082573244  get_B368804F0C6DAB083B253A6B106D0783D5C32E90_20() const { return ___B368804F0C6DAB083B253A6B106D0783D5C32E90_20; }
	inline __StaticArrayInitTypeSizeU3D416_t4082573244 * get_address_of_B368804F0C6DAB083B253A6B106D0783D5C32E90_20() { return &___B368804F0C6DAB083B253A6B106D0783D5C32E90_20; }
	inline void set_B368804F0C6DAB083B253A6B106D0783D5C32E90_20(__StaticArrayInitTypeSizeU3D416_t4082573244  value)
	{
		___B368804F0C6DAB083B253A6B106D0783D5C32E90_20 = value;
	}

	inline static int32_t get_offset_of_B9F0004E3873FDDCABFDA6174EA18F0859B637B4_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___B9F0004E3873FDDCABFDA6174EA18F0859B637B4_21)); }
	inline __StaticArrayInitTypeSizeU3D40_t1547998296  get_B9F0004E3873FDDCABFDA6174EA18F0859B637B4_21() const { return ___B9F0004E3873FDDCABFDA6174EA18F0859B637B4_21; }
	inline __StaticArrayInitTypeSizeU3D40_t1547998296 * get_address_of_B9F0004E3873FDDCABFDA6174EA18F0859B637B4_21() { return &___B9F0004E3873FDDCABFDA6174EA18F0859B637B4_21; }
	inline void set_B9F0004E3873FDDCABFDA6174EA18F0859B637B4_21(__StaticArrayInitTypeSizeU3D40_t1547998296  value)
	{
		___B9F0004E3873FDDCABFDA6174EA18F0859B637B4_21 = value;
	}

	inline static int32_t get_offset_of_BAD037B714E1CD1052149B51238A3D4351DD10B5_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___BAD037B714E1CD1052149B51238A3D4351DD10B5_22)); }
	inline __StaticArrayInitTypeSizeU3D20_t1548391512  get_BAD037B714E1CD1052149B51238A3D4351DD10B5_22() const { return ___BAD037B714E1CD1052149B51238A3D4351DD10B5_22; }
	inline __StaticArrayInitTypeSizeU3D20_t1548391512 * get_address_of_BAD037B714E1CD1052149B51238A3D4351DD10B5_22() { return &___BAD037B714E1CD1052149B51238A3D4351DD10B5_22; }
	inline void set_BAD037B714E1CD1052149B51238A3D4351DD10B5_22(__StaticArrayInitTypeSizeU3D20_t1548391512  value)
	{
		___BAD037B714E1CD1052149B51238A3D4351DD10B5_22 = value;
	}

	inline static int32_t get_offset_of_C2D6E36D84DDA5D661B95D7B32D3F47CD7ACBF6C_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___C2D6E36D84DDA5D661B95D7B32D3F47CD7ACBF6C_23)); }
	inline __StaticArrayInitTypeSizeU3D16_t385395490  get_C2D6E36D84DDA5D661B95D7B32D3F47CD7ACBF6C_23() const { return ___C2D6E36D84DDA5D661B95D7B32D3F47CD7ACBF6C_23; }
	inline __StaticArrayInitTypeSizeU3D16_t385395490 * get_address_of_C2D6E36D84DDA5D661B95D7B32D3F47CD7ACBF6C_23() { return &___C2D6E36D84DDA5D661B95D7B32D3F47CD7ACBF6C_23; }
	inline void set_C2D6E36D84DDA5D661B95D7B32D3F47CD7ACBF6C_23(__StaticArrayInitTypeSizeU3D16_t385395490  value)
	{
		___C2D6E36D84DDA5D661B95D7B32D3F47CD7ACBF6C_23 = value;
	}

	inline static int32_t get_offset_of_DCF398750721AA7A27A6BA56E99350329B06E8B1_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___DCF398750721AA7A27A6BA56E99350329B06E8B1_24)); }
	inline __StaticArrayInitTypeSizeU3D16_t385395490  get_DCF398750721AA7A27A6BA56E99350329B06E8B1_24() const { return ___DCF398750721AA7A27A6BA56E99350329B06E8B1_24; }
	inline __StaticArrayInitTypeSizeU3D16_t385395490 * get_address_of_DCF398750721AA7A27A6BA56E99350329B06E8B1_24() { return &___DCF398750721AA7A27A6BA56E99350329B06E8B1_24; }
	inline void set_DCF398750721AA7A27A6BA56E99350329B06E8B1_24(__StaticArrayInitTypeSizeU3D16_t385395490  value)
	{
		___DCF398750721AA7A27A6BA56E99350329B06E8B1_24 = value;
	}

	inline static int32_t get_offset_of_EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_25)); }
	inline int64_t get_EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_25() const { return ___EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_25; }
	inline int64_t* get_address_of_EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_25() { return &___EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_25; }
	inline void set_EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_25(int64_t value)
	{
		___EBC658B067B5C785A3F0BB67D73755F6FEE7F70C_25 = value;
	}

	inline static int32_t get_offset_of_ED18A4A1FF7C89B400D7CA156BA8D11BB09E1DE4_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___ED18A4A1FF7C89B400D7CA156BA8D11BB09E1DE4_26)); }
	inline __StaticArrayInitTypeSizeU3D36_t385526562  get_ED18A4A1FF7C89B400D7CA156BA8D11BB09E1DE4_26() const { return ___ED18A4A1FF7C89B400D7CA156BA8D11BB09E1DE4_26; }
	inline __StaticArrayInitTypeSizeU3D36_t385526562 * get_address_of_ED18A4A1FF7C89B400D7CA156BA8D11BB09E1DE4_26() { return &___ED18A4A1FF7C89B400D7CA156BA8D11BB09E1DE4_26; }
	inline void set_ED18A4A1FF7C89B400D7CA156BA8D11BB09E1DE4_26(__StaticArrayInitTypeSizeU3D36_t385526562  value)
	{
		___ED18A4A1FF7C89B400D7CA156BA8D11BB09E1DE4_26 = value;
	}

	inline static int32_t get_offset_of_EE3413A2C088FF9432054D6E60A7CB6A498D25F0_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___EE3413A2C088FF9432054D6E60A7CB6A498D25F0_27)); }
	inline __StaticArrayInitTypeSizeU3D64_t3517497836  get_EE3413A2C088FF9432054D6E60A7CB6A498D25F0_27() const { return ___EE3413A2C088FF9432054D6E60A7CB6A498D25F0_27; }
	inline __StaticArrayInitTypeSizeU3D64_t3517497836 * get_address_of_EE3413A2C088FF9432054D6E60A7CB6A498D25F0_27() { return &___EE3413A2C088FF9432054D6E60A7CB6A498D25F0_27; }
	inline void set_EE3413A2C088FF9432054D6E60A7CB6A498D25F0_27(__StaticArrayInitTypeSizeU3D64_t3517497836  value)
	{
		___EE3413A2C088FF9432054D6E60A7CB6A498D25F0_27 = value;
	}

	inline static int32_t get_offset_of_FFE3F15642234E7FAD6951D432F1134D5AD15922_28() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___FFE3F15642234E7FAD6951D432F1134D5AD15922_28)); }
	inline __StaticArrayInitTypeSizeU3D20_t1548391512  get_FFE3F15642234E7FAD6951D432F1134D5AD15922_28() const { return ___FFE3F15642234E7FAD6951D432F1134D5AD15922_28; }
	inline __StaticArrayInitTypeSizeU3D20_t1548391512 * get_address_of_FFE3F15642234E7FAD6951D432F1134D5AD15922_28() { return &___FFE3F15642234E7FAD6951D432F1134D5AD15922_28; }
	inline void set_FFE3F15642234E7FAD6951D432F1134D5AD15922_28(__StaticArrayInitTypeSizeU3D20_t1548391512  value)
	{
		___FFE3F15642234E7FAD6951D432F1134D5AD15922_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255362_H
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
#ifndef REQUESTCACHELEVEL_T1509648360_H
#define REQUESTCACHELEVEL_T1509648360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheLevel
struct  RequestCacheLevel_t1509648360 
{
public:
	// System.Int32 System.Net.Cache.RequestCacheLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RequestCacheLevel_t1509648360, ___value___2)); }
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
#endif // REQUESTCACHELEVEL_T1509648360_H
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
#ifndef ASYNCTASKMETHODBUILDER_1_T1106113378_H
#define ASYNCTASKMETHODBUILDER_1_T1106113378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct  AsyncTaskMethodBuilder_1_t1106113378 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t190679043 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t1106113378, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t1106113378, ___m_task_2)); }
	inline Task_1_t190679043 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t190679043 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t190679043 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t1106113378_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t190679043 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t1106113378_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t190679043 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t190679043 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t190679043 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T1106113378_H
#ifndef CONFIGUREDTASKAWAITABLE_1_T3870950252_H
#define CONFIGUREDTASKAWAITABLE_1_T3870950252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.IO.Stream>
struct  ConfiguredTaskAwaitable_1_t3870950252 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t2595523894  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t3870950252, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t2595523894  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t2595523894 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t2595523894  value)
	{
		___m_configuredTaskAwaiter_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGUREDTASKAWAITABLE_1_T3870950252_H
#ifndef CONFIGUREDTASKAWAITABLE_1_T1383066211_H
#define CONFIGUREDTASKAWAITABLE_1_T1383066211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct  ConfiguredTaskAwaitable_1_t1383066211 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t107639853  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t1383066211, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t107639853  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t107639853 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t107639853  value)
	{
		___m_configuredTaskAwaiter_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGUREDTASKAWAITABLE_1_T1383066211_H
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
#ifndef TASK_T3187275312_H
#define TASK_T3187275312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task
struct  Task_t3187275312  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t1196198384 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t3187275312 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t2170468915 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_action_5), value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateObject_6), value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_taskScheduler_7)); }
	inline TaskScheduler_t1196198384 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t1196198384 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t1196198384 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_taskScheduler_7), value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_parent_8)); }
	inline Task_t3187275312 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t3187275312 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t3187275312 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_parent_8), value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_continuationObject_10), value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_contingentProperties_15)); }
	inline ContingentProperties_t2170468915 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t2170468915 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t2170468915 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_contingentProperties_15), value);
	}
};

struct Task_t3187275312_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t2660013028 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t2075988643 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t3252573759 * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t1600215562 * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t3187275312 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t4012569436 * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t3823316192 * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t3905400288 * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t2660013028 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t2660013028 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t2660013028 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_factory_3), value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCompletionSentinel_11), value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_t2075988643 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_t2075988643 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_t2075988643 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_currentActiveTasks_13), value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_activeTasksLock_14), value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_t3252573759 * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_t3252573759 ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_t3252573759 * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCancelCallback_16), value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_t1600215562 * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_t1600215562 ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_t1600215562 * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_createContingentProperties_17), value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_completedTask_18)); }
	inline Task_t3187275312 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t3187275312 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t3187275312 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_completedTask_18), value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_t4012569436 * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_t4012569436 ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_t4012569436 * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsExceptionObservedByParentPredicate_19), value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t3823316192 * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t3823316192 ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t3823316192 * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((&___s_ecCallback_20), value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t3905400288 * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t3905400288 ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t3905400288 * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsTaskContinuationNullPredicate_21), value);
	}
};

struct Task_t3187275312_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t3187275312 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t1472778820 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t3187275312_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t3187275312 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t3187275312 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t3187275312 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_currentTask_0), value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t3187275312_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t1472778820 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t1472778820 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t1472778820 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((&___t_stackGuard_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_T3187275312_H
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
#ifndef CONFORMANCELEVEL_T3899847875_H
#define CONFORMANCELEVEL_T3899847875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ConformanceLevel
struct  ConformanceLevel_t3899847875 
{
public:
	// System.Int32 System.Xml.ConformanceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConformanceLevel_t3899847875, ___value___2)); }
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
#endif // CONFORMANCELEVEL_T3899847875_H
#ifndef DTDPROCESSING_T1163997051_H
#define DTDPROCESSING_T1163997051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.DtdProcessing
struct  DtdProcessing_t1163997051 
{
public:
	// System.Int32 System.Xml.DtdProcessing::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DtdProcessing_t1163997051, ___value___2)); }
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
#endif // DTDPROCESSING_T1163997051_H
#ifndef ENTITYHANDLING_T1047276436_H
#define ENTITYHANDLING_T1047276436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.EntityHandling
struct  EntityHandling_t1047276436 
{
public:
	// System.Int32 System.Xml.EntityHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EntityHandling_t1047276436, ___value___2)); }
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
#endif // ENTITYHANDLING_T1047276436_H
#ifndef FORMATTING_T1232942836_H
#define FORMATTING_T1232942836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Formatting
struct  Formatting_t1232942836 
{
public:
	// System.Int32 System.Xml.Formatting::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Formatting_t1232942836, ___value___2)); }
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
#endif // FORMATTING_T1232942836_H
#ifndef STATE_T1355373645_H
#define STATE_T1355373645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ReadContentAsBinaryHelper/State
struct  State_t1355373645 
{
public:
	// System.Int32 System.Xml.ReadContentAsBinaryHelper/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t1355373645, ___value___2)); }
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
#endif // STATE_T1355373645_H
#ifndef READSTATE_T944984020_H
#define READSTATE_T944984020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ReadState
struct  ReadState_t944984020 
{
public:
	// System.Int32 System.Xml.ReadState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReadState_t944984020, ___value___2)); }
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
#endif // READSTATE_T944984020_H
#ifndef RESERVE_T3586464976_H
#define RESERVE_T3586464976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SchemaAttDef/Reserve
struct  Reserve_t3586464976 
{
public:
	// System.Int32 System.Xml.Schema.SchemaAttDef/Reserve::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Reserve_t3586464976, ___value___2)); }
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
#endif // RESERVE_T3586464976_H
#ifndef USE_T2902096781_H
#define USE_T2902096781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SchemaDeclBase/Use
struct  Use_t2902096781 
{
public:
	// System.Int32 System.Xml.Schema.SchemaDeclBase/Use::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Use_t2902096781, ___value___2)); }
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
#endif // USE_T2902096781_H
#ifndef XMLSCHEMAEXCEPTION_T3511258692_H
#define XMLSCHEMAEXCEPTION_T3511258692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaException
struct  XmlSchemaException_t3511258692  : public SystemException_t176217640
{
public:
	// System.String System.Xml.Schema.XmlSchemaException::res
	String_t* ___res_17;
	// System.String[] System.Xml.Schema.XmlSchemaException::args
	StringU5BU5D_t1281789340* ___args_18;
	// System.String System.Xml.Schema.XmlSchemaException::sourceUri
	String_t* ___sourceUri_19;
	// System.Int32 System.Xml.Schema.XmlSchemaException::lineNumber
	int32_t ___lineNumber_20;
	// System.Int32 System.Xml.Schema.XmlSchemaException::linePosition
	int32_t ___linePosition_21;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaException::sourceSchemaObject
	XmlSchemaObject_t1315720168 * ___sourceSchemaObject_22;
	// System.String System.Xml.Schema.XmlSchemaException::message
	String_t* ___message_23;

public:
	inline static int32_t get_offset_of_res_17() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___res_17)); }
	inline String_t* get_res_17() const { return ___res_17; }
	inline String_t** get_address_of_res_17() { return &___res_17; }
	inline void set_res_17(String_t* value)
	{
		___res_17 = value;
		Il2CppCodeGenWriteBarrier((&___res_17), value);
	}

	inline static int32_t get_offset_of_args_18() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___args_18)); }
	inline StringU5BU5D_t1281789340* get_args_18() const { return ___args_18; }
	inline StringU5BU5D_t1281789340** get_address_of_args_18() { return &___args_18; }
	inline void set_args_18(StringU5BU5D_t1281789340* value)
	{
		___args_18 = value;
		Il2CppCodeGenWriteBarrier((&___args_18), value);
	}

	inline static int32_t get_offset_of_sourceUri_19() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___sourceUri_19)); }
	inline String_t* get_sourceUri_19() const { return ___sourceUri_19; }
	inline String_t** get_address_of_sourceUri_19() { return &___sourceUri_19; }
	inline void set_sourceUri_19(String_t* value)
	{
		___sourceUri_19 = value;
		Il2CppCodeGenWriteBarrier((&___sourceUri_19), value);
	}

	inline static int32_t get_offset_of_lineNumber_20() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___lineNumber_20)); }
	inline int32_t get_lineNumber_20() const { return ___lineNumber_20; }
	inline int32_t* get_address_of_lineNumber_20() { return &___lineNumber_20; }
	inline void set_lineNumber_20(int32_t value)
	{
		___lineNumber_20 = value;
	}

	inline static int32_t get_offset_of_linePosition_21() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___linePosition_21)); }
	inline int32_t get_linePosition_21() const { return ___linePosition_21; }
	inline int32_t* get_address_of_linePosition_21() { return &___linePosition_21; }
	inline void set_linePosition_21(int32_t value)
	{
		___linePosition_21 = value;
	}

	inline static int32_t get_offset_of_sourceSchemaObject_22() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___sourceSchemaObject_22)); }
	inline XmlSchemaObject_t1315720168 * get_sourceSchemaObject_22() const { return ___sourceSchemaObject_22; }
	inline XmlSchemaObject_t1315720168 ** get_address_of_sourceSchemaObject_22() { return &___sourceSchemaObject_22; }
	inline void set_sourceSchemaObject_22(XmlSchemaObject_t1315720168 * value)
	{
		___sourceSchemaObject_22 = value;
		Il2CppCodeGenWriteBarrier((&___sourceSchemaObject_22), value);
	}

	inline static int32_t get_offset_of_message_23() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___message_23)); }
	inline String_t* get_message_23() const { return ___message_23; }
	inline String_t** get_address_of_message_23() { return &___message_23; }
	inline void set_message_23(String_t* value)
	{
		___message_23 = value;
		Il2CppCodeGenWriteBarrier((&___message_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAEXCEPTION_T3511258692_H
#ifndef XMLSCHEMAVALIDATIONFLAGS_T877176585_H
#define XMLSCHEMAVALIDATIONFLAGS_T877176585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaValidationFlags
struct  XmlSchemaValidationFlags_t877176585 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaValidationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSchemaValidationFlags_t877176585, ___value___2)); }
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
#endif // XMLSCHEMAVALIDATIONFLAGS_T877176585_H
#ifndef XMLSEVERITYTYPE_T1894651412_H
#define XMLSEVERITYTYPE_T1894651412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSeverityType
struct  XmlSeverityType_t1894651412 
{
public:
	// System.Int32 System.Xml.Schema.XmlSeverityType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSeverityType_t1894651412, ___value___2)); }
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
#endif // XMLSEVERITYTYPE_T1894651412_H
#ifndef VALIDATIONTYPE_T4049928607_H
#define VALIDATIONTYPE_T4049928607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ValidationType
struct  ValidationType_t4049928607 
{
public:
	// System.Int32 System.Xml.ValidationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ValidationType_t4049928607, ___value___2)); }
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
#endif // VALIDATIONTYPE_T4049928607_H
#ifndef WHITESPACEHANDLING_T784045650_H
#define WHITESPACEHANDLING_T784045650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.WhitespaceHandling
struct  WhitespaceHandling_t784045650 
{
public:
	// System.Int32 System.Xml.WhitespaceHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WhitespaceHandling_t784045650, ___value___2)); }
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
#endif // WHITESPACEHANDLING_T784045650_H
#ifndef WRITESTATE_T3983380671_H
#define WRITESTATE_T3983380671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.WriteState
struct  WriteState_t3983380671 
{
public:
	// System.Int32 System.Xml.WriteState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WriteState_t3983380671, ___value___2)); }
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
#endif // WRITESTATE_T3983380671_H
#ifndef XMLCHARACTERDATA_T1167807131_H
#define XMLCHARACTERDATA_T1167807131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlCharacterData
struct  XmlCharacterData_t1167807131  : public XmlLinkedNode_t1437094927
{
public:
	// System.String System.Xml.XmlCharacterData::data
	String_t* ___data_2;

public:
	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(XmlCharacterData_t1167807131, ___data_2)); }
	inline String_t* get_data_2() const { return ___data_2; }
	inline String_t** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(String_t* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((&___data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLCHARACTERDATA_T1167807131_H
#ifndef XMLEXCEPTION_T1761730631_H
#define XMLEXCEPTION_T1761730631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlException
struct  XmlException_t1761730631  : public SystemException_t176217640
{
public:
	// System.String System.Xml.XmlException::res
	String_t* ___res_17;
	// System.String[] System.Xml.XmlException::args
	StringU5BU5D_t1281789340* ___args_18;
	// System.Int32 System.Xml.XmlException::lineNumber
	int32_t ___lineNumber_19;
	// System.Int32 System.Xml.XmlException::linePosition
	int32_t ___linePosition_20;
	// System.String System.Xml.XmlException::sourceUri
	String_t* ___sourceUri_21;
	// System.String System.Xml.XmlException::message
	String_t* ___message_22;

public:
	inline static int32_t get_offset_of_res_17() { return static_cast<int32_t>(offsetof(XmlException_t1761730631, ___res_17)); }
	inline String_t* get_res_17() const { return ___res_17; }
	inline String_t** get_address_of_res_17() { return &___res_17; }
	inline void set_res_17(String_t* value)
	{
		___res_17 = value;
		Il2CppCodeGenWriteBarrier((&___res_17), value);
	}

	inline static int32_t get_offset_of_args_18() { return static_cast<int32_t>(offsetof(XmlException_t1761730631, ___args_18)); }
	inline StringU5BU5D_t1281789340* get_args_18() const { return ___args_18; }
	inline StringU5BU5D_t1281789340** get_address_of_args_18() { return &___args_18; }
	inline void set_args_18(StringU5BU5D_t1281789340* value)
	{
		___args_18 = value;
		Il2CppCodeGenWriteBarrier((&___args_18), value);
	}

	inline static int32_t get_offset_of_lineNumber_19() { return static_cast<int32_t>(offsetof(XmlException_t1761730631, ___lineNumber_19)); }
	inline int32_t get_lineNumber_19() const { return ___lineNumber_19; }
	inline int32_t* get_address_of_lineNumber_19() { return &___lineNumber_19; }
	inline void set_lineNumber_19(int32_t value)
	{
		___lineNumber_19 = value;
	}

	inline static int32_t get_offset_of_linePosition_20() { return static_cast<int32_t>(offsetof(XmlException_t1761730631, ___linePosition_20)); }
	inline int32_t get_linePosition_20() const { return ___linePosition_20; }
	inline int32_t* get_address_of_linePosition_20() { return &___linePosition_20; }
	inline void set_linePosition_20(int32_t value)
	{
		___linePosition_20 = value;
	}

	inline static int32_t get_offset_of_sourceUri_21() { return static_cast<int32_t>(offsetof(XmlException_t1761730631, ___sourceUri_21)); }
	inline String_t* get_sourceUri_21() const { return ___sourceUri_21; }
	inline String_t** get_address_of_sourceUri_21() { return &___sourceUri_21; }
	inline void set_sourceUri_21(String_t* value)
	{
		___sourceUri_21 = value;
		Il2CppCodeGenWriteBarrier((&___sourceUri_21), value);
	}

	inline static int32_t get_offset_of_message_22() { return static_cast<int32_t>(offsetof(XmlException_t1761730631, ___message_22)); }
	inline String_t* get_message_22() const { return ___message_22; }
	inline String_t** get_address_of_message_22() { return &___message_22; }
	inline void set_message_22(String_t* value)
	{
		___message_22 = value;
		Il2CppCodeGenWriteBarrier((&___message_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLEXCEPTION_T1761730631_H
#ifndef XMLNAMESPACESCOPE_T2206194836_H
#define XMLNAMESPACESCOPE_T2206194836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNamespaceScope
struct  XmlNamespaceScope_t2206194836 
{
public:
	// System.Int32 System.Xml.XmlNamespaceScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlNamespaceScope_t2206194836, ___value___2)); }
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
#endif // XMLNAMESPACESCOPE_T2206194836_H
#ifndef XMLNODETYPE_T1672767151_H
#define XMLNODETYPE_T1672767151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeType
struct  XmlNodeType_t1672767151 
{
public:
	// System.Int32 System.Xml.XmlNodeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlNodeType_t1672767151, ___value___2)); }
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
#endif // XMLNODETYPE_T1672767151_H
#ifndef XMLSPACE_T3324193251_H
#define XMLSPACE_T3324193251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlSpace
struct  XmlSpace_t3324193251 
{
public:
	// System.Int32 System.Xml.XmlSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSpace_t3324193251, ___value___2)); }
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
#endif // XMLSPACE_T3324193251_H
#ifndef XMLTEXTENCODER_T1632274355_H
#define XMLTEXTENCODER_T1632274355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextEncoder
struct  XmlTextEncoder_t1632274355  : public RuntimeObject
{
public:
	// System.IO.TextWriter System.Xml.XmlTextEncoder::textWriter
	TextWriter_t3478189236 * ___textWriter_0;
	// System.Boolean System.Xml.XmlTextEncoder::inAttribute
	bool ___inAttribute_1;
	// System.Char System.Xml.XmlTextEncoder::quoteChar
	Il2CppChar ___quoteChar_2;
	// System.Text.StringBuilder System.Xml.XmlTextEncoder::attrValue
	StringBuilder_t * ___attrValue_3;
	// System.Boolean System.Xml.XmlTextEncoder::cacheAttrValue
	bool ___cacheAttrValue_4;
	// System.Xml.XmlCharType System.Xml.XmlTextEncoder::xmlCharType
	XmlCharType_t2277243275  ___xmlCharType_5;

public:
	inline static int32_t get_offset_of_textWriter_0() { return static_cast<int32_t>(offsetof(XmlTextEncoder_t1632274355, ___textWriter_0)); }
	inline TextWriter_t3478189236 * get_textWriter_0() const { return ___textWriter_0; }
	inline TextWriter_t3478189236 ** get_address_of_textWriter_0() { return &___textWriter_0; }
	inline void set_textWriter_0(TextWriter_t3478189236 * value)
	{
		___textWriter_0 = value;
		Il2CppCodeGenWriteBarrier((&___textWriter_0), value);
	}

	inline static int32_t get_offset_of_inAttribute_1() { return static_cast<int32_t>(offsetof(XmlTextEncoder_t1632274355, ___inAttribute_1)); }
	inline bool get_inAttribute_1() const { return ___inAttribute_1; }
	inline bool* get_address_of_inAttribute_1() { return &___inAttribute_1; }
	inline void set_inAttribute_1(bool value)
	{
		___inAttribute_1 = value;
	}

	inline static int32_t get_offset_of_quoteChar_2() { return static_cast<int32_t>(offsetof(XmlTextEncoder_t1632274355, ___quoteChar_2)); }
	inline Il2CppChar get_quoteChar_2() const { return ___quoteChar_2; }
	inline Il2CppChar* get_address_of_quoteChar_2() { return &___quoteChar_2; }
	inline void set_quoteChar_2(Il2CppChar value)
	{
		___quoteChar_2 = value;
	}

	inline static int32_t get_offset_of_attrValue_3() { return static_cast<int32_t>(offsetof(XmlTextEncoder_t1632274355, ___attrValue_3)); }
	inline StringBuilder_t * get_attrValue_3() const { return ___attrValue_3; }
	inline StringBuilder_t ** get_address_of_attrValue_3() { return &___attrValue_3; }
	inline void set_attrValue_3(StringBuilder_t * value)
	{
		___attrValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___attrValue_3), value);
	}

	inline static int32_t get_offset_of_cacheAttrValue_4() { return static_cast<int32_t>(offsetof(XmlTextEncoder_t1632274355, ___cacheAttrValue_4)); }
	inline bool get_cacheAttrValue_4() const { return ___cacheAttrValue_4; }
	inline bool* get_address_of_cacheAttrValue_4() { return &___cacheAttrValue_4; }
	inline void set_cacheAttrValue_4(bool value)
	{
		___cacheAttrValue_4 = value;
	}

	inline static int32_t get_offset_of_xmlCharType_5() { return static_cast<int32_t>(offsetof(XmlTextEncoder_t1632274355, ___xmlCharType_5)); }
	inline XmlCharType_t2277243275  get_xmlCharType_5() const { return ___xmlCharType_5; }
	inline XmlCharType_t2277243275 * get_address_of_xmlCharType_5() { return &___xmlCharType_5; }
	inline void set_xmlCharType_5(XmlCharType_t2277243275  value)
	{
		___xmlCharType_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLTEXTENCODER_T1632274355_H
#ifndef ENTITYEXPANDTYPE_T2794135677_H
#define ENTITYEXPANDTYPE_T2794135677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReaderImpl/EntityExpandType
struct  EntityExpandType_t2794135677 
{
public:
	// System.Int32 System.Xml.XmlTextReaderImpl/EntityExpandType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EntityExpandType_t2794135677, ___value___2)); }
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
#endif // ENTITYEXPANDTYPE_T2794135677_H
#ifndef ENTITYTYPE_T2463313529_H
#define ENTITYTYPE_T2463313529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReaderImpl/EntityType
struct  EntityType_t2463313529 
{
public:
	// System.Int32 System.Xml.XmlTextReaderImpl/EntityType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EntityType_t2463313529, ___value___2)); }
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
#endif // ENTITYTYPE_T2463313529_H
#ifndef INCREMENTALREADSTATE_T591482297_H
#define INCREMENTALREADSTATE_T591482297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReaderImpl/IncrementalReadState
struct  IncrementalReadState_t591482297 
{
public:
	// System.Int32 System.Xml.XmlTextReaderImpl/IncrementalReadState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IncrementalReadState_t591482297, ___value___2)); }
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
#endif // INCREMENTALREADSTATE_T591482297_H
#ifndef INITINPUTTYPE_T933223089_H
#define INITINPUTTYPE_T933223089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReaderImpl/InitInputType
struct  InitInputType_t933223089 
{
public:
	// System.Int32 System.Xml.XmlTextReaderImpl/InitInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitInputType_t933223089, ___value___2)); }
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
#endif // INITINPUTTYPE_T933223089_H
#ifndef PARSINGFUNCTION_T2722146511_H
#define PARSINGFUNCTION_T2722146511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReaderImpl/ParsingFunction
struct  ParsingFunction_t2722146511 
{
public:
	// System.Int32 System.Xml.XmlTextReaderImpl/ParsingFunction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParsingFunction_t2722146511, ___value___2)); }
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
#endif // PARSINGFUNCTION_T2722146511_H
#ifndef PARSINGMODE_T1812726891_H
#define PARSINGMODE_T1812726891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReaderImpl/ParsingMode
struct  ParsingMode_t1812726891 
{
public:
	// System.Int32 System.Xml.XmlTextReaderImpl/ParsingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParsingMode_t1812726891, ___value___2)); }
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
#endif // PARSINGMODE_T1812726891_H
#ifndef NAMESPACESTATE_T853084585_H
#define NAMESPACESTATE_T853084585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/NamespaceState
struct  NamespaceState_t853084585 
{
public:
	// System.Int32 System.Xml.XmlTextWriter/NamespaceState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NamespaceState_t853084585, ___value___2)); }
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
#endif // NAMESPACESTATE_T853084585_H
#ifndef SPECIALATTR_T319442854_H
#define SPECIALATTR_T319442854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/SpecialAttr
struct  SpecialAttr_t319442854 
{
public:
	// System.Int32 System.Xml.XmlTextWriter/SpecialAttr::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpecialAttr_t319442854, ___value___2)); }
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
#endif // SPECIALATTR_T319442854_H
#ifndef STATE_T1792539347_H
#define STATE_T1792539347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/State
struct  State_t1792539347 
{
public:
	// System.Int32 System.Xml.XmlTextWriter/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t1792539347, ___value___2)); }
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
#endif // STATE_T1792539347_H
#ifndef TOKEN_T2430492165_H
#define TOKEN_T2430492165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/Token
struct  Token_t2430492165 
{
public:
	// System.Int32 System.Xml.XmlTextWriter/Token::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Token_t2430492165, ___value___2)); }
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
#endif // TOKEN_T2430492165_H
#ifndef XMLTOKENIZEDTYPE_T3348692225_H
#define XMLTOKENIZEDTYPE_T3348692225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTokenizedType
struct  XmlTokenizedType_t3348692225 
{
public:
	// System.Int32 System.Xml.XmlTokenizedType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlTokenizedType_t3348692225, ___value___2)); }
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
#endif // XMLTOKENIZEDTYPE_T3348692225_H
#ifndef XMLUNSPECIFIEDATTRIBUTE_T999215640_H
#define XMLUNSPECIFIEDATTRIBUTE_T999215640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlUnspecifiedAttribute
struct  XmlUnspecifiedAttribute_t999215640  : public XmlAttribute_t1173852259
{
public:
	// System.Boolean System.Xml.XmlUnspecifiedAttribute::fSpecified
	bool ___fSpecified_3;

public:
	inline static int32_t get_offset_of_fSpecified_3() { return static_cast<int32_t>(offsetof(XmlUnspecifiedAttribute_t999215640, ___fSpecified_3)); }
	inline bool get_fSpecified_3() const { return ___fSpecified_3; }
	inline bool* get_address_of_fSpecified_3() { return &___fSpecified_3; }
	inline void set_fSpecified_3(bool value)
	{
		___fSpecified_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLUNSPECIFIEDATTRIBUTE_T999215640_H
#ifndef PARSINGFUNCTION_T767331079_H
#define PARSINGFUNCTION_T767331079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlValidatingReaderImpl/ParsingFunction
struct  ParsingFunction_t767331079 
{
public:
	// System.Int32 System.Xml.XmlValidatingReaderImpl/ParsingFunction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParsingFunction_t767331079, ___value___2)); }
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
#endif // PARSINGFUNCTION_T767331079_H
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
#ifndef REQUESTCACHEPOLICY_T2923596909_H
#define REQUESTCACHEPOLICY_T2923596909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCachePolicy
struct  RequestCachePolicy_t2923596909  : public RuntimeObject
{
public:
	// System.Net.Cache.RequestCacheLevel System.Net.Cache.RequestCachePolicy::m_Level
	int32_t ___m_Level_0;

public:
	inline static int32_t get_offset_of_m_Level_0() { return static_cast<int32_t>(offsetof(RequestCachePolicy_t2923596909, ___m_Level_0)); }
	inline int32_t get_m_Level_0() const { return ___m_Level_0; }
	inline int32_t* get_address_of_m_Level_0() { return &___m_Level_0; }
	inline void set_m_Level_0(int32_t value)
	{
		___m_Level_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEPOLICY_T2923596909_H
#ifndef TASK_1_T2678563084_H
#define TASK_1_T2678563084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.IO.Stream>
struct  Task_1_t2678563084  : public Task_t3187275312
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Stream_t1273022909 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t2678563084, ___m_result_22)); }
	inline Stream_t1273022909 * get_m_result_22() const { return ___m_result_22; }
	inline Stream_t1273022909 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(Stream_t1273022909 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_result_22), value);
	}
};

struct Task_1_t2678563084_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t1332451455 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t2489992967 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t2678563084_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t1332451455 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t1332451455 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t1332451455 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_23), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t2678563084_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t2489992967 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t2489992967 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t2489992967 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T2678563084_H
#ifndef TASK_1_T190679043_H
#define TASK_1_T190679043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.Object>
struct  Task_1_t190679043  : public Task_t3187275312
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t190679043, ___m_result_22)); }
	inline RuntimeObject * get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_result_22), value);
	}
};

struct Task_1_t190679043_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t3139534710 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t2108926 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t190679043_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t3139534710 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t3139534710 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t3139534710 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_23), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t190679043_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t2108926 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t2108926 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t2108926 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T190679043_H
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
#ifndef READCONTENTASBINARYHELPER_T3017207972_H
#define READCONTENTASBINARYHELPER_T3017207972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ReadContentAsBinaryHelper
struct  ReadContentAsBinaryHelper_t3017207972  : public RuntimeObject
{
public:
	// System.Xml.XmlReader System.Xml.ReadContentAsBinaryHelper::reader
	XmlReader_t3121518892 * ___reader_0;
	// System.Xml.ReadContentAsBinaryHelper/State System.Xml.ReadContentAsBinaryHelper::state
	int32_t ___state_1;
	// System.Int32 System.Xml.ReadContentAsBinaryHelper::valueOffset
	int32_t ___valueOffset_2;
	// System.Boolean System.Xml.ReadContentAsBinaryHelper::isEnd
	bool ___isEnd_3;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ReadContentAsBinaryHelper_t3017207972, ___reader_0)); }
	inline XmlReader_t3121518892 * get_reader_0() const { return ___reader_0; }
	inline XmlReader_t3121518892 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(XmlReader_t3121518892 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(ReadContentAsBinaryHelper_t3017207972, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_valueOffset_2() { return static_cast<int32_t>(offsetof(ReadContentAsBinaryHelper_t3017207972, ___valueOffset_2)); }
	inline int32_t get_valueOffset_2() const { return ___valueOffset_2; }
	inline int32_t* get_address_of_valueOffset_2() { return &___valueOffset_2; }
	inline void set_valueOffset_2(int32_t value)
	{
		___valueOffset_2 = value;
	}

	inline static int32_t get_offset_of_isEnd_3() { return static_cast<int32_t>(offsetof(ReadContentAsBinaryHelper_t3017207972, ___isEnd_3)); }
	inline bool get_isEnd_3() const { return ___isEnd_3; }
	inline bool* get_address_of_isEnd_3() { return &___isEnd_3; }
	inline void set_isEnd_3(bool value)
	{
		___isEnd_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READCONTENTASBINARYHELPER_T3017207972_H
#ifndef SCHEMADECLBASE_T3500554832_H
#define SCHEMADECLBASE_T3500554832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SchemaDeclBase
struct  SchemaDeclBase_t3500554832  : public RuntimeObject
{
public:
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaDeclBase::name
	XmlQualifiedName_t2760654312 * ___name_0;
	// System.String System.Xml.Schema.SchemaDeclBase::prefix
	String_t* ___prefix_1;
	// System.Boolean System.Xml.Schema.SchemaDeclBase::isDeclaredInExternal
	bool ___isDeclaredInExternal_2;
	// System.Xml.Schema.SchemaDeclBase/Use System.Xml.Schema.SchemaDeclBase::presence
	int32_t ___presence_3;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.SchemaDeclBase::schemaType
	XmlSchemaType_t2033747345 * ___schemaType_4;
	// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.SchemaDeclBase::datatype
	XmlSchemaDatatype_t322714710 * ___datatype_5;
	// System.String System.Xml.Schema.SchemaDeclBase::defaultValueRaw
	String_t* ___defaultValueRaw_6;
	// System.Object System.Xml.Schema.SchemaDeclBase::defaultValueTyped
	RuntimeObject * ___defaultValueTyped_7;
	// System.Int64 System.Xml.Schema.SchemaDeclBase::maxLength
	int64_t ___maxLength_8;
	// System.Int64 System.Xml.Schema.SchemaDeclBase::minLength
	int64_t ___minLength_9;
	// System.Collections.Generic.List`1<System.String> System.Xml.Schema.SchemaDeclBase::values
	List_1_t3319525431 * ___values_10;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___name_0)); }
	inline XmlQualifiedName_t2760654312 * get_name_0() const { return ___name_0; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(XmlQualifiedName_t2760654312 * value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_prefix_1() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___prefix_1)); }
	inline String_t* get_prefix_1() const { return ___prefix_1; }
	inline String_t** get_address_of_prefix_1() { return &___prefix_1; }
	inline void set_prefix_1(String_t* value)
	{
		___prefix_1 = value;
		Il2CppCodeGenWriteBarrier((&___prefix_1), value);
	}

	inline static int32_t get_offset_of_isDeclaredInExternal_2() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___isDeclaredInExternal_2)); }
	inline bool get_isDeclaredInExternal_2() const { return ___isDeclaredInExternal_2; }
	inline bool* get_address_of_isDeclaredInExternal_2() { return &___isDeclaredInExternal_2; }
	inline void set_isDeclaredInExternal_2(bool value)
	{
		___isDeclaredInExternal_2 = value;
	}

	inline static int32_t get_offset_of_presence_3() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___presence_3)); }
	inline int32_t get_presence_3() const { return ___presence_3; }
	inline int32_t* get_address_of_presence_3() { return &___presence_3; }
	inline void set_presence_3(int32_t value)
	{
		___presence_3 = value;
	}

	inline static int32_t get_offset_of_schemaType_4() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___schemaType_4)); }
	inline XmlSchemaType_t2033747345 * get_schemaType_4() const { return ___schemaType_4; }
	inline XmlSchemaType_t2033747345 ** get_address_of_schemaType_4() { return &___schemaType_4; }
	inline void set_schemaType_4(XmlSchemaType_t2033747345 * value)
	{
		___schemaType_4 = value;
		Il2CppCodeGenWriteBarrier((&___schemaType_4), value);
	}

	inline static int32_t get_offset_of_datatype_5() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___datatype_5)); }
	inline XmlSchemaDatatype_t322714710 * get_datatype_5() const { return ___datatype_5; }
	inline XmlSchemaDatatype_t322714710 ** get_address_of_datatype_5() { return &___datatype_5; }
	inline void set_datatype_5(XmlSchemaDatatype_t322714710 * value)
	{
		___datatype_5 = value;
		Il2CppCodeGenWriteBarrier((&___datatype_5), value);
	}

	inline static int32_t get_offset_of_defaultValueRaw_6() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___defaultValueRaw_6)); }
	inline String_t* get_defaultValueRaw_6() const { return ___defaultValueRaw_6; }
	inline String_t** get_address_of_defaultValueRaw_6() { return &___defaultValueRaw_6; }
	inline void set_defaultValueRaw_6(String_t* value)
	{
		___defaultValueRaw_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultValueRaw_6), value);
	}

	inline static int32_t get_offset_of_defaultValueTyped_7() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___defaultValueTyped_7)); }
	inline RuntimeObject * get_defaultValueTyped_7() const { return ___defaultValueTyped_7; }
	inline RuntimeObject ** get_address_of_defaultValueTyped_7() { return &___defaultValueTyped_7; }
	inline void set_defaultValueTyped_7(RuntimeObject * value)
	{
		___defaultValueTyped_7 = value;
		Il2CppCodeGenWriteBarrier((&___defaultValueTyped_7), value);
	}

	inline static int32_t get_offset_of_maxLength_8() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___maxLength_8)); }
	inline int64_t get_maxLength_8() const { return ___maxLength_8; }
	inline int64_t* get_address_of_maxLength_8() { return &___maxLength_8; }
	inline void set_maxLength_8(int64_t value)
	{
		___maxLength_8 = value;
	}

	inline static int32_t get_offset_of_minLength_9() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___minLength_9)); }
	inline int64_t get_minLength_9() const { return ___minLength_9; }
	inline int64_t* get_address_of_minLength_9() { return &___minLength_9; }
	inline void set_minLength_9(int64_t value)
	{
		___minLength_9 = value;
	}

	inline static int32_t get_offset_of_values_10() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___values_10)); }
	inline List_1_t3319525431 * get_values_10() const { return ___values_10; }
	inline List_1_t3319525431 ** get_address_of_values_10() { return &___values_10; }
	inline void set_values_10(List_1_t3319525431 * value)
	{
		___values_10 = value;
		Il2CppCodeGenWriteBarrier((&___values_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEMADECLBASE_T3500554832_H
#ifndef VALIDATIONEVENTARGS_T2784773869_H
#define VALIDATIONEVENTARGS_T2784773869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.ValidationEventArgs
struct  ValidationEventArgs_t2784773869  : public EventArgs_t3591816995
{
public:
	// System.Xml.Schema.XmlSchemaException System.Xml.Schema.ValidationEventArgs::ex
	XmlSchemaException_t3511258692 * ___ex_1;
	// System.Xml.Schema.XmlSeverityType System.Xml.Schema.ValidationEventArgs::severity
	int32_t ___severity_2;

public:
	inline static int32_t get_offset_of_ex_1() { return static_cast<int32_t>(offsetof(ValidationEventArgs_t2784773869, ___ex_1)); }
	inline XmlSchemaException_t3511258692 * get_ex_1() const { return ___ex_1; }
	inline XmlSchemaException_t3511258692 ** get_address_of_ex_1() { return &___ex_1; }
	inline void set_ex_1(XmlSchemaException_t3511258692 * value)
	{
		___ex_1 = value;
		Il2CppCodeGenWriteBarrier((&___ex_1), value);
	}

	inline static int32_t get_offset_of_severity_2() { return static_cast<int32_t>(offsetof(ValidationEventArgs_t2784773869, ___severity_2)); }
	inline int32_t get_severity_2() const { return ___severity_2; }
	inline int32_t* get_address_of_severity_2() { return &___severity_2; }
	inline void set_severity_2(int32_t value)
	{
		___severity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATIONEVENTARGS_T2784773869_H
#ifndef XMLPARSERCONTEXT_T2544895291_H
#define XMLPARSERCONTEXT_T2544895291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlParserContext
struct  XmlParserContext_t2544895291  : public RuntimeObject
{
public:
	// System.Xml.XmlNameTable System.Xml.XmlParserContext::_nt
	XmlNameTable_t71772148 * ____nt_0;
	// System.Xml.XmlNamespaceManager System.Xml.XmlParserContext::_nsMgr
	XmlNamespaceManager_t418790500 * ____nsMgr_1;
	// System.String System.Xml.XmlParserContext::_docTypeName
	String_t* ____docTypeName_2;
	// System.String System.Xml.XmlParserContext::_pubId
	String_t* ____pubId_3;
	// System.String System.Xml.XmlParserContext::_sysId
	String_t* ____sysId_4;
	// System.String System.Xml.XmlParserContext::_internalSubset
	String_t* ____internalSubset_5;
	// System.String System.Xml.XmlParserContext::_xmlLang
	String_t* ____xmlLang_6;
	// System.Xml.XmlSpace System.Xml.XmlParserContext::_xmlSpace
	int32_t ____xmlSpace_7;
	// System.String System.Xml.XmlParserContext::_baseURI
	String_t* ____baseURI_8;
	// System.Text.Encoding System.Xml.XmlParserContext::_encoding
	Encoding_t1523322056 * ____encoding_9;

public:
	inline static int32_t get_offset_of__nt_0() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ____nt_0)); }
	inline XmlNameTable_t71772148 * get__nt_0() const { return ____nt_0; }
	inline XmlNameTable_t71772148 ** get_address_of__nt_0() { return &____nt_0; }
	inline void set__nt_0(XmlNameTable_t71772148 * value)
	{
		____nt_0 = value;
		Il2CppCodeGenWriteBarrier((&____nt_0), value);
	}

	inline static int32_t get_offset_of__nsMgr_1() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ____nsMgr_1)); }
	inline XmlNamespaceManager_t418790500 * get__nsMgr_1() const { return ____nsMgr_1; }
	inline XmlNamespaceManager_t418790500 ** get_address_of__nsMgr_1() { return &____nsMgr_1; }
	inline void set__nsMgr_1(XmlNamespaceManager_t418790500 * value)
	{
		____nsMgr_1 = value;
		Il2CppCodeGenWriteBarrier((&____nsMgr_1), value);
	}

	inline static int32_t get_offset_of__docTypeName_2() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ____docTypeName_2)); }
	inline String_t* get__docTypeName_2() const { return ____docTypeName_2; }
	inline String_t** get_address_of__docTypeName_2() { return &____docTypeName_2; }
	inline void set__docTypeName_2(String_t* value)
	{
		____docTypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&____docTypeName_2), value);
	}

	inline static int32_t get_offset_of__pubId_3() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ____pubId_3)); }
	inline String_t* get__pubId_3() const { return ____pubId_3; }
	inline String_t** get_address_of__pubId_3() { return &____pubId_3; }
	inline void set__pubId_3(String_t* value)
	{
		____pubId_3 = value;
		Il2CppCodeGenWriteBarrier((&____pubId_3), value);
	}

	inline static int32_t get_offset_of__sysId_4() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ____sysId_4)); }
	inline String_t* get__sysId_4() const { return ____sysId_4; }
	inline String_t** get_address_of__sysId_4() { return &____sysId_4; }
	inline void set__sysId_4(String_t* value)
	{
		____sysId_4 = value;
		Il2CppCodeGenWriteBarrier((&____sysId_4), value);
	}

	inline static int32_t get_offset_of__internalSubset_5() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ____internalSubset_5)); }
	inline String_t* get__internalSubset_5() const { return ____internalSubset_5; }
	inline String_t** get_address_of__internalSubset_5() { return &____internalSubset_5; }
	inline void set__internalSubset_5(String_t* value)
	{
		____internalSubset_5 = value;
		Il2CppCodeGenWriteBarrier((&____internalSubset_5), value);
	}

	inline static int32_t get_offset_of__xmlLang_6() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ____xmlLang_6)); }
	inline String_t* get__xmlLang_6() const { return ____xmlLang_6; }
	inline String_t** get_address_of__xmlLang_6() { return &____xmlLang_6; }
	inline void set__xmlLang_6(String_t* value)
	{
		____xmlLang_6 = value;
		Il2CppCodeGenWriteBarrier((&____xmlLang_6), value);
	}

	inline static int32_t get_offset_of__xmlSpace_7() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ____xmlSpace_7)); }
	inline int32_t get__xmlSpace_7() const { return ____xmlSpace_7; }
	inline int32_t* get_address_of__xmlSpace_7() { return &____xmlSpace_7; }
	inline void set__xmlSpace_7(int32_t value)
	{
		____xmlSpace_7 = value;
	}

	inline static int32_t get_offset_of__baseURI_8() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ____baseURI_8)); }
	inline String_t* get__baseURI_8() const { return ____baseURI_8; }
	inline String_t** get_address_of__baseURI_8() { return &____baseURI_8; }
	inline void set__baseURI_8(String_t* value)
	{
		____baseURI_8 = value;
		Il2CppCodeGenWriteBarrier((&____baseURI_8), value);
	}

	inline static int32_t get_offset_of__encoding_9() { return static_cast<int32_t>(offsetof(XmlParserContext_t2544895291, ____encoding_9)); }
	inline Encoding_t1523322056 * get__encoding_9() const { return ____encoding_9; }
	inline Encoding_t1523322056 ** get_address_of__encoding_9() { return &____encoding_9; }
	inline void set__encoding_9(Encoding_t1523322056 * value)
	{
		____encoding_9 = value;
		Il2CppCodeGenWriteBarrier((&____encoding_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLPARSERCONTEXT_T2544895291_H
#ifndef XMLREADERSETTINGS_T2186285234_H
#define XMLREADERSETTINGS_T2186285234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReaderSettings
struct  XmlReaderSettings_t2186285234  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.XmlReaderSettings::useAsync
	bool ___useAsync_0;
	// System.Xml.XmlNameTable System.Xml.XmlReaderSettings::nameTable
	XmlNameTable_t71772148 * ___nameTable_1;
	// System.Xml.XmlResolver System.Xml.XmlReaderSettings::xmlResolver
	XmlResolver_t626023767 * ___xmlResolver_2;
	// System.Int32 System.Xml.XmlReaderSettings::lineNumberOffset
	int32_t ___lineNumberOffset_3;
	// System.Int32 System.Xml.XmlReaderSettings::linePositionOffset
	int32_t ___linePositionOffset_4;
	// System.Xml.ConformanceLevel System.Xml.XmlReaderSettings::conformanceLevel
	int32_t ___conformanceLevel_5;
	// System.Boolean System.Xml.XmlReaderSettings::checkCharacters
	bool ___checkCharacters_6;
	// System.Int64 System.Xml.XmlReaderSettings::maxCharactersInDocument
	int64_t ___maxCharactersInDocument_7;
	// System.Int64 System.Xml.XmlReaderSettings::maxCharactersFromEntities
	int64_t ___maxCharactersFromEntities_8;
	// System.Boolean System.Xml.XmlReaderSettings::ignoreWhitespace
	bool ___ignoreWhitespace_9;
	// System.Boolean System.Xml.XmlReaderSettings::ignorePIs
	bool ___ignorePIs_10;
	// System.Boolean System.Xml.XmlReaderSettings::ignoreComments
	bool ___ignoreComments_11;
	// System.Xml.DtdProcessing System.Xml.XmlReaderSettings::dtdProcessing
	int32_t ___dtdProcessing_12;
	// System.Xml.ValidationType System.Xml.XmlReaderSettings::validationType
	int32_t ___validationType_13;
	// System.Xml.Schema.XmlSchemaValidationFlags System.Xml.XmlReaderSettings::validationFlags
	int32_t ___validationFlags_14;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlReaderSettings::schemas
	XmlSchemaSet_t266093086 * ___schemas_15;
	// System.Boolean System.Xml.XmlReaderSettings::closeInput
	bool ___closeInput_16;
	// System.Boolean System.Xml.XmlReaderSettings::isReadOnly
	bool ___isReadOnly_17;
	// System.Boolean System.Xml.XmlReaderSettings::<IsXmlResolverSet>k__BackingField
	bool ___U3CIsXmlResolverSetU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_useAsync_0() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___useAsync_0)); }
	inline bool get_useAsync_0() const { return ___useAsync_0; }
	inline bool* get_address_of_useAsync_0() { return &___useAsync_0; }
	inline void set_useAsync_0(bool value)
	{
		___useAsync_0 = value;
	}

	inline static int32_t get_offset_of_nameTable_1() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___nameTable_1)); }
	inline XmlNameTable_t71772148 * get_nameTable_1() const { return ___nameTable_1; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_1() { return &___nameTable_1; }
	inline void set_nameTable_1(XmlNameTable_t71772148 * value)
	{
		___nameTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_1), value);
	}

	inline static int32_t get_offset_of_xmlResolver_2() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___xmlResolver_2)); }
	inline XmlResolver_t626023767 * get_xmlResolver_2() const { return ___xmlResolver_2; }
	inline XmlResolver_t626023767 ** get_address_of_xmlResolver_2() { return &___xmlResolver_2; }
	inline void set_xmlResolver_2(XmlResolver_t626023767 * value)
	{
		___xmlResolver_2 = value;
		Il2CppCodeGenWriteBarrier((&___xmlResolver_2), value);
	}

	inline static int32_t get_offset_of_lineNumberOffset_3() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___lineNumberOffset_3)); }
	inline int32_t get_lineNumberOffset_3() const { return ___lineNumberOffset_3; }
	inline int32_t* get_address_of_lineNumberOffset_3() { return &___lineNumberOffset_3; }
	inline void set_lineNumberOffset_3(int32_t value)
	{
		___lineNumberOffset_3 = value;
	}

	inline static int32_t get_offset_of_linePositionOffset_4() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___linePositionOffset_4)); }
	inline int32_t get_linePositionOffset_4() const { return ___linePositionOffset_4; }
	inline int32_t* get_address_of_linePositionOffset_4() { return &___linePositionOffset_4; }
	inline void set_linePositionOffset_4(int32_t value)
	{
		___linePositionOffset_4 = value;
	}

	inline static int32_t get_offset_of_conformanceLevel_5() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___conformanceLevel_5)); }
	inline int32_t get_conformanceLevel_5() const { return ___conformanceLevel_5; }
	inline int32_t* get_address_of_conformanceLevel_5() { return &___conformanceLevel_5; }
	inline void set_conformanceLevel_5(int32_t value)
	{
		___conformanceLevel_5 = value;
	}

	inline static int32_t get_offset_of_checkCharacters_6() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___checkCharacters_6)); }
	inline bool get_checkCharacters_6() const { return ___checkCharacters_6; }
	inline bool* get_address_of_checkCharacters_6() { return &___checkCharacters_6; }
	inline void set_checkCharacters_6(bool value)
	{
		___checkCharacters_6 = value;
	}

	inline static int32_t get_offset_of_maxCharactersInDocument_7() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___maxCharactersInDocument_7)); }
	inline int64_t get_maxCharactersInDocument_7() const { return ___maxCharactersInDocument_7; }
	inline int64_t* get_address_of_maxCharactersInDocument_7() { return &___maxCharactersInDocument_7; }
	inline void set_maxCharactersInDocument_7(int64_t value)
	{
		___maxCharactersInDocument_7 = value;
	}

	inline static int32_t get_offset_of_maxCharactersFromEntities_8() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___maxCharactersFromEntities_8)); }
	inline int64_t get_maxCharactersFromEntities_8() const { return ___maxCharactersFromEntities_8; }
	inline int64_t* get_address_of_maxCharactersFromEntities_8() { return &___maxCharactersFromEntities_8; }
	inline void set_maxCharactersFromEntities_8(int64_t value)
	{
		___maxCharactersFromEntities_8 = value;
	}

	inline static int32_t get_offset_of_ignoreWhitespace_9() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___ignoreWhitespace_9)); }
	inline bool get_ignoreWhitespace_9() const { return ___ignoreWhitespace_9; }
	inline bool* get_address_of_ignoreWhitespace_9() { return &___ignoreWhitespace_9; }
	inline void set_ignoreWhitespace_9(bool value)
	{
		___ignoreWhitespace_9 = value;
	}

	inline static int32_t get_offset_of_ignorePIs_10() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___ignorePIs_10)); }
	inline bool get_ignorePIs_10() const { return ___ignorePIs_10; }
	inline bool* get_address_of_ignorePIs_10() { return &___ignorePIs_10; }
	inline void set_ignorePIs_10(bool value)
	{
		___ignorePIs_10 = value;
	}

	inline static int32_t get_offset_of_ignoreComments_11() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___ignoreComments_11)); }
	inline bool get_ignoreComments_11() const { return ___ignoreComments_11; }
	inline bool* get_address_of_ignoreComments_11() { return &___ignoreComments_11; }
	inline void set_ignoreComments_11(bool value)
	{
		___ignoreComments_11 = value;
	}

	inline static int32_t get_offset_of_dtdProcessing_12() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___dtdProcessing_12)); }
	inline int32_t get_dtdProcessing_12() const { return ___dtdProcessing_12; }
	inline int32_t* get_address_of_dtdProcessing_12() { return &___dtdProcessing_12; }
	inline void set_dtdProcessing_12(int32_t value)
	{
		___dtdProcessing_12 = value;
	}

	inline static int32_t get_offset_of_validationType_13() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___validationType_13)); }
	inline int32_t get_validationType_13() const { return ___validationType_13; }
	inline int32_t* get_address_of_validationType_13() { return &___validationType_13; }
	inline void set_validationType_13(int32_t value)
	{
		___validationType_13 = value;
	}

	inline static int32_t get_offset_of_validationFlags_14() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___validationFlags_14)); }
	inline int32_t get_validationFlags_14() const { return ___validationFlags_14; }
	inline int32_t* get_address_of_validationFlags_14() { return &___validationFlags_14; }
	inline void set_validationFlags_14(int32_t value)
	{
		___validationFlags_14 = value;
	}

	inline static int32_t get_offset_of_schemas_15() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___schemas_15)); }
	inline XmlSchemaSet_t266093086 * get_schemas_15() const { return ___schemas_15; }
	inline XmlSchemaSet_t266093086 ** get_address_of_schemas_15() { return &___schemas_15; }
	inline void set_schemas_15(XmlSchemaSet_t266093086 * value)
	{
		___schemas_15 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_15), value);
	}

	inline static int32_t get_offset_of_closeInput_16() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___closeInput_16)); }
	inline bool get_closeInput_16() const { return ___closeInput_16; }
	inline bool* get_address_of_closeInput_16() { return &___closeInput_16; }
	inline void set_closeInput_16(bool value)
	{
		___closeInput_16 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_17() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___isReadOnly_17)); }
	inline bool get_isReadOnly_17() const { return ___isReadOnly_17; }
	inline bool* get_address_of_isReadOnly_17() { return &___isReadOnly_17; }
	inline void set_isReadOnly_17(bool value)
	{
		___isReadOnly_17 = value;
	}

	inline static int32_t get_offset_of_U3CIsXmlResolverSetU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234, ___U3CIsXmlResolverSetU3Ek__BackingField_18)); }
	inline bool get_U3CIsXmlResolverSetU3Ek__BackingField_18() const { return ___U3CIsXmlResolverSetU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CIsXmlResolverSetU3Ek__BackingField_18() { return &___U3CIsXmlResolverSetU3Ek__BackingField_18; }
	inline void set_U3CIsXmlResolverSetU3Ek__BackingField_18(bool value)
	{
		___U3CIsXmlResolverSetU3Ek__BackingField_18 = value;
	}
};

struct XmlReaderSettings_t2186285234_StaticFields
{
public:
	// System.Nullable`1<System.Boolean> System.Xml.XmlReaderSettings::s_enableLegacyXmlSettings
	Nullable_1_t1819850047  ___s_enableLegacyXmlSettings_19;

public:
	inline static int32_t get_offset_of_s_enableLegacyXmlSettings_19() { return static_cast<int32_t>(offsetof(XmlReaderSettings_t2186285234_StaticFields, ___s_enableLegacyXmlSettings_19)); }
	inline Nullable_1_t1819850047  get_s_enableLegacyXmlSettings_19() const { return ___s_enableLegacyXmlSettings_19; }
	inline Nullable_1_t1819850047 * get_address_of_s_enableLegacyXmlSettings_19() { return &___s_enableLegacyXmlSettings_19; }
	inline void set_s_enableLegacyXmlSettings_19(Nullable_1_t1819850047  value)
	{
		___s_enableLegacyXmlSettings_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLREADERSETTINGS_T2186285234_H
#ifndef XMLTEXTREADERIMPL_T178060594_H
#define XMLTEXTREADERIMPL_T178060594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReaderImpl
struct  XmlTextReaderImpl_t178060594  : public XmlReader_t3121518892
{
public:
	// System.Xml.XmlTextReaderImpl/LaterInitParam System.Xml.XmlTextReaderImpl::laterInitParam
	LaterInitParam_t1449395818 * ___laterInitParam_3;
	// System.Xml.XmlCharType System.Xml.XmlTextReaderImpl::xmlCharType
	XmlCharType_t2277243275  ___xmlCharType_4;
	// System.Xml.XmlTextReaderImpl/ParsingState System.Xml.XmlTextReaderImpl::ps
	ParsingState_t1780334922  ___ps_5;
	// System.Xml.XmlTextReaderImpl/ParsingFunction System.Xml.XmlTextReaderImpl::parsingFunction
	int32_t ___parsingFunction_6;
	// System.Xml.XmlTextReaderImpl/ParsingFunction System.Xml.XmlTextReaderImpl::nextParsingFunction
	int32_t ___nextParsingFunction_7;
	// System.Xml.XmlTextReaderImpl/ParsingFunction System.Xml.XmlTextReaderImpl::nextNextParsingFunction
	int32_t ___nextNextParsingFunction_8;
	// System.Xml.XmlTextReaderImpl/NodeData[] System.Xml.XmlTextReaderImpl::nodes
	NodeDataU5BU5D_t1309219640* ___nodes_9;
	// System.Xml.XmlTextReaderImpl/NodeData System.Xml.XmlTextReaderImpl::curNode
	NodeData_t1817330133 * ___curNode_10;
	// System.Int32 System.Xml.XmlTextReaderImpl::index
	int32_t ___index_11;
	// System.Int32 System.Xml.XmlTextReaderImpl::curAttrIndex
	int32_t ___curAttrIndex_12;
	// System.Int32 System.Xml.XmlTextReaderImpl::attrCount
	int32_t ___attrCount_13;
	// System.Int32 System.Xml.XmlTextReaderImpl::attrHashtable
	int32_t ___attrHashtable_14;
	// System.Int32 System.Xml.XmlTextReaderImpl::attrDuplWalkCount
	int32_t ___attrDuplWalkCount_15;
	// System.Boolean System.Xml.XmlTextReaderImpl::attrNeedNamespaceLookup
	bool ___attrNeedNamespaceLookup_16;
	// System.Boolean System.Xml.XmlTextReaderImpl::fullAttrCleanup
	bool ___fullAttrCleanup_17;
	// System.Xml.XmlTextReaderImpl/NodeData[] System.Xml.XmlTextReaderImpl::attrDuplSortingArray
	NodeDataU5BU5D_t1309219640* ___attrDuplSortingArray_18;
	// System.Xml.XmlNameTable System.Xml.XmlTextReaderImpl::nameTable
	XmlNameTable_t71772148 * ___nameTable_19;
	// System.Boolean System.Xml.XmlTextReaderImpl::nameTableFromSettings
	bool ___nameTableFromSettings_20;
	// System.Xml.XmlResolver System.Xml.XmlTextReaderImpl::xmlResolver
	XmlResolver_t626023767 * ___xmlResolver_21;
	// System.String System.Xml.XmlTextReaderImpl::url
	String_t* ___url_22;
	// System.Boolean System.Xml.XmlTextReaderImpl::normalize
	bool ___normalize_23;
	// System.Boolean System.Xml.XmlTextReaderImpl::supportNamespaces
	bool ___supportNamespaces_24;
	// System.Xml.WhitespaceHandling System.Xml.XmlTextReaderImpl::whitespaceHandling
	int32_t ___whitespaceHandling_25;
	// System.Xml.DtdProcessing System.Xml.XmlTextReaderImpl::dtdProcessing
	int32_t ___dtdProcessing_26;
	// System.Xml.EntityHandling System.Xml.XmlTextReaderImpl::entityHandling
	int32_t ___entityHandling_27;
	// System.Boolean System.Xml.XmlTextReaderImpl::ignorePIs
	bool ___ignorePIs_28;
	// System.Boolean System.Xml.XmlTextReaderImpl::ignoreComments
	bool ___ignoreComments_29;
	// System.Boolean System.Xml.XmlTextReaderImpl::checkCharacters
	bool ___checkCharacters_30;
	// System.Int32 System.Xml.XmlTextReaderImpl::lineNumberOffset
	int32_t ___lineNumberOffset_31;
	// System.Int32 System.Xml.XmlTextReaderImpl::linePositionOffset
	int32_t ___linePositionOffset_32;
	// System.Boolean System.Xml.XmlTextReaderImpl::closeInput
	bool ___closeInput_33;
	// System.Int64 System.Xml.XmlTextReaderImpl::maxCharactersInDocument
	int64_t ___maxCharactersInDocument_34;
	// System.Int64 System.Xml.XmlTextReaderImpl::maxCharactersFromEntities
	int64_t ___maxCharactersFromEntities_35;
	// System.Boolean System.Xml.XmlTextReaderImpl::v1Compat
	bool ___v1Compat_36;
	// System.Xml.XmlNamespaceManager System.Xml.XmlTextReaderImpl::namespaceManager
	XmlNamespaceManager_t418790500 * ___namespaceManager_37;
	// System.String System.Xml.XmlTextReaderImpl::lastPrefix
	String_t* ___lastPrefix_38;
	// System.Xml.XmlTextReaderImpl/XmlContext System.Xml.XmlTextReaderImpl::xmlContext
	XmlContext_t1618903103 * ___xmlContext_39;
	// System.Xml.XmlTextReaderImpl/ParsingState[] System.Xml.XmlTextReaderImpl::parsingStatesStack
	ParsingStateU5BU5D_t1980313167* ___parsingStatesStack_40;
	// System.Int32 System.Xml.XmlTextReaderImpl::parsingStatesStackTop
	int32_t ___parsingStatesStackTop_41;
	// System.String System.Xml.XmlTextReaderImpl::reportedBaseUri
	String_t* ___reportedBaseUri_42;
	// System.Text.Encoding System.Xml.XmlTextReaderImpl::reportedEncoding
	Encoding_t1523322056 * ___reportedEncoding_43;
	// System.Xml.IDtdInfo System.Xml.XmlTextReaderImpl::dtdInfo
	RuntimeObject* ___dtdInfo_44;
	// System.Xml.XmlNodeType System.Xml.XmlTextReaderImpl::fragmentType
	int32_t ___fragmentType_45;
	// System.Xml.XmlParserContext System.Xml.XmlTextReaderImpl::fragmentParserContext
	XmlParserContext_t2544895291 * ___fragmentParserContext_46;
	// System.Boolean System.Xml.XmlTextReaderImpl::fragment
	bool ___fragment_47;
	// System.Xml.IncrementalReadDecoder System.Xml.XmlTextReaderImpl::incReadDecoder
	IncrementalReadDecoder_t3011954239 * ___incReadDecoder_48;
	// System.Xml.XmlTextReaderImpl/IncrementalReadState System.Xml.XmlTextReaderImpl::incReadState
	int32_t ___incReadState_49;
	// System.Xml.LineInfo System.Xml.XmlTextReaderImpl::incReadLineInfo
	LineInfo_t3266778363  ___incReadLineInfo_50;
	// System.Int32 System.Xml.XmlTextReaderImpl::incReadDepth
	int32_t ___incReadDepth_51;
	// System.Int32 System.Xml.XmlTextReaderImpl::incReadLeftStartPos
	int32_t ___incReadLeftStartPos_52;
	// System.Int32 System.Xml.XmlTextReaderImpl::incReadLeftEndPos
	int32_t ___incReadLeftEndPos_53;
	// System.Int32 System.Xml.XmlTextReaderImpl::attributeValueBaseEntityId
	int32_t ___attributeValueBaseEntityId_54;
	// System.Boolean System.Xml.XmlTextReaderImpl::emptyEntityInAttributeResolved
	bool ___emptyEntityInAttributeResolved_55;
	// System.Xml.IValidationEventHandling System.Xml.XmlTextReaderImpl::validationEventHandling
	RuntimeObject* ___validationEventHandling_56;
	// System.Xml.XmlTextReaderImpl/OnDefaultAttributeUseDelegate System.Xml.XmlTextReaderImpl::onDefaultAttributeUse
	OnDefaultAttributeUseDelegate_t2911570364 * ___onDefaultAttributeUse_57;
	// System.Boolean System.Xml.XmlTextReaderImpl::validatingReaderCompatFlag
	bool ___validatingReaderCompatFlag_58;
	// System.Boolean System.Xml.XmlTextReaderImpl::addDefaultAttributesAndNormalize
	bool ___addDefaultAttributesAndNormalize_59;
	// System.Text.StringBuilder System.Xml.XmlTextReaderImpl::stringBuilder
	StringBuilder_t * ___stringBuilder_60;
	// System.Boolean System.Xml.XmlTextReaderImpl::rootElementParsed
	bool ___rootElementParsed_61;
	// System.Boolean System.Xml.XmlTextReaderImpl::standalone
	bool ___standalone_62;
	// System.Int32 System.Xml.XmlTextReaderImpl::nextEntityId
	int32_t ___nextEntityId_63;
	// System.Xml.XmlTextReaderImpl/ParsingMode System.Xml.XmlTextReaderImpl::parsingMode
	int32_t ___parsingMode_64;
	// System.Xml.ReadState System.Xml.XmlTextReaderImpl::readState
	int32_t ___readState_65;
	// System.Xml.IDtdEntityInfo System.Xml.XmlTextReaderImpl::lastEntity
	RuntimeObject* ___lastEntity_66;
	// System.Boolean System.Xml.XmlTextReaderImpl::afterResetState
	bool ___afterResetState_67;
	// System.Int32 System.Xml.XmlTextReaderImpl::documentStartBytePos
	int32_t ___documentStartBytePos_68;
	// System.Int32 System.Xml.XmlTextReaderImpl::readValueOffset
	int32_t ___readValueOffset_69;
	// System.Int64 System.Xml.XmlTextReaderImpl::charactersInDocument
	int64_t ___charactersInDocument_70;
	// System.Int64 System.Xml.XmlTextReaderImpl::charactersFromEntities
	int64_t ___charactersFromEntities_71;
	// System.Collections.Generic.Dictionary`2<System.Xml.IDtdEntityInfo,System.Xml.IDtdEntityInfo> System.Xml.XmlTextReaderImpl::currentEntities
	Dictionary_2_t1740447880 * ___currentEntities_72;
	// System.Boolean System.Xml.XmlTextReaderImpl::disableUndeclaredEntityCheck
	bool ___disableUndeclaredEntityCheck_73;
	// System.Xml.XmlReader System.Xml.XmlTextReaderImpl::outerReader
	XmlReader_t3121518892 * ___outerReader_74;
	// System.Boolean System.Xml.XmlTextReaderImpl::xmlResolverIsSet
	bool ___xmlResolverIsSet_75;
	// System.String System.Xml.XmlTextReaderImpl::Xml
	String_t* ___Xml_76;
	// System.String System.Xml.XmlTextReaderImpl::XmlNs
	String_t* ___XmlNs_77;
	// System.Threading.Tasks.Task`1<System.Tuple`4<System.Int32,System.Int32,System.Int32,System.Boolean>> System.Xml.XmlTextReaderImpl::parseText_dummyTask
	Task_1_t1685771062 * ___parseText_dummyTask_78;

public:
	inline static int32_t get_offset_of_laterInitParam_3() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___laterInitParam_3)); }
	inline LaterInitParam_t1449395818 * get_laterInitParam_3() const { return ___laterInitParam_3; }
	inline LaterInitParam_t1449395818 ** get_address_of_laterInitParam_3() { return &___laterInitParam_3; }
	inline void set_laterInitParam_3(LaterInitParam_t1449395818 * value)
	{
		___laterInitParam_3 = value;
		Il2CppCodeGenWriteBarrier((&___laterInitParam_3), value);
	}

	inline static int32_t get_offset_of_xmlCharType_4() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___xmlCharType_4)); }
	inline XmlCharType_t2277243275  get_xmlCharType_4() const { return ___xmlCharType_4; }
	inline XmlCharType_t2277243275 * get_address_of_xmlCharType_4() { return &___xmlCharType_4; }
	inline void set_xmlCharType_4(XmlCharType_t2277243275  value)
	{
		___xmlCharType_4 = value;
	}

	inline static int32_t get_offset_of_ps_5() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___ps_5)); }
	inline ParsingState_t1780334922  get_ps_5() const { return ___ps_5; }
	inline ParsingState_t1780334922 * get_address_of_ps_5() { return &___ps_5; }
	inline void set_ps_5(ParsingState_t1780334922  value)
	{
		___ps_5 = value;
	}

	inline static int32_t get_offset_of_parsingFunction_6() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___parsingFunction_6)); }
	inline int32_t get_parsingFunction_6() const { return ___parsingFunction_6; }
	inline int32_t* get_address_of_parsingFunction_6() { return &___parsingFunction_6; }
	inline void set_parsingFunction_6(int32_t value)
	{
		___parsingFunction_6 = value;
	}

	inline static int32_t get_offset_of_nextParsingFunction_7() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___nextParsingFunction_7)); }
	inline int32_t get_nextParsingFunction_7() const { return ___nextParsingFunction_7; }
	inline int32_t* get_address_of_nextParsingFunction_7() { return &___nextParsingFunction_7; }
	inline void set_nextParsingFunction_7(int32_t value)
	{
		___nextParsingFunction_7 = value;
	}

	inline static int32_t get_offset_of_nextNextParsingFunction_8() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___nextNextParsingFunction_8)); }
	inline int32_t get_nextNextParsingFunction_8() const { return ___nextNextParsingFunction_8; }
	inline int32_t* get_address_of_nextNextParsingFunction_8() { return &___nextNextParsingFunction_8; }
	inline void set_nextNextParsingFunction_8(int32_t value)
	{
		___nextNextParsingFunction_8 = value;
	}

	inline static int32_t get_offset_of_nodes_9() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___nodes_9)); }
	inline NodeDataU5BU5D_t1309219640* get_nodes_9() const { return ___nodes_9; }
	inline NodeDataU5BU5D_t1309219640** get_address_of_nodes_9() { return &___nodes_9; }
	inline void set_nodes_9(NodeDataU5BU5D_t1309219640* value)
	{
		___nodes_9 = value;
		Il2CppCodeGenWriteBarrier((&___nodes_9), value);
	}

	inline static int32_t get_offset_of_curNode_10() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___curNode_10)); }
	inline NodeData_t1817330133 * get_curNode_10() const { return ___curNode_10; }
	inline NodeData_t1817330133 ** get_address_of_curNode_10() { return &___curNode_10; }
	inline void set_curNode_10(NodeData_t1817330133 * value)
	{
		___curNode_10 = value;
		Il2CppCodeGenWriteBarrier((&___curNode_10), value);
	}

	inline static int32_t get_offset_of_index_11() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___index_11)); }
	inline int32_t get_index_11() const { return ___index_11; }
	inline int32_t* get_address_of_index_11() { return &___index_11; }
	inline void set_index_11(int32_t value)
	{
		___index_11 = value;
	}

	inline static int32_t get_offset_of_curAttrIndex_12() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___curAttrIndex_12)); }
	inline int32_t get_curAttrIndex_12() const { return ___curAttrIndex_12; }
	inline int32_t* get_address_of_curAttrIndex_12() { return &___curAttrIndex_12; }
	inline void set_curAttrIndex_12(int32_t value)
	{
		___curAttrIndex_12 = value;
	}

	inline static int32_t get_offset_of_attrCount_13() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___attrCount_13)); }
	inline int32_t get_attrCount_13() const { return ___attrCount_13; }
	inline int32_t* get_address_of_attrCount_13() { return &___attrCount_13; }
	inline void set_attrCount_13(int32_t value)
	{
		___attrCount_13 = value;
	}

	inline static int32_t get_offset_of_attrHashtable_14() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___attrHashtable_14)); }
	inline int32_t get_attrHashtable_14() const { return ___attrHashtable_14; }
	inline int32_t* get_address_of_attrHashtable_14() { return &___attrHashtable_14; }
	inline void set_attrHashtable_14(int32_t value)
	{
		___attrHashtable_14 = value;
	}

	inline static int32_t get_offset_of_attrDuplWalkCount_15() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___attrDuplWalkCount_15)); }
	inline int32_t get_attrDuplWalkCount_15() const { return ___attrDuplWalkCount_15; }
	inline int32_t* get_address_of_attrDuplWalkCount_15() { return &___attrDuplWalkCount_15; }
	inline void set_attrDuplWalkCount_15(int32_t value)
	{
		___attrDuplWalkCount_15 = value;
	}

	inline static int32_t get_offset_of_attrNeedNamespaceLookup_16() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___attrNeedNamespaceLookup_16)); }
	inline bool get_attrNeedNamespaceLookup_16() const { return ___attrNeedNamespaceLookup_16; }
	inline bool* get_address_of_attrNeedNamespaceLookup_16() { return &___attrNeedNamespaceLookup_16; }
	inline void set_attrNeedNamespaceLookup_16(bool value)
	{
		___attrNeedNamespaceLookup_16 = value;
	}

	inline static int32_t get_offset_of_fullAttrCleanup_17() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___fullAttrCleanup_17)); }
	inline bool get_fullAttrCleanup_17() const { return ___fullAttrCleanup_17; }
	inline bool* get_address_of_fullAttrCleanup_17() { return &___fullAttrCleanup_17; }
	inline void set_fullAttrCleanup_17(bool value)
	{
		___fullAttrCleanup_17 = value;
	}

	inline static int32_t get_offset_of_attrDuplSortingArray_18() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___attrDuplSortingArray_18)); }
	inline NodeDataU5BU5D_t1309219640* get_attrDuplSortingArray_18() const { return ___attrDuplSortingArray_18; }
	inline NodeDataU5BU5D_t1309219640** get_address_of_attrDuplSortingArray_18() { return &___attrDuplSortingArray_18; }
	inline void set_attrDuplSortingArray_18(NodeDataU5BU5D_t1309219640* value)
	{
		___attrDuplSortingArray_18 = value;
		Il2CppCodeGenWriteBarrier((&___attrDuplSortingArray_18), value);
	}

	inline static int32_t get_offset_of_nameTable_19() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___nameTable_19)); }
	inline XmlNameTable_t71772148 * get_nameTable_19() const { return ___nameTable_19; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_19() { return &___nameTable_19; }
	inline void set_nameTable_19(XmlNameTable_t71772148 * value)
	{
		___nameTable_19 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_19), value);
	}

	inline static int32_t get_offset_of_nameTableFromSettings_20() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___nameTableFromSettings_20)); }
	inline bool get_nameTableFromSettings_20() const { return ___nameTableFromSettings_20; }
	inline bool* get_address_of_nameTableFromSettings_20() { return &___nameTableFromSettings_20; }
	inline void set_nameTableFromSettings_20(bool value)
	{
		___nameTableFromSettings_20 = value;
	}

	inline static int32_t get_offset_of_xmlResolver_21() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___xmlResolver_21)); }
	inline XmlResolver_t626023767 * get_xmlResolver_21() const { return ___xmlResolver_21; }
	inline XmlResolver_t626023767 ** get_address_of_xmlResolver_21() { return &___xmlResolver_21; }
	inline void set_xmlResolver_21(XmlResolver_t626023767 * value)
	{
		___xmlResolver_21 = value;
		Il2CppCodeGenWriteBarrier((&___xmlResolver_21), value);
	}

	inline static int32_t get_offset_of_url_22() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___url_22)); }
	inline String_t* get_url_22() const { return ___url_22; }
	inline String_t** get_address_of_url_22() { return &___url_22; }
	inline void set_url_22(String_t* value)
	{
		___url_22 = value;
		Il2CppCodeGenWriteBarrier((&___url_22), value);
	}

	inline static int32_t get_offset_of_normalize_23() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___normalize_23)); }
	inline bool get_normalize_23() const { return ___normalize_23; }
	inline bool* get_address_of_normalize_23() { return &___normalize_23; }
	inline void set_normalize_23(bool value)
	{
		___normalize_23 = value;
	}

	inline static int32_t get_offset_of_supportNamespaces_24() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___supportNamespaces_24)); }
	inline bool get_supportNamespaces_24() const { return ___supportNamespaces_24; }
	inline bool* get_address_of_supportNamespaces_24() { return &___supportNamespaces_24; }
	inline void set_supportNamespaces_24(bool value)
	{
		___supportNamespaces_24 = value;
	}

	inline static int32_t get_offset_of_whitespaceHandling_25() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___whitespaceHandling_25)); }
	inline int32_t get_whitespaceHandling_25() const { return ___whitespaceHandling_25; }
	inline int32_t* get_address_of_whitespaceHandling_25() { return &___whitespaceHandling_25; }
	inline void set_whitespaceHandling_25(int32_t value)
	{
		___whitespaceHandling_25 = value;
	}

	inline static int32_t get_offset_of_dtdProcessing_26() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___dtdProcessing_26)); }
	inline int32_t get_dtdProcessing_26() const { return ___dtdProcessing_26; }
	inline int32_t* get_address_of_dtdProcessing_26() { return &___dtdProcessing_26; }
	inline void set_dtdProcessing_26(int32_t value)
	{
		___dtdProcessing_26 = value;
	}

	inline static int32_t get_offset_of_entityHandling_27() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___entityHandling_27)); }
	inline int32_t get_entityHandling_27() const { return ___entityHandling_27; }
	inline int32_t* get_address_of_entityHandling_27() { return &___entityHandling_27; }
	inline void set_entityHandling_27(int32_t value)
	{
		___entityHandling_27 = value;
	}

	inline static int32_t get_offset_of_ignorePIs_28() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___ignorePIs_28)); }
	inline bool get_ignorePIs_28() const { return ___ignorePIs_28; }
	inline bool* get_address_of_ignorePIs_28() { return &___ignorePIs_28; }
	inline void set_ignorePIs_28(bool value)
	{
		___ignorePIs_28 = value;
	}

	inline static int32_t get_offset_of_ignoreComments_29() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___ignoreComments_29)); }
	inline bool get_ignoreComments_29() const { return ___ignoreComments_29; }
	inline bool* get_address_of_ignoreComments_29() { return &___ignoreComments_29; }
	inline void set_ignoreComments_29(bool value)
	{
		___ignoreComments_29 = value;
	}

	inline static int32_t get_offset_of_checkCharacters_30() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___checkCharacters_30)); }
	inline bool get_checkCharacters_30() const { return ___checkCharacters_30; }
	inline bool* get_address_of_checkCharacters_30() { return &___checkCharacters_30; }
	inline void set_checkCharacters_30(bool value)
	{
		___checkCharacters_30 = value;
	}

	inline static int32_t get_offset_of_lineNumberOffset_31() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___lineNumberOffset_31)); }
	inline int32_t get_lineNumberOffset_31() const { return ___lineNumberOffset_31; }
	inline int32_t* get_address_of_lineNumberOffset_31() { return &___lineNumberOffset_31; }
	inline void set_lineNumberOffset_31(int32_t value)
	{
		___lineNumberOffset_31 = value;
	}

	inline static int32_t get_offset_of_linePositionOffset_32() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___linePositionOffset_32)); }
	inline int32_t get_linePositionOffset_32() const { return ___linePositionOffset_32; }
	inline int32_t* get_address_of_linePositionOffset_32() { return &___linePositionOffset_32; }
	inline void set_linePositionOffset_32(int32_t value)
	{
		___linePositionOffset_32 = value;
	}

	inline static int32_t get_offset_of_closeInput_33() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___closeInput_33)); }
	inline bool get_closeInput_33() const { return ___closeInput_33; }
	inline bool* get_address_of_closeInput_33() { return &___closeInput_33; }
	inline void set_closeInput_33(bool value)
	{
		___closeInput_33 = value;
	}

	inline static int32_t get_offset_of_maxCharactersInDocument_34() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___maxCharactersInDocument_34)); }
	inline int64_t get_maxCharactersInDocument_34() const { return ___maxCharactersInDocument_34; }
	inline int64_t* get_address_of_maxCharactersInDocument_34() { return &___maxCharactersInDocument_34; }
	inline void set_maxCharactersInDocument_34(int64_t value)
	{
		___maxCharactersInDocument_34 = value;
	}

	inline static int32_t get_offset_of_maxCharactersFromEntities_35() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___maxCharactersFromEntities_35)); }
	inline int64_t get_maxCharactersFromEntities_35() const { return ___maxCharactersFromEntities_35; }
	inline int64_t* get_address_of_maxCharactersFromEntities_35() { return &___maxCharactersFromEntities_35; }
	inline void set_maxCharactersFromEntities_35(int64_t value)
	{
		___maxCharactersFromEntities_35 = value;
	}

	inline static int32_t get_offset_of_v1Compat_36() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___v1Compat_36)); }
	inline bool get_v1Compat_36() const { return ___v1Compat_36; }
	inline bool* get_address_of_v1Compat_36() { return &___v1Compat_36; }
	inline void set_v1Compat_36(bool value)
	{
		___v1Compat_36 = value;
	}

	inline static int32_t get_offset_of_namespaceManager_37() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___namespaceManager_37)); }
	inline XmlNamespaceManager_t418790500 * get_namespaceManager_37() const { return ___namespaceManager_37; }
	inline XmlNamespaceManager_t418790500 ** get_address_of_namespaceManager_37() { return &___namespaceManager_37; }
	inline void set_namespaceManager_37(XmlNamespaceManager_t418790500 * value)
	{
		___namespaceManager_37 = value;
		Il2CppCodeGenWriteBarrier((&___namespaceManager_37), value);
	}

	inline static int32_t get_offset_of_lastPrefix_38() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___lastPrefix_38)); }
	inline String_t* get_lastPrefix_38() const { return ___lastPrefix_38; }
	inline String_t** get_address_of_lastPrefix_38() { return &___lastPrefix_38; }
	inline void set_lastPrefix_38(String_t* value)
	{
		___lastPrefix_38 = value;
		Il2CppCodeGenWriteBarrier((&___lastPrefix_38), value);
	}

	inline static int32_t get_offset_of_xmlContext_39() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___xmlContext_39)); }
	inline XmlContext_t1618903103 * get_xmlContext_39() const { return ___xmlContext_39; }
	inline XmlContext_t1618903103 ** get_address_of_xmlContext_39() { return &___xmlContext_39; }
	inline void set_xmlContext_39(XmlContext_t1618903103 * value)
	{
		___xmlContext_39 = value;
		Il2CppCodeGenWriteBarrier((&___xmlContext_39), value);
	}

	inline static int32_t get_offset_of_parsingStatesStack_40() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___parsingStatesStack_40)); }
	inline ParsingStateU5BU5D_t1980313167* get_parsingStatesStack_40() const { return ___parsingStatesStack_40; }
	inline ParsingStateU5BU5D_t1980313167** get_address_of_parsingStatesStack_40() { return &___parsingStatesStack_40; }
	inline void set_parsingStatesStack_40(ParsingStateU5BU5D_t1980313167* value)
	{
		___parsingStatesStack_40 = value;
		Il2CppCodeGenWriteBarrier((&___parsingStatesStack_40), value);
	}

	inline static int32_t get_offset_of_parsingStatesStackTop_41() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___parsingStatesStackTop_41)); }
	inline int32_t get_parsingStatesStackTop_41() const { return ___parsingStatesStackTop_41; }
	inline int32_t* get_address_of_parsingStatesStackTop_41() { return &___parsingStatesStackTop_41; }
	inline void set_parsingStatesStackTop_41(int32_t value)
	{
		___parsingStatesStackTop_41 = value;
	}

	inline static int32_t get_offset_of_reportedBaseUri_42() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___reportedBaseUri_42)); }
	inline String_t* get_reportedBaseUri_42() const { return ___reportedBaseUri_42; }
	inline String_t** get_address_of_reportedBaseUri_42() { return &___reportedBaseUri_42; }
	inline void set_reportedBaseUri_42(String_t* value)
	{
		___reportedBaseUri_42 = value;
		Il2CppCodeGenWriteBarrier((&___reportedBaseUri_42), value);
	}

	inline static int32_t get_offset_of_reportedEncoding_43() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___reportedEncoding_43)); }
	inline Encoding_t1523322056 * get_reportedEncoding_43() const { return ___reportedEncoding_43; }
	inline Encoding_t1523322056 ** get_address_of_reportedEncoding_43() { return &___reportedEncoding_43; }
	inline void set_reportedEncoding_43(Encoding_t1523322056 * value)
	{
		___reportedEncoding_43 = value;
		Il2CppCodeGenWriteBarrier((&___reportedEncoding_43), value);
	}

	inline static int32_t get_offset_of_dtdInfo_44() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___dtdInfo_44)); }
	inline RuntimeObject* get_dtdInfo_44() const { return ___dtdInfo_44; }
	inline RuntimeObject** get_address_of_dtdInfo_44() { return &___dtdInfo_44; }
	inline void set_dtdInfo_44(RuntimeObject* value)
	{
		___dtdInfo_44 = value;
		Il2CppCodeGenWriteBarrier((&___dtdInfo_44), value);
	}

	inline static int32_t get_offset_of_fragmentType_45() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___fragmentType_45)); }
	inline int32_t get_fragmentType_45() const { return ___fragmentType_45; }
	inline int32_t* get_address_of_fragmentType_45() { return &___fragmentType_45; }
	inline void set_fragmentType_45(int32_t value)
	{
		___fragmentType_45 = value;
	}

	inline static int32_t get_offset_of_fragmentParserContext_46() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___fragmentParserContext_46)); }
	inline XmlParserContext_t2544895291 * get_fragmentParserContext_46() const { return ___fragmentParserContext_46; }
	inline XmlParserContext_t2544895291 ** get_address_of_fragmentParserContext_46() { return &___fragmentParserContext_46; }
	inline void set_fragmentParserContext_46(XmlParserContext_t2544895291 * value)
	{
		___fragmentParserContext_46 = value;
		Il2CppCodeGenWriteBarrier((&___fragmentParserContext_46), value);
	}

	inline static int32_t get_offset_of_fragment_47() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___fragment_47)); }
	inline bool get_fragment_47() const { return ___fragment_47; }
	inline bool* get_address_of_fragment_47() { return &___fragment_47; }
	inline void set_fragment_47(bool value)
	{
		___fragment_47 = value;
	}

	inline static int32_t get_offset_of_incReadDecoder_48() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___incReadDecoder_48)); }
	inline IncrementalReadDecoder_t3011954239 * get_incReadDecoder_48() const { return ___incReadDecoder_48; }
	inline IncrementalReadDecoder_t3011954239 ** get_address_of_incReadDecoder_48() { return &___incReadDecoder_48; }
	inline void set_incReadDecoder_48(IncrementalReadDecoder_t3011954239 * value)
	{
		___incReadDecoder_48 = value;
		Il2CppCodeGenWriteBarrier((&___incReadDecoder_48), value);
	}

	inline static int32_t get_offset_of_incReadState_49() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___incReadState_49)); }
	inline int32_t get_incReadState_49() const { return ___incReadState_49; }
	inline int32_t* get_address_of_incReadState_49() { return &___incReadState_49; }
	inline void set_incReadState_49(int32_t value)
	{
		___incReadState_49 = value;
	}

	inline static int32_t get_offset_of_incReadLineInfo_50() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___incReadLineInfo_50)); }
	inline LineInfo_t3266778363  get_incReadLineInfo_50() const { return ___incReadLineInfo_50; }
	inline LineInfo_t3266778363 * get_address_of_incReadLineInfo_50() { return &___incReadLineInfo_50; }
	inline void set_incReadLineInfo_50(LineInfo_t3266778363  value)
	{
		___incReadLineInfo_50 = value;
	}

	inline static int32_t get_offset_of_incReadDepth_51() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___incReadDepth_51)); }
	inline int32_t get_incReadDepth_51() const { return ___incReadDepth_51; }
	inline int32_t* get_address_of_incReadDepth_51() { return &___incReadDepth_51; }
	inline void set_incReadDepth_51(int32_t value)
	{
		___incReadDepth_51 = value;
	}

	inline static int32_t get_offset_of_incReadLeftStartPos_52() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___incReadLeftStartPos_52)); }
	inline int32_t get_incReadLeftStartPos_52() const { return ___incReadLeftStartPos_52; }
	inline int32_t* get_address_of_incReadLeftStartPos_52() { return &___incReadLeftStartPos_52; }
	inline void set_incReadLeftStartPos_52(int32_t value)
	{
		___incReadLeftStartPos_52 = value;
	}

	inline static int32_t get_offset_of_incReadLeftEndPos_53() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___incReadLeftEndPos_53)); }
	inline int32_t get_incReadLeftEndPos_53() const { return ___incReadLeftEndPos_53; }
	inline int32_t* get_address_of_incReadLeftEndPos_53() { return &___incReadLeftEndPos_53; }
	inline void set_incReadLeftEndPos_53(int32_t value)
	{
		___incReadLeftEndPos_53 = value;
	}

	inline static int32_t get_offset_of_attributeValueBaseEntityId_54() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___attributeValueBaseEntityId_54)); }
	inline int32_t get_attributeValueBaseEntityId_54() const { return ___attributeValueBaseEntityId_54; }
	inline int32_t* get_address_of_attributeValueBaseEntityId_54() { return &___attributeValueBaseEntityId_54; }
	inline void set_attributeValueBaseEntityId_54(int32_t value)
	{
		___attributeValueBaseEntityId_54 = value;
	}

	inline static int32_t get_offset_of_emptyEntityInAttributeResolved_55() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___emptyEntityInAttributeResolved_55)); }
	inline bool get_emptyEntityInAttributeResolved_55() const { return ___emptyEntityInAttributeResolved_55; }
	inline bool* get_address_of_emptyEntityInAttributeResolved_55() { return &___emptyEntityInAttributeResolved_55; }
	inline void set_emptyEntityInAttributeResolved_55(bool value)
	{
		___emptyEntityInAttributeResolved_55 = value;
	}

	inline static int32_t get_offset_of_validationEventHandling_56() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___validationEventHandling_56)); }
	inline RuntimeObject* get_validationEventHandling_56() const { return ___validationEventHandling_56; }
	inline RuntimeObject** get_address_of_validationEventHandling_56() { return &___validationEventHandling_56; }
	inline void set_validationEventHandling_56(RuntimeObject* value)
	{
		___validationEventHandling_56 = value;
		Il2CppCodeGenWriteBarrier((&___validationEventHandling_56), value);
	}

	inline static int32_t get_offset_of_onDefaultAttributeUse_57() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___onDefaultAttributeUse_57)); }
	inline OnDefaultAttributeUseDelegate_t2911570364 * get_onDefaultAttributeUse_57() const { return ___onDefaultAttributeUse_57; }
	inline OnDefaultAttributeUseDelegate_t2911570364 ** get_address_of_onDefaultAttributeUse_57() { return &___onDefaultAttributeUse_57; }
	inline void set_onDefaultAttributeUse_57(OnDefaultAttributeUseDelegate_t2911570364 * value)
	{
		___onDefaultAttributeUse_57 = value;
		Il2CppCodeGenWriteBarrier((&___onDefaultAttributeUse_57), value);
	}

	inline static int32_t get_offset_of_validatingReaderCompatFlag_58() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___validatingReaderCompatFlag_58)); }
	inline bool get_validatingReaderCompatFlag_58() const { return ___validatingReaderCompatFlag_58; }
	inline bool* get_address_of_validatingReaderCompatFlag_58() { return &___validatingReaderCompatFlag_58; }
	inline void set_validatingReaderCompatFlag_58(bool value)
	{
		___validatingReaderCompatFlag_58 = value;
	}

	inline static int32_t get_offset_of_addDefaultAttributesAndNormalize_59() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___addDefaultAttributesAndNormalize_59)); }
	inline bool get_addDefaultAttributesAndNormalize_59() const { return ___addDefaultAttributesAndNormalize_59; }
	inline bool* get_address_of_addDefaultAttributesAndNormalize_59() { return &___addDefaultAttributesAndNormalize_59; }
	inline void set_addDefaultAttributesAndNormalize_59(bool value)
	{
		___addDefaultAttributesAndNormalize_59 = value;
	}

	inline static int32_t get_offset_of_stringBuilder_60() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___stringBuilder_60)); }
	inline StringBuilder_t * get_stringBuilder_60() const { return ___stringBuilder_60; }
	inline StringBuilder_t ** get_address_of_stringBuilder_60() { return &___stringBuilder_60; }
	inline void set_stringBuilder_60(StringBuilder_t * value)
	{
		___stringBuilder_60 = value;
		Il2CppCodeGenWriteBarrier((&___stringBuilder_60), value);
	}

	inline static int32_t get_offset_of_rootElementParsed_61() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___rootElementParsed_61)); }
	inline bool get_rootElementParsed_61() const { return ___rootElementParsed_61; }
	inline bool* get_address_of_rootElementParsed_61() { return &___rootElementParsed_61; }
	inline void set_rootElementParsed_61(bool value)
	{
		___rootElementParsed_61 = value;
	}

	inline static int32_t get_offset_of_standalone_62() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___standalone_62)); }
	inline bool get_standalone_62() const { return ___standalone_62; }
	inline bool* get_address_of_standalone_62() { return &___standalone_62; }
	inline void set_standalone_62(bool value)
	{
		___standalone_62 = value;
	}

	inline static int32_t get_offset_of_nextEntityId_63() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___nextEntityId_63)); }
	inline int32_t get_nextEntityId_63() const { return ___nextEntityId_63; }
	inline int32_t* get_address_of_nextEntityId_63() { return &___nextEntityId_63; }
	inline void set_nextEntityId_63(int32_t value)
	{
		___nextEntityId_63 = value;
	}

	inline static int32_t get_offset_of_parsingMode_64() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___parsingMode_64)); }
	inline int32_t get_parsingMode_64() const { return ___parsingMode_64; }
	inline int32_t* get_address_of_parsingMode_64() { return &___parsingMode_64; }
	inline void set_parsingMode_64(int32_t value)
	{
		___parsingMode_64 = value;
	}

	inline static int32_t get_offset_of_readState_65() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___readState_65)); }
	inline int32_t get_readState_65() const { return ___readState_65; }
	inline int32_t* get_address_of_readState_65() { return &___readState_65; }
	inline void set_readState_65(int32_t value)
	{
		___readState_65 = value;
	}

	inline static int32_t get_offset_of_lastEntity_66() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___lastEntity_66)); }
	inline RuntimeObject* get_lastEntity_66() const { return ___lastEntity_66; }
	inline RuntimeObject** get_address_of_lastEntity_66() { return &___lastEntity_66; }
	inline void set_lastEntity_66(RuntimeObject* value)
	{
		___lastEntity_66 = value;
		Il2CppCodeGenWriteBarrier((&___lastEntity_66), value);
	}

	inline static int32_t get_offset_of_afterResetState_67() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___afterResetState_67)); }
	inline bool get_afterResetState_67() const { return ___afterResetState_67; }
	inline bool* get_address_of_afterResetState_67() { return &___afterResetState_67; }
	inline void set_afterResetState_67(bool value)
	{
		___afterResetState_67 = value;
	}

	inline static int32_t get_offset_of_documentStartBytePos_68() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___documentStartBytePos_68)); }
	inline int32_t get_documentStartBytePos_68() const { return ___documentStartBytePos_68; }
	inline int32_t* get_address_of_documentStartBytePos_68() { return &___documentStartBytePos_68; }
	inline void set_documentStartBytePos_68(int32_t value)
	{
		___documentStartBytePos_68 = value;
	}

	inline static int32_t get_offset_of_readValueOffset_69() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___readValueOffset_69)); }
	inline int32_t get_readValueOffset_69() const { return ___readValueOffset_69; }
	inline int32_t* get_address_of_readValueOffset_69() { return &___readValueOffset_69; }
	inline void set_readValueOffset_69(int32_t value)
	{
		___readValueOffset_69 = value;
	}

	inline static int32_t get_offset_of_charactersInDocument_70() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___charactersInDocument_70)); }
	inline int64_t get_charactersInDocument_70() const { return ___charactersInDocument_70; }
	inline int64_t* get_address_of_charactersInDocument_70() { return &___charactersInDocument_70; }
	inline void set_charactersInDocument_70(int64_t value)
	{
		___charactersInDocument_70 = value;
	}

	inline static int32_t get_offset_of_charactersFromEntities_71() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___charactersFromEntities_71)); }
	inline int64_t get_charactersFromEntities_71() const { return ___charactersFromEntities_71; }
	inline int64_t* get_address_of_charactersFromEntities_71() { return &___charactersFromEntities_71; }
	inline void set_charactersFromEntities_71(int64_t value)
	{
		___charactersFromEntities_71 = value;
	}

	inline static int32_t get_offset_of_currentEntities_72() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___currentEntities_72)); }
	inline Dictionary_2_t1740447880 * get_currentEntities_72() const { return ___currentEntities_72; }
	inline Dictionary_2_t1740447880 ** get_address_of_currentEntities_72() { return &___currentEntities_72; }
	inline void set_currentEntities_72(Dictionary_2_t1740447880 * value)
	{
		___currentEntities_72 = value;
		Il2CppCodeGenWriteBarrier((&___currentEntities_72), value);
	}

	inline static int32_t get_offset_of_disableUndeclaredEntityCheck_73() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___disableUndeclaredEntityCheck_73)); }
	inline bool get_disableUndeclaredEntityCheck_73() const { return ___disableUndeclaredEntityCheck_73; }
	inline bool* get_address_of_disableUndeclaredEntityCheck_73() { return &___disableUndeclaredEntityCheck_73; }
	inline void set_disableUndeclaredEntityCheck_73(bool value)
	{
		___disableUndeclaredEntityCheck_73 = value;
	}

	inline static int32_t get_offset_of_outerReader_74() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___outerReader_74)); }
	inline XmlReader_t3121518892 * get_outerReader_74() const { return ___outerReader_74; }
	inline XmlReader_t3121518892 ** get_address_of_outerReader_74() { return &___outerReader_74; }
	inline void set_outerReader_74(XmlReader_t3121518892 * value)
	{
		___outerReader_74 = value;
		Il2CppCodeGenWriteBarrier((&___outerReader_74), value);
	}

	inline static int32_t get_offset_of_xmlResolverIsSet_75() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___xmlResolverIsSet_75)); }
	inline bool get_xmlResolverIsSet_75() const { return ___xmlResolverIsSet_75; }
	inline bool* get_address_of_xmlResolverIsSet_75() { return &___xmlResolverIsSet_75; }
	inline void set_xmlResolverIsSet_75(bool value)
	{
		___xmlResolverIsSet_75 = value;
	}

	inline static int32_t get_offset_of_Xml_76() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___Xml_76)); }
	inline String_t* get_Xml_76() const { return ___Xml_76; }
	inline String_t** get_address_of_Xml_76() { return &___Xml_76; }
	inline void set_Xml_76(String_t* value)
	{
		___Xml_76 = value;
		Il2CppCodeGenWriteBarrier((&___Xml_76), value);
	}

	inline static int32_t get_offset_of_XmlNs_77() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___XmlNs_77)); }
	inline String_t* get_XmlNs_77() const { return ___XmlNs_77; }
	inline String_t** get_address_of_XmlNs_77() { return &___XmlNs_77; }
	inline void set_XmlNs_77(String_t* value)
	{
		___XmlNs_77 = value;
		Il2CppCodeGenWriteBarrier((&___XmlNs_77), value);
	}

	inline static int32_t get_offset_of_parseText_dummyTask_78() { return static_cast<int32_t>(offsetof(XmlTextReaderImpl_t178060594, ___parseText_dummyTask_78)); }
	inline Task_1_t1685771062 * get_parseText_dummyTask_78() const { return ___parseText_dummyTask_78; }
	inline Task_1_t1685771062 ** get_address_of_parseText_dummyTask_78() { return &___parseText_dummyTask_78; }
	inline void set_parseText_dummyTask_78(Task_1_t1685771062 * value)
	{
		___parseText_dummyTask_78 = value;
		Il2CppCodeGenWriteBarrier((&___parseText_dummyTask_78), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLTEXTREADERIMPL_T178060594_H
#ifndef LATERINITPARAM_T1449395818_H
#define LATERINITPARAM_T1449395818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReaderImpl/LaterInitParam
struct  LaterInitParam_t1449395818  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.XmlTextReaderImpl/LaterInitParam::useAsync
	bool ___useAsync_0;
	// System.IO.Stream System.Xml.XmlTextReaderImpl/LaterInitParam::inputStream
	Stream_t1273022909 * ___inputStream_1;
	// System.Byte[] System.Xml.XmlTextReaderImpl/LaterInitParam::inputBytes
	ByteU5BU5D_t4116647657* ___inputBytes_2;
	// System.Int32 System.Xml.XmlTextReaderImpl/LaterInitParam::inputByteCount
	int32_t ___inputByteCount_3;
	// System.Uri System.Xml.XmlTextReaderImpl/LaterInitParam::inputbaseUri
	Uri_t100236324 * ___inputbaseUri_4;
	// System.String System.Xml.XmlTextReaderImpl/LaterInitParam::inputUriStr
	String_t* ___inputUriStr_5;
	// System.Xml.XmlResolver System.Xml.XmlTextReaderImpl/LaterInitParam::inputUriResolver
	XmlResolver_t626023767 * ___inputUriResolver_6;
	// System.Xml.XmlParserContext System.Xml.XmlTextReaderImpl/LaterInitParam::inputContext
	XmlParserContext_t2544895291 * ___inputContext_7;
	// System.IO.TextReader System.Xml.XmlTextReaderImpl/LaterInitParam::inputTextReader
	TextReader_t283511965 * ___inputTextReader_8;
	// System.Xml.XmlTextReaderImpl/InitInputType System.Xml.XmlTextReaderImpl/LaterInitParam::initType
	int32_t ___initType_9;

public:
	inline static int32_t get_offset_of_useAsync_0() { return static_cast<int32_t>(offsetof(LaterInitParam_t1449395818, ___useAsync_0)); }
	inline bool get_useAsync_0() const { return ___useAsync_0; }
	inline bool* get_address_of_useAsync_0() { return &___useAsync_0; }
	inline void set_useAsync_0(bool value)
	{
		___useAsync_0 = value;
	}

	inline static int32_t get_offset_of_inputStream_1() { return static_cast<int32_t>(offsetof(LaterInitParam_t1449395818, ___inputStream_1)); }
	inline Stream_t1273022909 * get_inputStream_1() const { return ___inputStream_1; }
	inline Stream_t1273022909 ** get_address_of_inputStream_1() { return &___inputStream_1; }
	inline void set_inputStream_1(Stream_t1273022909 * value)
	{
		___inputStream_1 = value;
		Il2CppCodeGenWriteBarrier((&___inputStream_1), value);
	}

	inline static int32_t get_offset_of_inputBytes_2() { return static_cast<int32_t>(offsetof(LaterInitParam_t1449395818, ___inputBytes_2)); }
	inline ByteU5BU5D_t4116647657* get_inputBytes_2() const { return ___inputBytes_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_inputBytes_2() { return &___inputBytes_2; }
	inline void set_inputBytes_2(ByteU5BU5D_t4116647657* value)
	{
		___inputBytes_2 = value;
		Il2CppCodeGenWriteBarrier((&___inputBytes_2), value);
	}

	inline static int32_t get_offset_of_inputByteCount_3() { return static_cast<int32_t>(offsetof(LaterInitParam_t1449395818, ___inputByteCount_3)); }
	inline int32_t get_inputByteCount_3() const { return ___inputByteCount_3; }
	inline int32_t* get_address_of_inputByteCount_3() { return &___inputByteCount_3; }
	inline void set_inputByteCount_3(int32_t value)
	{
		___inputByteCount_3 = value;
	}

	inline static int32_t get_offset_of_inputbaseUri_4() { return static_cast<int32_t>(offsetof(LaterInitParam_t1449395818, ___inputbaseUri_4)); }
	inline Uri_t100236324 * get_inputbaseUri_4() const { return ___inputbaseUri_4; }
	inline Uri_t100236324 ** get_address_of_inputbaseUri_4() { return &___inputbaseUri_4; }
	inline void set_inputbaseUri_4(Uri_t100236324 * value)
	{
		___inputbaseUri_4 = value;
		Il2CppCodeGenWriteBarrier((&___inputbaseUri_4), value);
	}

	inline static int32_t get_offset_of_inputUriStr_5() { return static_cast<int32_t>(offsetof(LaterInitParam_t1449395818, ___inputUriStr_5)); }
	inline String_t* get_inputUriStr_5() const { return ___inputUriStr_5; }
	inline String_t** get_address_of_inputUriStr_5() { return &___inputUriStr_5; }
	inline void set_inputUriStr_5(String_t* value)
	{
		___inputUriStr_5 = value;
		Il2CppCodeGenWriteBarrier((&___inputUriStr_5), value);
	}

	inline static int32_t get_offset_of_inputUriResolver_6() { return static_cast<int32_t>(offsetof(LaterInitParam_t1449395818, ___inputUriResolver_6)); }
	inline XmlResolver_t626023767 * get_inputUriResolver_6() const { return ___inputUriResolver_6; }
	inline XmlResolver_t626023767 ** get_address_of_inputUriResolver_6() { return &___inputUriResolver_6; }
	inline void set_inputUriResolver_6(XmlResolver_t626023767 * value)
	{
		___inputUriResolver_6 = value;
		Il2CppCodeGenWriteBarrier((&___inputUriResolver_6), value);
	}

	inline static int32_t get_offset_of_inputContext_7() { return static_cast<int32_t>(offsetof(LaterInitParam_t1449395818, ___inputContext_7)); }
	inline XmlParserContext_t2544895291 * get_inputContext_7() const { return ___inputContext_7; }
	inline XmlParserContext_t2544895291 ** get_address_of_inputContext_7() { return &___inputContext_7; }
	inline void set_inputContext_7(XmlParserContext_t2544895291 * value)
	{
		___inputContext_7 = value;
		Il2CppCodeGenWriteBarrier((&___inputContext_7), value);
	}

	inline static int32_t get_offset_of_inputTextReader_8() { return static_cast<int32_t>(offsetof(LaterInitParam_t1449395818, ___inputTextReader_8)); }
	inline TextReader_t283511965 * get_inputTextReader_8() const { return ___inputTextReader_8; }
	inline TextReader_t283511965 ** get_address_of_inputTextReader_8() { return &___inputTextReader_8; }
	inline void set_inputTextReader_8(TextReader_t283511965 * value)
	{
		___inputTextReader_8 = value;
		Il2CppCodeGenWriteBarrier((&___inputTextReader_8), value);
	}

	inline static int32_t get_offset_of_initType_9() { return static_cast<int32_t>(offsetof(LaterInitParam_t1449395818, ___initType_9)); }
	inline int32_t get_initType_9() const { return ___initType_9; }
	inline int32_t* get_address_of_initType_9() { return &___initType_9; }
	inline void set_initType_9(int32_t value)
	{
		___initType_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LATERINITPARAM_T1449395818_H
#ifndef NODEDATA_T1817330133_H
#define NODEDATA_T1817330133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReaderImpl/NodeData
struct  NodeData_t1817330133  : public RuntimeObject
{
public:
	// System.Xml.XmlNodeType System.Xml.XmlTextReaderImpl/NodeData::type
	int32_t ___type_1;
	// System.String System.Xml.XmlTextReaderImpl/NodeData::localName
	String_t* ___localName_2;
	// System.String System.Xml.XmlTextReaderImpl/NodeData::prefix
	String_t* ___prefix_3;
	// System.String System.Xml.XmlTextReaderImpl/NodeData::ns
	String_t* ___ns_4;
	// System.String System.Xml.XmlTextReaderImpl/NodeData::nameWPrefix
	String_t* ___nameWPrefix_5;
	// System.String System.Xml.XmlTextReaderImpl/NodeData::value
	String_t* ___value_6;
	// System.Char[] System.Xml.XmlTextReaderImpl/NodeData::chars
	CharU5BU5D_t3528271667* ___chars_7;
	// System.Int32 System.Xml.XmlTextReaderImpl/NodeData::valueStartPos
	int32_t ___valueStartPos_8;
	// System.Int32 System.Xml.XmlTextReaderImpl/NodeData::valueLength
	int32_t ___valueLength_9;
	// System.Xml.LineInfo System.Xml.XmlTextReaderImpl/NodeData::lineInfo
	LineInfo_t3266778363  ___lineInfo_10;
	// System.Xml.LineInfo System.Xml.XmlTextReaderImpl/NodeData::lineInfo2
	LineInfo_t3266778363  ___lineInfo2_11;
	// System.Char System.Xml.XmlTextReaderImpl/NodeData::quoteChar
	Il2CppChar ___quoteChar_12;
	// System.Int32 System.Xml.XmlTextReaderImpl/NodeData::depth
	int32_t ___depth_13;
	// System.Boolean System.Xml.XmlTextReaderImpl/NodeData::isEmptyOrDefault
	bool ___isEmptyOrDefault_14;
	// System.Int32 System.Xml.XmlTextReaderImpl/NodeData::entityId
	int32_t ___entityId_15;
	// System.Boolean System.Xml.XmlTextReaderImpl/NodeData::xmlContextPushed
	bool ___xmlContextPushed_16;
	// System.Xml.XmlTextReaderImpl/NodeData System.Xml.XmlTextReaderImpl/NodeData::nextAttrValueChunk
	NodeData_t1817330133 * ___nextAttrValueChunk_17;
	// System.Object System.Xml.XmlTextReaderImpl/NodeData::schemaType
	RuntimeObject * ___schemaType_18;
	// System.Object System.Xml.XmlTextReaderImpl/NodeData::typedValue
	RuntimeObject * ___typedValue_19;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(NodeData_t1817330133, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_localName_2() { return static_cast<int32_t>(offsetof(NodeData_t1817330133, ___localName_2)); }
	inline String_t* get_localName_2() const { return ___localName_2; }
	inline String_t** get_address_of_localName_2() { return &___localName_2; }
	inline void set_localName_2(String_t* value)
	{
		___localName_2 = value;
		Il2CppCodeGenWriteBarrier((&___localName_2), value);
	}

	inline static int32_t get_offset_of_prefix_3() { return static_cast<int32_t>(offsetof(NodeData_t1817330133, ___prefix_3)); }
	inline String_t* get_prefix_3() const { return ___prefix_3; }
	inline String_t** get_address_of_prefix_3() { return &___prefix_3; }
	inline void set_prefix_3(String_t* value)
	{
		___prefix_3 = value;
		Il2CppCodeGenWriteBarrier((&___prefix_3), value);
	}

	inline static int32_t get_offset_of_ns_4() { return static_cast<int32_t>(offsetof(NodeData_t1817330133, ___ns_4)); }
	inline String_t* get_ns_4() const { return ___ns_4; }
	inline String_t** get_address_of_ns_4() { return &___ns_4; }
	inline void set_ns_4(String_t* value)
	{
		___ns_4 = value;
		Il2CppCodeGenWriteBarrier((&___ns_4), value);
	}

	inline static int32_t get_offset_of_nameWPrefix_5() { return static_cast<int32_t>(offsetof(NodeData_t1817330133, ___nameWPrefix_5)); }
	inline String_t* get_nameWPrefix_5() const { return ___nameWPrefix_5; }
	inline String_t** get_address_of_nameWPrefix_5() { return &___nameWPrefix_5; }
	inline void set_nameWPrefix_5(String_t* value)
	{
		___nameWPrefix_5 = value;
		Il2CppCodeGenWriteBarrier((&___nameWPrefix_5), value);
	}

	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(NodeData_t1817330133, ___value_6)); }
	inline String_t* get_value_6() const { return ___value_6; }
	inline String_t** get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(String_t* value)
	{
		___value_6 = value;
		Il2CppCodeGenWriteBarrier((&___value_6), value);
	}

	inline static int32_t get_offset_of_chars_7() { return static_cast<int32_t>(offsetof(NodeData_t1817330133, ___chars_7)); }
	inline CharU5BU5D_t3528271667* get_chars_7() const { return ___chars_7; }
	inline CharU5BU5D_t3528271667** get_address_of_chars_7() { return &___chars_7; }
	inline void set_chars_7(CharU5BU5D_t3528271667* value)
	{
		___chars_7 = value;
		Il2CppCodeGenWriteBarrier((&___chars_7), value);
	}

	inline static int32_t get_offset_of_valueStartPos_8() { return static_cast<int32_t>(offsetof(NodeData_t1817330133, ___valueStartPos_8)); }
	inline int32_t get_valueStartPos_8() const { return ___valueStartPos_8; }
	inline int32_t* get_address_of_valueStartPos_8() { return &___valueStartPos_8; }
	inline void set_valueStartPos_8(int32_t value)
	{
		___valueStartPos_8 = value;
	}

	inline static int32_t get_offset_of_valueLength_9() { return static_cast<int32_t>(offsetof(NodeData_t1817330133, ___valueLength_9)); }
	inline int32_t get_valueLength_9() const { return ___valueLength_9; }
	inline int32_t* get_address_of_valueLength_9() { return &___valueLength_9; }
	inline void set_valueLength_9(int32_t value)
	{
		___valueLength_9 = value;
	}

	inline static int32_t get_offset_of_lineInfo_10() { return static_cast<int32_t>(offsetof(NodeData_t1817330133, ___lineInfo_10)); }
	inline LineInfo_t3266778363  get_lineInfo_10() const { return ___lineInfo_10; }
	inline LineInfo_t3266778363 * get_address_of_lineInfo_10() { return &___lineInfo_10; }
	inline void set_lineInfo_10(LineInfo_t3266778363  value)
	{
		___lineInfo_10 = value;
	}

	inline static int32_t get_offset_of_lineInfo2_11() { return static_cast<int32_t>(offsetof(NodeData_t1817330133, ___lineInfo2_11)); }
	inline LineInfo_t3266778363  get_lineInfo2_11() const { return ___lineInfo2_11; }
	inline LineInfo_t3266778363 * get_address_of_lineInfo2_11() { return &___lineInfo2_11; }
	inline void set_lineInfo2_11(LineInfo_t3266778363  value)
	{
		___lineInfo2_11 = value;
	}

	inline static int32_t get_offset_of_quoteChar_12() { return static_cast<int32_t>(offsetof(NodeData_t1817330133, ___quoteChar_12)); }
	inline Il2CppChar get_quoteChar_12() const { return ___quoteChar_12; }
	inline Il2CppChar* get_address_of_quoteChar_12() { return &___quoteChar_12; }
	inline void set_quoteChar_12(Il2CppChar value)
	{
		___quoteChar_12 = value;
	}

	inline static int32_t get_offset_of_depth_13() { return static_cast<int32_t>(offsetof(NodeData_t1817330133, ___depth_13)); }
	inline int32_t get_depth_13() const { return ___depth_13; }
	inline int32_t* get_address_of_depth_13() { return &___depth_13; }
	inline void set_depth_13(int32_t value)
	{
		___depth_13 = value;
	}

	inline static int32_t get_offset_of_isEmptyOrDefault_14() { return static_cast<int32_t>(offsetof(NodeData_t1817330133, ___isEmptyOrDefault_14)); }
	inline bool get_isEmptyOrDefault_14() const { return ___isEmptyOrDefault_14; }
	inline bool* get_address_of_isEmptyOrDefault_14() { return &___isEmptyOrDefault_14; }
	inline void set_isEmptyOrDefault_14(bool value)
	{
		___isEmptyOrDefault_14 = value;
	}

	inline static int32_t get_offset_of_entityId_15() { return static_cast<int32_t>(offsetof(NodeData_t1817330133, ___entityId_15)); }
	inline int32_t get_entityId_15() const { return ___entityId_15; }
	inline int32_t* get_address_of_entityId_15() { return &___entityId_15; }
	inline void set_entityId_15(int32_t value)
	{
		___entityId_15 = value;
	}

	inline static int32_t get_offset_of_xmlContextPushed_16() { return static_cast<int32_t>(offsetof(NodeData_t1817330133, ___xmlContextPushed_16)); }
	inline bool get_xmlContextPushed_16() const { return ___xmlContextPushed_16; }
	inline bool* get_address_of_xmlContextPushed_16() { return &___xmlContextPushed_16; }
	inline void set_xmlContextPushed_16(bool value)
	{
		___xmlContextPushed_16 = value;
	}

	inline static int32_t get_offset_of_nextAttrValueChunk_17() { return static_cast<int32_t>(offsetof(NodeData_t1817330133, ___nextAttrValueChunk_17)); }
	inline NodeData_t1817330133 * get_nextAttrValueChunk_17() const { return ___nextAttrValueChunk_17; }
	inline NodeData_t1817330133 ** get_address_of_nextAttrValueChunk_17() { return &___nextAttrValueChunk_17; }
	inline void set_nextAttrValueChunk_17(NodeData_t1817330133 * value)
	{
		___nextAttrValueChunk_17 = value;
		Il2CppCodeGenWriteBarrier((&___nextAttrValueChunk_17), value);
	}

	inline static int32_t get_offset_of_schemaType_18() { return static_cast<int32_t>(offsetof(NodeData_t1817330133, ___schemaType_18)); }
	inline RuntimeObject * get_schemaType_18() const { return ___schemaType_18; }
	inline RuntimeObject ** get_address_of_schemaType_18() { return &___schemaType_18; }
	inline void set_schemaType_18(RuntimeObject * value)
	{
		___schemaType_18 = value;
		Il2CppCodeGenWriteBarrier((&___schemaType_18), value);
	}

	inline static int32_t get_offset_of_typedValue_19() { return static_cast<int32_t>(offsetof(NodeData_t1817330133, ___typedValue_19)); }
	inline RuntimeObject * get_typedValue_19() const { return ___typedValue_19; }
	inline RuntimeObject ** get_address_of_typedValue_19() { return &___typedValue_19; }
	inline void set_typedValue_19(RuntimeObject * value)
	{
		___typedValue_19 = value;
		Il2CppCodeGenWriteBarrier((&___typedValue_19), value);
	}
};

struct NodeData_t1817330133_StaticFields
{
public:
	// System.Xml.XmlTextReaderImpl/NodeData modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.XmlTextReaderImpl/NodeData::s_None
	NodeData_t1817330133 * ___s_None_0;

public:
	inline static int32_t get_offset_of_s_None_0() { return static_cast<int32_t>(offsetof(NodeData_t1817330133_StaticFields, ___s_None_0)); }
	inline NodeData_t1817330133 * get_s_None_0() const { return ___s_None_0; }
	inline NodeData_t1817330133 ** get_address_of_s_None_0() { return &___s_None_0; }
	inline void set_s_None_0(NodeData_t1817330133 * value)
	{
		___s_None_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODEDATA_T1817330133_H
#ifndef XMLCONTEXT_T1618903103_H
#define XMLCONTEXT_T1618903103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReaderImpl/XmlContext
struct  XmlContext_t1618903103  : public RuntimeObject
{
public:
	// System.Xml.XmlSpace System.Xml.XmlTextReaderImpl/XmlContext::xmlSpace
	int32_t ___xmlSpace_0;
	// System.String System.Xml.XmlTextReaderImpl/XmlContext::xmlLang
	String_t* ___xmlLang_1;
	// System.String System.Xml.XmlTextReaderImpl/XmlContext::defaultNamespace
	String_t* ___defaultNamespace_2;
	// System.Xml.XmlTextReaderImpl/XmlContext System.Xml.XmlTextReaderImpl/XmlContext::previousContext
	XmlContext_t1618903103 * ___previousContext_3;

public:
	inline static int32_t get_offset_of_xmlSpace_0() { return static_cast<int32_t>(offsetof(XmlContext_t1618903103, ___xmlSpace_0)); }
	inline int32_t get_xmlSpace_0() const { return ___xmlSpace_0; }
	inline int32_t* get_address_of_xmlSpace_0() { return &___xmlSpace_0; }
	inline void set_xmlSpace_0(int32_t value)
	{
		___xmlSpace_0 = value;
	}

	inline static int32_t get_offset_of_xmlLang_1() { return static_cast<int32_t>(offsetof(XmlContext_t1618903103, ___xmlLang_1)); }
	inline String_t* get_xmlLang_1() const { return ___xmlLang_1; }
	inline String_t** get_address_of_xmlLang_1() { return &___xmlLang_1; }
	inline void set_xmlLang_1(String_t* value)
	{
		___xmlLang_1 = value;
		Il2CppCodeGenWriteBarrier((&___xmlLang_1), value);
	}

	inline static int32_t get_offset_of_defaultNamespace_2() { return static_cast<int32_t>(offsetof(XmlContext_t1618903103, ___defaultNamespace_2)); }
	inline String_t* get_defaultNamespace_2() const { return ___defaultNamespace_2; }
	inline String_t** get_address_of_defaultNamespace_2() { return &___defaultNamespace_2; }
	inline void set_defaultNamespace_2(String_t* value)
	{
		___defaultNamespace_2 = value;
		Il2CppCodeGenWriteBarrier((&___defaultNamespace_2), value);
	}

	inline static int32_t get_offset_of_previousContext_3() { return static_cast<int32_t>(offsetof(XmlContext_t1618903103, ___previousContext_3)); }
	inline XmlContext_t1618903103 * get_previousContext_3() const { return ___previousContext_3; }
	inline XmlContext_t1618903103 ** get_address_of_previousContext_3() { return &___previousContext_3; }
	inline void set_previousContext_3(XmlContext_t1618903103 * value)
	{
		___previousContext_3 = value;
		Il2CppCodeGenWriteBarrier((&___previousContext_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLCONTEXT_T1618903103_H
#ifndef XMLTEXTWRITER_T2114213153_H
#define XMLTEXTWRITER_T2114213153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter
struct  XmlTextWriter_t2114213153  : public XmlWriter_t127905479
{
public:
	// System.IO.TextWriter System.Xml.XmlTextWriter::textWriter
	TextWriter_t3478189236 * ___textWriter_1;
	// System.Xml.XmlTextEncoder System.Xml.XmlTextWriter::xmlEncoder
	XmlTextEncoder_t1632274355 * ___xmlEncoder_2;
	// System.Text.Encoding System.Xml.XmlTextWriter::encoding
	Encoding_t1523322056 * ___encoding_3;
	// System.Xml.Formatting System.Xml.XmlTextWriter::formatting
	int32_t ___formatting_4;
	// System.Boolean System.Xml.XmlTextWriter::indented
	bool ___indented_5;
	// System.Int32 System.Xml.XmlTextWriter::indentation
	int32_t ___indentation_6;
	// System.Char System.Xml.XmlTextWriter::indentChar
	Il2CppChar ___indentChar_7;
	// System.Xml.XmlTextWriter/TagInfo[] System.Xml.XmlTextWriter::stack
	TagInfoU5BU5D_t2840723532* ___stack_8;
	// System.Int32 System.Xml.XmlTextWriter::top
	int32_t ___top_9;
	// System.Xml.XmlTextWriter/State[] System.Xml.XmlTextWriter::stateTable
	StateU5BU5D_t428546178* ___stateTable_10;
	// System.Xml.XmlTextWriter/State System.Xml.XmlTextWriter::currentState
	int32_t ___currentState_11;
	// System.Xml.XmlTextWriter/Token System.Xml.XmlTextWriter::lastToken
	int32_t ___lastToken_12;
	// System.Xml.XmlTextWriterBase64Encoder System.Xml.XmlTextWriter::base64Encoder
	XmlTextWriterBase64Encoder_t4259465041 * ___base64Encoder_13;
	// System.Char System.Xml.XmlTextWriter::quoteChar
	Il2CppChar ___quoteChar_14;
	// System.Char System.Xml.XmlTextWriter::curQuoteChar
	Il2CppChar ___curQuoteChar_15;
	// System.Boolean System.Xml.XmlTextWriter::namespaces
	bool ___namespaces_16;
	// System.Xml.XmlTextWriter/SpecialAttr System.Xml.XmlTextWriter::specialAttr
	int32_t ___specialAttr_17;
	// System.String System.Xml.XmlTextWriter::prefixForXmlNs
	String_t* ___prefixForXmlNs_18;
	// System.Boolean System.Xml.XmlTextWriter::flush
	bool ___flush_19;
	// System.Xml.XmlTextWriter/Namespace[] System.Xml.XmlTextWriter::nsStack
	NamespaceU5BU5D_t4259279085* ___nsStack_20;
	// System.Int32 System.Xml.XmlTextWriter::nsTop
	int32_t ___nsTop_21;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlTextWriter::nsHashtable
	Dictionary_2_t2736202052 * ___nsHashtable_22;
	// System.Boolean System.Xml.XmlTextWriter::useNsHashtable
	bool ___useNsHashtable_23;
	// System.Xml.XmlCharType System.Xml.XmlTextWriter::xmlCharType
	XmlCharType_t2277243275  ___xmlCharType_24;

public:
	inline static int32_t get_offset_of_textWriter_1() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___textWriter_1)); }
	inline TextWriter_t3478189236 * get_textWriter_1() const { return ___textWriter_1; }
	inline TextWriter_t3478189236 ** get_address_of_textWriter_1() { return &___textWriter_1; }
	inline void set_textWriter_1(TextWriter_t3478189236 * value)
	{
		___textWriter_1 = value;
		Il2CppCodeGenWriteBarrier((&___textWriter_1), value);
	}

	inline static int32_t get_offset_of_xmlEncoder_2() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___xmlEncoder_2)); }
	inline XmlTextEncoder_t1632274355 * get_xmlEncoder_2() const { return ___xmlEncoder_2; }
	inline XmlTextEncoder_t1632274355 ** get_address_of_xmlEncoder_2() { return &___xmlEncoder_2; }
	inline void set_xmlEncoder_2(XmlTextEncoder_t1632274355 * value)
	{
		___xmlEncoder_2 = value;
		Il2CppCodeGenWriteBarrier((&___xmlEncoder_2), value);
	}

	inline static int32_t get_offset_of_encoding_3() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___encoding_3)); }
	inline Encoding_t1523322056 * get_encoding_3() const { return ___encoding_3; }
	inline Encoding_t1523322056 ** get_address_of_encoding_3() { return &___encoding_3; }
	inline void set_encoding_3(Encoding_t1523322056 * value)
	{
		___encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_3), value);
	}

	inline static int32_t get_offset_of_formatting_4() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___formatting_4)); }
	inline int32_t get_formatting_4() const { return ___formatting_4; }
	inline int32_t* get_address_of_formatting_4() { return &___formatting_4; }
	inline void set_formatting_4(int32_t value)
	{
		___formatting_4 = value;
	}

	inline static int32_t get_offset_of_indented_5() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___indented_5)); }
	inline bool get_indented_5() const { return ___indented_5; }
	inline bool* get_address_of_indented_5() { return &___indented_5; }
	inline void set_indented_5(bool value)
	{
		___indented_5 = value;
	}

	inline static int32_t get_offset_of_indentation_6() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___indentation_6)); }
	inline int32_t get_indentation_6() const { return ___indentation_6; }
	inline int32_t* get_address_of_indentation_6() { return &___indentation_6; }
	inline void set_indentation_6(int32_t value)
	{
		___indentation_6 = value;
	}

	inline static int32_t get_offset_of_indentChar_7() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___indentChar_7)); }
	inline Il2CppChar get_indentChar_7() const { return ___indentChar_7; }
	inline Il2CppChar* get_address_of_indentChar_7() { return &___indentChar_7; }
	inline void set_indentChar_7(Il2CppChar value)
	{
		___indentChar_7 = value;
	}

	inline static int32_t get_offset_of_stack_8() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___stack_8)); }
	inline TagInfoU5BU5D_t2840723532* get_stack_8() const { return ___stack_8; }
	inline TagInfoU5BU5D_t2840723532** get_address_of_stack_8() { return &___stack_8; }
	inline void set_stack_8(TagInfoU5BU5D_t2840723532* value)
	{
		___stack_8 = value;
		Il2CppCodeGenWriteBarrier((&___stack_8), value);
	}

	inline static int32_t get_offset_of_top_9() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___top_9)); }
	inline int32_t get_top_9() const { return ___top_9; }
	inline int32_t* get_address_of_top_9() { return &___top_9; }
	inline void set_top_9(int32_t value)
	{
		___top_9 = value;
	}

	inline static int32_t get_offset_of_stateTable_10() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___stateTable_10)); }
	inline StateU5BU5D_t428546178* get_stateTable_10() const { return ___stateTable_10; }
	inline StateU5BU5D_t428546178** get_address_of_stateTable_10() { return &___stateTable_10; }
	inline void set_stateTable_10(StateU5BU5D_t428546178* value)
	{
		___stateTable_10 = value;
		Il2CppCodeGenWriteBarrier((&___stateTable_10), value);
	}

	inline static int32_t get_offset_of_currentState_11() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___currentState_11)); }
	inline int32_t get_currentState_11() const { return ___currentState_11; }
	inline int32_t* get_address_of_currentState_11() { return &___currentState_11; }
	inline void set_currentState_11(int32_t value)
	{
		___currentState_11 = value;
	}

	inline static int32_t get_offset_of_lastToken_12() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___lastToken_12)); }
	inline int32_t get_lastToken_12() const { return ___lastToken_12; }
	inline int32_t* get_address_of_lastToken_12() { return &___lastToken_12; }
	inline void set_lastToken_12(int32_t value)
	{
		___lastToken_12 = value;
	}

	inline static int32_t get_offset_of_base64Encoder_13() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___base64Encoder_13)); }
	inline XmlTextWriterBase64Encoder_t4259465041 * get_base64Encoder_13() const { return ___base64Encoder_13; }
	inline XmlTextWriterBase64Encoder_t4259465041 ** get_address_of_base64Encoder_13() { return &___base64Encoder_13; }
	inline void set_base64Encoder_13(XmlTextWriterBase64Encoder_t4259465041 * value)
	{
		___base64Encoder_13 = value;
		Il2CppCodeGenWriteBarrier((&___base64Encoder_13), value);
	}

	inline static int32_t get_offset_of_quoteChar_14() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___quoteChar_14)); }
	inline Il2CppChar get_quoteChar_14() const { return ___quoteChar_14; }
	inline Il2CppChar* get_address_of_quoteChar_14() { return &___quoteChar_14; }
	inline void set_quoteChar_14(Il2CppChar value)
	{
		___quoteChar_14 = value;
	}

	inline static int32_t get_offset_of_curQuoteChar_15() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___curQuoteChar_15)); }
	inline Il2CppChar get_curQuoteChar_15() const { return ___curQuoteChar_15; }
	inline Il2CppChar* get_address_of_curQuoteChar_15() { return &___curQuoteChar_15; }
	inline void set_curQuoteChar_15(Il2CppChar value)
	{
		___curQuoteChar_15 = value;
	}

	inline static int32_t get_offset_of_namespaces_16() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___namespaces_16)); }
	inline bool get_namespaces_16() const { return ___namespaces_16; }
	inline bool* get_address_of_namespaces_16() { return &___namespaces_16; }
	inline void set_namespaces_16(bool value)
	{
		___namespaces_16 = value;
	}

	inline static int32_t get_offset_of_specialAttr_17() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___specialAttr_17)); }
	inline int32_t get_specialAttr_17() const { return ___specialAttr_17; }
	inline int32_t* get_address_of_specialAttr_17() { return &___specialAttr_17; }
	inline void set_specialAttr_17(int32_t value)
	{
		___specialAttr_17 = value;
	}

	inline static int32_t get_offset_of_prefixForXmlNs_18() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___prefixForXmlNs_18)); }
	inline String_t* get_prefixForXmlNs_18() const { return ___prefixForXmlNs_18; }
	inline String_t** get_address_of_prefixForXmlNs_18() { return &___prefixForXmlNs_18; }
	inline void set_prefixForXmlNs_18(String_t* value)
	{
		___prefixForXmlNs_18 = value;
		Il2CppCodeGenWriteBarrier((&___prefixForXmlNs_18), value);
	}

	inline static int32_t get_offset_of_flush_19() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___flush_19)); }
	inline bool get_flush_19() const { return ___flush_19; }
	inline bool* get_address_of_flush_19() { return &___flush_19; }
	inline void set_flush_19(bool value)
	{
		___flush_19 = value;
	}

	inline static int32_t get_offset_of_nsStack_20() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___nsStack_20)); }
	inline NamespaceU5BU5D_t4259279085* get_nsStack_20() const { return ___nsStack_20; }
	inline NamespaceU5BU5D_t4259279085** get_address_of_nsStack_20() { return &___nsStack_20; }
	inline void set_nsStack_20(NamespaceU5BU5D_t4259279085* value)
	{
		___nsStack_20 = value;
		Il2CppCodeGenWriteBarrier((&___nsStack_20), value);
	}

	inline static int32_t get_offset_of_nsTop_21() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___nsTop_21)); }
	inline int32_t get_nsTop_21() const { return ___nsTop_21; }
	inline int32_t* get_address_of_nsTop_21() { return &___nsTop_21; }
	inline void set_nsTop_21(int32_t value)
	{
		___nsTop_21 = value;
	}

	inline static int32_t get_offset_of_nsHashtable_22() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___nsHashtable_22)); }
	inline Dictionary_2_t2736202052 * get_nsHashtable_22() const { return ___nsHashtable_22; }
	inline Dictionary_2_t2736202052 ** get_address_of_nsHashtable_22() { return &___nsHashtable_22; }
	inline void set_nsHashtable_22(Dictionary_2_t2736202052 * value)
	{
		___nsHashtable_22 = value;
		Il2CppCodeGenWriteBarrier((&___nsHashtable_22), value);
	}

	inline static int32_t get_offset_of_useNsHashtable_23() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___useNsHashtable_23)); }
	inline bool get_useNsHashtable_23() const { return ___useNsHashtable_23; }
	inline bool* get_address_of_useNsHashtable_23() { return &___useNsHashtable_23; }
	inline void set_useNsHashtable_23(bool value)
	{
		___useNsHashtable_23 = value;
	}

	inline static int32_t get_offset_of_xmlCharType_24() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___xmlCharType_24)); }
	inline XmlCharType_t2277243275  get_xmlCharType_24() const { return ___xmlCharType_24; }
	inline XmlCharType_t2277243275 * get_address_of_xmlCharType_24() { return &___xmlCharType_24; }
	inline void set_xmlCharType_24(XmlCharType_t2277243275  value)
	{
		___xmlCharType_24 = value;
	}
};

struct XmlTextWriter_t2114213153_StaticFields
{
public:
	// System.String[] System.Xml.XmlTextWriter::stateName
	StringU5BU5D_t1281789340* ___stateName_25;
	// System.String[] System.Xml.XmlTextWriter::tokenName
	StringU5BU5D_t1281789340* ___tokenName_26;
	// System.Xml.XmlTextWriter/State[] System.Xml.XmlTextWriter::stateTableDefault
	StateU5BU5D_t428546178* ___stateTableDefault_27;
	// System.Xml.XmlTextWriter/State[] System.Xml.XmlTextWriter::stateTableDocument
	StateU5BU5D_t428546178* ___stateTableDocument_28;

public:
	inline static int32_t get_offset_of_stateName_25() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153_StaticFields, ___stateName_25)); }
	inline StringU5BU5D_t1281789340* get_stateName_25() const { return ___stateName_25; }
	inline StringU5BU5D_t1281789340** get_address_of_stateName_25() { return &___stateName_25; }
	inline void set_stateName_25(StringU5BU5D_t1281789340* value)
	{
		___stateName_25 = value;
		Il2CppCodeGenWriteBarrier((&___stateName_25), value);
	}

	inline static int32_t get_offset_of_tokenName_26() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153_StaticFields, ___tokenName_26)); }
	inline StringU5BU5D_t1281789340* get_tokenName_26() const { return ___tokenName_26; }
	inline StringU5BU5D_t1281789340** get_address_of_tokenName_26() { return &___tokenName_26; }
	inline void set_tokenName_26(StringU5BU5D_t1281789340* value)
	{
		___tokenName_26 = value;
		Il2CppCodeGenWriteBarrier((&___tokenName_26), value);
	}

	inline static int32_t get_offset_of_stateTableDefault_27() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153_StaticFields, ___stateTableDefault_27)); }
	inline StateU5BU5D_t428546178* get_stateTableDefault_27() const { return ___stateTableDefault_27; }
	inline StateU5BU5D_t428546178** get_address_of_stateTableDefault_27() { return &___stateTableDefault_27; }
	inline void set_stateTableDefault_27(StateU5BU5D_t428546178* value)
	{
		___stateTableDefault_27 = value;
		Il2CppCodeGenWriteBarrier((&___stateTableDefault_27), value);
	}

	inline static int32_t get_offset_of_stateTableDocument_28() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153_StaticFields, ___stateTableDocument_28)); }
	inline StateU5BU5D_t428546178* get_stateTableDocument_28() const { return ___stateTableDocument_28; }
	inline StateU5BU5D_t428546178** get_address_of_stateTableDocument_28() { return &___stateTableDocument_28; }
	inline void set_stateTableDocument_28(StateU5BU5D_t428546178* value)
	{
		___stateTableDocument_28 = value;
		Il2CppCodeGenWriteBarrier((&___stateTableDocument_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLTEXTWRITER_T2114213153_H
#ifndef TAGINFO_T3526638417_H
#define TAGINFO_T3526638417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/TagInfo
struct  TagInfo_t3526638417 
{
public:
	// System.String System.Xml.XmlTextWriter/TagInfo::name
	String_t* ___name_0;
	// System.String System.Xml.XmlTextWriter/TagInfo::prefix
	String_t* ___prefix_1;
	// System.String System.Xml.XmlTextWriter/TagInfo::defaultNs
	String_t* ___defaultNs_2;
	// System.Xml.XmlTextWriter/NamespaceState System.Xml.XmlTextWriter/TagInfo::defaultNsState
	int32_t ___defaultNsState_3;
	// System.Xml.XmlSpace System.Xml.XmlTextWriter/TagInfo::xmlSpace
	int32_t ___xmlSpace_4;
	// System.String System.Xml.XmlTextWriter/TagInfo::xmlLang
	String_t* ___xmlLang_5;
	// System.Int32 System.Xml.XmlTextWriter/TagInfo::prevNsTop
	int32_t ___prevNsTop_6;
	// System.Int32 System.Xml.XmlTextWriter/TagInfo::prefixCount
	int32_t ___prefixCount_7;
	// System.Boolean System.Xml.XmlTextWriter/TagInfo::mixed
	bool ___mixed_8;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(TagInfo_t3526638417, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_prefix_1() { return static_cast<int32_t>(offsetof(TagInfo_t3526638417, ___prefix_1)); }
	inline String_t* get_prefix_1() const { return ___prefix_1; }
	inline String_t** get_address_of_prefix_1() { return &___prefix_1; }
	inline void set_prefix_1(String_t* value)
	{
		___prefix_1 = value;
		Il2CppCodeGenWriteBarrier((&___prefix_1), value);
	}

	inline static int32_t get_offset_of_defaultNs_2() { return static_cast<int32_t>(offsetof(TagInfo_t3526638417, ___defaultNs_2)); }
	inline String_t* get_defaultNs_2() const { return ___defaultNs_2; }
	inline String_t** get_address_of_defaultNs_2() { return &___defaultNs_2; }
	inline void set_defaultNs_2(String_t* value)
	{
		___defaultNs_2 = value;
		Il2CppCodeGenWriteBarrier((&___defaultNs_2), value);
	}

	inline static int32_t get_offset_of_defaultNsState_3() { return static_cast<int32_t>(offsetof(TagInfo_t3526638417, ___defaultNsState_3)); }
	inline int32_t get_defaultNsState_3() const { return ___defaultNsState_3; }
	inline int32_t* get_address_of_defaultNsState_3() { return &___defaultNsState_3; }
	inline void set_defaultNsState_3(int32_t value)
	{
		___defaultNsState_3 = value;
	}

	inline static int32_t get_offset_of_xmlSpace_4() { return static_cast<int32_t>(offsetof(TagInfo_t3526638417, ___xmlSpace_4)); }
	inline int32_t get_xmlSpace_4() const { return ___xmlSpace_4; }
	inline int32_t* get_address_of_xmlSpace_4() { return &___xmlSpace_4; }
	inline void set_xmlSpace_4(int32_t value)
	{
		___xmlSpace_4 = value;
	}

	inline static int32_t get_offset_of_xmlLang_5() { return static_cast<int32_t>(offsetof(TagInfo_t3526638417, ___xmlLang_5)); }
	inline String_t* get_xmlLang_5() const { return ___xmlLang_5; }
	inline String_t** get_address_of_xmlLang_5() { return &___xmlLang_5; }
	inline void set_xmlLang_5(String_t* value)
	{
		___xmlLang_5 = value;
		Il2CppCodeGenWriteBarrier((&___xmlLang_5), value);
	}

	inline static int32_t get_offset_of_prevNsTop_6() { return static_cast<int32_t>(offsetof(TagInfo_t3526638417, ___prevNsTop_6)); }
	inline int32_t get_prevNsTop_6() const { return ___prevNsTop_6; }
	inline int32_t* get_address_of_prevNsTop_6() { return &___prevNsTop_6; }
	inline void set_prevNsTop_6(int32_t value)
	{
		___prevNsTop_6 = value;
	}

	inline static int32_t get_offset_of_prefixCount_7() { return static_cast<int32_t>(offsetof(TagInfo_t3526638417, ___prefixCount_7)); }
	inline int32_t get_prefixCount_7() const { return ___prefixCount_7; }
	inline int32_t* get_address_of_prefixCount_7() { return &___prefixCount_7; }
	inline void set_prefixCount_7(int32_t value)
	{
		___prefixCount_7 = value;
	}

	inline static int32_t get_offset_of_mixed_8() { return static_cast<int32_t>(offsetof(TagInfo_t3526638417, ___mixed_8)); }
	inline bool get_mixed_8() const { return ___mixed_8; }
	inline bool* get_address_of_mixed_8() { return &___mixed_8; }
	inline void set_mixed_8(bool value)
	{
		___mixed_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.XmlTextWriter/TagInfo
struct TagInfo_t3526638417_marshaled_pinvoke
{
	char* ___name_0;
	char* ___prefix_1;
	char* ___defaultNs_2;
	int32_t ___defaultNsState_3;
	int32_t ___xmlSpace_4;
	char* ___xmlLang_5;
	int32_t ___prevNsTop_6;
	int32_t ___prefixCount_7;
	int32_t ___mixed_8;
};
// Native definition for COM marshalling of System.Xml.XmlTextWriter/TagInfo
struct TagInfo_t3526638417_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___prefix_1;
	Il2CppChar* ___defaultNs_2;
	int32_t ___defaultNsState_3;
	int32_t ___xmlSpace_4;
	Il2CppChar* ___xmlLang_5;
	int32_t ___prevNsTop_6;
	int32_t ___prefixCount_7;
	int32_t ___mixed_8;
};
#endif // TAGINFO_T3526638417_H
#ifndef U3CGETENTITYASYNCU3ED__15_T1599719825_H
#define U3CGETENTITYASYNCU3ED__15_T1599719825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlUrlResolver/<GetEntityAsync>d__15
struct  U3CGetEntityAsyncU3Ed__15_t1599719825 
{
public:
	// System.Int32 System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object> System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::<>t__builder
	AsyncTaskMethodBuilder_1_t1106113378  ___U3CU3Et__builder_1;
	// System.Type System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::ofObjectToReturn
	Type_t * ___ofObjectToReturn_2;
	// System.Uri System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::absoluteUri
	Uri_t100236324 * ___absoluteUri_3;
	// System.Xml.XmlUrlResolver System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::<>4__this
	XmlUrlResolver_t817895037 * ___U3CU3E4__this_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream> System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::<>u__1
	ConfiguredTaskAwaiter_t2595523894  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEntityAsyncU3Ed__15_t1599719825, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetEntityAsyncU3Ed__15_t1599719825, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t1106113378  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t1106113378 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t1106113378  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_ofObjectToReturn_2() { return static_cast<int32_t>(offsetof(U3CGetEntityAsyncU3Ed__15_t1599719825, ___ofObjectToReturn_2)); }
	inline Type_t * get_ofObjectToReturn_2() const { return ___ofObjectToReturn_2; }
	inline Type_t ** get_address_of_ofObjectToReturn_2() { return &___ofObjectToReturn_2; }
	inline void set_ofObjectToReturn_2(Type_t * value)
	{
		___ofObjectToReturn_2 = value;
		Il2CppCodeGenWriteBarrier((&___ofObjectToReturn_2), value);
	}

	inline static int32_t get_offset_of_absoluteUri_3() { return static_cast<int32_t>(offsetof(U3CGetEntityAsyncU3Ed__15_t1599719825, ___absoluteUri_3)); }
	inline Uri_t100236324 * get_absoluteUri_3() const { return ___absoluteUri_3; }
	inline Uri_t100236324 ** get_address_of_absoluteUri_3() { return &___absoluteUri_3; }
	inline void set_absoluteUri_3(Uri_t100236324 * value)
	{
		___absoluteUri_3 = value;
		Il2CppCodeGenWriteBarrier((&___absoluteUri_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CGetEntityAsyncU3Ed__15_t1599719825, ___U3CU3E4__this_4)); }
	inline XmlUrlResolver_t817895037 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline XmlUrlResolver_t817895037 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(XmlUrlResolver_t817895037 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CGetEntityAsyncU3Ed__15_t1599719825, ___U3CU3Eu__1_5)); }
	inline ConfiguredTaskAwaiter_t2595523894  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline ConfiguredTaskAwaiter_t2595523894 * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(ConfiguredTaskAwaiter_t2595523894  value)
	{
		___U3CU3Eu__1_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETENTITYASYNCU3ED__15_T1599719825_H
#ifndef XMLVALIDATINGREADERIMPL_T1817762384_H
#define XMLVALIDATINGREADERIMPL_T1817762384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlValidatingReaderImpl
struct  XmlValidatingReaderImpl_t1817762384  : public XmlReader_t3121518892
{
public:
	// System.Xml.XmlReader System.Xml.XmlValidatingReaderImpl::coreReader
	XmlReader_t3121518892 * ___coreReader_3;
	// System.Xml.XmlTextReaderImpl System.Xml.XmlValidatingReaderImpl::coreReaderImpl
	XmlTextReaderImpl_t178060594 * ___coreReaderImpl_4;
	// System.Xml.IXmlNamespaceResolver System.Xml.XmlValidatingReaderImpl::coreReaderNSResolver
	RuntimeObject* ___coreReaderNSResolver_5;
	// System.Xml.ValidationType System.Xml.XmlValidatingReaderImpl::validationType
	int32_t ___validationType_6;
	// System.Xml.Schema.BaseValidator System.Xml.XmlValidatingReaderImpl::validator
	BaseValidator_t868759770 * ___validator_7;
	// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReaderImpl::schemaCollection
	XmlSchemaCollection_t3610399789 * ___schemaCollection_8;
	// System.Boolean System.Xml.XmlValidatingReaderImpl::processIdentityConstraints
	bool ___processIdentityConstraints_9;
	// System.Xml.XmlValidatingReaderImpl/ParsingFunction System.Xml.XmlValidatingReaderImpl::parsingFunction
	int32_t ___parsingFunction_10;
	// System.Xml.XmlValidatingReaderImpl/ValidationEventHandling System.Xml.XmlValidatingReaderImpl::eventHandling
	ValidationEventHandling_t3812646699 * ___eventHandling_11;
	// System.Xml.XmlParserContext System.Xml.XmlValidatingReaderImpl::parserContext
	XmlParserContext_t2544895291 * ___parserContext_12;
	// System.Xml.ReadContentAsBinaryHelper System.Xml.XmlValidatingReaderImpl::readBinaryHelper
	ReadContentAsBinaryHelper_t3017207972 * ___readBinaryHelper_13;
	// System.Xml.XmlReader System.Xml.XmlValidatingReaderImpl::outerReader
	XmlReader_t3121518892 * ___outerReader_14;

public:
	inline static int32_t get_offset_of_coreReader_3() { return static_cast<int32_t>(offsetof(XmlValidatingReaderImpl_t1817762384, ___coreReader_3)); }
	inline XmlReader_t3121518892 * get_coreReader_3() const { return ___coreReader_3; }
	inline XmlReader_t3121518892 ** get_address_of_coreReader_3() { return &___coreReader_3; }
	inline void set_coreReader_3(XmlReader_t3121518892 * value)
	{
		___coreReader_3 = value;
		Il2CppCodeGenWriteBarrier((&___coreReader_3), value);
	}

	inline static int32_t get_offset_of_coreReaderImpl_4() { return static_cast<int32_t>(offsetof(XmlValidatingReaderImpl_t1817762384, ___coreReaderImpl_4)); }
	inline XmlTextReaderImpl_t178060594 * get_coreReaderImpl_4() const { return ___coreReaderImpl_4; }
	inline XmlTextReaderImpl_t178060594 ** get_address_of_coreReaderImpl_4() { return &___coreReaderImpl_4; }
	inline void set_coreReaderImpl_4(XmlTextReaderImpl_t178060594 * value)
	{
		___coreReaderImpl_4 = value;
		Il2CppCodeGenWriteBarrier((&___coreReaderImpl_4), value);
	}

	inline static int32_t get_offset_of_coreReaderNSResolver_5() { return static_cast<int32_t>(offsetof(XmlValidatingReaderImpl_t1817762384, ___coreReaderNSResolver_5)); }
	inline RuntimeObject* get_coreReaderNSResolver_5() const { return ___coreReaderNSResolver_5; }
	inline RuntimeObject** get_address_of_coreReaderNSResolver_5() { return &___coreReaderNSResolver_5; }
	inline void set_coreReaderNSResolver_5(RuntimeObject* value)
	{
		___coreReaderNSResolver_5 = value;
		Il2CppCodeGenWriteBarrier((&___coreReaderNSResolver_5), value);
	}

	inline static int32_t get_offset_of_validationType_6() { return static_cast<int32_t>(offsetof(XmlValidatingReaderImpl_t1817762384, ___validationType_6)); }
	inline int32_t get_validationType_6() const { return ___validationType_6; }
	inline int32_t* get_address_of_validationType_6() { return &___validationType_6; }
	inline void set_validationType_6(int32_t value)
	{
		___validationType_6 = value;
	}

	inline static int32_t get_offset_of_validator_7() { return static_cast<int32_t>(offsetof(XmlValidatingReaderImpl_t1817762384, ___validator_7)); }
	inline BaseValidator_t868759770 * get_validator_7() const { return ___validator_7; }
	inline BaseValidator_t868759770 ** get_address_of_validator_7() { return &___validator_7; }
	inline void set_validator_7(BaseValidator_t868759770 * value)
	{
		___validator_7 = value;
		Il2CppCodeGenWriteBarrier((&___validator_7), value);
	}

	inline static int32_t get_offset_of_schemaCollection_8() { return static_cast<int32_t>(offsetof(XmlValidatingReaderImpl_t1817762384, ___schemaCollection_8)); }
	inline XmlSchemaCollection_t3610399789 * get_schemaCollection_8() const { return ___schemaCollection_8; }
	inline XmlSchemaCollection_t3610399789 ** get_address_of_schemaCollection_8() { return &___schemaCollection_8; }
	inline void set_schemaCollection_8(XmlSchemaCollection_t3610399789 * value)
	{
		___schemaCollection_8 = value;
		Il2CppCodeGenWriteBarrier((&___schemaCollection_8), value);
	}

	inline static int32_t get_offset_of_processIdentityConstraints_9() { return static_cast<int32_t>(offsetof(XmlValidatingReaderImpl_t1817762384, ___processIdentityConstraints_9)); }
	inline bool get_processIdentityConstraints_9() const { return ___processIdentityConstraints_9; }
	inline bool* get_address_of_processIdentityConstraints_9() { return &___processIdentityConstraints_9; }
	inline void set_processIdentityConstraints_9(bool value)
	{
		___processIdentityConstraints_9 = value;
	}

	inline static int32_t get_offset_of_parsingFunction_10() { return static_cast<int32_t>(offsetof(XmlValidatingReaderImpl_t1817762384, ___parsingFunction_10)); }
	inline int32_t get_parsingFunction_10() const { return ___parsingFunction_10; }
	inline int32_t* get_address_of_parsingFunction_10() { return &___parsingFunction_10; }
	inline void set_parsingFunction_10(int32_t value)
	{
		___parsingFunction_10 = value;
	}

	inline static int32_t get_offset_of_eventHandling_11() { return static_cast<int32_t>(offsetof(XmlValidatingReaderImpl_t1817762384, ___eventHandling_11)); }
	inline ValidationEventHandling_t3812646699 * get_eventHandling_11() const { return ___eventHandling_11; }
	inline ValidationEventHandling_t3812646699 ** get_address_of_eventHandling_11() { return &___eventHandling_11; }
	inline void set_eventHandling_11(ValidationEventHandling_t3812646699 * value)
	{
		___eventHandling_11 = value;
		Il2CppCodeGenWriteBarrier((&___eventHandling_11), value);
	}

	inline static int32_t get_offset_of_parserContext_12() { return static_cast<int32_t>(offsetof(XmlValidatingReaderImpl_t1817762384, ___parserContext_12)); }
	inline XmlParserContext_t2544895291 * get_parserContext_12() const { return ___parserContext_12; }
	inline XmlParserContext_t2544895291 ** get_address_of_parserContext_12() { return &___parserContext_12; }
	inline void set_parserContext_12(XmlParserContext_t2544895291 * value)
	{
		___parserContext_12 = value;
		Il2CppCodeGenWriteBarrier((&___parserContext_12), value);
	}

	inline static int32_t get_offset_of_readBinaryHelper_13() { return static_cast<int32_t>(offsetof(XmlValidatingReaderImpl_t1817762384, ___readBinaryHelper_13)); }
	inline ReadContentAsBinaryHelper_t3017207972 * get_readBinaryHelper_13() const { return ___readBinaryHelper_13; }
	inline ReadContentAsBinaryHelper_t3017207972 ** get_address_of_readBinaryHelper_13() { return &___readBinaryHelper_13; }
	inline void set_readBinaryHelper_13(ReadContentAsBinaryHelper_t3017207972 * value)
	{
		___readBinaryHelper_13 = value;
		Il2CppCodeGenWriteBarrier((&___readBinaryHelper_13), value);
	}

	inline static int32_t get_offset_of_outerReader_14() { return static_cast<int32_t>(offsetof(XmlValidatingReaderImpl_t1817762384, ___outerReader_14)); }
	inline XmlReader_t3121518892 * get_outerReader_14() const { return ___outerReader_14; }
	inline XmlReader_t3121518892 ** get_address_of_outerReader_14() { return &___outerReader_14; }
	inline void set_outerReader_14(XmlReader_t3121518892 * value)
	{
		___outerReader_14 = value;
		Il2CppCodeGenWriteBarrier((&___outerReader_14), value);
	}
};

struct XmlValidatingReaderImpl_t1817762384_StaticFields
{
public:
	// System.Xml.XmlResolver System.Xml.XmlValidatingReaderImpl::s_tempResolver
	XmlResolver_t626023767 * ___s_tempResolver_15;

public:
	inline static int32_t get_offset_of_s_tempResolver_15() { return static_cast<int32_t>(offsetof(XmlValidatingReaderImpl_t1817762384_StaticFields, ___s_tempResolver_15)); }
	inline XmlResolver_t626023767 * get_s_tempResolver_15() const { return ___s_tempResolver_15; }
	inline XmlResolver_t626023767 ** get_address_of_s_tempResolver_15() { return &___s_tempResolver_15; }
	inline void set_s_tempResolver_15(XmlResolver_t626023767 * value)
	{
		___s_tempResolver_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_tempResolver_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLVALIDATINGREADERIMPL_T1817762384_H
#ifndef XMLWHITESPACE_T131741354_H
#define XMLWHITESPACE_T131741354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWhitespace
struct  XmlWhitespace_t131741354  : public XmlCharacterData_t1167807131
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWHITESPACE_T131741354_H
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
#ifndef SCHEMAATTDEF_T2429541159_H
#define SCHEMAATTDEF_T2429541159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SchemaAttDef
struct  SchemaAttDef_t2429541159  : public SchemaDeclBase_t3500554832
{
public:
	// System.String System.Xml.Schema.SchemaAttDef::defExpanded
	String_t* ___defExpanded_11;
	// System.Int32 System.Xml.Schema.SchemaAttDef::lineNum
	int32_t ___lineNum_12;
	// System.Int32 System.Xml.Schema.SchemaAttDef::linePos
	int32_t ___linePos_13;
	// System.Int32 System.Xml.Schema.SchemaAttDef::valueLineNum
	int32_t ___valueLineNum_14;
	// System.Int32 System.Xml.Schema.SchemaAttDef::valueLinePos
	int32_t ___valueLinePos_15;
	// System.Xml.Schema.SchemaAttDef/Reserve System.Xml.Schema.SchemaAttDef::reserved
	int32_t ___reserved_16;
	// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.SchemaAttDef::schemaAttribute
	XmlSchemaAttribute_t2797257020 * ___schemaAttribute_17;

public:
	inline static int32_t get_offset_of_defExpanded_11() { return static_cast<int32_t>(offsetof(SchemaAttDef_t2429541159, ___defExpanded_11)); }
	inline String_t* get_defExpanded_11() const { return ___defExpanded_11; }
	inline String_t** get_address_of_defExpanded_11() { return &___defExpanded_11; }
	inline void set_defExpanded_11(String_t* value)
	{
		___defExpanded_11 = value;
		Il2CppCodeGenWriteBarrier((&___defExpanded_11), value);
	}

	inline static int32_t get_offset_of_lineNum_12() { return static_cast<int32_t>(offsetof(SchemaAttDef_t2429541159, ___lineNum_12)); }
	inline int32_t get_lineNum_12() const { return ___lineNum_12; }
	inline int32_t* get_address_of_lineNum_12() { return &___lineNum_12; }
	inline void set_lineNum_12(int32_t value)
	{
		___lineNum_12 = value;
	}

	inline static int32_t get_offset_of_linePos_13() { return static_cast<int32_t>(offsetof(SchemaAttDef_t2429541159, ___linePos_13)); }
	inline int32_t get_linePos_13() const { return ___linePos_13; }
	inline int32_t* get_address_of_linePos_13() { return &___linePos_13; }
	inline void set_linePos_13(int32_t value)
	{
		___linePos_13 = value;
	}

	inline static int32_t get_offset_of_valueLineNum_14() { return static_cast<int32_t>(offsetof(SchemaAttDef_t2429541159, ___valueLineNum_14)); }
	inline int32_t get_valueLineNum_14() const { return ___valueLineNum_14; }
	inline int32_t* get_address_of_valueLineNum_14() { return &___valueLineNum_14; }
	inline void set_valueLineNum_14(int32_t value)
	{
		___valueLineNum_14 = value;
	}

	inline static int32_t get_offset_of_valueLinePos_15() { return static_cast<int32_t>(offsetof(SchemaAttDef_t2429541159, ___valueLinePos_15)); }
	inline int32_t get_valueLinePos_15() const { return ___valueLinePos_15; }
	inline int32_t* get_address_of_valueLinePos_15() { return &___valueLinePos_15; }
	inline void set_valueLinePos_15(int32_t value)
	{
		___valueLinePos_15 = value;
	}

	inline static int32_t get_offset_of_reserved_16() { return static_cast<int32_t>(offsetof(SchemaAttDef_t2429541159, ___reserved_16)); }
	inline int32_t get_reserved_16() const { return ___reserved_16; }
	inline int32_t* get_address_of_reserved_16() { return &___reserved_16; }
	inline void set_reserved_16(int32_t value)
	{
		___reserved_16 = value;
	}

	inline static int32_t get_offset_of_schemaAttribute_17() { return static_cast<int32_t>(offsetof(SchemaAttDef_t2429541159, ___schemaAttribute_17)); }
	inline XmlSchemaAttribute_t2797257020 * get_schemaAttribute_17() const { return ___schemaAttribute_17; }
	inline XmlSchemaAttribute_t2797257020 ** get_address_of_schemaAttribute_17() { return &___schemaAttribute_17; }
	inline void set_schemaAttribute_17(XmlSchemaAttribute_t2797257020 * value)
	{
		___schemaAttribute_17 = value;
		Il2CppCodeGenWriteBarrier((&___schemaAttribute_17), value);
	}
};

struct SchemaAttDef_t2429541159_StaticFields
{
public:
	// System.Xml.Schema.SchemaAttDef System.Xml.Schema.SchemaAttDef::Empty
	SchemaAttDef_t2429541159 * ___Empty_18;

public:
	inline static int32_t get_offset_of_Empty_18() { return static_cast<int32_t>(offsetof(SchemaAttDef_t2429541159_StaticFields, ___Empty_18)); }
	inline SchemaAttDef_t2429541159 * get_Empty_18() const { return ___Empty_18; }
	inline SchemaAttDef_t2429541159 ** get_address_of_Empty_18() { return &___Empty_18; }
	inline void set_Empty_18(SchemaAttDef_t2429541159 * value)
	{
		___Empty_18 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEMAATTDEF_T2429541159_H
#ifndef VALIDATIONEVENTHANDLER_T791314227_H
#define VALIDATIONEVENTHANDLER_T791314227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.ValidationEventHandler
struct  ValidationEventHandler_t791314227  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATIONEVENTHANDLER_T791314227_H
#ifndef ONDEFAULTATTRIBUTEUSEDELEGATE_T2911570364_H
#define ONDEFAULTATTRIBUTEUSEDELEGATE_T2911570364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReaderImpl/OnDefaultAttributeUseDelegate
struct  OnDefaultAttributeUseDelegate_t2911570364  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONDEFAULTATTRIBUTEUSEDELEGATE_T2911570364_H
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
// System.Xml.XmlTextWriter/Namespace[]
struct NamespaceU5BU5D_t4259279085  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Namespace_t2218256516  m_Items[1];

public:
	inline Namespace_t2218256516  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Namespace_t2218256516 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Namespace_t2218256516  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Namespace_t2218256516  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Namespace_t2218256516 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Namespace_t2218256516  value)
	{
		m_Items[index] = value;
	}
};
// System.Xml.XmlTextWriter/TagInfo[]
struct TagInfoU5BU5D_t2840723532  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TagInfo_t3526638417  m_Items[1];

public:
	inline TagInfo_t3526638417  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TagInfo_t3526638417 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TagInfo_t3526638417  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TagInfo_t3526638417  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TagInfo_t3526638417 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TagInfo_t3526638417  value)
	{
		m_Items[index] = value;
	}
};
// System.Xml.XmlTextWriter/State[]
struct StateU5BU5D_t428546178  : public RuntimeArray
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m764937586_gshared (Dictionary_2_t3384741 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3959998165_gshared (Dictionary_2_t3384741 * __this, RuntimeObject * p0, int32_t* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2143527826_gshared (Dictionary_2_t3384741 * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2931667922_gshared (Dictionary_2_t3384741 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
extern "C" IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t1106113378  AsyncTaskMethodBuilder_1_Create_m457539829_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<System.Xml.XmlUrlResolver/<GetEntityAsync>d__15>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetEntityAsyncU3Ed__15_t1599719825_m489318611_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, U3CGetEntityAsyncU3Ed__15_t1599719825 * p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
extern "C" IL2CPP_METHOD_ATTR Task_1_t190679043 * AsyncTaskMethodBuilder_1_get_Task_m317986670_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t1383066211  Task_1_ConfigureAwait_m2546782974_gshared (Task_1_t190679043 * __this, bool p0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
extern "C" IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t107639853  ConfiguredTaskAwaitable_1_GetAwaiter_m2061313211_gshared (ConfiguredTaskAwaitable_1_t1383066211 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m1080323900_gshared (ConfiguredTaskAwaiter_t107639853 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,System.Xml.XmlUrlResolver/<GetEntityAsync>d__15>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t107639853_TisU3CGetEntityAsyncU3Ed__15_t1599719825_m3096584839_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, ConfiguredTaskAwaiter_t107639853 * p0, U3CGetEntityAsyncU3Ed__15_t1599719825 * p1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ConfiguredTaskAwaiter_GetResult_m2513714076_gshared (ConfiguredTaskAwaiter_t107639853 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m131199109_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m1633157453_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m2671839336_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, RuntimeObject* p0, const RuntimeMethod* method);

// System.Void System.Xml.XmlException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlException__ctor_m400140246 (XmlException_t1761730631 * __this, String_t* ___res0, String_t* ___arg1, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
extern "C" IL2CPP_METHOD_ATTR int32_t String_Compare_m3203413707 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl/DtdDefaultAttributeInfoToNodeDataComparer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DtdDefaultAttributeInfoToNodeDataComparer__ctor_m943636574 (DtdDefaultAttributeInfoToNodeDataComparer_t1152788373 * __this, const RuntimeMethod* method);
// System.Xml.XmlNameTable System.Xml.XmlTextReaderImpl::get_DtdParserProxy_NameTable()
extern "C" IL2CPP_METHOD_ATTR XmlNameTable_t71772148 * XmlTextReaderImpl_get_DtdParserProxy_NameTable_m3578938205 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Xml.IXmlNamespaceResolver System.Xml.XmlTextReaderImpl::get_DtdParserProxy_NamespaceResolver()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* XmlTextReaderImpl_get_DtdParserProxy_NamespaceResolver_m2686653452 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Uri System.Xml.XmlTextReaderImpl::get_DtdParserProxy_BaseUri()
extern "C" IL2CPP_METHOD_ATTR Uri_t100236324 * XmlTextReaderImpl_get_DtdParserProxy_BaseUri_m4261425867 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::get_DtdParserProxy_IsEof()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_get_DtdParserProxy_IsEof_m1950842164 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Char[] System.Xml.XmlTextReaderImpl::get_DtdParserProxy_ParsingBuffer()
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t3528271667* XmlTextReaderImpl_get_DtdParserProxy_ParsingBuffer_m2738122948 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReaderImpl::get_DtdParserProxy_ParsingBufferLength()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReaderImpl_get_DtdParserProxy_ParsingBufferLength_m1253419686 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReaderImpl::get_DtdParserProxy_CurrentPosition()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReaderImpl_get_DtdParserProxy_CurrentPosition_m473374944 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::set_DtdParserProxy_CurrentPosition(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReaderImpl_set_DtdParserProxy_CurrentPosition_m3029195169 (XmlTextReaderImpl_t178060594 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReaderImpl::get_DtdParserProxy_EntityStackLength()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReaderImpl_get_DtdParserProxy_EntityStackLength_m1996241070 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::get_DtdParserProxy_IsEntityEolNormalized()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_get_DtdParserProxy_IsEntityEolNormalized_m1777150273 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::DtdParserProxy_OnNewLine(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReaderImpl_DtdParserProxy_OnNewLine_m3519452374 (XmlTextReaderImpl_t178060594 * __this, int32_t ___pos0, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReaderImpl::get_DtdParserProxy_LineNo()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReaderImpl_get_DtdParserProxy_LineNo_m219647019 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReaderImpl::get_DtdParserProxy_LineStartPosition()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReaderImpl_get_DtdParserProxy_LineStartPosition_m1142848963 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReaderImpl::DtdParserProxy_ReadData()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReaderImpl_DtdParserProxy_ReadData_m898548166 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReaderImpl::DtdParserProxy_ParseNumericCharRef(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReaderImpl_DtdParserProxy_ParseNumericCharRef_m2858233383 (XmlTextReaderImpl_t178060594 * __this, StringBuilder_t * ___internalSubsetBuilder0, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReaderImpl::DtdParserProxy_ParseNamedCharRef(System.Boolean,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReaderImpl_DtdParserProxy_ParseNamedCharRef_m615743398 (XmlTextReaderImpl_t178060594 * __this, bool ___expand0, StringBuilder_t * ___internalSubsetBuilder1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::DtdParserProxy_ParsePI(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReaderImpl_DtdParserProxy_ParsePI_m1219883744 (XmlTextReaderImpl_t178060594 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::DtdParserProxy_ParseComment(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReaderImpl_DtdParserProxy_ParseComment_m3296025730 (XmlTextReaderImpl_t178060594 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::DtdParserProxy_PushEntity(System.Xml.IDtdEntityInfo,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_DtdParserProxy_PushEntity_m3242385370 (XmlTextReaderImpl_t178060594 * __this, RuntimeObject* ___entity0, int32_t* ___entityId1, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::DtdParserProxy_PopEntity(System.Xml.IDtdEntityInfo&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_DtdParserProxy_PopEntity_m2729988991 (XmlTextReaderImpl_t178060594 * __this, RuntimeObject** ___oldEntity0, int32_t* ___newEntityId1, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::DtdParserProxy_PushExternalSubset(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_DtdParserProxy_PushExternalSubset_m3740894928 (XmlTextReaderImpl_t178060594 * __this, String_t* ___systemId0, String_t* ___publicId1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::DtdParserProxy_PushInternalDtd(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReaderImpl_DtdParserProxy_PushInternalDtd_m3177850941 (XmlTextReaderImpl_t178060594 * __this, String_t* ___baseUri0, String_t* ___internalDtd1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::DtdParserProxy_Throw(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReaderImpl_DtdParserProxy_Throw_m3159562977 (XmlTextReaderImpl_t178060594 * __this, Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::DtdParserProxy_OnSystemId(System.String,System.Xml.LineInfo,System.Xml.LineInfo)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReaderImpl_DtdParserProxy_OnSystemId_m512097957 (XmlTextReaderImpl_t178060594 * __this, String_t* ___systemId0, LineInfo_t3266778363  ___keywordLineInfo1, LineInfo_t3266778363  ___systemLiteralLineInfo2, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::DtdParserProxy_OnPublicId(System.String,System.Xml.LineInfo,System.Xml.LineInfo)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReaderImpl_DtdParserProxy_OnPublicId_m49658185 (XmlTextReaderImpl_t178060594 * __this, String_t* ___publicId0, LineInfo_t3266778363  ___keywordLineInfo1, LineInfo_t3266778363  ___publicLiteralLineInfo2, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::get_DtdParserProxy_DtdValidation()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_get_DtdParserProxy_DtdValidation_m2980370907 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Xml.IValidationEventHandling System.Xml.XmlTextReaderImpl::get_DtdParserProxy_ValidationEventHandling()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* XmlTextReaderImpl_get_DtdParserProxy_ValidationEventHandling_m866893963 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::get_DtdParserProxy_Normalization()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_get_DtdParserProxy_Normalization_m467531701 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::get_DtdParserProxy_Namespaces()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_get_DtdParserProxy_Namespaces_m2906094699 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::get_DtdParserProxy_V1CompatibilityMode()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_get_DtdParserProxy_V1CompatibilityMode_m493975772 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlNamespaceManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlNamespaceManager__ctor_m1942505765 (XmlNamespaceManager_t418790500 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl/NodeData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NodeData__ctor_m2796198221 (NodeData_t1817330133 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl/NodeData::Clear(System.Xml.XmlNodeType)
extern "C" IL2CPP_METHOD_ATTR void NodeData_Clear_m38823411 (NodeData_t1817330133 * __this, int32_t ___type0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m860434552 (String_t* __this, CharU5BU5D_t3528271667* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl/NodeData::get_ValueBuffered()
extern "C" IL2CPP_METHOD_ATTR bool NodeData_get_ValueBuffered_m3309523788 (NodeData_t1817330133 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::StripSpaces(System.Char[],System.Int32,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReaderImpl_StripSpaces_m3046082348 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___value0, int32_t ___index1, int32_t* ___len2, const RuntimeMethod* method);
// System.String System.Xml.XmlTextReaderImpl::StripSpaces(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextReaderImpl_StripSpaces_m2610477575 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl/NodeData::ClearName()
extern "C" IL2CPP_METHOD_ATTR void NodeData_ClearName_m3208556405 (NodeData_t1817330133 * __this, const RuntimeMethod* method);
// System.Void System.Xml.LineInfo::Set(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void LineInfo_Set_m1965125244 (LineInfo_t3266778363 * __this, int32_t ___lineNo0, int32_t ___linePos1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl/NodeData::SetNamedNode(System.Xml.XmlNodeType,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void NodeData_SetNamedNode_m2353585377 (NodeData_t1817330133 * __this, int32_t ___type0, String_t* ___localName1, String_t* ___prefix2, String_t* ___nameWPrefix3, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m4089665817 (StringBuilder_t * __this, CharU5BU5D_t3528271667* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m3214161208 (StringBuilder_t * __this, String_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::BlockCopyChars(System.Char[],System.Int32,System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReaderImpl_BlockCopyChars_m3286008642 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___src0, int32_t ___srcOffset1, CharU5BU5D_t3528271667* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Void System.String::CopyTo(System.Int32,System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void String_CopyTo_m2803757991 (String_t* __this, int32_t p0, CharU5BU5D_t3528271667* p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.String System.Xml.XmlTextReaderImpl/NodeData::CreateNameWPrefix(System.Xml.XmlNameTable)
extern "C" IL2CPP_METHOD_ATTR String_t* NodeData_CreateNameWPrefix_m2233675805 (NodeData_t1817330133 * __this, XmlNameTable_t71772148 * ___nt0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Boolean System.Xml.Ref::Equal(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool Ref_Equal_m200394427 (RuntimeObject * __this /* static, unused */, String_t* ___strA0, String_t* ___strB1, const RuntimeMethod* method);
// System.Int32 System.String::CompareOrdinal(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m786132908 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl/ParsingState::Clear()
extern "C" IL2CPP_METHOD_ATTR void ParsingState_Clear_m828353238 (ParsingState_t1780334922 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl/ParsingState::Close(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParsingState_Close_m3074372374 (ParsingState_t1780334922 * __this, bool ___closeInput0, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReaderImpl/ParsingState::get_LineNo()
extern "C" IL2CPP_METHOD_ATTR int32_t ParsingState_get_LineNo_m1222454779 (ParsingState_t1780334922 * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReaderImpl/ParsingState::get_LinePos()
extern "C" IL2CPP_METHOD_ATTR int32_t ParsingState_get_LinePos_m2840443232 (ParsingState_t1780334922 * __this, const RuntimeMethod* method);
// System.Xml.XmlCharType System.Xml.XmlCharType::get_Instance()
extern "C" IL2CPP_METHOD_ATTR XmlCharType_t2277243275  XmlCharType_get_Instance_m52052032 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlWriter__ctor_m2782267819 (XmlWriter_t127905479 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter/TagInfo::Init(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TagInfo_Init_m2043286854 (TagInfo_t3526638417 * __this, int32_t ___nsTop0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter__ctor_m1436555789 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextEncoder::.ctor(System.IO.TextWriter)
extern "C" IL2CPP_METHOD_ATTR void XmlTextEncoder__ctor_m1753560081 (XmlTextEncoder_t1632274355 * __this, TextWriter_t3478189236 * ___textWriter0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextEncoder::set_QuoteChar(System.Char)
extern "C" IL2CPP_METHOD_ATTR void XmlTextEncoder_set_QuoteChar_m3704929252 (XmlTextEncoder_t1632274355 * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Xml.Res::GetString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Res_GetString_m3369169461 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::ValidateName(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_ValidateName_m909992142 (XmlTextWriter_t2114213153 * __this, String_t* ___name0, bool ___isNCName1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::AutoComplete(System.Xml.XmlTextWriter/Token)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_AutoComplete_m1937294162 (XmlTextWriter_t2114213153 * __this, int32_t ___token0, const RuntimeMethod* method);
// System.String System.Char::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Char_ToString_m3588025615 (Il2CppChar* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::PushStack()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_PushStack_m2287986788 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextWriter::LookupNamespace(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextWriter_LookupNamespace_m3389725513 (XmlTextWriter_t2114213153 * __this, String_t* ___prefix0, const RuntimeMethod* method);
// System.String System.Xml.XmlTextWriter::FindPrefix(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextWriter_FindPrefix_m1620482724 (XmlTextWriter_t2114213153 * __this, String_t* ___ns0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::PushNamespace(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_PushNamespace_m1850895031 (XmlTextWriter_t2114213153 * __this, String_t* ___prefix0, String_t* ___ns1, bool ___declared2, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::VerifyPrefixXml(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_VerifyPrefixXml_m3875935888 (XmlTextWriter_t2114213153 * __this, String_t* ___prefix0, String_t* ___ns1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::InternalWriteEndElement(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_InternalWriteEndElement_m1354321211 (XmlTextWriter_t2114213153 * __this, bool ___longFormat0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextWriter::LookupNamespaceInCurrentScope(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextWriter_LookupNamespaceInCurrentScope_m855670366 (XmlTextWriter_t2114213153 * __this, String_t* ___prefix0, const RuntimeMethod* method);
// System.String System.Xml.XmlTextWriter::GeneratePrefix()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextWriter_GeneratePrefix_m3218539683 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextEncoder::StartAttribute(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextEncoder_StartAttribute_m1072751347 (XmlTextEncoder_t1632274355 * __this, bool ___cacheAttrValue0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m1298810678 (String_t* __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextEncoder::WriteRawWithSurrogateChecking(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextEncoder_WriteRawWithSurrogateChecking_m1404644674 (XmlTextEncoder_t1632274355 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::InternalWriteProcessingInstruction(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_InternalWriteProcessingInstruction_m2337169049 (XmlTextWriter_t2114213153 * __this, String_t* ___name0, String_t* ___text1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextEncoder::WriteEntityRef(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextEncoder_WriteEntityRef_m4202707380 (XmlTextEncoder_t1632274355 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlCharType::IsOnlyWhitespace(System.String)
extern "C" IL2CPP_METHOD_ATTR bool XmlCharType_IsOnlyWhitespace_m1987284782 (XmlCharType_t2277243275 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextEncoder::Write(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextEncoder_Write_m1297523241 (XmlTextEncoder_t1632274355 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextEncoder::Write(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XmlTextEncoder_Write_m1191048470 (XmlTextEncoder_t1632274355 * __this, CharU5BU5D_t3528271667* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::AutoCompleteAll()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_AutoCompleteAll_m255244912 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method);
// System.String System.Xml.Res::GetString(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* Res_GetString_m2746634261 (RuntimeObject * __this /* static, unused */, String_t* ___name0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::Indent(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_Indent_m1528505517 (XmlTextWriter_t2114213153 * __this, bool ___beforeEndElement0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::WriteEndAttributeQuote()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteEndAttributeQuote_m1793989567 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::WriteEndStartTag(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteEndStartTag_m844906772 (XmlTextWriter_t2114213153 * __this, bool ___empty0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::FlushEncoders()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_FlushEncoders_m2236282711 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::PopNamespaces(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_PopNamespaces_m3917735882 (XmlTextWriter_t2114213153 * __this, int32_t ___indexFrom0, int32_t ___indexTo1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextEncoder::EndAttribute()
extern "C" IL2CPP_METHOD_ATTR void XmlTextEncoder_EndAttribute_m3127216117 (XmlTextEncoder_t1632274355 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::HandleSpecialAttribute()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_HandleSpecialAttribute_m4129581347 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::AddNamespace(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_AddNamespace_m2720473980 (XmlTextWriter_t2114213153 * __this, String_t* ___prefix0, String_t* ___ns1, bool ___declared2, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_m1988217701 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeArray * p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter/Namespace::Set(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Namespace_Set_m817238856 (Namespace_t2218256516 * __this, String_t* ___prefix0, String_t* ___ns1, bool ___declared2, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::AddToNamespaceHashtable(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_AddToNamespaceHashtable_m1294370216 (XmlTextWriter_t2114213153 * __this, int32_t ___namespaceIndex0, const RuntimeMethod* method);
// System.Void System.Xml.SecureStringHasher::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SecureStringHasher__ctor_m813418698 (SecureStringHasher_t95812985 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
inline void Dictionary_2__ctor_m626081792 (Dictionary_2_t2736202052 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2736202052 *, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m764937586_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m1013208020 (Dictionary_2_t2736202052 * __this, String_t* p0, int32_t* p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2736202052 *, String_t*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m3959998165_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m4248307107 (Dictionary_2_t2736202052 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2736202052 *, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m2143527826_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Remove(!0)
inline bool Dictionary_2_Remove_m3684469573 (Dictionary_2_t2736202052 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2736202052 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m2931667922_gshared)(__this, p0, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m2507389746 (int32_t* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.Int32 System.Xml.ValidateNames::ParseNCName(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t ValidateNames_ParseNCName_m2778342383 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method);
// System.Int32 System.Xml.ValidateNames::ParseNmtoken(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ValidateNames_ParseNmtoken_m2721935771 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___offset1, const RuntimeMethod* method);
// System.Boolean System.Xml.ValidateNames::IsNameNoNamespaces(System.String)
extern "C" IL2CPP_METHOD_ATTR bool ValidateNames_IsNameNoNamespaces_m2268138382 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method);
// System.String System.Xml.XmlTextEncoder::get_AttributeValue()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextEncoder_get_AttributeValue_m2873699297 (XmlTextEncoder_t1632274355 * __this, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::TrimString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlConvert_TrimString_m3342457332 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Xml.Base64Encoder::Flush()
extern "C" IL2CPP_METHOD_ATTR void Base64Encoder_Flush_m923514476 (Base64Encoder_t3938083961 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextEncoder::WriteRaw(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XmlTextEncoder_WriteRaw_m248708263 (XmlTextEncoder_t1632274355 * __this, CharU5BU5D_t3528271667* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void System.Xml.XmlAttribute::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C" IL2CPP_METHOD_ATTR void XmlAttribute__ctor_m961761535 (XmlAttribute_t1173852259 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceURI2, XmlDocument_t2837193595 * ___doc3, const RuntimeMethod* method);
// System.Void System.Xml.XmlAttribute::set_InnerText(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlAttribute_set_InnerText_m1371255928 (XmlAttribute_t1173852259 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Xml.XmlNode System.Xml.XmlAttribute::RemoveChild(System.Xml.XmlNode)
extern "C" IL2CPP_METHOD_ATTR XmlNode_t3767805227 * XmlAttribute_RemoveChild_m1200168244 (XmlAttribute_t1173852259 * __this, XmlNode_t3767805227 * ___oldChild0, const RuntimeMethod* method);
// System.Xml.XmlNode System.Xml.XmlAttribute::AppendChild(System.Xml.XmlNode)
extern "C" IL2CPP_METHOD_ATTR XmlNode_t3767805227 * XmlAttribute_AppendChild_m2134423303 (XmlAttribute_t1173852259 * __this, XmlNode_t3767805227 * ___newChild0, const RuntimeMethod* method);
// System.Void System.Xml.XmlDownloadManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlDownloadManager__ctor_m568960534 (XmlDownloadManager_t2540579765 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlResolver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlResolver__ctor_m2276492248 (XmlResolver_t626023767 * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Type_op_Equality_m2683486427 (RuntimeObject * __this /* static, unused */, Type_t * p0, Type_t * p1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Xml.XmlDownloadManager System.Xml.XmlUrlResolver::get_DownloadManager()
extern "C" IL2CPP_METHOD_ATTR XmlDownloadManager_t2540579765 * XmlUrlResolver_get_DownloadManager_m3478324606 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.IO.Stream System.Xml.XmlDownloadManager::GetStream(System.Uri,System.Net.ICredentials,System.Net.IWebProxy,System.Net.Cache.RequestCachePolicy)
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * XmlDownloadManager_GetStream_m2764365339 (XmlDownloadManager_t2540579765 * __this, Uri_t100236324 * ___uri0, RuntimeObject* ___credentials1, RuntimeObject* ___proxy2, RequestCachePolicy_t2923596909 * ___cachePolicy3, const RuntimeMethod* method);
// System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String)
extern "C" IL2CPP_METHOD_ATTR Uri_t100236324 * XmlResolver_ResolveUri_m3051172150 (XmlResolver_t626023767 * __this, Uri_t100236324 * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
inline AsyncTaskMethodBuilder_1_t1106113378  AsyncTaskMethodBuilder_1_Create_m457539829 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t1106113378  (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m457539829_gshared)(__this /* static, unused */, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<System.Xml.XmlUrlResolver/<GetEntityAsync>d__15>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetEntityAsyncU3Ed__15_t1599719825_m489318611 (AsyncTaskMethodBuilder_1_t1106113378 * __this, U3CGetEntityAsyncU3Ed__15_t1599719825 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t1106113378 *, U3CGetEntityAsyncU3Ed__15_t1599719825 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetEntityAsyncU3Ed__15_t1599719825_m489318611_gshared)(__this, p0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
inline Task_1_t190679043 * AsyncTaskMethodBuilder_1_get_Task_m317986670 (AsyncTaskMethodBuilder_1_t1106113378 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t190679043 * (*) (AsyncTaskMethodBuilder_1_t1106113378 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m317986670_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<System.IO.Stream> System.Xml.XmlDownloadManager::GetStreamAsync(System.Uri,System.Net.ICredentials,System.Net.IWebProxy,System.Net.Cache.RequestCachePolicy)
extern "C" IL2CPP_METHOD_ATTR Task_1_t2678563084 * XmlDownloadManager_GetStreamAsync_m331733763 (XmlDownloadManager_t2540579765 * __this, Uri_t100236324 * ___uri0, RuntimeObject* ___credentials1, RuntimeObject* ___proxy2, RequestCachePolicy_t2923596909 * ___cachePolicy3, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.IO.Stream>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t3870950252  Task_1_ConfigureAwait_m2606086103 (Task_1_t2678563084 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t3870950252  (*) (Task_1_t2678563084 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m2546782974_gshared)(__this, p0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.IO.Stream>::GetAwaiter()
inline ConfiguredTaskAwaiter_t2595523894  ConfiguredTaskAwaitable_1_GetAwaiter_m1368673375 (ConfiguredTaskAwaitable_1_t3870950252 * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t2595523894  (*) (ConfiguredTaskAwaitable_1_t3870950252 *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m2061313211_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m3975404 (ConfiguredTaskAwaiter_t2595523894 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t2595523894 *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_m1080323900_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream>,System.Xml.XmlUrlResolver/<GetEntityAsync>d__15>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2595523894_TisU3CGetEntityAsyncU3Ed__15_t1599719825_m2713669507 (AsyncTaskMethodBuilder_1_t1106113378 * __this, ConfiguredTaskAwaiter_t2595523894 * p0, U3CGetEntityAsyncU3Ed__15_t1599719825 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t1106113378 *, ConfiguredTaskAwaiter_t2595523894 *, U3CGetEntityAsyncU3Ed__15_t1599719825 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t107639853_TisU3CGetEntityAsyncU3Ed__15_t1599719825_m3096584839_gshared)(__this, p0, p1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.IO.Stream>::GetResult()
inline Stream_t1273022909 * ConfiguredTaskAwaiter_GetResult_m4037153341 (ConfiguredTaskAwaiter_t2595523894 * __this, const RuntimeMethod* method)
{
	return ((  Stream_t1273022909 * (*) (ConfiguredTaskAwaiter_t2595523894 *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m2513714076_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m131199109 (AsyncTaskMethodBuilder_1_t1106113378 * __this, Exception_t * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t1106113378 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m131199109_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m1633157453 (AsyncTaskMethodBuilder_1_t1106113378 * __this, RuntimeObject * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t1106113378 *, RuntimeObject *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m1633157453_gshared)(__this, p0, method);
}
// System.Void System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CGetEntityAsyncU3Ed__15_MoveNext_m3272980288 (U3CGetEntityAsyncU3Ed__15_t1599719825 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m2671839336 (AsyncTaskMethodBuilder_1_t1106113378 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t1106113378 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m2671839336_gshared)(__this, p0, method);
}
// System.Void System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CGetEntityAsyncU3Ed__15_SetStateMachine_m2134769911 (U3CGetEntityAsyncU3Ed__15_t1599719825 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlValidatingReaderImpl::get_LineNumber()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReaderImpl_get_LineNumber_m4241875698 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlValidatingReaderImpl::get_LinePosition()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReaderImpl_get_LinePosition_m4261359789 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method);
// System.String System.Xml.XmlValidatingReaderImpl::LookupPrefix(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReaderImpl_LookupPrefix_m3915215833 (XmlValidatingReaderImpl_t1817762384 * __this, String_t* ___namespaceName0, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlValidatingReaderImpl::get_Namespaces()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReaderImpl_get_Namespaces_m3107677556 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::get_V1Compat()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_get_V1Compat_m3797987936 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Xml.XmlReaderSettings System.Xml.XmlReaderSettings::Clone()
extern "C" IL2CPP_METHOD_ATTR XmlReaderSettings_t2186285234 * XmlReaderSettings_Clone_m3342798530 (XmlReaderSettings_t2186285234 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlReaderSettings::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlReaderSettings__ctor_m3137625896 (XmlReaderSettings_t2186285234 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlReaderSettings::set_ValidationType(System.Xml.ValidationType)
extern "C" IL2CPP_METHOD_ATTR void XmlReaderSettings_set_ValidationType_m186252962 (XmlReaderSettings_t2186285234 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Xml.Schema.XmlSchemaValidationFlags System.Xml.XmlReaderSettings::get_ValidationFlags()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlReaderSettings_get_ValidationFlags_m2837396330 (XmlReaderSettings_t2186285234 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlReaderSettings::set_ValidationFlags(System.Xml.Schema.XmlSchemaValidationFlags)
extern "C" IL2CPP_METHOD_ATTR void XmlReaderSettings_set_ValidationFlags_m2291374422 (XmlReaderSettings_t2186285234 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlReaderSettings::set_ReadOnly(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlReaderSettings_set_ReadOnly_m1029499250 (XmlReaderSettings_t2186285234 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlValidatingReaderImpl::ProcessCoreReaderEvent()
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReaderImpl_ProcessCoreReaderEvent_m64175234 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlValidatingReaderImpl::ParseDtdFromParserContext()
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReaderImpl_ParseDtdFromParserContext_m1435797303 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlValidatingReaderImpl::ResolveEntityInternally()
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReaderImpl_ResolveEntityInternally_m2681732783 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method);
// System.Void System.Xml.ReadContentAsBinaryHelper::Finish()
extern "C" IL2CPP_METHOD_ATTR void ReadContentAsBinaryHelper_Finish_m1988823726 (ReadContentAsBinaryHelper_t3017207972 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::get_Namespaces()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_get_Namespaces_m1068888480 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.String System.Xml.XmlParserContext::get_DocTypeName()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlParserContext_get_DocTypeName_m315861363 (XmlParserContext_t2544895291 * __this, const RuntimeMethod* method);
// System.Xml.IDtdParser System.Xml.DtdParser::Create()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DtdParser_Create_m4131096188 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl/DtdParserProxy::.ctor(System.Xml.XmlTextReaderImpl)
extern "C" IL2CPP_METHOD_ATTR void DtdParserProxy__ctor_m3809593112 (DtdParserProxy_t3101460057 * __this, XmlTextReaderImpl_t178060594 * ___reader0, const RuntimeMethod* method);
// System.String System.Xml.XmlParserContext::get_BaseURI()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlParserContext_get_BaseURI_m3403405423 (XmlParserContext_t2544895291 * __this, const RuntimeMethod* method);
// System.String System.Xml.XmlParserContext::get_PublicId()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlParserContext_get_PublicId_m3660294131 (XmlParserContext_t2544895291 * __this, const RuntimeMethod* method);
// System.String System.Xml.XmlParserContext::get_SystemId()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlParserContext_get_SystemId_m340153273 (XmlParserContext_t2544895291 * __this, const RuntimeMethod* method);
// System.String System.Xml.XmlParserContext::get_InternalSubset()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlParserContext_get_InternalSubset_m850815881 (XmlParserContext_t2544895291 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::SetDtdInfo(System.Xml.IDtdInfo)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReaderImpl_SetDtdInfo_m1131487389 (XmlTextReaderImpl_t178060594 * __this, RuntimeObject* ___newDtdInfo0, const RuntimeMethod* method);
// System.Void System.Xml.XmlValidatingReaderImpl::ValidateDtd()
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReaderImpl_ValidateDtd_m1235583699 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlValidatingReaderImpl::SetupValidation(System.Xml.ValidationType)
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReaderImpl_SetupValidation_m3368487000 (XmlValidatingReaderImpl_t1817762384 * __this, int32_t ___valType0, const RuntimeMethod* method);
// System.Void System.Xml.Schema.BaseValidator::set_DtdInfo(System.Xml.IDtdInfo)
extern "C" IL2CPP_METHOD_ATTR void BaseValidator_set_DtdInfo_m939217600 (BaseValidator_t868759770 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Xml.Schema.BaseValidator System.Xml.Schema.BaseValidator::CreateInstance(System.Xml.ValidationType,System.Xml.XmlValidatingReaderImpl,System.Xml.Schema.XmlSchemaCollection,System.Xml.IValidationEventHandling,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR BaseValidator_t868759770 * BaseValidator_CreateInstance_m4274677911 (RuntimeObject * __this /* static, unused */, int32_t ___valType0, XmlValidatingReaderImpl_t1817762384 * ___reader1, XmlSchemaCollection_t3610399789 * ___schemaCollection2, RuntimeObject* ___eventHandling3, bool ___processIdentityConstraints4, const RuntimeMethod* method);
// System.Xml.XmlResolver System.Xml.XmlValidatingReaderImpl::GetResolver()
extern "C" IL2CPP_METHOD_ATTR XmlResolver_t626023767 * XmlValidatingReaderImpl_GetResolver_m1302585018 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Schema.BaseValidator::set_XmlResolver(System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void BaseValidator_set_XmlResolver_m427918798 (BaseValidator_t868759770 * __this, XmlResolver_t626023767 * ___value0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String,System.UriKind)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m391584135 (Uri_t100236324 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Xml.Schema.BaseValidator::set_BaseUri(System.Uri)
extern "C" IL2CPP_METHOD_ATTR void BaseValidator_set_BaseUri_m210650174 (BaseValidator_t868759770 * __this, Uri_t100236324 * ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::set_ValidationEventHandling(System.Xml.IValidationEventHandling)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReaderImpl_set_ValidationEventHandling_m2865959956 (XmlTextReaderImpl_t178060594 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Xml.XmlResolver System.Xml.XmlTextReaderImpl::GetResolver()
extern "C" IL2CPP_METHOD_ATTR XmlResolver_t626023767 * XmlTextReaderImpl_GetResolver_m4267687416 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::get_IsResolverSet()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_get_IsResolverSet_m4279217251 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlReaderSettings::EnableLegacyXmlSettings()
extern "C" IL2CPP_METHOD_ATTR bool XmlReaderSettings_EnableLegacyXmlSettings_m199635363 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Xml.XmlUrlResolver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlUrlResolver__ctor_m1338399436 (XmlUrlResolver_t817895037 * __this, const RuntimeMethod* method);
// System.Xml.XmlNodeType System.Xml.XmlTextReaderImpl::get_FragmentType()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReaderImpl_get_FragmentType_m3477093653 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::ChangeCurrentNodeType(System.Xml.XmlNodeType)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReaderImpl_ChangeCurrentNodeType_m3903562157 (XmlTextReaderImpl_t178060594 * __this, int32_t ___newNodeType0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::set_InternalSchemaType(System.Object)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReaderImpl_set_InternalSchemaType_m1836193322 (XmlTextReaderImpl_t178060594 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReaderImpl::set_InternalTypedValue(System.Object)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReaderImpl_set_InternalTypedValue_m2946666535 (XmlTextReaderImpl_t178060594 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::get_StandAlone()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_get_StandAlone_m94883606 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Object System.Xml.XmlTextReaderImpl::get_InternalTypedValue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XmlTextReaderImpl_get_InternalTypedValue_m885148612 (XmlTextReaderImpl_t178060594 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReaderImpl::AddDefaultAttributeNonDtd(System.Xml.Schema.SchemaAttDef)
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReaderImpl_AddDefaultAttributeNonDtd_m3583377424 (XmlTextReaderImpl_t178060594 * __this, SchemaAttDef_t2429541159 * ___attrDef0, const RuntimeMethod* method);
// System.Void System.Xml.Schema.ValidationEventArgs::.ctor(System.Xml.Schema.XmlSchemaException,System.Xml.Schema.XmlSeverityType)
extern "C" IL2CPP_METHOD_ATTR void ValidationEventArgs__ctor_m2610404669 (ValidationEventArgs_t2784773869 * __this, XmlSchemaException_t3511258692 * ___ex0, int32_t ___severity1, const RuntimeMethod* method);
// System.Void System.Xml.Schema.ValidationEventHandler::Invoke(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C" IL2CPP_METHOD_ATTR void ValidationEventHandler_Invoke_m3984227947 (ValidationEventHandler_t791314227 * __this, RuntimeObject * ___sender0, ValidationEventArgs_t2784773869 * ___e1, const RuntimeMethod* method);
// System.Xml.ValidationType System.Xml.XmlValidatingReaderImpl::get_ValidationType()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReaderImpl_get_ValidationType_m2399373228 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlCharacterData::.ctor(System.String,System.Xml.XmlDocument)
extern "C" IL2CPP_METHOD_ATTR void XmlCharacterData__ctor_m3935345337 (XmlCharacterData_t1167807131 * __this, String_t* ___data0, XmlDocument_t2837193595 * ___doc1, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlDocument::get_IsLoading()
extern "C" IL2CPP_METHOD_ATTR bool XmlDocument_get_IsLoading_m1265579576 (XmlDocument_t2837193595 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlCharacterData::CheckOnData(System.String)
extern "C" IL2CPP_METHOD_ATTR bool XmlCharacterData_CheckOnData_m3552562861 (XmlCharacterData_t1167807131 * __this, String_t* ___data0, const RuntimeMethod* method);
// System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode()
extern "C" IL2CPP_METHOD_ATTR XmlNode_t3767805227 * XmlNode_get_ParentNode_m3304904414 (XmlNode_t3767805227 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlReader::get_IsDefaultInternal()
extern "C" IL2CPP_METHOD_ATTR bool XmlReader_get_IsDefaultInternal_m3807367175 (XmlReader_t3121518892 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriter::WriteElementString(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteElementString_m3038507460 (XmlWriter_t127905479 * __this, String_t* ___localName0, String_t* ___ns1, String_t* ___value2, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteStartElement_m4166303208 (XmlWriter_t127905479 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IComparer`1<System.Object> System.Xml.XmlTextReaderImpl/DtdDefaultAttributeInfoToNodeDataComparer::get_Instance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DtdDefaultAttributeInfoToNodeDataComparer_get_Instance_m836403038 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DtdDefaultAttributeInfoToNodeDataComparer_get_Instance_m836403038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DtdDefaultAttributeInfoToNodeDataComparer_t1152788373_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((DtdDefaultAttributeInfoToNodeDataComparer_t1152788373_StaticFields*)il2cpp_codegen_static_fields_for(DtdDefaultAttributeInfoToNodeDataComparer_t1152788373_il2cpp_TypeInfo_var))->get_s_instance_0();
		return L_0;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl/DtdDefaultAttributeInfoToNodeDataComparer::Compare(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t DtdDefaultAttributeInfoToNodeDataComparer_Compare_m3502533735 (DtdDefaultAttributeInfoToNodeDataComparer_t1152788373 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DtdDefaultAttributeInfoToNodeDataComparer_Compare_m3502533735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	NodeData_t1817330133 * V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	{
		RuntimeObject * L_0 = ___x0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject * L_1 = ___y1;
		if (!L_1)
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}

IL_0008:
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject * L_2 = ___y1;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 1;
	}

IL_000f:
	{
		RuntimeObject * L_3 = ___x0;
		V_4 = ((NodeData_t1817330133 *)IsInstClass((RuntimeObject*)L_3, NodeData_t1817330133_il2cpp_TypeInfo_var));
		NodeData_t1817330133 * L_4 = V_4;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		NodeData_t1817330133 * L_5 = V_4;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_localName_2();
		V_0 = L_6;
		NodeData_t1817330133 * L_7 = V_4;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_prefix_3();
		V_2 = L_8;
		goto IL_005b;
	}

IL_002d:
	{
		RuntimeObject * L_9 = ___x0;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDtdDefaultAttributeInfo_t2775364687_il2cpp_TypeInfo_var));
		RuntimeObject* L_10 = V_6;
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_11 = V_6;
		NullCheck(L_11);
		String_t* L_12 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String System.Xml.IDtdAttributeInfo::get_LocalName() */, IDtdAttributeInfo_t1491794539_il2cpp_TypeInfo_var, L_11);
		V_0 = L_12;
		RuntimeObject* L_13 = V_6;
		NullCheck(L_13);
		String_t* L_14 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Xml.IDtdAttributeInfo::get_Prefix() */, IDtdAttributeInfo_t1491794539_il2cpp_TypeInfo_var, L_13);
		V_2 = L_14;
		goto IL_005b;
	}

IL_004b:
	{
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		XmlException_t1761730631 * L_16 = (XmlException_t1761730631 *)il2cpp_codegen_object_new(XmlException_t1761730631_il2cpp_TypeInfo_var);
		XmlException__ctor_m400140246(L_16, _stringLiteral1591324992, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, NULL, DtdDefaultAttributeInfoToNodeDataComparer_Compare_m3502533735_RuntimeMethod_var);
	}

IL_005b:
	{
		RuntimeObject * L_17 = ___y1;
		V_4 = ((NodeData_t1817330133 *)IsInstClass((RuntimeObject*)L_17, NodeData_t1817330133_il2cpp_TypeInfo_var));
		NodeData_t1817330133 * L_18 = V_4;
		if (!L_18)
		{
			goto IL_0079;
		}
	}
	{
		NodeData_t1817330133 * L_19 = V_4;
		NullCheck(L_19);
		String_t* L_20 = L_19->get_localName_2();
		V_1 = L_20;
		NodeData_t1817330133 * L_21 = V_4;
		NullCheck(L_21);
		String_t* L_22 = L_21->get_prefix_3();
		V_3 = L_22;
		goto IL_00a7;
	}

IL_0079:
	{
		RuntimeObject * L_23 = ___y1;
		V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDtdDefaultAttributeInfo_t2775364687_il2cpp_TypeInfo_var));
		RuntimeObject* L_24 = V_7;
		if (!L_24)
		{
			goto IL_0097;
		}
	}
	{
		RuntimeObject* L_25 = V_7;
		NullCheck(L_25);
		String_t* L_26 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String System.Xml.IDtdAttributeInfo::get_LocalName() */, IDtdAttributeInfo_t1491794539_il2cpp_TypeInfo_var, L_25);
		V_1 = L_26;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_27);
		String_t* L_28 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Xml.IDtdAttributeInfo::get_Prefix() */, IDtdAttributeInfo_t1491794539_il2cpp_TypeInfo_var, L_27);
		V_3 = L_28;
		goto IL_00a7;
	}

IL_0097:
	{
		String_t* L_29 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		XmlException_t1761730631 * L_30 = (XmlException_t1761730631 *)il2cpp_codegen_object_new(XmlException_t1761730631_il2cpp_TypeInfo_var);
		XmlException__ctor_m400140246(L_30, _stringLiteral1591324992, L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, NULL, DtdDefaultAttributeInfoToNodeDataComparer_Compare_m3502533735_RuntimeMethod_var);
	}

IL_00a7:
	{
		String_t* L_31 = V_0;
		String_t* L_32 = V_1;
		int32_t L_33 = String_Compare_m3203413707(NULL /*static, unused*/, L_31, L_32, 4, /*hidden argument*/NULL);
		V_5 = L_33;
		int32_t L_34 = V_5;
		if (!L_34)
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_35 = V_5;
		return L_35;
	}

IL_00b8:
	{
		String_t* L_36 = V_2;
		String_t* L_37 = V_3;
		int32_t L_38 = String_Compare_m3203413707(NULL /*static, unused*/, L_36, L_37, 4, /*hidden argument*/NULL);
		return L_38;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/DtdDefaultAttributeInfoToNodeDataComparer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DtdDefaultAttributeInfoToNodeDataComparer__ctor_m943636574 (DtdDefaultAttributeInfoToNodeDataComparer_t1152788373 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/DtdDefaultAttributeInfoToNodeDataComparer::.cctor()
extern "C" IL2CPP_METHOD_ATTR void DtdDefaultAttributeInfoToNodeDataComparer__cctor_m1980840547 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DtdDefaultAttributeInfoToNodeDataComparer__cctor_m1980840547_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DtdDefaultAttributeInfoToNodeDataComparer_t1152788373 * L_0 = (DtdDefaultAttributeInfoToNodeDataComparer_t1152788373 *)il2cpp_codegen_object_new(DtdDefaultAttributeInfoToNodeDataComparer_t1152788373_il2cpp_TypeInfo_var);
		DtdDefaultAttributeInfoToNodeDataComparer__ctor_m943636574(L_0, /*hidden argument*/NULL);
		((DtdDefaultAttributeInfoToNodeDataComparer_t1152788373_StaticFields*)il2cpp_codegen_static_fields_for(DtdDefaultAttributeInfoToNodeDataComparer_t1152788373_il2cpp_TypeInfo_var))->set_s_instance_0(L_0);
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
// System.Void System.Xml.XmlTextReaderImpl/DtdParserProxy::.ctor(System.Xml.XmlTextReaderImpl)
extern "C" IL2CPP_METHOD_ATTR void DtdParserProxy__ctor_m3809593112 (DtdParserProxy_t3101460057 * __this, XmlTextReaderImpl_t178060594 * ___reader0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		XmlTextReaderImpl_t178060594 * L_0 = ___reader0;
		__this->set_reader_0(L_0);
		return;
	}
}
// System.Xml.XmlNameTable System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.get_NameTable()
extern "C" IL2CPP_METHOD_ATTR XmlNameTable_t71772148 * DtdParserProxy_System_Xml_IDtdParserAdapter_get_NameTable_m375880229 (DtdParserProxy_t3101460057 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		XmlNameTable_t71772148 * L_1 = XmlTextReaderImpl_get_DtdParserProxy_NameTable_m3578938205(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.IXmlNamespaceResolver System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.get_NamespaceResolver()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DtdParserProxy_System_Xml_IDtdParserAdapter_get_NamespaceResolver_m890638179 (DtdParserProxy_t3101460057 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = XmlTextReaderImpl_get_DtdParserProxy_NamespaceResolver_m2686653452(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Uri System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.get_BaseUri()
extern "C" IL2CPP_METHOD_ATTR Uri_t100236324 * DtdParserProxy_System_Xml_IDtdParserAdapter_get_BaseUri_m3597698596 (DtdParserProxy_t3101460057 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		Uri_t100236324 * L_1 = XmlTextReaderImpl_get_DtdParserProxy_BaseUri_m4261425867(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.get_IsEof()
extern "C" IL2CPP_METHOD_ATTR bool DtdParserProxy_System_Xml_IDtdParserAdapter_get_IsEof_m823521707 (DtdParserProxy_t3101460057 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		bool L_1 = XmlTextReaderImpl_get_DtdParserProxy_IsEof_m1950842164(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Char[] System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.get_ParsingBuffer()
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t3528271667* DtdParserProxy_System_Xml_IDtdParserAdapter_get_ParsingBuffer_m511056935 (DtdParserProxy_t3101460057 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		CharU5BU5D_t3528271667* L_1 = XmlTextReaderImpl_get_DtdParserProxy_ParsingBuffer_m2738122948(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.get_ParsingBufferLength()
extern "C" IL2CPP_METHOD_ATTR int32_t DtdParserProxy_System_Xml_IDtdParserAdapter_get_ParsingBufferLength_m623897490 (DtdParserProxy_t3101460057 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		int32_t L_1 = XmlTextReaderImpl_get_DtdParserProxy_ParsingBufferLength_m1253419686(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.get_CurrentPosition()
extern "C" IL2CPP_METHOD_ATTR int32_t DtdParserProxy_System_Xml_IDtdParserAdapter_get_CurrentPosition_m2610732486 (DtdParserProxy_t3101460057 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		int32_t L_1 = XmlTextReaderImpl_get_DtdParserProxy_CurrentPosition_m473374944(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.set_CurrentPosition(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DtdParserProxy_System_Xml_IDtdParserAdapter_set_CurrentPosition_m3665008445 (DtdParserProxy_t3101460057 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		XmlTextReaderImpl_set_DtdParserProxy_CurrentPosition_m3029195169(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.get_EntityStackLength()
extern "C" IL2CPP_METHOD_ATTR int32_t DtdParserProxy_System_Xml_IDtdParserAdapter_get_EntityStackLength_m3336537564 (DtdParserProxy_t3101460057 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		int32_t L_1 = XmlTextReaderImpl_get_DtdParserProxy_EntityStackLength_m1996241070(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.get_IsEntityEolNormalized()
extern "C" IL2CPP_METHOD_ATTR bool DtdParserProxy_System_Xml_IDtdParserAdapter_get_IsEntityEolNormalized_m2503659380 (DtdParserProxy_t3101460057 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		bool L_1 = XmlTextReaderImpl_get_DtdParserProxy_IsEntityEolNormalized_m1777150273(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.OnNewLine(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DtdParserProxy_System_Xml_IDtdParserAdapter_OnNewLine_m3592855492 (DtdParserProxy_t3101460057 * __this, int32_t ___pos0, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		int32_t L_1 = ___pos0;
		NullCheck(L_0);
		XmlTextReaderImpl_DtdParserProxy_OnNewLine_m3519452374(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.get_LineNo()
extern "C" IL2CPP_METHOD_ATTR int32_t DtdParserProxy_System_Xml_IDtdParserAdapter_get_LineNo_m3391415051 (DtdParserProxy_t3101460057 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		int32_t L_1 = XmlTextReaderImpl_get_DtdParserProxy_LineNo_m219647019(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.get_LineStartPosition()
extern "C" IL2CPP_METHOD_ATTR int32_t DtdParserProxy_System_Xml_IDtdParserAdapter_get_LineStartPosition_m561007446 (DtdParserProxy_t3101460057 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		int32_t L_1 = XmlTextReaderImpl_get_DtdParserProxy_LineStartPosition_m1142848963(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.ReadData()
extern "C" IL2CPP_METHOD_ATTR int32_t DtdParserProxy_System_Xml_IDtdParserAdapter_ReadData_m2390572619 (DtdParserProxy_t3101460057 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		int32_t L_1 = XmlTextReaderImpl_DtdParserProxy_ReadData_m898548166(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.ParseNumericCharRef(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR int32_t DtdParserProxy_System_Xml_IDtdParserAdapter_ParseNumericCharRef_m204468905 (DtdParserProxy_t3101460057 * __this, StringBuilder_t * ___internalSubsetBuilder0, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		StringBuilder_t * L_1 = ___internalSubsetBuilder0;
		NullCheck(L_0);
		int32_t L_2 = XmlTextReaderImpl_DtdParserProxy_ParseNumericCharRef_m2858233383(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.ParseNamedCharRef(System.Boolean,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR int32_t DtdParserProxy_System_Xml_IDtdParserAdapter_ParseNamedCharRef_m1229294620 (DtdParserProxy_t3101460057 * __this, bool ___expand0, StringBuilder_t * ___internalSubsetBuilder1, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		bool L_1 = ___expand0;
		StringBuilder_t * L_2 = ___internalSubsetBuilder1;
		NullCheck(L_0);
		int32_t L_3 = XmlTextReaderImpl_DtdParserProxy_ParseNamedCharRef_m615743398(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.ParsePI(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR void DtdParserProxy_System_Xml_IDtdParserAdapter_ParsePI_m2258038624 (DtdParserProxy_t3101460057 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		StringBuilder_t * L_1 = ___sb0;
		NullCheck(L_0);
		XmlTextReaderImpl_DtdParserProxy_ParsePI_m1219883744(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.ParseComment(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR void DtdParserProxy_System_Xml_IDtdParserAdapter_ParseComment_m2854159810 (DtdParserProxy_t3101460057 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		StringBuilder_t * L_1 = ___sb0;
		NullCheck(L_0);
		XmlTextReaderImpl_DtdParserProxy_ParseComment_m3296025730(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.PushEntity(System.Xml.IDtdEntityInfo,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool DtdParserProxy_System_Xml_IDtdParserAdapter_PushEntity_m1117306400 (DtdParserProxy_t3101460057 * __this, RuntimeObject* ___entity0, int32_t* ___entityId1, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		RuntimeObject* L_1 = ___entity0;
		int32_t* L_2 = ___entityId1;
		NullCheck(L_0);
		bool L_3 = XmlTextReaderImpl_DtdParserProxy_PushEntity_m3242385370(L_0, L_1, (int32_t*)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.PopEntity(System.Xml.IDtdEntityInfo&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool DtdParserProxy_System_Xml_IDtdParserAdapter_PopEntity_m2327668323 (DtdParserProxy_t3101460057 * __this, RuntimeObject** ___oldEntity0, int32_t* ___newEntityId1, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		RuntimeObject** L_1 = ___oldEntity0;
		int32_t* L_2 = ___newEntityId1;
		NullCheck(L_0);
		bool L_3 = XmlTextReaderImpl_DtdParserProxy_PopEntity_m2729988991(L_0, (RuntimeObject**)L_1, (int32_t*)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.PushExternalSubset(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool DtdParserProxy_System_Xml_IDtdParserAdapter_PushExternalSubset_m2930488468 (DtdParserProxy_t3101460057 * __this, String_t* ___systemId0, String_t* ___publicId1, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		String_t* L_1 = ___systemId0;
		String_t* L_2 = ___publicId1;
		NullCheck(L_0);
		bool L_3 = XmlTextReaderImpl_DtdParserProxy_PushExternalSubset_m3740894928(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.PushInternalDtd(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void DtdParserProxy_System_Xml_IDtdParserAdapter_PushInternalDtd_m3913161011 (DtdParserProxy_t3101460057 * __this, String_t* ___baseUri0, String_t* ___internalDtd1, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		String_t* L_1 = ___baseUri0;
		String_t* L_2 = ___internalDtd1;
		NullCheck(L_0);
		XmlTextReaderImpl_DtdParserProxy_PushInternalDtd_m3177850941(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.Throw(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void DtdParserProxy_System_Xml_IDtdParserAdapter_Throw_m2490607605 (DtdParserProxy_t3101460057 * __this, Exception_t * ___e0, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		Exception_t * L_1 = ___e0;
		NullCheck(L_0);
		XmlTextReaderImpl_DtdParserProxy_Throw_m3159562977(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.OnSystemId(System.String,System.Xml.LineInfo,System.Xml.LineInfo)
extern "C" IL2CPP_METHOD_ATTR void DtdParserProxy_System_Xml_IDtdParserAdapter_OnSystemId_m4016663796 (DtdParserProxy_t3101460057 * __this, String_t* ___systemId0, LineInfo_t3266778363  ___keywordLineInfo1, LineInfo_t3266778363  ___systemLiteralLineInfo2, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		String_t* L_1 = ___systemId0;
		LineInfo_t3266778363  L_2 = ___keywordLineInfo1;
		LineInfo_t3266778363  L_3 = ___systemLiteralLineInfo2;
		NullCheck(L_0);
		XmlTextReaderImpl_DtdParserProxy_OnSystemId_m512097957(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapter.OnPublicId(System.String,System.Xml.LineInfo,System.Xml.LineInfo)
extern "C" IL2CPP_METHOD_ATTR void DtdParserProxy_System_Xml_IDtdParserAdapter_OnPublicId_m3733325104 (DtdParserProxy_t3101460057 * __this, String_t* ___publicId0, LineInfo_t3266778363  ___keywordLineInfo1, LineInfo_t3266778363  ___publicLiteralLineInfo2, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		String_t* L_1 = ___publicId0;
		LineInfo_t3266778363  L_2 = ___keywordLineInfo1;
		LineInfo_t3266778363  L_3 = ___publicLiteralLineInfo2;
		NullCheck(L_0);
		XmlTextReaderImpl_DtdParserProxy_OnPublicId_m49658185(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapterWithValidation.get_DtdValidation()
extern "C" IL2CPP_METHOD_ATTR bool DtdParserProxy_System_Xml_IDtdParserAdapterWithValidation_get_DtdValidation_m1390048717 (DtdParserProxy_t3101460057 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		bool L_1 = XmlTextReaderImpl_get_DtdParserProxy_DtdValidation_m2980370907(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.IValidationEventHandling System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapterWithValidation.get_ValidationEventHandling()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DtdParserProxy_System_Xml_IDtdParserAdapterWithValidation_get_ValidationEventHandling_m3378766251 (DtdParserProxy_t3101460057 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = XmlTextReaderImpl_get_DtdParserProxy_ValidationEventHandling_m866893963(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapterV1.get_Normalization()
extern "C" IL2CPP_METHOD_ATTR bool DtdParserProxy_System_Xml_IDtdParserAdapterV1_get_Normalization_m2834135068 (DtdParserProxy_t3101460057 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		bool L_1 = XmlTextReaderImpl_get_DtdParserProxy_Normalization_m467531701(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapterV1.get_Namespaces()
extern "C" IL2CPP_METHOD_ATTR bool DtdParserProxy_System_Xml_IDtdParserAdapterV1_get_Namespaces_m1376135598 (DtdParserProxy_t3101460057 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		bool L_1 = XmlTextReaderImpl_get_DtdParserProxy_Namespaces_m2906094699(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl/DtdParserProxy::System.Xml.IDtdParserAdapterV1.get_V1CompatibilityMode()
extern "C" IL2CPP_METHOD_ATTR bool DtdParserProxy_System_Xml_IDtdParserAdapterV1_get_V1CompatibilityMode_m1996001436 (DtdParserProxy_t3101460057 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		bool L_1 = XmlTextReaderImpl_get_DtdParserProxy_V1CompatibilityMode_m493975772(L_0, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlTextReaderImpl/NoNamespaceManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NoNamespaceManager__ctor_m433837038 (NoNamespaceManager_t2350683444 * __this, const RuntimeMethod* method)
{
	{
		XmlNamespaceManager__ctor_m1942505765(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XmlTextReaderImpl/NoNamespaceManager::get_DefaultNamespace()
extern "C" IL2CPP_METHOD_ATTR String_t* NoNamespaceManager_get_DefaultNamespace_m3470153446 (NoNamespaceManager_t2350683444 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NoNamespaceManager_get_DefaultNamespace_m3470153446_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/NoNamespaceManager::PushScope()
extern "C" IL2CPP_METHOD_ATTR void NoNamespaceManager_PushScope_m3927911129 (NoNamespaceManager_t2350683444 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl/NoNamespaceManager::PopScope()
extern "C" IL2CPP_METHOD_ATTR bool NoNamespaceManager_PopScope_m2450151246 (NoNamespaceManager_t2350683444 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/NoNamespaceManager::AddNamespace(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void NoNamespaceManager_AddNamespace_m636272408 (NoNamespaceManager_t2350683444 * __this, String_t* ___prefix0, String_t* ___uri1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Collections.IEnumerator System.Xml.XmlTextReaderImpl/NoNamespaceManager::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NoNamespaceManager_GetEnumerator_m831484307 (NoNamespaceManager_t2350683444 * __this, const RuntimeMethod* method)
{
	{
		return (RuntimeObject*)NULL;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.String> System.Xml.XmlTextReaderImpl/NoNamespaceManager::GetNamespacesInScope(System.Xml.XmlNamespaceScope)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NoNamespaceManager_GetNamespacesInScope_m3909990234 (NoNamespaceManager_t2350683444 * __this, int32_t ___scope0, const RuntimeMethod* method)
{
	{
		return (RuntimeObject*)NULL;
	}
}
// System.String System.Xml.XmlTextReaderImpl/NoNamespaceManager::LookupNamespace(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* NoNamespaceManager_LookupNamespace_m232290611 (NoNamespaceManager_t2350683444 * __this, String_t* ___prefix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NoNamespaceManager_LookupNamespace_m232290611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
// System.String System.Xml.XmlTextReaderImpl/NoNamespaceManager::LookupPrefix(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* NoNamespaceManager_LookupPrefix_m3843697100 (NoNamespaceManager_t2350683444 * __this, String_t* ___uri0, const RuntimeMethod* method)
{
	{
		return (String_t*)NULL;
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
// System.Xml.XmlTextReaderImpl/NodeData System.Xml.XmlTextReaderImpl/NodeData::get_None()
extern "C" IL2CPP_METHOD_ATTR NodeData_t1817330133 * NodeData_get_None_m3057106844 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeData_get_None_m3057106844_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NodeData_t1817330133 * L_0 = ((NodeData_t1817330133_StaticFields*)il2cpp_codegen_static_fields_for(NodeData_t1817330133_il2cpp_TypeInfo_var))->get_s_None_0();
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		NodeData_t1817330133 * L_1 = (NodeData_t1817330133 *)il2cpp_codegen_object_new(NodeData_t1817330133_il2cpp_TypeInfo_var);
		NodeData__ctor_m2796198221(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_memory_barrier();
		((NodeData_t1817330133_StaticFields*)il2cpp_codegen_static_fields_for(NodeData_t1817330133_il2cpp_TypeInfo_var))->set_s_None_0(L_1);
	}

IL_0015:
	{
		NodeData_t1817330133 * L_2 = ((NodeData_t1817330133_StaticFields*)il2cpp_codegen_static_fields_for(NodeData_t1817330133_il2cpp_TypeInfo_var))->get_s_None_0();
		il2cpp_codegen_memory_barrier();
		return L_2;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/NodeData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NodeData__ctor_m2796198221 (NodeData_t1817330133 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		NodeData_Clear_m38823411(__this, 0, /*hidden argument*/NULL);
		__this->set_xmlContextPushed_16((bool)0);
		return;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl/NodeData::get_LineNo()
extern "C" IL2CPP_METHOD_ATTR int32_t NodeData_get_LineNo_m926618980 (NodeData_t1817330133 * __this, const RuntimeMethod* method)
{
	{
		LineInfo_t3266778363 * L_0 = __this->get_address_of_lineInfo_10();
		int32_t L_1 = L_0->get_lineNo_0();
		return L_1;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl/NodeData::get_LinePos()
extern "C" IL2CPP_METHOD_ATTR int32_t NodeData_get_LinePos_m1743495369 (NodeData_t1817330133 * __this, const RuntimeMethod* method)
{
	{
		LineInfo_t3266778363 * L_0 = __this->get_address_of_lineInfo_10();
		int32_t L_1 = L_0->get_linePos_1();
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl/NodeData::get_IsEmptyElement()
extern "C" IL2CPP_METHOD_ATTR bool NodeData_get_IsEmptyElement_m819653700 (NodeData_t1817330133 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get_isEmptyOrDefault_14();
		return L_1;
	}

IL_0010:
	{
		return (bool)0;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/NodeData::set_IsEmptyElement(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NodeData_set_IsEmptyElement_m1005448766 (NodeData_t1817330133 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_isEmptyOrDefault_14(L_0);
		return;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl/NodeData::get_IsDefaultAttribute()
extern "C" IL2CPP_METHOD_ATTR bool NodeData_get_IsDefaultAttribute_m2730551245 (NodeData_t1817330133 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get_isEmptyOrDefault_14();
		return L_1;
	}

IL_0010:
	{
		return (bool)0;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/NodeData::set_IsDefaultAttribute(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NodeData_set_IsDefaultAttribute_m726704822 (NodeData_t1817330133 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_isEmptyOrDefault_14(L_0);
		return;
	}
}
// System.Boolean System.Xml.XmlTextReaderImpl/NodeData::get_ValueBuffered()
extern "C" IL2CPP_METHOD_ATTR bool NodeData_get_ValueBuffered_m3309523788 (NodeData_t1817330133 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_6();
		return (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}
}
// System.String System.Xml.XmlTextReaderImpl/NodeData::get_StringValue()
extern "C" IL2CPP_METHOD_ATTR String_t* NodeData_get_StringValue_m2817748184 (NodeData_t1817330133 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_6();
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		CharU5BU5D_t3528271667* L_1 = __this->get_chars_7();
		int32_t L_2 = __this->get_valueStartPos_8();
		int32_t L_3 = __this->get_valueLength_9();
		String_t* L_4 = String_CreateString_m860434552(NULL, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set_value_6(L_4);
	}

IL_0025:
	{
		String_t* L_5 = __this->get_value_6();
		return L_5;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/NodeData::TrimSpacesInValue()
extern "C" IL2CPP_METHOD_ATTR void NodeData_TrimSpacesInValue_m1547379665 (NodeData_t1817330133 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = NodeData_get_ValueBuffered_m3309523788(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		CharU5BU5D_t3528271667* L_1 = __this->get_chars_7();
		int32_t L_2 = __this->get_valueStartPos_8();
		int32_t* L_3 = __this->get_address_of_valueLength_9();
		XmlTextReaderImpl_StripSpaces_m3046082348(NULL /*static, unused*/, L_1, L_2, (int32_t*)L_3, /*hidden argument*/NULL);
		return;
	}

IL_0020:
	{
		String_t* L_4 = __this->get_value_6();
		String_t* L_5 = XmlTextReaderImpl_StripSpaces_m2610477575(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->set_value_6(L_5);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/NodeData::Clear(System.Xml.XmlNodeType)
extern "C" IL2CPP_METHOD_ATTR void NodeData_Clear_m38823411 (NodeData_t1817330133 * __this, int32_t ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeData_Clear_m38823411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___type0;
		__this->set_type_1(L_0);
		NodeData_ClearName_m3208556405(__this, /*hidden argument*/NULL);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_value_6(L_1);
		__this->set_valueStartPos_8((-1));
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_nameWPrefix_5(L_2);
		__this->set_schemaType_18(NULL);
		__this->set_typedValue_19(NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/NodeData::ClearName()
extern "C" IL2CPP_METHOD_ATTR void NodeData_ClearName_m3208556405 (NodeData_t1817330133 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeData_ClearName_m3208556405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_localName_2(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_prefix_3(L_1);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_ns_4(L_2);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_nameWPrefix_5(L_3);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/NodeData::SetLineInfo(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NodeData_SetLineInfo_m2576273210 (NodeData_t1817330133 * __this, int32_t ___lineNo0, int32_t ___linePos1, const RuntimeMethod* method)
{
	{
		LineInfo_t3266778363 * L_0 = __this->get_address_of_lineInfo_10();
		int32_t L_1 = ___lineNo0;
		int32_t L_2 = ___linePos1;
		LineInfo_Set_m1965125244((LineInfo_t3266778363 *)L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/NodeData::SetLineInfo2(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NodeData_SetLineInfo2_m3086209439 (NodeData_t1817330133 * __this, int32_t ___lineNo0, int32_t ___linePos1, const RuntimeMethod* method)
{
	{
		LineInfo_t3266778363 * L_0 = __this->get_address_of_lineInfo2_11();
		int32_t L_1 = ___lineNo0;
		int32_t L_2 = ___linePos1;
		LineInfo_Set_m1965125244((LineInfo_t3266778363 *)L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/NodeData::SetValueNode(System.Xml.XmlNodeType,System.String)
extern "C" IL2CPP_METHOD_ATTR void NodeData_SetValueNode_m3506585263 (NodeData_t1817330133 * __this, int32_t ___type0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___type0;
		__this->set_type_1(L_0);
		NodeData_ClearName_m3208556405(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___value1;
		__this->set_value_6(L_1);
		__this->set_valueStartPos_8((-1));
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/NodeData::SetValueNode(System.Xml.XmlNodeType,System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NodeData_SetValueNode_m3067891461 (NodeData_t1817330133 * __this, int32_t ___type0, CharU5BU5D_t3528271667* ___chars1, int32_t ___startPos2, int32_t ___len3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___type0;
		__this->set_type_1(L_0);
		NodeData_ClearName_m3208556405(__this, /*hidden argument*/NULL);
		__this->set_value_6((String_t*)NULL);
		CharU5BU5D_t3528271667* L_1 = ___chars1;
		__this->set_chars_7(L_1);
		int32_t L_2 = ___startPos2;
		__this->set_valueStartPos_8(L_2);
		int32_t L_3 = ___len3;
		__this->set_valueLength_9(L_3);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/NodeData::SetNamedNode(System.Xml.XmlNodeType,System.String)
extern "C" IL2CPP_METHOD_ATTR void NodeData_SetNamedNode_m2279543916 (NodeData_t1817330133 * __this, int32_t ___type0, String_t* ___localName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeData_SetNamedNode_m2279543916_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___type0;
		String_t* L_1 = ___localName1;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		String_t* L_3 = ___localName1;
		NodeData_SetNamedNode_m2353585377(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/NodeData::SetNamedNode(System.Xml.XmlNodeType,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void NodeData_SetNamedNode_m2353585377 (NodeData_t1817330133 * __this, int32_t ___type0, String_t* ___localName1, String_t* ___prefix2, String_t* ___nameWPrefix3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeData_SetNamedNode_m2353585377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___type0;
		__this->set_type_1(L_0);
		String_t* L_1 = ___localName1;
		__this->set_localName_2(L_1);
		String_t* L_2 = ___prefix2;
		__this->set_prefix_3(L_2);
		String_t* L_3 = ___nameWPrefix3;
		__this->set_nameWPrefix_5(L_3);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_ns_4(L_4);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_value_6(L_5);
		__this->set_valueStartPos_8((-1));
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/NodeData::SetValue(System.String)
extern "C" IL2CPP_METHOD_ATTR void NodeData_SetValue_m2597811565 (NodeData_t1817330133 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		__this->set_valueStartPos_8((-1));
		String_t* L_0 = ___value0;
		__this->set_value_6(L_0);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/NodeData::SetValue(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NodeData_SetValue_m4085028755 (NodeData_t1817330133 * __this, CharU5BU5D_t3528271667* ___chars0, int32_t ___startPos1, int32_t ___len2, const RuntimeMethod* method)
{
	{
		__this->set_value_6((String_t*)NULL);
		CharU5BU5D_t3528271667* L_0 = ___chars0;
		__this->set_chars_7(L_0);
		int32_t L_1 = ___startPos1;
		__this->set_valueStartPos_8(L_1);
		int32_t L_2 = ___len2;
		__this->set_valueLength_9(L_2);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/NodeData::OnBufferInvalidated()
extern "C" IL2CPP_METHOD_ATTR void NodeData_OnBufferInvalidated_m2105246679 (NodeData_t1817330133 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_6();
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		CharU5BU5D_t3528271667* L_1 = __this->get_chars_7();
		int32_t L_2 = __this->get_valueStartPos_8();
		int32_t L_3 = __this->get_valueLength_9();
		String_t* L_4 = String_CreateString_m860434552(NULL, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set_value_6(L_4);
	}

IL_0025:
	{
		__this->set_valueStartPos_8((-1));
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/NodeData::CopyTo(System.Int32,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR void NodeData_CopyTo_m2968205224 (NodeData_t1817330133 * __this, int32_t ___valueOffset0, StringBuilder_t * ___sb1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_6();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		StringBuilder_t * L_1 = ___sb1;
		CharU5BU5D_t3528271667* L_2 = __this->get_chars_7();
		int32_t L_3 = __this->get_valueStartPos_8();
		int32_t L_4 = ___valueOffset0;
		int32_t L_5 = __this->get_valueLength_9();
		int32_t L_6 = ___valueOffset0;
		NullCheck(L_1);
		StringBuilder_Append_m4089665817(L_1, L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)), /*hidden argument*/NULL);
		return;
	}

IL_0026:
	{
		int32_t L_7 = ___valueOffset0;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		StringBuilder_t * L_8 = ___sb1;
		String_t* L_9 = __this->get_value_6();
		NullCheck(L_8);
		StringBuilder_Append_m1965104174(L_8, L_9, /*hidden argument*/NULL);
		return;
	}

IL_0038:
	{
		StringBuilder_t * L_10 = ___sb1;
		String_t* L_11 = __this->get_value_6();
		int32_t L_12 = ___valueOffset0;
		String_t* L_13 = __this->get_value_6();
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m3847582255(L_13, /*hidden argument*/NULL);
		int32_t L_15 = ___valueOffset0;
		NullCheck(L_10);
		StringBuilder_Append_m3214161208(L_10, L_11, L_12, ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl/NodeData::CopyTo(System.Int32,System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NodeData_CopyTo_m2429816370 (NodeData_t1817330133 * __this, int32_t ___valueOffset0, CharU5BU5D_t3528271667* ___buffer1, int32_t ___offset2, int32_t ___length3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = __this->get_value_6();
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_1 = __this->get_valueLength_9();
		int32_t L_2 = ___valueOffset0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2));
		int32_t L_3 = V_0;
		int32_t L_4 = ___length3;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_5 = ___length3;
		V_0 = L_5;
	}

IL_0019:
	{
		CharU5BU5D_t3528271667* L_6 = __this->get_chars_7();
		int32_t L_7 = __this->get_valueStartPos_8();
		int32_t L_8 = ___valueOffset0;
		CharU5BU5D_t3528271667* L_9 = ___buffer1;
		int32_t L_10 = ___offset2;
		int32_t L_11 = V_0;
		XmlTextReaderImpl_BlockCopyChars_m3286008642(NULL /*static, unused*/, L_6, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)), L_9, L_10, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_0;
		return L_12;
	}

IL_0031:
	{
		String_t* L_13 = __this->get_value_6();
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m3847582255(L_13, /*hidden argument*/NULL);
		int32_t L_15 = ___valueOffset0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15));
		int32_t L_16 = V_1;
		int32_t L_17 = ___length3;
		if ((((int32_t)L_16) <= ((int32_t)L_17)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_18 = ___length3;
		V_1 = L_18;
	}

IL_0047:
	{
		String_t* L_19 = __this->get_value_6();
		int32_t L_20 = ___valueOffset0;
		CharU5BU5D_t3528271667* L_21 = ___buffer1;
		int32_t L_22 = ___offset2;
		int32_t L_23 = V_1;
		NullCheck(L_19);
		String_CopyTo_m2803757991(L_19, L_20, L_21, L_22, L_23, /*hidden argument*/NULL);
		int32_t L_24 = V_1;
		return L_24;
	}
}
// System.String System.Xml.XmlTextReaderImpl/NodeData::GetNameWPrefix(System.Xml.XmlNameTable)
extern "C" IL2CPP_METHOD_ATTR String_t* NodeData_GetNameWPrefix_m1788257714 (NodeData_t1817330133 * __this, XmlNameTable_t71772148 * ___nt0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_nameWPrefix_5();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = __this->get_nameWPrefix_5();
		return L_1;
	}

IL_000f:
	{
		XmlNameTable_t71772148 * L_2 = ___nt0;
		String_t* L_3 = NodeData_CreateNameWPrefix_m2233675805(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String System.Xml.XmlTextReaderImpl/NodeData::CreateNameWPrefix(System.Xml.XmlNameTable)
extern "C" IL2CPP_METHOD_ATTR String_t* NodeData_CreateNameWPrefix_m2233675805 (NodeData_t1817330133 * __this, XmlNameTable_t71772148 * ___nt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeData_CreateNameWPrefix_m2233675805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_prefix_3();
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = __this->get_localName_2();
		__this->set_nameWPrefix_5(L_2);
		goto IL_003d;
	}

IL_001b:
	{
		XmlNameTable_t71772148 * L_3 = ___nt0;
		String_t* L_4 = __this->get_prefix_3();
		String_t* L_5 = __this->get_localName_2();
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, L_4, _stringLiteral3452614550, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_7 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_3, L_6);
		__this->set_nameWPrefix_5(L_7);
	}

IL_003d:
	{
		String_t* L_8 = __this->get_nameWPrefix_5();
		return L_8;
	}
}
// System.Int32 System.Xml.XmlTextReaderImpl/NodeData::System.IComparable.CompareTo(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t NodeData_System_IComparable_CompareTo_m2862513728 (NodeData_t1817330133 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeData_System_IComparable_CompareTo_m2862513728_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NodeData_t1817330133 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((NodeData_t1817330133 *)IsInstClass((RuntimeObject*)L_0, NodeData_t1817330133_il2cpp_TypeInfo_var));
		NodeData_t1817330133 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_2 = __this->get_localName_2();
		NodeData_t1817330133 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_localName_2();
		bool L_5 = Ref_Equal_m200394427(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_6 = __this->get_ns_4();
		NodeData_t1817330133 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_ns_4();
		bool L_9 = Ref_Equal_m200394427(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0032;
		}
	}
	{
		return 0;
	}

IL_0032:
	{
		String_t* L_10 = __this->get_ns_4();
		NodeData_t1817330133 * L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12 = L_11->get_ns_4();
		int32_t L_13 = String_CompareOrdinal_m786132908(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0044:
	{
		String_t* L_14 = __this->get_localName_2();
		NodeData_t1817330133 * L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16 = L_15->get_localName_2();
		int32_t L_17 = String_CompareOrdinal_m786132908(NULL /*static, unused*/, L_14, L_16, /*hidden argument*/NULL);
		return L_17;
	}

IL_0056:
	{
		return 1;
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
// System.Void System.Xml.XmlTextReaderImpl/OnDefaultAttributeUseDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnDefaultAttributeUseDelegate__ctor_m2325472870 (OnDefaultAttributeUseDelegate_t2911570364 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.Xml.XmlTextReaderImpl/OnDefaultAttributeUseDelegate::Invoke(System.Xml.IDtdDefaultAttributeInfo,System.Xml.XmlTextReaderImpl)
extern "C" IL2CPP_METHOD_ATTR void OnDefaultAttributeUseDelegate_Invoke_m582736479 (OnDefaultAttributeUseDelegate_t2911570364 * __this, RuntimeObject* ___defaultAttribute0, XmlTextReaderImpl_t178060594 * ___coreReader1, const RuntimeMethod* method)
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
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject*, XmlTextReaderImpl_t178060594 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___defaultAttribute0, ___coreReader1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject*, XmlTextReaderImpl_t178060594 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___defaultAttribute0, ___coreReader1, targetMethod);
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
								GenericInterfaceActionInvoker2< RuntimeObject*, XmlTextReaderImpl_t178060594 * >::Invoke(targetMethod, targetThis, ___defaultAttribute0, ___coreReader1);
							else
								GenericVirtActionInvoker2< RuntimeObject*, XmlTextReaderImpl_t178060594 * >::Invoke(targetMethod, targetThis, ___defaultAttribute0, ___coreReader1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< RuntimeObject*, XmlTextReaderImpl_t178060594 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___defaultAttribute0, ___coreReader1);
							else
								VirtActionInvoker2< RuntimeObject*, XmlTextReaderImpl_t178060594 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___defaultAttribute0, ___coreReader1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, RuntimeObject*, XmlTextReaderImpl_t178060594 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___defaultAttribute0, ___coreReader1, targetMethod);
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
								GenericInterfaceActionInvoker1< XmlTextReaderImpl_t178060594 * >::Invoke(targetMethod, ___defaultAttribute0, ___coreReader1);
							else
								GenericVirtActionInvoker1< XmlTextReaderImpl_t178060594 * >::Invoke(targetMethod, ___defaultAttribute0, ___coreReader1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< XmlTextReaderImpl_t178060594 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___defaultAttribute0, ___coreReader1);
							else
								VirtActionInvoker1< XmlTextReaderImpl_t178060594 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___defaultAttribute0, ___coreReader1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (RuntimeObject*, XmlTextReaderImpl_t178060594 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___defaultAttribute0, ___coreReader1, targetMethod);
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
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject*, XmlTextReaderImpl_t178060594 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___defaultAttribute0, ___coreReader1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject*, XmlTextReaderImpl_t178060594 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___defaultAttribute0, ___coreReader1, targetMethod);
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
							GenericInterfaceActionInvoker2< RuntimeObject*, XmlTextReaderImpl_t178060594 * >::Invoke(targetMethod, targetThis, ___defaultAttribute0, ___coreReader1);
						else
							GenericVirtActionInvoker2< RuntimeObject*, XmlTextReaderImpl_t178060594 * >::Invoke(targetMethod, targetThis, ___defaultAttribute0, ___coreReader1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< RuntimeObject*, XmlTextReaderImpl_t178060594 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___defaultAttribute0, ___coreReader1);
						else
							VirtActionInvoker2< RuntimeObject*, XmlTextReaderImpl_t178060594 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___defaultAttribute0, ___coreReader1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject*, XmlTextReaderImpl_t178060594 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___defaultAttribute0, ___coreReader1, targetMethod);
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
							GenericInterfaceActionInvoker1< XmlTextReaderImpl_t178060594 * >::Invoke(targetMethod, ___defaultAttribute0, ___coreReader1);
						else
							GenericVirtActionInvoker1< XmlTextReaderImpl_t178060594 * >::Invoke(targetMethod, ___defaultAttribute0, ___coreReader1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< XmlTextReaderImpl_t178060594 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___defaultAttribute0, ___coreReader1);
						else
							VirtActionInvoker1< XmlTextReaderImpl_t178060594 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___defaultAttribute0, ___coreReader1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, XmlTextReaderImpl_t178060594 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___defaultAttribute0, ___coreReader1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult System.Xml.XmlTextReaderImpl/OnDefaultAttributeUseDelegate::BeginInvoke(System.Xml.IDtdDefaultAttributeInfo,System.Xml.XmlTextReaderImpl,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnDefaultAttributeUseDelegate_BeginInvoke_m3690566481 (OnDefaultAttributeUseDelegate_t2911570364 * __this, RuntimeObject* ___defaultAttribute0, XmlTextReaderImpl_t178060594 * ___coreReader1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___defaultAttribute0;
	__d_args[1] = ___coreReader1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void System.Xml.XmlTextReaderImpl/OnDefaultAttributeUseDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnDefaultAttributeUseDelegate_EndInvoke_m2915227016 (OnDefaultAttributeUseDelegate_t2911570364 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: System.Xml.XmlTextReaderImpl/ParsingState
extern "C" void ParsingState_t1780334922_marshal_pinvoke(const ParsingState_t1780334922& unmarshaled, ParsingState_t1780334922_marshaled_pinvoke& marshaled)
{
	Exception_t* ___encoding_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'encoding' of type 'ParsingState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___encoding_3Exception, NULL, NULL);
}
extern "C" void ParsingState_t1780334922_marshal_pinvoke_back(const ParsingState_t1780334922_marshaled_pinvoke& marshaled, ParsingState_t1780334922& unmarshaled)
{
	Exception_t* ___encoding_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'encoding' of type 'ParsingState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___encoding_3Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlTextReaderImpl/ParsingState
extern "C" void ParsingState_t1780334922_marshal_pinvoke_cleanup(ParsingState_t1780334922_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Xml.XmlTextReaderImpl/ParsingState
extern "C" void ParsingState_t1780334922_marshal_com(const ParsingState_t1780334922& unmarshaled, ParsingState_t1780334922_marshaled_com& marshaled)
{
	Exception_t* ___encoding_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'encoding' of type 'ParsingState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___encoding_3Exception, NULL, NULL);
}
extern "C" void ParsingState_t1780334922_marshal_com_back(const ParsingState_t1780334922_marshaled_com& marshaled, ParsingState_t1780334922& unmarshaled)
{
	Exception_t* ___encoding_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'encoding' of type 'ParsingState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___encoding_3Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlTextReaderImpl/ParsingState
extern "C" void ParsingState_t1780334922_marshal_com_cleanup(ParsingState_t1780334922_marshaled_com& marshaled)
{
}
// System.Void System.Xml.XmlTextReaderImpl/ParsingState::Clear()
extern "C" IL2CPP_METHOD_ATTR void ParsingState_Clear_m828353238 (ParsingState_t1780334922 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParsingState_Clear_m828353238_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_chars_0((CharU5BU5D_t3528271667*)NULL);
		__this->set_charPos_1(0);
		__this->set_charsUsed_2(0);
		__this->set_encoding_3((Encoding_t1523322056 *)NULL);
		__this->set_stream_5((Stream_t1273022909 *)NULL);
		__this->set_decoder_6((Decoder_t2204182725 *)NULL);
		__this->set_bytes_7((ByteU5BU5D_t4116647657*)NULL);
		__this->set_bytePos_8(0);
		__this->set_bytesUsed_9(0);
		__this->set_textReader_10((TextReader_t283511965 *)NULL);
		__this->set_lineNo_11(1);
		__this->set_lineStartPos_12((-1));
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_baseUriStr_13(L_0);
		__this->set_baseUri_14((Uri_t100236324 *)NULL);
		__this->set_isEof_15((bool)0);
		__this->set_isStreamEof_16((bool)0);
		__this->set_eolNormalized_19((bool)1);
		__this->set_entityResolvedManually_20((bool)0);
		return;
	}
}
extern "C"  void ParsingState_Clear_m828353238_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ParsingState_t1780334922 * _thisAdjusted = reinterpret_cast<ParsingState_t1780334922 *>(__this + 1);
	ParsingState_Clear_m828353238(_thisAdjusted, method);
}
// System.Void System.Xml.XmlTextReaderImpl/ParsingState::Close(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ParsingState_Close_m3074372374 (ParsingState_t1780334922 * __this, bool ___closeInput0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___closeInput0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		Stream_t1273022909 * L_1 = __this->get_stream_5();
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Stream_t1273022909 * L_2 = __this->get_stream_5();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Close() */, L_2);
		return;
	}

IL_0017:
	{
		TextReader_t283511965 * L_3 = __this->get_textReader_10();
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		TextReader_t283511965 * L_4 = __this->get_textReader_10();
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.TextReader::Close() */, L_4);
	}

IL_002a:
	{
		return;
	}
}
extern "C"  void ParsingState_Close_m3074372374_AdjustorThunk (RuntimeObject * __this, bool ___closeInput0, const RuntimeMethod* method)
{
	ParsingState_t1780334922 * _thisAdjusted = reinterpret_cast<ParsingState_t1780334922 *>(__this + 1);
	ParsingState_Close_m3074372374(_thisAdjusted, ___closeInput0, method);
}
// System.Int32 System.Xml.XmlTextReaderImpl/ParsingState::get_LineNo()
extern "C" IL2CPP_METHOD_ATTR int32_t ParsingState_get_LineNo_m1222454779 (ParsingState_t1780334922 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_lineNo_11();
		return L_0;
	}
}
extern "C"  int32_t ParsingState_get_LineNo_m1222454779_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ParsingState_t1780334922 * _thisAdjusted = reinterpret_cast<ParsingState_t1780334922 *>(__this + 1);
	return ParsingState_get_LineNo_m1222454779(_thisAdjusted, method);
}
// System.Int32 System.Xml.XmlTextReaderImpl/ParsingState::get_LinePos()
extern "C" IL2CPP_METHOD_ATTR int32_t ParsingState_get_LinePos_m2840443232 (ParsingState_t1780334922 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_charPos_1();
		int32_t L_1 = __this->get_lineStartPos_12();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
	}
}
extern "C"  int32_t ParsingState_get_LinePos_m2840443232_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ParsingState_t1780334922 * _thisAdjusted = reinterpret_cast<ParsingState_t1780334922 *>(__this + 1);
	return ParsingState_get_LinePos_m2840443232(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlTextReaderImpl/XmlContext::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlContext__ctor_m2990086058 (XmlContext_t1618903103 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlContext__ctor_m2990086058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_xmlSpace_0(0);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_xmlLang_1(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_defaultNamespace_2(L_1);
		__this->set_previousContext_3((XmlContext_t1618903103 *)NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReaderImpl/XmlContext::.ctor(System.Xml.XmlTextReaderImpl/XmlContext)
extern "C" IL2CPP_METHOD_ATTR void XmlContext__ctor_m2403295624 (XmlContext_t1618903103 * __this, XmlContext_t1618903103 * ___previousContext0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		XmlContext_t1618903103 * L_0 = ___previousContext0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_xmlSpace_0();
		__this->set_xmlSpace_0(L_1);
		XmlContext_t1618903103 * L_2 = ___previousContext0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_xmlLang_1();
		__this->set_xmlLang_1(L_3);
		XmlContext_t1618903103 * L_4 = ___previousContext0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_defaultNamespace_2();
		__this->set_defaultNamespace_2(L_5);
		XmlContext_t1618903103 * L_6 = ___previousContext0;
		__this->set_previousContext_3(L_6);
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
// System.Void System.Xml.XmlTextWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter__ctor_m1436555789 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter__ctor_m1436555789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlCharType_t2277243275  L_0 = XmlCharType_get_Instance_m52052032(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_xmlCharType_24(L_0);
		XmlWriter__ctor_m2782267819(__this, /*hidden argument*/NULL);
		__this->set_namespaces_16((bool)1);
		__this->set_formatting_4(0);
		__this->set_indentation_6(2);
		__this->set_indentChar_7(((int32_t)32));
		NamespaceU5BU5D_t4259279085* L_1 = (NamespaceU5BU5D_t4259279085*)SZArrayNew(NamespaceU5BU5D_t4259279085_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->set_nsStack_20(L_1);
		__this->set_nsTop_21((-1));
		TagInfoU5BU5D_t2840723532* L_2 = (TagInfoU5BU5D_t2840723532*)SZArrayNew(TagInfoU5BU5D_t2840723532_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_stack_8(L_2);
		__this->set_top_9(0);
		TagInfoU5BU5D_t2840723532* L_3 = __this->get_stack_8();
		int32_t L_4 = __this->get_top_9();
		NullCheck(L_3);
		TagInfo_Init_m2043286854((TagInfo_t3526638417 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), (-1), /*hidden argument*/NULL);
		__this->set_quoteChar_14(((int32_t)34));
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		StateU5BU5D_t428546178* L_5 = ((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->get_stateTableDefault_27();
		__this->set_stateTable_10(L_5);
		__this->set_currentState_11(0);
		__this->set_lastToken_12(((int32_t)13));
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.TextWriter)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter__ctor_m1850551870 (XmlTextWriter_t2114213153 * __this, TextWriter_t3478189236 * ___w0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter__ctor_m1850551870_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlTextWriter__ctor_m1436555789(__this, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_0 = ___w0;
		__this->set_textWriter_1(L_0);
		TextWriter_t3478189236 * L_1 = ___w0;
		NullCheck(L_1);
		Encoding_t1523322056 * L_2 = VirtFuncInvoker0< Encoding_t1523322056 * >::Invoke(11 /* System.Text.Encoding System.IO.TextWriter::get_Encoding() */, L_1);
		__this->set_encoding_3(L_2);
		TextWriter_t3478189236 * L_3 = ___w0;
		XmlTextEncoder_t1632274355 * L_4 = (XmlTextEncoder_t1632274355 *)il2cpp_codegen_object_new(XmlTextEncoder_t1632274355_il2cpp_TypeInfo_var);
		XmlTextEncoder__ctor_m1753560081(L_4, L_3, /*hidden argument*/NULL);
		__this->set_xmlEncoder_2(L_4);
		XmlTextEncoder_t1632274355 * L_5 = __this->get_xmlEncoder_2();
		Il2CppChar L_6 = __this->get_quoteChar_14();
		NullCheck(L_5);
		XmlTextEncoder_set_QuoteChar_m3704929252(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::set_Namespaces(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_set_Namespaces_m457395416 (XmlTextWriter_t2114213153 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_set_Namespaces_m457395416_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_currentState_11();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral3143643306, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_2 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XmlTextWriter_set_Namespaces_m457395416_RuntimeMethod_var);
	}

IL_0018:
	{
		bool L_3 = ___value0;
		__this->set_namespaces_16(L_3);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::set_Formatting(System.Xml.Formatting)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_set_Formatting_m1913060046 (XmlTextWriter_t2114213153 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_formatting_4(L_0);
		int32_t L_1 = ___value0;
		__this->set_indented_5((bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0));
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::set_QuoteChar(System.Char)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_set_QuoteChar_m136892219 (XmlTextWriter_t2114213153 * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_set_QuoteChar_m136892219_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)34))))
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_1 = ___value0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)39))))
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_2 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral106153172, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, XmlTextWriter_set_QuoteChar_m136892219_RuntimeMethod_var);
	}

IL_001a:
	{
		Il2CppChar L_4 = ___value0;
		__this->set_quoteChar_14(L_4);
		XmlTextEncoder_t1632274355 * L_5 = __this->get_xmlEncoder_2();
		Il2CppChar L_6 = ___value0;
		NullCheck(L_5);
		XmlTextEncoder_set_QuoteChar_m3704929252(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteDocType(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteDocType_m3875009899 (XmlTextWriter_t2114213153 * __this, String_t* ___name0, String_t* ___pubid1, String_t* ___sysid2, String_t* ___subset3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteDocType_m3875009899_MetadataUsageId);
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
			String_t* L_0 = ___name0;
			XmlTextWriter_ValidateName_m909992142(__this, L_0, (bool)0, /*hidden argument*/NULL);
			XmlTextWriter_AutoComplete_m1937294162(__this, 1, /*hidden argument*/NULL);
			TextWriter_t3478189236 * L_1 = __this->get_textWriter_1();
			NullCheck(L_1);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_1, _stringLiteral3664297627);
			TextWriter_t3478189236 * L_2 = __this->get_textWriter_1();
			String_t* L_3 = ___name0;
			NullCheck(L_2);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_2, L_3);
			String_t* L_4 = ___pubid1;
			if (!L_4)
			{
				goto IL_00a4;
			}
		}

IL_002e:
		{
			TextWriter_t3478189236 * L_5 = __this->get_textWriter_1();
			Il2CppChar* L_6 = __this->get_address_of_quoteChar_14();
			String_t* L_7 = Char_ToString_m3588025615((Il2CppChar*)L_6, /*hidden argument*/NULL);
			String_t* L_8 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4026494280, L_7, /*hidden argument*/NULL);
			NullCheck(L_5);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_5, L_8);
			TextWriter_t3478189236 * L_9 = __this->get_textWriter_1();
			String_t* L_10 = ___pubid1;
			NullCheck(L_9);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_9, L_10);
			TextWriter_t3478189236 * L_11 = __this->get_textWriter_1();
			Il2CppChar* L_12 = __this->get_address_of_quoteChar_14();
			String_t* L_13 = Char_ToString_m3588025615((Il2CppChar*)L_12, /*hidden argument*/NULL);
			Il2CppChar* L_14 = __this->get_address_of_quoteChar_14();
			String_t* L_15 = Char_ToString_m3588025615((Il2CppChar*)L_14, /*hidden argument*/NULL);
			String_t* L_16 = String_Concat_m3755062657(NULL /*static, unused*/, L_13, _stringLiteral3452614528, L_15, /*hidden argument*/NULL);
			NullCheck(L_11);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, L_16);
			TextWriter_t3478189236 * L_17 = __this->get_textWriter_1();
			String_t* L_18 = ___sysid2;
			NullCheck(L_17);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_17, L_18);
			TextWriter_t3478189236 * L_19 = __this->get_textWriter_1();
			Il2CppChar L_20 = __this->get_quoteChar_14();
			NullCheck(L_19);
			VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_19, L_20);
			goto IL_00e4;
		}

IL_00a4:
		{
			String_t* L_21 = ___sysid2;
			if (!L_21)
			{
				goto IL_00e4;
			}
		}

IL_00a7:
		{
			TextWriter_t3478189236 * L_22 = __this->get_textWriter_1();
			Il2CppChar* L_23 = __this->get_address_of_quoteChar_14();
			String_t* L_24 = Char_ToString_m3588025615((Il2CppChar*)L_23, /*hidden argument*/NULL);
			String_t* L_25 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2551850054, L_24, /*hidden argument*/NULL);
			NullCheck(L_22);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_22, L_25);
			TextWriter_t3478189236 * L_26 = __this->get_textWriter_1();
			String_t* L_27 = ___sysid2;
			NullCheck(L_26);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_26, L_27);
			TextWriter_t3478189236 * L_28 = __this->get_textWriter_1();
			Il2CppChar L_29 = __this->get_quoteChar_14();
			NullCheck(L_28);
			VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_28, L_29);
		}

IL_00e4:
		{
			String_t* L_30 = ___subset3;
			if (!L_30)
			{
				goto IL_0115;
			}
		}

IL_00e8:
		{
			TextWriter_t3478189236 * L_31 = __this->get_textWriter_1();
			NullCheck(L_31);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_31, _stringLiteral3452614645);
			TextWriter_t3478189236 * L_32 = __this->get_textWriter_1();
			String_t* L_33 = ___subset3;
			NullCheck(L_32);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_32, L_33);
			TextWriter_t3478189236 * L_34 = __this->get_textWriter_1();
			NullCheck(L_34);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_34, _stringLiteral3452614643);
		}

IL_0115:
		{
			TextWriter_t3478189236 * L_35 = __this->get_textWriter_1();
			NullCheck(L_35);
			VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_35, ((int32_t)62));
			goto IL_012e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0124;
		throw e;
	}

CATCH_0124:
	{ // begin catch(System.Object)
		__this->set_currentState_11(8);
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, XmlTextWriter_WriteDocType_m3875009899_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_012e:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteStartElement(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteStartElement_m362096410 (XmlTextWriter_t2114213153 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___ns2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteStartElement_m362096410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
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
			XmlTextWriter_AutoComplete_m1937294162(__this, 4, /*hidden argument*/NULL);
			XmlTextWriter_PushStack_m2287986788(__this, /*hidden argument*/NULL);
			TextWriter_t3478189236 * L_0 = __this->get_textWriter_1();
			NullCheck(L_0);
			VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_0, ((int32_t)60));
			bool L_1 = __this->get_namespaces_16();
			if (!L_1)
			{
				goto IL_017b;
			}
		}

IL_0025:
		{
			TagInfoU5BU5D_t2840723532* L_2 = __this->get_stack_8();
			int32_t L_3 = __this->get_top_9();
			NullCheck(L_2);
			TagInfoU5BU5D_t2840723532* L_4 = __this->get_stack_8();
			int32_t L_5 = __this->get_top_9();
			NullCheck(L_4);
			String_t* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))))->get_defaultNs_2();
			((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->set_defaultNs_2(L_6);
			TagInfoU5BU5D_t2840723532* L_7 = __this->get_stack_8();
			int32_t L_8 = __this->get_top_9();
			NullCheck(L_7);
			int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)))))->get_defaultNsState_3();
			if (!L_9)
			{
				goto IL_0084;
			}
		}

IL_006d:
		{
			TagInfoU5BU5D_t2840723532* L_10 = __this->get_stack_8();
			int32_t L_11 = __this->get_top_9();
			NullCheck(L_10);
			((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->set_defaultNsState_3(1);
		}

IL_0084:
		{
			TagInfoU5BU5D_t2840723532* L_12 = __this->get_stack_8();
			int32_t L_13 = __this->get_top_9();
			NullCheck(L_12);
			TagInfoU5BU5D_t2840723532* L_14 = __this->get_stack_8();
			int32_t L_15 = __this->get_top_9();
			NullCheck(L_14);
			bool L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)))))->get_mixed_8();
			((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->set_mixed_8(L_16);
			String_t* L_17 = ___ns2;
			if (L_17)
			{
				goto IL_00da;
			}
		}

IL_00b5:
		{
			String_t* L_18 = ___prefix0;
			if (!L_18)
			{
				goto IL_0127;
			}
		}

IL_00b8:
		{
			String_t* L_19 = ___prefix0;
			NullCheck(L_19);
			int32_t L_20 = String_get_Length_m3847582255(L_19, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_0127;
			}
		}

IL_00c0:
		{
			String_t* L_21 = ___prefix0;
			int32_t L_22 = XmlTextWriter_LookupNamespace_m3389725513(__this, L_21, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_22) == ((uint32_t)(-1)))))
			{
				goto IL_0127;
			}
		}

IL_00ca:
		{
			String_t* L_23 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral2821368693, /*hidden argument*/NULL);
			ArgumentException_t132251570 * L_24 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m1312628991(L_24, L_23, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, NULL, XmlTextWriter_WriteStartElement_m362096410_RuntimeMethod_var);
		}

IL_00da:
		{
			String_t* L_25 = ___prefix0;
			if (L_25)
			{
				goto IL_00f8;
			}
		}

IL_00dd:
		{
			String_t* L_26 = ___ns2;
			String_t* L_27 = XmlTextWriter_FindPrefix_m1620482724(__this, L_26, /*hidden argument*/NULL);
			V_0 = L_27;
			String_t* L_28 = V_0;
			if (!L_28)
			{
				goto IL_00ed;
			}
		}

IL_00e8:
		{
			String_t* L_29 = V_0;
			___prefix0 = L_29;
			goto IL_0127;
		}

IL_00ed:
		{
			String_t* L_30 = ___ns2;
			XmlTextWriter_PushNamespace_m1850895031(__this, (String_t*)NULL, L_30, (bool)0, /*hidden argument*/NULL);
			goto IL_0127;
		}

IL_00f8:
		{
			String_t* L_31 = ___prefix0;
			NullCheck(L_31);
			int32_t L_32 = String_get_Length_m3847582255(L_31, /*hidden argument*/NULL);
			if (L_32)
			{
				goto IL_010b;
			}
		}

IL_0100:
		{
			String_t* L_33 = ___ns2;
			XmlTextWriter_PushNamespace_m1850895031(__this, (String_t*)NULL, L_33, (bool)0, /*hidden argument*/NULL);
			goto IL_0127;
		}

IL_010b:
		{
			String_t* L_34 = ___ns2;
			NullCheck(L_34);
			int32_t L_35 = String_get_Length_m3847582255(L_34, /*hidden argument*/NULL);
			if (L_35)
			{
				goto IL_0116;
			}
		}

IL_0113:
		{
			___prefix0 = (String_t*)NULL;
		}

IL_0116:
		{
			String_t* L_36 = ___prefix0;
			String_t* L_37 = ___ns2;
			XmlTextWriter_VerifyPrefixXml_m3875935888(__this, L_36, L_37, /*hidden argument*/NULL);
			String_t* L_38 = ___prefix0;
			String_t* L_39 = ___ns2;
			XmlTextWriter_PushNamespace_m1850895031(__this, L_38, L_39, (bool)0, /*hidden argument*/NULL);
		}

IL_0127:
		{
			TagInfoU5BU5D_t2840723532* L_40 = __this->get_stack_8();
			int32_t L_41 = __this->get_top_9();
			NullCheck(L_40);
			((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->set_prefix_1((String_t*)NULL);
			String_t* L_42 = ___prefix0;
			if (!L_42)
			{
				goto IL_01a1;
			}
		}

IL_0141:
		{
			String_t* L_43 = ___prefix0;
			NullCheck(L_43);
			int32_t L_44 = String_get_Length_m3847582255(L_43, /*hidden argument*/NULL);
			if (!L_44)
			{
				goto IL_01a1;
			}
		}

IL_0149:
		{
			TagInfoU5BU5D_t2840723532* L_45 = __this->get_stack_8();
			int32_t L_46 = __this->get_top_9();
			NullCheck(L_45);
			String_t* L_47 = ___prefix0;
			((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->set_prefix_1(L_47);
			TextWriter_t3478189236 * L_48 = __this->get_textWriter_1();
			String_t* L_49 = ___prefix0;
			NullCheck(L_48);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_48, L_49);
			TextWriter_t3478189236 * L_50 = __this->get_textWriter_1();
			NullCheck(L_50);
			VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_50, ((int32_t)58));
			goto IL_01a1;
		}

IL_017b:
		{
			String_t* L_51 = ___ns2;
			if (!L_51)
			{
				goto IL_0186;
			}
		}

IL_017e:
		{
			String_t* L_52 = ___ns2;
			NullCheck(L_52);
			int32_t L_53 = String_get_Length_m3847582255(L_52, /*hidden argument*/NULL);
			if (L_53)
			{
				goto IL_0191;
			}
		}

IL_0186:
		{
			String_t* L_54 = ___prefix0;
			if (!L_54)
			{
				goto IL_01a1;
			}
		}

IL_0189:
		{
			String_t* L_55 = ___prefix0;
			NullCheck(L_55);
			int32_t L_56 = String_get_Length_m3847582255(L_55, /*hidden argument*/NULL);
			if (!L_56)
			{
				goto IL_01a1;
			}
		}

IL_0191:
		{
			String_t* L_57 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral300414924, /*hidden argument*/NULL);
			ArgumentException_t132251570 * L_58 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m1312628991(L_58, L_57, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, NULL, XmlTextWriter_WriteStartElement_m362096410_RuntimeMethod_var);
		}

IL_01a1:
		{
			TagInfoU5BU5D_t2840723532* L_59 = __this->get_stack_8();
			int32_t L_60 = __this->get_top_9();
			NullCheck(L_59);
			String_t* L_61 = ___localName1;
			((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_60)))->set_name_0(L_61);
			TextWriter_t3478189236 * L_62 = __this->get_textWriter_1();
			String_t* L_63 = ___localName1;
			NullCheck(L_62);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_62, L_63);
			goto IL_01d0;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_01c6;
		throw e;
	}

CATCH_01c6:
	{ // begin catch(System.Object)
		__this->set_currentState_11(8);
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, XmlTextWriter_WriteStartElement_m362096410_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_01d0:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndElement()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteEndElement_m4081619786 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		XmlTextWriter_InternalWriteEndElement_m1354321211(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteFullEndElement()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteFullEndElement_m164880516 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		XmlTextWriter_InternalWriteEndElement_m1354321211(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteStartAttribute(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteStartAttribute_m796971626 (XmlTextWriter_t2114213153 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___ns2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteStartAttribute_m796971626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
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
			XmlTextWriter_AutoComplete_m1937294162(__this, 7, /*hidden argument*/NULL);
			__this->set_specialAttr_17(0);
			bool L_0 = __this->get_namespaces_16();
			if (!L_0)
			{
				goto IL_01c6;
			}
		}

IL_0019:
		{
			String_t* L_1 = ___prefix0;
			if (!L_1)
			{
				goto IL_0027;
			}
		}

IL_001c:
		{
			String_t* L_2 = ___prefix0;
			NullCheck(L_2);
			int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
			if (L_3)
			{
				goto IL_0027;
			}
		}

IL_0024:
		{
			___prefix0 = (String_t*)NULL;
		}

IL_0027:
		{
			String_t* L_4 = ___ns2;
			bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_4, _stringLiteral2829469855, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_004b;
			}
		}

IL_0034:
		{
			String_t* L_6 = ___prefix0;
			if (L_6)
			{
				goto IL_004b;
			}
		}

IL_0037:
		{
			String_t* L_7 = ___localName1;
			bool L_8 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_7, _stringLiteral3929236445, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_004b;
			}
		}

IL_0044:
		{
			___prefix0 = _stringLiteral3929236445;
		}

IL_004b:
		{
			String_t* L_9 = ___prefix0;
			bool L_10 = String_op_Equality_m920492651(NULL /*static, unused*/, L_9, _stringLiteral2909972470, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_008d;
			}
		}

IL_0058:
		{
			String_t* L_11 = ___localName1;
			bool L_12 = String_op_Equality_m920492651(NULL /*static, unused*/, L_11, _stringLiteral2409271576, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0071;
			}
		}

IL_0065:
		{
			__this->set_specialAttr_17(2);
			goto IL_01a0;
		}

IL_0071:
		{
			String_t* L_13 = ___localName1;
			bool L_14 = String_op_Equality_m920492651(NULL /*static, unused*/, L_13, _stringLiteral1613539661, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_01a0;
			}
		}

IL_0081:
		{
			__this->set_specialAttr_17(1);
			goto IL_01a0;
		}

IL_008d:
		{
			String_t* L_15 = ___prefix0;
			bool L_16 = String_op_Equality_m920492651(NULL /*static, unused*/, L_15, _stringLiteral3929236445, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_00e7;
			}
		}

IL_009a:
		{
			String_t* L_17 = ___ns2;
			bool L_18 = String_op_Inequality_m215368492(NULL /*static, unused*/, _stringLiteral2829469855, L_17, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_00ba;
			}
		}

IL_00a7:
		{
			String_t* L_19 = ___ns2;
			if (!L_19)
			{
				goto IL_00ba;
			}
		}

IL_00aa:
		{
			String_t* L_20 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral175581707, /*hidden argument*/NULL);
			ArgumentException_t132251570 * L_21 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m1312628991(L_21, L_20, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, NULL, XmlTextWriter_WriteStartAttribute_m796971626_RuntimeMethod_var);
		}

IL_00ba:
		{
			String_t* L_22 = ___localName1;
			if (!L_22)
			{
				goto IL_00c5;
			}
		}

IL_00bd:
		{
			String_t* L_23 = ___localName1;
			NullCheck(L_23);
			int32_t L_24 = String_get_Length_m3847582255(L_23, /*hidden argument*/NULL);
			if (L_24)
			{
				goto IL_00d4;
			}
		}

IL_00c5:
		{
			String_t* L_25 = ___prefix0;
			___localName1 = L_25;
			___prefix0 = (String_t*)NULL;
			__this->set_prefixForXmlNs_18((String_t*)NULL);
			goto IL_00db;
		}

IL_00d4:
		{
			String_t* L_26 = ___localName1;
			__this->set_prefixForXmlNs_18(L_26);
		}

IL_00db:
		{
			__this->set_specialAttr_17(3);
			goto IL_01a0;
		}

IL_00e7:
		{
			String_t* L_27 = ___prefix0;
			if (L_27)
			{
				goto IL_0127;
			}
		}

IL_00ea:
		{
			String_t* L_28 = ___localName1;
			bool L_29 = String_op_Equality_m920492651(NULL /*static, unused*/, L_28, _stringLiteral3929236445, /*hidden argument*/NULL);
			if (!L_29)
			{
				goto IL_0127;
			}
		}

IL_00f7:
		{
			String_t* L_30 = ___ns2;
			bool L_31 = String_op_Inequality_m215368492(NULL /*static, unused*/, _stringLiteral2829469855, L_30, /*hidden argument*/NULL);
			if (!L_31)
			{
				goto IL_0117;
			}
		}

IL_0104:
		{
			String_t* L_32 = ___ns2;
			if (!L_32)
			{
				goto IL_0117;
			}
		}

IL_0107:
		{
			String_t* L_33 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral175581707, /*hidden argument*/NULL);
			ArgumentException_t132251570 * L_34 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m1312628991(L_34, L_33, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, NULL, XmlTextWriter_WriteStartAttribute_m796971626_RuntimeMethod_var);
		}

IL_0117:
		{
			__this->set_specialAttr_17(3);
			__this->set_prefixForXmlNs_18((String_t*)NULL);
			goto IL_01a0;
		}

IL_0127:
		{
			String_t* L_35 = ___ns2;
			if (L_35)
			{
				goto IL_0147;
			}
		}

IL_012a:
		{
			String_t* L_36 = ___prefix0;
			if (!L_36)
			{
				goto IL_01a0;
			}
		}

IL_012d:
		{
			String_t* L_37 = ___prefix0;
			int32_t L_38 = XmlTextWriter_LookupNamespace_m3389725513(__this, L_37, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_38) == ((uint32_t)(-1)))))
			{
				goto IL_01a0;
			}
		}

IL_0137:
		{
			String_t* L_39 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral2821368693, /*hidden argument*/NULL);
			ArgumentException_t132251570 * L_40 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m1312628991(L_40, L_39, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, NULL, XmlTextWriter_WriteStartAttribute_m796971626_RuntimeMethod_var);
		}

IL_0147:
		{
			String_t* L_41 = ___ns2;
			NullCheck(L_41);
			int32_t L_42 = String_get_Length_m3847582255(L_41, /*hidden argument*/NULL);
			if (L_42)
			{
				goto IL_0158;
			}
		}

IL_014f:
		{
			String_t* L_43 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			___prefix0 = L_43;
			goto IL_01a0;
		}

IL_0158:
		{
			String_t* L_44 = ___prefix0;
			String_t* L_45 = ___ns2;
			XmlTextWriter_VerifyPrefixXml_m3875935888(__this, L_44, L_45, /*hidden argument*/NULL);
			String_t* L_46 = ___prefix0;
			if (!L_46)
			{
				goto IL_0170;
			}
		}

IL_0163:
		{
			String_t* L_47 = ___prefix0;
			int32_t L_48 = XmlTextWriter_LookupNamespaceInCurrentScope_m855670366(__this, L_47, /*hidden argument*/NULL);
			if ((((int32_t)L_48) == ((int32_t)(-1))))
			{
				goto IL_0170;
			}
		}

IL_016d:
		{
			___prefix0 = (String_t*)NULL;
		}

IL_0170:
		{
			String_t* L_49 = ___ns2;
			String_t* L_50 = XmlTextWriter_FindPrefix_m1620482724(__this, L_49, /*hidden argument*/NULL);
			V_0 = L_50;
			String_t* L_51 = V_0;
			if (!L_51)
			{
				goto IL_018c;
			}
		}

IL_017b:
		{
			String_t* L_52 = ___prefix0;
			if (!L_52)
			{
				goto IL_0187;
			}
		}

IL_017e:
		{
			String_t* L_53 = ___prefix0;
			String_t* L_54 = V_0;
			bool L_55 = String_op_Equality_m920492651(NULL /*static, unused*/, L_53, L_54, /*hidden argument*/NULL);
			if (!L_55)
			{
				goto IL_018c;
			}
		}

IL_0187:
		{
			String_t* L_56 = V_0;
			___prefix0 = L_56;
			goto IL_01a0;
		}

IL_018c:
		{
			String_t* L_57 = ___prefix0;
			if (L_57)
			{
				goto IL_0197;
			}
		}

IL_018f:
		{
			String_t* L_58 = XmlTextWriter_GeneratePrefix_m3218539683(__this, /*hidden argument*/NULL);
			___prefix0 = L_58;
		}

IL_0197:
		{
			String_t* L_59 = ___prefix0;
			String_t* L_60 = ___ns2;
			XmlTextWriter_PushNamespace_m1850895031(__this, L_59, L_60, (bool)0, /*hidden argument*/NULL);
		}

IL_01a0:
		{
			String_t* L_61 = ___prefix0;
			if (!L_61)
			{
				goto IL_0216;
			}
		}

IL_01a3:
		{
			String_t* L_62 = ___prefix0;
			NullCheck(L_62);
			int32_t L_63 = String_get_Length_m3847582255(L_62, /*hidden argument*/NULL);
			if (!L_63)
			{
				goto IL_0216;
			}
		}

IL_01ab:
		{
			TextWriter_t3478189236 * L_64 = __this->get_textWriter_1();
			String_t* L_65 = ___prefix0;
			NullCheck(L_64);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_64, L_65);
			TextWriter_t3478189236 * L_66 = __this->get_textWriter_1();
			NullCheck(L_66);
			VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_66, ((int32_t)58));
			goto IL_0216;
		}

IL_01c6:
		{
			String_t* L_67 = ___ns2;
			if (!L_67)
			{
				goto IL_01d1;
			}
		}

IL_01c9:
		{
			String_t* L_68 = ___ns2;
			NullCheck(L_68);
			int32_t L_69 = String_get_Length_m3847582255(L_68, /*hidden argument*/NULL);
			if (L_69)
			{
				goto IL_01dc;
			}
		}

IL_01d1:
		{
			String_t* L_70 = ___prefix0;
			if (!L_70)
			{
				goto IL_01ec;
			}
		}

IL_01d4:
		{
			String_t* L_71 = ___prefix0;
			NullCheck(L_71);
			int32_t L_72 = String_get_Length_m3847582255(L_71, /*hidden argument*/NULL);
			if (!L_72)
			{
				goto IL_01ec;
			}
		}

IL_01dc:
		{
			String_t* L_73 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral300414924, /*hidden argument*/NULL);
			ArgumentException_t132251570 * L_74 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m1312628991(L_74, L_73, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_74, NULL, XmlTextWriter_WriteStartAttribute_m796971626_RuntimeMethod_var);
		}

IL_01ec:
		{
			String_t* L_75 = ___localName1;
			bool L_76 = String_op_Equality_m920492651(NULL /*static, unused*/, L_75, _stringLiteral3559080196, /*hidden argument*/NULL);
			if (!L_76)
			{
				goto IL_0202;
			}
		}

IL_01f9:
		{
			__this->set_specialAttr_17(2);
			goto IL_0216;
		}

IL_0202:
		{
			String_t* L_77 = ___localName1;
			bool L_78 = String_op_Equality_m920492651(NULL /*static, unused*/, L_77, _stringLiteral1942376246, /*hidden argument*/NULL);
			if (!L_78)
			{
				goto IL_0216;
			}
		}

IL_020f:
		{
			__this->set_specialAttr_17(1);
		}

IL_0216:
		{
			XmlTextEncoder_t1632274355 * L_79 = __this->get_xmlEncoder_2();
			int32_t L_80 = __this->get_specialAttr_17();
			NullCheck(L_79);
			XmlTextEncoder_StartAttribute_m1072751347(L_79, (bool)((!(((uint32_t)L_80) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
			TextWriter_t3478189236 * L_81 = __this->get_textWriter_1();
			String_t* L_82 = ___localName1;
			NullCheck(L_81);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_81, L_82);
			TextWriter_t3478189236 * L_83 = __this->get_textWriter_1();
			NullCheck(L_83);
			VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_83, ((int32_t)61));
			Il2CppChar L_84 = __this->get_curQuoteChar_15();
			Il2CppChar L_85 = __this->get_quoteChar_14();
			if ((((int32_t)L_84) == ((int32_t)L_85)))
			{
				goto IL_026e;
			}
		}

IL_0251:
		{
			Il2CppChar L_86 = __this->get_quoteChar_14();
			__this->set_curQuoteChar_15(L_86);
			XmlTextEncoder_t1632274355 * L_87 = __this->get_xmlEncoder_2();
			Il2CppChar L_88 = __this->get_quoteChar_14();
			NullCheck(L_87);
			XmlTextEncoder_set_QuoteChar_m3704929252(L_87, L_88, /*hidden argument*/NULL);
		}

IL_026e:
		{
			TextWriter_t3478189236 * L_89 = __this->get_textWriter_1();
			Il2CppChar L_90 = __this->get_curQuoteChar_15();
			NullCheck(L_89);
			VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_89, L_90);
			goto IL_028b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0281;
		throw e;
	}

CATCH_0281:
	{ // begin catch(System.Object)
		__this->set_currentState_11(8);
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, XmlTextWriter_WriteStartAttribute_m796971626_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_028b:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndAttribute()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteEndAttribute_m380495009 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteEndAttribute_m380495009_MetadataUsageId);
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
		XmlTextWriter_AutoComplete_m1937294162(__this, 8, /*hidden argument*/NULL);
		goto IL_0013;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0009;
		throw e;
	}

CATCH_0009:
	{ // begin catch(System.Object)
		__this->set_currentState_11(8);
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, XmlTextWriter_WriteEndAttribute_m380495009_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0013:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteCData(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteCData_m644505252 (XmlTextWriter_t2114213153 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteCData_m644505252_MetadataUsageId);
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
			XmlTextWriter_AutoComplete_m1937294162(__this, 3, /*hidden argument*/NULL);
			String_t* L_0 = ___text0;
			if (!L_0)
			{
				goto IL_0029;
			}
		}

IL_000a:
		{
			String_t* L_1 = ___text0;
			NullCheck(L_1);
			int32_t L_2 = String_IndexOf_m1298810678(L_1, _stringLiteral1918332503, 4, /*hidden argument*/NULL);
			if ((((int32_t)L_2) < ((int32_t)0)))
			{
				goto IL_0029;
			}
		}

IL_0019:
		{
			String_t* L_3 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral515442337, /*hidden argument*/NULL);
			ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m1312628991(L_4, L_3, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlTextWriter_WriteCData_m644505252_RuntimeMethod_var);
		}

IL_0029:
		{
			TextWriter_t3478189236 * L_5 = __this->get_textWriter_1();
			NullCheck(L_5);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_5, _stringLiteral191191352);
			String_t* L_6 = ___text0;
			if (!L_6)
			{
				goto IL_0048;
			}
		}

IL_003c:
		{
			XmlTextEncoder_t1632274355 * L_7 = __this->get_xmlEncoder_2();
			String_t* L_8 = ___text0;
			NullCheck(L_7);
			XmlTextEncoder_WriteRawWithSurrogateChecking_m1404644674(L_7, L_8, /*hidden argument*/NULL);
		}

IL_0048:
		{
			TextWriter_t3478189236 * L_9 = __this->get_textWriter_1();
			NullCheck(L_9);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_9, _stringLiteral1918332503);
			goto IL_0064;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_005a;
		throw e;
	}

CATCH_005a:
	{ // begin catch(System.Object)
		__this->set_currentState_11(8);
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, XmlTextWriter_WriteCData_m644505252_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0064:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteComment(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteComment_m3551275356 (XmlTextWriter_t2114213153 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteComment_m3551275356_MetadataUsageId);
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
			String_t* L_0 = ___text0;
			if (!L_0)
			{
				goto IL_003c;
			}
		}

IL_0003:
		{
			String_t* L_1 = ___text0;
			NullCheck(L_1);
			int32_t L_2 = String_IndexOf_m1298810678(L_1, _stringLiteral3450713987, 4, /*hidden argument*/NULL);
			if ((((int32_t)L_2) >= ((int32_t)0)))
			{
				goto IL_002c;
			}
		}

IL_0012:
		{
			String_t* L_3 = ___text0;
			NullCheck(L_3);
			int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_003c;
			}
		}

IL_001a:
		{
			String_t* L_5 = ___text0;
			String_t* L_6 = ___text0;
			NullCheck(L_6);
			int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
			NullCheck(L_5);
			Il2CppChar L_8 = String_get_Chars_m2986988803(L_5, ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)), /*hidden argument*/NULL);
			if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)45)))))
			{
				goto IL_003c;
			}
		}

IL_002c:
		{
			String_t* L_9 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral3261264283, /*hidden argument*/NULL);
			ArgumentException_t132251570 * L_10 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m1312628991(L_10, L_9, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, XmlTextWriter_WriteComment_m3551275356_RuntimeMethod_var);
		}

IL_003c:
		{
			XmlTextWriter_AutoComplete_m1937294162(__this, 2, /*hidden argument*/NULL);
			TextWriter_t3478189236 * L_11 = __this->get_textWriter_1();
			NullCheck(L_11);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, _stringLiteral792871693);
			String_t* L_12 = ___text0;
			if (!L_12)
			{
				goto IL_0062;
			}
		}

IL_0056:
		{
			XmlTextEncoder_t1632274355 * L_13 = __this->get_xmlEncoder_2();
			String_t* L_14 = ___text0;
			NullCheck(L_13);
			XmlTextEncoder_WriteRawWithSurrogateChecking_m1404644674(L_13, L_14, /*hidden argument*/NULL);
		}

IL_0062:
		{
			TextWriter_t3478189236 * L_15 = __this->get_textWriter_1();
			NullCheck(L_15);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_15, _stringLiteral1910992359);
			goto IL_007e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0074;
		throw e;
	}

CATCH_0074:
	{ // begin catch(System.Object)
		__this->set_currentState_11(8);
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, XmlTextWriter_WriteComment_m3551275356_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_007e:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteProcessingInstruction(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteProcessingInstruction_m1814082884 (XmlTextWriter_t2114213153 * __this, String_t* ___name0, String_t* ___text1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteProcessingInstruction_m1814082884_MetadataUsageId);
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
			String_t* L_0 = ___text1;
			if (!L_0)
			{
				goto IL_0022;
			}
		}

IL_0003:
		{
			String_t* L_1 = ___text1;
			NullCheck(L_1);
			int32_t L_2 = String_IndexOf_m1298810678(L_1, _stringLiteral3451697041, 4, /*hidden argument*/NULL);
			if ((((int32_t)L_2) < ((int32_t)0)))
			{
				goto IL_0022;
			}
		}

IL_0012:
		{
			String_t* L_3 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral25813508, /*hidden argument*/NULL);
			ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m1312628991(L_4, L_3, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlTextWriter_WriteProcessingInstruction_m1814082884_RuntimeMethod_var);
		}

IL_0022:
		{
			String_t* L_5 = ___name0;
			int32_t L_6 = String_Compare_m3203413707(NULL /*static, unused*/, L_5, _stringLiteral2909972470, 5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_004d;
			}
		}

IL_0030:
		{
			StateU5BU5D_t428546178* L_7 = __this->get_stateTable_10();
			IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
			StateU5BU5D_t428546178* L_8 = ((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->get_stateTableDocument_28();
			if ((!(((RuntimeObject*)(StateU5BU5D_t428546178*)L_7) == ((RuntimeObject*)(StateU5BU5D_t428546178*)L_8))))
			{
				goto IL_004d;
			}
		}

IL_003d:
		{
			String_t* L_9 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral127451004, /*hidden argument*/NULL);
			ArgumentException_t132251570 * L_10 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m1312628991(L_10, L_9, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, XmlTextWriter_WriteProcessingInstruction_m1814082884_RuntimeMethod_var);
		}

IL_004d:
		{
			XmlTextWriter_AutoComplete_m1937294162(__this, 0, /*hidden argument*/NULL);
			String_t* L_11 = ___name0;
			String_t* L_12 = ___text1;
			XmlTextWriter_InternalWriteProcessingInstruction_m2337169049(__this, L_11, L_12, /*hidden argument*/NULL);
			goto IL_0068;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_005e;
		throw e;
	}

CATCH_005e:
	{ // begin catch(System.Object)
		__this->set_currentState_11(8);
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, XmlTextWriter_WriteProcessingInstruction_m1814082884_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0068:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEntityRef(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteEntityRef_m586114214 (XmlTextWriter_t2114213153 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteEntityRef_m586114214_MetadataUsageId);
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
		String_t* L_0 = ___name0;
		XmlTextWriter_ValidateName_m909992142(__this, L_0, (bool)0, /*hidden argument*/NULL);
		XmlTextWriter_AutoComplete_m1937294162(__this, ((int32_t)9), /*hidden argument*/NULL);
		XmlTextEncoder_t1632274355 * L_1 = __this->get_xmlEncoder_2();
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		XmlTextEncoder_WriteEntityRef_m4202707380(L_1, L_2, /*hidden argument*/NULL);
		goto IL_0028;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001e;
		throw e;
	}

CATCH_001e:
	{ // begin catch(System.Object)
		__this->set_currentState_11(8);
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, XmlTextWriter_WriteEntityRef_m586114214_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0028:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteWhitespace(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteWhitespace_m1664061271 (XmlTextWriter_t2114213153 * __this, String_t* ___ws0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteWhitespace_m1664061271_MetadataUsageId);
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
			String_t* L_0 = ___ws0;
			if (L_0)
			{
				goto IL_000a;
			}
		}

IL_0003:
		{
			String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			___ws0 = L_1;
		}

IL_000a:
		{
			XmlCharType_t2277243275 * L_2 = __this->get_address_of_xmlCharType_24();
			String_t* L_3 = ___ws0;
			bool L_4 = XmlCharType_IsOnlyWhitespace_m1987284782((XmlCharType_t2277243275 *)L_2, L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0028;
			}
		}

IL_0018:
		{
			String_t* L_5 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral712752238, /*hidden argument*/NULL);
			ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m1312628991(L_6, L_5, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XmlTextWriter_WriteWhitespace_m1664061271_RuntimeMethod_var);
		}

IL_0028:
		{
			XmlTextWriter_AutoComplete_m1937294162(__this, ((int32_t)12), /*hidden argument*/NULL);
			XmlTextEncoder_t1632274355 * L_7 = __this->get_xmlEncoder_2();
			String_t* L_8 = ___ws0;
			NullCheck(L_7);
			XmlTextEncoder_Write_m1297523241(L_7, L_8, /*hidden argument*/NULL);
			goto IL_0048;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003e;
		throw e;
	}

CATCH_003e:
	{ // begin catch(System.Object)
		__this->set_currentState_11(8);
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, XmlTextWriter_WriteWhitespace_m1664061271_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0048:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteString(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteString_m406191177 (XmlTextWriter_t2114213153 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteString_m406191177_MetadataUsageId);
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
			String_t* L_0 = ___text0;
			if (!L_0)
			{
				goto IL_001f;
			}
		}

IL_0003:
		{
			String_t* L_1 = ___text0;
			NullCheck(L_1);
			int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_001f;
			}
		}

IL_000b:
		{
			XmlTextWriter_AutoComplete_m1937294162(__this, ((int32_t)9), /*hidden argument*/NULL);
			XmlTextEncoder_t1632274355 * L_3 = __this->get_xmlEncoder_2();
			String_t* L_4 = ___text0;
			NullCheck(L_3);
			XmlTextEncoder_Write_m1297523241(L_3, L_4, /*hidden argument*/NULL);
		}

IL_001f:
		{
			goto IL_002b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0021;
		throw e;
	}

CATCH_0021:
	{ // begin catch(System.Object)
		__this->set_currentState_11(8);
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, XmlTextWriter_WriteString_m406191177_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_002b:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteChars(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteChars_m3320946362 (XmlTextWriter_t2114213153 * __this, CharU5BU5D_t3528271667* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteChars_m3320946362_MetadataUsageId);
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
		XmlTextWriter_AutoComplete_m1937294162(__this, ((int32_t)9), /*hidden argument*/NULL);
		XmlTextEncoder_t1632274355 * L_0 = __this->get_xmlEncoder_2();
		CharU5BU5D_t3528271667* L_1 = ___buffer0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		XmlTextEncoder_Write_m1191048470(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		goto IL_0022;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0018;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.Object)
		__this->set_currentState_11(8);
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, XmlTextWriter_WriteChars_m3320946362_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0022:
	{
		return;
	}
}
// System.Xml.WriteState System.Xml.XmlTextWriter::get_WriteState()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextWriter_get_WriteState_m1424486110 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_currentState_11();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_0039;
			}
			case 2:
			{
				goto IL_0039;
			}
			case 3:
			{
				goto IL_003b;
			}
			case 4:
			{
				goto IL_003d;
			}
			case 5:
			{
				goto IL_003f;
			}
			case 6:
			{
				goto IL_003d;
			}
			case 7:
			{
				goto IL_003f;
			}
			case 8:
			{
				goto IL_0041;
			}
			case 9:
			{
				goto IL_0043;
			}
		}
	}
	{
		goto IL_0045;
	}

IL_0037:
	{
		return (int32_t)(0);
	}

IL_0039:
	{
		return (int32_t)(1);
	}

IL_003b:
	{
		return (int32_t)(2);
	}

IL_003d:
	{
		return (int32_t)(3);
	}

IL_003f:
	{
		return (int32_t)(4);
	}

IL_0041:
	{
		return (int32_t)(6);
	}

IL_0043:
	{
		return (int32_t)(5);
	}

IL_0045:
	{
		return (int32_t)(6);
	}
}
// System.Void System.Xml.XmlTextWriter::Close()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_Close_m3579947138 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_Close_m3579947138_MetadataUsageId);
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
		try
		{ // begin try (depth: 2)
			XmlTextWriter_AutoCompleteAll_m255244912(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x1F, FINALLY_000b);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0008;
			throw e;
		}

CATCH_0008:
		{ // begin catch(System.Object)
			IL2CPP_LEAVE(0x1F, FINALLY_000b);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		__this->set_currentState_11(((int32_t)9));
		TextWriter_t3478189236 * L_0 = __this->get_textWriter_1();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(8 /* System.Void System.IO.TextWriter::Close() */, L_0);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001f:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::AutoComplete(System.Xml.XmlTextWriter/Token)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_AutoComplete_m1937294162 (XmlTextWriter_t2114213153 * __this, int32_t ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_AutoComplete_m1937294162_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_currentState_11();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_1 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral2828667252, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_2 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XmlTextWriter_AutoComplete_m1937294162_RuntimeMethod_var);
	}

IL_001a:
	{
		int32_t L_3 = __this->get_currentState_11();
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_004d;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_4 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_5 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_6 = ((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->get_tokenName_26();
		int32_t L_7 = ___token0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = L_5;
		StringU5BU5D_t1281789340* L_11 = ((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->get_stateName_25();
		NullCheck(L_11);
		int32_t L_12 = 8;
		String_t* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_13);
		String_t* L_14 = Res_GetString_m2746634261(NULL /*static, unused*/, _stringLiteral380173303, L_10, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_15 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_15, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, XmlTextWriter_AutoComplete_m1937294162_RuntimeMethod_var);
	}

IL_004d:
	{
		StateU5BU5D_t428546178* L_16 = __this->get_stateTable_10();
		int32_t L_17 = ___token0;
		int32_t L_18 = __this->get_currentState_11();
		NullCheck(L_16);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)8)), (int32_t)L_18));
		int32_t L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_0 = L_20;
		int32_t L_21 = V_0;
		if ((!(((uint32_t)L_21) == ((uint32_t)8))))
		{
			goto IL_0092;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_22 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_23 = L_22;
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_24 = ((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->get_tokenName_26();
		int32_t L_25 = ___token0;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		String_t* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_27);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_27);
		ObjectU5BU5D_t2843939325* L_28 = L_23;
		StringU5BU5D_t1281789340* L_29 = ((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->get_stateName_25();
		int32_t L_30 = __this->get_currentState_11();
		NullCheck(L_29);
		int32_t L_31 = L_30;
		String_t* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_32);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_32);
		String_t* L_33 = Res_GetString_m2746634261(NULL /*static, unused*/, _stringLiteral380173303, L_28, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_34 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_34, L_33, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, NULL, XmlTextWriter_AutoComplete_m1937294162_RuntimeMethod_var);
	}

IL_0092:
	{
		int32_t L_35 = ___token0;
		switch (L_35)
		{
			case 0:
			{
				goto IL_00f3;
			}
			case 1:
			{
				goto IL_00d1;
			}
			case 2:
			{
				goto IL_00f3;
			}
			case 3:
			{
				goto IL_00f3;
			}
			case 4:
			{
				goto IL_00f3;
			}
			case 5:
			{
				goto IL_015d;
			}
			case 6:
			{
				goto IL_015d;
			}
			case 7:
			{
				goto IL_01b5;
			}
			case 8:
			{
				goto IL_01fc;
			}
			case 9:
			{
				goto IL_0212;
			}
			case 10:
			{
				goto IL_0212;
			}
			case 11:
			{
				goto IL_0212;
			}
			case 12:
			{
				goto IL_0212;
			}
		}
	}
	{
		goto IL_025c;
	}

IL_00d1:
	{
		bool L_36 = __this->get_indented_5();
		if (!L_36)
		{
			goto IL_026c;
		}
	}
	{
		int32_t L_37 = __this->get_currentState_11();
		if (!L_37)
		{
			goto IL_026c;
		}
	}
	{
		XmlTextWriter_Indent_m1528505517(__this, (bool)0, /*hidden argument*/NULL);
		goto IL_026c;
	}

IL_00f3:
	{
		int32_t L_38 = __this->get_currentState_11();
		if ((!(((uint32_t)L_38) == ((uint32_t)4))))
		{
			goto IL_010b;
		}
	}
	{
		XmlTextWriter_WriteEndAttributeQuote_m1793989567(__this, /*hidden argument*/NULL);
		XmlTextWriter_WriteEndStartTag_m844906772(__this, (bool)0, /*hidden argument*/NULL);
		goto IL_011b;
	}

IL_010b:
	{
		int32_t L_39 = __this->get_currentState_11();
		if ((!(((uint32_t)L_39) == ((uint32_t)3))))
		{
			goto IL_011b;
		}
	}
	{
		XmlTextWriter_WriteEndStartTag_m844906772(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_011b:
	{
		int32_t L_40 = ___token0;
		if ((!(((uint32_t)L_40) == ((uint32_t)3))))
		{
			goto IL_013b;
		}
	}
	{
		TagInfoU5BU5D_t2840723532* L_41 = __this->get_stack_8();
		int32_t L_42 = __this->get_top_9();
		NullCheck(L_41);
		((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->set_mixed_8((bool)1);
		goto IL_026c;
	}

IL_013b:
	{
		bool L_43 = __this->get_indented_5();
		if (!L_43)
		{
			goto IL_026c;
		}
	}
	{
		int32_t L_44 = __this->get_currentState_11();
		if (!L_44)
		{
			goto IL_026c;
		}
	}
	{
		XmlTextWriter_Indent_m1528505517(__this, (bool)0, /*hidden argument*/NULL);
		goto IL_026c;
	}

IL_015d:
	{
		bool L_45 = __this->get_flush_19();
		if (!L_45)
		{
			goto IL_016b;
		}
	}
	{
		XmlTextWriter_FlushEncoders_m2236282711(__this, /*hidden argument*/NULL);
	}

IL_016b:
	{
		int32_t L_46 = __this->get_currentState_11();
		if ((!(((uint32_t)L_46) == ((uint32_t)4))))
		{
			goto IL_017a;
		}
	}
	{
		XmlTextWriter_WriteEndAttributeQuote_m1793989567(__this, /*hidden argument*/NULL);
	}

IL_017a:
	{
		int32_t L_47 = __this->get_currentState_11();
		if ((!(((uint32_t)L_47) == ((uint32_t)5))))
		{
			goto IL_0188;
		}
	}
	{
		___token0 = 6;
		goto IL_0192;
	}

IL_0188:
	{
		int32_t L_48 = ___token0;
		XmlTextWriter_WriteEndStartTag_m844906772(__this, (bool)((((int32_t)L_48) == ((int32_t)5))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0192:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		StateU5BU5D_t428546178* L_49 = ((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->get_stateTableDocument_28();
		StateU5BU5D_t428546178* L_50 = __this->get_stateTable_10();
		if ((!(((RuntimeObject*)(StateU5BU5D_t428546178*)L_49) == ((RuntimeObject*)(StateU5BU5D_t428546178*)L_50))))
		{
			goto IL_026c;
		}
	}
	{
		int32_t L_51 = __this->get_top_9();
		if ((!(((uint32_t)L_51) == ((uint32_t)1))))
		{
			goto IL_026c;
		}
	}
	{
		V_0 = 7;
		goto IL_026c;
	}

IL_01b5:
	{
		bool L_52 = __this->get_flush_19();
		if (!L_52)
		{
			goto IL_01c3;
		}
	}
	{
		XmlTextWriter_FlushEncoders_m2236282711(__this, /*hidden argument*/NULL);
	}

IL_01c3:
	{
		int32_t L_53 = __this->get_currentState_11();
		if ((!(((uint32_t)L_53) == ((uint32_t)4))))
		{
			goto IL_01e4;
		}
	}
	{
		XmlTextWriter_WriteEndAttributeQuote_m1793989567(__this, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_54 = __this->get_textWriter_1();
		NullCheck(L_54);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_54, ((int32_t)32));
		goto IL_026c;
	}

IL_01e4:
	{
		int32_t L_55 = __this->get_currentState_11();
		if ((!(((uint32_t)L_55) == ((uint32_t)3))))
		{
			goto IL_026c;
		}
	}
	{
		TextWriter_t3478189236 * L_56 = __this->get_textWriter_1();
		NullCheck(L_56);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_56, ((int32_t)32));
		goto IL_026c;
	}

IL_01fc:
	{
		bool L_57 = __this->get_flush_19();
		if (!L_57)
		{
			goto IL_020a;
		}
	}
	{
		XmlTextWriter_FlushEncoders_m2236282711(__this, /*hidden argument*/NULL);
	}

IL_020a:
	{
		XmlTextWriter_WriteEndAttributeQuote_m1793989567(__this, /*hidden argument*/NULL);
		goto IL_026c;
	}

IL_0212:
	{
		int32_t L_58 = ___token0;
		if ((((int32_t)L_58) == ((int32_t)((int32_t)10))))
		{
			goto IL_0225;
		}
	}
	{
		bool L_59 = __this->get_flush_19();
		if (!L_59)
		{
			goto IL_0225;
		}
	}
	{
		XmlTextWriter_FlushEncoders_m2236282711(__this, /*hidden argument*/NULL);
	}

IL_0225:
	{
		int32_t L_60 = __this->get_currentState_11();
		if ((!(((uint32_t)L_60) == ((uint32_t)3))))
		{
			goto IL_023f;
		}
	}
	{
		int32_t L_61 = __this->get_lastToken_12();
		if ((((int32_t)L_61) == ((int32_t)((int32_t)9))))
		{
			goto IL_023f;
		}
	}
	{
		XmlTextWriter_WriteEndStartTag_m844906772(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_023f:
	{
		int32_t L_62 = V_0;
		if ((!(((uint32_t)L_62) == ((uint32_t)5))))
		{
			goto IL_026c;
		}
	}
	{
		TagInfoU5BU5D_t2840723532* L_63 = __this->get_stack_8();
		int32_t L_64 = __this->get_top_9();
		NullCheck(L_63);
		((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64)))->set_mixed_8((bool)1);
		goto IL_026c;
	}

IL_025c:
	{
		String_t* L_65 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral1829473371, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_66 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_66, L_65, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_66, NULL, XmlTextWriter_AutoComplete_m1937294162_RuntimeMethod_var);
	}

IL_026c:
	{
		int32_t L_67 = V_0;
		__this->set_currentState_11(L_67);
		int32_t L_68 = ___token0;
		__this->set_lastToken_12(L_68);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::AutoCompleteAll()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_AutoCompleteAll_m255244912 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_flush_19();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		XmlTextWriter_FlushEncoders_m2236282711(__this, /*hidden argument*/NULL);
		goto IL_0016;
	}

IL_0010:
	{
		VirtActionInvoker0::Invoke(7 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, __this);
	}

IL_0016:
	{
		int32_t L_1 = __this->get_top_9();
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::InternalWriteEndElement(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_InternalWriteEndElement_m1354321211 (XmlTextWriter_t2114213153 * __this, bool ___longFormat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_InternalWriteEndElement_m1354321211_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	XmlTextWriter_t2114213153 * G_B4_0 = NULL;
	XmlTextWriter_t2114213153 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	XmlTextWriter_t2114213153 * G_B5_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_top_9();
			if ((((int32_t)L_0) > ((int32_t)0)))
			{
				goto IL_0019;
			}
		}

IL_0009:
		{
			String_t* L_1 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral3658093331, /*hidden argument*/NULL);
			InvalidOperationException_t56020091 * L_2 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m237278729(L_2, L_1, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XmlTextWriter_InternalWriteEndElement_m1354321211_RuntimeMethod_var);
		}

IL_0019:
		{
			bool L_3 = ___longFormat0;
			G_B3_0 = __this;
			if (L_3)
			{
				G_B4_0 = __this;
				goto IL_0020;
			}
		}

IL_001d:
		{
			G_B5_0 = 5;
			G_B5_1 = G_B3_0;
			goto IL_0021;
		}

IL_0020:
		{
			G_B5_0 = 6;
			G_B5_1 = G_B4_0;
		}

IL_0021:
		{
			NullCheck(G_B5_1);
			XmlTextWriter_AutoComplete_m1937294162(G_B5_1, G_B5_0, /*hidden argument*/NULL);
			int32_t L_4 = __this->get_lastToken_12();
			if ((!(((uint32_t)L_4) == ((uint32_t)6))))
			{
				goto IL_00d7;
			}
		}

IL_0032:
		{
			bool L_5 = __this->get_indented_5();
			if (!L_5)
			{
				goto IL_0041;
			}
		}

IL_003a:
		{
			XmlTextWriter_Indent_m1528505517(__this, (bool)1, /*hidden argument*/NULL);
		}

IL_0041:
		{
			TextWriter_t3478189236 * L_6 = __this->get_textWriter_1();
			NullCheck(L_6);
			VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_6, ((int32_t)60));
			TextWriter_t3478189236 * L_7 = __this->get_textWriter_1();
			NullCheck(L_7);
			VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_7, ((int32_t)47));
			bool L_8 = __this->get_namespaces_16();
			if (!L_8)
			{
				goto IL_00a9;
			}
		}

IL_0063:
		{
			TagInfoU5BU5D_t2840723532* L_9 = __this->get_stack_8();
			int32_t L_10 = __this->get_top_9();
			NullCheck(L_9);
			String_t* L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->get_prefix_1();
			if (!L_11)
			{
				goto IL_00a9;
			}
		}

IL_007b:
		{
			TextWriter_t3478189236 * L_12 = __this->get_textWriter_1();
			TagInfoU5BU5D_t2840723532* L_13 = __this->get_stack_8();
			int32_t L_14 = __this->get_top_9();
			NullCheck(L_13);
			String_t* L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->get_prefix_1();
			NullCheck(L_12);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, L_15);
			TextWriter_t3478189236 * L_16 = __this->get_textWriter_1();
			NullCheck(L_16);
			VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_16, ((int32_t)58));
		}

IL_00a9:
		{
			TextWriter_t3478189236 * L_17 = __this->get_textWriter_1();
			TagInfoU5BU5D_t2840723532* L_18 = __this->get_stack_8();
			int32_t L_19 = __this->get_top_9();
			NullCheck(L_18);
			String_t* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_name_0();
			NullCheck(L_17);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_17, L_20);
			TextWriter_t3478189236 * L_21 = __this->get_textWriter_1();
			NullCheck(L_21);
			VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_21, ((int32_t)62));
		}

IL_00d7:
		{
			TagInfoU5BU5D_t2840723532* L_22 = __this->get_stack_8();
			int32_t L_23 = __this->get_top_9();
			NullCheck(L_22);
			int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->get_prevNsTop_6();
			V_0 = L_24;
			bool L_25 = __this->get_useNsHashtable_23();
			if (!L_25)
			{
				goto IL_010e;
			}
		}

IL_00f6:
		{
			int32_t L_26 = V_0;
			int32_t L_27 = __this->get_nsTop_21();
			if ((((int32_t)L_26) >= ((int32_t)L_27)))
			{
				goto IL_010e;
			}
		}

IL_00ff:
		{
			int32_t L_28 = V_0;
			int32_t L_29 = __this->get_nsTop_21();
			XmlTextWriter_PopNamespaces_m3917735882(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)), L_29, /*hidden argument*/NULL);
		}

IL_010e:
		{
			int32_t L_30 = V_0;
			__this->set_nsTop_21(L_30);
			int32_t L_31 = __this->get_top_9();
			__this->set_top_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1)));
			goto IL_012f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0125;
		throw e;
	}

CATCH_0125:
	{ // begin catch(System.Object)
		__this->set_currentState_11(8);
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, XmlTextWriter_InternalWriteEndElement_m1354321211_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_012f:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndStartTag(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteEndStartTag_m844906772 (XmlTextWriter_t2114213153 * __this, bool ___empty0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteEndStartTag_m844906772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		XmlTextEncoder_t1632274355 * L_0 = __this->get_xmlEncoder_2();
		NullCheck(L_0);
		XmlTextEncoder_StartAttribute_m1072751347(L_0, (bool)0, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_nsTop_21();
		V_0 = L_1;
		goto IL_00b6;
	}

IL_0018:
	{
		NamespaceU5BU5D_t4259279085* L_2 = __this->get_nsStack_20();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		bool L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->get_declared_2();
		if (L_4)
		{
			goto IL_00b2;
		}
	}
	{
		TextWriter_t3478189236 * L_5 = __this->get_textWriter_1();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_5, _stringLiteral2787691749);
		TextWriter_t3478189236 * L_6 = __this->get_textWriter_1();
		NullCheck(L_6);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_6, ((int32_t)58));
		TextWriter_t3478189236 * L_7 = __this->get_textWriter_1();
		NamespaceU5BU5D_t4259279085* L_8 = __this->get_nsStack_20();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		String_t* L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->get_prefix_0();
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, L_10);
		TextWriter_t3478189236 * L_11 = __this->get_textWriter_1();
		NullCheck(L_11);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_11, ((int32_t)61));
		TextWriter_t3478189236 * L_12 = __this->get_textWriter_1();
		Il2CppChar L_13 = __this->get_quoteChar_14();
		NullCheck(L_12);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_12, L_13);
		XmlTextEncoder_t1632274355 * L_14 = __this->get_xmlEncoder_2();
		NamespaceU5BU5D_t4259279085* L_15 = __this->get_nsStack_20();
		int32_t L_16 = V_0;
		NullCheck(L_15);
		String_t* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->get_ns_1();
		NullCheck(L_14);
		XmlTextEncoder_Write_m1297523241(L_14, L_17, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_18 = __this->get_textWriter_1();
		Il2CppChar L_19 = __this->get_quoteChar_14();
		NullCheck(L_18);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_18, L_19);
	}

IL_00b2:
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1));
	}

IL_00b6:
	{
		int32_t L_21 = V_0;
		TagInfoU5BU5D_t2840723532* L_22 = __this->get_stack_8();
		int32_t L_23 = __this->get_top_9();
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->get_prevNsTop_6();
		if ((((int32_t)L_21) > ((int32_t)L_24)))
		{
			goto IL_0018;
		}
	}
	{
		TagInfoU5BU5D_t2840723532* L_25 = __this->get_stack_8();
		int32_t L_26 = __this->get_top_9();
		NullCheck(L_25);
		String_t* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->get_defaultNs_2();
		TagInfoU5BU5D_t2840723532* L_28 = __this->get_stack_8();
		int32_t L_29 = __this->get_top_9();
		NullCheck(L_28);
		String_t* L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)))))->get_defaultNs_2();
		bool L_31 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_27, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_019a;
		}
	}
	{
		TagInfoU5BU5D_t2840723532* L_32 = __this->get_stack_8();
		int32_t L_33 = __this->get_top_9();
		NullCheck(L_32);
		int32_t L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->get_defaultNsState_3();
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_019a;
		}
	}
	{
		TextWriter_t3478189236 * L_35 = __this->get_textWriter_1();
		NullCheck(L_35);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_35, _stringLiteral2787691749);
		TextWriter_t3478189236 * L_36 = __this->get_textWriter_1();
		NullCheck(L_36);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_36, ((int32_t)61));
		TextWriter_t3478189236 * L_37 = __this->get_textWriter_1();
		Il2CppChar L_38 = __this->get_quoteChar_14();
		NullCheck(L_37);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_37, L_38);
		XmlTextEncoder_t1632274355 * L_39 = __this->get_xmlEncoder_2();
		TagInfoU5BU5D_t2840723532* L_40 = __this->get_stack_8();
		int32_t L_41 = __this->get_top_9();
		NullCheck(L_40);
		String_t* L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->get_defaultNs_2();
		NullCheck(L_39);
		XmlTextEncoder_Write_m1297523241(L_39, L_42, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_43 = __this->get_textWriter_1();
		Il2CppChar L_44 = __this->get_quoteChar_14();
		NullCheck(L_43);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_43, L_44);
		TagInfoU5BU5D_t2840723532* L_45 = __this->get_stack_8();
		int32_t L_46 = __this->get_top_9();
		NullCheck(L_45);
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->set_defaultNsState_3(3);
	}

IL_019a:
	{
		XmlTextEncoder_t1632274355 * L_47 = __this->get_xmlEncoder_2();
		NullCheck(L_47);
		XmlTextEncoder_EndAttribute_m3127216117(L_47, /*hidden argument*/NULL);
		bool L_48 = ___empty0;
		if (!L_48)
		{
			goto IL_01b8;
		}
	}
	{
		TextWriter_t3478189236 * L_49 = __this->get_textWriter_1();
		NullCheck(L_49);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_49, _stringLiteral3450582912);
	}

IL_01b8:
	{
		TextWriter_t3478189236 * L_50 = __this->get_textWriter_1();
		NullCheck(L_50);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_50, ((int32_t)62));
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndAttributeQuote()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteEndAttributeQuote_m1793989567 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_specialAttr_17();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		XmlTextWriter_HandleSpecialAttribute_m4129581347(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		XmlTextEncoder_t1632274355 * L_1 = __this->get_xmlEncoder_2();
		NullCheck(L_1);
		XmlTextEncoder_EndAttribute_m3127216117(L_1, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_2 = __this->get_textWriter_1();
		Il2CppChar L_3 = __this->get_curQuoteChar_15();
		NullCheck(L_2);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_2, L_3);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::Indent(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_Indent_m1528505517 (XmlTextWriter_t2114213153 * __this, bool ___beforeEndElement0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = __this->get_top_9();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		TextWriter_t3478189236 * L_1 = __this->get_textWriter_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(16 /* System.Void System.IO.TextWriter::WriteLine() */, L_1);
		return;
	}

IL_0014:
	{
		TagInfoU5BU5D_t2840723532* L_2 = __this->get_stack_8();
		int32_t L_3 = __this->get_top_9();
		NullCheck(L_2);
		bool L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->get_mixed_8();
		if (L_4)
		{
			goto IL_006f;
		}
	}
	{
		TextWriter_t3478189236 * L_5 = __this->get_textWriter_1();
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(16 /* System.Void System.IO.TextWriter::WriteLine() */, L_5);
		bool L_6 = ___beforeEndElement0;
		if (L_6)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = __this->get_top_9();
		G_B6_0 = L_7;
		goto IL_004a;
	}

IL_0042:
	{
		int32_t L_8 = __this->get_top_9();
		G_B6_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
	}

IL_004a:
	{
		V_0 = G_B6_0;
		int32_t L_9 = V_0;
		int32_t L_10 = __this->get_indentation_6();
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)L_10));
		goto IL_006b;
	}

IL_0056:
	{
		TextWriter_t3478189236 * L_11 = __this->get_textWriter_1();
		Il2CppChar L_12 = __this->get_indentChar_7();
		NullCheck(L_11);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_11, L_12);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_0056;
		}
	}

IL_006f:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::PushNamespace(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_PushNamespace_m1850895031 (XmlTextWriter_t2114213153 * __this, String_t* ___prefix0, String_t* ___ns1, bool ___declared2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_PushNamespace_m1850895031_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TagInfo_t3526638417 * G_B9_0 = NULL;
	TagInfo_t3526638417 * G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	TagInfo_t3526638417 * G_B10_1 = NULL;
	{
		String_t* L_0 = ___ns1;
		bool L_1 = String_op_Equality_m920492651(NULL /*static, unused*/, _stringLiteral2829469855, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_2 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral227014553, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, XmlTextWriter_PushNamespace_m1850895031_RuntimeMethod_var);
	}

IL_001d:
	{
		String_t* L_4 = ___prefix0;
		if (L_4)
		{
			goto IL_0075;
		}
	}
	{
		TagInfoU5BU5D_t2840723532* L_5 = __this->get_stack_8();
		int32_t L_6 = __this->get_top_9();
		NullCheck(L_5);
		int32_t L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_defaultNsState_3();
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) > ((uint32_t)1))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)2)))
		{
			goto IL_0057;
		}
	}
	{
		return;
	}

IL_0040:
	{
		TagInfoU5BU5D_t2840723532* L_10 = __this->get_stack_8();
		int32_t L_11 = __this->get_top_9();
		NullCheck(L_10);
		String_t* L_12 = ___ns1;
		((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->set_defaultNs_2(L_12);
	}

IL_0057:
	{
		TagInfoU5BU5D_t2840723532* L_13 = __this->get_stack_8();
		int32_t L_14 = __this->get_top_9();
		NullCheck(L_13);
		bool L_15 = ___declared2;
		G_B8_0 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		if (L_15)
		{
			G_B9_0 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
			goto IL_006e;
		}
	}
	{
		G_B10_0 = 2;
		G_B10_1 = G_B8_0;
		goto IL_006f;
	}

IL_006e:
	{
		G_B10_0 = 3;
		G_B10_1 = G_B9_0;
	}

IL_006f:
	{
		G_B10_1->set_defaultNsState_3(G_B10_0);
		return;
	}

IL_0075:
	{
		String_t* L_16 = ___prefix0;
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m3847582255(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0095;
		}
	}
	{
		String_t* L_18 = ___ns1;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m3847582255(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0095;
		}
	}
	{
		String_t* L_20 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral635897680, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_21 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_21, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, NULL, XmlTextWriter_PushNamespace_m1850895031_RuntimeMethod_var);
	}

IL_0095:
	{
		String_t* L_22 = ___prefix0;
		int32_t L_23 = XmlTextWriter_LookupNamespace_m3389725513(__this, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)(-1))))
		{
			goto IL_00d0;
		}
	}
	{
		NamespaceU5BU5D_t4259279085* L_25 = __this->get_nsStack_20();
		int32_t L_26 = V_1;
		NullCheck(L_25);
		String_t* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->get_ns_1();
		String_t* L_28 = ___ns1;
		bool L_29 = String_op_Equality_m920492651(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00d0;
		}
	}
	{
		bool L_30 = ___declared2;
		if (!L_30)
		{
			goto IL_010b;
		}
	}
	{
		NamespaceU5BU5D_t4259279085* L_31 = __this->get_nsStack_20();
		int32_t L_32 = V_1;
		NullCheck(L_31);
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->set_declared_2((bool)1);
		return;
	}

IL_00d0:
	{
		bool L_33 = ___declared2;
		if (!L_33)
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_34 = V_1;
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_35 = V_1;
		TagInfoU5BU5D_t2840723532* L_36 = __this->get_stack_8();
		int32_t L_37 = __this->get_top_9();
		NullCheck(L_36);
		int32_t L_38 = ((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->get_prevNsTop_6();
		if ((((int32_t)L_35) <= ((int32_t)L_38)))
		{
			goto IL_0102;
		}
	}
	{
		NamespaceU5BU5D_t4259279085* L_39 = __this->get_nsStack_20();
		int32_t L_40 = V_1;
		NullCheck(L_39);
		((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->set_declared_2((bool)1);
	}

IL_0102:
	{
		String_t* L_41 = ___prefix0;
		String_t* L_42 = ___ns1;
		bool L_43 = ___declared2;
		XmlTextWriter_AddNamespace_m2720473980(__this, L_41, L_42, L_43, /*hidden argument*/NULL);
	}

IL_010b:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::AddNamespace(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_AddNamespace_m2720473980 (XmlTextWriter_t2114213153 * __this, String_t* ___prefix0, String_t* ___ns1, bool ___declared2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_AddNamespace_m2720473980_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	NamespaceU5BU5D_t4259279085* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_nsTop_21();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_1;
		__this->set_nsTop_21(L_1);
		int32_t L_2 = V_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		NamespaceU5BU5D_t4259279085* L_4 = __this->get_nsStack_20();
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_5 = V_0;
		NamespaceU5BU5D_t4259279085* L_6 = (NamespaceU5BU5D_t4259279085*)SZArrayNew(NamespaceU5BU5D_t4259279085_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)2)));
		V_2 = L_6;
		NamespaceU5BU5D_t4259279085* L_7 = __this->get_nsStack_20();
		NamespaceU5BU5D_t4259279085* L_8 = V_2;
		int32_t L_9 = V_0;
		Array_Copy_m1988217701(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_7, (RuntimeArray *)(RuntimeArray *)L_8, L_9, /*hidden argument*/NULL);
		NamespaceU5BU5D_t4259279085* L_10 = V_2;
		__this->set_nsStack_20(L_10);
	}

IL_003a:
	{
		NamespaceU5BU5D_t4259279085* L_11 = __this->get_nsStack_20();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		String_t* L_13 = ___prefix0;
		String_t* L_14 = ___ns1;
		bool L_15 = ___declared2;
		Namespace_Set_m817238856((Namespace_t2218256516 *)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), L_13, L_14, L_15, /*hidden argument*/NULL);
		bool L_16 = __this->get_useNsHashtable_23();
		if (!L_16)
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_17 = V_0;
		XmlTextWriter_AddToNamespaceHashtable_m1294370216(__this, L_17, /*hidden argument*/NULL);
		return;
	}

IL_005e:
	{
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_008d;
		}
	}
	{
		SecureStringHasher_t95812985 * L_19 = (SecureStringHasher_t95812985 *)il2cpp_codegen_object_new(SecureStringHasher_t95812985_il2cpp_TypeInfo_var);
		SecureStringHasher__ctor_m813418698(L_19, /*hidden argument*/NULL);
		Dictionary_2_t2736202052 * L_20 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m626081792(L_20, L_19, /*hidden argument*/Dictionary_2__ctor_m626081792_RuntimeMethod_var);
		__this->set_nsHashtable_22(L_20);
		V_3 = 0;
		goto IL_0082;
	}

IL_0077:
	{
		int32_t L_21 = V_3;
		XmlTextWriter_AddToNamespaceHashtable_m1294370216(__this, L_21, /*hidden argument*/NULL);
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0082:
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) <= ((int32_t)L_24)))
		{
			goto IL_0077;
		}
	}
	{
		__this->set_useNsHashtable_23((bool)1);
	}

IL_008d:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::AddToNamespaceHashtable(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_AddToNamespaceHashtable_m1294370216 (XmlTextWriter_t2114213153 * __this, int32_t ___namespaceIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_AddToNamespaceHashtable_m1294370216_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		NamespaceU5BU5D_t4259279085* L_0 = __this->get_nsStack_20();
		int32_t L_1 = ___namespaceIndex0;
		NullCheck(L_0);
		String_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_prefix_0();
		V_0 = L_2;
		Dictionary_2_t2736202052 * L_3 = __this->get_nsHashtable_22();
		String_t* L_4 = V_0;
		NullCheck(L_3);
		bool L_5 = Dictionary_2_TryGetValue_m1013208020(L_3, L_4, (int32_t*)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		NamespaceU5BU5D_t4259279085* L_6 = __this->get_nsStack_20();
		int32_t L_7 = ___namespaceIndex0;
		NullCheck(L_6);
		int32_t L_8 = V_1;
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->set_prevNsIndex_3(L_8);
	}

IL_0034:
	{
		Dictionary_2_t2736202052 * L_9 = __this->get_nsHashtable_22();
		String_t* L_10 = V_0;
		int32_t L_11 = ___namespaceIndex0;
		NullCheck(L_9);
		Dictionary_2_set_Item_m4248307107(L_9, L_10, L_11, /*hidden argument*/Dictionary_2_set_Item_m4248307107_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::PopNamespaces(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_PopNamespaces_m3917735882 (XmlTextWriter_t2114213153 * __this, int32_t ___indexFrom0, int32_t ___indexTo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_PopNamespaces_m3917735882_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___indexTo1;
		V_0 = L_0;
		goto IL_0068;
	}

IL_0004:
	{
		NamespaceU5BU5D_t4259279085* L_1 = __this->get_nsStack_20();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_prevNsIndex_3();
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0037;
		}
	}
	{
		Dictionary_2_t2736202052 * L_4 = __this->get_nsHashtable_22();
		NamespaceU5BU5D_t4259279085* L_5 = __this->get_nsStack_20();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		String_t* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_prefix_0();
		NullCheck(L_4);
		Dictionary_2_Remove_m3684469573(L_4, L_7, /*hidden argument*/Dictionary_2_Remove_m3684469573_RuntimeMethod_var);
		goto IL_0064;
	}

IL_0037:
	{
		Dictionary_2_t2736202052 * L_8 = __this->get_nsHashtable_22();
		NamespaceU5BU5D_t4259279085* L_9 = __this->get_nsStack_20();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->get_prefix_0();
		NamespaceU5BU5D_t4259279085* L_12 = __this->get_nsStack_20();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->get_prevNsIndex_3();
		NullCheck(L_8);
		Dictionary_2_set_Item_m4248307107(L_8, L_11, L_14, /*hidden argument*/Dictionary_2_set_Item_m4248307107_RuntimeMethod_var);
	}

IL_0064:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
	}

IL_0068:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = ___indexFrom0;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.String System.Xml.XmlTextWriter::GeneratePrefix()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextWriter_GeneratePrefix_m3218539683 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_GeneratePrefix_m3218539683_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		TagInfoU5BU5D_t2840723532* L_0 = __this->get_stack_8();
		int32_t L_1 = __this->get_top_9();
		NullCheck(L_0);
		int32_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_address_of_prefixCount_7();
		int32_t* L_3 = L_2;
		V_1 = (*((int32_t*)L_3));
		int32_t L_4 = V_1;
		*((int32_t*)(L_3)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		int32_t L_5 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		int32_t* L_6 = __this->get_address_of_top_9();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_7 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_8 = Int32_ToString_m2507389746((int32_t*)L_6, _stringLiteral3452614588, L_7, /*hidden argument*/NULL);
		CultureInfo_t4157843068 * L_9 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_10 = Int32_ToString_m2507389746((int32_t*)(&V_0), _stringLiteral3452614588, L_9, /*hidden argument*/NULL);
		String_t* L_11 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral3452614588, L_8, _stringLiteral3452614608, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Void System.Xml.XmlTextWriter::InternalWriteProcessingInstruction(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_InternalWriteProcessingInstruction_m2337169049 (XmlTextWriter_t2114213153 * __this, String_t* ___name0, String_t* ___text1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_InternalWriteProcessingInstruction_m2337169049_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextWriter_t3478189236 * L_0 = __this->get_textWriter_1();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_0, _stringLiteral3451631508);
		String_t* L_1 = ___name0;
		XmlTextWriter_ValidateName_m909992142(__this, L_1, (bool)0, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_2 = __this->get_textWriter_1();
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_2, L_3);
		TextWriter_t3478189236 * L_4 = __this->get_textWriter_1();
		NullCheck(L_4);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_4, ((int32_t)32));
		String_t* L_5 = ___text1;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		XmlTextEncoder_t1632274355 * L_6 = __this->get_xmlEncoder_2();
		String_t* L_7 = ___text1;
		NullCheck(L_6);
		XmlTextEncoder_WriteRawWithSurrogateChecking_m1404644674(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0040:
	{
		TextWriter_t3478189236 * L_8 = __this->get_textWriter_1();
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, _stringLiteral3451697041);
		return;
	}
}
// System.Int32 System.Xml.XmlTextWriter::LookupNamespace(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextWriter_LookupNamespace_m3389725513 (XmlTextWriter_t2114213153 * __this, String_t* ___prefix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_LookupNamespace_m3389725513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->get_useNsHashtable_23();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Dictionary_2_t2736202052 * L_1 = __this->get_nsHashtable_22();
		String_t* L_2 = ___prefix0;
		NullCheck(L_1);
		bool L_3 = Dictionary_2_TryGetValue_m1013208020(L_1, L_2, (int32_t*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}

IL_001a:
	{
		int32_t L_5 = __this->get_nsTop_21();
		V_1 = L_5;
		goto IL_0042;
	}

IL_0023:
	{
		NamespaceU5BU5D_t4259279085* L_6 = __this->get_nsStack_20();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		String_t* L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->get_prefix_0();
		String_t* L_9 = ___prefix0;
		bool L_10 = String_op_Equality_m920492651(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_11 = V_1;
		return L_11;
	}

IL_003e:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}

IL_0046:
	{
		return (-1);
	}
}
// System.Int32 System.Xml.XmlTextWriter::LookupNamespaceInCurrentScope(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextWriter_LookupNamespaceInCurrentScope_m855670366 (XmlTextWriter_t2114213153 * __this, String_t* ___prefix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_LookupNamespaceInCurrentScope_m855670366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->get_useNsHashtable_23();
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		Dictionary_2_t2736202052 * L_1 = __this->get_nsHashtable_22();
		String_t* L_2 = ___prefix0;
		NullCheck(L_1);
		bool L_3 = Dictionary_2_TryGetValue_m1013208020(L_1, L_2, (int32_t*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_4 = V_0;
		TagInfoU5BU5D_t2840723532* L_5 = __this->get_stack_8();
		int32_t L_6 = __this->get_top_9();
		NullCheck(L_5);
		int32_t L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_prevNsTop_6();
		if ((((int32_t)L_4) <= ((int32_t)L_7)))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_8 = V_0;
		return L_8;
	}

IL_0033:
	{
		int32_t L_9 = __this->get_nsTop_21();
		V_1 = L_9;
		goto IL_005b;
	}

IL_003c:
	{
		NamespaceU5BU5D_t4259279085* L_10 = __this->get_nsStack_20();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		String_t* L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_prefix_0();
		String_t* L_13 = ___prefix0;
		bool L_14 = String_op_Equality_m920492651(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_15 = V_1;
		return L_15;
	}

IL_0057:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_17 = V_1;
		TagInfoU5BU5D_t2840723532* L_18 = __this->get_stack_8();
		int32_t L_19 = __this->get_top_9();
		NullCheck(L_18);
		int32_t L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_prevNsTop_6();
		if ((((int32_t)L_17) > ((int32_t)L_20)))
		{
			goto IL_003c;
		}
	}

IL_0074:
	{
		return (-1);
	}
}
// System.String System.Xml.XmlTextWriter::FindPrefix(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextWriter_FindPrefix_m1620482724 (XmlTextWriter_t2114213153 * __this, String_t* ___ns0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_nsTop_21();
		V_0 = L_0;
		goto IL_0052;
	}

IL_0009:
	{
		NamespaceU5BU5D_t4259279085* L_1 = __this->get_nsStack_20();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		String_t* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_ns_1();
		String_t* L_4 = ___ns0;
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		NamespaceU5BU5D_t4259279085* L_6 = __this->get_nsStack_20();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		String_t* L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->get_prefix_0();
		int32_t L_9 = XmlTextWriter_LookupNamespace_m3389725513(__this, L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004e;
		}
	}
	{
		NamespaceU5BU5D_t4259279085* L_11 = __this->get_nsStack_20();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		String_t* L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->get_prefix_0();
		return L_13;
	}

IL_004e:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
	}

IL_0052:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		return (String_t*)NULL;
	}
}
// System.Void System.Xml.XmlTextWriter::ValidateName(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_ValidateName_m909992142 (XmlTextWriter_t2114213153 * __this, String_t* ___name0, bool ___isNCName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_ValidateName_m909992142_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___name0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___name0;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}

IL_000b:
	{
		String_t* L_3 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral3751299867, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlTextWriter_ValidateName_m909992142_RuntimeMethod_var);
	}

IL_001b:
	{
		String_t* L_5 = ___name0;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m3847582255(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		bool L_7 = __this->get_namespaces_16();
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		V_1 = (-1);
		String_t* L_8 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(ValidateNames_t2360135496_il2cpp_TypeInfo_var);
		int32_t L_9 = ValidateNames_ParseNCName_m2778342383(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
	}

IL_0033:
	{
		int32_t L_10 = V_2;
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0038;
		}
	}
	{
		return;
	}

IL_0038:
	{
		String_t* L_12 = ___name0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Il2CppChar L_14 = String_get_Chars_m2986988803(L_12, L_13, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_006f;
		}
	}
	{
		bool L_15 = ___isNCName1;
		if (L_15)
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)(-1)))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_18 = V_2;
		int32_t L_19 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1))) >= ((int32_t)L_19)))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_20 = V_2;
		V_1 = L_20;
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		int32_t L_22 = V_2;
		String_t* L_23 = ___name0;
		int32_t L_24 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ValidateNames_t2360135496_il2cpp_TypeInfo_var);
		int32_t L_25 = ValidateNames_ParseNmtoken_m2721935771(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_25));
		goto IL_0033;
	}

IL_0066:
	{
		String_t* L_26 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(ValidateNames_t2360135496_il2cpp_TypeInfo_var);
		bool L_27 = ValidateNames_IsNameNoNamespaces_m2268138382(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_006f;
		}
	}
	{
		return;
	}

IL_006f:
	{
		ObjectU5BU5D_t2843939325* L_28 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_29 = L_28;
		String_t* L_30 = ___name0;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_30);
		String_t* L_31 = Res_GetString_m2746634261(NULL /*static, unused*/, _stringLiteral3318781820, L_29, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_32 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_32, L_31, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, NULL, XmlTextWriter_ValidateName_m909992142_RuntimeMethod_var);
	}
}
// System.Void System.Xml.XmlTextWriter::HandleSpecialAttribute()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_HandleSpecialAttribute_m4129581347 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_HandleSpecialAttribute_m4129581347_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		XmlTextEncoder_t1632274355 * L_0 = __this->get_xmlEncoder_2();
		NullCheck(L_0);
		String_t* L_1 = XmlTextEncoder_get_AttributeValue_m2873699297(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_specialAttr_17();
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0040;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_00ab;
			}
		}
	}
	{
		return;
	}

IL_0028:
	{
		TagInfoU5BU5D_t2840723532* L_4 = __this->get_stack_8();
		int32_t L_5 = __this->get_top_9();
		NullCheck(L_4);
		String_t* L_6 = V_0;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->set_xmlLang_5(L_6);
		return;
	}

IL_0040:
	{
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		String_t* L_8 = XmlConvert_TrimString_m3342457332(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9 = V_0;
		bool L_10 = String_op_Equality_m920492651(NULL /*static, unused*/, L_9, _stringLiteral1948332219, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		TagInfoU5BU5D_t2840723532* L_11 = __this->get_stack_8();
		int32_t L_12 = __this->get_top_9();
		NullCheck(L_11);
		((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->set_xmlSpace_4(1);
		return;
	}

IL_006c:
	{
		String_t* L_13 = V_0;
		bool L_14 = String_op_Equality_m920492651(NULL /*static, unused*/, L_13, _stringLiteral3137061838, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0091;
		}
	}
	{
		TagInfoU5BU5D_t2840723532* L_15 = __this->get_stack_8();
		int32_t L_16 = __this->get_top_9();
		NullCheck(L_15);
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->set_xmlSpace_4(2);
		return;
	}

IL_0091:
	{
		ObjectU5BU5D_t2843939325* L_17 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_18 = L_17;
		String_t* L_19 = V_0;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_19);
		String_t* L_20 = Res_GetString_m2746634261(NULL /*static, unused*/, _stringLiteral398961912, L_18, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_21 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_21, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, NULL, XmlTextWriter_HandleSpecialAttribute_m4129581347_RuntimeMethod_var);
	}

IL_00ab:
	{
		String_t* L_22 = __this->get_prefixForXmlNs_18();
		String_t* L_23 = V_0;
		XmlTextWriter_VerifyPrefixXml_m3875935888(__this, L_22, L_23, /*hidden argument*/NULL);
		String_t* L_24 = __this->get_prefixForXmlNs_18();
		String_t* L_25 = V_0;
		XmlTextWriter_PushNamespace_m1850895031(__this, L_24, L_25, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::VerifyPrefixXml(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_VerifyPrefixXml_m3875935888 (XmlTextWriter_t2114213153 * __this, String_t* ___prefix0, String_t* ___ns1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_VerifyPrefixXml_m3875935888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___prefix0;
		if (!L_0)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_1 = ___prefix0;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_3 = ___prefix0;
		NullCheck(L_3);
		Il2CppChar L_4 = String_get_Chars_m2986988803(L_3, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)120))))
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_5 = ___prefix0;
		NullCheck(L_5);
		Il2CppChar L_6 = String_get_Chars_m2986988803(L_5, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_006b;
		}
	}

IL_0022:
	{
		String_t* L_7 = ___prefix0;
		NullCheck(L_7);
		Il2CppChar L_8 = String_get_Chars_m2986988803(L_7, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)109))))
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_9 = ___prefix0;
		NullCheck(L_9);
		Il2CppChar L_10 = String_get_Chars_m2986988803(L_9, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_006b;
		}
	}

IL_0038:
	{
		String_t* L_11 = ___prefix0;
		NullCheck(L_11);
		Il2CppChar L_12 = String_get_Chars_m2986988803(L_11, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)108))))
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_13 = ___prefix0;
		NullCheck(L_13);
		Il2CppChar L_14 = String_get_Chars_m2986988803(L_13, 2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)76)))))
		{
			goto IL_006b;
		}
	}

IL_004e:
	{
		String_t* L_15 = ___ns1;
		bool L_16 = String_op_Inequality_m215368492(NULL /*static, unused*/, _stringLiteral2984480440, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_17 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral515958032, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_18 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_18, L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, XmlTextWriter_VerifyPrefixXml_m3875935888_RuntimeMethod_var);
	}

IL_006b:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::PushStack()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_PushStack_m2287986788 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_PushStack_m2287986788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TagInfoU5BU5D_t2840723532* V_0 = NULL;
	{
		int32_t L_0 = __this->get_top_9();
		TagInfoU5BU5D_t2840723532* L_1 = __this->get_stack_8();
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), (int32_t)1))))))
		{
			goto IL_0047;
		}
	}
	{
		TagInfoU5BU5D_t2840723532* L_2 = __this->get_stack_8();
		NullCheck(L_2);
		TagInfoU5BU5D_t2840723532* L_3 = (TagInfoU5BU5D_t2840723532*)SZArrayNew(TagInfoU5BU5D_t2840723532_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))), (int32_t)((int32_t)10))));
		V_0 = L_3;
		int32_t L_4 = __this->get_top_9();
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		TagInfoU5BU5D_t2840723532* L_5 = __this->get_stack_8();
		TagInfoU5BU5D_t2840723532* L_6 = V_0;
		int32_t L_7 = __this->get_top_9();
		Array_Copy_m1988217701(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_5, (RuntimeArray *)(RuntimeArray *)L_6, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0040:
	{
		TagInfoU5BU5D_t2840723532* L_8 = V_0;
		__this->set_stack_8(L_8);
	}

IL_0047:
	{
		int32_t L_9 = __this->get_top_9();
		__this->set_top_9(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		TagInfoU5BU5D_t2840723532* L_10 = __this->get_stack_8();
		int32_t L_11 = __this->get_top_9();
		NullCheck(L_10);
		int32_t L_12 = __this->get_nsTop_21();
		TagInfo_Init_m2043286854((TagInfo_t3526638417 *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::FlushEncoders()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_FlushEncoders_m2236282711 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		XmlTextWriterBase64Encoder_t4259465041 * L_0 = __this->get_base64Encoder_13();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		XmlTextWriterBase64Encoder_t4259465041 * L_1 = __this->get_base64Encoder_13();
		NullCheck(L_1);
		Base64Encoder_Flush_m923514476(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		__this->set_flush_19((bool)0);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::.cctor()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter__cctor_m1817862492 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter__cctor_m1817862492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_t1281789340* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral2707270972);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2707270972);
		StringU5BU5D_t1281789340* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral3938305162);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3938305162);
		StringU5BU5D_t1281789340* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3247522831);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3247522831);
		StringU5BU5D_t1281789340* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral4059541177);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral4059541177);
		StringU5BU5D_t1281789340* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral4158462482);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4158462482);
		StringU5BU5D_t1281789340* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1340994742);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral1340994742);
		StringU5BU5D_t1281789340* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral3987158284);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral3987158284);
		StringU5BU5D_t1281789340* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral445580989);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral445580989);
		StringU5BU5D_t1281789340* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral95344243);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral95344243);
		StringU5BU5D_t1281789340* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral3481649703);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral3481649703);
		((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->set_stateName_25(L_10);
		StringU5BU5D_t1281789340* L_11 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		StringU5BU5D_t1281789340* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral3457267696);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3457267696);
		StringU5BU5D_t1281789340* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral2577568443);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2577568443);
		StringU5BU5D_t1281789340* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral3796264707);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3796264707);
		StringU5BU5D_t1281789340* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral2359536473);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2359536473);
		StringU5BU5D_t1281789340* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral3498566577);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3498566577);
		StringU5BU5D_t1281789340* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral3333968179);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3333968179);
		StringU5BU5D_t1281789340* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral3788866564);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral3788866564);
		StringU5BU5D_t1281789340* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral2405474268);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral2405474268);
		StringU5BU5D_t1281789340* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral2352036316);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral2352036316);
		StringU5BU5D_t1281789340* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral1340994742);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral1340994742);
		StringU5BU5D_t1281789340* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral1645562609);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral1645562609);
		StringU5BU5D_t1281789340* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral3013553869);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral3013553869);
		StringU5BU5D_t1281789340* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral1557367511);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral1557367511);
		StringU5BU5D_t1281789340* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral3159092532);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral3159092532);
		((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->set_tokenName_26(L_25);
		StateU5BU5D_t428546178* L_26 = (StateU5BU5D_t428546178*)SZArrayNew(StateU5BU5D_t428546178_il2cpp_TypeInfo_var, (uint32_t)((int32_t)104));
		StateU5BU5D_t428546178* L_27 = L_26;
		RuntimeFieldHandle_t1871169219  L_28 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255362____B368804F0C6DAB083B253A6B106D0783D5C32E90_20_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_27, L_28, /*hidden argument*/NULL);
		((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->set_stateTableDefault_27(L_27);
		StateU5BU5D_t428546178* L_29 = (StateU5BU5D_t428546178*)SZArrayNew(StateU5BU5D_t428546178_il2cpp_TypeInfo_var, (uint32_t)((int32_t)104));
		StateU5BU5D_t428546178* L_30 = L_29;
		RuntimeFieldHandle_t1871169219  L_31 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255362____6A0D50D692745A6663128CD315B71079584F3E59_12_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_30, L_31, /*hidden argument*/NULL);
		((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->set_stateTableDocument_28(L_30);
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
// Conversion methods for marshalling of: System.Xml.XmlTextWriter/Namespace
extern "C" void Namespace_t2218256516_marshal_pinvoke(const Namespace_t2218256516& unmarshaled, Namespace_t2218256516_marshaled_pinvoke& marshaled)
{
	marshaled.___prefix_0 = il2cpp_codegen_marshal_string(unmarshaled.get_prefix_0());
	marshaled.___ns_1 = il2cpp_codegen_marshal_string(unmarshaled.get_ns_1());
	marshaled.___declared_2 = static_cast<int32_t>(unmarshaled.get_declared_2());
	marshaled.___prevNsIndex_3 = unmarshaled.get_prevNsIndex_3();
}
extern "C" void Namespace_t2218256516_marshal_pinvoke_back(const Namespace_t2218256516_marshaled_pinvoke& marshaled, Namespace_t2218256516& unmarshaled)
{
	unmarshaled.set_prefix_0(il2cpp_codegen_marshal_string_result(marshaled.___prefix_0));
	unmarshaled.set_ns_1(il2cpp_codegen_marshal_string_result(marshaled.___ns_1));
	bool unmarshaled_declared_temp_2 = false;
	unmarshaled_declared_temp_2 = static_cast<bool>(marshaled.___declared_2);
	unmarshaled.set_declared_2(unmarshaled_declared_temp_2);
	int32_t unmarshaled_prevNsIndex_temp_3 = 0;
	unmarshaled_prevNsIndex_temp_3 = marshaled.___prevNsIndex_3;
	unmarshaled.set_prevNsIndex_3(unmarshaled_prevNsIndex_temp_3);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlTextWriter/Namespace
extern "C" void Namespace_t2218256516_marshal_pinvoke_cleanup(Namespace_t2218256516_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___prefix_0);
	marshaled.___prefix_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___ns_1);
	marshaled.___ns_1 = NULL;
}
// Conversion methods for marshalling of: System.Xml.XmlTextWriter/Namespace
extern "C" void Namespace_t2218256516_marshal_com(const Namespace_t2218256516& unmarshaled, Namespace_t2218256516_marshaled_com& marshaled)
{
	marshaled.___prefix_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_prefix_0());
	marshaled.___ns_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_ns_1());
	marshaled.___declared_2 = static_cast<int32_t>(unmarshaled.get_declared_2());
	marshaled.___prevNsIndex_3 = unmarshaled.get_prevNsIndex_3();
}
extern "C" void Namespace_t2218256516_marshal_com_back(const Namespace_t2218256516_marshaled_com& marshaled, Namespace_t2218256516& unmarshaled)
{
	unmarshaled.set_prefix_0(il2cpp_codegen_marshal_bstring_result(marshaled.___prefix_0));
	unmarshaled.set_ns_1(il2cpp_codegen_marshal_bstring_result(marshaled.___ns_1));
	bool unmarshaled_declared_temp_2 = false;
	unmarshaled_declared_temp_2 = static_cast<bool>(marshaled.___declared_2);
	unmarshaled.set_declared_2(unmarshaled_declared_temp_2);
	int32_t unmarshaled_prevNsIndex_temp_3 = 0;
	unmarshaled_prevNsIndex_temp_3 = marshaled.___prevNsIndex_3;
	unmarshaled.set_prevNsIndex_3(unmarshaled_prevNsIndex_temp_3);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlTextWriter/Namespace
extern "C" void Namespace_t2218256516_marshal_com_cleanup(Namespace_t2218256516_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___prefix_0);
	marshaled.___prefix_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___ns_1);
	marshaled.___ns_1 = NULL;
}
// System.Void System.Xml.XmlTextWriter/Namespace::Set(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Namespace_Set_m817238856 (Namespace_t2218256516 * __this, String_t* ___prefix0, String_t* ___ns1, bool ___declared2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___prefix0;
		__this->set_prefix_0(L_0);
		String_t* L_1 = ___ns1;
		__this->set_ns_1(L_1);
		bool L_2 = ___declared2;
		__this->set_declared_2(L_2);
		__this->set_prevNsIndex_3((-1));
		return;
	}
}
extern "C"  void Namespace_Set_m817238856_AdjustorThunk (RuntimeObject * __this, String_t* ___prefix0, String_t* ___ns1, bool ___declared2, const RuntimeMethod* method)
{
	Namespace_t2218256516 * _thisAdjusted = reinterpret_cast<Namespace_t2218256516 *>(__this + 1);
	Namespace_Set_m817238856(_thisAdjusted, ___prefix0, ___ns1, ___declared2, method);
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
// Conversion methods for marshalling of: System.Xml.XmlTextWriter/TagInfo
extern "C" void TagInfo_t3526638417_marshal_pinvoke(const TagInfo_t3526638417& unmarshaled, TagInfo_t3526638417_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.get_name_0());
	marshaled.___prefix_1 = il2cpp_codegen_marshal_string(unmarshaled.get_prefix_1());
	marshaled.___defaultNs_2 = il2cpp_codegen_marshal_string(unmarshaled.get_defaultNs_2());
	marshaled.___defaultNsState_3 = unmarshaled.get_defaultNsState_3();
	marshaled.___xmlSpace_4 = unmarshaled.get_xmlSpace_4();
	marshaled.___xmlLang_5 = il2cpp_codegen_marshal_string(unmarshaled.get_xmlLang_5());
	marshaled.___prevNsTop_6 = unmarshaled.get_prevNsTop_6();
	marshaled.___prefixCount_7 = unmarshaled.get_prefixCount_7();
	marshaled.___mixed_8 = static_cast<int32_t>(unmarshaled.get_mixed_8());
}
extern "C" void TagInfo_t3526638417_marshal_pinvoke_back(const TagInfo_t3526638417_marshaled_pinvoke& marshaled, TagInfo_t3526638417& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	unmarshaled.set_prefix_1(il2cpp_codegen_marshal_string_result(marshaled.___prefix_1));
	unmarshaled.set_defaultNs_2(il2cpp_codegen_marshal_string_result(marshaled.___defaultNs_2));
	int32_t unmarshaled_defaultNsState_temp_3 = 0;
	unmarshaled_defaultNsState_temp_3 = marshaled.___defaultNsState_3;
	unmarshaled.set_defaultNsState_3(unmarshaled_defaultNsState_temp_3);
	int32_t unmarshaled_xmlSpace_temp_4 = 0;
	unmarshaled_xmlSpace_temp_4 = marshaled.___xmlSpace_4;
	unmarshaled.set_xmlSpace_4(unmarshaled_xmlSpace_temp_4);
	unmarshaled.set_xmlLang_5(il2cpp_codegen_marshal_string_result(marshaled.___xmlLang_5));
	int32_t unmarshaled_prevNsTop_temp_6 = 0;
	unmarshaled_prevNsTop_temp_6 = marshaled.___prevNsTop_6;
	unmarshaled.set_prevNsTop_6(unmarshaled_prevNsTop_temp_6);
	int32_t unmarshaled_prefixCount_temp_7 = 0;
	unmarshaled_prefixCount_temp_7 = marshaled.___prefixCount_7;
	unmarshaled.set_prefixCount_7(unmarshaled_prefixCount_temp_7);
	bool unmarshaled_mixed_temp_8 = false;
	unmarshaled_mixed_temp_8 = static_cast<bool>(marshaled.___mixed_8);
	unmarshaled.set_mixed_8(unmarshaled_mixed_temp_8);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlTextWriter/TagInfo
extern "C" void TagInfo_t3526638417_marshal_pinvoke_cleanup(TagInfo_t3526638417_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___prefix_1);
	marshaled.___prefix_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___defaultNs_2);
	marshaled.___defaultNs_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___xmlLang_5);
	marshaled.___xmlLang_5 = NULL;
}
// Conversion methods for marshalling of: System.Xml.XmlTextWriter/TagInfo
extern "C" void TagInfo_t3526638417_marshal_com(const TagInfo_t3526638417& unmarshaled, TagInfo_t3526638417_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_name_0());
	marshaled.___prefix_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_prefix_1());
	marshaled.___defaultNs_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_defaultNs_2());
	marshaled.___defaultNsState_3 = unmarshaled.get_defaultNsState_3();
	marshaled.___xmlSpace_4 = unmarshaled.get_xmlSpace_4();
	marshaled.___xmlLang_5 = il2cpp_codegen_marshal_bstring(unmarshaled.get_xmlLang_5());
	marshaled.___prevNsTop_6 = unmarshaled.get_prevNsTop_6();
	marshaled.___prefixCount_7 = unmarshaled.get_prefixCount_7();
	marshaled.___mixed_8 = static_cast<int32_t>(unmarshaled.get_mixed_8());
}
extern "C" void TagInfo_t3526638417_marshal_com_back(const TagInfo_t3526638417_marshaled_com& marshaled, TagInfo_t3526638417& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	unmarshaled.set_prefix_1(il2cpp_codegen_marshal_bstring_result(marshaled.___prefix_1));
	unmarshaled.set_defaultNs_2(il2cpp_codegen_marshal_bstring_result(marshaled.___defaultNs_2));
	int32_t unmarshaled_defaultNsState_temp_3 = 0;
	unmarshaled_defaultNsState_temp_3 = marshaled.___defaultNsState_3;
	unmarshaled.set_defaultNsState_3(unmarshaled_defaultNsState_temp_3);
	int32_t unmarshaled_xmlSpace_temp_4 = 0;
	unmarshaled_xmlSpace_temp_4 = marshaled.___xmlSpace_4;
	unmarshaled.set_xmlSpace_4(unmarshaled_xmlSpace_temp_4);
	unmarshaled.set_xmlLang_5(il2cpp_codegen_marshal_bstring_result(marshaled.___xmlLang_5));
	int32_t unmarshaled_prevNsTop_temp_6 = 0;
	unmarshaled_prevNsTop_temp_6 = marshaled.___prevNsTop_6;
	unmarshaled.set_prevNsTop_6(unmarshaled_prevNsTop_temp_6);
	int32_t unmarshaled_prefixCount_temp_7 = 0;
	unmarshaled_prefixCount_temp_7 = marshaled.___prefixCount_7;
	unmarshaled.set_prefixCount_7(unmarshaled_prefixCount_temp_7);
	bool unmarshaled_mixed_temp_8 = false;
	unmarshaled_mixed_temp_8 = static_cast<bool>(marshaled.___mixed_8);
	unmarshaled.set_mixed_8(unmarshaled_mixed_temp_8);
}
// Conversion method for clean up from marshalling of: System.Xml.XmlTextWriter/TagInfo
extern "C" void TagInfo_t3526638417_marshal_com_cleanup(TagInfo_t3526638417_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___prefix_1);
	marshaled.___prefix_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___defaultNs_2);
	marshaled.___defaultNs_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___xmlLang_5);
	marshaled.___xmlLang_5 = NULL;
}
// System.Void System.Xml.XmlTextWriter/TagInfo::Init(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TagInfo_Init_m2043286854 (TagInfo_t3526638417 * __this, int32_t ___nsTop0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TagInfo_Init_m2043286854_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_name_0((String_t*)NULL);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_defaultNs_2(L_0);
		__this->set_defaultNsState_3(0);
		__this->set_xmlSpace_4(0);
		__this->set_xmlLang_5((String_t*)NULL);
		int32_t L_1 = ___nsTop0;
		__this->set_prevNsTop_6(L_1);
		__this->set_prefixCount_7(0);
		__this->set_mixed_8((bool)0);
		return;
	}
}
extern "C"  void TagInfo_Init_m2043286854_AdjustorThunk (RuntimeObject * __this, int32_t ___nsTop0, const RuntimeMethod* method)
{
	TagInfo_t3526638417 * _thisAdjusted = reinterpret_cast<TagInfo_t3526638417 *>(__this + 1);
	TagInfo_Init_m2043286854(_thisAdjusted, ___nsTop0, method);
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
// System.Void System.Xml.XmlTextWriterBase64Encoder::WriteChars(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriterBase64Encoder_WriteChars_m241727619 (XmlTextWriterBase64Encoder_t4259465041 * __this, CharU5BU5D_t3528271667* ___chars0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		XmlTextEncoder_t1632274355 * L_0 = __this->get_xmlTextEncoder_3();
		CharU5BU5D_t3528271667* L_1 = ___chars0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		XmlTextEncoder_WriteRaw_m248708263(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
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
// System.Void System.Xml.XmlUnspecifiedAttribute::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C" IL2CPP_METHOD_ATTR void XmlUnspecifiedAttribute__ctor_m2603246334 (XmlUnspecifiedAttribute_t999215640 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceURI2, XmlDocument_t2837193595 * ___doc3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___prefix0;
		String_t* L_1 = ___localName1;
		String_t* L_2 = ___namespaceURI2;
		XmlDocument_t2837193595 * L_3 = ___doc3;
		XmlAttribute__ctor_m961761535(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Xml.XmlUnspecifiedAttribute::get_Specified()
extern "C" IL2CPP_METHOD_ATTR bool XmlUnspecifiedAttribute_get_Specified_m2719374480 (XmlUnspecifiedAttribute_t999215640 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_fSpecified_3();
		return L_0;
	}
}
// System.Xml.XmlNode System.Xml.XmlUnspecifiedAttribute::CloneNode(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR XmlNode_t3767805227 * XmlUnspecifiedAttribute_CloneNode_m1424207050 (XmlUnspecifiedAttribute_t999215640 * __this, bool ___deep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUnspecifiedAttribute_CloneNode_m1424207050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlDocument_t2837193595 * V_0 = NULL;
	{
		XmlDocument_t2837193595 * L_0 = VirtFuncInvoker0< XmlDocument_t2837193595 * >::Invoke(15 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		V_0 = L_0;
		XmlDocument_t2837193595 * L_1 = V_0;
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(30 /* System.String System.Xml.XmlNode::get_Prefix() */, __this);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(31 /* System.String System.Xml.XmlNode::get_LocalName() */, __this);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(29 /* System.String System.Xml.XmlNode::get_NamespaceURI() */, __this);
		NullCheck(L_1);
		XmlAttribute_t1173852259 * L_5 = VirtFuncInvoker3< XmlAttribute_t1173852259 *, String_t*, String_t*, String_t* >::Invoke(59 /* System.Xml.XmlAttribute System.Xml.XmlDocument::CreateDefaultAttribute(System.String,System.String,System.String) */, L_1, L_2, L_3, L_4);
		XmlUnspecifiedAttribute_t999215640 * L_6 = ((XmlUnspecifiedAttribute_t999215640 *)CastclassClass((RuntimeObject*)L_5, XmlUnspecifiedAttribute_t999215640_il2cpp_TypeInfo_var));
		XmlDocument_t2837193595 * L_7 = V_0;
		NullCheck(L_6);
		VirtActionInvoker3< XmlDocument_t2837193595 *, XmlNode_t3767805227 *, bool >::Invoke(28 /* System.Void System.Xml.XmlNode::CopyChildren(System.Xml.XmlDocument,System.Xml.XmlNode,System.Boolean) */, L_6, L_7, __this, (bool)1);
		XmlUnspecifiedAttribute_t999215640 * L_8 = L_6;
		NullCheck(L_8);
		L_8->set_fSpecified_3((bool)1);
		return L_8;
	}
}
// System.Void System.Xml.XmlUnspecifiedAttribute::set_InnerText(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlUnspecifiedAttribute_set_InnerText_m651834299 (XmlUnspecifiedAttribute_t999215640 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		XmlAttribute_set_InnerText_m1371255928(__this, L_0, /*hidden argument*/NULL);
		__this->set_fSpecified_3((bool)1);
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlUnspecifiedAttribute::RemoveChild(System.Xml.XmlNode)
extern "C" IL2CPP_METHOD_ATTR XmlNode_t3767805227 * XmlUnspecifiedAttribute_RemoveChild_m24699032 (XmlUnspecifiedAttribute_t999215640 * __this, XmlNode_t3767805227 * ___oldChild0, const RuntimeMethod* method)
{
	{
		XmlNode_t3767805227 * L_0 = ___oldChild0;
		XmlNode_t3767805227 * L_1 = XmlAttribute_RemoveChild_m1200168244(__this, L_0, /*hidden argument*/NULL);
		__this->set_fSpecified_3((bool)1);
		return L_1;
	}
}
// System.Xml.XmlNode System.Xml.XmlUnspecifiedAttribute::AppendChild(System.Xml.XmlNode)
extern "C" IL2CPP_METHOD_ATTR XmlNode_t3767805227 * XmlUnspecifiedAttribute_AppendChild_m1469700214 (XmlUnspecifiedAttribute_t999215640 * __this, XmlNode_t3767805227 * ___newChild0, const RuntimeMethod* method)
{
	{
		XmlNode_t3767805227 * L_0 = ___newChild0;
		XmlNode_t3767805227 * L_1 = XmlAttribute_AppendChild_m2134423303(__this, L_0, /*hidden argument*/NULL);
		__this->set_fSpecified_3((bool)1);
		return L_1;
	}
}
// System.Void System.Xml.XmlUnspecifiedAttribute::SetSpecified(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlUnspecifiedAttribute_SetSpecified_m3536850000 (XmlUnspecifiedAttribute_t999215640 * __this, bool ___f0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___f0;
		__this->set_fSpecified_3(L_0);
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
// System.Xml.XmlDownloadManager System.Xml.XmlUrlResolver::get_DownloadManager()
extern "C" IL2CPP_METHOD_ATTR XmlDownloadManager_t2540579765 * XmlUrlResolver_get_DownloadManager_m3478324606 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUrlResolver_get_DownloadManager_m3478324606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ((XmlUrlResolver_t817895037_StaticFields*)il2cpp_codegen_static_fields_for(XmlUrlResolver_t817895037_il2cpp_TypeInfo_var))->get_s_DownloadManager_0();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		XmlDownloadManager_t2540579765 * L_1 = (XmlDownloadManager_t2540579765 *)il2cpp_codegen_object_new(XmlDownloadManager_t2540579765_il2cpp_TypeInfo_var);
		XmlDownloadManager__ctor_m568960534(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		InterlockedCompareExchangeImpl<RuntimeObject *>((RuntimeObject **)(((XmlUrlResolver_t817895037_StaticFields*)il2cpp_codegen_static_fields_for(XmlUrlResolver_t817895037_il2cpp_TypeInfo_var))->get_address_of_s_DownloadManager_0()), L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject * L_3 = ((XmlUrlResolver_t817895037_StaticFields*)il2cpp_codegen_static_fields_for(XmlUrlResolver_t817895037_il2cpp_TypeInfo_var))->get_s_DownloadManager_0();
		return ((XmlDownloadManager_t2540579765 *)CastclassClass((RuntimeObject*)L_3, XmlDownloadManager_t2540579765_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Xml.XmlUrlResolver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlUrlResolver__ctor_m1338399436 (XmlUrlResolver_t817895037 * __this, const RuntimeMethod* method)
{
	{
		XmlResolver__ctor_m2276492248(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Xml.XmlUrlResolver::GetEntity(System.Uri,System.String,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XmlUrlResolver_GetEntity_m2245402732 (XmlUrlResolver_t817895037 * __this, Uri_t100236324 * ___absoluteUri0, String_t* ___role1, Type_t * ___ofObjectToReturn2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUrlResolver_GetEntity_m2245402732_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___ofObjectToReturn2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		Type_t * L_2 = ___ofObjectToReturn2;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (Stream_t1273022909_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		bool L_5 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002d;
		}
	}
	{
		Type_t * L_6 = ___ofObjectToReturn2;
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		bool L_9 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004b;
		}
	}

IL_002d:
	{
		XmlDownloadManager_t2540579765 * L_10 = XmlUrlResolver_get_DownloadManager_m3478324606(NULL /*static, unused*/, /*hidden argument*/NULL);
		Uri_t100236324 * L_11 = ___absoluteUri0;
		RuntimeObject* L_12 = __this->get__credentials_1();
		RuntimeObject* L_13 = __this->get__proxy_2();
		RequestCachePolicy_t2923596909 * L_14 = __this->get__cachePolicy_3();
		NullCheck(L_10);
		Stream_t1273022909 * L_15 = XmlDownloadManager_GetStream_m2764365339(L_10, L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_004b:
	{
		String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		XmlException_t1761730631 * L_17 = (XmlException_t1761730631 *)il2cpp_codegen_object_new(XmlException_t1761730631_il2cpp_TypeInfo_var);
		XmlException__ctor_m400140246(L_17, _stringLiteral1871148010, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, XmlUrlResolver_GetEntity_m2245402732_RuntimeMethod_var);
	}
}
// System.Uri System.Xml.XmlUrlResolver::ResolveUri(System.Uri,System.String)
extern "C" IL2CPP_METHOD_ATTR Uri_t100236324 * XmlUrlResolver_ResolveUri_m3714454862 (XmlUrlResolver_t817895037 * __this, Uri_t100236324 * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method)
{
	{
		Uri_t100236324 * L_0 = ___baseUri0;
		String_t* L_1 = ___relativeUri1;
		Uri_t100236324 * L_2 = XmlResolver_ResolveUri_m3051172150(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<System.Object> System.Xml.XmlUrlResolver::GetEntityAsync(System.Uri,System.String,System.Type)
extern "C" IL2CPP_METHOD_ATTR Task_1_t190679043 * XmlUrlResolver_GetEntityAsync_m3433676114 (XmlUrlResolver_t817895037 * __this, Uri_t100236324 * ___absoluteUri0, String_t* ___role1, Type_t * ___ofObjectToReturn2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUrlResolver_GetEntityAsync_m3433676114_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetEntityAsyncU3Ed__15_t1599719825  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t1106113378  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_4(__this);
		Uri_t100236324 * L_0 = ___absoluteUri0;
		(&V_0)->set_absoluteUri_3(L_0);
		Type_t * L_1 = ___ofObjectToReturn2;
		(&V_0)->set_ofObjectToReturn_2(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t1106113378_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t1106113378  L_2 = AsyncTaskMethodBuilder_1_Create_m457539829(NULL /*static, unused*/, /*hidden argument*/AsyncTaskMethodBuilder_1_Create_m457539829_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CGetEntityAsyncU3Ed__15_t1599719825  L_3 = V_0;
		AsyncTaskMethodBuilder_1_t1106113378  L_4 = L_3.get_U3CU3Et__builder_1();
		V_1 = L_4;
		AsyncTaskMethodBuilder_1_Start_TisU3CGetEntityAsyncU3Ed__15_t1599719825_m489318611((AsyncTaskMethodBuilder_1_t1106113378 *)(&V_1), (U3CGetEntityAsyncU3Ed__15_t1599719825 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CGetEntityAsyncU3Ed__15_t1599719825_m489318611_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t1106113378 * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t190679043 * L_6 = AsyncTaskMethodBuilder_1_get_Task_m317986670((AsyncTaskMethodBuilder_1_t1106113378 *)L_5, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m317986670_RuntimeMethod_var);
		return L_6;
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
// System.Void System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CGetEntityAsyncU3Ed__15_MoveNext_m3272980288 (U3CGetEntityAsyncU3Ed__15_t1599719825 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEntityAsyncU3Ed__15_MoveNext_m3272980288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	XmlUrlResolver_t817895037 * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	ConfiguredTaskAwaiter_t2595523894  V_3;
	memset(&V_3, 0, sizeof(V_3));
	ConfiguredTaskAwaitable_1_t3870950252  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		XmlUrlResolver_t817895037 * L_1 = __this->get_U3CU3E4__this_4();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00ae;
			}
		}

IL_0014:
		{
			Type_t * L_3 = __this->get_ofObjectToReturn_2();
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			bool L_4 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_3, (Type_t *)NULL, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0053;
			}
		}

IL_0022:
		{
			Type_t * L_5 = __this->get_ofObjectToReturn_2();
			RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (Stream_t1273022909_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
			bool L_8 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_0053;
			}
		}

IL_0039:
		{
			Type_t * L_9 = __this->get_ofObjectToReturn_2();
			RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
			bool L_12 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_00d4;
			}
		}

IL_0053:
		{
			XmlDownloadManager_t2540579765 * L_13 = XmlUrlResolver_get_DownloadManager_m3478324606(NULL /*static, unused*/, /*hidden argument*/NULL);
			Uri_t100236324 * L_14 = __this->get_absoluteUri_3();
			XmlUrlResolver_t817895037 * L_15 = V_1;
			NullCheck(L_15);
			RuntimeObject* L_16 = L_15->get__credentials_1();
			XmlUrlResolver_t817895037 * L_17 = V_1;
			NullCheck(L_17);
			RuntimeObject* L_18 = L_17->get__proxy_2();
			XmlUrlResolver_t817895037 * L_19 = V_1;
			NullCheck(L_19);
			RequestCachePolicy_t2923596909 * L_20 = L_19->get__cachePolicy_3();
			NullCheck(L_13);
			Task_1_t2678563084 * L_21 = XmlDownloadManager_GetStreamAsync_m331733763(L_13, L_14, L_16, L_18, L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			ConfiguredTaskAwaitable_1_t3870950252  L_22 = Task_1_ConfigureAwait_m2606086103(L_21, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m2606086103_RuntimeMethod_var);
			V_4 = L_22;
			ConfiguredTaskAwaiter_t2595523894  L_23 = ConfiguredTaskAwaitable_1_GetAwaiter_m1368673375((ConfiguredTaskAwaitable_1_t3870950252 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m1368673375_RuntimeMethod_var);
			V_3 = L_23;
			bool L_24 = ConfiguredTaskAwaiter_get_IsCompleted_m3975404((ConfiguredTaskAwaiter_t2595523894 *)(&V_3), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m3975404_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_00ca;
			}
		}

IL_008e:
		{
			int32_t L_25 = 0;
			V_0 = L_25;
			__this->set_U3CU3E1__state_0(L_25);
			ConfiguredTaskAwaiter_t2595523894  L_26 = V_3;
			__this->set_U3CU3Eu__1_5(L_26);
			AsyncTaskMethodBuilder_1_t1106113378 * L_27 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2595523894_TisU3CGetEntityAsyncU3Ed__15_t1599719825_m2713669507((AsyncTaskMethodBuilder_1_t1106113378 *)L_27, (ConfiguredTaskAwaiter_t2595523894 *)(&V_3), (U3CGetEntityAsyncU3Ed__15_t1599719825 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2595523894_TisU3CGetEntityAsyncU3Ed__15_t1599719825_m2713669507_RuntimeMethod_var);
			goto IL_0111;
		}

IL_00ae:
		{
			ConfiguredTaskAwaiter_t2595523894  L_28 = __this->get_U3CU3Eu__1_5();
			V_3 = L_28;
			ConfiguredTaskAwaiter_t2595523894 * L_29 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_29, sizeof(ConfiguredTaskAwaiter_t2595523894 ));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->set_U3CU3E1__state_0(L_30);
		}

IL_00ca:
		{
			Stream_t1273022909 * L_31 = ConfiguredTaskAwaiter_GetResult_m4037153341((ConfiguredTaskAwaiter_t2595523894 *)(&V_3), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m4037153341_RuntimeMethod_var);
			V_2 = L_31;
			goto IL_00fd;
		}

IL_00d4:
		{
			String_t* L_32 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			XmlException_t1761730631 * L_33 = (XmlException_t1761730631 *)il2cpp_codegen_object_new(XmlException_t1761730631_il2cpp_TypeInfo_var);
			XmlException__ctor_m400140246(L_33, _stringLiteral1871148010, L_32, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, NULL, U3CGetEntityAsyncU3Ed__15_MoveNext_m3272980288_RuntimeMethod_var);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00e4;
		throw e;
	}

CATCH_00e4:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t1106113378 * L_34 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_35 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m131199109((AsyncTaskMethodBuilder_1_t1106113378 *)L_34, L_35, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m131199109_RuntimeMethod_var);
		goto IL_0111;
	} // end catch (depth: 1)

IL_00fd:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t1106113378 * L_36 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject * L_37 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m1633157453((AsyncTaskMethodBuilder_1_t1106113378 *)L_36, L_37, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m1633157453_RuntimeMethod_var);
	}

IL_0111:
	{
		return;
	}
}
extern "C"  void U3CGetEntityAsyncU3Ed__15_MoveNext_m3272980288_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CGetEntityAsyncU3Ed__15_t1599719825 * _thisAdjusted = reinterpret_cast<U3CGetEntityAsyncU3Ed__15_t1599719825 *>(__this + 1);
	U3CGetEntityAsyncU3Ed__15_MoveNext_m3272980288(_thisAdjusted, method);
}
// System.Void System.Xml.XmlUrlResolver/<GetEntityAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CGetEntityAsyncU3Ed__15_SetStateMachine_m2134769911 (U3CGetEntityAsyncU3Ed__15_t1599719825 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEntityAsyncU3Ed__15_SetStateMachine_m2134769911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t1106113378 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m2671839336((AsyncTaskMethodBuilder_1_t1106113378 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m2671839336_RuntimeMethod_var);
		return;
	}
}
extern "C"  void U3CGetEntityAsyncU3Ed__15_SetStateMachine_m2134769911_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetEntityAsyncU3Ed__15_t1599719825 * _thisAdjusted = reinterpret_cast<U3CGetEntityAsyncU3Ed__15_t1599719825 *>(__this + 1);
	U3CGetEntityAsyncU3Ed__15_SetStateMachine_m2134769911(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Xml.XmlNodeType System.Xml.XmlValidatingReader::get_NodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReader_get_NodeType_m2271835609 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlValidatingReader::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReader_get_Name_m2521889568 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlReader::get_Name() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlValidatingReader::get_LocalName()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReader_get_LocalName_m3935686416 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlValidatingReader::get_NamespaceURI()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReader_get_NamespaceURI_m606176985 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlValidatingReader::get_Prefix()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReader_get_Prefix_m754810542 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Xml.XmlReader::get_Prefix() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlValidatingReader::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReader_get_Value_m2511111829 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlValidatingReader::get_Depth()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReader_get_Depth_m2789143630 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlValidatingReader::get_BaseURI()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReader_get_BaseURI_m1476328842 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::get_IsEmptyElement()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_get_IsEmptyElement_m3829672649 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::get_IsDefault()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_get_IsDefault_m1076375084 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XmlReader::get_IsDefault() */, L_0);
		return L_1;
	}
}
// System.Char System.Xml.XmlValidatingReader::get_QuoteChar()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar XmlValidatingReader_get_QuoteChar_m2619073941 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		Il2CppChar L_1 = VirtFuncInvoker0< Il2CppChar >::Invoke(16 /* System.Char System.Xml.XmlReader::get_QuoteChar() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlValidatingReader::get_AttributeCount()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReader_get_AttributeCount_m3036345306 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlValidatingReader::GetAttribute(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReader_GetAttribute_m1372195914 (XmlValidatingReader_t1719295192 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(19 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::MoveToAttribute(System.String)
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_MoveToAttribute_m2298075513 (XmlValidatingReader_t1719295192 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(20 /* System.Boolean System.Xml.XmlReader::MoveToAttribute(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Xml.XmlValidatingReader::MoveToAttribute(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReader_MoveToAttribute_m565086185 (XmlValidatingReader_t1719295192 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32) */, L_0, L_1);
		return;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::MoveToFirstAttribute()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_MoveToFirstAttribute_m3181606727 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Xml.XmlReader::MoveToFirstAttribute() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::MoveToNextAttribute()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_MoveToNextAttribute_m3038240404 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(23 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::MoveToElement()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_MoveToElement_m2423364559 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::ReadAttributeValue()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_ReadAttributeValue_m2604418746 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Xml.XmlReader::ReadAttributeValue() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::Read()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_Read_m3555356476 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Xml.XmlReader::Read() */, L_0);
		return L_1;
	}
}
// System.Void System.Xml.XmlValidatingReader::Close()
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReader_Close_m24546856 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(27 /* System.Void System.Xml.XmlReader::Close() */, L_0);
		return;
	}
}
// System.Xml.ReadState System.Xml.XmlValidatingReader::get_ReadState()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReader_get_ReadState_m483710833 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_0);
		return L_1;
	}
}
// System.Xml.XmlNameTable System.Xml.XmlValidatingReader::get_NameTable()
extern "C" IL2CPP_METHOD_ATTR XmlNameTable_t71772148 * XmlValidatingReader_get_NameTable_m386478333 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		XmlNameTable_t71772148 * L_1 = VirtFuncInvoker0< XmlNameTable_t71772148 * >::Invoke(30 /* System.Xml.XmlNameTable System.Xml.XmlReader::get_NameTable() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlValidatingReader::LookupNamespace(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReader_LookupNamespace_m1366491815 (XmlValidatingReader_t1719295192 * __this, String_t* ___prefix0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		String_t* L_1 = ___prefix0;
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(31 /* System.String System.Xml.XmlReader::LookupNamespace(System.String) */, L_0, L_1);
		V_0 = L_2;
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_001a;
		}
	}
	{
		V_0 = (String_t*)NULL;
	}

IL_001a:
	{
		String_t* L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::get_CanResolveEntity()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_get_CanResolveEntity_m282081771 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Xml.XmlValidatingReader::ResolveEntity()
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReader_ResolveEntity_m513506040 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Xml.XmlReader::ResolveEntity() */, L_0);
		return;
	}
}
// System.Int32 System.Xml.XmlValidatingReader::get_LineNumber()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReader_get_LineNumber_m4160044902 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		int32_t L_1 = XmlValidatingReaderImpl_get_LineNumber_m4241875698(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlValidatingReader::get_LinePosition()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReader_get_LinePosition_m2821670432 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		int32_t L_1 = XmlValidatingReaderImpl_get_LinePosition_m4261359789(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XmlValidatingReader::System.Xml.IXmlNamespaceResolver.LookupNamespace(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReader_System_Xml_IXmlNamespaceResolver_LookupNamespace_m1953290952 (XmlValidatingReader_t1719295192 * __this, String_t* ___prefix0, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		String_t* L_1 = ___prefix0;
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(31 /* System.String System.Xml.XmlReader::LookupNamespace(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.String System.Xml.XmlValidatingReader::System.Xml.IXmlNamespaceResolver.LookupPrefix(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReader_System_Xml_IXmlNamespaceResolver_LookupPrefix_m4098504182 (XmlValidatingReader_t1719295192 * __this, String_t* ___namespaceName0, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		String_t* L_1 = ___namespaceName0;
		NullCheck(L_0);
		String_t* L_2 = XmlValidatingReaderImpl_LookupPrefix_m3915215833(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Xml.XmlValidatingReader::get_Namespaces()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReader_get_Namespaces_m3935643757 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		bool L_1 = XmlValidatingReaderImpl_get_Namespaces_m3107677556(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.IDtdInfo System.Xml.XmlValidatingReader::get_DtdInfo()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* XmlValidatingReader_get_DtdInfo_m2798818575 (XmlValidatingReader_t1719295192 * __this, const RuntimeMethod* method)
{
	{
		XmlValidatingReaderImpl_t1817762384 * L_0 = __this->get_impl_3();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(44 /* System.Xml.IDtdInfo System.Xml.XmlReader::get_DtdInfo() */, L_0);
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
// System.Xml.XmlReaderSettings System.Xml.XmlValidatingReaderImpl::get_Settings()
extern "C" IL2CPP_METHOD_ATTR XmlReaderSettings_t2186285234 * XmlValidatingReaderImpl_get_Settings_m4287834649 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReaderImpl_get_Settings_m4287834649_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlReaderSettings_t2186285234 * V_0 = NULL;
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_coreReaderImpl_4();
		NullCheck(L_0);
		bool L_1 = XmlTextReaderImpl_get_V1Compat_m3797987936(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		V_0 = (XmlReaderSettings_t2186285234 *)NULL;
		goto IL_001d;
	}

IL_0011:
	{
		XmlReader_t3121518892 * L_2 = __this->get_coreReader_3();
		NullCheck(L_2);
		XmlReaderSettings_t2186285234 * L_3 = VirtFuncInvoker0< XmlReaderSettings_t2186285234 * >::Invoke(5 /* System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings() */, L_2);
		V_0 = L_3;
	}

IL_001d:
	{
		XmlReaderSettings_t2186285234 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		XmlReaderSettings_t2186285234 * L_5 = V_0;
		NullCheck(L_5);
		XmlReaderSettings_t2186285234 * L_6 = XmlReaderSettings_Clone_m3342798530(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_002f;
	}

IL_0029:
	{
		XmlReaderSettings_t2186285234 * L_7 = (XmlReaderSettings_t2186285234 *)il2cpp_codegen_object_new(XmlReaderSettings_t2186285234_il2cpp_TypeInfo_var);
		XmlReaderSettings__ctor_m3137625896(L_7, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_002f:
	{
		XmlReaderSettings_t2186285234 * L_8 = V_0;
		NullCheck(L_8);
		XmlReaderSettings_set_ValidationType_m186252962(L_8, 2, /*hidden argument*/NULL);
		bool L_9 = __this->get_processIdentityConstraints_9();
		if (L_9)
		{
			goto IL_004d;
		}
	}
	{
		XmlReaderSettings_t2186285234 * L_10 = V_0;
		XmlReaderSettings_t2186285234 * L_11 = L_10;
		NullCheck(L_11);
		int32_t L_12 = XmlReaderSettings_get_ValidationFlags_m2837396330(L_11, /*hidden argument*/NULL);
		NullCheck(L_11);
		XmlReaderSettings_set_ValidationFlags_m2291374422(L_11, ((int32_t)((int32_t)L_12&(int32_t)((int32_t)-9))), /*hidden argument*/NULL);
	}

IL_004d:
	{
		XmlReaderSettings_t2186285234 * L_13 = V_0;
		NullCheck(L_13);
		XmlReaderSettings_set_ReadOnly_m1029499250(L_13, (bool)1, /*hidden argument*/NULL);
		XmlReaderSettings_t2186285234 * L_14 = V_0;
		return L_14;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlValidatingReaderImpl::get_NodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReaderImpl_get_NodeType_m356760135 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlValidatingReaderImpl::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReaderImpl_get_Name_m2138157870 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlReader::get_Name() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlValidatingReaderImpl::get_LocalName()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReaderImpl_get_LocalName_m2542810905 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlValidatingReaderImpl::get_NamespaceURI()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReaderImpl_get_NamespaceURI_m3352664161 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlValidatingReaderImpl::get_Prefix()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReaderImpl_get_Prefix_m1332175495 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Xml.XmlReader::get_Prefix() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlValidatingReaderImpl::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReaderImpl_get_Value_m2057578457 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlValidatingReaderImpl::get_Depth()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReaderImpl_get_Depth_m318519307 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlValidatingReaderImpl::get_BaseURI()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReaderImpl_get_BaseURI_m4078938392 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlValidatingReaderImpl::get_IsEmptyElement()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReaderImpl_get_IsEmptyElement_m1352291609 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlValidatingReaderImpl::get_IsDefault()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReaderImpl_get_IsDefault_m4247714389 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Xml.XmlReader::get_IsDefault() */, L_0);
		return L_1;
	}
}
// System.Char System.Xml.XmlValidatingReaderImpl::get_QuoteChar()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar XmlValidatingReaderImpl_get_QuoteChar_m3883227023 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		Il2CppChar L_1 = VirtFuncInvoker0< Il2CppChar >::Invoke(16 /* System.Char System.Xml.XmlReader::get_QuoteChar() */, L_0);
		return L_1;
	}
}
// System.Xml.ReadState System.Xml.XmlValidatingReaderImpl::get_ReadState()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReaderImpl_get_ReadState_m2556677280 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_parsingFunction_10();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		XmlReader_t3121518892 * L_1 = __this->get_coreReader_3();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_1);
		return L_2;
	}

IL_0015:
	{
		return (int32_t)(0);
	}
}
// System.Xml.XmlNameTable System.Xml.XmlValidatingReaderImpl::get_NameTable()
extern "C" IL2CPP_METHOD_ATTR XmlNameTable_t71772148 * XmlValidatingReaderImpl_get_NameTable_m299367970 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		XmlNameTable_t71772148 * L_1 = VirtFuncInvoker0< XmlNameTable_t71772148 * >::Invoke(30 /* System.Xml.XmlNameTable System.Xml.XmlReader::get_NameTable() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlValidatingReaderImpl::get_AttributeCount()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReaderImpl_get_AttributeCount_m873591786 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlValidatingReaderImpl::GetAttribute(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReaderImpl_GetAttribute_m3083798935 (XmlValidatingReaderImpl_t1817762384 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(19 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Xml.XmlValidatingReaderImpl::MoveToAttribute(System.String)
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReaderImpl_MoveToAttribute_m1355249654 (XmlValidatingReaderImpl_t1817762384 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(20 /* System.Boolean System.Xml.XmlReader::MoveToAttribute(System.String) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_parsingFunction_10(0);
		return (bool)1;
	}
}
// System.Void System.Xml.XmlValidatingReaderImpl::MoveToAttribute(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReaderImpl_MoveToAttribute_m427508941 (XmlValidatingReaderImpl_t1817762384 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32) */, L_0, L_1);
		__this->set_parsingFunction_10(0);
		return;
	}
}
// System.Boolean System.Xml.XmlValidatingReaderImpl::MoveToFirstAttribute()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReaderImpl_MoveToFirstAttribute_m408450573 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Xml.XmlReader::MoveToFirstAttribute() */, L_0);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		__this->set_parsingFunction_10(0);
		return (bool)1;
	}
}
// System.Boolean System.Xml.XmlValidatingReaderImpl::MoveToNextAttribute()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReaderImpl_MoveToNextAttribute_m3860724858 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(23 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_0);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		__this->set_parsingFunction_10(0);
		return (bool)1;
	}
}
// System.Boolean System.Xml.XmlValidatingReaderImpl::MoveToElement()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReaderImpl_MoveToElement_m1938160166 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_0);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		__this->set_parsingFunction_10(0);
		return (bool)1;
	}
}
// System.Boolean System.Xml.XmlValidatingReaderImpl::Read()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReaderImpl_Read_m1509980663 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_parsingFunction_10();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002b;
			}
			case 1:
			{
				goto IL_005e;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_007b;
			}
			case 4:
			{
				goto IL_008a;
			}
			case 5:
			{
				goto IL_005c;
			}
			case 6:
			{
				goto IL_005c;
			}
		}
	}
	{
		goto IL_009e;
	}

IL_002b:
	{
		XmlReader_t3121518892 * L_2 = __this->get_coreReader_3();
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Xml.XmlReader::Read() */, L_2);
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		XmlValidatingReaderImpl_ProcessCoreReaderEvent_m64175234(__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0040:
	{
		BaseValidator_t868759770 * L_4 = __this->get_validator_7();
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Xml.Schema.BaseValidator::CompleteValidation() */, L_4);
		return (bool)0;
	}

IL_004d:
	{
		__this->set_parsingFunction_10(0);
		XmlValidatingReaderImpl_ParseDtdFromParserContext_m1435797303(__this, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_005c:
	{
		return (bool)0;
	}

IL_005e:
	{
		__this->set_parsingFunction_10(0);
		XmlReader_t3121518892 * L_5 = __this->get_coreReader_3();
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_5);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_002b;
		}
	}
	{
		XmlValidatingReaderImpl_ProcessCoreReaderEvent_m64175234(__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_007b:
	{
		__this->set_parsingFunction_10(0);
		XmlValidatingReaderImpl_ResolveEntityInternally_m2681732783(__this, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_008a:
	{
		__this->set_parsingFunction_10(0);
		ReadContentAsBinaryHelper_t3017207972 * L_7 = __this->get_readBinaryHelper_13();
		NullCheck(L_7);
		ReadContentAsBinaryHelper_Finish_m1988823726(L_7, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_009e:
	{
		return (bool)0;
	}
}
// System.Void System.Xml.XmlValidatingReaderImpl::Close()
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReaderImpl_Close_m1680623544 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(27 /* System.Void System.Xml.XmlReader::Close() */, L_0);
		__this->set_parsingFunction_10(5);
		return;
	}
}
// System.String System.Xml.XmlValidatingReaderImpl::LookupNamespace(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReaderImpl_LookupNamespace_m4150749820 (XmlValidatingReaderImpl_t1817762384 * __this, String_t* ___prefix0, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_coreReaderImpl_4();
		String_t* L_1 = ___prefix0;
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(31 /* System.String System.Xml.XmlReader::LookupNamespace(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Xml.XmlValidatingReaderImpl::ReadAttributeValue()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReaderImpl_ReadAttributeValue_m3124878532 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_parsingFunction_10();
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_001b;
		}
	}
	{
		__this->set_parsingFunction_10(0);
		ReadContentAsBinaryHelper_t3017207972 * L_1 = __this->get_readBinaryHelper_13();
		NullCheck(L_1);
		ReadContentAsBinaryHelper_Finish_m1988823726(L_1, /*hidden argument*/NULL);
	}

IL_001b:
	{
		XmlReader_t3121518892 * L_2 = __this->get_coreReader_3();
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Xml.XmlReader::ReadAttributeValue() */, L_2);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->set_parsingFunction_10(0);
		return (bool)1;
	}
}
// System.Boolean System.Xml.XmlValidatingReaderImpl::get_CanResolveEntity()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReaderImpl_get_CanResolveEntity_m3148031131 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Xml.XmlValidatingReaderImpl::ResolveEntity()
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReaderImpl_ResolveEntity_m1019961466 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_parsingFunction_10();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0010;
		}
	}
	{
		__this->set_parsingFunction_10(0);
	}

IL_0010:
	{
		XmlReader_t3121518892 * L_1 = __this->get_coreReader_3();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Xml.XmlReader::ResolveEntity() */, L_1);
		return;
	}
}
// System.Int32 System.Xml.XmlValidatingReaderImpl::get_LineNumber()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReaderImpl_get_LineNumber_m4241875698 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReaderImpl_get_LineNumber_m4241875698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_0, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var)));
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var)));
		return L_1;
	}
}
// System.Int32 System.Xml.XmlValidatingReaderImpl::get_LinePosition()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReaderImpl_get_LinePosition_m4261359789 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReaderImpl_get_LinePosition_m4261359789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_0, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var)));
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IXmlLineInfo_t2353988607_il2cpp_TypeInfo_var)));
		return L_1;
	}
}
// System.String System.Xml.XmlValidatingReaderImpl::System.Xml.IXmlNamespaceResolver.LookupNamespace(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReaderImpl_System_Xml_IXmlNamespaceResolver_LookupNamespace_m124902722 (XmlValidatingReaderImpl_t1817762384 * __this, String_t* ___prefix0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___prefix0;
		String_t* L_1 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(31 /* System.String System.Xml.XmlReader::LookupNamespace(System.String) */, __this, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlValidatingReaderImpl::System.Xml.IXmlNamespaceResolver.LookupPrefix(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReaderImpl_System_Xml_IXmlNamespaceResolver_LookupPrefix_m1944621182 (XmlValidatingReaderImpl_t1817762384 * __this, String_t* ___namespaceName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___namespaceName0;
		String_t* L_1 = XmlValidatingReaderImpl_LookupPrefix_m3915215833(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XmlValidatingReaderImpl::LookupPrefix(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlValidatingReaderImpl_LookupPrefix_m3915215833 (XmlValidatingReaderImpl_t1817762384 * __this, String_t* ___namespaceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReaderImpl_LookupPrefix_m3915215833_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_coreReaderNSResolver_5();
		String_t* L_1 = ___namespaceName0;
		NullCheck(L_0);
		String_t* L_2 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(1 /* System.String System.Xml.IXmlNamespaceResolver::LookupPrefix(System.String) */, IXmlNamespaceResolver_t535375154_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Xml.ValidationType System.Xml.XmlValidatingReaderImpl::get_ValidationType()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlValidatingReaderImpl_get_ValidationType_m2399373228 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_validationType_6();
		return L_0;
	}
}
// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReaderImpl::get_Schemas()
extern "C" IL2CPP_METHOD_ATTR XmlSchemaCollection_t3610399789 * XmlValidatingReaderImpl_get_Schemas_m1548623572 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlSchemaCollection_t3610399789 * L_0 = __this->get_schemaCollection_8();
		return L_0;
	}
}
// System.Boolean System.Xml.XmlValidatingReaderImpl::get_Namespaces()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReaderImpl_get_Namespaces_m3107677556 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_coreReaderImpl_4();
		NullCheck(L_0);
		bool L_1 = XmlTextReaderImpl_get_Namespaces_m1068888480(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.XmlValidatingReaderImpl::ParseDtdFromParserContext()
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReaderImpl_ParseDtdFromParserContext_m1435797303 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReaderImpl_ParseDtdFromParserContext_m1435797303_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DtdParserProxy_t3101460057 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		XmlParserContext_t2544895291 * L_0 = __this->get_parserContext_12();
		NullCheck(L_0);
		String_t* L_1 = XmlParserContext_get_DocTypeName_m315861363(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		XmlParserContext_t2544895291 * L_2 = __this->get_parserContext_12();
		NullCheck(L_2);
		String_t* L_3 = XmlParserContext_get_DocTypeName_m315861363(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0020;
		}
	}

IL_001f:
	{
		return;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DtdParser_t1117044511_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = DtdParser_Create_m4131096188(NULL /*static, unused*/, /*hidden argument*/NULL);
		XmlTextReaderImpl_t178060594 * L_6 = __this->get_coreReaderImpl_4();
		DtdParserProxy_t3101460057 * L_7 = (DtdParserProxy_t3101460057 *)il2cpp_codegen_object_new(DtdParserProxy_t3101460057_il2cpp_TypeInfo_var);
		DtdParserProxy__ctor_m3809593112(L_7, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		XmlParserContext_t2544895291 * L_8 = __this->get_parserContext_12();
		NullCheck(L_8);
		String_t* L_9 = XmlParserContext_get_BaseURI_m3403405423(L_8, /*hidden argument*/NULL);
		XmlParserContext_t2544895291 * L_10 = __this->get_parserContext_12();
		NullCheck(L_10);
		String_t* L_11 = XmlParserContext_get_DocTypeName_m315861363(L_10, /*hidden argument*/NULL);
		XmlParserContext_t2544895291 * L_12 = __this->get_parserContext_12();
		NullCheck(L_12);
		String_t* L_13 = XmlParserContext_get_PublicId_m3660294131(L_12, /*hidden argument*/NULL);
		XmlParserContext_t2544895291 * L_14 = __this->get_parserContext_12();
		NullCheck(L_14);
		String_t* L_15 = XmlParserContext_get_SystemId_m340153273(L_14, /*hidden argument*/NULL);
		XmlParserContext_t2544895291 * L_16 = __this->get_parserContext_12();
		NullCheck(L_16);
		String_t* L_17 = XmlParserContext_get_InternalSubset_m850815881(L_16, /*hidden argument*/NULL);
		DtdParserProxy_t3101460057 * L_18 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_19 = InterfaceFuncInvoker6< RuntimeObject*, String_t*, String_t*, String_t*, String_t*, String_t*, RuntimeObject* >::Invoke(1 /* System.Xml.IDtdInfo System.Xml.IDtdParser::ParseFreeFloatingDtd(System.String,System.String,System.String,System.String,System.String,System.Xml.IDtdParserAdapter) */, IDtdParser_t2016838004_il2cpp_TypeInfo_var, L_5, L_9, L_11, L_13, L_15, L_17, L_18);
		V_1 = L_19;
		XmlTextReaderImpl_t178060594 * L_20 = __this->get_coreReaderImpl_4();
		RuntimeObject* L_21 = V_1;
		NullCheck(L_20);
		XmlTextReaderImpl_SetDtdInfo_m1131487389(L_20, L_21, /*hidden argument*/NULL);
		XmlValidatingReaderImpl_ValidateDtd_m1235583699(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlValidatingReaderImpl::ValidateDtd()
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReaderImpl_ValidateDtd_m1235583699 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_coreReaderImpl_4();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(44 /* System.Xml.IDtdInfo System.Xml.XmlReader::get_DtdInfo() */, L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_3 = __this->get_validationType_6();
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0030;
			}
			case 1:
			{
				goto IL_0029;
			}
			case 2:
			{
				goto IL_0030;
			}
		}
	}
	{
		return;
	}

IL_0029:
	{
		XmlValidatingReaderImpl_SetupValidation_m3368487000(__this, 2, /*hidden argument*/NULL);
	}

IL_0030:
	{
		BaseValidator_t868759770 * L_5 = __this->get_validator_7();
		RuntimeObject* L_6 = V_0;
		NullCheck(L_5);
		BaseValidator_set_DtdInfo_m939217600(L_5, L_6, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void System.Xml.XmlValidatingReaderImpl::ResolveEntityInternally()
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReaderImpl_ResolveEntityInternally_m2681732783 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_0);
		V_0 = L_1;
		XmlReader_t3121518892 * L_2 = __this->get_outerReader_14();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Xml.XmlReader::ResolveEntity() */, L_2);
	}

IL_0017:
	{
		XmlReader_t3121518892 * L_3 = __this->get_outerReader_14();
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Xml.XmlReader::Read() */, L_3);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		XmlReader_t3121518892 * L_5 = __this->get_coreReader_3();
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_5);
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) > ((int32_t)L_7)))
		{
			goto IL_0017;
		}
	}

IL_0032:
	{
		return;
	}
}
// System.Void System.Xml.XmlValidatingReaderImpl::SetupValidation(System.Xml.ValidationType)
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReaderImpl_SetupValidation_m3368487000 (XmlValidatingReaderImpl_t1817762384 * __this, int32_t ___valType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReaderImpl_SetupValidation_m3368487000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlResolver_t626023767 * V_0 = NULL;
	BaseValidator_t868759770 * G_B3_0 = NULL;
	BaseValidator_t868759770 * G_B2_0 = NULL;
	Uri_t100236324 * G_B4_0 = NULL;
	BaseValidator_t868759770 * G_B4_1 = NULL;
	XmlTextReaderImpl_t178060594 * G_B7_0 = NULL;
	XmlTextReaderImpl_t178060594 * G_B6_0 = NULL;
	ValidationEventHandling_t3812646699 * G_B8_0 = NULL;
	XmlTextReaderImpl_t178060594 * G_B8_1 = NULL;
	{
		int32_t L_0 = ___valType0;
		XmlSchemaCollection_t3610399789 * L_1 = __this->get_schemaCollection_8();
		ValidationEventHandling_t3812646699 * L_2 = __this->get_eventHandling_11();
		bool L_3 = __this->get_processIdentityConstraints_9();
		BaseValidator_t868759770 * L_4 = BaseValidator_CreateInstance_m4274677911(NULL /*static, unused*/, L_0, __this, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set_validator_7(L_4);
		XmlResolver_t626023767 * L_5 = XmlValidatingReaderImpl_GetResolver_m1302585018(__this, /*hidden argument*/NULL);
		V_0 = L_5;
		BaseValidator_t868759770 * L_6 = __this->get_validator_7();
		XmlResolver_t626023767 * L_7 = V_0;
		NullCheck(L_6);
		BaseValidator_set_XmlResolver_m427918798(L_6, L_7, /*hidden argument*/NULL);
		XmlReader_t3121518892 * L_8 = __this->get_outerReader_14();
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_8);
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_m3847582255(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0078;
		}
	}
	{
		BaseValidator_t868759770 * L_11 = __this->get_validator_7();
		XmlResolver_t626023767 * L_12 = V_0;
		G_B2_0 = L_11;
		if (!L_12)
		{
			G_B3_0 = L_11;
			goto IL_0062;
		}
	}
	{
		XmlResolver_t626023767 * L_13 = V_0;
		XmlReader_t3121518892 * L_14 = __this->get_outerReader_14();
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_14);
		NullCheck(L_13);
		Uri_t100236324 * L_16 = VirtFuncInvoker2< Uri_t100236324 *, Uri_t100236324 *, String_t* >::Invoke(5 /* System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String) */, L_13, (Uri_t100236324 *)NULL, L_15);
		G_B4_0 = L_16;
		G_B4_1 = G_B2_0;
		goto IL_0073;
	}

IL_0062:
	{
		XmlReader_t3121518892 * L_17 = __this->get_outerReader_14();
		NullCheck(L_17);
		String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_17);
		Uri_t100236324 * L_19 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m391584135(L_19, L_18, 0, /*hidden argument*/NULL);
		G_B4_0 = L_19;
		G_B4_1 = G_B3_0;
	}

IL_0073:
	{
		NullCheck(G_B4_1);
		BaseValidator_set_BaseUri_m210650174(G_B4_1, G_B4_0, /*hidden argument*/NULL);
	}

IL_0078:
	{
		XmlTextReaderImpl_t178060594 * L_20 = __this->get_coreReaderImpl_4();
		int32_t L_21 = __this->get_validationType_6();
		G_B6_0 = L_20;
		if (!L_21)
		{
			G_B7_0 = L_20;
			goto IL_008e;
		}
	}
	{
		ValidationEventHandling_t3812646699 * L_22 = __this->get_eventHandling_11();
		G_B8_0 = L_22;
		G_B8_1 = G_B6_0;
		goto IL_008f;
	}

IL_008e:
	{
		G_B8_0 = ((ValidationEventHandling_t3812646699 *)(NULL));
		G_B8_1 = G_B7_0;
	}

IL_008f:
	{
		NullCheck(G_B8_1);
		XmlTextReaderImpl_set_ValidationEventHandling_m2865959956(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlResolver System.Xml.XmlValidatingReaderImpl::GetResolver()
extern "C" IL2CPP_METHOD_ATTR XmlResolver_t626023767 * XmlValidatingReaderImpl_GetResolver_m1302585018 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlValidatingReaderImpl_GetResolver_m1302585018_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlResolver_t626023767 * V_0 = NULL;
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_coreReaderImpl_4();
		NullCheck(L_0);
		XmlResolver_t626023767 * L_1 = XmlTextReaderImpl_GetResolver_m4267687416(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		XmlResolver_t626023767 * L_2 = V_0;
		if (L_2)
		{
			goto IL_003a;
		}
	}
	{
		XmlTextReaderImpl_t178060594 * L_3 = __this->get_coreReaderImpl_4();
		NullCheck(L_3);
		bool L_4 = XmlTextReaderImpl_get_IsResolverSet_m4279217251(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlReaderSettings_t2186285234_il2cpp_TypeInfo_var);
		bool L_5 = XmlReaderSettings_EnableLegacyXmlSettings_m199635363(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		XmlResolver_t626023767 * L_6 = ((XmlValidatingReaderImpl_t1817762384_StaticFields*)il2cpp_codegen_static_fields_for(XmlValidatingReaderImpl_t1817762384_il2cpp_TypeInfo_var))->get_s_tempResolver_15();
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		XmlUrlResolver_t817895037 * L_7 = (XmlUrlResolver_t817895037 *)il2cpp_codegen_object_new(XmlUrlResolver_t817895037_il2cpp_TypeInfo_var);
		XmlUrlResolver__ctor_m1338399436(L_7, /*hidden argument*/NULL);
		((XmlValidatingReaderImpl_t1817762384_StaticFields*)il2cpp_codegen_static_fields_for(XmlValidatingReaderImpl_t1817762384_il2cpp_TypeInfo_var))->set_s_tempResolver_15(L_7);
	}

IL_0034:
	{
		XmlResolver_t626023767 * L_8 = ((XmlValidatingReaderImpl_t1817762384_StaticFields*)il2cpp_codegen_static_fields_for(XmlValidatingReaderImpl_t1817762384_il2cpp_TypeInfo_var))->get_s_tempResolver_15();
		return L_8;
	}

IL_003a:
	{
		XmlResolver_t626023767 * L_9 = V_0;
		return L_9;
	}
}
// System.Void System.Xml.XmlValidatingReaderImpl::ProcessCoreReaderEvent()
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReaderImpl_ProcessCoreReaderEvent_m64175234 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		XmlReader_t3121518892 * L_0 = __this->get_coreReader_3();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)10))))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0061;
		}
	}
	{
		XmlReader_t3121518892 * L_5 = __this->get_coreReader_3();
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_5);
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		XmlTextReaderImpl_t178060594 * L_7 = __this->get_coreReaderImpl_4();
		NullCheck(L_7);
		int32_t L_8 = XmlTextReaderImpl_get_FragmentType_m3477093653(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)9))))
		{
			goto IL_0061;
		}
	}

IL_0037:
	{
		BaseValidator_t868759770 * L_9 = __this->get_validator_7();
		NullCheck(L_9);
		bool L_10 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean System.Xml.Schema.BaseValidator::get_PreserveWhitespace() */, L_9);
		if (!L_10)
		{
			goto IL_0061;
		}
	}
	{
		XmlTextReaderImpl_t178060594 * L_11 = __this->get_coreReaderImpl_4();
		NullCheck(L_11);
		XmlTextReaderImpl_ChangeCurrentNodeType_m3903562157(L_11, ((int32_t)14), /*hidden argument*/NULL);
		goto IL_0061;
	}

IL_0053:
	{
		XmlValidatingReaderImpl_ValidateDtd_m1235583699(__this, /*hidden argument*/NULL);
		return;
	}

IL_005a:
	{
		__this->set_parsingFunction_10(3);
	}

IL_0061:
	{
		XmlTextReaderImpl_t178060594 * L_12 = __this->get_coreReaderImpl_4();
		NullCheck(L_12);
		XmlTextReaderImpl_set_InternalSchemaType_m1836193322(L_12, NULL, /*hidden argument*/NULL);
		XmlTextReaderImpl_t178060594 * L_13 = __this->get_coreReaderImpl_4();
		NullCheck(L_13);
		XmlTextReaderImpl_set_InternalTypedValue_m2946666535(L_13, NULL, /*hidden argument*/NULL);
		BaseValidator_t868759770 * L_14 = __this->get_validator_7();
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(5 /* System.Void System.Xml.Schema.BaseValidator::Validate() */, L_14);
		return;
	}
}
// System.Xml.Schema.BaseValidator System.Xml.XmlValidatingReaderImpl::get_Validator()
extern "C" IL2CPP_METHOD_ATTR BaseValidator_t868759770 * XmlValidatingReaderImpl_get_Validator_m3197713325 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		BaseValidator_t868759770 * L_0 = __this->get_validator_7();
		return L_0;
	}
}
// System.Void System.Xml.XmlValidatingReaderImpl::set_Validator(System.Xml.Schema.BaseValidator)
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReaderImpl_set_Validator_m4221410287 (XmlValidatingReaderImpl_t1817762384 * __this, BaseValidator_t868759770 * ___value0, const RuntimeMethod* method)
{
	{
		BaseValidator_t868759770 * L_0 = ___value0;
		__this->set_validator_7(L_0);
		return;
	}
}
// System.Xml.XmlNamespaceManager System.Xml.XmlValidatingReaderImpl::get_NamespaceManager()
extern "C" IL2CPP_METHOD_ATTR XmlNamespaceManager_t418790500 * XmlValidatingReaderImpl_get_NamespaceManager_m2960863086 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_coreReaderImpl_4();
		NullCheck(L_0);
		XmlNamespaceManager_t418790500 * L_1 = VirtFuncInvoker0< XmlNamespaceManager_t418790500 * >::Invoke(43 /* System.Xml.XmlNamespaceManager System.Xml.XmlReader::get_NamespaceManager() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlValidatingReaderImpl::get_StandAlone()
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReaderImpl_get_StandAlone_m223102258 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_coreReaderImpl_4();
		NullCheck(L_0);
		bool L_1 = XmlTextReaderImpl_get_StandAlone_m94883606(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.XmlValidatingReaderImpl::set_SchemaTypeObject(System.Object)
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReaderImpl_set_SchemaTypeObject_m360601687 (XmlValidatingReaderImpl_t1817762384 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_coreReaderImpl_4();
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		XmlTextReaderImpl_set_InternalSchemaType_m1836193322(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Xml.XmlValidatingReaderImpl::get_TypedValueObject()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XmlValidatingReaderImpl_get_TypedValueObject_m3914973040 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_coreReaderImpl_4();
		NullCheck(L_0);
		RuntimeObject * L_1 = XmlTextReaderImpl_get_InternalTypedValue_m885148612(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.XmlValidatingReaderImpl::set_TypedValueObject(System.Object)
extern "C" IL2CPP_METHOD_ATTR void XmlValidatingReaderImpl_set_TypedValueObject_m3784118312 (XmlValidatingReaderImpl_t1817762384 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_coreReaderImpl_4();
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		XmlTextReaderImpl_set_InternalTypedValue_m2946666535(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Xml.XmlValidatingReaderImpl::AddDefaultAttribute(System.Xml.Schema.SchemaAttDef)
extern "C" IL2CPP_METHOD_ATTR bool XmlValidatingReaderImpl_AddDefaultAttribute_m1870164191 (XmlValidatingReaderImpl_t1817762384 * __this, SchemaAttDef_t2429541159 * ___attdef0, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_coreReaderImpl_4();
		SchemaAttDef_t2429541159 * L_1 = ___attdef0;
		NullCheck(L_0);
		bool L_2 = XmlTextReaderImpl_AddDefaultAttributeNonDtd_m3583377424(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Xml.IDtdInfo System.Xml.XmlValidatingReaderImpl::get_DtdInfo()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* XmlValidatingReaderImpl_get_DtdInfo_m1000556615 (XmlValidatingReaderImpl_t1817762384 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReaderImpl_t178060594 * L_0 = __this->get_coreReaderImpl_4();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(44 /* System.Xml.IDtdInfo System.Xml.XmlReader::get_DtdInfo() */, L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object System.Xml.XmlValidatingReaderImpl/ValidationEventHandling::System.Xml.IValidationEventHandling.get_EventHandler()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ValidationEventHandling_System_Xml_IValidationEventHandling_get_EventHandler_m4057097096 (ValidationEventHandling_t3812646699 * __this, const RuntimeMethod* method)
{
	{
		ValidationEventHandler_t791314227 * L_0 = __this->get_eventHandler_1();
		return L_0;
	}
}
// System.Void System.Xml.XmlValidatingReaderImpl/ValidationEventHandling::System.Xml.IValidationEventHandling.SendEvent(System.Exception,System.Xml.Schema.XmlSeverityType)
extern "C" IL2CPP_METHOD_ATTR void ValidationEventHandling_System_Xml_IValidationEventHandling_SendEvent_m1258189665 (ValidationEventHandling_t3812646699 * __this, Exception_t * ___exception0, int32_t ___severity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValidationEventHandling_System_Xml_IValidationEventHandling_SendEvent_m1258189665_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValidationEventHandler_t791314227 * L_0 = __this->get_eventHandler_1();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		ValidationEventHandler_t791314227 * L_1 = __this->get_eventHandler_1();
		XmlValidatingReaderImpl_t1817762384 * L_2 = __this->get_reader_0();
		Exception_t * L_3 = ___exception0;
		int32_t L_4 = ___severity1;
		ValidationEventArgs_t2784773869 * L_5 = (ValidationEventArgs_t2784773869 *)il2cpp_codegen_object_new(ValidationEventArgs_t2784773869_il2cpp_TypeInfo_var);
		ValidationEventArgs__ctor_m2610404669(L_5, ((XmlSchemaException_t3511258692 *)CastclassClass((RuntimeObject*)L_3, XmlSchemaException_t3511258692_il2cpp_TypeInfo_var)), L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		ValidationEventHandler_Invoke_m3984227947(L_1, L_2, L_5, /*hidden argument*/NULL);
		return;
	}

IL_0026:
	{
		XmlValidatingReaderImpl_t1817762384 * L_6 = __this->get_reader_0();
		NullCheck(L_6);
		int32_t L_7 = XmlValidatingReaderImpl_get_ValidationType_m2399373228(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_8 = ___severity1;
		if (L_8)
		{
			goto IL_0038;
		}
	}
	{
		Exception_t * L_9 = ___exception0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, ValidationEventHandling_System_Xml_IValidationEventHandling_SendEvent_m1258189665_RuntimeMethod_var);
	}

IL_0038:
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
// System.Void System.Xml.XmlWhitespace::.ctor(System.String,System.Xml.XmlDocument)
extern "C" IL2CPP_METHOD_ATTR void XmlWhitespace__ctor_m949230574 (XmlWhitespace_t131741354 * __this, String_t* ___strData0, XmlDocument_t2837193595 * ___doc1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace__ctor_m949230574_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___strData0;
		XmlDocument_t2837193595 * L_1 = ___doc1;
		XmlCharacterData__ctor_m3935345337(__this, L_0, L_1, /*hidden argument*/NULL);
		XmlDocument_t2837193595 * L_2 = ___doc1;
		NullCheck(L_2);
		bool L_3 = XmlDocument_get_IsLoading_m1265579576(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_4 = ___strData0;
		bool L_5 = XmlCharacterData_CheckOnData_m3552562861(__this, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_6 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral3831402877, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, XmlWhitespace__ctor_m949230574_RuntimeMethod_var);
	}

IL_0029:
	{
		return;
	}
}
// System.String System.Xml.XmlWhitespace::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlWhitespace_get_Name_m3062444240 (XmlWhitespace_t131741354 * __this, const RuntimeMethod* method)
{
	{
		XmlDocument_t2837193595 * L_0 = VirtFuncInvoker0< XmlDocument_t2837193595 * >::Invoke(15 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		NullCheck(L_0);
		String_t* L_1 = L_0->get_strNonSignificantWhitespaceName_33();
		return L_1;
	}
}
// System.String System.Xml.XmlWhitespace::get_LocalName()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlWhitespace_get_LocalName_m4124641324 (XmlWhitespace_t131741354 * __this, const RuntimeMethod* method)
{
	{
		XmlDocument_t2837193595 * L_0 = VirtFuncInvoker0< XmlDocument_t2837193595 * >::Invoke(15 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		NullCheck(L_0);
		String_t* L_1 = L_0->get_strNonSignificantWhitespaceName_33();
		return L_1;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlWhitespace::get_NodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlWhitespace_get_NodeType_m4071479963 (XmlWhitespace_t131741354 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)13));
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::get_ParentNode()
extern "C" IL2CPP_METHOD_ATTR XmlNode_t3767805227 * XmlWhitespace_get_ParentNode_m3161215339 (XmlWhitespace_t131741354 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	XmlNode_t3767805227 * V_1 = NULL;
	{
		XmlNode_t3767805227 * L_0 = ((XmlNode_t3767805227 *)__this)->get_parentNode_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)3))) > ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)9))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)13)))) > ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0046;
	}

IL_0020:
	{
		XmlNode_t3767805227 * L_5 = XmlNode_get_ParentNode_m3304904414(__this, /*hidden argument*/NULL);
		return L_5;
	}

IL_0027:
	{
		XmlNode_t3767805227 * L_6 = ((XmlNode_t3767805227 *)__this)->get_parentNode_0();
		NullCheck(L_6);
		XmlNode_t3767805227 * L_7 = L_6->get_parentNode_0();
		V_1 = L_7;
		goto IL_003c;
	}

IL_0035:
	{
		XmlNode_t3767805227 * L_8 = V_1;
		NullCheck(L_8);
		XmlNode_t3767805227 * L_9 = L_8->get_parentNode_0();
		V_1 = L_9;
	}

IL_003c:
	{
		XmlNode_t3767805227 * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = VirtFuncInvoker0< bool >::Invoke(45 /* System.Boolean System.Xml.XmlNode::get_IsText() */, L_10);
		if (L_11)
		{
			goto IL_0035;
		}
	}
	{
		XmlNode_t3767805227 * L_12 = V_1;
		return L_12;
	}

IL_0046:
	{
		XmlNode_t3767805227 * L_13 = ((XmlNode_t3767805227 *)__this)->get_parentNode_0();
		return L_13;
	}
}
// System.String System.Xml.XmlWhitespace::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlWhitespace_get_Value_m3008068225 (XmlWhitespace_t131741354 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(46 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		return L_0;
	}
}
// System.Void System.Xml.XmlWhitespace::set_Value(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWhitespace_set_Value_m1380309567 (XmlWhitespace_t131741354 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_set_Value_m1380309567_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		bool L_1 = XmlCharacterData_CheckOnData_m3552562861(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_2 = ___value0;
		VirtActionInvoker1< String_t* >::Invoke(47 /* System.Void System.Xml.XmlCharacterData::set_Data(System.String) */, __this, L_2);
		return;
	}

IL_0011:
	{
		String_t* L_3 = Res_GetString_m3369169461(NULL /*static, unused*/, _stringLiteral3831402877, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlWhitespace_set_Value_m1380309567_RuntimeMethod_var);
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::CloneNode(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR XmlNode_t3767805227 * XmlWhitespace_CloneNode_m2585972626 (XmlWhitespace_t131741354 * __this, bool ___deep0, const RuntimeMethod* method)
{
	{
		XmlDocument_t2837193595 * L_0 = VirtFuncInvoker0< XmlDocument_t2837193595 * >::Invoke(15 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(46 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		NullCheck(L_0);
		XmlWhitespace_t131741354 * L_2 = VirtFuncInvoker1< XmlWhitespace_t131741354 *, String_t* >::Invoke(57 /* System.Xml.XmlWhitespace System.Xml.XmlDocument::CreateWhitespace(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Xml.XmlWhitespace::get_IsText()
extern "C" IL2CPP_METHOD_ATTR bool XmlWhitespace_get_IsText_m1816055620 (XmlWhitespace_t131741354 * __this, const RuntimeMethod* method)
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
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteStartElement_m4166303208 (XmlWriter_t127905479 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		String_t* L_1 = ___ns1;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(6 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, __this, (String_t*)NULL, L_0, L_1);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteStartElement_m3748634885 (XmlWriter_t127905479 * __this, String_t* ___localName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(6 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, __this, (String_t*)NULL, L_0, (String_t*)NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteAttributeString_m3906092358 (XmlWriter_t127905479 * __this, String_t* ___localName0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(9 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, (String_t*)NULL, L_0, (String_t*)NULL);
		String_t* L_1 = ___value1;
		VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_1);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::Close()
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_Close_m2492181258 (XmlWriter_t127905479 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttributes(System.Xml.XmlReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteAttributes_m2606792557 (XmlWriter_t127905479 * __this, XmlReader_t3121518892 * ___reader0, bool ___defattr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_WriteAttributes_m2606792557_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader_t3121518892 * L_0 = ___reader0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3529812268, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlWriter_WriteAttributes_m2606792557_RuntimeMethod_var);
	}

IL_000e:
	{
		XmlReader_t3121518892 * L_2 = ___reader0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		XmlReader_t3121518892 * L_4 = ___reader0;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_003c;
		}
	}

IL_0021:
	{
		XmlReader_t3121518892 * L_6 = ___reader0;
		NullCheck(L_6);
		bool L_7 = VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Xml.XmlReader::MoveToFirstAttribute() */, L_6);
		if (!L_7)
		{
			goto IL_00b3;
		}
	}
	{
		XmlReader_t3121518892 * L_8 = ___reader0;
		bool L_9 = ___defattr1;
		VirtActionInvoker2< XmlReader_t3121518892 *, bool >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteAttributes(System.Xml.XmlReader,System.Boolean) */, __this, L_8, L_9);
		XmlReader_t3121518892 * L_10 = ___reader0;
		NullCheck(L_10);
		VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_10);
		return;
	}

IL_003c:
	{
		XmlReader_t3121518892 * L_11 = ___reader0;
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_11);
		if ((((int32_t)L_12) == ((int32_t)2)))
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		XmlException_t1761730631 * L_14 = (XmlException_t1761730631 *)il2cpp_codegen_object_new(XmlException_t1761730631_il2cpp_TypeInfo_var);
		XmlException__ctor_m400140246(L_14, _stringLiteral1595870731, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, XmlWriter_WriteAttributes_m2606792557_RuntimeMethod_var);
	}

IL_0055:
	{
		bool L_15 = ___defattr1;
		if (L_15)
		{
			goto IL_0060;
		}
	}
	{
		XmlReader_t3121518892 * L_16 = ___reader0;
		NullCheck(L_16);
		bool L_17 = XmlReader_get_IsDefaultInternal_m3807367175(L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00ab;
		}
	}

IL_0060:
	{
		XmlReader_t3121518892 * L_18 = ___reader0;
		NullCheck(L_18);
		String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Xml.XmlReader::get_Prefix() */, L_18);
		XmlReader_t3121518892 * L_20 = ___reader0;
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_20);
		XmlReader_t3121518892 * L_22 = ___reader0;
		NullCheck(L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_22);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(9 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, L_19, L_21, L_23);
		goto IL_009d;
	}

IL_007a:
	{
		XmlReader_t3121518892 * L_24 = ___reader0;
		NullCheck(L_24);
		int32_t L_25 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_24);
		if ((!(((uint32_t)L_25) == ((uint32_t)5))))
		{
			goto IL_0091;
		}
	}
	{
		XmlReader_t3121518892 * L_26 = ___reader0;
		NullCheck(L_26);
		String_t* L_27 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlReader::get_Name() */, L_26);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.Xml.XmlWriter::WriteEntityRef(System.String) */, __this, L_27);
		goto IL_009d;
	}

IL_0091:
	{
		XmlReader_t3121518892 * L_28 = ___reader0;
		NullCheck(L_28);
		String_t* L_29 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_28);
		VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_29);
	}

IL_009d:
	{
		XmlReader_t3121518892 * L_30 = ___reader0;
		NullCheck(L_30);
		bool L_31 = VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Xml.XmlReader::ReadAttributeValue() */, L_30);
		if (L_31)
		{
			goto IL_007a;
		}
	}
	{
		VirtActionInvoker0::Invoke(10 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, __this);
	}

IL_00ab:
	{
		XmlReader_t3121518892 * L_32 = ___reader0;
		NullCheck(L_32);
		bool L_33 = VirtFuncInvoker0< bool >::Invoke(23 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_32);
		if (L_33)
		{
			goto IL_0055;
		}
	}

IL_00b3:
	{
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteNode_m263666930 (XmlWriter_t127905479 * __this, XmlReader_t3121518892 * ___reader0, bool ___defattr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_WriteNode_m263666930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B5_0 = 0;
	{
		XmlReader_t3121518892 * L_0 = ___reader0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3529812268, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlWriter_WriteNode_m263666930_RuntimeMethod_var);
	}

IL_000e:
	{
		XmlReader_t3121518892 * L_2 = ___reader0;
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(34 /* System.Boolean System.Xml.XmlReader::get_CanReadValueChunk() */, L_2);
		V_0 = L_3;
		XmlReader_t3121518892 * L_4 = ___reader0;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_4);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		XmlReader_t3121518892 * L_6 = ___reader0;
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_6);
		G_B5_0 = L_7;
		goto IL_0026;
	}

IL_0025:
	{
		G_B5_0 = (-1);
	}

IL_0026:
	{
		V_1 = G_B5_0;
	}

IL_0027:
	{
		XmlReader_t3121518892 * L_8 = ___reader0;
		NullCheck(L_8);
		int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_8);
		V_2 = L_9;
		int32_t L_10 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)))
		{
			case 0:
			{
				goto IL_007f;
			}
			case 1:
			{
				goto IL_0186;
			}
			case 2:
			{
				goto IL_00b5;
			}
			case 3:
			{
				goto IL_0118;
			}
			case 4:
			{
				goto IL_0126;
			}
			case 5:
			{
				goto IL_0186;
			}
			case 6:
			{
				goto IL_0134;
			}
			case 7:
			{
				goto IL_0172;
			}
			case 8:
			{
				goto IL_0186;
			}
			case 9:
			{
				goto IL_0148;
			}
			case 10:
			{
				goto IL_0186;
			}
			case 11:
			{
				goto IL_0186;
			}
			case 12:
			{
				goto IL_010a;
			}
			case 13:
			{
				goto IL_010a;
			}
			case 14:
			{
				goto IL_0180;
			}
			case 15:
			{
				goto IL_0186;
			}
			case 16:
			{
				goto IL_0134;
			}
		}
	}
	{
		goto IL_0186;
	}

IL_007f:
	{
		XmlReader_t3121518892 * L_11 = ___reader0;
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Xml.XmlReader::get_Prefix() */, L_11);
		XmlReader_t3121518892 * L_13 = ___reader0;
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_13);
		XmlReader_t3121518892 * L_15 = ___reader0;
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_15);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(6 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, __this, L_12, L_14, L_16);
		XmlReader_t3121518892 * L_17 = ___reader0;
		bool L_18 = ___defattr1;
		VirtActionInvoker2< XmlReader_t3121518892 *, bool >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteAttributes(System.Xml.XmlReader,System.Boolean) */, __this, L_17, L_18);
		XmlReader_t3121518892 * L_19 = ___reader0;
		NullCheck(L_19);
		bool L_20 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_19);
		if (!L_20)
		{
			goto IL_0186;
		}
	}
	{
		VirtActionInvoker0::Invoke(7 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, __this);
		goto IL_0186;
	}

IL_00b5:
	{
		bool L_21 = V_0;
		if (!L_21)
		{
			goto IL_00fc;
		}
	}
	{
		CharU5BU5D_t3528271667* L_22 = __this->get_writeNodeBuffer_0();
		if (L_22)
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t3528271667* L_23 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->set_writeNodeBuffer_0(L_23);
		goto IL_00e0;
	}

IL_00d2:
	{
		CharU5BU5D_t3528271667* L_24 = __this->get_writeNodeBuffer_0();
		int32_t L_25 = V_3;
		VirtActionInvoker3< CharU5BU5D_t3528271667*, int32_t, int32_t >::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteChars(System.Char[],System.Int32,System.Int32) */, __this, L_24, 0, L_25);
	}

IL_00e0:
	{
		XmlReader_t3121518892 * L_26 = ___reader0;
		CharU5BU5D_t3528271667* L_27 = __this->get_writeNodeBuffer_0();
		NullCheck(L_26);
		int32_t L_28 = VirtFuncInvoker3< int32_t, CharU5BU5D_t3528271667*, int32_t, int32_t >::Invoke(35 /* System.Int32 System.Xml.XmlReader::ReadValueChunk(System.Char[],System.Int32,System.Int32) */, L_26, L_27, 0, ((int32_t)1024));
		int32_t L_29 = L_28;
		V_3 = L_29;
		if ((((int32_t)L_29) > ((int32_t)0)))
		{
			goto IL_00d2;
		}
	}
	{
		goto IL_0186;
	}

IL_00fc:
	{
		XmlReader_t3121518892 * L_30 = ___reader0;
		NullCheck(L_30);
		String_t* L_31 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_30);
		VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_31);
		goto IL_0186;
	}

IL_010a:
	{
		XmlReader_t3121518892 * L_32 = ___reader0;
		NullCheck(L_32);
		String_t* L_33 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_32);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Xml.XmlWriter::WriteWhitespace(System.String) */, __this, L_33);
		goto IL_0186;
	}

IL_0118:
	{
		XmlReader_t3121518892 * L_34 = ___reader0;
		NullCheck(L_34);
		String_t* L_35 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_34);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void System.Xml.XmlWriter::WriteCData(System.String) */, __this, L_35);
		goto IL_0186;
	}

IL_0126:
	{
		XmlReader_t3121518892 * L_36 = ___reader0;
		NullCheck(L_36);
		String_t* L_37 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlReader::get_Name() */, L_36);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.Xml.XmlWriter::WriteEntityRef(System.String) */, __this, L_37);
		goto IL_0186;
	}

IL_0134:
	{
		XmlReader_t3121518892 * L_38 = ___reader0;
		NullCheck(L_38);
		String_t* L_39 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlReader::get_Name() */, L_38);
		XmlReader_t3121518892 * L_40 = ___reader0;
		NullCheck(L_40);
		String_t* L_41 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_40);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(13 /* System.Void System.Xml.XmlWriter::WriteProcessingInstruction(System.String,System.String) */, __this, L_39, L_41);
		goto IL_0186;
	}

IL_0148:
	{
		XmlReader_t3121518892 * L_42 = ___reader0;
		NullCheck(L_42);
		String_t* L_43 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlReader::get_Name() */, L_42);
		XmlReader_t3121518892 * L_44 = ___reader0;
		NullCheck(L_44);
		String_t* L_45 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(19 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_44, _stringLiteral3984887517);
		XmlReader_t3121518892 * L_46 = ___reader0;
		NullCheck(L_46);
		String_t* L_47 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(19 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_46, _stringLiteral3261774195);
		XmlReader_t3121518892 * L_48 = ___reader0;
		NullCheck(L_48);
		String_t* L_49 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_48);
		VirtActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(5 /* System.Void System.Xml.XmlWriter::WriteDocType(System.String,System.String,System.String,System.String) */, __this, L_43, L_45, L_47, L_49);
		goto IL_0186;
	}

IL_0172:
	{
		XmlReader_t3121518892 * L_50 = ___reader0;
		NullCheck(L_50);
		String_t* L_51 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_50);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Xml.XmlWriter::WriteComment(System.String) */, __this, L_51);
		goto IL_0186;
	}

IL_0180:
	{
		VirtActionInvoker0::Invoke(8 /* System.Void System.Xml.XmlWriter::WriteFullEndElement() */, __this);
	}

IL_0186:
	{
		XmlReader_t3121518892 * L_52 = ___reader0;
		NullCheck(L_52);
		bool L_53 = VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Xml.XmlReader::Read() */, L_52);
		if (!L_53)
		{
			goto IL_01b0;
		}
	}
	{
		int32_t L_54 = V_1;
		XmlReader_t3121518892 * L_55 = ___reader0;
		NullCheck(L_55);
		int32_t L_56 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_55);
		if ((((int32_t)L_54) < ((int32_t)L_56)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_57 = V_1;
		XmlReader_t3121518892 * L_58 = ___reader0;
		NullCheck(L_58);
		int32_t L_59 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_58);
		if ((!(((uint32_t)L_57) == ((uint32_t)L_59))))
		{
			goto IL_01b0;
		}
	}
	{
		XmlReader_t3121518892 * L_60 = ___reader0;
		NullCheck(L_60);
		int32_t L_61 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_60);
		if ((((int32_t)L_61) == ((int32_t)((int32_t)15))))
		{
			goto IL_0027;
		}
	}

IL_01b0:
	{
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteElementString(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteElementString_m1817387795 (XmlWriter_t127905479 * __this, String_t* ___localName0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		String_t* L_1 = ___value1;
		XmlWriter_WriteElementString_m3038507460(__this, L_0, (String_t*)NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteElementString(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteElementString_m3038507460 (XmlWriter_t127905479 * __this, String_t* ___localName0, String_t* ___ns1, String_t* ___value2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		String_t* L_1 = ___ns1;
		XmlWriter_WriteStartElement_m4166303208(__this, L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___value2;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_3 = ___value2;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_5 = ___value2;
		VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_5);
	}

IL_001a:
	{
		VirtActionInvoker0::Invoke(7 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::Dispose()
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_Dispose_m1445213084 (XmlWriter_t127905479 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(22 /* System.Void System.Xml.XmlWriter::Dispose(System.Boolean) */, __this, (bool)1);
		return;
	}
}
// System.Void System.Xml.XmlWriter::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_Dispose_m3961600049 (XmlWriter_t127905479 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Xml.WriteState System.Xml.XmlWriter::get_WriteState() */, __this);
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_0012;
		}
	}
	{
		VirtActionInvoker0::Invoke(19 /* System.Void System.Xml.XmlWriter::Close() */, __this);
	}

IL_0012:
	{
		return;
	}
}
// System.Void System.Xml.XmlWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlWriter__ctor_m2782267819 (XmlWriter_t127905479 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
