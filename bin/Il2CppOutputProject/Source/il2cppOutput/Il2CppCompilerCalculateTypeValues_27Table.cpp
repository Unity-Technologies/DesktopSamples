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


// Mono.Security.Interface.IMonoSslStream
struct IMonoSslStream_t1819859871;
// Mono.Security.Interface.MonoTlsProvider
struct MonoTlsProvider_t3152003291;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t736164020;
// System.Collections.Generic.Dictionary`2<System.Threading.Thread,System.Diagnostics.StackTrace>
struct Dictionary_2_t922677896;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t2098880770;
// System.Collections.Generic.List`1<System.Net.IPAddress>
struct List_1_t1713852332;
// System.Collections.Generic.List`1<System.Threading.Thread>
struct List_1_t3772910811;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.ObjectModel.Collection`1<System.Net.IPAddress>
struct Collection_1_t3481100804;
// System.Configuration.Configuration
struct Configuration_t2529364143;
// System.Configuration.ConfigurationElement/SaveContext
struct SaveContext_t3075152201;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t446763386;
// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t4066281341;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3590861854;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t2852175726;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t2786897858;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t1151641153;
// System.Configuration.ElementInformation
struct ElementInformation_t2651568025;
// System.Configuration.ElementMap
struct ElementMap_t2160633803;
// System.Configuration.IConfigurationSectionHandler
struct IConfigurationSectionHandler_t3614337894;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t687896682;
// System.Configuration.SectionInformation
struct SectionInformation_t2821611020;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t2070362453;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t156472862;
// System.IOAsyncCallback
struct IOAsyncCallback_t705871752;
// System.IOSelectorJob
struct IOSelectorJob_t2199748873;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Net.EndPoint
struct EndPoint_t982345378;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t596328627;
// System.Net.IWebProxy
struct IWebProxy_t688979836;
// System.Net.NetworkInformation.IPAddressCollection
struct IPAddressCollection_t2315030214;
// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t3964383369;
// System.Net.NetworkInformation.NetworkInterfaceFactory
struct NetworkInterfaceFactory_t1756522298;
// System.Net.NetworkInformation.UnixNetworkInterface
struct UnixNetworkInterface_t2401762829;
// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics
struct Win32IPv4InterfaceStatistics_t3096671123;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t610293888;
// System.Net.Sockets.Socket
struct Socket_t1119025450;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t713131622;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3399372417;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t194917408;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.RegularExpressions.Regex
struct Regex_t3657309853;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2974092902;
// System.Threading.WaitCallback
struct WaitCallback_t2448485498;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Void
struct Void_t1185182177;

struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;



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
#ifndef CONFIGURATIONELEMENT_T3318566633_H
#define CONFIGURATIONELEMENT_T3318566633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElement
struct  ConfigurationElement_t3318566633  : public RuntimeObject
{
public:
	// System.String System.Configuration.ConfigurationElement::rawXml
	String_t* ___rawXml_0;
	// System.Boolean System.Configuration.ConfigurationElement::modified
	bool ___modified_1;
	// System.Configuration.ElementMap System.Configuration.ConfigurationElement::map
	ElementMap_t2160633803 * ___map_2;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::keyProps
	ConfigurationPropertyCollection_t2852175726 * ___keyProps_3;
	// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElement::defaultCollection
	ConfigurationElementCollection_t446763386 * ___defaultCollection_4;
	// System.Boolean System.Configuration.ConfigurationElement::readOnly
	bool ___readOnly_5;
	// System.Configuration.ElementInformation System.Configuration.ConfigurationElement::elementInfo
	ElementInformation_t2651568025 * ___elementInfo_6;
	// System.Configuration.Configuration System.Configuration.ConfigurationElement::_configuration
	Configuration_t2529364143 * ____configuration_7;
	// System.Boolean System.Configuration.ConfigurationElement::elementPresent
	bool ___elementPresent_8;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllAttributesExcept
	ConfigurationLockCollection_t4066281341 * ___lockAllAttributesExcept_9;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllElementsExcept
	ConfigurationLockCollection_t4066281341 * ___lockAllElementsExcept_10;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAttributes
	ConfigurationLockCollection_t4066281341 * ___lockAttributes_11;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockElements
	ConfigurationLockCollection_t4066281341 * ___lockElements_12;
	// System.Boolean System.Configuration.ConfigurationElement::lockItem
	bool ___lockItem_13;
	// System.Configuration.ConfigurationElement/SaveContext System.Configuration.ConfigurationElement::saveContext
	SaveContext_t3075152201 * ___saveContext_14;

public:
	inline static int32_t get_offset_of_rawXml_0() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___rawXml_0)); }
	inline String_t* get_rawXml_0() const { return ___rawXml_0; }
	inline String_t** get_address_of_rawXml_0() { return &___rawXml_0; }
	inline void set_rawXml_0(String_t* value)
	{
		___rawXml_0 = value;
		Il2CppCodeGenWriteBarrier((&___rawXml_0), value);
	}

	inline static int32_t get_offset_of_modified_1() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___modified_1)); }
	inline bool get_modified_1() const { return ___modified_1; }
	inline bool* get_address_of_modified_1() { return &___modified_1; }
	inline void set_modified_1(bool value)
	{
		___modified_1 = value;
	}

	inline static int32_t get_offset_of_map_2() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___map_2)); }
	inline ElementMap_t2160633803 * get_map_2() const { return ___map_2; }
	inline ElementMap_t2160633803 ** get_address_of_map_2() { return &___map_2; }
	inline void set_map_2(ElementMap_t2160633803 * value)
	{
		___map_2 = value;
		Il2CppCodeGenWriteBarrier((&___map_2), value);
	}

	inline static int32_t get_offset_of_keyProps_3() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___keyProps_3)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_keyProps_3() const { return ___keyProps_3; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_keyProps_3() { return &___keyProps_3; }
	inline void set_keyProps_3(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___keyProps_3 = value;
		Il2CppCodeGenWriteBarrier((&___keyProps_3), value);
	}

	inline static int32_t get_offset_of_defaultCollection_4() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___defaultCollection_4)); }
	inline ConfigurationElementCollection_t446763386 * get_defaultCollection_4() const { return ___defaultCollection_4; }
	inline ConfigurationElementCollection_t446763386 ** get_address_of_defaultCollection_4() { return &___defaultCollection_4; }
	inline void set_defaultCollection_4(ConfigurationElementCollection_t446763386 * value)
	{
		___defaultCollection_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultCollection_4), value);
	}

	inline static int32_t get_offset_of_readOnly_5() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___readOnly_5)); }
	inline bool get_readOnly_5() const { return ___readOnly_5; }
	inline bool* get_address_of_readOnly_5() { return &___readOnly_5; }
	inline void set_readOnly_5(bool value)
	{
		___readOnly_5 = value;
	}

	inline static int32_t get_offset_of_elementInfo_6() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___elementInfo_6)); }
	inline ElementInformation_t2651568025 * get_elementInfo_6() const { return ___elementInfo_6; }
	inline ElementInformation_t2651568025 ** get_address_of_elementInfo_6() { return &___elementInfo_6; }
	inline void set_elementInfo_6(ElementInformation_t2651568025 * value)
	{
		___elementInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___elementInfo_6), value);
	}

	inline static int32_t get_offset_of__configuration_7() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ____configuration_7)); }
	inline Configuration_t2529364143 * get__configuration_7() const { return ____configuration_7; }
	inline Configuration_t2529364143 ** get_address_of__configuration_7() { return &____configuration_7; }
	inline void set__configuration_7(Configuration_t2529364143 * value)
	{
		____configuration_7 = value;
		Il2CppCodeGenWriteBarrier((&____configuration_7), value);
	}

	inline static int32_t get_offset_of_elementPresent_8() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___elementPresent_8)); }
	inline bool get_elementPresent_8() const { return ___elementPresent_8; }
	inline bool* get_address_of_elementPresent_8() { return &___elementPresent_8; }
	inline void set_elementPresent_8(bool value)
	{
		___elementPresent_8 = value;
	}

	inline static int32_t get_offset_of_lockAllAttributesExcept_9() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockAllAttributesExcept_9)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockAllAttributesExcept_9() const { return ___lockAllAttributesExcept_9; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockAllAttributesExcept_9() { return &___lockAllAttributesExcept_9; }
	inline void set_lockAllAttributesExcept_9(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockAllAttributesExcept_9 = value;
		Il2CppCodeGenWriteBarrier((&___lockAllAttributesExcept_9), value);
	}

	inline static int32_t get_offset_of_lockAllElementsExcept_10() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockAllElementsExcept_10)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockAllElementsExcept_10() const { return ___lockAllElementsExcept_10; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockAllElementsExcept_10() { return &___lockAllElementsExcept_10; }
	inline void set_lockAllElementsExcept_10(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockAllElementsExcept_10 = value;
		Il2CppCodeGenWriteBarrier((&___lockAllElementsExcept_10), value);
	}

	inline static int32_t get_offset_of_lockAttributes_11() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockAttributes_11)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockAttributes_11() const { return ___lockAttributes_11; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockAttributes_11() { return &___lockAttributes_11; }
	inline void set_lockAttributes_11(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockAttributes_11 = value;
		Il2CppCodeGenWriteBarrier((&___lockAttributes_11), value);
	}

	inline static int32_t get_offset_of_lockElements_12() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockElements_12)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockElements_12() const { return ___lockElements_12; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockElements_12() { return &___lockElements_12; }
	inline void set_lockElements_12(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockElements_12 = value;
		Il2CppCodeGenWriteBarrier((&___lockElements_12), value);
	}

	inline static int32_t get_offset_of_lockItem_13() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockItem_13)); }
	inline bool get_lockItem_13() const { return ___lockItem_13; }
	inline bool* get_address_of_lockItem_13() { return &___lockItem_13; }
	inline void set_lockItem_13(bool value)
	{
		___lockItem_13 = value;
	}

	inline static int32_t get_offset_of_saveContext_14() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___saveContext_14)); }
	inline SaveContext_t3075152201 * get_saveContext_14() const { return ___saveContext_14; }
	inline SaveContext_t3075152201 ** get_address_of_saveContext_14() { return &___saveContext_14; }
	inline void set_saveContext_14(SaveContext_t3075152201 * value)
	{
		___saveContext_14 = value;
		Il2CppCodeGenWriteBarrier((&___saveContext_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONELEMENT_T3318566633_H
#ifndef CONFIGURATIONSECTIONGROUP_T4179402520_H
#define CONFIGURATIONSECTIONGROUP_T4179402520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSectionGroup
struct  ConfigurationSectionGroup_t4179402520  : public RuntimeObject
{
public:
	// System.Configuration.ConfigurationSectionCollection System.Configuration.ConfigurationSectionGroup::sections
	ConfigurationSectionCollection_t2786897858 * ___sections_0;
	// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.ConfigurationSectionGroup::groups
	ConfigurationSectionGroupCollection_t1151641153 * ___groups_1;
	// System.Configuration.Configuration System.Configuration.ConfigurationSectionGroup::config
	Configuration_t2529364143 * ___config_2;
	// System.Configuration.SectionGroupInfo System.Configuration.ConfigurationSectionGroup::group
	SectionGroupInfo_t687896682 * ___group_3;
	// System.Boolean System.Configuration.ConfigurationSectionGroup::initialized
	bool ___initialized_4;

public:
	inline static int32_t get_offset_of_sections_0() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___sections_0)); }
	inline ConfigurationSectionCollection_t2786897858 * get_sections_0() const { return ___sections_0; }
	inline ConfigurationSectionCollection_t2786897858 ** get_address_of_sections_0() { return &___sections_0; }
	inline void set_sections_0(ConfigurationSectionCollection_t2786897858 * value)
	{
		___sections_0 = value;
		Il2CppCodeGenWriteBarrier((&___sections_0), value);
	}

	inline static int32_t get_offset_of_groups_1() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___groups_1)); }
	inline ConfigurationSectionGroupCollection_t1151641153 * get_groups_1() const { return ___groups_1; }
	inline ConfigurationSectionGroupCollection_t1151641153 ** get_address_of_groups_1() { return &___groups_1; }
	inline void set_groups_1(ConfigurationSectionGroupCollection_t1151641153 * value)
	{
		___groups_1 = value;
		Il2CppCodeGenWriteBarrier((&___groups_1), value);
	}

	inline static int32_t get_offset_of_config_2() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___config_2)); }
	inline Configuration_t2529364143 * get_config_2() const { return ___config_2; }
	inline Configuration_t2529364143 ** get_address_of_config_2() { return &___config_2; }
	inline void set_config_2(Configuration_t2529364143 * value)
	{
		___config_2 = value;
		Il2CppCodeGenWriteBarrier((&___config_2), value);
	}

	inline static int32_t get_offset_of_group_3() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___group_3)); }
	inline SectionGroupInfo_t687896682 * get_group_3() const { return ___group_3; }
	inline SectionGroupInfo_t687896682 ** get_address_of_group_3() { return &___group_3; }
	inline void set_group_3(SectionGroupInfo_t687896682 * value)
	{
		___group_3 = value;
		Il2CppCodeGenWriteBarrier((&___group_3), value);
	}

	inline static int32_t get_offset_of_initialized_4() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___initialized_4)); }
	inline bool get_initialized_4() const { return ___initialized_4; }
	inline bool* get_address_of_initialized_4() { return &___initialized_4; }
	inline void set_initialized_4(bool value)
	{
		___initialized_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONSECTIONGROUP_T4179402520_H
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
#ifndef IOASYNCRESULT_T3640145766_H
#define IOASYNCRESULT_T3640145766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IOAsyncResult
struct  IOAsyncResult_t3640145766  : public RuntimeObject
{
public:
	// System.AsyncCallback System.IOAsyncResult::async_callback
	AsyncCallback_t3962456242 * ___async_callback_0;
	// System.Object System.IOAsyncResult::async_state
	RuntimeObject * ___async_state_1;
	// System.Threading.ManualResetEvent System.IOAsyncResult::wait_handle
	ManualResetEvent_t451242010 * ___wait_handle_2;
	// System.Boolean System.IOAsyncResult::completed_synchronously
	bool ___completed_synchronously_3;
	// System.Boolean System.IOAsyncResult::completed
	bool ___completed_4;

public:
	inline static int32_t get_offset_of_async_callback_0() { return static_cast<int32_t>(offsetof(IOAsyncResult_t3640145766, ___async_callback_0)); }
	inline AsyncCallback_t3962456242 * get_async_callback_0() const { return ___async_callback_0; }
	inline AsyncCallback_t3962456242 ** get_address_of_async_callback_0() { return &___async_callback_0; }
	inline void set_async_callback_0(AsyncCallback_t3962456242 * value)
	{
		___async_callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___async_callback_0), value);
	}

	inline static int32_t get_offset_of_async_state_1() { return static_cast<int32_t>(offsetof(IOAsyncResult_t3640145766, ___async_state_1)); }
	inline RuntimeObject * get_async_state_1() const { return ___async_state_1; }
	inline RuntimeObject ** get_address_of_async_state_1() { return &___async_state_1; }
	inline void set_async_state_1(RuntimeObject * value)
	{
		___async_state_1 = value;
		Il2CppCodeGenWriteBarrier((&___async_state_1), value);
	}

	inline static int32_t get_offset_of_wait_handle_2() { return static_cast<int32_t>(offsetof(IOAsyncResult_t3640145766, ___wait_handle_2)); }
	inline ManualResetEvent_t451242010 * get_wait_handle_2() const { return ___wait_handle_2; }
	inline ManualResetEvent_t451242010 ** get_address_of_wait_handle_2() { return &___wait_handle_2; }
	inline void set_wait_handle_2(ManualResetEvent_t451242010 * value)
	{
		___wait_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___wait_handle_2), value);
	}

	inline static int32_t get_offset_of_completed_synchronously_3() { return static_cast<int32_t>(offsetof(IOAsyncResult_t3640145766, ___completed_synchronously_3)); }
	inline bool get_completed_synchronously_3() const { return ___completed_synchronously_3; }
	inline bool* get_address_of_completed_synchronously_3() { return &___completed_synchronously_3; }
	inline void set_completed_synchronously_3(bool value)
	{
		___completed_synchronously_3 = value;
	}

	inline static int32_t get_offset_of_completed_4() { return static_cast<int32_t>(offsetof(IOAsyncResult_t3640145766, ___completed_4)); }
	inline bool get_completed_4() const { return ___completed_4; }
	inline bool* get_address_of_completed_4() { return &___completed_4; }
	inline void set_completed_4(bool value)
	{
		___completed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.IOAsyncResult
struct IOAsyncResult_t3640145766_marshaled_pinvoke
{
	Il2CppMethodPointer ___async_callback_0;
	Il2CppIUnknown* ___async_state_1;
	ManualResetEvent_t451242010 * ___wait_handle_2;
	int32_t ___completed_synchronously_3;
	int32_t ___completed_4;
};
// Native definition for COM marshalling of System.IOAsyncResult
struct IOAsyncResult_t3640145766_marshaled_com
{
	Il2CppMethodPointer ___async_callback_0;
	Il2CppIUnknown* ___async_state_1;
	ManualResetEvent_t451242010 * ___wait_handle_2;
	int32_t ___completed_synchronously_3;
	int32_t ___completed_4;
};
#endif // IOASYNCRESULT_T3640145766_H
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
#ifndef CONNECTIONMANAGEMENTDATA_T2003128658_H
#define CONNECTIONMANAGEMENTDATA_T2003128658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementData
struct  ConnectionManagementData_t2003128658  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Net.Configuration.ConnectionManagementData::data
	Hashtable_t1853889766 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ConnectionManagementData_t2003128658, ___data_0)); }
	inline Hashtable_t1853889766 * get_data_0() const { return ___data_0; }
	inline Hashtable_t1853889766 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(Hashtable_t1853889766 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTDATA_T2003128658_H
#ifndef DEFAULTPROXYSECTIONINTERNAL_T3889414525_H
#define DEFAULTPROXYSECTIONINTERNAL_T3889414525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.DefaultProxySectionInternal
struct  DefaultProxySectionInternal_t3889414525  : public RuntimeObject
{
public:
	// System.Net.IWebProxy System.Net.Configuration.DefaultProxySectionInternal::webProxy
	RuntimeObject* ___webProxy_0;

public:
	inline static int32_t get_offset_of_webProxy_0() { return static_cast<int32_t>(offsetof(DefaultProxySectionInternal_t3889414525, ___webProxy_0)); }
	inline RuntimeObject* get_webProxy_0() const { return ___webProxy_0; }
	inline RuntimeObject** get_address_of_webProxy_0() { return &___webProxy_0; }
	inline void set_webProxy_0(RuntimeObject* value)
	{
		___webProxy_0 = value;
		Il2CppCodeGenWriteBarrier((&___webProxy_0), value);
	}
};

struct DefaultProxySectionInternal_t3889414525_StaticFields
{
public:
	// System.Object System.Net.Configuration.DefaultProxySectionInternal::classSyncObject
	RuntimeObject * ___classSyncObject_1;

public:
	inline static int32_t get_offset_of_classSyncObject_1() { return static_cast<int32_t>(offsetof(DefaultProxySectionInternal_t3889414525_StaticFields, ___classSyncObject_1)); }
	inline RuntimeObject * get_classSyncObject_1() const { return ___classSyncObject_1; }
	inline RuntimeObject ** get_address_of_classSyncObject_1() { return &___classSyncObject_1; }
	inline void set_classSyncObject_1(RuntimeObject * value)
	{
		___classSyncObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___classSyncObject_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROXYSECTIONINTERNAL_T3889414525_H
#ifndef IPADDRESSCOLLECTION_T2315030214_H
#define IPADDRESSCOLLECTION_T2315030214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IPAddressCollection
struct  IPAddressCollection_t2315030214  : public RuntimeObject
{
public:
	// System.Collections.ObjectModel.Collection`1<System.Net.IPAddress> System.Net.NetworkInformation.IPAddressCollection::addresses
	Collection_1_t3481100804 * ___addresses_0;

public:
	inline static int32_t get_offset_of_addresses_0() { return static_cast<int32_t>(offsetof(IPAddressCollection_t2315030214, ___addresses_0)); }
	inline Collection_1_t3481100804 * get_addresses_0() const { return ___addresses_0; }
	inline Collection_1_t3481100804 ** get_address_of_addresses_0() { return &___addresses_0; }
	inline void set_addresses_0(Collection_1_t3481100804 * value)
	{
		___addresses_0 = value;
		Il2CppCodeGenWriteBarrier((&___addresses_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPADDRESSCOLLECTION_T2315030214_H
#ifndef IPGLOBALPROPERTIES_T3113415935_H
#define IPGLOBALPROPERTIES_T3113415935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IPGlobalProperties
struct  IPGlobalProperties_t3113415935  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPGLOBALPROPERTIES_T3113415935_H
#ifndef IPINTERFACEPROPERTIES_T3964383369_H
#define IPINTERFACEPROPERTIES_T3964383369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IPInterfaceProperties
struct  IPInterfaceProperties_t3964383369  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPINTERFACEPROPERTIES_T3964383369_H
#ifndef IPV4INTERFACESTATISTICS_T3249312820_H
#define IPV4INTERFACESTATISTICS_T3249312820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IPv4InterfaceStatistics
struct  IPv4InterfaceStatistics_t3249312820  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPV4INTERFACESTATISTICS_T3249312820_H
#ifndef NETWORKINTERFACE_T271883373_H
#define NETWORKINTERFACE_T271883373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterface
struct  NetworkInterface_t271883373  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINTERFACE_T271883373_H
#ifndef NETWORKINTERFACEFACTORY_T1756522298_H
#define NETWORKINTERFACEFACTORY_T1756522298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceFactory
struct  NetworkInterfaceFactory_t1756522298  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINTERFACEFACTORY_T1756522298_H
#ifndef SYSTEMNETWORKINTERFACE_T699244148_H
#define SYSTEMNETWORKINTERFACE_T699244148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.SystemNetworkInterface
struct  SystemNetworkInterface_t699244148  : public RuntimeObject
{
public:

public:
};

struct SystemNetworkInterface_t699244148_StaticFields
{
public:
	// System.Net.NetworkInformation.NetworkInterfaceFactory System.Net.NetworkInformation.SystemNetworkInterface::nif
	NetworkInterfaceFactory_t1756522298 * ___nif_0;

public:
	inline static int32_t get_offset_of_nif_0() { return static_cast<int32_t>(offsetof(SystemNetworkInterface_t699244148_StaticFields, ___nif_0)); }
	inline NetworkInterfaceFactory_t1756522298 * get_nif_0() const { return ___nif_0; }
	inline NetworkInterfaceFactory_t1756522298 ** get_address_of_nif_0() { return &___nif_0; }
	inline void set_nif_0(NetworkInterfaceFactory_t1756522298 * value)
	{
		___nif_0 = value;
		Il2CppCodeGenWriteBarrier((&___nif_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMNETWORKINTERFACE_T699244148_H
#ifndef U3CU3EC_T240325972_H
#define U3CU3EC_T240325972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket/<>c
struct  U3CU3Ec_t240325972  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t240325972_StaticFields
{
public:
	// System.Net.Sockets.Socket/<>c System.Net.Sockets.Socket/<>c::<>9
	U3CU3Ec_t240325972 * ___U3CU3E9_0;
	// System.IOAsyncCallback System.Net.Sockets.Socket/<>c::<>9__241_0
	IOAsyncCallback_t705871752 * ___U3CU3E9__241_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t240325972_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t240325972 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t240325972 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t240325972 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__241_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t240325972_StaticFields, ___U3CU3E9__241_0_1)); }
	inline IOAsyncCallback_t705871752 * get_U3CU3E9__241_0_1() const { return ___U3CU3E9__241_0_1; }
	inline IOAsyncCallback_t705871752 ** get_address_of_U3CU3E9__241_0_1() { return &___U3CU3E9__241_0_1; }
	inline void set_U3CU3E9__241_0_1(IOAsyncCallback_t705871752 * value)
	{
		___U3CU3E9__241_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__241_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T240325972_H
#ifndef U3CU3EC__DISPLAYCLASS242_0_T616583391_H
#define U3CU3EC__DISPLAYCLASS242_0_T616583391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket/<>c__DisplayClass242_0
struct  U3CU3Ec__DisplayClass242_0_t616583391  : public RuntimeObject
{
public:
	// System.Int32 System.Net.Sockets.Socket/<>c__DisplayClass242_0::sent_so_far
	int32_t ___sent_so_far_0;

public:
	inline static int32_t get_offset_of_sent_so_far_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass242_0_t616583391, ___sent_so_far_0)); }
	inline int32_t get_sent_so_far_0() const { return ___sent_so_far_0; }
	inline int32_t* get_address_of_sent_so_far_0() { return &___sent_so_far_0; }
	inline void set_sent_so_far_0(int32_t value)
	{
		___sent_so_far_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS242_0_T616583391_H
#ifndef U3CU3EC_T3573335103_H
#define U3CU3EC_T3573335103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketAsyncResult/<>c
struct  U3CU3Ec_t3573335103  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3573335103_StaticFields
{
public:
	// System.Net.Sockets.SocketAsyncResult/<>c System.Net.Sockets.SocketAsyncResult/<>c::<>9
	U3CU3Ec_t3573335103 * ___U3CU3E9_0;
	// System.Threading.WaitCallback System.Net.Sockets.SocketAsyncResult/<>c::<>9__27_0
	WaitCallback_t2448485498 * ___U3CU3E9__27_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3573335103_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3573335103 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3573335103 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3573335103 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__27_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3573335103_StaticFields, ___U3CU3E9__27_0_1)); }
	inline WaitCallback_t2448485498 * get_U3CU3E9__27_0_1() const { return ___U3CU3E9__27_0_1; }
	inline WaitCallback_t2448485498 ** get_address_of_U3CU3E9__27_0_1() { return &___U3CU3E9__27_0_1; }
	inline void set_U3CU3E9__27_0_1(WaitCallback_t2448485498 * value)
	{
		___U3CU3E9__27_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__27_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T3573335103_H
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
#ifndef CONFIGURATIONELEMENTCOLLECTION_T446763386_H
#define CONFIGURATIONELEMENTCOLLECTION_T446763386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElementCollection
struct  ConfigurationElementCollection_t446763386  : public ConfigurationElement_t3318566633
{
public:
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::list
	ArrayList_t2718874744 * ___list_15;
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::removed
	ArrayList_t2718874744 * ___removed_16;
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::inherited
	ArrayList_t2718874744 * ___inherited_17;
	// System.Boolean System.Configuration.ConfigurationElementCollection::emitClear
	bool ___emitClear_18;
	// System.Boolean System.Configuration.ConfigurationElementCollection::modified
	bool ___modified_19;
	// System.Collections.IComparer System.Configuration.ConfigurationElementCollection::comparer
	RuntimeObject* ___comparer_20;
	// System.Int32 System.Configuration.ConfigurationElementCollection::inheritedLimitIndex
	int32_t ___inheritedLimitIndex_21;
	// System.String System.Configuration.ConfigurationElementCollection::addElementName
	String_t* ___addElementName_22;
	// System.String System.Configuration.ConfigurationElementCollection::clearElementName
	String_t* ___clearElementName_23;
	// System.String System.Configuration.ConfigurationElementCollection::removeElementName
	String_t* ___removeElementName_24;

public:
	inline static int32_t get_offset_of_list_15() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___list_15)); }
	inline ArrayList_t2718874744 * get_list_15() const { return ___list_15; }
	inline ArrayList_t2718874744 ** get_address_of_list_15() { return &___list_15; }
	inline void set_list_15(ArrayList_t2718874744 * value)
	{
		___list_15 = value;
		Il2CppCodeGenWriteBarrier((&___list_15), value);
	}

	inline static int32_t get_offset_of_removed_16() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___removed_16)); }
	inline ArrayList_t2718874744 * get_removed_16() const { return ___removed_16; }
	inline ArrayList_t2718874744 ** get_address_of_removed_16() { return &___removed_16; }
	inline void set_removed_16(ArrayList_t2718874744 * value)
	{
		___removed_16 = value;
		Il2CppCodeGenWriteBarrier((&___removed_16), value);
	}

	inline static int32_t get_offset_of_inherited_17() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___inherited_17)); }
	inline ArrayList_t2718874744 * get_inherited_17() const { return ___inherited_17; }
	inline ArrayList_t2718874744 ** get_address_of_inherited_17() { return &___inherited_17; }
	inline void set_inherited_17(ArrayList_t2718874744 * value)
	{
		___inherited_17 = value;
		Il2CppCodeGenWriteBarrier((&___inherited_17), value);
	}

	inline static int32_t get_offset_of_emitClear_18() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___emitClear_18)); }
	inline bool get_emitClear_18() const { return ___emitClear_18; }
	inline bool* get_address_of_emitClear_18() { return &___emitClear_18; }
	inline void set_emitClear_18(bool value)
	{
		___emitClear_18 = value;
	}

	inline static int32_t get_offset_of_modified_19() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___modified_19)); }
	inline bool get_modified_19() const { return ___modified_19; }
	inline bool* get_address_of_modified_19() { return &___modified_19; }
	inline void set_modified_19(bool value)
	{
		___modified_19 = value;
	}

	inline static int32_t get_offset_of_comparer_20() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___comparer_20)); }
	inline RuntimeObject* get_comparer_20() const { return ___comparer_20; }
	inline RuntimeObject** get_address_of_comparer_20() { return &___comparer_20; }
	inline void set_comparer_20(RuntimeObject* value)
	{
		___comparer_20 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_20), value);
	}

	inline static int32_t get_offset_of_inheritedLimitIndex_21() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___inheritedLimitIndex_21)); }
	inline int32_t get_inheritedLimitIndex_21() const { return ___inheritedLimitIndex_21; }
	inline int32_t* get_address_of_inheritedLimitIndex_21() { return &___inheritedLimitIndex_21; }
	inline void set_inheritedLimitIndex_21(int32_t value)
	{
		___inheritedLimitIndex_21 = value;
	}

	inline static int32_t get_offset_of_addElementName_22() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___addElementName_22)); }
	inline String_t* get_addElementName_22() const { return ___addElementName_22; }
	inline String_t** get_address_of_addElementName_22() { return &___addElementName_22; }
	inline void set_addElementName_22(String_t* value)
	{
		___addElementName_22 = value;
		Il2CppCodeGenWriteBarrier((&___addElementName_22), value);
	}

	inline static int32_t get_offset_of_clearElementName_23() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___clearElementName_23)); }
	inline String_t* get_clearElementName_23() const { return ___clearElementName_23; }
	inline String_t** get_address_of_clearElementName_23() { return &___clearElementName_23; }
	inline void set_clearElementName_23(String_t* value)
	{
		___clearElementName_23 = value;
		Il2CppCodeGenWriteBarrier((&___clearElementName_23), value);
	}

	inline static int32_t get_offset_of_removeElementName_24() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___removeElementName_24)); }
	inline String_t* get_removeElementName_24() const { return ___removeElementName_24; }
	inline String_t** get_address_of_removeElementName_24() { return &___removeElementName_24; }
	inline void set_removeElementName_24(String_t* value)
	{
		___removeElementName_24 = value;
		Il2CppCodeGenWriteBarrier((&___removeElementName_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONELEMENTCOLLECTION_T446763386_H
#ifndef CONFIGURATIONSECTION_T3156163955_H
#define CONFIGURATIONSECTION_T3156163955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSection
struct  ConfigurationSection_t3156163955  : public ConfigurationElement_t3318566633
{
public:
	// System.Configuration.SectionInformation System.Configuration.ConfigurationSection::sectionInformation
	SectionInformation_t2821611020 * ___sectionInformation_15;
	// System.Configuration.IConfigurationSectionHandler System.Configuration.ConfigurationSection::section_handler
	RuntimeObject* ___section_handler_16;
	// System.String System.Configuration.ConfigurationSection::externalDataXml
	String_t* ___externalDataXml_17;
	// System.Object System.Configuration.ConfigurationSection::_configContext
	RuntimeObject * ____configContext_18;

public:
	inline static int32_t get_offset_of_sectionInformation_15() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ___sectionInformation_15)); }
	inline SectionInformation_t2821611020 * get_sectionInformation_15() const { return ___sectionInformation_15; }
	inline SectionInformation_t2821611020 ** get_address_of_sectionInformation_15() { return &___sectionInformation_15; }
	inline void set_sectionInformation_15(SectionInformation_t2821611020 * value)
	{
		___sectionInformation_15 = value;
		Il2CppCodeGenWriteBarrier((&___sectionInformation_15), value);
	}

	inline static int32_t get_offset_of_section_handler_16() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ___section_handler_16)); }
	inline RuntimeObject* get_section_handler_16() const { return ___section_handler_16; }
	inline RuntimeObject** get_address_of_section_handler_16() { return &___section_handler_16; }
	inline void set_section_handler_16(RuntimeObject* value)
	{
		___section_handler_16 = value;
		Il2CppCodeGenWriteBarrier((&___section_handler_16), value);
	}

	inline static int32_t get_offset_of_externalDataXml_17() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ___externalDataXml_17)); }
	inline String_t* get_externalDataXml_17() const { return ___externalDataXml_17; }
	inline String_t** get_address_of_externalDataXml_17() { return &___externalDataXml_17; }
	inline void set_externalDataXml_17(String_t* value)
	{
		___externalDataXml_17 = value;
		Il2CppCodeGenWriteBarrier((&___externalDataXml_17), value);
	}

	inline static int32_t get_offset_of__configContext_18() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ____configContext_18)); }
	inline RuntimeObject * get__configContext_18() const { return ____configContext_18; }
	inline RuntimeObject ** get_address_of__configContext_18() { return &____configContext_18; }
	inline void set__configContext_18(RuntimeObject * value)
	{
		____configContext_18 = value;
		Il2CppCodeGenWriteBarrier((&____configContext_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONSECTION_T3156163955_H
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
#ifndef AUTHENTICATIONMODULEELEMENT_T2289740666_H
#define AUTHENTICATIONMODULEELEMENT_T2289740666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.AuthenticationModuleElement
struct  AuthenticationModuleElement_t2289740666  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct AuthenticationModuleElement_t2289740666_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.AuthenticationModuleElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.AuthenticationModuleElement::typeProp
	ConfigurationProperty_t3590861854 * ___typeProp_16;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(AuthenticationModuleElement_t2289740666_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_typeProp_16() { return static_cast<int32_t>(offsetof(AuthenticationModuleElement_t2289740666_StaticFields, ___typeProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_typeProp_16() const { return ___typeProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_typeProp_16() { return &___typeProp_16; }
	inline void set_typeProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___typeProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___typeProp_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONMODULEELEMENT_T2289740666_H
#ifndef BYPASSELEMENT_T2358616601_H
#define BYPASSELEMENT_T2358616601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.BypassElement
struct  BypassElement_t2358616601  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct BypassElement_t2358616601_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.BypassElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.BypassElement::addressProp
	ConfigurationProperty_t3590861854 * ___addressProp_16;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(BypassElement_t2358616601_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_addressProp_16() { return static_cast<int32_t>(offsetof(BypassElement_t2358616601_StaticFields, ___addressProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_addressProp_16() const { return ___addressProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_addressProp_16() { return &___addressProp_16; }
	inline void set_addressProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___addressProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___addressProp_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYPASSELEMENT_T2358616601_H
#ifndef CONNECTIONMANAGEMENTELEMENT_T3857438253_H
#define CONNECTIONMANAGEMENTELEMENT_T3857438253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementElement
struct  ConnectionManagementElement_t3857438253  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct ConnectionManagementElement_t3857438253_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementElement::addressProp
	ConfigurationProperty_t3590861854 * ___addressProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementElement::maxConnectionProp
	ConfigurationProperty_t3590861854 * ___maxConnectionProp_17;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t3857438253_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_addressProp_16() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t3857438253_StaticFields, ___addressProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_addressProp_16() const { return ___addressProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_addressProp_16() { return &___addressProp_16; }
	inline void set_addressProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___addressProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___addressProp_16), value);
	}

	inline static int32_t get_offset_of_maxConnectionProp_17() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t3857438253_StaticFields, ___maxConnectionProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_maxConnectionProp_17() const { return ___maxConnectionProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maxConnectionProp_17() { return &___maxConnectionProp_17; }
	inline void set_maxConnectionProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___maxConnectionProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___maxConnectionProp_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTELEMENT_T3857438253_H
#ifndef HTTPWEBREQUESTELEMENT_T2801692355_H
#define HTTPWEBREQUESTELEMENT_T2801692355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.HttpWebRequestElement
struct  HttpWebRequestElement_t2801692355  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct HttpWebRequestElement_t2801692355_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::maximumErrorResponseLengthProp
	ConfigurationProperty_t3590861854 * ___maximumErrorResponseLengthProp_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::maximumResponseHeadersLengthProp
	ConfigurationProperty_t3590861854 * ___maximumResponseHeadersLengthProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::maximumUnauthorizedUploadLengthProp
	ConfigurationProperty_t3590861854 * ___maximumUnauthorizedUploadLengthProp_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::useUnsafeHeaderParsingProp
	ConfigurationProperty_t3590861854 * ___useUnsafeHeaderParsingProp_18;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpWebRequestElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_19;

public:
	inline static int32_t get_offset_of_maximumErrorResponseLengthProp_15() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___maximumErrorResponseLengthProp_15)); }
	inline ConfigurationProperty_t3590861854 * get_maximumErrorResponseLengthProp_15() const { return ___maximumErrorResponseLengthProp_15; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maximumErrorResponseLengthProp_15() { return &___maximumErrorResponseLengthProp_15; }
	inline void set_maximumErrorResponseLengthProp_15(ConfigurationProperty_t3590861854 * value)
	{
		___maximumErrorResponseLengthProp_15 = value;
		Il2CppCodeGenWriteBarrier((&___maximumErrorResponseLengthProp_15), value);
	}

	inline static int32_t get_offset_of_maximumResponseHeadersLengthProp_16() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___maximumResponseHeadersLengthProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_maximumResponseHeadersLengthProp_16() const { return ___maximumResponseHeadersLengthProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maximumResponseHeadersLengthProp_16() { return &___maximumResponseHeadersLengthProp_16; }
	inline void set_maximumResponseHeadersLengthProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___maximumResponseHeadersLengthProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___maximumResponseHeadersLengthProp_16), value);
	}

	inline static int32_t get_offset_of_maximumUnauthorizedUploadLengthProp_17() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___maximumUnauthorizedUploadLengthProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_maximumUnauthorizedUploadLengthProp_17() const { return ___maximumUnauthorizedUploadLengthProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maximumUnauthorizedUploadLengthProp_17() { return &___maximumUnauthorizedUploadLengthProp_17; }
	inline void set_maximumUnauthorizedUploadLengthProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___maximumUnauthorizedUploadLengthProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___maximumUnauthorizedUploadLengthProp_17), value);
	}

	inline static int32_t get_offset_of_useUnsafeHeaderParsingProp_18() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___useUnsafeHeaderParsingProp_18)); }
	inline ConfigurationProperty_t3590861854 * get_useUnsafeHeaderParsingProp_18() const { return ___useUnsafeHeaderParsingProp_18; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_useUnsafeHeaderParsingProp_18() { return &___useUnsafeHeaderParsingProp_18; }
	inline void set_useUnsafeHeaderParsingProp_18(ConfigurationProperty_t3590861854 * value)
	{
		___useUnsafeHeaderParsingProp_18 = value;
		Il2CppCodeGenWriteBarrier((&___useUnsafeHeaderParsingProp_18), value);
	}

	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPWEBREQUESTELEMENT_T2801692355_H
#ifndef IPV6ELEMENT_T180053194_H
#define IPV6ELEMENT_T180053194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.Ipv6Element
struct  Ipv6Element_t180053194  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct Ipv6Element_t180053194_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.Ipv6Element::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.Ipv6Element::enabledProp
	ConfigurationProperty_t3590861854 * ___enabledProp_16;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(Ipv6Element_t180053194_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_enabledProp_16() { return static_cast<int32_t>(offsetof(Ipv6Element_t180053194_StaticFields, ___enabledProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_enabledProp_16() const { return ___enabledProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_enabledProp_16() { return &___enabledProp_16; }
	inline void set_enabledProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___enabledProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___enabledProp_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPV6ELEMENT_T180053194_H
#ifndef MODULEELEMENT_T3252950656_H
#define MODULEELEMENT_T3252950656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ModuleElement
struct  ModuleElement_t3252950656  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct ModuleElement_t3252950656_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ModuleElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ModuleElement::typeProp
	ConfigurationProperty_t3590861854 * ___typeProp_16;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(ModuleElement_t3252950656_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_typeProp_16() { return static_cast<int32_t>(offsetof(ModuleElement_t3252950656_StaticFields, ___typeProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_typeProp_16() const { return ___typeProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_typeProp_16() { return &___typeProp_16; }
	inline void set_typeProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___typeProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___typeProp_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULEELEMENT_T3252950656_H
#ifndef NETSECTIONGROUP_T3270122580_H
#define NETSECTIONGROUP_T3270122580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.NetSectionGroup
struct  NetSectionGroup_t3270122580  : public ConfigurationSectionGroup_t4179402520
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETSECTIONGROUP_T3270122580_H
#ifndef PERFORMANCECOUNTERSELEMENT_T4093363992_H
#define PERFORMANCECOUNTERSELEMENT_T4093363992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.PerformanceCountersElement
struct  PerformanceCountersElement_t4093363992  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct PerformanceCountersElement_t4093363992_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.PerformanceCountersElement::enabledProp
	ConfigurationProperty_t3590861854 * ___enabledProp_15;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.PerformanceCountersElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_16;

public:
	inline static int32_t get_offset_of_enabledProp_15() { return static_cast<int32_t>(offsetof(PerformanceCountersElement_t4093363992_StaticFields, ___enabledProp_15)); }
	inline ConfigurationProperty_t3590861854 * get_enabledProp_15() const { return ___enabledProp_15; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_enabledProp_15() { return &___enabledProp_15; }
	inline void set_enabledProp_15(ConfigurationProperty_t3590861854 * value)
	{
		___enabledProp_15 = value;
		Il2CppCodeGenWriteBarrier((&___enabledProp_15), value);
	}

	inline static int32_t get_offset_of_properties_16() { return static_cast<int32_t>(offsetof(PerformanceCountersElement_t4093363992_StaticFields, ___properties_16)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_16() const { return ___properties_16; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_16() { return &___properties_16; }
	inline void set_properties_16(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_16 = value;
		Il2CppCodeGenWriteBarrier((&___properties_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFORMANCECOUNTERSELEMENT_T4093363992_H
#ifndef PROXYELEMENT_T3214064751_H
#define PROXYELEMENT_T3214064751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement
struct  ProxyElement_t3214064751  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct ProxyElement_t3214064751_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ProxyElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::autoDetectProp
	ConfigurationProperty_t3590861854 * ___autoDetectProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::bypassOnLocalProp
	ConfigurationProperty_t3590861854 * ___bypassOnLocalProp_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::proxyAddressProp
	ConfigurationProperty_t3590861854 * ___proxyAddressProp_18;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::scriptLocationProp
	ConfigurationProperty_t3590861854 * ___scriptLocationProp_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::useSystemDefaultProp
	ConfigurationProperty_t3590861854 * ___useSystemDefaultProp_20;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_autoDetectProp_16() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___autoDetectProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_autoDetectProp_16() const { return ___autoDetectProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_autoDetectProp_16() { return &___autoDetectProp_16; }
	inline void set_autoDetectProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___autoDetectProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___autoDetectProp_16), value);
	}

	inline static int32_t get_offset_of_bypassOnLocalProp_17() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___bypassOnLocalProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_bypassOnLocalProp_17() const { return ___bypassOnLocalProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_bypassOnLocalProp_17() { return &___bypassOnLocalProp_17; }
	inline void set_bypassOnLocalProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___bypassOnLocalProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___bypassOnLocalProp_17), value);
	}

	inline static int32_t get_offset_of_proxyAddressProp_18() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___proxyAddressProp_18)); }
	inline ConfigurationProperty_t3590861854 * get_proxyAddressProp_18() const { return ___proxyAddressProp_18; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_proxyAddressProp_18() { return &___proxyAddressProp_18; }
	inline void set_proxyAddressProp_18(ConfigurationProperty_t3590861854 * value)
	{
		___proxyAddressProp_18 = value;
		Il2CppCodeGenWriteBarrier((&___proxyAddressProp_18), value);
	}

	inline static int32_t get_offset_of_scriptLocationProp_19() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___scriptLocationProp_19)); }
	inline ConfigurationProperty_t3590861854 * get_scriptLocationProp_19() const { return ___scriptLocationProp_19; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_scriptLocationProp_19() { return &___scriptLocationProp_19; }
	inline void set_scriptLocationProp_19(ConfigurationProperty_t3590861854 * value)
	{
		___scriptLocationProp_19 = value;
		Il2CppCodeGenWriteBarrier((&___scriptLocationProp_19), value);
	}

	inline static int32_t get_offset_of_useSystemDefaultProp_20() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___useSystemDefaultProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_useSystemDefaultProp_20() const { return ___useSystemDefaultProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_useSystemDefaultProp_20() { return &___useSystemDefaultProp_20; }
	inline void set_useSystemDefaultProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___useSystemDefaultProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___useSystemDefaultProp_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROXYELEMENT_T3214064751_H
#ifndef ALIGNMENTUNION_T208902285_H
#define ALIGNMENTUNION_T208902285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.AlignmentUnion
struct  AlignmentUnion_t208902285 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Net.NetworkInformation.AlignmentUnion::Alignment
			uint64_t ___Alignment_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Alignment_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Net.NetworkInformation.AlignmentUnion::Length
			int32_t ___Length_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Length_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IfIndex_2_OffsetPadding[4];
			// System.Int32 System.Net.NetworkInformation.AlignmentUnion::IfIndex
			int32_t ___IfIndex_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___IfIndex_2_OffsetPadding_forAlignmentOnly[4];
			int32_t ___IfIndex_2_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Alignment_0() { return static_cast<int32_t>(offsetof(AlignmentUnion_t208902285, ___Alignment_0)); }
	inline uint64_t get_Alignment_0() const { return ___Alignment_0; }
	inline uint64_t* get_address_of_Alignment_0() { return &___Alignment_0; }
	inline void set_Alignment_0(uint64_t value)
	{
		___Alignment_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(AlignmentUnion_t208902285, ___Length_1)); }
	inline int32_t get_Length_1() const { return ___Length_1; }
	inline int32_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int32_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_IfIndex_2() { return static_cast<int32_t>(offsetof(AlignmentUnion_t208902285, ___IfIndex_2)); }
	inline int32_t get_IfIndex_2() const { return ___IfIndex_2; }
	inline int32_t* get_address_of_IfIndex_2() { return &___IfIndex_2; }
	inline void set_IfIndex_2(int32_t value)
	{
		___IfIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALIGNMENTUNION_T208902285_H
#ifndef COMMONUNIXIPGLOBALPROPERTIES_T1338606518_H
#define COMMONUNIXIPGLOBALPROPERTIES_T1338606518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.CommonUnixIPGlobalProperties
struct  CommonUnixIPGlobalProperties_t1338606518  : public IPGlobalProperties_t3113415935
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMONUNIXIPGLOBALPROPERTIES_T1338606518_H
#ifndef SOCKADDR_T371844119_H
#define SOCKADDR_T371844119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr
struct  sockaddr_t371844119 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr::sa_len
	uint8_t ___sa_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr::sa_family
	uint8_t ___sa_family_1;

public:
	inline static int32_t get_offset_of_sa_len_0() { return static_cast<int32_t>(offsetof(sockaddr_t371844119, ___sa_len_0)); }
	inline uint8_t get_sa_len_0() const { return ___sa_len_0; }
	inline uint8_t* get_address_of_sa_len_0() { return &___sa_len_0; }
	inline void set_sa_len_0(uint8_t value)
	{
		___sa_len_0 = value;
	}

	inline static int32_t get_offset_of_sa_family_1() { return static_cast<int32_t>(offsetof(sockaddr_t371844119, ___sa_family_1)); }
	inline uint8_t get_sa_family_1() const { return ___sa_family_1; }
	inline uint8_t* get_address_of_sa_family_1() { return &___sa_family_1; }
	inline void set_sa_family_1(uint8_t value)
	{
		___sa_family_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKADDR_T371844119_H
#ifndef SOCKADDR_DL_T1317779094_H
#define SOCKADDR_DL_T1317779094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
struct  sockaddr_dl_t1317779094 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_len
	uint8_t ___sdl_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_family
	uint8_t ___sdl_family_1;
	// System.UInt16 System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_index
	uint16_t ___sdl_index_2;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_type
	uint8_t ___sdl_type_3;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_nlen
	uint8_t ___sdl_nlen_4;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_alen
	uint8_t ___sdl_alen_5;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_slen
	uint8_t ___sdl_slen_6;
	// System.Byte[] System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_data
	ByteU5BU5D_t4116647657* ___sdl_data_7;

public:
	inline static int32_t get_offset_of_sdl_len_0() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_len_0)); }
	inline uint8_t get_sdl_len_0() const { return ___sdl_len_0; }
	inline uint8_t* get_address_of_sdl_len_0() { return &___sdl_len_0; }
	inline void set_sdl_len_0(uint8_t value)
	{
		___sdl_len_0 = value;
	}

	inline static int32_t get_offset_of_sdl_family_1() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_family_1)); }
	inline uint8_t get_sdl_family_1() const { return ___sdl_family_1; }
	inline uint8_t* get_address_of_sdl_family_1() { return &___sdl_family_1; }
	inline void set_sdl_family_1(uint8_t value)
	{
		___sdl_family_1 = value;
	}

	inline static int32_t get_offset_of_sdl_index_2() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_index_2)); }
	inline uint16_t get_sdl_index_2() const { return ___sdl_index_2; }
	inline uint16_t* get_address_of_sdl_index_2() { return &___sdl_index_2; }
	inline void set_sdl_index_2(uint16_t value)
	{
		___sdl_index_2 = value;
	}

	inline static int32_t get_offset_of_sdl_type_3() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_type_3)); }
	inline uint8_t get_sdl_type_3() const { return ___sdl_type_3; }
	inline uint8_t* get_address_of_sdl_type_3() { return &___sdl_type_3; }
	inline void set_sdl_type_3(uint8_t value)
	{
		___sdl_type_3 = value;
	}

	inline static int32_t get_offset_of_sdl_nlen_4() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_nlen_4)); }
	inline uint8_t get_sdl_nlen_4() const { return ___sdl_nlen_4; }
	inline uint8_t* get_address_of_sdl_nlen_4() { return &___sdl_nlen_4; }
	inline void set_sdl_nlen_4(uint8_t value)
	{
		___sdl_nlen_4 = value;
	}

	inline static int32_t get_offset_of_sdl_alen_5() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_alen_5)); }
	inline uint8_t get_sdl_alen_5() const { return ___sdl_alen_5; }
	inline uint8_t* get_address_of_sdl_alen_5() { return &___sdl_alen_5; }
	inline void set_sdl_alen_5(uint8_t value)
	{
		___sdl_alen_5 = value;
	}

	inline static int32_t get_offset_of_sdl_slen_6() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_slen_6)); }
	inline uint8_t get_sdl_slen_6() const { return ___sdl_slen_6; }
	inline uint8_t* get_address_of_sdl_slen_6() { return &___sdl_slen_6; }
	inline void set_sdl_slen_6(uint8_t value)
	{
		___sdl_slen_6 = value;
	}

	inline static int32_t get_offset_of_sdl_data_7() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_data_7)); }
	inline ByteU5BU5D_t4116647657* get_sdl_data_7() const { return ___sdl_data_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_sdl_data_7() { return &___sdl_data_7; }
	inline void set_sdl_data_7(ByteU5BU5D_t4116647657* value)
	{
		___sdl_data_7 = value;
		Il2CppCodeGenWriteBarrier((&___sdl_data_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
struct sockaddr_dl_t1317779094_marshaled_pinvoke
{
	uint8_t ___sdl_len_0;
	uint8_t ___sdl_family_1;
	uint16_t ___sdl_index_2;
	uint8_t ___sdl_type_3;
	uint8_t ___sdl_nlen_4;
	uint8_t ___sdl_alen_5;
	uint8_t ___sdl_slen_6;
	uint8_t* ___sdl_data_7;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
struct sockaddr_dl_t1317779094_marshaled_com
{
	uint8_t ___sdl_len_0;
	uint8_t ___sdl_family_1;
	uint16_t ___sdl_index_2;
	uint8_t ___sdl_type_3;
	uint8_t ___sdl_nlen_4;
	uint8_t ___sdl_alen_5;
	uint8_t ___sdl_slen_6;
	uint8_t* ___sdl_data_7;
};
#endif // SOCKADDR_DL_T1317779094_H
#ifndef SOCKADDR_IN_T1317910171_H
#define SOCKADDR_IN_T1317910171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr_in
struct  sockaddr_in_t1317910171 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_len
	uint8_t ___sin_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_family
	uint8_t ___sin_family_1;
	// System.UInt16 System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_port
	uint16_t ___sin_port_2;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_addr
	uint32_t ___sin_addr_3;

public:
	inline static int32_t get_offset_of_sin_len_0() { return static_cast<int32_t>(offsetof(sockaddr_in_t1317910171, ___sin_len_0)); }
	inline uint8_t get_sin_len_0() const { return ___sin_len_0; }
	inline uint8_t* get_address_of_sin_len_0() { return &___sin_len_0; }
	inline void set_sin_len_0(uint8_t value)
	{
		___sin_len_0 = value;
	}

	inline static int32_t get_offset_of_sin_family_1() { return static_cast<int32_t>(offsetof(sockaddr_in_t1317910171, ___sin_family_1)); }
	inline uint8_t get_sin_family_1() const { return ___sin_family_1; }
	inline uint8_t* get_address_of_sin_family_1() { return &___sin_family_1; }
	inline void set_sin_family_1(uint8_t value)
	{
		___sin_family_1 = value;
	}

	inline static int32_t get_offset_of_sin_port_2() { return static_cast<int32_t>(offsetof(sockaddr_in_t1317910171, ___sin_port_2)); }
	inline uint16_t get_sin_port_2() const { return ___sin_port_2; }
	inline uint16_t* get_address_of_sin_port_2() { return &___sin_port_2; }
	inline void set_sin_port_2(uint16_t value)
	{
		___sin_port_2 = value;
	}

	inline static int32_t get_offset_of_sin_addr_3() { return static_cast<int32_t>(offsetof(sockaddr_in_t1317910171, ___sin_addr_3)); }
	inline uint32_t get_sin_addr_3() const { return ___sin_addr_3; }
	inline uint32_t* get_address_of_sin_addr_3() { return &___sin_addr_3; }
	inline void set_sin_addr_3(uint32_t value)
	{
		___sin_addr_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKADDR_IN_T1317910171_H
#ifndef UNIXNETWORKINTERFACEAPI_T1061423219_H
#define UNIXNETWORKINTERFACEAPI_T1061423219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceFactory/UnixNetworkInterfaceAPI
struct  UnixNetworkInterfaceAPI_t1061423219  : public NetworkInterfaceFactory_t1756522298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIXNETWORKINTERFACEAPI_T1061423219_H
#ifndef WIN32NETWORKINTERFACEAPI_T912414909_H
#define WIN32NETWORKINTERFACEAPI_T912414909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceFactory/Win32NetworkInterfaceAPI
struct  Win32NetworkInterfaceAPI_t912414909  : public NetworkInterfaceFactory_t1756522298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32NETWORKINTERFACEAPI_T912414909_H
#ifndef WIN32IPADDRESSCOLLECTION_T1156671415_H
#define WIN32IPADDRESSCOLLECTION_T1156671415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPAddressCollection
struct  Win32IPAddressCollection_t1156671415  : public IPAddressCollection_t2315030214
{
public:

public:
};

struct Win32IPAddressCollection_t1156671415_StaticFields
{
public:
	// System.Net.NetworkInformation.Win32IPAddressCollection System.Net.NetworkInformation.Win32IPAddressCollection::Empty
	Win32IPAddressCollection_t1156671415 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(Win32IPAddressCollection_t1156671415_StaticFields, ___Empty_1)); }
	inline Win32IPAddressCollection_t1156671415 * get_Empty_1() const { return ___Empty_1; }
	inline Win32IPAddressCollection_t1156671415 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(Win32IPAddressCollection_t1156671415 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32IPADDRESSCOLLECTION_T1156671415_H
#ifndef WIN32IPGLOBALPROPERTIES_T3375126358_H
#define WIN32IPGLOBALPROPERTIES_T3375126358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPGlobalProperties
struct  Win32IPGlobalProperties_t3375126358  : public IPGlobalProperties_t3113415935
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32IPGLOBALPROPERTIES_T3375126358_H
#ifndef WIN32LENGTHFLAGSUNION_T1383639798_H
#define WIN32LENGTHFLAGSUNION_T1383639798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32LengthFlagsUnion
struct  Win32LengthFlagsUnion_t1383639798 
{
public:
	// System.UInt32 System.Net.NetworkInformation.Win32LengthFlagsUnion::Length
	uint32_t ___Length_0;
	// System.UInt32 System.Net.NetworkInformation.Win32LengthFlagsUnion::Flags
	uint32_t ___Flags_1;

public:
	inline static int32_t get_offset_of_Length_0() { return static_cast<int32_t>(offsetof(Win32LengthFlagsUnion_t1383639798, ___Length_0)); }
	inline uint32_t get_Length_0() const { return ___Length_0; }
	inline uint32_t* get_address_of_Length_0() { return &___Length_0; }
	inline void set_Length_0(uint32_t value)
	{
		___Length_0 = value;
	}

	inline static int32_t get_offset_of_Flags_1() { return static_cast<int32_t>(offsetof(Win32LengthFlagsUnion_t1383639798, ___Flags_1)); }
	inline uint32_t get_Flags_1() const { return ___Flags_1; }
	inline uint32_t* get_address_of_Flags_1() { return &___Flags_1; }
	inline void set_Flags_1(uint32_t value)
	{
		___Flags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32LENGTHFLAGSUNION_T1383639798_H
#ifndef SOCKADDR_IN_T2786965223_H
#define SOCKADDR_IN_T2786965223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.sockaddr_in
struct  sockaddr_in_t2786965223 
{
public:
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in::sin_family
	uint16_t ___sin_family_0;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in::sin_port
	uint16_t ___sin_port_1;
	// System.UInt32 System.Net.NetworkInformation.sockaddr_in::sin_addr
	uint32_t ___sin_addr_2;

public:
	inline static int32_t get_offset_of_sin_family_0() { return static_cast<int32_t>(offsetof(sockaddr_in_t2786965223, ___sin_family_0)); }
	inline uint16_t get_sin_family_0() const { return ___sin_family_0; }
	inline uint16_t* get_address_of_sin_family_0() { return &___sin_family_0; }
	inline void set_sin_family_0(uint16_t value)
	{
		___sin_family_0 = value;
	}

	inline static int32_t get_offset_of_sin_port_1() { return static_cast<int32_t>(offsetof(sockaddr_in_t2786965223, ___sin_port_1)); }
	inline uint16_t get_sin_port_1() const { return ___sin_port_1; }
	inline uint16_t* get_address_of_sin_port_1() { return &___sin_port_1; }
	inline void set_sin_port_1(uint16_t value)
	{
		___sin_port_1 = value;
	}

	inline static int32_t get_offset_of_sin_addr_2() { return static_cast<int32_t>(offsetof(sockaddr_in_t2786965223, ___sin_addr_2)); }
	inline uint32_t get_sin_addr_2() const { return ___sin_addr_2; }
	inline uint32_t* get_address_of_sin_addr_2() { return &___sin_addr_2; }
	inline void set_sin_addr_2(uint32_t value)
	{
		___sin_addr_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKADDR_IN_T2786965223_H
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
#ifndef AUTHENTICATIONMODULEELEMENTCOLLECTION_T1161221431_H
#define AUTHENTICATIONMODULEELEMENTCOLLECTION_T1161221431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.AuthenticationModuleElementCollection
struct  AuthenticationModuleElementCollection_t1161221431  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONMODULEELEMENTCOLLECTION_T1161221431_H
#ifndef AUTHENTICATIONMODULESSECTION_T1083221556_H
#define AUTHENTICATIONMODULESSECTION_T1083221556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.AuthenticationModulesSection
struct  AuthenticationModulesSection_t1083221556  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct AuthenticationModulesSection_t1083221556_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.AuthenticationModulesSection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.AuthenticationModulesSection::authenticationModulesProp
	ConfigurationProperty_t3590861854 * ___authenticationModulesProp_20;

public:
	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(AuthenticationModulesSection_t1083221556_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}

	inline static int32_t get_offset_of_authenticationModulesProp_20() { return static_cast<int32_t>(offsetof(AuthenticationModulesSection_t1083221556_StaticFields, ___authenticationModulesProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_authenticationModulesProp_20() const { return ___authenticationModulesProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_authenticationModulesProp_20() { return &___authenticationModulesProp_20; }
	inline void set_authenticationModulesProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___authenticationModulesProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___authenticationModulesProp_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONMODULESSECTION_T1083221556_H
#ifndef BYPASSELEMENTCOLLECTION_T47326401_H
#define BYPASSELEMENTCOLLECTION_T47326401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.BypassElementCollection
struct  BypassElementCollection_t47326401  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYPASSELEMENTCOLLECTION_T47326401_H
#ifndef CONNECTIONMANAGEMENTELEMENTCOLLECTION_T3860227195_H
#define CONNECTIONMANAGEMENTELEMENTCOLLECTION_T3860227195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementElementCollection
struct  ConnectionManagementElementCollection_t3860227195  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTELEMENTCOLLECTION_T3860227195_H
#ifndef CONNECTIONMANAGEMENTSECTION_T1603642748_H
#define CONNECTIONMANAGEMENTSECTION_T1603642748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementSection
struct  ConnectionManagementSection_t1603642748  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct ConnectionManagementSection_t1603642748_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementSection::connectionManagementProp
	ConfigurationProperty_t3590861854 * ___connectionManagementProp_19;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementSection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_20;

public:
	inline static int32_t get_offset_of_connectionManagementProp_19() { return static_cast<int32_t>(offsetof(ConnectionManagementSection_t1603642748_StaticFields, ___connectionManagementProp_19)); }
	inline ConfigurationProperty_t3590861854 * get_connectionManagementProp_19() const { return ___connectionManagementProp_19; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_connectionManagementProp_19() { return &___connectionManagementProp_19; }
	inline void set_connectionManagementProp_19(ConfigurationProperty_t3590861854 * value)
	{
		___connectionManagementProp_19 = value;
		Il2CppCodeGenWriteBarrier((&___connectionManagementProp_19), value);
	}

	inline static int32_t get_offset_of_properties_20() { return static_cast<int32_t>(offsetof(ConnectionManagementSection_t1603642748_StaticFields, ___properties_20)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_20() const { return ___properties_20; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_20() { return &___properties_20; }
	inline void set_properties_20(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_20 = value;
		Il2CppCodeGenWriteBarrier((&___properties_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTSECTION_T1603642748_H
#ifndef DEFAULTPROXYSECTION_T4167594595_H
#define DEFAULTPROXYSECTION_T4167594595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.DefaultProxySection
struct  DefaultProxySection_t4167594595  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct DefaultProxySection_t4167594595_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::bypassListProp
	ConfigurationProperty_t3590861854 * ___bypassListProp_20;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::enabledProp
	ConfigurationProperty_t3590861854 * ___enabledProp_21;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::moduleProp
	ConfigurationProperty_t3590861854 * ___moduleProp_22;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::proxyProp
	ConfigurationProperty_t3590861854 * ___proxyProp_23;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::useDefaultCredentialsProp
	ConfigurationProperty_t3590861854 * ___useDefaultCredentialsProp_24;

public:
	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}

	inline static int32_t get_offset_of_bypassListProp_20() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___bypassListProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_bypassListProp_20() const { return ___bypassListProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_bypassListProp_20() { return &___bypassListProp_20; }
	inline void set_bypassListProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___bypassListProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___bypassListProp_20), value);
	}

	inline static int32_t get_offset_of_enabledProp_21() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___enabledProp_21)); }
	inline ConfigurationProperty_t3590861854 * get_enabledProp_21() const { return ___enabledProp_21; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_enabledProp_21() { return &___enabledProp_21; }
	inline void set_enabledProp_21(ConfigurationProperty_t3590861854 * value)
	{
		___enabledProp_21 = value;
		Il2CppCodeGenWriteBarrier((&___enabledProp_21), value);
	}

	inline static int32_t get_offset_of_moduleProp_22() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___moduleProp_22)); }
	inline ConfigurationProperty_t3590861854 * get_moduleProp_22() const { return ___moduleProp_22; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_moduleProp_22() { return &___moduleProp_22; }
	inline void set_moduleProp_22(ConfigurationProperty_t3590861854 * value)
	{
		___moduleProp_22 = value;
		Il2CppCodeGenWriteBarrier((&___moduleProp_22), value);
	}

	inline static int32_t get_offset_of_proxyProp_23() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___proxyProp_23)); }
	inline ConfigurationProperty_t3590861854 * get_proxyProp_23() const { return ___proxyProp_23; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_proxyProp_23() { return &___proxyProp_23; }
	inline void set_proxyProp_23(ConfigurationProperty_t3590861854 * value)
	{
		___proxyProp_23 = value;
		Il2CppCodeGenWriteBarrier((&___proxyProp_23), value);
	}

	inline static int32_t get_offset_of_useDefaultCredentialsProp_24() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___useDefaultCredentialsProp_24)); }
	inline ConfigurationProperty_t3590861854 * get_useDefaultCredentialsProp_24() const { return ___useDefaultCredentialsProp_24; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_useDefaultCredentialsProp_24() { return &___useDefaultCredentialsProp_24; }
	inline void set_useDefaultCredentialsProp_24(ConfigurationProperty_t3590861854 * value)
	{
		___useDefaultCredentialsProp_24 = value;
		Il2CppCodeGenWriteBarrier((&___useDefaultCredentialsProp_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROXYSECTION_T4167594595_H
#ifndef AUTODETECTVALUES_T1649618618_H
#define AUTODETECTVALUES_T1649618618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement/AutoDetectValues
struct  AutoDetectValues_t1649618618 
{
public:
	// System.Int32 System.Net.Configuration.ProxyElement/AutoDetectValues::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoDetectValues_t1649618618, ___value___2)); }
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
#endif // AUTODETECTVALUES_T1649618618_H
#ifndef BYPASSONLOCALVALUES_T945670496_H
#define BYPASSONLOCALVALUES_T945670496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement/BypassOnLocalValues
struct  BypassOnLocalValues_t945670496 
{
public:
	// System.Int32 System.Net.Configuration.ProxyElement/BypassOnLocalValues::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BypassOnLocalValues_t945670496, ___value___2)); }
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
#endif // BYPASSONLOCALVALUES_T945670496_H
#ifndef USESYSTEMDEFAULTVALUES_T2711047072_H
#define USESYSTEMDEFAULTVALUES_T2711047072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement/UseSystemDefaultValues
struct  UseSystemDefaultValues_t2711047072 
{
public:
	// System.Int32 System.Net.Configuration.ProxyElement/UseSystemDefaultValues::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UseSystemDefaultValues_t2711047072, ___value___2)); }
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
#endif // USESYSTEMDEFAULTVALUES_T2711047072_H
#ifndef LINUXARPHARDWARE_T827080684_H
#define LINUXARPHARDWARE_T827080684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxArpHardware
struct  LinuxArpHardware_t827080684 
{
public:
	// System.Int32 System.Net.NetworkInformation.LinuxArpHardware::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LinuxArpHardware_t827080684, ___value___2)); }
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
#endif // LINUXARPHARDWARE_T827080684_H
#ifndef MACOSARPHARDWARE_T4198534184_H
#define MACOSARPHARDWARE_T4198534184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsArpHardware
struct  MacOsArpHardware_t4198534184 
{
public:
	// System.Int32 System.Net.NetworkInformation.MacOsArpHardware::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MacOsArpHardware_t4198534184, ___value___2)); }
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
#endif // MACOSARPHARDWARE_T4198534184_H
#ifndef IFADDRS_T2169824096_H
#define IFADDRS_T2169824096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.ifaddrs
struct  ifaddrs_t2169824096 
{
public:
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_next
	intptr_t ___ifa_next_0;
	// System.String System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_name
	String_t* ___ifa_name_1;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_flags
	uint32_t ___ifa_flags_2;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_addr
	intptr_t ___ifa_addr_3;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_netmask
	intptr_t ___ifa_netmask_4;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_dstaddr
	intptr_t ___ifa_dstaddr_5;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_data
	intptr_t ___ifa_data_6;

public:
	inline static int32_t get_offset_of_ifa_next_0() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_next_0)); }
	inline intptr_t get_ifa_next_0() const { return ___ifa_next_0; }
	inline intptr_t* get_address_of_ifa_next_0() { return &___ifa_next_0; }
	inline void set_ifa_next_0(intptr_t value)
	{
		___ifa_next_0 = value;
	}

	inline static int32_t get_offset_of_ifa_name_1() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_name_1)); }
	inline String_t* get_ifa_name_1() const { return ___ifa_name_1; }
	inline String_t** get_address_of_ifa_name_1() { return &___ifa_name_1; }
	inline void set_ifa_name_1(String_t* value)
	{
		___ifa_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___ifa_name_1), value);
	}

	inline static int32_t get_offset_of_ifa_flags_2() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_flags_2)); }
	inline uint32_t get_ifa_flags_2() const { return ___ifa_flags_2; }
	inline uint32_t* get_address_of_ifa_flags_2() { return &___ifa_flags_2; }
	inline void set_ifa_flags_2(uint32_t value)
	{
		___ifa_flags_2 = value;
	}

	inline static int32_t get_offset_of_ifa_addr_3() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_addr_3)); }
	inline intptr_t get_ifa_addr_3() const { return ___ifa_addr_3; }
	inline intptr_t* get_address_of_ifa_addr_3() { return &___ifa_addr_3; }
	inline void set_ifa_addr_3(intptr_t value)
	{
		___ifa_addr_3 = value;
	}

	inline static int32_t get_offset_of_ifa_netmask_4() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_netmask_4)); }
	inline intptr_t get_ifa_netmask_4() const { return ___ifa_netmask_4; }
	inline intptr_t* get_address_of_ifa_netmask_4() { return &___ifa_netmask_4; }
	inline void set_ifa_netmask_4(intptr_t value)
	{
		___ifa_netmask_4 = value;
	}

	inline static int32_t get_offset_of_ifa_dstaddr_5() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_dstaddr_5)); }
	inline intptr_t get_ifa_dstaddr_5() const { return ___ifa_dstaddr_5; }
	inline intptr_t* get_address_of_ifa_dstaddr_5() { return &___ifa_dstaddr_5; }
	inline void set_ifa_dstaddr_5(intptr_t value)
	{
		___ifa_dstaddr_5 = value;
	}

	inline static int32_t get_offset_of_ifa_data_6() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_data_6)); }
	inline intptr_t get_ifa_data_6() const { return ___ifa_data_6; }
	inline intptr_t* get_address_of_ifa_data_6() { return &___ifa_data_6; }
	inline void set_ifa_data_6(intptr_t value)
	{
		___ifa_data_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.ifaddrs
struct ifaddrs_t2169824096_marshaled_pinvoke
{
	intptr_t ___ifa_next_0;
	char* ___ifa_name_1;
	uint32_t ___ifa_flags_2;
	intptr_t ___ifa_addr_3;
	intptr_t ___ifa_netmask_4;
	intptr_t ___ifa_dstaddr_5;
	intptr_t ___ifa_data_6;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.ifaddrs
struct ifaddrs_t2169824096_marshaled_com
{
	intptr_t ___ifa_next_0;
	Il2CppChar* ___ifa_name_1;
	uint32_t ___ifa_flags_2;
	intptr_t ___ifa_addr_3;
	intptr_t ___ifa_netmask_4;
	intptr_t ___ifa_dstaddr_5;
	intptr_t ___ifa_data_6;
};
#endif // IFADDRS_T2169824096_H
#ifndef IN6_ADDR_T1417766092_H
#define IN6_ADDR_T1417766092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.in6_addr
struct  in6_addr_t1417766092 
{
public:
	// System.Byte[] System.Net.NetworkInformation.MacOsStructs.in6_addr::u6_addr8
	ByteU5BU5D_t4116647657* ___u6_addr8_0;

public:
	inline static int32_t get_offset_of_u6_addr8_0() { return static_cast<int32_t>(offsetof(in6_addr_t1417766092, ___u6_addr8_0)); }
	inline ByteU5BU5D_t4116647657* get_u6_addr8_0() const { return ___u6_addr8_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_u6_addr8_0() { return &___u6_addr8_0; }
	inline void set_u6_addr8_0(ByteU5BU5D_t4116647657* value)
	{
		___u6_addr8_0 = value;
		Il2CppCodeGenWriteBarrier((&___u6_addr8_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.in6_addr
struct in6_addr_t1417766092_marshaled_pinvoke
{
	uint8_t ___u6_addr8_0[16];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.in6_addr
struct in6_addr_t1417766092_marshaled_com
{
	uint8_t ___u6_addr8_0[16];
};
#endif // IN6_ADDR_T1417766092_H
#ifndef NETBIOSNODETYPE_T3568904212_H
#define NETBIOSNODETYPE_T3568904212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetBiosNodeType
struct  NetBiosNodeType_t3568904212 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetBiosNodeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetBiosNodeType_t3568904212, ___value___2)); }
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
#endif // NETBIOSNODETYPE_T3568904212_H
#ifndef NETWORKINTERFACECOMPONENT_T1400510776_H
#define NETWORKINTERFACECOMPONENT_T1400510776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceComponent
struct  NetworkInterfaceComponent_t1400510776 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetworkInterfaceComponent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkInterfaceComponent_t1400510776, ___value___2)); }
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
#endif // NETWORKINTERFACECOMPONENT_T1400510776_H
#ifndef LINUXNETWORKINTERFACEAPI_T1157390748_H
#define LINUXNETWORKINTERFACEAPI_T1157390748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceFactory/LinuxNetworkInterfaceAPI
struct  LinuxNetworkInterfaceAPI_t1157390748  : public UnixNetworkInterfaceAPI_t1061423219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINUXNETWORKINTERFACEAPI_T1157390748_H
#ifndef MACOSNETWORKINTERFACEAPI_T1249733612_H
#define MACOSNETWORKINTERFACEAPI_T1249733612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceFactory/MacOsNetworkInterfaceAPI
struct  MacOsNetworkInterfaceAPI_t1249733612  : public UnixNetworkInterfaceAPI_t1061423219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACOSNETWORKINTERFACEAPI_T1249733612_H
#ifndef NETWORKINTERFACETYPE_T616418749_H
#define NETWORKINTERFACETYPE_T616418749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceType
struct  NetworkInterfaceType_t616418749 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetworkInterfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkInterfaceType_t616418749, ___value___2)); }
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
#endif // NETWORKINTERFACETYPE_T616418749_H
#ifndef OPERATIONALSTATUS_T2709089529_H
#define OPERATIONALSTATUS_T2709089529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.OperationalStatus
struct  OperationalStatus_t2709089529 
{
public:
	// System.Int32 System.Net.NetworkInformation.OperationalStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OperationalStatus_t2709089529, ___value___2)); }
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
#endif // OPERATIONALSTATUS_T2709089529_H
#ifndef UNIXIPGLOBALPROPERTIES_T1460024316_H
#define UNIXIPGLOBALPROPERTIES_T1460024316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnixIPGlobalProperties
struct  UnixIPGlobalProperties_t1460024316  : public CommonUnixIPGlobalProperties_t1338606518
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIXIPGLOBALPROPERTIES_T1460024316_H
#ifndef UNIXIPINTERFACEPROPERTIES_T1296234392_H
#define UNIXIPINTERFACEPROPERTIES_T1296234392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnixIPInterfaceProperties
struct  UnixIPInterfaceProperties_t1296234392  : public IPInterfaceProperties_t3964383369
{
public:
	// System.Net.NetworkInformation.UnixNetworkInterface System.Net.NetworkInformation.UnixIPInterfaceProperties::iface
	UnixNetworkInterface_t2401762829 * ___iface_0;
	// System.Collections.Generic.List`1<System.Net.IPAddress> System.Net.NetworkInformation.UnixIPInterfaceProperties::addresses
	List_1_t1713852332 * ___addresses_1;
	// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::dns_servers
	IPAddressCollection_t2315030214 * ___dns_servers_2;
	// System.String System.Net.NetworkInformation.UnixIPInterfaceProperties::dns_suffix
	String_t* ___dns_suffix_5;
	// System.DateTime System.Net.NetworkInformation.UnixIPInterfaceProperties::last_parse
	DateTime_t3738529785  ___last_parse_6;

public:
	inline static int32_t get_offset_of_iface_0() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___iface_0)); }
	inline UnixNetworkInterface_t2401762829 * get_iface_0() const { return ___iface_0; }
	inline UnixNetworkInterface_t2401762829 ** get_address_of_iface_0() { return &___iface_0; }
	inline void set_iface_0(UnixNetworkInterface_t2401762829 * value)
	{
		___iface_0 = value;
		Il2CppCodeGenWriteBarrier((&___iface_0), value);
	}

	inline static int32_t get_offset_of_addresses_1() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___addresses_1)); }
	inline List_1_t1713852332 * get_addresses_1() const { return ___addresses_1; }
	inline List_1_t1713852332 ** get_address_of_addresses_1() { return &___addresses_1; }
	inline void set_addresses_1(List_1_t1713852332 * value)
	{
		___addresses_1 = value;
		Il2CppCodeGenWriteBarrier((&___addresses_1), value);
	}

	inline static int32_t get_offset_of_dns_servers_2() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___dns_servers_2)); }
	inline IPAddressCollection_t2315030214 * get_dns_servers_2() const { return ___dns_servers_2; }
	inline IPAddressCollection_t2315030214 ** get_address_of_dns_servers_2() { return &___dns_servers_2; }
	inline void set_dns_servers_2(IPAddressCollection_t2315030214 * value)
	{
		___dns_servers_2 = value;
		Il2CppCodeGenWriteBarrier((&___dns_servers_2), value);
	}

	inline static int32_t get_offset_of_dns_suffix_5() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___dns_suffix_5)); }
	inline String_t* get_dns_suffix_5() const { return ___dns_suffix_5; }
	inline String_t** get_address_of_dns_suffix_5() { return &___dns_suffix_5; }
	inline void set_dns_suffix_5(String_t* value)
	{
		___dns_suffix_5 = value;
		Il2CppCodeGenWriteBarrier((&___dns_suffix_5), value);
	}

	inline static int32_t get_offset_of_last_parse_6() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___last_parse_6)); }
	inline DateTime_t3738529785  get_last_parse_6() const { return ___last_parse_6; }
	inline DateTime_t3738529785 * get_address_of_last_parse_6() { return &___last_parse_6; }
	inline void set_last_parse_6(DateTime_t3738529785  value)
	{
		___last_parse_6 = value;
	}
};

struct UnixIPInterfaceProperties_t1296234392_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex System.Net.NetworkInformation.UnixIPInterfaceProperties::ns
	Regex_t3657309853 * ___ns_3;
	// System.Text.RegularExpressions.Regex System.Net.NetworkInformation.UnixIPInterfaceProperties::search
	Regex_t3657309853 * ___search_4;

public:
	inline static int32_t get_offset_of_ns_3() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392_StaticFields, ___ns_3)); }
	inline Regex_t3657309853 * get_ns_3() const { return ___ns_3; }
	inline Regex_t3657309853 ** get_address_of_ns_3() { return &___ns_3; }
	inline void set_ns_3(Regex_t3657309853 * value)
	{
		___ns_3 = value;
		Il2CppCodeGenWriteBarrier((&___ns_3), value);
	}

	inline static int32_t get_offset_of_search_4() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392_StaticFields, ___search_4)); }
	inline Regex_t3657309853 * get_search_4() const { return ___search_4; }
	inline Regex_t3657309853 ** get_address_of_search_4() { return &___search_4; }
	inline void set_search_4(Regex_t3657309853 * value)
	{
		___search_4 = value;
		Il2CppCodeGenWriteBarrier((&___search_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIXIPINTERFACEPROPERTIES_T1296234392_H
#ifndef WIN32_IP_ADDR_STRING_T1213417184_H
#define WIN32_IP_ADDR_STRING_T1213417184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct  Win32_IP_ADDR_STRING_t1213417184 
{
public:
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADDR_STRING::Next
	intptr_t ___Next_0;
	// System.String System.Net.NetworkInformation.Win32_IP_ADDR_STRING::IpAddress
	String_t* ___IpAddress_1;
	// System.String System.Net.NetworkInformation.Win32_IP_ADDR_STRING::IpMask
	String_t* ___IpMask_2;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADDR_STRING::Context
	uint32_t ___Context_3;

public:
	inline static int32_t get_offset_of_Next_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___Next_0)); }
	inline intptr_t get_Next_0() const { return ___Next_0; }
	inline intptr_t* get_address_of_Next_0() { return &___Next_0; }
	inline void set_Next_0(intptr_t value)
	{
		___Next_0 = value;
	}

	inline static int32_t get_offset_of_IpAddress_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___IpAddress_1)); }
	inline String_t* get_IpAddress_1() const { return ___IpAddress_1; }
	inline String_t** get_address_of_IpAddress_1() { return &___IpAddress_1; }
	inline void set_IpAddress_1(String_t* value)
	{
		___IpAddress_1 = value;
		Il2CppCodeGenWriteBarrier((&___IpAddress_1), value);
	}

	inline static int32_t get_offset_of_IpMask_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___IpMask_2)); }
	inline String_t* get_IpMask_2() const { return ___IpMask_2; }
	inline String_t** get_address_of_IpMask_2() { return &___IpMask_2; }
	inline void set_IpMask_2(String_t* value)
	{
		___IpMask_2 = value;
		Il2CppCodeGenWriteBarrier((&___IpMask_2), value);
	}

	inline static int32_t get_offset_of_Context_3() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___Context_3)); }
	inline uint32_t get_Context_3() const { return ___Context_3; }
	inline uint32_t* get_address_of_Context_3() { return &___Context_3; }
	inline void set_Context_3(uint32_t value)
	{
		___Context_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct Win32_IP_ADDR_STRING_t1213417184_marshaled_pinvoke
{
	intptr_t ___Next_0;
	char ___IpAddress_1[16];
	char ___IpMask_2[16];
	uint32_t ___Context_3;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct Win32_IP_ADDR_STRING_t1213417184_marshaled_com
{
	intptr_t ___Next_0;
	char ___IpAddress_1[16];
	char ___IpMask_2[16];
	uint32_t ___Context_3;
};
#endif // WIN32_IP_ADDR_STRING_T1213417184_H
#ifndef WIN32_SOCKADDR_T2504501424_H
#define WIN32_SOCKADDR_T2504501424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_SOCKADDR
struct  Win32_SOCKADDR_t2504501424 
{
public:
	// System.UInt16 System.Net.NetworkInformation.Win32_SOCKADDR::AddressFamily
	uint16_t ___AddressFamily_0;
	// System.Byte[] System.Net.NetworkInformation.Win32_SOCKADDR::AddressData
	ByteU5BU5D_t4116647657* ___AddressData_1;

public:
	inline static int32_t get_offset_of_AddressFamily_0() { return static_cast<int32_t>(offsetof(Win32_SOCKADDR_t2504501424, ___AddressFamily_0)); }
	inline uint16_t get_AddressFamily_0() const { return ___AddressFamily_0; }
	inline uint16_t* get_address_of_AddressFamily_0() { return &___AddressFamily_0; }
	inline void set_AddressFamily_0(uint16_t value)
	{
		___AddressFamily_0 = value;
	}

	inline static int32_t get_offset_of_AddressData_1() { return static_cast<int32_t>(offsetof(Win32_SOCKADDR_t2504501424, ___AddressData_1)); }
	inline ByteU5BU5D_t4116647657* get_AddressData_1() const { return ___AddressData_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_AddressData_1() { return &___AddressData_1; }
	inline void set_AddressData_1(ByteU5BU5D_t4116647657* value)
	{
		___AddressData_1 = value;
		Il2CppCodeGenWriteBarrier((&___AddressData_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_SOCKADDR
struct Win32_SOCKADDR_t2504501424_marshaled_pinvoke
{
	uint16_t ___AddressFamily_0;
	uint8_t ___AddressData_1[28];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_SOCKADDR
struct Win32_SOCKADDR_t2504501424_marshaled_com
{
	uint16_t ___AddressFamily_0;
	uint8_t ___AddressData_1[28];
};
#endif // WIN32_SOCKADDR_T2504501424_H
#ifndef WIN32_SOCKET_ADDRESS_T1936753419_H
#define WIN32_SOCKET_ADDRESS_T1936753419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_SOCKET_ADDRESS
struct  Win32_SOCKET_ADDRESS_t1936753419 
{
public:
	// System.IntPtr System.Net.NetworkInformation.Win32_SOCKET_ADDRESS::Sockaddr
	intptr_t ___Sockaddr_0;
	// System.Int32 System.Net.NetworkInformation.Win32_SOCKET_ADDRESS::SockaddrLength
	int32_t ___SockaddrLength_1;

public:
	inline static int32_t get_offset_of_Sockaddr_0() { return static_cast<int32_t>(offsetof(Win32_SOCKET_ADDRESS_t1936753419, ___Sockaddr_0)); }
	inline intptr_t get_Sockaddr_0() const { return ___Sockaddr_0; }
	inline intptr_t* get_address_of_Sockaddr_0() { return &___Sockaddr_0; }
	inline void set_Sockaddr_0(intptr_t value)
	{
		___Sockaddr_0 = value;
	}

	inline static int32_t get_offset_of_SockaddrLength_1() { return static_cast<int32_t>(offsetof(Win32_SOCKET_ADDRESS_t1936753419, ___SockaddrLength_1)); }
	inline int32_t get_SockaddrLength_1() const { return ___SockaddrLength_1; }
	inline int32_t* get_address_of_SockaddrLength_1() { return &___SockaddrLength_1; }
	inline void set_SockaddrLength_1(int32_t value)
	{
		___SockaddrLength_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_SOCKET_ADDRESS_T1936753419_H
#ifndef IFA_IFU_T1794893192_H
#define IFA_IFU_T1794893192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.ifa_ifu
struct  ifa_ifu_t1794893192 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr System.Net.NetworkInformation.ifa_ifu::ifu_broadaddr
			intptr_t ___ifu_broadaddr_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___ifu_broadaddr_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr System.Net.NetworkInformation.ifa_ifu::ifu_dstaddr
			intptr_t ___ifu_dstaddr_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___ifu_dstaddr_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_ifu_broadaddr_0() { return static_cast<int32_t>(offsetof(ifa_ifu_t1794893192, ___ifu_broadaddr_0)); }
	inline intptr_t get_ifu_broadaddr_0() const { return ___ifu_broadaddr_0; }
	inline intptr_t* get_address_of_ifu_broadaddr_0() { return &___ifu_broadaddr_0; }
	inline void set_ifu_broadaddr_0(intptr_t value)
	{
		___ifu_broadaddr_0 = value;
	}

	inline static int32_t get_offset_of_ifu_dstaddr_1() { return static_cast<int32_t>(offsetof(ifa_ifu_t1794893192, ___ifu_dstaddr_1)); }
	inline intptr_t get_ifu_dstaddr_1() const { return ___ifu_dstaddr_1; }
	inline intptr_t* get_address_of_ifu_dstaddr_1() { return &___ifu_dstaddr_1; }
	inline void set_ifu_dstaddr_1(intptr_t value)
	{
		___ifu_dstaddr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IFA_IFU_T1794893192_H
#ifndef IN6_ADDR_T3611791508_H
#define IN6_ADDR_T3611791508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.in6_addr
struct  in6_addr_t3611791508 
{
public:
	// System.Byte[] System.Net.NetworkInformation.in6_addr::u6_addr8
	ByteU5BU5D_t4116647657* ___u6_addr8_0;

public:
	inline static int32_t get_offset_of_u6_addr8_0() { return static_cast<int32_t>(offsetof(in6_addr_t3611791508, ___u6_addr8_0)); }
	inline ByteU5BU5D_t4116647657* get_u6_addr8_0() const { return ___u6_addr8_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_u6_addr8_0() { return &___u6_addr8_0; }
	inline void set_u6_addr8_0(ByteU5BU5D_t4116647657* value)
	{
		___u6_addr8_0 = value;
		Il2CppCodeGenWriteBarrier((&___u6_addr8_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.in6_addr
struct in6_addr_t3611791508_marshaled_pinvoke
{
	uint8_t ___u6_addr8_0[16];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.in6_addr
struct in6_addr_t3611791508_marshaled_com
{
	uint8_t ___u6_addr8_0[16];
};
#endif // IN6_ADDR_T3611791508_H
#ifndef SOCKADDR_LL_T3978606313_H
#define SOCKADDR_LL_T3978606313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.sockaddr_ll
struct  sockaddr_ll_t3978606313 
{
public:
	// System.UInt16 System.Net.NetworkInformation.sockaddr_ll::sll_family
	uint16_t ___sll_family_0;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_ll::sll_protocol
	uint16_t ___sll_protocol_1;
	// System.Int32 System.Net.NetworkInformation.sockaddr_ll::sll_ifindex
	int32_t ___sll_ifindex_2;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_ll::sll_hatype
	uint16_t ___sll_hatype_3;
	// System.Byte System.Net.NetworkInformation.sockaddr_ll::sll_pkttype
	uint8_t ___sll_pkttype_4;
	// System.Byte System.Net.NetworkInformation.sockaddr_ll::sll_halen
	uint8_t ___sll_halen_5;
	// System.Byte[] System.Net.NetworkInformation.sockaddr_ll::sll_addr
	ByteU5BU5D_t4116647657* ___sll_addr_6;

public:
	inline static int32_t get_offset_of_sll_family_0() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_family_0)); }
	inline uint16_t get_sll_family_0() const { return ___sll_family_0; }
	inline uint16_t* get_address_of_sll_family_0() { return &___sll_family_0; }
	inline void set_sll_family_0(uint16_t value)
	{
		___sll_family_0 = value;
	}

	inline static int32_t get_offset_of_sll_protocol_1() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_protocol_1)); }
	inline uint16_t get_sll_protocol_1() const { return ___sll_protocol_1; }
	inline uint16_t* get_address_of_sll_protocol_1() { return &___sll_protocol_1; }
	inline void set_sll_protocol_1(uint16_t value)
	{
		___sll_protocol_1 = value;
	}

	inline static int32_t get_offset_of_sll_ifindex_2() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_ifindex_2)); }
	inline int32_t get_sll_ifindex_2() const { return ___sll_ifindex_2; }
	inline int32_t* get_address_of_sll_ifindex_2() { return &___sll_ifindex_2; }
	inline void set_sll_ifindex_2(int32_t value)
	{
		___sll_ifindex_2 = value;
	}

	inline static int32_t get_offset_of_sll_hatype_3() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_hatype_3)); }
	inline uint16_t get_sll_hatype_3() const { return ___sll_hatype_3; }
	inline uint16_t* get_address_of_sll_hatype_3() { return &___sll_hatype_3; }
	inline void set_sll_hatype_3(uint16_t value)
	{
		___sll_hatype_3 = value;
	}

	inline static int32_t get_offset_of_sll_pkttype_4() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_pkttype_4)); }
	inline uint8_t get_sll_pkttype_4() const { return ___sll_pkttype_4; }
	inline uint8_t* get_address_of_sll_pkttype_4() { return &___sll_pkttype_4; }
	inline void set_sll_pkttype_4(uint8_t value)
	{
		___sll_pkttype_4 = value;
	}

	inline static int32_t get_offset_of_sll_halen_5() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_halen_5)); }
	inline uint8_t get_sll_halen_5() const { return ___sll_halen_5; }
	inline uint8_t* get_address_of_sll_halen_5() { return &___sll_halen_5; }
	inline void set_sll_halen_5(uint8_t value)
	{
		___sll_halen_5 = value;
	}

	inline static int32_t get_offset_of_sll_addr_6() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_addr_6)); }
	inline ByteU5BU5D_t4116647657* get_sll_addr_6() const { return ___sll_addr_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_sll_addr_6() { return &___sll_addr_6; }
	inline void set_sll_addr_6(ByteU5BU5D_t4116647657* value)
	{
		___sll_addr_6 = value;
		Il2CppCodeGenWriteBarrier((&___sll_addr_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.sockaddr_ll
struct sockaddr_ll_t3978606313_marshaled_pinvoke
{
	uint16_t ___sll_family_0;
	uint16_t ___sll_protocol_1;
	int32_t ___sll_ifindex_2;
	uint16_t ___sll_hatype_3;
	uint8_t ___sll_pkttype_4;
	uint8_t ___sll_halen_5;
	uint8_t ___sll_addr_6[8];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.sockaddr_ll
struct sockaddr_ll_t3978606313_marshaled_com
{
	uint16_t ___sll_family_0;
	uint16_t ___sll_protocol_1;
	int32_t ___sll_ifindex_2;
	uint16_t ___sll_hatype_3;
	uint8_t ___sll_pkttype_4;
	uint8_t ___sll_halen_5;
	uint8_t ___sll_addr_6[8];
};
#endif // SOCKADDR_LL_T3978606313_H
#ifndef AUTHENTICATEDSTREAM_T3415418016_H
#define AUTHENTICATEDSTREAM_T3415418016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticatedStream
struct  AuthenticatedStream_t3415418016  : public Stream_t1273022909
{
public:
	// System.IO.Stream System.Net.Security.AuthenticatedStream::_InnerStream
	Stream_t1273022909 * ____InnerStream_4;
	// System.Boolean System.Net.Security.AuthenticatedStream::_LeaveStreamOpen
	bool ____LeaveStreamOpen_5;

public:
	inline static int32_t get_offset_of__InnerStream_4() { return static_cast<int32_t>(offsetof(AuthenticatedStream_t3415418016, ____InnerStream_4)); }
	inline Stream_t1273022909 * get__InnerStream_4() const { return ____InnerStream_4; }
	inline Stream_t1273022909 ** get_address_of__InnerStream_4() { return &____InnerStream_4; }
	inline void set__InnerStream_4(Stream_t1273022909 * value)
	{
		____InnerStream_4 = value;
		Il2CppCodeGenWriteBarrier((&____InnerStream_4), value);
	}

	inline static int32_t get_offset_of__LeaveStreamOpen_5() { return static_cast<int32_t>(offsetof(AuthenticatedStream_t3415418016, ____LeaveStreamOpen_5)); }
	inline bool get__LeaveStreamOpen_5() const { return ____LeaveStreamOpen_5; }
	inline bool* get_address_of__LeaveStreamOpen_5() { return &____LeaveStreamOpen_5; }
	inline void set__LeaveStreamOpen_5(bool value)
	{
		____LeaveStreamOpen_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATEDSTREAM_T3415418016_H
#ifndef AUTHENTICATIONLEVEL_T1236753641_H
#define AUTHENTICATIONLEVEL_T1236753641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticationLevel
struct  AuthenticationLevel_t1236753641 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthenticationLevel_t1236753641, ___value___2)); }
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
#endif // AUTHENTICATIONLEVEL_T1236753641_H
#ifndef SSLPOLICYERRORS_T2205227823_H
#define SSLPOLICYERRORS_T2205227823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslPolicyErrors
struct  SslPolicyErrors_t2205227823 
{
public:
	// System.Int32 System.Net.Security.SslPolicyErrors::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SslPolicyErrors_t2205227823, ___value___2)); }
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
#endif // SSLPOLICYERRORS_T2205227823_H
#ifndef ADDRESSFAMILY_T2612549059_H
#define ADDRESSFAMILY_T2612549059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.AddressFamily
struct  AddressFamily_t2612549059 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_t2612549059, ___value___2)); }
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
#endif // ADDRESSFAMILY_T2612549059_H
#ifndef IPPROTECTIONLEVEL_T4099140720_H
#define IPPROTECTIONLEVEL_T4099140720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.IPProtectionLevel
struct  IPProtectionLevel_t4099140720 
{
public:
	// System.Int32 System.Net.Sockets.IPProtectionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IPProtectionLevel_t4099140720, ___value___2)); }
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
#endif // IPPROTECTIONLEVEL_T4099140720_H
#ifndef NETWORKSTREAM_T4071955934_H
#define NETWORKSTREAM_T4071955934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.NetworkStream
struct  NetworkStream_t4071955934  : public Stream_t1273022909
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::m_StreamSocket
	Socket_t1119025450 * ___m_StreamSocket_4;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Readable
	bool ___m_Readable_5;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Writeable
	bool ___m_Writeable_6;
	// System.Boolean System.Net.Sockets.NetworkStream::m_OwnsSocket
	bool ___m_OwnsSocket_7;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CloseTimeout
	int32_t ___m_CloseTimeout_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.NetworkStream::m_CleanedUp
	bool ___m_CleanedUp_9;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentReadTimeout
	int32_t ___m_CurrentReadTimeout_10;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentWriteTimeout
	int32_t ___m_CurrentWriteTimeout_11;

public:
	inline static int32_t get_offset_of_m_StreamSocket_4() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_StreamSocket_4)); }
	inline Socket_t1119025450 * get_m_StreamSocket_4() const { return ___m_StreamSocket_4; }
	inline Socket_t1119025450 ** get_address_of_m_StreamSocket_4() { return &___m_StreamSocket_4; }
	inline void set_m_StreamSocket_4(Socket_t1119025450 * value)
	{
		___m_StreamSocket_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StreamSocket_4), value);
	}

	inline static int32_t get_offset_of_m_Readable_5() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_Readable_5)); }
	inline bool get_m_Readable_5() const { return ___m_Readable_5; }
	inline bool* get_address_of_m_Readable_5() { return &___m_Readable_5; }
	inline void set_m_Readable_5(bool value)
	{
		___m_Readable_5 = value;
	}

	inline static int32_t get_offset_of_m_Writeable_6() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_Writeable_6)); }
	inline bool get_m_Writeable_6() const { return ___m_Writeable_6; }
	inline bool* get_address_of_m_Writeable_6() { return &___m_Writeable_6; }
	inline void set_m_Writeable_6(bool value)
	{
		___m_Writeable_6 = value;
	}

	inline static int32_t get_offset_of_m_OwnsSocket_7() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_OwnsSocket_7)); }
	inline bool get_m_OwnsSocket_7() const { return ___m_OwnsSocket_7; }
	inline bool* get_address_of_m_OwnsSocket_7() { return &___m_OwnsSocket_7; }
	inline void set_m_OwnsSocket_7(bool value)
	{
		___m_OwnsSocket_7 = value;
	}

	inline static int32_t get_offset_of_m_CloseTimeout_8() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_CloseTimeout_8)); }
	inline int32_t get_m_CloseTimeout_8() const { return ___m_CloseTimeout_8; }
	inline int32_t* get_address_of_m_CloseTimeout_8() { return &___m_CloseTimeout_8; }
	inline void set_m_CloseTimeout_8(int32_t value)
	{
		___m_CloseTimeout_8 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_9() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_CleanedUp_9)); }
	inline bool get_m_CleanedUp_9() const { return ___m_CleanedUp_9; }
	inline bool* get_address_of_m_CleanedUp_9() { return &___m_CleanedUp_9; }
	inline void set_m_CleanedUp_9(bool value)
	{
		___m_CleanedUp_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentReadTimeout_10() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_CurrentReadTimeout_10)); }
	inline int32_t get_m_CurrentReadTimeout_10() const { return ___m_CurrentReadTimeout_10; }
	inline int32_t* get_address_of_m_CurrentReadTimeout_10() { return &___m_CurrentReadTimeout_10; }
	inline void set_m_CurrentReadTimeout_10(int32_t value)
	{
		___m_CurrentReadTimeout_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentWriteTimeout_11() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_CurrentWriteTimeout_11)); }
	inline int32_t get_m_CurrentWriteTimeout_11() const { return ___m_CurrentWriteTimeout_11; }
	inline int32_t* get_address_of_m_CurrentWriteTimeout_11() { return &___m_CurrentWriteTimeout_11; }
	inline void set_m_CurrentWriteTimeout_11(int32_t value)
	{
		___m_CurrentWriteTimeout_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKSTREAM_T4071955934_H
#ifndef PROTOCOLTYPE_T303635025_H
#define PROTOCOLTYPE_T303635025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.ProtocolType
struct  ProtocolType_t303635025 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t303635025, ___value___2)); }
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
#endif // PROTOCOLTYPE_T303635025_H
#ifndef SELECTMODE_T1123767949_H
#define SELECTMODE_T1123767949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SelectMode
struct  SelectMode_t1123767949 
{
public:
	// System.Int32 System.Net.Sockets.SelectMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectMode_t1123767949, ___value___2)); }
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
#endif // SELECTMODE_T1123767949_H
#ifndef U3CU3EC__DISPLAYCLASS298_0_T616190186_H
#define U3CU3EC__DISPLAYCLASS298_0_T616190186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket/<>c__DisplayClass298_0
struct  U3CU3Ec__DisplayClass298_0_t616190186  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.Socket/<>c__DisplayClass298_0::<>4__this
	Socket_t1119025450 * ___U3CU3E4__this_0;
	// System.IOSelectorJob System.Net.Sockets.Socket/<>c__DisplayClass298_0::job
	IOSelectorJob_t2199748873 * ___job_1;
	// System.IntPtr System.Net.Sockets.Socket/<>c__DisplayClass298_0::handle
	intptr_t ___handle_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass298_0_t616190186, ___U3CU3E4__this_0)); }
	inline Socket_t1119025450 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Socket_t1119025450 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Socket_t1119025450 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_0), value);
	}

	inline static int32_t get_offset_of_job_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass298_0_t616190186, ___job_1)); }
	inline IOSelectorJob_t2199748873 * get_job_1() const { return ___job_1; }
	inline IOSelectorJob_t2199748873 ** get_address_of_job_1() { return &___job_1; }
	inline void set_job_1(IOSelectorJob_t2199748873 * value)
	{
		___job_1 = value;
		Il2CppCodeGenWriteBarrier((&___job_1), value);
	}

	inline static int32_t get_offset_of_handle_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass298_0_t616190186, ___handle_2)); }
	inline intptr_t get_handle_2() const { return ___handle_2; }
	inline intptr_t* get_address_of_handle_2() { return &___handle_2; }
	inline void set_handle_2(intptr_t value)
	{
		___handle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS298_0_T616190186_H
#ifndef WSABUF_T1998059390_H
#define WSABUF_T1998059390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket/WSABUF
struct  WSABUF_t1998059390 
{
public:
	// System.Int32 System.Net.Sockets.Socket/WSABUF::len
	int32_t ___len_0;
	// System.IntPtr System.Net.Sockets.Socket/WSABUF::buf
	intptr_t ___buf_1;

public:
	inline static int32_t get_offset_of_len_0() { return static_cast<int32_t>(offsetof(WSABUF_t1998059390, ___len_0)); }
	inline int32_t get_len_0() const { return ___len_0; }
	inline int32_t* get_address_of_len_0() { return &___len_0; }
	inline void set_len_0(int32_t value)
	{
		___len_0 = value;
	}

	inline static int32_t get_offset_of_buf_1() { return static_cast<int32_t>(offsetof(WSABUF_t1998059390, ___buf_1)); }
	inline intptr_t get_buf_1() const { return ___buf_1; }
	inline intptr_t* get_address_of_buf_1() { return &___buf_1; }
	inline void set_buf_1(intptr_t value)
	{
		___buf_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WSABUF_T1998059390_H
#ifndef SOCKETERROR_T3760144386_H
#define SOCKETERROR_T3760144386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketError
struct  SocketError_t3760144386 
{
public:
	// System.Int32 System.Net.Sockets.SocketError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketError_t3760144386, ___value___2)); }
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
#endif // SOCKETERROR_T3760144386_H
#ifndef SOCKETFLAGS_T2969870452_H
#define SOCKETFLAGS_T2969870452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketFlags
struct  SocketFlags_t2969870452 
{
public:
	// System.Int32 System.Net.Sockets.SocketFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketFlags_t2969870452, ___value___2)); }
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
#endif // SOCKETFLAGS_T2969870452_H
#ifndef SOCKETOPERATION_T2303010090_H
#define SOCKETOPERATION_T2303010090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketOperation
struct  SocketOperation_t2303010090 
{
public:
	// System.Int32 System.Net.Sockets.SocketOperation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketOperation_t2303010090, ___value___2)); }
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
#endif // SOCKETOPERATION_T2303010090_H
#ifndef SOCKETOPTIONLEVEL_T201167901_H
#define SOCKETOPTIONLEVEL_T201167901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketOptionLevel
struct  SocketOptionLevel_t201167901 
{
public:
	// System.Int32 System.Net.Sockets.SocketOptionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketOptionLevel_t201167901, ___value___2)); }
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
#endif // SOCKETOPTIONLEVEL_T201167901_H
#ifndef SOCKETOPTIONNAME_T403346465_H
#define SOCKETOPTIONNAME_T403346465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketOptionName
struct  SocketOptionName_t403346465 
{
public:
	// System.Int32 System.Net.Sockets.SocketOptionName::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketOptionName_t403346465, ___value___2)); }
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
#endif // SOCKETOPTIONNAME_T403346465_H
#ifndef SOCKETSHUTDOWN_T2687738148_H
#define SOCKETSHUTDOWN_T2687738148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketShutdown
struct  SocketShutdown_t2687738148 
{
public:
	// System.Int32 System.Net.Sockets.SocketShutdown::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketShutdown_t2687738148, ___value___2)); }
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
#endif // SOCKETSHUTDOWN_T2687738148_H
#ifndef SOCKETTYPE_T2175930299_H
#define SOCKETTYPE_T2175930299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketType
struct  SocketType_t2175930299 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_t2175930299, ___value___2)); }
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
#endif // SOCKETTYPE_T2175930299_H
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
#ifndef SAFEHANDLE_T3273388951_H
#define SAFEHANDLE_T3273388951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t3273388951  : public CriticalFinalizerObject_t701527852
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__ownsHandle_2() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ____ownsHandle_2)); }
	inline bool get__ownsHandle_2() const { return ____ownsHandle_2; }
	inline bool* get_address_of__ownsHandle_2() { return &____ownsHandle_2; }
	inline void set__ownsHandle_2(bool value)
	{
		____ownsHandle_2 = value;
	}

	inline static int32_t get_offset_of__fullyInitialized_3() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ____fullyInitialized_3)); }
	inline bool get__fullyInitialized_3() const { return ____fullyInitialized_3; }
	inline bool* get_address_of__fullyInitialized_3() { return &____fullyInitialized_3; }
	inline void set__fullyInitialized_3(bool value)
	{
		____fullyInitialized_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLE_T3273388951_H
#ifndef SAFEHANDLEZEROORMINUSONEISINVALID_T1182193648_H
#define SAFEHANDLEZEROORMINUSONEISINVALID_T1182193648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct  SafeHandleZeroOrMinusOneIsInvalid_t1182193648  : public SafeHandle_t3273388951
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLEZEROORMINUSONEISINVALID_T1182193648_H
#ifndef WIN32EXCEPTION_T3234146298_H
#define WIN32EXCEPTION_T3234146298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Win32Exception
struct  Win32Exception_t3234146298  : public ExternalException_t3544951457
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_t3234146298, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};

struct Win32Exception_t3234146298_StaticFields
{
public:
	// System.Boolean System.ComponentModel.Win32Exception::s_ErrorMessagesInitialized
	bool ___s_ErrorMessagesInitialized_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.ComponentModel.Win32Exception::s_ErrorMessage
	Dictionary_2_t736164020 * ___s_ErrorMessage_19;

public:
	inline static int32_t get_offset_of_s_ErrorMessagesInitialized_18() { return static_cast<int32_t>(offsetof(Win32Exception_t3234146298_StaticFields, ___s_ErrorMessagesInitialized_18)); }
	inline bool get_s_ErrorMessagesInitialized_18() const { return ___s_ErrorMessagesInitialized_18; }
	inline bool* get_address_of_s_ErrorMessagesInitialized_18() { return &___s_ErrorMessagesInitialized_18; }
	inline void set_s_ErrorMessagesInitialized_18(bool value)
	{
		___s_ErrorMessagesInitialized_18 = value;
	}

	inline static int32_t get_offset_of_s_ErrorMessage_19() { return static_cast<int32_t>(offsetof(Win32Exception_t3234146298_StaticFields, ___s_ErrorMessage_19)); }
	inline Dictionary_2_t736164020 * get_s_ErrorMessage_19() const { return ___s_ErrorMessage_19; }
	inline Dictionary_2_t736164020 ** get_address_of_s_ErrorMessage_19() { return &___s_ErrorMessage_19; }
	inline void set_s_ErrorMessage_19(Dictionary_2_t736164020 * value)
	{
		___s_ErrorMessage_19 = value;
		Il2CppCodeGenWriteBarrier((&___s_ErrorMessage_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32EXCEPTION_T3234146298_H
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
#ifndef SETTINGSSECTIONINTERNAL_T781171337_H
#define SETTINGSSECTIONINTERNAL_T781171337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.SettingsSectionInternal
struct  SettingsSectionInternal_t781171337  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Configuration.SettingsSectionInternal::HttpListenerUnescapeRequestUrl
	bool ___HttpListenerUnescapeRequestUrl_1;
	// System.Net.Sockets.IPProtectionLevel System.Net.Configuration.SettingsSectionInternal::IPProtectionLevel
	int32_t ___IPProtectionLevel_2;

public:
	inline static int32_t get_offset_of_HttpListenerUnescapeRequestUrl_1() { return static_cast<int32_t>(offsetof(SettingsSectionInternal_t781171337, ___HttpListenerUnescapeRequestUrl_1)); }
	inline bool get_HttpListenerUnescapeRequestUrl_1() const { return ___HttpListenerUnescapeRequestUrl_1; }
	inline bool* get_address_of_HttpListenerUnescapeRequestUrl_1() { return &___HttpListenerUnescapeRequestUrl_1; }
	inline void set_HttpListenerUnescapeRequestUrl_1(bool value)
	{
		___HttpListenerUnescapeRequestUrl_1 = value;
	}

	inline static int32_t get_offset_of_IPProtectionLevel_2() { return static_cast<int32_t>(offsetof(SettingsSectionInternal_t781171337, ___IPProtectionLevel_2)); }
	inline int32_t get_IPProtectionLevel_2() const { return ___IPProtectionLevel_2; }
	inline int32_t* get_address_of_IPProtectionLevel_2() { return &___IPProtectionLevel_2; }
	inline void set_IPProtectionLevel_2(int32_t value)
	{
		___IPProtectionLevel_2 = value;
	}
};

struct SettingsSectionInternal_t781171337_StaticFields
{
public:
	// System.Net.Configuration.SettingsSectionInternal System.Net.Configuration.SettingsSectionInternal::instance
	SettingsSectionInternal_t781171337 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(SettingsSectionInternal_t781171337_StaticFields, ___instance_0)); }
	inline SettingsSectionInternal_t781171337 * get_instance_0() const { return ___instance_0; }
	inline SettingsSectionInternal_t781171337 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(SettingsSectionInternal_t781171337 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGSSECTIONINTERNAL_T781171337_H
#ifndef LINUXIPINTERFACEPROPERTIES_T458874081_H
#define LINUXIPINTERFACEPROPERTIES_T458874081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxIPInterfaceProperties
struct  LinuxIPInterfaceProperties_t458874081  : public UnixIPInterfaceProperties_t1296234392
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINUXIPINTERFACEPROPERTIES_T458874081_H
#ifndef MACOSIPINTERFACEPROPERTIES_T1282553291_H
#define MACOSIPINTERFACEPROPERTIES_T1282553291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsIPInterfaceProperties
struct  MacOsIPInterfaceProperties_t1282553291  : public UnixIPInterfaceProperties_t1296234392
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACOSIPINTERFACEPROPERTIES_T1282553291_H
#ifndef SOCKADDR_IN6_T2080844659_H
#define SOCKADDR_IN6_T2080844659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr_in6
struct  sockaddr_in6_t2080844659 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_len
	uint8_t ___sin6_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_family
	uint8_t ___sin6_family_1;
	// System.UInt16 System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_port
	uint16_t ___sin6_port_2;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_flowinfo
	uint32_t ___sin6_flowinfo_3;
	// System.Net.NetworkInformation.MacOsStructs.in6_addr System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_addr
	in6_addr_t1417766092  ___sin6_addr_4;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_scope_id
	uint32_t ___sin6_scope_id_5;

public:
	inline static int32_t get_offset_of_sin6_len_0() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_len_0)); }
	inline uint8_t get_sin6_len_0() const { return ___sin6_len_0; }
	inline uint8_t* get_address_of_sin6_len_0() { return &___sin6_len_0; }
	inline void set_sin6_len_0(uint8_t value)
	{
		___sin6_len_0 = value;
	}

	inline static int32_t get_offset_of_sin6_family_1() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_family_1)); }
	inline uint8_t get_sin6_family_1() const { return ___sin6_family_1; }
	inline uint8_t* get_address_of_sin6_family_1() { return &___sin6_family_1; }
	inline void set_sin6_family_1(uint8_t value)
	{
		___sin6_family_1 = value;
	}

	inline static int32_t get_offset_of_sin6_port_2() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_port_2)); }
	inline uint16_t get_sin6_port_2() const { return ___sin6_port_2; }
	inline uint16_t* get_address_of_sin6_port_2() { return &___sin6_port_2; }
	inline void set_sin6_port_2(uint16_t value)
	{
		___sin6_port_2 = value;
	}

	inline static int32_t get_offset_of_sin6_flowinfo_3() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_flowinfo_3)); }
	inline uint32_t get_sin6_flowinfo_3() const { return ___sin6_flowinfo_3; }
	inline uint32_t* get_address_of_sin6_flowinfo_3() { return &___sin6_flowinfo_3; }
	inline void set_sin6_flowinfo_3(uint32_t value)
	{
		___sin6_flowinfo_3 = value;
	}

	inline static int32_t get_offset_of_sin6_addr_4() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_addr_4)); }
	inline in6_addr_t1417766092  get_sin6_addr_4() const { return ___sin6_addr_4; }
	inline in6_addr_t1417766092 * get_address_of_sin6_addr_4() { return &___sin6_addr_4; }
	inline void set_sin6_addr_4(in6_addr_t1417766092  value)
	{
		___sin6_addr_4 = value;
	}

	inline static int32_t get_offset_of_sin6_scope_id_5() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_scope_id_5)); }
	inline uint32_t get_sin6_scope_id_5() const { return ___sin6_scope_id_5; }
	inline uint32_t* get_address_of_sin6_scope_id_5() { return &___sin6_scope_id_5; }
	inline void set_sin6_scope_id_5(uint32_t value)
	{
		___sin6_scope_id_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_in6
struct sockaddr_in6_t2080844659_marshaled_pinvoke
{
	uint8_t ___sin6_len_0;
	uint8_t ___sin6_family_1;
	uint16_t ___sin6_port_2;
	uint32_t ___sin6_flowinfo_3;
	in6_addr_t1417766092_marshaled_pinvoke ___sin6_addr_4;
	uint32_t ___sin6_scope_id_5;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_in6
struct sockaddr_in6_t2080844659_marshaled_com
{
	uint8_t ___sin6_len_0;
	uint8_t ___sin6_family_1;
	uint16_t ___sin6_port_2;
	uint32_t ___sin6_flowinfo_3;
	in6_addr_t1417766092_marshaled_com ___sin6_addr_4;
	uint32_t ___sin6_scope_id_5;
};
#endif // SOCKADDR_IN6_T2080844659_H
#ifndef MIBIPGLOBALPROPERTIES_T3015477361_H
#define MIBIPGLOBALPROPERTIES_T3015477361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MibIPGlobalProperties
struct  MibIPGlobalProperties_t3015477361  : public UnixIPGlobalProperties_t1460024316
{
public:
	// System.String System.Net.NetworkInformation.MibIPGlobalProperties::StatisticsFile
	String_t* ___StatisticsFile_0;
	// System.String System.Net.NetworkInformation.MibIPGlobalProperties::StatisticsFileIPv6
	String_t* ___StatisticsFileIPv6_1;
	// System.String System.Net.NetworkInformation.MibIPGlobalProperties::TcpFile
	String_t* ___TcpFile_2;
	// System.String System.Net.NetworkInformation.MibIPGlobalProperties::Tcp6File
	String_t* ___Tcp6File_3;
	// System.String System.Net.NetworkInformation.MibIPGlobalProperties::UdpFile
	String_t* ___UdpFile_4;
	// System.String System.Net.NetworkInformation.MibIPGlobalProperties::Udp6File
	String_t* ___Udp6File_5;

public:
	inline static int32_t get_offset_of_StatisticsFile_0() { return static_cast<int32_t>(offsetof(MibIPGlobalProperties_t3015477361, ___StatisticsFile_0)); }
	inline String_t* get_StatisticsFile_0() const { return ___StatisticsFile_0; }
	inline String_t** get_address_of_StatisticsFile_0() { return &___StatisticsFile_0; }
	inline void set_StatisticsFile_0(String_t* value)
	{
		___StatisticsFile_0 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticsFile_0), value);
	}

	inline static int32_t get_offset_of_StatisticsFileIPv6_1() { return static_cast<int32_t>(offsetof(MibIPGlobalProperties_t3015477361, ___StatisticsFileIPv6_1)); }
	inline String_t* get_StatisticsFileIPv6_1() const { return ___StatisticsFileIPv6_1; }
	inline String_t** get_address_of_StatisticsFileIPv6_1() { return &___StatisticsFileIPv6_1; }
	inline void set_StatisticsFileIPv6_1(String_t* value)
	{
		___StatisticsFileIPv6_1 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticsFileIPv6_1), value);
	}

	inline static int32_t get_offset_of_TcpFile_2() { return static_cast<int32_t>(offsetof(MibIPGlobalProperties_t3015477361, ___TcpFile_2)); }
	inline String_t* get_TcpFile_2() const { return ___TcpFile_2; }
	inline String_t** get_address_of_TcpFile_2() { return &___TcpFile_2; }
	inline void set_TcpFile_2(String_t* value)
	{
		___TcpFile_2 = value;
		Il2CppCodeGenWriteBarrier((&___TcpFile_2), value);
	}

	inline static int32_t get_offset_of_Tcp6File_3() { return static_cast<int32_t>(offsetof(MibIPGlobalProperties_t3015477361, ___Tcp6File_3)); }
	inline String_t* get_Tcp6File_3() const { return ___Tcp6File_3; }
	inline String_t** get_address_of_Tcp6File_3() { return &___Tcp6File_3; }
	inline void set_Tcp6File_3(String_t* value)
	{
		___Tcp6File_3 = value;
		Il2CppCodeGenWriteBarrier((&___Tcp6File_3), value);
	}

	inline static int32_t get_offset_of_UdpFile_4() { return static_cast<int32_t>(offsetof(MibIPGlobalProperties_t3015477361, ___UdpFile_4)); }
	inline String_t* get_UdpFile_4() const { return ___UdpFile_4; }
	inline String_t** get_address_of_UdpFile_4() { return &___UdpFile_4; }
	inline void set_UdpFile_4(String_t* value)
	{
		___UdpFile_4 = value;
		Il2CppCodeGenWriteBarrier((&___UdpFile_4), value);
	}

	inline static int32_t get_offset_of_Udp6File_5() { return static_cast<int32_t>(offsetof(MibIPGlobalProperties_t3015477361, ___Udp6File_5)); }
	inline String_t* get_Udp6File_5() const { return ___Udp6File_5; }
	inline String_t** get_address_of_Udp6File_5() { return &___Udp6File_5; }
	inline void set_Udp6File_5(String_t* value)
	{
		___Udp6File_5 = value;
		Il2CppCodeGenWriteBarrier((&___Udp6File_5), value);
	}
};

struct MibIPGlobalProperties_t3015477361_StaticFields
{
public:
	// System.Char[] System.Net.NetworkInformation.MibIPGlobalProperties::wsChars
	CharU5BU5D_t3528271667* ___wsChars_6;

public:
	inline static int32_t get_offset_of_wsChars_6() { return static_cast<int32_t>(offsetof(MibIPGlobalProperties_t3015477361_StaticFields, ___wsChars_6)); }
	inline CharU5BU5D_t3528271667* get_wsChars_6() const { return ___wsChars_6; }
	inline CharU5BU5D_t3528271667** get_address_of_wsChars_6() { return &___wsChars_6; }
	inline void set_wsChars_6(CharU5BU5D_t3528271667* value)
	{
		___wsChars_6 = value;
		Il2CppCodeGenWriteBarrier((&___wsChars_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIBIPGLOBALPROPERTIES_T3015477361_H
#ifndef UNIXNETWORKINTERFACE_T2401762829_H
#define UNIXNETWORKINTERFACE_T2401762829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnixNetworkInterface
struct  UnixNetworkInterface_t2401762829  : public NetworkInterface_t271883373
{
public:
	// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.UnixNetworkInterface::ipproperties
	IPInterfaceProperties_t3964383369 * ___ipproperties_0;
	// System.String System.Net.NetworkInformation.UnixNetworkInterface::name
	String_t* ___name_1;
	// System.Collections.Generic.List`1<System.Net.IPAddress> System.Net.NetworkInformation.UnixNetworkInterface::addresses
	List_1_t1713852332 * ___addresses_2;
	// System.Byte[] System.Net.NetworkInformation.UnixNetworkInterface::macAddress
	ByteU5BU5D_t4116647657* ___macAddress_3;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.UnixNetworkInterface::type
	int32_t ___type_4;

public:
	inline static int32_t get_offset_of_ipproperties_0() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___ipproperties_0)); }
	inline IPInterfaceProperties_t3964383369 * get_ipproperties_0() const { return ___ipproperties_0; }
	inline IPInterfaceProperties_t3964383369 ** get_address_of_ipproperties_0() { return &___ipproperties_0; }
	inline void set_ipproperties_0(IPInterfaceProperties_t3964383369 * value)
	{
		___ipproperties_0 = value;
		Il2CppCodeGenWriteBarrier((&___ipproperties_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_addresses_2() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___addresses_2)); }
	inline List_1_t1713852332 * get_addresses_2() const { return ___addresses_2; }
	inline List_1_t1713852332 ** get_address_of_addresses_2() { return &___addresses_2; }
	inline void set_addresses_2(List_1_t1713852332 * value)
	{
		___addresses_2 = value;
		Il2CppCodeGenWriteBarrier((&___addresses_2), value);
	}

	inline static int32_t get_offset_of_macAddress_3() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___macAddress_3)); }
	inline ByteU5BU5D_t4116647657* get_macAddress_3() const { return ___macAddress_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_macAddress_3() { return &___macAddress_3; }
	inline void set_macAddress_3(ByteU5BU5D_t4116647657* value)
	{
		___macAddress_3 = value;
		Il2CppCodeGenWriteBarrier((&___macAddress_3), value);
	}

	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___type_4)); }
	inline int32_t get_type_4() const { return ___type_4; }
	inline int32_t* get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(int32_t value)
	{
		___type_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIXNETWORKINTERFACE_T2401762829_H
#ifndef WIN32_FIXED_INFO_T1299345856_H
#define WIN32_FIXED_INFO_T1299345856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_FIXED_INFO
struct  Win32_FIXED_INFO_t1299345856 
{
public:
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::HostName
	String_t* ___HostName_0;
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::DomainName
	String_t* ___DomainName_1;
	// System.IntPtr System.Net.NetworkInformation.Win32_FIXED_INFO::CurrentDnsServer
	intptr_t ___CurrentDnsServer_2;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_FIXED_INFO::DnsServerList
	Win32_IP_ADDR_STRING_t1213417184  ___DnsServerList_3;
	// System.Net.NetworkInformation.NetBiosNodeType System.Net.NetworkInformation.Win32_FIXED_INFO::NodeType
	int32_t ___NodeType_4;
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::ScopeId
	String_t* ___ScopeId_5;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableRouting
	uint32_t ___EnableRouting_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableProxy
	uint32_t ___EnableProxy_7;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableDns
	uint32_t ___EnableDns_8;

public:
	inline static int32_t get_offset_of_HostName_0() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___HostName_0)); }
	inline String_t* get_HostName_0() const { return ___HostName_0; }
	inline String_t** get_address_of_HostName_0() { return &___HostName_0; }
	inline void set_HostName_0(String_t* value)
	{
		___HostName_0 = value;
		Il2CppCodeGenWriteBarrier((&___HostName_0), value);
	}

	inline static int32_t get_offset_of_DomainName_1() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___DomainName_1)); }
	inline String_t* get_DomainName_1() const { return ___DomainName_1; }
	inline String_t** get_address_of_DomainName_1() { return &___DomainName_1; }
	inline void set_DomainName_1(String_t* value)
	{
		___DomainName_1 = value;
		Il2CppCodeGenWriteBarrier((&___DomainName_1), value);
	}

	inline static int32_t get_offset_of_CurrentDnsServer_2() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___CurrentDnsServer_2)); }
	inline intptr_t get_CurrentDnsServer_2() const { return ___CurrentDnsServer_2; }
	inline intptr_t* get_address_of_CurrentDnsServer_2() { return &___CurrentDnsServer_2; }
	inline void set_CurrentDnsServer_2(intptr_t value)
	{
		___CurrentDnsServer_2 = value;
	}

	inline static int32_t get_offset_of_DnsServerList_3() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___DnsServerList_3)); }
	inline Win32_IP_ADDR_STRING_t1213417184  get_DnsServerList_3() const { return ___DnsServerList_3; }
	inline Win32_IP_ADDR_STRING_t1213417184 * get_address_of_DnsServerList_3() { return &___DnsServerList_3; }
	inline void set_DnsServerList_3(Win32_IP_ADDR_STRING_t1213417184  value)
	{
		___DnsServerList_3 = value;
	}

	inline static int32_t get_offset_of_NodeType_4() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___NodeType_4)); }
	inline int32_t get_NodeType_4() const { return ___NodeType_4; }
	inline int32_t* get_address_of_NodeType_4() { return &___NodeType_4; }
	inline void set_NodeType_4(int32_t value)
	{
		___NodeType_4 = value;
	}

	inline static int32_t get_offset_of_ScopeId_5() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___ScopeId_5)); }
	inline String_t* get_ScopeId_5() const { return ___ScopeId_5; }
	inline String_t** get_address_of_ScopeId_5() { return &___ScopeId_5; }
	inline void set_ScopeId_5(String_t* value)
	{
		___ScopeId_5 = value;
		Il2CppCodeGenWriteBarrier((&___ScopeId_5), value);
	}

	inline static int32_t get_offset_of_EnableRouting_6() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___EnableRouting_6)); }
	inline uint32_t get_EnableRouting_6() const { return ___EnableRouting_6; }
	inline uint32_t* get_address_of_EnableRouting_6() { return &___EnableRouting_6; }
	inline void set_EnableRouting_6(uint32_t value)
	{
		___EnableRouting_6 = value;
	}

	inline static int32_t get_offset_of_EnableProxy_7() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___EnableProxy_7)); }
	inline uint32_t get_EnableProxy_7() const { return ___EnableProxy_7; }
	inline uint32_t* get_address_of_EnableProxy_7() { return &___EnableProxy_7; }
	inline void set_EnableProxy_7(uint32_t value)
	{
		___EnableProxy_7 = value;
	}

	inline static int32_t get_offset_of_EnableDns_8() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___EnableDns_8)); }
	inline uint32_t get_EnableDns_8() const { return ___EnableDns_8; }
	inline uint32_t* get_address_of_EnableDns_8() { return &___EnableDns_8; }
	inline void set_EnableDns_8(uint32_t value)
	{
		___EnableDns_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_FIXED_INFO
struct Win32_FIXED_INFO_t1299345856_marshaled_pinvoke
{
	char ___HostName_0[132];
	char ___DomainName_1[132];
	intptr_t ___CurrentDnsServer_2;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_pinvoke ___DnsServerList_3;
	int32_t ___NodeType_4;
	char ___ScopeId_5[260];
	uint32_t ___EnableRouting_6;
	uint32_t ___EnableProxy_7;
	uint32_t ___EnableDns_8;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_FIXED_INFO
struct Win32_FIXED_INFO_t1299345856_marshaled_com
{
	char ___HostName_0[132];
	char ___DomainName_1[132];
	intptr_t ___CurrentDnsServer_2;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_com ___DnsServerList_3;
	int32_t ___NodeType_4;
	char ___ScopeId_5[260];
	uint32_t ___EnableRouting_6;
	uint32_t ___EnableProxy_7;
	uint32_t ___EnableDns_8;
};
#endif // WIN32_FIXED_INFO_T1299345856_H
#ifndef WIN32_IP_ADAPTER_ADDRESSES_T3463526328_H
#define WIN32_IP_ADAPTER_ADDRESSES_T3463526328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct  Win32_IP_ADAPTER_ADDRESSES_t3463526328 
{
public:
	// System.Net.NetworkInformation.AlignmentUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Alignment
	AlignmentUnion_t208902285  ___Alignment_0;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Next
	intptr_t ___Next_1;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::AdapterName
	String_t* ___AdapterName_2;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstUnicastAddress
	intptr_t ___FirstUnicastAddress_3;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstAnycastAddress
	intptr_t ___FirstAnycastAddress_4;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstMulticastAddress
	intptr_t ___FirstMulticastAddress_5;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstDnsServerAddress
	intptr_t ___FirstDnsServerAddress_6;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::DnsSuffix
	String_t* ___DnsSuffix_7;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Description
	String_t* ___Description_8;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FriendlyName
	String_t* ___FriendlyName_9;
	// System.Byte[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddress
	ByteU5BU5D_t4116647657* ___PhysicalAddress_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddressLength
	uint32_t ___PhysicalAddressLength_11;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Flags
	uint32_t ___Flags_12;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Mtu
	uint32_t ___Mtu_13;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::IfType
	int32_t ___IfType_14;
	// System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::OperStatus
	int32_t ___OperStatus_15;
	// System.Int32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Ipv6IfIndex
	int32_t ___Ipv6IfIndex_16;
	// System.UInt32[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::ZoneIndices
	UInt32U5BU5D_t2770800703* ___ZoneIndices_17;

public:
	inline static int32_t get_offset_of_Alignment_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Alignment_0)); }
	inline AlignmentUnion_t208902285  get_Alignment_0() const { return ___Alignment_0; }
	inline AlignmentUnion_t208902285 * get_address_of_Alignment_0() { return &___Alignment_0; }
	inline void set_Alignment_0(AlignmentUnion_t208902285  value)
	{
		___Alignment_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Next_1)); }
	inline intptr_t get_Next_1() const { return ___Next_1; }
	inline intptr_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(intptr_t value)
	{
		___Next_1 = value;
	}

	inline static int32_t get_offset_of_AdapterName_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___AdapterName_2)); }
	inline String_t* get_AdapterName_2() const { return ___AdapterName_2; }
	inline String_t** get_address_of_AdapterName_2() { return &___AdapterName_2; }
	inline void set_AdapterName_2(String_t* value)
	{
		___AdapterName_2 = value;
		Il2CppCodeGenWriteBarrier((&___AdapterName_2), value);
	}

	inline static int32_t get_offset_of_FirstUnicastAddress_3() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstUnicastAddress_3)); }
	inline intptr_t get_FirstUnicastAddress_3() const { return ___FirstUnicastAddress_3; }
	inline intptr_t* get_address_of_FirstUnicastAddress_3() { return &___FirstUnicastAddress_3; }
	inline void set_FirstUnicastAddress_3(intptr_t value)
	{
		___FirstUnicastAddress_3 = value;
	}

	inline static int32_t get_offset_of_FirstAnycastAddress_4() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstAnycastAddress_4)); }
	inline intptr_t get_FirstAnycastAddress_4() const { return ___FirstAnycastAddress_4; }
	inline intptr_t* get_address_of_FirstAnycastAddress_4() { return &___FirstAnycastAddress_4; }
	inline void set_FirstAnycastAddress_4(intptr_t value)
	{
		___FirstAnycastAddress_4 = value;
	}

	inline static int32_t get_offset_of_FirstMulticastAddress_5() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstMulticastAddress_5)); }
	inline intptr_t get_FirstMulticastAddress_5() const { return ___FirstMulticastAddress_5; }
	inline intptr_t* get_address_of_FirstMulticastAddress_5() { return &___FirstMulticastAddress_5; }
	inline void set_FirstMulticastAddress_5(intptr_t value)
	{
		___FirstMulticastAddress_5 = value;
	}

	inline static int32_t get_offset_of_FirstDnsServerAddress_6() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstDnsServerAddress_6)); }
	inline intptr_t get_FirstDnsServerAddress_6() const { return ___FirstDnsServerAddress_6; }
	inline intptr_t* get_address_of_FirstDnsServerAddress_6() { return &___FirstDnsServerAddress_6; }
	inline void set_FirstDnsServerAddress_6(intptr_t value)
	{
		___FirstDnsServerAddress_6 = value;
	}

	inline static int32_t get_offset_of_DnsSuffix_7() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___DnsSuffix_7)); }
	inline String_t* get_DnsSuffix_7() const { return ___DnsSuffix_7; }
	inline String_t** get_address_of_DnsSuffix_7() { return &___DnsSuffix_7; }
	inline void set_DnsSuffix_7(String_t* value)
	{
		___DnsSuffix_7 = value;
		Il2CppCodeGenWriteBarrier((&___DnsSuffix_7), value);
	}

	inline static int32_t get_offset_of_Description_8() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Description_8)); }
	inline String_t* get_Description_8() const { return ___Description_8; }
	inline String_t** get_address_of_Description_8() { return &___Description_8; }
	inline void set_Description_8(String_t* value)
	{
		___Description_8 = value;
		Il2CppCodeGenWriteBarrier((&___Description_8), value);
	}

	inline static int32_t get_offset_of_FriendlyName_9() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FriendlyName_9)); }
	inline String_t* get_FriendlyName_9() const { return ___FriendlyName_9; }
	inline String_t** get_address_of_FriendlyName_9() { return &___FriendlyName_9; }
	inline void set_FriendlyName_9(String_t* value)
	{
		___FriendlyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___FriendlyName_9), value);
	}

	inline static int32_t get_offset_of_PhysicalAddress_10() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___PhysicalAddress_10)); }
	inline ByteU5BU5D_t4116647657* get_PhysicalAddress_10() const { return ___PhysicalAddress_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_PhysicalAddress_10() { return &___PhysicalAddress_10; }
	inline void set_PhysicalAddress_10(ByteU5BU5D_t4116647657* value)
	{
		___PhysicalAddress_10 = value;
		Il2CppCodeGenWriteBarrier((&___PhysicalAddress_10), value);
	}

	inline static int32_t get_offset_of_PhysicalAddressLength_11() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___PhysicalAddressLength_11)); }
	inline uint32_t get_PhysicalAddressLength_11() const { return ___PhysicalAddressLength_11; }
	inline uint32_t* get_address_of_PhysicalAddressLength_11() { return &___PhysicalAddressLength_11; }
	inline void set_PhysicalAddressLength_11(uint32_t value)
	{
		___PhysicalAddressLength_11 = value;
	}

	inline static int32_t get_offset_of_Flags_12() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Flags_12)); }
	inline uint32_t get_Flags_12() const { return ___Flags_12; }
	inline uint32_t* get_address_of_Flags_12() { return &___Flags_12; }
	inline void set_Flags_12(uint32_t value)
	{
		___Flags_12 = value;
	}

	inline static int32_t get_offset_of_Mtu_13() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Mtu_13)); }
	inline uint32_t get_Mtu_13() const { return ___Mtu_13; }
	inline uint32_t* get_address_of_Mtu_13() { return &___Mtu_13; }
	inline void set_Mtu_13(uint32_t value)
	{
		___Mtu_13 = value;
	}

	inline static int32_t get_offset_of_IfType_14() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___IfType_14)); }
	inline int32_t get_IfType_14() const { return ___IfType_14; }
	inline int32_t* get_address_of_IfType_14() { return &___IfType_14; }
	inline void set_IfType_14(int32_t value)
	{
		___IfType_14 = value;
	}

	inline static int32_t get_offset_of_OperStatus_15() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___OperStatus_15)); }
	inline int32_t get_OperStatus_15() const { return ___OperStatus_15; }
	inline int32_t* get_address_of_OperStatus_15() { return &___OperStatus_15; }
	inline void set_OperStatus_15(int32_t value)
	{
		___OperStatus_15 = value;
	}

	inline static int32_t get_offset_of_Ipv6IfIndex_16() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Ipv6IfIndex_16)); }
	inline int32_t get_Ipv6IfIndex_16() const { return ___Ipv6IfIndex_16; }
	inline int32_t* get_address_of_Ipv6IfIndex_16() { return &___Ipv6IfIndex_16; }
	inline void set_Ipv6IfIndex_16(int32_t value)
	{
		___Ipv6IfIndex_16 = value;
	}

	inline static int32_t get_offset_of_ZoneIndices_17() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___ZoneIndices_17)); }
	inline UInt32U5BU5D_t2770800703* get_ZoneIndices_17() const { return ___ZoneIndices_17; }
	inline UInt32U5BU5D_t2770800703** get_address_of_ZoneIndices_17() { return &___ZoneIndices_17; }
	inline void set_ZoneIndices_17(UInt32U5BU5D_t2770800703* value)
	{
		___ZoneIndices_17 = value;
		Il2CppCodeGenWriteBarrier((&___ZoneIndices_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t3463526328_marshaled_pinvoke
{
	AlignmentUnion_t208902285  ___Alignment_0;
	intptr_t ___Next_1;
	char* ___AdapterName_2;
	intptr_t ___FirstUnicastAddress_3;
	intptr_t ___FirstAnycastAddress_4;
	intptr_t ___FirstMulticastAddress_5;
	intptr_t ___FirstDnsServerAddress_6;
	Il2CppChar* ___DnsSuffix_7;
	Il2CppChar* ___Description_8;
	Il2CppChar* ___FriendlyName_9;
	uint8_t ___PhysicalAddress_10[8];
	uint32_t ___PhysicalAddressLength_11;
	uint32_t ___Flags_12;
	uint32_t ___Mtu_13;
	int32_t ___IfType_14;
	int32_t ___OperStatus_15;
	int32_t ___Ipv6IfIndex_16;
	uint32_t ___ZoneIndices_17[64];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t3463526328_marshaled_com
{
	AlignmentUnion_t208902285  ___Alignment_0;
	intptr_t ___Next_1;
	char* ___AdapterName_2;
	intptr_t ___FirstUnicastAddress_3;
	intptr_t ___FirstAnycastAddress_4;
	intptr_t ___FirstMulticastAddress_5;
	intptr_t ___FirstDnsServerAddress_6;
	Il2CppChar* ___DnsSuffix_7;
	Il2CppChar* ___Description_8;
	Il2CppChar* ___FriendlyName_9;
	uint8_t ___PhysicalAddress_10[8];
	uint32_t ___PhysicalAddressLength_11;
	uint32_t ___Flags_12;
	uint32_t ___Mtu_13;
	int32_t ___IfType_14;
	int32_t ___OperStatus_15;
	int32_t ___Ipv6IfIndex_16;
	uint32_t ___ZoneIndices_17[64];
};
#endif // WIN32_IP_ADAPTER_ADDRESSES_T3463526328_H
#ifndef WIN32_IP_ADAPTER_DNS_SERVER_ADDRESS_T3053140100_H
#define WIN32_IP_ADAPTER_DNS_SERVER_ADDRESS_T3053140100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_DNS_SERVER_ADDRESS
struct  Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100 
{
public:
	// System.Net.NetworkInformation.Win32LengthFlagsUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_DNS_SERVER_ADDRESS::LengthFlags
	Win32LengthFlagsUnion_t1383639798  ___LengthFlags_0;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_DNS_SERVER_ADDRESS::Next
	intptr_t ___Next_1;
	// System.Net.NetworkInformation.Win32_SOCKET_ADDRESS System.Net.NetworkInformation.Win32_IP_ADAPTER_DNS_SERVER_ADDRESS::Address
	Win32_SOCKET_ADDRESS_t1936753419  ___Address_2;

public:
	inline static int32_t get_offset_of_LengthFlags_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100, ___LengthFlags_0)); }
	inline Win32LengthFlagsUnion_t1383639798  get_LengthFlags_0() const { return ___LengthFlags_0; }
	inline Win32LengthFlagsUnion_t1383639798 * get_address_of_LengthFlags_0() { return &___LengthFlags_0; }
	inline void set_LengthFlags_0(Win32LengthFlagsUnion_t1383639798  value)
	{
		___LengthFlags_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100, ___Next_1)); }
	inline intptr_t get_Next_1() const { return ___Next_1; }
	inline intptr_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(intptr_t value)
	{
		___Next_1 = value;
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100, ___Address_2)); }
	inline Win32_SOCKET_ADDRESS_t1936753419  get_Address_2() const { return ___Address_2; }
	inline Win32_SOCKET_ADDRESS_t1936753419 * get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(Win32_SOCKET_ADDRESS_t1936753419  value)
	{
		___Address_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_IP_ADAPTER_DNS_SERVER_ADDRESS_T3053140100_H
#ifndef WIN32_MIB_IFROW_T851471770_H
#define WIN32_MIB_IFROW_T851471770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_MIB_IFROW
struct  Win32_MIB_IFROW_t851471770 
{
public:
	// System.Char[] System.Net.NetworkInformation.Win32_MIB_IFROW::Name
	CharU5BU5D_t3528271667* ___Name_0;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::Index
	int32_t ___Index_1;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.Win32_MIB_IFROW::Type
	int32_t ___Type_2;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::Mtu
	int32_t ___Mtu_3;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::Speed
	uint32_t ___Speed_4;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::PhysAddrLen
	int32_t ___PhysAddrLen_5;
	// System.Byte[] System.Net.NetworkInformation.Win32_MIB_IFROW::PhysAddr
	ByteU5BU5D_t4116647657* ___PhysAddr_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::AdminStatus
	uint32_t ___AdminStatus_7;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::OperStatus
	uint32_t ___OperStatus_8;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::LastChange
	uint32_t ___LastChange_9;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InOctets
	int32_t ___InOctets_10;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InUcastPkts
	int32_t ___InUcastPkts_11;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InNUcastPkts
	int32_t ___InNUcastPkts_12;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InDiscards
	int32_t ___InDiscards_13;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InErrors
	int32_t ___InErrors_14;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InUnknownProtos
	int32_t ___InUnknownProtos_15;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutOctets
	int32_t ___OutOctets_16;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutUcastPkts
	int32_t ___OutUcastPkts_17;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutNUcastPkts
	int32_t ___OutNUcastPkts_18;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutDiscards
	int32_t ___OutDiscards_19;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutErrors
	int32_t ___OutErrors_20;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutQLen
	int32_t ___OutQLen_21;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::DescrLen
	int32_t ___DescrLen_22;
	// System.Byte[] System.Net.NetworkInformation.Win32_MIB_IFROW::Descr
	ByteU5BU5D_t4116647657* ___Descr_23;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Name_0)); }
	inline CharU5BU5D_t3528271667* get_Name_0() const { return ___Name_0; }
	inline CharU5BU5D_t3528271667** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(CharU5BU5D_t3528271667* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Index_1() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Index_1)); }
	inline int32_t get_Index_1() const { return ___Index_1; }
	inline int32_t* get_address_of_Index_1() { return &___Index_1; }
	inline void set_Index_1(int32_t value)
	{
		___Index_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Type_2)); }
	inline int32_t get_Type_2() const { return ___Type_2; }
	inline int32_t* get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(int32_t value)
	{
		___Type_2 = value;
	}

	inline static int32_t get_offset_of_Mtu_3() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Mtu_3)); }
	inline int32_t get_Mtu_3() const { return ___Mtu_3; }
	inline int32_t* get_address_of_Mtu_3() { return &___Mtu_3; }
	inline void set_Mtu_3(int32_t value)
	{
		___Mtu_3 = value;
	}

	inline static int32_t get_offset_of_Speed_4() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Speed_4)); }
	inline uint32_t get_Speed_4() const { return ___Speed_4; }
	inline uint32_t* get_address_of_Speed_4() { return &___Speed_4; }
	inline void set_Speed_4(uint32_t value)
	{
		___Speed_4 = value;
	}

	inline static int32_t get_offset_of_PhysAddrLen_5() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___PhysAddrLen_5)); }
	inline int32_t get_PhysAddrLen_5() const { return ___PhysAddrLen_5; }
	inline int32_t* get_address_of_PhysAddrLen_5() { return &___PhysAddrLen_5; }
	inline void set_PhysAddrLen_5(int32_t value)
	{
		___PhysAddrLen_5 = value;
	}

	inline static int32_t get_offset_of_PhysAddr_6() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___PhysAddr_6)); }
	inline ByteU5BU5D_t4116647657* get_PhysAddr_6() const { return ___PhysAddr_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_PhysAddr_6() { return &___PhysAddr_6; }
	inline void set_PhysAddr_6(ByteU5BU5D_t4116647657* value)
	{
		___PhysAddr_6 = value;
		Il2CppCodeGenWriteBarrier((&___PhysAddr_6), value);
	}

	inline static int32_t get_offset_of_AdminStatus_7() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___AdminStatus_7)); }
	inline uint32_t get_AdminStatus_7() const { return ___AdminStatus_7; }
	inline uint32_t* get_address_of_AdminStatus_7() { return &___AdminStatus_7; }
	inline void set_AdminStatus_7(uint32_t value)
	{
		___AdminStatus_7 = value;
	}

	inline static int32_t get_offset_of_OperStatus_8() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OperStatus_8)); }
	inline uint32_t get_OperStatus_8() const { return ___OperStatus_8; }
	inline uint32_t* get_address_of_OperStatus_8() { return &___OperStatus_8; }
	inline void set_OperStatus_8(uint32_t value)
	{
		___OperStatus_8 = value;
	}

	inline static int32_t get_offset_of_LastChange_9() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___LastChange_9)); }
	inline uint32_t get_LastChange_9() const { return ___LastChange_9; }
	inline uint32_t* get_address_of_LastChange_9() { return &___LastChange_9; }
	inline void set_LastChange_9(uint32_t value)
	{
		___LastChange_9 = value;
	}

	inline static int32_t get_offset_of_InOctets_10() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InOctets_10)); }
	inline int32_t get_InOctets_10() const { return ___InOctets_10; }
	inline int32_t* get_address_of_InOctets_10() { return &___InOctets_10; }
	inline void set_InOctets_10(int32_t value)
	{
		___InOctets_10 = value;
	}

	inline static int32_t get_offset_of_InUcastPkts_11() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InUcastPkts_11)); }
	inline int32_t get_InUcastPkts_11() const { return ___InUcastPkts_11; }
	inline int32_t* get_address_of_InUcastPkts_11() { return &___InUcastPkts_11; }
	inline void set_InUcastPkts_11(int32_t value)
	{
		___InUcastPkts_11 = value;
	}

	inline static int32_t get_offset_of_InNUcastPkts_12() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InNUcastPkts_12)); }
	inline int32_t get_InNUcastPkts_12() const { return ___InNUcastPkts_12; }
	inline int32_t* get_address_of_InNUcastPkts_12() { return &___InNUcastPkts_12; }
	inline void set_InNUcastPkts_12(int32_t value)
	{
		___InNUcastPkts_12 = value;
	}

	inline static int32_t get_offset_of_InDiscards_13() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InDiscards_13)); }
	inline int32_t get_InDiscards_13() const { return ___InDiscards_13; }
	inline int32_t* get_address_of_InDiscards_13() { return &___InDiscards_13; }
	inline void set_InDiscards_13(int32_t value)
	{
		___InDiscards_13 = value;
	}

	inline static int32_t get_offset_of_InErrors_14() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InErrors_14)); }
	inline int32_t get_InErrors_14() const { return ___InErrors_14; }
	inline int32_t* get_address_of_InErrors_14() { return &___InErrors_14; }
	inline void set_InErrors_14(int32_t value)
	{
		___InErrors_14 = value;
	}

	inline static int32_t get_offset_of_InUnknownProtos_15() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InUnknownProtos_15)); }
	inline int32_t get_InUnknownProtos_15() const { return ___InUnknownProtos_15; }
	inline int32_t* get_address_of_InUnknownProtos_15() { return &___InUnknownProtos_15; }
	inline void set_InUnknownProtos_15(int32_t value)
	{
		___InUnknownProtos_15 = value;
	}

	inline static int32_t get_offset_of_OutOctets_16() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutOctets_16)); }
	inline int32_t get_OutOctets_16() const { return ___OutOctets_16; }
	inline int32_t* get_address_of_OutOctets_16() { return &___OutOctets_16; }
	inline void set_OutOctets_16(int32_t value)
	{
		___OutOctets_16 = value;
	}

	inline static int32_t get_offset_of_OutUcastPkts_17() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutUcastPkts_17)); }
	inline int32_t get_OutUcastPkts_17() const { return ___OutUcastPkts_17; }
	inline int32_t* get_address_of_OutUcastPkts_17() { return &___OutUcastPkts_17; }
	inline void set_OutUcastPkts_17(int32_t value)
	{
		___OutUcastPkts_17 = value;
	}

	inline static int32_t get_offset_of_OutNUcastPkts_18() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutNUcastPkts_18)); }
	inline int32_t get_OutNUcastPkts_18() const { return ___OutNUcastPkts_18; }
	inline int32_t* get_address_of_OutNUcastPkts_18() { return &___OutNUcastPkts_18; }
	inline void set_OutNUcastPkts_18(int32_t value)
	{
		___OutNUcastPkts_18 = value;
	}

	inline static int32_t get_offset_of_OutDiscards_19() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutDiscards_19)); }
	inline int32_t get_OutDiscards_19() const { return ___OutDiscards_19; }
	inline int32_t* get_address_of_OutDiscards_19() { return &___OutDiscards_19; }
	inline void set_OutDiscards_19(int32_t value)
	{
		___OutDiscards_19 = value;
	}

	inline static int32_t get_offset_of_OutErrors_20() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutErrors_20)); }
	inline int32_t get_OutErrors_20() const { return ___OutErrors_20; }
	inline int32_t* get_address_of_OutErrors_20() { return &___OutErrors_20; }
	inline void set_OutErrors_20(int32_t value)
	{
		___OutErrors_20 = value;
	}

	inline static int32_t get_offset_of_OutQLen_21() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutQLen_21)); }
	inline int32_t get_OutQLen_21() const { return ___OutQLen_21; }
	inline int32_t* get_address_of_OutQLen_21() { return &___OutQLen_21; }
	inline void set_OutQLen_21(int32_t value)
	{
		___OutQLen_21 = value;
	}

	inline static int32_t get_offset_of_DescrLen_22() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___DescrLen_22)); }
	inline int32_t get_DescrLen_22() const { return ___DescrLen_22; }
	inline int32_t* get_address_of_DescrLen_22() { return &___DescrLen_22; }
	inline void set_DescrLen_22(int32_t value)
	{
		___DescrLen_22 = value;
	}

	inline static int32_t get_offset_of_Descr_23() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Descr_23)); }
	inline ByteU5BU5D_t4116647657* get_Descr_23() const { return ___Descr_23; }
	inline ByteU5BU5D_t4116647657** get_address_of_Descr_23() { return &___Descr_23; }
	inline void set_Descr_23(ByteU5BU5D_t4116647657* value)
	{
		___Descr_23 = value;
		Il2CppCodeGenWriteBarrier((&___Descr_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_MIB_IFROW
struct Win32_MIB_IFROW_t851471770_marshaled_pinvoke
{
	uint8_t ___Name_0[512];
	int32_t ___Index_1;
	int32_t ___Type_2;
	int32_t ___Mtu_3;
	uint32_t ___Speed_4;
	int32_t ___PhysAddrLen_5;
	uint8_t ___PhysAddr_6[8];
	uint32_t ___AdminStatus_7;
	uint32_t ___OperStatus_8;
	uint32_t ___LastChange_9;
	int32_t ___InOctets_10;
	int32_t ___InUcastPkts_11;
	int32_t ___InNUcastPkts_12;
	int32_t ___InDiscards_13;
	int32_t ___InErrors_14;
	int32_t ___InUnknownProtos_15;
	int32_t ___OutOctets_16;
	int32_t ___OutUcastPkts_17;
	int32_t ___OutNUcastPkts_18;
	int32_t ___OutDiscards_19;
	int32_t ___OutErrors_20;
	int32_t ___OutQLen_21;
	int32_t ___DescrLen_22;
	uint8_t ___Descr_23[256];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_MIB_IFROW
struct Win32_MIB_IFROW_t851471770_marshaled_com
{
	uint8_t ___Name_0[512];
	int32_t ___Index_1;
	int32_t ___Type_2;
	int32_t ___Mtu_3;
	uint32_t ___Speed_4;
	int32_t ___PhysAddrLen_5;
	uint8_t ___PhysAddr_6[8];
	uint32_t ___AdminStatus_7;
	uint32_t ___OperStatus_8;
	uint32_t ___LastChange_9;
	int32_t ___InOctets_10;
	int32_t ___InUcastPkts_11;
	int32_t ___InNUcastPkts_12;
	int32_t ___InDiscards_13;
	int32_t ___InErrors_14;
	int32_t ___InUnknownProtos_15;
	int32_t ___OutOctets_16;
	int32_t ___OutUcastPkts_17;
	int32_t ___OutNUcastPkts_18;
	int32_t ___OutDiscards_19;
	int32_t ___OutErrors_20;
	int32_t ___OutQLen_21;
	int32_t ___DescrLen_22;
	uint8_t ___Descr_23[256];
};
#endif // WIN32_MIB_IFROW_T851471770_H
#ifndef IFADDRS_T271199369_H
#define IFADDRS_T271199369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.ifaddrs
struct  ifaddrs_t271199369 
{
public:
	// System.IntPtr System.Net.NetworkInformation.ifaddrs::ifa_next
	intptr_t ___ifa_next_0;
	// System.String System.Net.NetworkInformation.ifaddrs::ifa_name
	String_t* ___ifa_name_1;
	// System.UInt32 System.Net.NetworkInformation.ifaddrs::ifa_flags
	uint32_t ___ifa_flags_2;
	// System.IntPtr System.Net.NetworkInformation.ifaddrs::ifa_addr
	intptr_t ___ifa_addr_3;
	// System.IntPtr System.Net.NetworkInformation.ifaddrs::ifa_netmask
	intptr_t ___ifa_netmask_4;
	// System.Net.NetworkInformation.ifa_ifu System.Net.NetworkInformation.ifaddrs::ifa_ifu
	ifa_ifu_t1794893192  ___ifa_ifu_5;
	// System.IntPtr System.Net.NetworkInformation.ifaddrs::ifa_data
	intptr_t ___ifa_data_6;

public:
	inline static int32_t get_offset_of_ifa_next_0() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_next_0)); }
	inline intptr_t get_ifa_next_0() const { return ___ifa_next_0; }
	inline intptr_t* get_address_of_ifa_next_0() { return &___ifa_next_0; }
	inline void set_ifa_next_0(intptr_t value)
	{
		___ifa_next_0 = value;
	}

	inline static int32_t get_offset_of_ifa_name_1() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_name_1)); }
	inline String_t* get_ifa_name_1() const { return ___ifa_name_1; }
	inline String_t** get_address_of_ifa_name_1() { return &___ifa_name_1; }
	inline void set_ifa_name_1(String_t* value)
	{
		___ifa_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___ifa_name_1), value);
	}

	inline static int32_t get_offset_of_ifa_flags_2() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_flags_2)); }
	inline uint32_t get_ifa_flags_2() const { return ___ifa_flags_2; }
	inline uint32_t* get_address_of_ifa_flags_2() { return &___ifa_flags_2; }
	inline void set_ifa_flags_2(uint32_t value)
	{
		___ifa_flags_2 = value;
	}

	inline static int32_t get_offset_of_ifa_addr_3() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_addr_3)); }
	inline intptr_t get_ifa_addr_3() const { return ___ifa_addr_3; }
	inline intptr_t* get_address_of_ifa_addr_3() { return &___ifa_addr_3; }
	inline void set_ifa_addr_3(intptr_t value)
	{
		___ifa_addr_3 = value;
	}

	inline static int32_t get_offset_of_ifa_netmask_4() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_netmask_4)); }
	inline intptr_t get_ifa_netmask_4() const { return ___ifa_netmask_4; }
	inline intptr_t* get_address_of_ifa_netmask_4() { return &___ifa_netmask_4; }
	inline void set_ifa_netmask_4(intptr_t value)
	{
		___ifa_netmask_4 = value;
	}

	inline static int32_t get_offset_of_ifa_ifu_5() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_ifu_5)); }
	inline ifa_ifu_t1794893192  get_ifa_ifu_5() const { return ___ifa_ifu_5; }
	inline ifa_ifu_t1794893192 * get_address_of_ifa_ifu_5() { return &___ifa_ifu_5; }
	inline void set_ifa_ifu_5(ifa_ifu_t1794893192  value)
	{
		___ifa_ifu_5 = value;
	}

	inline static int32_t get_offset_of_ifa_data_6() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_data_6)); }
	inline intptr_t get_ifa_data_6() const { return ___ifa_data_6; }
	inline intptr_t* get_address_of_ifa_data_6() { return &___ifa_data_6; }
	inline void set_ifa_data_6(intptr_t value)
	{
		___ifa_data_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.ifaddrs
struct ifaddrs_t271199369_marshaled_pinvoke
{
	intptr_t ___ifa_next_0;
	char* ___ifa_name_1;
	uint32_t ___ifa_flags_2;
	intptr_t ___ifa_addr_3;
	intptr_t ___ifa_netmask_4;
	ifa_ifu_t1794893192  ___ifa_ifu_5;
	intptr_t ___ifa_data_6;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.ifaddrs
struct ifaddrs_t271199369_marshaled_com
{
	intptr_t ___ifa_next_0;
	Il2CppChar* ___ifa_name_1;
	uint32_t ___ifa_flags_2;
	intptr_t ___ifa_addr_3;
	intptr_t ___ifa_netmask_4;
	ifa_ifu_t1794893192  ___ifa_ifu_5;
	intptr_t ___ifa_data_6;
};
#endif // IFADDRS_T271199369_H
#ifndef SOCKADDR_IN6_T2790242023_H
#define SOCKADDR_IN6_T2790242023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.sockaddr_in6
struct  sockaddr_in6_t2790242023 
{
public:
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in6::sin6_family
	uint16_t ___sin6_family_0;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in6::sin6_port
	uint16_t ___sin6_port_1;
	// System.UInt32 System.Net.NetworkInformation.sockaddr_in6::sin6_flowinfo
	uint32_t ___sin6_flowinfo_2;
	// System.Net.NetworkInformation.in6_addr System.Net.NetworkInformation.sockaddr_in6::sin6_addr
	in6_addr_t3611791508  ___sin6_addr_3;
	// System.UInt32 System.Net.NetworkInformation.sockaddr_in6::sin6_scope_id
	uint32_t ___sin6_scope_id_4;

public:
	inline static int32_t get_offset_of_sin6_family_0() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2790242023, ___sin6_family_0)); }
	inline uint16_t get_sin6_family_0() const { return ___sin6_family_0; }
	inline uint16_t* get_address_of_sin6_family_0() { return &___sin6_family_0; }
	inline void set_sin6_family_0(uint16_t value)
	{
		___sin6_family_0 = value;
	}

	inline static int32_t get_offset_of_sin6_port_1() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2790242023, ___sin6_port_1)); }
	inline uint16_t get_sin6_port_1() const { return ___sin6_port_1; }
	inline uint16_t* get_address_of_sin6_port_1() { return &___sin6_port_1; }
	inline void set_sin6_port_1(uint16_t value)
	{
		___sin6_port_1 = value;
	}

	inline static int32_t get_offset_of_sin6_flowinfo_2() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2790242023, ___sin6_flowinfo_2)); }
	inline uint32_t get_sin6_flowinfo_2() const { return ___sin6_flowinfo_2; }
	inline uint32_t* get_address_of_sin6_flowinfo_2() { return &___sin6_flowinfo_2; }
	inline void set_sin6_flowinfo_2(uint32_t value)
	{
		___sin6_flowinfo_2 = value;
	}

	inline static int32_t get_offset_of_sin6_addr_3() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2790242023, ___sin6_addr_3)); }
	inline in6_addr_t3611791508  get_sin6_addr_3() const { return ___sin6_addr_3; }
	inline in6_addr_t3611791508 * get_address_of_sin6_addr_3() { return &___sin6_addr_3; }
	inline void set_sin6_addr_3(in6_addr_t3611791508  value)
	{
		___sin6_addr_3 = value;
	}

	inline static int32_t get_offset_of_sin6_scope_id_4() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2790242023, ___sin6_scope_id_4)); }
	inline uint32_t get_sin6_scope_id_4() const { return ___sin6_scope_id_4; }
	inline uint32_t* get_address_of_sin6_scope_id_4() { return &___sin6_scope_id_4; }
	inline void set_sin6_scope_id_4(uint32_t value)
	{
		___sin6_scope_id_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.sockaddr_in6
struct sockaddr_in6_t2790242023_marshaled_pinvoke
{
	uint16_t ___sin6_family_0;
	uint16_t ___sin6_port_1;
	uint32_t ___sin6_flowinfo_2;
	in6_addr_t3611791508_marshaled_pinvoke ___sin6_addr_3;
	uint32_t ___sin6_scope_id_4;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.sockaddr_in6
struct sockaddr_in6_t2790242023_marshaled_com
{
	uint16_t ___sin6_family_0;
	uint16_t ___sin6_port_1;
	uint32_t ___sin6_flowinfo_2;
	in6_addr_t3611791508_marshaled_com ___sin6_addr_3;
	uint32_t ___sin6_scope_id_4;
};
#endif // SOCKADDR_IN6_T2790242023_H
#ifndef SSLSTREAM_T2700741536_H
#define SSLSTREAM_T2700741536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslStream
struct  SslStream_t2700741536  : public AuthenticatedStream_t3415418016
{
public:
	// Mono.Security.Interface.MonoTlsProvider System.Net.Security.SslStream::provider
	MonoTlsProvider_t3152003291 * ___provider_6;
	// Mono.Security.Interface.IMonoSslStream System.Net.Security.SslStream::impl
	RuntimeObject* ___impl_7;

public:
	inline static int32_t get_offset_of_provider_6() { return static_cast<int32_t>(offsetof(SslStream_t2700741536, ___provider_6)); }
	inline MonoTlsProvider_t3152003291 * get_provider_6() const { return ___provider_6; }
	inline MonoTlsProvider_t3152003291 ** get_address_of_provider_6() { return &___provider_6; }
	inline void set_provider_6(MonoTlsProvider_t3152003291 * value)
	{
		___provider_6 = value;
		Il2CppCodeGenWriteBarrier((&___provider_6), value);
	}

	inline static int32_t get_offset_of_impl_7() { return static_cast<int32_t>(offsetof(SslStream_t2700741536, ___impl_7)); }
	inline RuntimeObject* get_impl_7() const { return ___impl_7; }
	inline RuntimeObject** get_address_of_impl_7() { return &___impl_7; }
	inline void set_impl_7(RuntimeObject* value)
	{
		___impl_7 = value;
		Il2CppCodeGenWriteBarrier((&___impl_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSLSTREAM_T2700741536_H
#ifndef SOCKET_T1119025450_H
#define SOCKET_T1119025450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket
struct  Socket_t1119025450  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_6;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_7;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_8;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_9;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_10;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_11;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_12;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t610293888 * ___m_Handle_13;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t982345378 * ___seed_endpoint_14;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t2974092902 * ___ReadSem_15;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t2974092902 * ___WriteSem_16;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_17;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_18;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_19;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_20;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_21;

public:
	inline static int32_t get_offset_of_is_closed_6() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_closed_6)); }
	inline bool get_is_closed_6() const { return ___is_closed_6; }
	inline bool* get_address_of_is_closed_6() { return &___is_closed_6; }
	inline void set_is_closed_6(bool value)
	{
		___is_closed_6 = value;
	}

	inline static int32_t get_offset_of_is_listening_7() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_listening_7)); }
	inline bool get_is_listening_7() const { return ___is_listening_7; }
	inline bool* get_address_of_is_listening_7() { return &___is_listening_7; }
	inline void set_is_listening_7(bool value)
	{
		___is_listening_7 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_8() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___useOverlappedIO_8)); }
	inline bool get_useOverlappedIO_8() const { return ___useOverlappedIO_8; }
	inline bool* get_address_of_useOverlappedIO_8() { return &___useOverlappedIO_8; }
	inline void set_useOverlappedIO_8(bool value)
	{
		___useOverlappedIO_8 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_9() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___linger_timeout_9)); }
	inline int32_t get_linger_timeout_9() const { return ___linger_timeout_9; }
	inline int32_t* get_address_of_linger_timeout_9() { return &___linger_timeout_9; }
	inline void set_linger_timeout_9(int32_t value)
	{
		___linger_timeout_9 = value;
	}

	inline static int32_t get_offset_of_addressFamily_10() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___addressFamily_10)); }
	inline int32_t get_addressFamily_10() const { return ___addressFamily_10; }
	inline int32_t* get_address_of_addressFamily_10() { return &___addressFamily_10; }
	inline void set_addressFamily_10(int32_t value)
	{
		___addressFamily_10 = value;
	}

	inline static int32_t get_offset_of_socketType_11() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___socketType_11)); }
	inline int32_t get_socketType_11() const { return ___socketType_11; }
	inline int32_t* get_address_of_socketType_11() { return &___socketType_11; }
	inline void set_socketType_11(int32_t value)
	{
		___socketType_11 = value;
	}

	inline static int32_t get_offset_of_protocolType_12() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___protocolType_12)); }
	inline int32_t get_protocolType_12() const { return ___protocolType_12; }
	inline int32_t* get_address_of_protocolType_12() { return &___protocolType_12; }
	inline void set_protocolType_12(int32_t value)
	{
		___protocolType_12 = value;
	}

	inline static int32_t get_offset_of_m_Handle_13() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___m_Handle_13)); }
	inline SafeSocketHandle_t610293888 * get_m_Handle_13() const { return ___m_Handle_13; }
	inline SafeSocketHandle_t610293888 ** get_address_of_m_Handle_13() { return &___m_Handle_13; }
	inline void set_m_Handle_13(SafeSocketHandle_t610293888 * value)
	{
		___m_Handle_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_Handle_13), value);
	}

	inline static int32_t get_offset_of_seed_endpoint_14() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___seed_endpoint_14)); }
	inline EndPoint_t982345378 * get_seed_endpoint_14() const { return ___seed_endpoint_14; }
	inline EndPoint_t982345378 ** get_address_of_seed_endpoint_14() { return &___seed_endpoint_14; }
	inline void set_seed_endpoint_14(EndPoint_t982345378 * value)
	{
		___seed_endpoint_14 = value;
		Il2CppCodeGenWriteBarrier((&___seed_endpoint_14), value);
	}

	inline static int32_t get_offset_of_ReadSem_15() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___ReadSem_15)); }
	inline SemaphoreSlim_t2974092902 * get_ReadSem_15() const { return ___ReadSem_15; }
	inline SemaphoreSlim_t2974092902 ** get_address_of_ReadSem_15() { return &___ReadSem_15; }
	inline void set_ReadSem_15(SemaphoreSlim_t2974092902 * value)
	{
		___ReadSem_15 = value;
		Il2CppCodeGenWriteBarrier((&___ReadSem_15), value);
	}

	inline static int32_t get_offset_of_WriteSem_16() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___WriteSem_16)); }
	inline SemaphoreSlim_t2974092902 * get_WriteSem_16() const { return ___WriteSem_16; }
	inline SemaphoreSlim_t2974092902 ** get_address_of_WriteSem_16() { return &___WriteSem_16; }
	inline void set_WriteSem_16(SemaphoreSlim_t2974092902 * value)
	{
		___WriteSem_16 = value;
		Il2CppCodeGenWriteBarrier((&___WriteSem_16), value);
	}

	inline static int32_t get_offset_of_is_blocking_17() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_blocking_17)); }
	inline bool get_is_blocking_17() const { return ___is_blocking_17; }
	inline bool* get_address_of_is_blocking_17() { return &___is_blocking_17; }
	inline void set_is_blocking_17(bool value)
	{
		___is_blocking_17 = value;
	}

	inline static int32_t get_offset_of_is_bound_18() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_bound_18)); }
	inline bool get_is_bound_18() const { return ___is_bound_18; }
	inline bool* get_address_of_is_bound_18() { return &___is_bound_18; }
	inline void set_is_bound_18(bool value)
	{
		___is_bound_18 = value;
	}

	inline static int32_t get_offset_of_is_connected_19() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_connected_19)); }
	inline bool get_is_connected_19() const { return ___is_connected_19; }
	inline bool* get_address_of_is_connected_19() { return &___is_connected_19; }
	inline void set_is_connected_19(bool value)
	{
		___is_connected_19 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_20() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___m_IntCleanedUp_20)); }
	inline int32_t get_m_IntCleanedUp_20() const { return ___m_IntCleanedUp_20; }
	inline int32_t* get_address_of_m_IntCleanedUp_20() { return &___m_IntCleanedUp_20; }
	inline void set_m_IntCleanedUp_20(int32_t value)
	{
		___m_IntCleanedUp_20 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_21() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___connect_in_progress_21)); }
	inline bool get_connect_in_progress_21() const { return ___connect_in_progress_21; }
	inline bool* get_address_of_connect_in_progress_21() { return &___connect_in_progress_21; }
	inline void set_connect_in_progress_21(bool value)
	{
		___connect_in_progress_21 = value;
	}
};

struct Socket_t1119025450_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t3962456242 * ___AcceptAsyncCallback_22;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_t705871752 * ___BeginAcceptCallback_23;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_t705871752 * ___BeginAcceptReceiveCallback_24;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t3962456242 * ___ConnectAsyncCallback_25;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_t705871752 * ___BeginConnectCallback_26;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t3962456242 * ___DisconnectAsyncCallback_27;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_t705871752 * ___BeginDisconnectCallback_28;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t3962456242 * ___ReceiveAsyncCallback_29;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_t705871752 * ___BeginReceiveCallback_30;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_t705871752 * ___BeginReceiveGenericCallback_31;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t3962456242 * ___ReceiveFromAsyncCallback_32;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_t705871752 * ___BeginReceiveFromCallback_33;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t3962456242 * ___SendAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_t705871752 * ___BeginSendGenericCallback_35;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t3962456242 * ___SendToAsyncCallback_36;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_0), value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_22() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___AcceptAsyncCallback_22)); }
	inline AsyncCallback_t3962456242 * get_AcceptAsyncCallback_22() const { return ___AcceptAsyncCallback_22; }
	inline AsyncCallback_t3962456242 ** get_address_of_AcceptAsyncCallback_22() { return &___AcceptAsyncCallback_22; }
	inline void set_AcceptAsyncCallback_22(AsyncCallback_t3962456242 * value)
	{
		___AcceptAsyncCallback_22 = value;
		Il2CppCodeGenWriteBarrier((&___AcceptAsyncCallback_22), value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_23() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginAcceptCallback_23)); }
	inline IOAsyncCallback_t705871752 * get_BeginAcceptCallback_23() const { return ___BeginAcceptCallback_23; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginAcceptCallback_23() { return &___BeginAcceptCallback_23; }
	inline void set_BeginAcceptCallback_23(IOAsyncCallback_t705871752 * value)
	{
		___BeginAcceptCallback_23 = value;
		Il2CppCodeGenWriteBarrier((&___BeginAcceptCallback_23), value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_24() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginAcceptReceiveCallback_24)); }
	inline IOAsyncCallback_t705871752 * get_BeginAcceptReceiveCallback_24() const { return ___BeginAcceptReceiveCallback_24; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginAcceptReceiveCallback_24() { return &___BeginAcceptReceiveCallback_24; }
	inline void set_BeginAcceptReceiveCallback_24(IOAsyncCallback_t705871752 * value)
	{
		___BeginAcceptReceiveCallback_24 = value;
		Il2CppCodeGenWriteBarrier((&___BeginAcceptReceiveCallback_24), value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_25() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___ConnectAsyncCallback_25)); }
	inline AsyncCallback_t3962456242 * get_ConnectAsyncCallback_25() const { return ___ConnectAsyncCallback_25; }
	inline AsyncCallback_t3962456242 ** get_address_of_ConnectAsyncCallback_25() { return &___ConnectAsyncCallback_25; }
	inline void set_ConnectAsyncCallback_25(AsyncCallback_t3962456242 * value)
	{
		___ConnectAsyncCallback_25 = value;
		Il2CppCodeGenWriteBarrier((&___ConnectAsyncCallback_25), value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_26() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginConnectCallback_26)); }
	inline IOAsyncCallback_t705871752 * get_BeginConnectCallback_26() const { return ___BeginConnectCallback_26; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginConnectCallback_26() { return &___BeginConnectCallback_26; }
	inline void set_BeginConnectCallback_26(IOAsyncCallback_t705871752 * value)
	{
		___BeginConnectCallback_26 = value;
		Il2CppCodeGenWriteBarrier((&___BeginConnectCallback_26), value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_27() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___DisconnectAsyncCallback_27)); }
	inline AsyncCallback_t3962456242 * get_DisconnectAsyncCallback_27() const { return ___DisconnectAsyncCallback_27; }
	inline AsyncCallback_t3962456242 ** get_address_of_DisconnectAsyncCallback_27() { return &___DisconnectAsyncCallback_27; }
	inline void set_DisconnectAsyncCallback_27(AsyncCallback_t3962456242 * value)
	{
		___DisconnectAsyncCallback_27 = value;
		Il2CppCodeGenWriteBarrier((&___DisconnectAsyncCallback_27), value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_28() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginDisconnectCallback_28)); }
	inline IOAsyncCallback_t705871752 * get_BeginDisconnectCallback_28() const { return ___BeginDisconnectCallback_28; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginDisconnectCallback_28() { return &___BeginDisconnectCallback_28; }
	inline void set_BeginDisconnectCallback_28(IOAsyncCallback_t705871752 * value)
	{
		___BeginDisconnectCallback_28 = value;
		Il2CppCodeGenWriteBarrier((&___BeginDisconnectCallback_28), value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_29() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___ReceiveAsyncCallback_29)); }
	inline AsyncCallback_t3962456242 * get_ReceiveAsyncCallback_29() const { return ___ReceiveAsyncCallback_29; }
	inline AsyncCallback_t3962456242 ** get_address_of_ReceiveAsyncCallback_29() { return &___ReceiveAsyncCallback_29; }
	inline void set_ReceiveAsyncCallback_29(AsyncCallback_t3962456242 * value)
	{
		___ReceiveAsyncCallback_29 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiveAsyncCallback_29), value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_30() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginReceiveCallback_30)); }
	inline IOAsyncCallback_t705871752 * get_BeginReceiveCallback_30() const { return ___BeginReceiveCallback_30; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginReceiveCallback_30() { return &___BeginReceiveCallback_30; }
	inline void set_BeginReceiveCallback_30(IOAsyncCallback_t705871752 * value)
	{
		___BeginReceiveCallback_30 = value;
		Il2CppCodeGenWriteBarrier((&___BeginReceiveCallback_30), value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_31() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginReceiveGenericCallback_31)); }
	inline IOAsyncCallback_t705871752 * get_BeginReceiveGenericCallback_31() const { return ___BeginReceiveGenericCallback_31; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginReceiveGenericCallback_31() { return &___BeginReceiveGenericCallback_31; }
	inline void set_BeginReceiveGenericCallback_31(IOAsyncCallback_t705871752 * value)
	{
		___BeginReceiveGenericCallback_31 = value;
		Il2CppCodeGenWriteBarrier((&___BeginReceiveGenericCallback_31), value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_32() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___ReceiveFromAsyncCallback_32)); }
	inline AsyncCallback_t3962456242 * get_ReceiveFromAsyncCallback_32() const { return ___ReceiveFromAsyncCallback_32; }
	inline AsyncCallback_t3962456242 ** get_address_of_ReceiveFromAsyncCallback_32() { return &___ReceiveFromAsyncCallback_32; }
	inline void set_ReceiveFromAsyncCallback_32(AsyncCallback_t3962456242 * value)
	{
		___ReceiveFromAsyncCallback_32 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiveFromAsyncCallback_32), value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_33() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginReceiveFromCallback_33)); }
	inline IOAsyncCallback_t705871752 * get_BeginReceiveFromCallback_33() const { return ___BeginReceiveFromCallback_33; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginReceiveFromCallback_33() { return &___BeginReceiveFromCallback_33; }
	inline void set_BeginReceiveFromCallback_33(IOAsyncCallback_t705871752 * value)
	{
		___BeginReceiveFromCallback_33 = value;
		Il2CppCodeGenWriteBarrier((&___BeginReceiveFromCallback_33), value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_34() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___SendAsyncCallback_34)); }
	inline AsyncCallback_t3962456242 * get_SendAsyncCallback_34() const { return ___SendAsyncCallback_34; }
	inline AsyncCallback_t3962456242 ** get_address_of_SendAsyncCallback_34() { return &___SendAsyncCallback_34; }
	inline void set_SendAsyncCallback_34(AsyncCallback_t3962456242 * value)
	{
		___SendAsyncCallback_34 = value;
		Il2CppCodeGenWriteBarrier((&___SendAsyncCallback_34), value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_35() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginSendGenericCallback_35)); }
	inline IOAsyncCallback_t705871752 * get_BeginSendGenericCallback_35() const { return ___BeginSendGenericCallback_35; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginSendGenericCallback_35() { return &___BeginSendGenericCallback_35; }
	inline void set_BeginSendGenericCallback_35(IOAsyncCallback_t705871752 * value)
	{
		___BeginSendGenericCallback_35 = value;
		Il2CppCodeGenWriteBarrier((&___BeginSendGenericCallback_35), value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_36() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___SendToAsyncCallback_36)); }
	inline AsyncCallback_t3962456242 * get_SendToAsyncCallback_36() const { return ___SendToAsyncCallback_36; }
	inline AsyncCallback_t3962456242 ** get_address_of_SendToAsyncCallback_36() { return &___SendToAsyncCallback_36; }
	inline void set_SendToAsyncCallback_36(AsyncCallback_t3962456242 * value)
	{
		___SendToAsyncCallback_36 = value;
		Il2CppCodeGenWriteBarrier((&___SendToAsyncCallback_36), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKET_T1119025450_H
#ifndef SOCKETASYNCEVENTARGS_T4146203020_H
#define SOCKETASYNCEVENTARGS_T4146203020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketAsyncEventArgs
struct  SocketAsyncEventArgs_t4146203020  : public EventArgs_t3591816995
{
public:
	// System.Boolean System.Net.Sockets.SocketAsyncEventArgs::disposed
	bool ___disposed_1;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.SocketAsyncEventArgs::in_progress
	int32_t ___in_progress_2;
	// System.Net.EndPoint System.Net.Sockets.SocketAsyncEventArgs::remote_ep
	EndPoint_t982345378 * ___remote_ep_3;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::current_socket
	Socket_t1119025450 * ___current_socket_4;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::<AcceptSocket>k__BackingField
	Socket_t1119025450 * ___U3CAcceptSocketU3Ek__BackingField_5;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<BytesTransferred>k__BackingField
	int32_t ___U3CBytesTransferredU3Ek__BackingField_6;
	// System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncEventArgs::<SocketError>k__BackingField
	int32_t ___U3CSocketErrorU3Ek__BackingField_7;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.SocketAsyncEventArgs::Completed
	EventHandler_1_t2070362453 * ___Completed_8;

public:
	inline static int32_t get_offset_of_disposed_1() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t4146203020, ___disposed_1)); }
	inline bool get_disposed_1() const { return ___disposed_1; }
	inline bool* get_address_of_disposed_1() { return &___disposed_1; }
	inline void set_disposed_1(bool value)
	{
		___disposed_1 = value;
	}

	inline static int32_t get_offset_of_in_progress_2() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t4146203020, ___in_progress_2)); }
	inline int32_t get_in_progress_2() const { return ___in_progress_2; }
	inline int32_t* get_address_of_in_progress_2() { return &___in_progress_2; }
	inline void set_in_progress_2(int32_t value)
	{
		___in_progress_2 = value;
	}

	inline static int32_t get_offset_of_remote_ep_3() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t4146203020, ___remote_ep_3)); }
	inline EndPoint_t982345378 * get_remote_ep_3() const { return ___remote_ep_3; }
	inline EndPoint_t982345378 ** get_address_of_remote_ep_3() { return &___remote_ep_3; }
	inline void set_remote_ep_3(EndPoint_t982345378 * value)
	{
		___remote_ep_3 = value;
		Il2CppCodeGenWriteBarrier((&___remote_ep_3), value);
	}

	inline static int32_t get_offset_of_current_socket_4() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t4146203020, ___current_socket_4)); }
	inline Socket_t1119025450 * get_current_socket_4() const { return ___current_socket_4; }
	inline Socket_t1119025450 ** get_address_of_current_socket_4() { return &___current_socket_4; }
	inline void set_current_socket_4(Socket_t1119025450 * value)
	{
		___current_socket_4 = value;
		Il2CppCodeGenWriteBarrier((&___current_socket_4), value);
	}

	inline static int32_t get_offset_of_U3CAcceptSocketU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t4146203020, ___U3CAcceptSocketU3Ek__BackingField_5)); }
	inline Socket_t1119025450 * get_U3CAcceptSocketU3Ek__BackingField_5() const { return ___U3CAcceptSocketU3Ek__BackingField_5; }
	inline Socket_t1119025450 ** get_address_of_U3CAcceptSocketU3Ek__BackingField_5() { return &___U3CAcceptSocketU3Ek__BackingField_5; }
	inline void set_U3CAcceptSocketU3Ek__BackingField_5(Socket_t1119025450 * value)
	{
		___U3CAcceptSocketU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAcceptSocketU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CBytesTransferredU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t4146203020, ___U3CBytesTransferredU3Ek__BackingField_6)); }
	inline int32_t get_U3CBytesTransferredU3Ek__BackingField_6() const { return ___U3CBytesTransferredU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CBytesTransferredU3Ek__BackingField_6() { return &___U3CBytesTransferredU3Ek__BackingField_6; }
	inline void set_U3CBytesTransferredU3Ek__BackingField_6(int32_t value)
	{
		___U3CBytesTransferredU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CSocketErrorU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t4146203020, ___U3CSocketErrorU3Ek__BackingField_7)); }
	inline int32_t get_U3CSocketErrorU3Ek__BackingField_7() const { return ___U3CSocketErrorU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CSocketErrorU3Ek__BackingField_7() { return &___U3CSocketErrorU3Ek__BackingField_7; }
	inline void set_U3CSocketErrorU3Ek__BackingField_7(int32_t value)
	{
		___U3CSocketErrorU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_Completed_8() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t4146203020, ___Completed_8)); }
	inline EventHandler_1_t2070362453 * get_Completed_8() const { return ___Completed_8; }
	inline EventHandler_1_t2070362453 ** get_address_of_Completed_8() { return &___Completed_8; }
	inline void set_Completed_8(EventHandler_1_t2070362453 * value)
	{
		___Completed_8 = value;
		Il2CppCodeGenWriteBarrier((&___Completed_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETASYNCEVENTARGS_T4146203020_H
#ifndef SOCKETASYNCRESULT_T3523156467_H
#define SOCKETASYNCRESULT_T3523156467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketAsyncResult
struct  SocketAsyncResult_t3523156467  : public IOAsyncResult_t3640145766
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncResult::socket
	Socket_t1119025450 * ___socket_5;
	// System.Net.Sockets.SocketOperation System.Net.Sockets.SocketAsyncResult::operation
	int32_t ___operation_6;
	// System.Exception System.Net.Sockets.SocketAsyncResult::DelayedException
	Exception_t * ___DelayedException_7;
	// System.Net.EndPoint System.Net.Sockets.SocketAsyncResult::EndPoint
	EndPoint_t982345378 * ___EndPoint_8;
	// System.Byte[] System.Net.Sockets.SocketAsyncResult::Buffer
	ByteU5BU5D_t4116647657* ___Buffer_9;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::Offset
	int32_t ___Offset_10;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::Size
	int32_t ___Size_11;
	// System.Net.Sockets.SocketFlags System.Net.Sockets.SocketAsyncResult::SockFlags
	int32_t ___SockFlags_12;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncResult::AcceptSocket
	Socket_t1119025450 * ___AcceptSocket_13;
	// System.Net.IPAddress[] System.Net.Sockets.SocketAsyncResult::Addresses
	IPAddressU5BU5D_t596328627* ___Addresses_14;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::Port
	int32_t ___Port_15;
	// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.SocketAsyncResult::Buffers
	RuntimeObject* ___Buffers_16;
	// System.Boolean System.Net.Sockets.SocketAsyncResult::ReuseSocket
	bool ___ReuseSocket_17;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::CurrentAddress
	int32_t ___CurrentAddress_18;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncResult::AcceptedSocket
	Socket_t1119025450 * ___AcceptedSocket_19;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::Total
	int32_t ___Total_20;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::error
	int32_t ___error_21;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::EndCalled
	int32_t ___EndCalled_22;

public:
	inline static int32_t get_offset_of_socket_5() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___socket_5)); }
	inline Socket_t1119025450 * get_socket_5() const { return ___socket_5; }
	inline Socket_t1119025450 ** get_address_of_socket_5() { return &___socket_5; }
	inline void set_socket_5(Socket_t1119025450 * value)
	{
		___socket_5 = value;
		Il2CppCodeGenWriteBarrier((&___socket_5), value);
	}

	inline static int32_t get_offset_of_operation_6() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___operation_6)); }
	inline int32_t get_operation_6() const { return ___operation_6; }
	inline int32_t* get_address_of_operation_6() { return &___operation_6; }
	inline void set_operation_6(int32_t value)
	{
		___operation_6 = value;
	}

	inline static int32_t get_offset_of_DelayedException_7() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___DelayedException_7)); }
	inline Exception_t * get_DelayedException_7() const { return ___DelayedException_7; }
	inline Exception_t ** get_address_of_DelayedException_7() { return &___DelayedException_7; }
	inline void set_DelayedException_7(Exception_t * value)
	{
		___DelayedException_7 = value;
		Il2CppCodeGenWriteBarrier((&___DelayedException_7), value);
	}

	inline static int32_t get_offset_of_EndPoint_8() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___EndPoint_8)); }
	inline EndPoint_t982345378 * get_EndPoint_8() const { return ___EndPoint_8; }
	inline EndPoint_t982345378 ** get_address_of_EndPoint_8() { return &___EndPoint_8; }
	inline void set_EndPoint_8(EndPoint_t982345378 * value)
	{
		___EndPoint_8 = value;
		Il2CppCodeGenWriteBarrier((&___EndPoint_8), value);
	}

	inline static int32_t get_offset_of_Buffer_9() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___Buffer_9)); }
	inline ByteU5BU5D_t4116647657* get_Buffer_9() const { return ___Buffer_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_Buffer_9() { return &___Buffer_9; }
	inline void set_Buffer_9(ByteU5BU5D_t4116647657* value)
	{
		___Buffer_9 = value;
		Il2CppCodeGenWriteBarrier((&___Buffer_9), value);
	}

	inline static int32_t get_offset_of_Offset_10() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___Offset_10)); }
	inline int32_t get_Offset_10() const { return ___Offset_10; }
	inline int32_t* get_address_of_Offset_10() { return &___Offset_10; }
	inline void set_Offset_10(int32_t value)
	{
		___Offset_10 = value;
	}

	inline static int32_t get_offset_of_Size_11() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___Size_11)); }
	inline int32_t get_Size_11() const { return ___Size_11; }
	inline int32_t* get_address_of_Size_11() { return &___Size_11; }
	inline void set_Size_11(int32_t value)
	{
		___Size_11 = value;
	}

	inline static int32_t get_offset_of_SockFlags_12() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___SockFlags_12)); }
	inline int32_t get_SockFlags_12() const { return ___SockFlags_12; }
	inline int32_t* get_address_of_SockFlags_12() { return &___SockFlags_12; }
	inline void set_SockFlags_12(int32_t value)
	{
		___SockFlags_12 = value;
	}

	inline static int32_t get_offset_of_AcceptSocket_13() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___AcceptSocket_13)); }
	inline Socket_t1119025450 * get_AcceptSocket_13() const { return ___AcceptSocket_13; }
	inline Socket_t1119025450 ** get_address_of_AcceptSocket_13() { return &___AcceptSocket_13; }
	inline void set_AcceptSocket_13(Socket_t1119025450 * value)
	{
		___AcceptSocket_13 = value;
		Il2CppCodeGenWriteBarrier((&___AcceptSocket_13), value);
	}

	inline static int32_t get_offset_of_Addresses_14() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___Addresses_14)); }
	inline IPAddressU5BU5D_t596328627* get_Addresses_14() const { return ___Addresses_14; }
	inline IPAddressU5BU5D_t596328627** get_address_of_Addresses_14() { return &___Addresses_14; }
	inline void set_Addresses_14(IPAddressU5BU5D_t596328627* value)
	{
		___Addresses_14 = value;
		Il2CppCodeGenWriteBarrier((&___Addresses_14), value);
	}

	inline static int32_t get_offset_of_Port_15() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___Port_15)); }
	inline int32_t get_Port_15() const { return ___Port_15; }
	inline int32_t* get_address_of_Port_15() { return &___Port_15; }
	inline void set_Port_15(int32_t value)
	{
		___Port_15 = value;
	}

	inline static int32_t get_offset_of_Buffers_16() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___Buffers_16)); }
	inline RuntimeObject* get_Buffers_16() const { return ___Buffers_16; }
	inline RuntimeObject** get_address_of_Buffers_16() { return &___Buffers_16; }
	inline void set_Buffers_16(RuntimeObject* value)
	{
		___Buffers_16 = value;
		Il2CppCodeGenWriteBarrier((&___Buffers_16), value);
	}

	inline static int32_t get_offset_of_ReuseSocket_17() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___ReuseSocket_17)); }
	inline bool get_ReuseSocket_17() const { return ___ReuseSocket_17; }
	inline bool* get_address_of_ReuseSocket_17() { return &___ReuseSocket_17; }
	inline void set_ReuseSocket_17(bool value)
	{
		___ReuseSocket_17 = value;
	}

	inline static int32_t get_offset_of_CurrentAddress_18() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___CurrentAddress_18)); }
	inline int32_t get_CurrentAddress_18() const { return ___CurrentAddress_18; }
	inline int32_t* get_address_of_CurrentAddress_18() { return &___CurrentAddress_18; }
	inline void set_CurrentAddress_18(int32_t value)
	{
		___CurrentAddress_18 = value;
	}

	inline static int32_t get_offset_of_AcceptedSocket_19() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___AcceptedSocket_19)); }
	inline Socket_t1119025450 * get_AcceptedSocket_19() const { return ___AcceptedSocket_19; }
	inline Socket_t1119025450 ** get_address_of_AcceptedSocket_19() { return &___AcceptedSocket_19; }
	inline void set_AcceptedSocket_19(Socket_t1119025450 * value)
	{
		___AcceptedSocket_19 = value;
		Il2CppCodeGenWriteBarrier((&___AcceptedSocket_19), value);
	}

	inline static int32_t get_offset_of_Total_20() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___Total_20)); }
	inline int32_t get_Total_20() const { return ___Total_20; }
	inline int32_t* get_address_of_Total_20() { return &___Total_20; }
	inline void set_Total_20(int32_t value)
	{
		___Total_20 = value;
	}

	inline static int32_t get_offset_of_error_21() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___error_21)); }
	inline int32_t get_error_21() const { return ___error_21; }
	inline int32_t* get_address_of_error_21() { return &___error_21; }
	inline void set_error_21(int32_t value)
	{
		___error_21 = value;
	}

	inline static int32_t get_offset_of_EndCalled_22() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___EndCalled_22)); }
	inline int32_t get_EndCalled_22() const { return ___EndCalled_22; }
	inline int32_t* get_address_of_EndCalled_22() { return &___EndCalled_22; }
	inline void set_EndCalled_22(int32_t value)
	{
		___EndCalled_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.Sockets.SocketAsyncResult
struct SocketAsyncResult_t3523156467_marshaled_pinvoke : public IOAsyncResult_t3640145766_marshaled_pinvoke
{
	Socket_t1119025450 * ___socket_5;
	int32_t ___operation_6;
	Exception_t_marshaled_pinvoke* ___DelayedException_7;
	EndPoint_t982345378 * ___EndPoint_8;
	uint8_t* ___Buffer_9;
	int32_t ___Offset_10;
	int32_t ___Size_11;
	int32_t ___SockFlags_12;
	Socket_t1119025450 * ___AcceptSocket_13;
	IPAddressU5BU5D_t596328627* ___Addresses_14;
	int32_t ___Port_15;
	RuntimeObject* ___Buffers_16;
	int32_t ___ReuseSocket_17;
	int32_t ___CurrentAddress_18;
	Socket_t1119025450 * ___AcceptedSocket_19;
	int32_t ___Total_20;
	int32_t ___error_21;
	int32_t ___EndCalled_22;
};
// Native definition for COM marshalling of System.Net.Sockets.SocketAsyncResult
struct SocketAsyncResult_t3523156467_marshaled_com : public IOAsyncResult_t3640145766_marshaled_com
{
	Socket_t1119025450 * ___socket_5;
	int32_t ___operation_6;
	Exception_t_marshaled_com* ___DelayedException_7;
	EndPoint_t982345378 * ___EndPoint_8;
	uint8_t* ___Buffer_9;
	int32_t ___Offset_10;
	int32_t ___Size_11;
	int32_t ___SockFlags_12;
	Socket_t1119025450 * ___AcceptSocket_13;
	IPAddressU5BU5D_t596328627* ___Addresses_14;
	int32_t ___Port_15;
	RuntimeObject* ___Buffers_16;
	int32_t ___ReuseSocket_17;
	int32_t ___CurrentAddress_18;
	Socket_t1119025450 * ___AcceptedSocket_19;
	int32_t ___Total_20;
	int32_t ___error_21;
	int32_t ___EndCalled_22;
};
#endif // SOCKETASYNCRESULT_T3523156467_H
#ifndef LINUXNETWORKINTERFACE_T4095034716_H
#define LINUXNETWORKINTERFACE_T4095034716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxNetworkInterface
struct  LinuxNetworkInterface_t4095034716  : public UnixNetworkInterface_t2401762829
{
public:
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_path
	String_t* ___iface_path_5;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_operstate_path
	String_t* ___iface_operstate_path_6;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_flags_path
	String_t* ___iface_flags_path_7;

public:
	inline static int32_t get_offset_of_iface_path_5() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t4095034716, ___iface_path_5)); }
	inline String_t* get_iface_path_5() const { return ___iface_path_5; }
	inline String_t** get_address_of_iface_path_5() { return &___iface_path_5; }
	inline void set_iface_path_5(String_t* value)
	{
		___iface_path_5 = value;
		Il2CppCodeGenWriteBarrier((&___iface_path_5), value);
	}

	inline static int32_t get_offset_of_iface_operstate_path_6() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t4095034716, ___iface_operstate_path_6)); }
	inline String_t* get_iface_operstate_path_6() const { return ___iface_operstate_path_6; }
	inline String_t** get_address_of_iface_operstate_path_6() { return &___iface_operstate_path_6; }
	inline void set_iface_operstate_path_6(String_t* value)
	{
		___iface_operstate_path_6 = value;
		Il2CppCodeGenWriteBarrier((&___iface_operstate_path_6), value);
	}

	inline static int32_t get_offset_of_iface_flags_path_7() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t4095034716, ___iface_flags_path_7)); }
	inline String_t* get_iface_flags_path_7() const { return ___iface_flags_path_7; }
	inline String_t** get_address_of_iface_flags_path_7() { return &___iface_flags_path_7; }
	inline void set_iface_flags_path_7(String_t* value)
	{
		___iface_flags_path_7 = value;
		Il2CppCodeGenWriteBarrier((&___iface_flags_path_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINUXNETWORKINTERFACE_T4095034716_H
#ifndef MACOSNETWORKINTERFACE_T3969281182_H
#define MACOSNETWORKINTERFACE_T3969281182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsNetworkInterface
struct  MacOsNetworkInterface_t3969281182  : public UnixNetworkInterface_t2401762829
{
public:
	// System.UInt32 System.Net.NetworkInformation.MacOsNetworkInterface::_ifa_flags
	uint32_t ____ifa_flags_5;

public:
	inline static int32_t get_offset_of__ifa_flags_5() { return static_cast<int32_t>(offsetof(MacOsNetworkInterface_t3969281182, ____ifa_flags_5)); }
	inline uint32_t get__ifa_flags_5() const { return ____ifa_flags_5; }
	inline uint32_t* get_address_of__ifa_flags_5() { return &____ifa_flags_5; }
	inline void set__ifa_flags_5(uint32_t value)
	{
		____ifa_flags_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACOSNETWORKINTERFACE_T3969281182_H
#ifndef NETWORKINFORMATIONEXCEPTION_T2303982063_H
#define NETWORKINFORMATIONEXCEPTION_T2303982063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInformationException
struct  NetworkInformationException_t2303982063  : public Win32Exception_t3234146298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINFORMATIONEXCEPTION_T2303982063_H
#ifndef WIN32IPINTERFACEPROPERTIES2_T4152818631_H
#define WIN32IPINTERFACEPROPERTIES2_T4152818631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPInterfaceProperties2
struct  Win32IPInterfaceProperties2_t4152818631  : public IPInterfaceProperties_t3964383369
{
public:
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES System.Net.NetworkInformation.Win32IPInterfaceProperties2::addr
	Win32_IP_ADAPTER_ADDRESSES_t3463526328  ___addr_0;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPInterfaceProperties2::mib4
	Win32_MIB_IFROW_t851471770  ___mib4_1;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPInterfaceProperties2::mib6
	Win32_MIB_IFROW_t851471770  ___mib6_2;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(Win32IPInterfaceProperties2_t4152818631, ___addr_0)); }
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328  get_addr_0() const { return ___addr_0; }
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328 * get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(Win32_IP_ADAPTER_ADDRESSES_t3463526328  value)
	{
		___addr_0 = value;
	}

	inline static int32_t get_offset_of_mib4_1() { return static_cast<int32_t>(offsetof(Win32IPInterfaceProperties2_t4152818631, ___mib4_1)); }
	inline Win32_MIB_IFROW_t851471770  get_mib4_1() const { return ___mib4_1; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_mib4_1() { return &___mib4_1; }
	inline void set_mib4_1(Win32_MIB_IFROW_t851471770  value)
	{
		___mib4_1 = value;
	}

	inline static int32_t get_offset_of_mib6_2() { return static_cast<int32_t>(offsetof(Win32IPInterfaceProperties2_t4152818631, ___mib6_2)); }
	inline Win32_MIB_IFROW_t851471770  get_mib6_2() const { return ___mib6_2; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_mib6_2() { return &___mib6_2; }
	inline void set_mib6_2(Win32_MIB_IFROW_t851471770  value)
	{
		___mib6_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32IPINTERFACEPROPERTIES2_T4152818631_H
#ifndef WIN32IPV4INTERFACESTATISTICS_T3096671123_H
#define WIN32IPV4INTERFACESTATISTICS_T3096671123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics
struct  Win32IPv4InterfaceStatistics_t3096671123  : public IPv4InterfaceStatistics_t3249312820
{
public:
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPv4InterfaceStatistics::info
	Win32_MIB_IFROW_t851471770  ___info_0;

public:
	inline static int32_t get_offset_of_info_0() { return static_cast<int32_t>(offsetof(Win32IPv4InterfaceStatistics_t3096671123, ___info_0)); }
	inline Win32_MIB_IFROW_t851471770  get_info_0() const { return ___info_0; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_info_0() { return &___info_0; }
	inline void set_info_0(Win32_MIB_IFROW_t851471770  value)
	{
		___info_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32IPV4INTERFACESTATISTICS_T3096671123_H
#ifndef WIN32NETWORKINTERFACE_T3922465985_H
#define WIN32NETWORKINTERFACE_T3922465985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32NetworkInterface
struct  Win32NetworkInterface_t3922465985  : public RuntimeObject
{
public:

public:
};

struct Win32NetworkInterface_t3922465985_StaticFields
{
public:
	// System.Net.NetworkInformation.Win32_FIXED_INFO System.Net.NetworkInformation.Win32NetworkInterface::fixedInfo
	Win32_FIXED_INFO_t1299345856  ___fixedInfo_0;
	// System.Boolean System.Net.NetworkInformation.Win32NetworkInterface::initialized
	bool ___initialized_1;

public:
	inline static int32_t get_offset_of_fixedInfo_0() { return static_cast<int32_t>(offsetof(Win32NetworkInterface_t3922465985_StaticFields, ___fixedInfo_0)); }
	inline Win32_FIXED_INFO_t1299345856  get_fixedInfo_0() const { return ___fixedInfo_0; }
	inline Win32_FIXED_INFO_t1299345856 * get_address_of_fixedInfo_0() { return &___fixedInfo_0; }
	inline void set_fixedInfo_0(Win32_FIXED_INFO_t1299345856  value)
	{
		___fixedInfo_0 = value;
	}

	inline static int32_t get_offset_of_initialized_1() { return static_cast<int32_t>(offsetof(Win32NetworkInterface_t3922465985_StaticFields, ___initialized_1)); }
	inline bool get_initialized_1() const { return ___initialized_1; }
	inline bool* get_address_of_initialized_1() { return &___initialized_1; }
	inline void set_initialized_1(bool value)
	{
		___initialized_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32NETWORKINTERFACE_T3922465985_H
#ifndef WIN32NETWORKINTERFACE2_T2303857857_H
#define WIN32NETWORKINTERFACE2_T2303857857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32NetworkInterface2
struct  Win32NetworkInterface2_t2303857857  : public NetworkInterface_t271883373
{
public:
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES System.Net.NetworkInformation.Win32NetworkInterface2::addr
	Win32_IP_ADAPTER_ADDRESSES_t3463526328  ___addr_0;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32NetworkInterface2::mib4
	Win32_MIB_IFROW_t851471770  ___mib4_1;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32NetworkInterface2::mib6
	Win32_MIB_IFROW_t851471770  ___mib6_2;
	// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics System.Net.NetworkInformation.Win32NetworkInterface2::ip4stats
	Win32IPv4InterfaceStatistics_t3096671123 * ___ip4stats_3;
	// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.Win32NetworkInterface2::ip_if_props
	IPInterfaceProperties_t3964383369 * ___ip_if_props_4;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t2303857857, ___addr_0)); }
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328  get_addr_0() const { return ___addr_0; }
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328 * get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(Win32_IP_ADAPTER_ADDRESSES_t3463526328  value)
	{
		___addr_0 = value;
	}

	inline static int32_t get_offset_of_mib4_1() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t2303857857, ___mib4_1)); }
	inline Win32_MIB_IFROW_t851471770  get_mib4_1() const { return ___mib4_1; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_mib4_1() { return &___mib4_1; }
	inline void set_mib4_1(Win32_MIB_IFROW_t851471770  value)
	{
		___mib4_1 = value;
	}

	inline static int32_t get_offset_of_mib6_2() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t2303857857, ___mib6_2)); }
	inline Win32_MIB_IFROW_t851471770  get_mib6_2() const { return ___mib6_2; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_mib6_2() { return &___mib6_2; }
	inline void set_mib6_2(Win32_MIB_IFROW_t851471770  value)
	{
		___mib6_2 = value;
	}

	inline static int32_t get_offset_of_ip4stats_3() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t2303857857, ___ip4stats_3)); }
	inline Win32IPv4InterfaceStatistics_t3096671123 * get_ip4stats_3() const { return ___ip4stats_3; }
	inline Win32IPv4InterfaceStatistics_t3096671123 ** get_address_of_ip4stats_3() { return &___ip4stats_3; }
	inline void set_ip4stats_3(Win32IPv4InterfaceStatistics_t3096671123 * value)
	{
		___ip4stats_3 = value;
		Il2CppCodeGenWriteBarrier((&___ip4stats_3), value);
	}

	inline static int32_t get_offset_of_ip_if_props_4() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t2303857857, ___ip_if_props_4)); }
	inline IPInterfaceProperties_t3964383369 * get_ip_if_props_4() const { return ___ip_if_props_4; }
	inline IPInterfaceProperties_t3964383369 ** get_address_of_ip_if_props_4() { return &___ip_if_props_4; }
	inline void set_ip_if_props_4(IPInterfaceProperties_t3964383369 * value)
	{
		___ip_if_props_4 = value;
		Il2CppCodeGenWriteBarrier((&___ip_if_props_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32NETWORKINTERFACE2_T2303857857_H
#ifndef LOCALCERTSELECTIONCALLBACK_T1988113036_H
#define LOCALCERTSELECTIONCALLBACK_T1988113036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.LocalCertSelectionCallback
struct  LocalCertSelectionCallback_t1988113036  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALCERTSELECTIONCALLBACK_T1988113036_H
#ifndef REMOTECERTIFICATEVALIDATIONCALLBACK_T3014364904_H
#define REMOTECERTIFICATEVALIDATIONCALLBACK_T3014364904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.RemoteCertificateValidationCallback
struct  RemoteCertificateValidationCallback_t3014364904  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTECERTIFICATEVALIDATIONCALLBACK_T3014364904_H
#ifndef SAFESOCKETHANDLE_T610293888_H
#define SAFESOCKETHANDLE_T610293888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SafeSocketHandle
struct  SafeSocketHandle_t610293888  : public SafeHandleZeroOrMinusOneIsInvalid_t1182193648
{
public:
	// System.Collections.Generic.List`1<System.Threading.Thread> System.Net.Sockets.SafeSocketHandle::blocking_threads
	List_1_t3772910811 * ___blocking_threads_6;
	// System.Collections.Generic.Dictionary`2<System.Threading.Thread,System.Diagnostics.StackTrace> System.Net.Sockets.SafeSocketHandle::threads_stacktraces
	Dictionary_2_t922677896 * ___threads_stacktraces_7;
	// System.Boolean System.Net.Sockets.SafeSocketHandle::in_cleanup
	bool ___in_cleanup_8;

public:
	inline static int32_t get_offset_of_blocking_threads_6() { return static_cast<int32_t>(offsetof(SafeSocketHandle_t610293888, ___blocking_threads_6)); }
	inline List_1_t3772910811 * get_blocking_threads_6() const { return ___blocking_threads_6; }
	inline List_1_t3772910811 ** get_address_of_blocking_threads_6() { return &___blocking_threads_6; }
	inline void set_blocking_threads_6(List_1_t3772910811 * value)
	{
		___blocking_threads_6 = value;
		Il2CppCodeGenWriteBarrier((&___blocking_threads_6), value);
	}

	inline static int32_t get_offset_of_threads_stacktraces_7() { return static_cast<int32_t>(offsetof(SafeSocketHandle_t610293888, ___threads_stacktraces_7)); }
	inline Dictionary_2_t922677896 * get_threads_stacktraces_7() const { return ___threads_stacktraces_7; }
	inline Dictionary_2_t922677896 ** get_address_of_threads_stacktraces_7() { return &___threads_stacktraces_7; }
	inline void set_threads_stacktraces_7(Dictionary_2_t922677896 * value)
	{
		___threads_stacktraces_7 = value;
		Il2CppCodeGenWriteBarrier((&___threads_stacktraces_7), value);
	}

	inline static int32_t get_offset_of_in_cleanup_8() { return static_cast<int32_t>(offsetof(SafeSocketHandle_t610293888, ___in_cleanup_8)); }
	inline bool get_in_cleanup_8() const { return ___in_cleanup_8; }
	inline bool* get_address_of_in_cleanup_8() { return &___in_cleanup_8; }
	inline void set_in_cleanup_8(bool value)
	{
		___in_cleanup_8 = value;
	}
};

struct SafeSocketHandle_t610293888_StaticFields
{
public:
	// System.Boolean System.Net.Sockets.SafeSocketHandle::THROW_ON_ABORT_RETRIES
	bool ___THROW_ON_ABORT_RETRIES_9;

public:
	inline static int32_t get_offset_of_THROW_ON_ABORT_RETRIES_9() { return static_cast<int32_t>(offsetof(SafeSocketHandle_t610293888_StaticFields, ___THROW_ON_ABORT_RETRIES_9)); }
	inline bool get_THROW_ON_ABORT_RETRIES_9() const { return ___THROW_ON_ABORT_RETRIES_9; }
	inline bool* get_address_of_THROW_ON_ABORT_RETRIES_9() { return &___THROW_ON_ABORT_RETRIES_9; }
	inline void set_THROW_ON_ABORT_RETRIES_9(bool value)
	{
		___THROW_ON_ABORT_RETRIES_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFESOCKETHANDLE_T610293888_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2700 = { sizeof (NetworkStream_t4071955934), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2700[8] = 
{
	NetworkStream_t4071955934::get_offset_of_m_StreamSocket_4(),
	NetworkStream_t4071955934::get_offset_of_m_Readable_5(),
	NetworkStream_t4071955934::get_offset_of_m_Writeable_6(),
	NetworkStream_t4071955934::get_offset_of_m_OwnsSocket_7(),
	NetworkStream_t4071955934::get_offset_of_m_CloseTimeout_8(),
	NetworkStream_t4071955934::get_offset_of_m_CleanedUp_9(),
	NetworkStream_t4071955934::get_offset_of_m_CurrentReadTimeout_10(),
	NetworkStream_t4071955934::get_offset_of_m_CurrentWriteTimeout_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2701 = { sizeof (ProtocolType_t303635025)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2701[26] = 
{
	ProtocolType_t303635025::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2702 = { sizeof (SelectMode_t1123767949)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2702[4] = 
{
	SelectMode_t1123767949::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2703 = { sizeof (Socket_t1119025450), -1, sizeof(Socket_t1119025450_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2703[37] = 
{
	Socket_t1119025450_StaticFields::get_offset_of_s_InternalSyncObject_0(),
	Socket_t1119025450_StaticFields::get_offset_of_s_SupportsIPv4_1(),
	Socket_t1119025450_StaticFields::get_offset_of_s_SupportsIPv6_2(),
	Socket_t1119025450_StaticFields::get_offset_of_s_OSSupportsIPv6_3(),
	Socket_t1119025450_StaticFields::get_offset_of_s_Initialized_4(),
	Socket_t1119025450_StaticFields::get_offset_of_s_LoggingEnabled_5(),
	Socket_t1119025450::get_offset_of_is_closed_6(),
	Socket_t1119025450::get_offset_of_is_listening_7(),
	Socket_t1119025450::get_offset_of_useOverlappedIO_8(),
	Socket_t1119025450::get_offset_of_linger_timeout_9(),
	Socket_t1119025450::get_offset_of_addressFamily_10(),
	Socket_t1119025450::get_offset_of_socketType_11(),
	Socket_t1119025450::get_offset_of_protocolType_12(),
	Socket_t1119025450::get_offset_of_m_Handle_13(),
	Socket_t1119025450::get_offset_of_seed_endpoint_14(),
	Socket_t1119025450::get_offset_of_ReadSem_15(),
	Socket_t1119025450::get_offset_of_WriteSem_16(),
	Socket_t1119025450::get_offset_of_is_blocking_17(),
	Socket_t1119025450::get_offset_of_is_bound_18(),
	Socket_t1119025450::get_offset_of_is_connected_19(),
	Socket_t1119025450::get_offset_of_m_IntCleanedUp_20(),
	Socket_t1119025450::get_offset_of_connect_in_progress_21(),
	Socket_t1119025450_StaticFields::get_offset_of_AcceptAsyncCallback_22(),
	Socket_t1119025450_StaticFields::get_offset_of_BeginAcceptCallback_23(),
	Socket_t1119025450_StaticFields::get_offset_of_BeginAcceptReceiveCallback_24(),
	Socket_t1119025450_StaticFields::get_offset_of_ConnectAsyncCallback_25(),
	Socket_t1119025450_StaticFields::get_offset_of_BeginConnectCallback_26(),
	Socket_t1119025450_StaticFields::get_offset_of_DisconnectAsyncCallback_27(),
	Socket_t1119025450_StaticFields::get_offset_of_BeginDisconnectCallback_28(),
	Socket_t1119025450_StaticFields::get_offset_of_ReceiveAsyncCallback_29(),
	Socket_t1119025450_StaticFields::get_offset_of_BeginReceiveCallback_30(),
	Socket_t1119025450_StaticFields::get_offset_of_BeginReceiveGenericCallback_31(),
	Socket_t1119025450_StaticFields::get_offset_of_ReceiveFromAsyncCallback_32(),
	Socket_t1119025450_StaticFields::get_offset_of_BeginReceiveFromCallback_33(),
	Socket_t1119025450_StaticFields::get_offset_of_SendAsyncCallback_34(),
	Socket_t1119025450_StaticFields::get_offset_of_BeginSendGenericCallback_35(),
	Socket_t1119025450_StaticFields::get_offset_of_SendToAsyncCallback_36(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2704 = { sizeof (WSABUF_t1998059390)+ sizeof (RuntimeObject), sizeof(WSABUF_t1998059390 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2704[2] = 
{
	WSABUF_t1998059390::get_offset_of_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WSABUF_t1998059390::get_offset_of_buf_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2705 = { sizeof (U3CU3Ec_t240325972), -1, sizeof(U3CU3Ec_t240325972_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2705[2] = 
{
	U3CU3Ec_t240325972_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t240325972_StaticFields::get_offset_of_U3CU3E9__241_0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2706 = { sizeof (U3CU3Ec__DisplayClass242_0_t616583391), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2706[1] = 
{
	U3CU3Ec__DisplayClass242_0_t616583391::get_offset_of_sent_so_far_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2707 = { sizeof (U3CU3Ec__DisplayClass298_0_t616190186), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2707[3] = 
{
	U3CU3Ec__DisplayClass298_0_t616190186::get_offset_of_U3CU3E4__this_0(),
	U3CU3Ec__DisplayClass298_0_t616190186::get_offset_of_job_1(),
	U3CU3Ec__DisplayClass298_0_t616190186::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2708 = { sizeof (SocketError_t3760144386)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2708[48] = 
{
	SocketError_t3760144386::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2709 = { sizeof (SocketFlags_t2969870452)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2709[11] = 
{
	SocketFlags_t2969870452::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2710 = { sizeof (SocketOptionLevel_t201167901)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2710[6] = 
{
	SocketOptionLevel_t201167901::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2711 = { sizeof (SocketOptionName_t403346465)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2711[47] = 
{
	SocketOptionName_t403346465::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2712 = { sizeof (SocketShutdown_t2687738148)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2712[4] = 
{
	SocketShutdown_t2687738148::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2713 = { sizeof (SocketType_t2175930299)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2713[7] = 
{
	SocketType_t2175930299::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2714 = { sizeof (SafeSocketHandle_t610293888), sizeof(void*), sizeof(SafeSocketHandle_t610293888_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2714[4] = 
{
	SafeSocketHandle_t610293888::get_offset_of_blocking_threads_6(),
	SafeSocketHandle_t610293888::get_offset_of_threads_stacktraces_7(),
	SafeSocketHandle_t610293888::get_offset_of_in_cleanup_8(),
	SafeSocketHandle_t610293888_StaticFields::get_offset_of_THROW_ON_ABORT_RETRIES_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2715 = { sizeof (SocketAsyncEventArgs_t4146203020), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2715[8] = 
{
	SocketAsyncEventArgs_t4146203020::get_offset_of_disposed_1(),
	SocketAsyncEventArgs_t4146203020::get_offset_of_in_progress_2(),
	SocketAsyncEventArgs_t4146203020::get_offset_of_remote_ep_3(),
	SocketAsyncEventArgs_t4146203020::get_offset_of_current_socket_4(),
	SocketAsyncEventArgs_t4146203020::get_offset_of_U3CAcceptSocketU3Ek__BackingField_5(),
	SocketAsyncEventArgs_t4146203020::get_offset_of_U3CBytesTransferredU3Ek__BackingField_6(),
	SocketAsyncEventArgs_t4146203020::get_offset_of_U3CSocketErrorU3Ek__BackingField_7(),
	SocketAsyncEventArgs_t4146203020::get_offset_of_Completed_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2716 = { sizeof (SocketAsyncResult_t3523156467), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2716[18] = 
{
	SocketAsyncResult_t3523156467::get_offset_of_socket_5(),
	SocketAsyncResult_t3523156467::get_offset_of_operation_6(),
	SocketAsyncResult_t3523156467::get_offset_of_DelayedException_7(),
	SocketAsyncResult_t3523156467::get_offset_of_EndPoint_8(),
	SocketAsyncResult_t3523156467::get_offset_of_Buffer_9(),
	SocketAsyncResult_t3523156467::get_offset_of_Offset_10(),
	SocketAsyncResult_t3523156467::get_offset_of_Size_11(),
	SocketAsyncResult_t3523156467::get_offset_of_SockFlags_12(),
	SocketAsyncResult_t3523156467::get_offset_of_AcceptSocket_13(),
	SocketAsyncResult_t3523156467::get_offset_of_Addresses_14(),
	SocketAsyncResult_t3523156467::get_offset_of_Port_15(),
	SocketAsyncResult_t3523156467::get_offset_of_Buffers_16(),
	SocketAsyncResult_t3523156467::get_offset_of_ReuseSocket_17(),
	SocketAsyncResult_t3523156467::get_offset_of_CurrentAddress_18(),
	SocketAsyncResult_t3523156467::get_offset_of_AcceptedSocket_19(),
	SocketAsyncResult_t3523156467::get_offset_of_Total_20(),
	SocketAsyncResult_t3523156467::get_offset_of_error_21(),
	SocketAsyncResult_t3523156467::get_offset_of_EndCalled_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2717 = { sizeof (U3CU3Ec_t3573335103), -1, sizeof(U3CU3Ec_t3573335103_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2717[2] = 
{
	U3CU3Ec_t3573335103_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t3573335103_StaticFields::get_offset_of_U3CU3E9__27_0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2718 = { sizeof (SocketOperation_t2303010090)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2718[13] = 
{
	SocketOperation_t2303010090::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2719 = { sizeof (AuthenticatedStream_t3415418016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2719[2] = 
{
	AuthenticatedStream_t3415418016::get_offset_of__InnerStream_4(),
	AuthenticatedStream_t3415418016::get_offset_of__LeaveStreamOpen_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2720 = { sizeof (AuthenticationLevel_t1236753641)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2720[4] = 
{
	AuthenticationLevel_t1236753641::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2721 = { sizeof (RemoteCertificateValidationCallback_t3014364904), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2722 = { sizeof (SslPolicyErrors_t2205227823)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2722[5] = 
{
	SslPolicyErrors_t2205227823::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2723 = { sizeof (LocalCertSelectionCallback_t1988113036), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2724 = { sizeof (SslStream_t2700741536), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2724[2] = 
{
	SslStream_t2700741536::get_offset_of_provider_6(),
	SslStream_t2700741536::get_offset_of_impl_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2725 = { sizeof (IPAddressCollection_t2315030214), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2725[1] = 
{
	IPAddressCollection_t2315030214::get_offset_of_addresses_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2726 = { sizeof (IPGlobalProperties_t3113415935), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2727 = { sizeof (IPInterfaceProperties_t3964383369), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2728 = { sizeof (IPv4InterfaceStatistics_t3249312820), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2729 = { sizeof (NetworkInformationException_t2303982063), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2730 = { sizeof (NetworkInterface_t271883373), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2731 = { sizeof (NetworkInterfaceComponent_t1400510776)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2731[3] = 
{
	NetworkInterfaceComponent_t1400510776::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2732 = { sizeof (OperationalStatus_t2709089529)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2732[8] = 
{
	OperationalStatus_t2709089529::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2733 = { sizeof (NetworkInterfaceType_t616418749)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2733[29] = 
{
	NetworkInterfaceType_t616418749::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2734 = { sizeof (NetBiosNodeType_t3568904212)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2734[6] = 
{
	NetBiosNodeType_t3568904212::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2735 = { sizeof (Win32IPAddressCollection_t1156671415), -1, sizeof(Win32IPAddressCollection_t1156671415_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2735[1] = 
{
	Win32IPAddressCollection_t1156671415_StaticFields::get_offset_of_Empty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2736 = { sizeof (CommonUnixIPGlobalProperties_t1338606518), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2737 = { sizeof (UnixIPGlobalProperties_t1460024316), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2738 = { sizeof (MibIPGlobalProperties_t3015477361), -1, sizeof(MibIPGlobalProperties_t3015477361_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2738[7] = 
{
	MibIPGlobalProperties_t3015477361::get_offset_of_StatisticsFile_0(),
	MibIPGlobalProperties_t3015477361::get_offset_of_StatisticsFileIPv6_1(),
	MibIPGlobalProperties_t3015477361::get_offset_of_TcpFile_2(),
	MibIPGlobalProperties_t3015477361::get_offset_of_Tcp6File_3(),
	MibIPGlobalProperties_t3015477361::get_offset_of_UdpFile_4(),
	MibIPGlobalProperties_t3015477361::get_offset_of_Udp6File_5(),
	MibIPGlobalProperties_t3015477361_StaticFields::get_offset_of_wsChars_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2739 = { sizeof (Win32IPGlobalProperties_t3375126358), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2740 = { sizeof (UnixIPInterfaceProperties_t1296234392), -1, sizeof(UnixIPInterfaceProperties_t1296234392_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2740[7] = 
{
	UnixIPInterfaceProperties_t1296234392::get_offset_of_iface_0(),
	UnixIPInterfaceProperties_t1296234392::get_offset_of_addresses_1(),
	UnixIPInterfaceProperties_t1296234392::get_offset_of_dns_servers_2(),
	UnixIPInterfaceProperties_t1296234392_StaticFields::get_offset_of_ns_3(),
	UnixIPInterfaceProperties_t1296234392_StaticFields::get_offset_of_search_4(),
	UnixIPInterfaceProperties_t1296234392::get_offset_of_dns_suffix_5(),
	UnixIPInterfaceProperties_t1296234392::get_offset_of_last_parse_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2741 = { sizeof (LinuxIPInterfaceProperties_t458874081), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2742 = { sizeof (MacOsIPInterfaceProperties_t1282553291), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2743 = { sizeof (Win32IPInterfaceProperties2_t4152818631), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2743[3] = 
{
	Win32IPInterfaceProperties2_t4152818631::get_offset_of_addr_0(),
	Win32IPInterfaceProperties2_t4152818631::get_offset_of_mib4_1(),
	Win32IPInterfaceProperties2_t4152818631::get_offset_of_mib6_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2744 = { sizeof (Win32IPv4InterfaceStatistics_t3096671123), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2744[1] = 
{
	Win32IPv4InterfaceStatistics_t3096671123::get_offset_of_info_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2745 = { sizeof (ifa_ifu_t1794893192)+ sizeof (RuntimeObject), sizeof(ifa_ifu_t1794893192 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2745[2] = 
{
	ifa_ifu_t1794893192::get_offset_of_ifu_broadaddr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifa_ifu_t1794893192::get_offset_of_ifu_dstaddr_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2746 = { sizeof (ifaddrs_t271199369)+ sizeof (RuntimeObject), sizeof(ifaddrs_t271199369_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2746[7] = 
{
	ifaddrs_t271199369::get_offset_of_ifa_next_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_flags_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_addr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_netmask_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_ifu_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_data_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2747 = { sizeof (sockaddr_in_t2786965223)+ sizeof (RuntimeObject), sizeof(sockaddr_in_t2786965223 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2747[3] = 
{
	sockaddr_in_t2786965223::get_offset_of_sin_family_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t2786965223::get_offset_of_sin_port_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t2786965223::get_offset_of_sin_addr_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2748 = { sizeof (sockaddr_in6_t2790242023)+ sizeof (RuntimeObject), sizeof(sockaddr_in6_t2790242023_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2748[5] = 
{
	sockaddr_in6_t2790242023::get_offset_of_sin6_family_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2790242023::get_offset_of_sin6_port_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2790242023::get_offset_of_sin6_flowinfo_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2790242023::get_offset_of_sin6_addr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2790242023::get_offset_of_sin6_scope_id_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2749 = { sizeof (in6_addr_t3611791508)+ sizeof (RuntimeObject), sizeof(in6_addr_t3611791508_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2749[1] = 
{
	in6_addr_t3611791508::get_offset_of_u6_addr8_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2750 = { sizeof (sockaddr_ll_t3978606313)+ sizeof (RuntimeObject), sizeof(sockaddr_ll_t3978606313_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2750[7] = 
{
	sockaddr_ll_t3978606313::get_offset_of_sll_family_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_protocol_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_ifindex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_hatype_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_pkttype_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_halen_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_addr_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2751 = { sizeof (LinuxArpHardware_t827080684)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2751[18] = 
{
	LinuxArpHardware_t827080684::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2752 = { sizeof (MacOsArpHardware_t4198534184)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2752[7] = 
{
	MacOsArpHardware_t4198534184::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2753 = { sizeof (SystemNetworkInterface_t699244148), -1, sizeof(SystemNetworkInterface_t699244148_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2753[1] = 
{
	SystemNetworkInterface_t699244148_StaticFields::get_offset_of_nif_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2754 = { sizeof (NetworkInterfaceFactory_t1756522298), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2755 = { sizeof (UnixNetworkInterfaceAPI_t1061423219), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2756 = { sizeof (MacOsNetworkInterfaceAPI_t1249733612), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2757 = { sizeof (LinuxNetworkInterfaceAPI_t1157390748), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2758 = { sizeof (Win32NetworkInterfaceAPI_t912414909), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2759 = { sizeof (UnixNetworkInterface_t2401762829), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2759[5] = 
{
	UnixNetworkInterface_t2401762829::get_offset_of_ipproperties_0(),
	UnixNetworkInterface_t2401762829::get_offset_of_name_1(),
	UnixNetworkInterface_t2401762829::get_offset_of_addresses_2(),
	UnixNetworkInterface_t2401762829::get_offset_of_macAddress_3(),
	UnixNetworkInterface_t2401762829::get_offset_of_type_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2760 = { sizeof (LinuxNetworkInterface_t4095034716), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2760[3] = 
{
	LinuxNetworkInterface_t4095034716::get_offset_of_iface_path_5(),
	LinuxNetworkInterface_t4095034716::get_offset_of_iface_operstate_path_6(),
	LinuxNetworkInterface_t4095034716::get_offset_of_iface_flags_path_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2761 = { sizeof (MacOsNetworkInterface_t3969281182), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2761[1] = 
{
	MacOsNetworkInterface_t3969281182::get_offset_of__ifa_flags_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2762 = { sizeof (Win32NetworkInterface2_t2303857857), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2762[5] = 
{
	Win32NetworkInterface2_t2303857857::get_offset_of_addr_0(),
	Win32NetworkInterface2_t2303857857::get_offset_of_mib4_1(),
	Win32NetworkInterface2_t2303857857::get_offset_of_mib6_2(),
	Win32NetworkInterface2_t2303857857::get_offset_of_ip4stats_3(),
	Win32NetworkInterface2_t2303857857::get_offset_of_ip_if_props_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2763 = { sizeof (Win32NetworkInterface_t3922465985), -1, sizeof(Win32NetworkInterface_t3922465985_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2763[2] = 
{
	Win32NetworkInterface_t3922465985_StaticFields::get_offset_of_fixedInfo_0(),
	Win32NetworkInterface_t3922465985_StaticFields::get_offset_of_initialized_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2764 = { sizeof (Win32_FIXED_INFO_t1299345856)+ sizeof (RuntimeObject), sizeof(Win32_FIXED_INFO_t1299345856_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2764[9] = 
{
	Win32_FIXED_INFO_t1299345856::get_offset_of_HostName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_FIXED_INFO_t1299345856::get_offset_of_DomainName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_FIXED_INFO_t1299345856::get_offset_of_CurrentDnsServer_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_FIXED_INFO_t1299345856::get_offset_of_DnsServerList_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_FIXED_INFO_t1299345856::get_offset_of_NodeType_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_FIXED_INFO_t1299345856::get_offset_of_ScopeId_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_FIXED_INFO_t1299345856::get_offset_of_EnableRouting_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_FIXED_INFO_t1299345856::get_offset_of_EnableProxy_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_FIXED_INFO_t1299345856::get_offset_of_EnableDns_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2765 = { sizeof (AlignmentUnion_t208902285)+ sizeof (RuntimeObject), sizeof(AlignmentUnion_t208902285 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2765[3] = 
{
	AlignmentUnion_t208902285::get_offset_of_Alignment_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AlignmentUnion_t208902285::get_offset_of_Length_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AlignmentUnion_t208902285::get_offset_of_IfIndex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2766 = { sizeof (Win32_IP_ADAPTER_ADDRESSES_t3463526328)+ sizeof (RuntimeObject), sizeof(Win32_IP_ADAPTER_ADDRESSES_t3463526328_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2766[18] = 
{
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_Alignment_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_Next_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_AdapterName_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_FirstUnicastAddress_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_FirstAnycastAddress_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_FirstMulticastAddress_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_FirstDnsServerAddress_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_DnsSuffix_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_Description_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_FriendlyName_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_PhysicalAddress_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_PhysicalAddressLength_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_Flags_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_Mtu_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_IfType_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_OperStatus_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_Ipv6IfIndex_16() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_ZoneIndices_17() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2767 = { sizeof (Win32_MIB_IFROW_t851471770)+ sizeof (RuntimeObject), sizeof(Win32_MIB_IFROW_t851471770_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2767[24] = 
{
	Win32_MIB_IFROW_t851471770::get_offset_of_Name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_Index_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_Type_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_Mtu_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_Speed_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_PhysAddrLen_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_PhysAddr_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_AdminStatus_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_OperStatus_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_LastChange_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_InOctets_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_InUcastPkts_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_InNUcastPkts_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_InDiscards_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_InErrors_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_InUnknownProtos_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_OutOctets_16() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_OutUcastPkts_17() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_OutNUcastPkts_18() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_OutDiscards_19() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_OutErrors_20() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_OutQLen_21() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_DescrLen_22() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_Descr_23() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2768 = { sizeof (Win32_IP_ADDR_STRING_t1213417184)+ sizeof (RuntimeObject), sizeof(Win32_IP_ADDR_STRING_t1213417184_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2768[4] = 
{
	Win32_IP_ADDR_STRING_t1213417184::get_offset_of_Next_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADDR_STRING_t1213417184::get_offset_of_IpAddress_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADDR_STRING_t1213417184::get_offset_of_IpMask_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADDR_STRING_t1213417184::get_offset_of_Context_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2769 = { sizeof (Win32LengthFlagsUnion_t1383639798)+ sizeof (RuntimeObject), sizeof(Win32LengthFlagsUnion_t1383639798 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2769[2] = 
{
	Win32LengthFlagsUnion_t1383639798::get_offset_of_Length_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32LengthFlagsUnion_t1383639798::get_offset_of_Flags_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2770 = { sizeof (Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100)+ sizeof (RuntimeObject), sizeof(Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2770[3] = 
{
	Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100::get_offset_of_LengthFlags_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100::get_offset_of_Next_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100::get_offset_of_Address_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2771 = { sizeof (Win32_SOCKADDR_t2504501424)+ sizeof (RuntimeObject), sizeof(Win32_SOCKADDR_t2504501424_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2771[2] = 
{
	Win32_SOCKADDR_t2504501424::get_offset_of_AddressFamily_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_SOCKADDR_t2504501424::get_offset_of_AddressData_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2772 = { sizeof (Win32_SOCKET_ADDRESS_t1936753419)+ sizeof (RuntimeObject), sizeof(Win32_SOCKET_ADDRESS_t1936753419 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2772[2] = 
{
	Win32_SOCKET_ADDRESS_t1936753419::get_offset_of_Sockaddr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_SOCKET_ADDRESS_t1936753419::get_offset_of_SockaddrLength_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2773 = { sizeof (ifaddrs_t2169824096)+ sizeof (RuntimeObject), sizeof(ifaddrs_t2169824096_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2773[7] = 
{
	ifaddrs_t2169824096::get_offset_of_ifa_next_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_flags_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_addr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_netmask_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_dstaddr_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_data_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2774 = { sizeof (sockaddr_t371844119)+ sizeof (RuntimeObject), sizeof(sockaddr_t371844119 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2774[2] = 
{
	sockaddr_t371844119::get_offset_of_sa_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_t371844119::get_offset_of_sa_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2775 = { sizeof (sockaddr_in_t1317910171)+ sizeof (RuntimeObject), sizeof(sockaddr_in_t1317910171 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2775[4] = 
{
	sockaddr_in_t1317910171::get_offset_of_sin_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t1317910171::get_offset_of_sin_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t1317910171::get_offset_of_sin_port_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t1317910171::get_offset_of_sin_addr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2776 = { sizeof (in6_addr_t1417766092)+ sizeof (RuntimeObject), sizeof(in6_addr_t1417766092_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2776[1] = 
{
	in6_addr_t1417766092::get_offset_of_u6_addr8_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2777 = { sizeof (sockaddr_in6_t2080844659)+ sizeof (RuntimeObject), sizeof(sockaddr_in6_t2080844659_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2777[6] = 
{
	sockaddr_in6_t2080844659::get_offset_of_sin6_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_port_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_flowinfo_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_addr_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_scope_id_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2778 = { sizeof (sockaddr_dl_t1317779094)+ sizeof (RuntimeObject), sizeof(sockaddr_dl_t1317779094_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2778[8] = 
{
	sockaddr_dl_t1317779094::get_offset_of_sdl_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_index_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_type_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_nlen_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_alen_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_slen_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_data_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2779 = { sizeof (DefaultProxySectionInternal_t3889414525), -1, sizeof(DefaultProxySectionInternal_t3889414525_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2779[2] = 
{
	DefaultProxySectionInternal_t3889414525::get_offset_of_webProxy_0(),
	DefaultProxySectionInternal_t3889414525_StaticFields::get_offset_of_classSyncObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2780 = { sizeof (SettingsSectionInternal_t781171337), -1, sizeof(SettingsSectionInternal_t781171337_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2780[3] = 
{
	SettingsSectionInternal_t781171337_StaticFields::get_offset_of_instance_0(),
	SettingsSectionInternal_t781171337::get_offset_of_HttpListenerUnescapeRequestUrl_1(),
	SettingsSectionInternal_t781171337::get_offset_of_IPProtectionLevel_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2781 = { sizeof (AuthenticationModuleElement_t2289740666), -1, sizeof(AuthenticationModuleElement_t2289740666_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2781[2] = 
{
	AuthenticationModuleElement_t2289740666_StaticFields::get_offset_of_properties_15(),
	AuthenticationModuleElement_t2289740666_StaticFields::get_offset_of_typeProp_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2782 = { sizeof (AuthenticationModuleElementCollection_t1161221431), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2783 = { sizeof (AuthenticationModulesSection_t1083221556), -1, sizeof(AuthenticationModulesSection_t1083221556_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2783[2] = 
{
	AuthenticationModulesSection_t1083221556_StaticFields::get_offset_of_properties_19(),
	AuthenticationModulesSection_t1083221556_StaticFields::get_offset_of_authenticationModulesProp_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2784 = { sizeof (BypassElement_t2358616601), -1, sizeof(BypassElement_t2358616601_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2784[2] = 
{
	BypassElement_t2358616601_StaticFields::get_offset_of_properties_15(),
	BypassElement_t2358616601_StaticFields::get_offset_of_addressProp_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2785 = { sizeof (BypassElementCollection_t47326401), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2786 = { sizeof (ConnectionManagementElement_t3857438253), -1, sizeof(ConnectionManagementElement_t3857438253_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2786[3] = 
{
	ConnectionManagementElement_t3857438253_StaticFields::get_offset_of_properties_15(),
	ConnectionManagementElement_t3857438253_StaticFields::get_offset_of_addressProp_16(),
	ConnectionManagementElement_t3857438253_StaticFields::get_offset_of_maxConnectionProp_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2787 = { sizeof (ConnectionManagementElementCollection_t3860227195), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2788 = { sizeof (ConnectionManagementData_t2003128658), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2788[1] = 
{
	ConnectionManagementData_t2003128658::get_offset_of_data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2789 = { sizeof (ConnectionManagementSection_t1603642748), -1, sizeof(ConnectionManagementSection_t1603642748_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2789[2] = 
{
	ConnectionManagementSection_t1603642748_StaticFields::get_offset_of_connectionManagementProp_19(),
	ConnectionManagementSection_t1603642748_StaticFields::get_offset_of_properties_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2790 = { sizeof (DefaultProxySection_t4167594595), -1, sizeof(DefaultProxySection_t4167594595_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2790[6] = 
{
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_properties_19(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_bypassListProp_20(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_enabledProp_21(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_moduleProp_22(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_proxyProp_23(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_useDefaultCredentialsProp_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2791 = { sizeof (HttpWebRequestElement_t2801692355), -1, sizeof(HttpWebRequestElement_t2801692355_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2791[5] = 
{
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_maximumErrorResponseLengthProp_15(),
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_maximumResponseHeadersLengthProp_16(),
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_maximumUnauthorizedUploadLengthProp_17(),
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_useUnsafeHeaderParsingProp_18(),
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_properties_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2792 = { sizeof (Ipv6Element_t180053194), -1, sizeof(Ipv6Element_t180053194_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2792[2] = 
{
	Ipv6Element_t180053194_StaticFields::get_offset_of_properties_15(),
	Ipv6Element_t180053194_StaticFields::get_offset_of_enabledProp_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2793 = { sizeof (ModuleElement_t3252950656), -1, sizeof(ModuleElement_t3252950656_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2793[2] = 
{
	ModuleElement_t3252950656_StaticFields::get_offset_of_properties_15(),
	ModuleElement_t3252950656_StaticFields::get_offset_of_typeProp_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2794 = { sizeof (NetSectionGroup_t3270122580), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2795 = { sizeof (PerformanceCountersElement_t4093363992), -1, sizeof(PerformanceCountersElement_t4093363992_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2795[2] = 
{
	PerformanceCountersElement_t4093363992_StaticFields::get_offset_of_enabledProp_15(),
	PerformanceCountersElement_t4093363992_StaticFields::get_offset_of_properties_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2796 = { sizeof (ProxyElement_t3214064751), -1, sizeof(ProxyElement_t3214064751_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2796[6] = 
{
	ProxyElement_t3214064751_StaticFields::get_offset_of_properties_15(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_autoDetectProp_16(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_bypassOnLocalProp_17(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_proxyAddressProp_18(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_scriptLocationProp_19(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_useSystemDefaultProp_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2797 = { sizeof (BypassOnLocalValues_t945670496)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2797[4] = 
{
	BypassOnLocalValues_t945670496::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2798 = { sizeof (UseSystemDefaultValues_t2711047072)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2798[4] = 
{
	UseSystemDefaultValues_t2711047072::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2799 = { sizeof (AutoDetectValues_t1649618618)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2799[4] = 
{
	AutoDetectValues_t1649618618::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
