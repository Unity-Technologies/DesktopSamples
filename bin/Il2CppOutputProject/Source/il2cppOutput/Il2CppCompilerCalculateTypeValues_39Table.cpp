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


// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t2285235057;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.Encoding
struct Encoding_t1523322056;




#ifndef U3CMODULEU3E_T692745560_H
#define U3CMODULEU3E_T692745560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745560 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745560_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D512_T3317833663_H
#define __STATICARRAYINITTYPESIZEU3D512_T3317833663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512
struct  __StaticArrayInitTypeSizeU3D512_t3317833663 
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
		uint8_t __StaticArrayInitTypeSizeU3D512_t3317833663__padding[512];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D512_T3317833663_H
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
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255371_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255371  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::05C64B887A4D766EEB5842345D6B609A0E3A91C9
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___05C64B887A4D766EEB5842345D6B609A0E3A91C9_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::148F346330E294B4157ED412259A7E7F373E26A8
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___148F346330E294B4157ED412259A7E7F373E26A8_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::1F867F0E96DB3A56943B8CB2662D1DA624023FCD
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___1F867F0E96DB3A56943B8CB2662D1DA624023FCD_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::3220DE2BE9769737429E0DE2C6D837CB7C5A02AD
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___3220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::356CE585046545CD2D0B109FF8A85DB88EE29074
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___356CE585046545CD2D0B109FF8A85DB88EE29074_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::4FEA2A6324C0192B29C90830F5D578051A4B1B16
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___4FEA2A6324C0192B29C90830F5D578051A4B1B16_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::598D9433A53523A59D462896B803E416AB0B1901
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___598D9433A53523A59D462896B803E416AB0B1901_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::6E6F169B075CACDE575F1FEA42B1376D31D5A7E5
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___6E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::7089F9820A6F9CC830909BCD1FAF2EF0A540F348
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___7089F9820A6F9CC830909BCD1FAF2EF0A540F348_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::9ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___9ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::D5DB24A984219B0001B4B86CDE1E0DF54572D83A
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::E11338F644FF140C0E23D8B7526DB4D2D73FC3F7
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14;

public:
	inline static int32_t get_offset_of_U305C64B887A4D766EEB5842345D6B609A0E3A91C9_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___05C64B887A4D766EEB5842345D6B609A0E3A91C9_0)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_U305C64B887A4D766EEB5842345D6B609A0E3A91C9_0() const { return ___05C64B887A4D766EEB5842345D6B609A0E3A91C9_0; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_U305C64B887A4D766EEB5842345D6B609A0E3A91C9_0() { return &___05C64B887A4D766EEB5842345D6B609A0E3A91C9_0; }
	inline void set_U305C64B887A4D766EEB5842345D6B609A0E3A91C9_0(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___05C64B887A4D766EEB5842345D6B609A0E3A91C9_0 = value;
	}

	inline static int32_t get_offset_of_U3148F346330E294B4157ED412259A7E7F373E26A8_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___148F346330E294B4157ED412259A7E7F373E26A8_1)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_U3148F346330E294B4157ED412259A7E7F373E26A8_1() const { return ___148F346330E294B4157ED412259A7E7F373E26A8_1; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_U3148F346330E294B4157ED412259A7E7F373E26A8_1() { return &___148F346330E294B4157ED412259A7E7F373E26A8_1; }
	inline void set_U3148F346330E294B4157ED412259A7E7F373E26A8_1(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___148F346330E294B4157ED412259A7E7F373E26A8_1 = value;
	}

	inline static int32_t get_offset_of_U31F867F0E96DB3A56943B8CB2662D1DA624023FCD_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___1F867F0E96DB3A56943B8CB2662D1DA624023FCD_2)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_U31F867F0E96DB3A56943B8CB2662D1DA624023FCD_2() const { return ___1F867F0E96DB3A56943B8CB2662D1DA624023FCD_2; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_U31F867F0E96DB3A56943B8CB2662D1DA624023FCD_2() { return &___1F867F0E96DB3A56943B8CB2662D1DA624023FCD_2; }
	inline void set_U31F867F0E96DB3A56943B8CB2662D1DA624023FCD_2(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___1F867F0E96DB3A56943B8CB2662D1DA624023FCD_2 = value;
	}

	inline static int32_t get_offset_of_U33220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___3220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_U33220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3() const { return ___3220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_U33220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3() { return &___3220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3; }
	inline void set_U33220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___3220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3 = value;
	}

	inline static int32_t get_offset_of_U3356CE585046545CD2D0B109FF8A85DB88EE29074_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___356CE585046545CD2D0B109FF8A85DB88EE29074_4)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_U3356CE585046545CD2D0B109FF8A85DB88EE29074_4() const { return ___356CE585046545CD2D0B109FF8A85DB88EE29074_4; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_U3356CE585046545CD2D0B109FF8A85DB88EE29074_4() { return &___356CE585046545CD2D0B109FF8A85DB88EE29074_4; }
	inline void set_U3356CE585046545CD2D0B109FF8A85DB88EE29074_4(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___356CE585046545CD2D0B109FF8A85DB88EE29074_4 = value;
	}

	inline static int32_t get_offset_of_U34FEA2A6324C0192B29C90830F5D578051A4B1B16_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___4FEA2A6324C0192B29C90830F5D578051A4B1B16_5)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_U34FEA2A6324C0192B29C90830F5D578051A4B1B16_5() const { return ___4FEA2A6324C0192B29C90830F5D578051A4B1B16_5; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_U34FEA2A6324C0192B29C90830F5D578051A4B1B16_5() { return &___4FEA2A6324C0192B29C90830F5D578051A4B1B16_5; }
	inline void set_U34FEA2A6324C0192B29C90830F5D578051A4B1B16_5(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___4FEA2A6324C0192B29C90830F5D578051A4B1B16_5 = value;
	}

	inline static int32_t get_offset_of_U3598D9433A53523A59D462896B803E416AB0B1901_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___598D9433A53523A59D462896B803E416AB0B1901_6)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_U3598D9433A53523A59D462896B803E416AB0B1901_6() const { return ___598D9433A53523A59D462896B803E416AB0B1901_6; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_U3598D9433A53523A59D462896B803E416AB0B1901_6() { return &___598D9433A53523A59D462896B803E416AB0B1901_6; }
	inline void set_U3598D9433A53523A59D462896B803E416AB0B1901_6(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___598D9433A53523A59D462896B803E416AB0B1901_6 = value;
	}

	inline static int32_t get_offset_of_U36E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___6E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_U36E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7() const { return ___6E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_U36E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7() { return &___6E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7; }
	inline void set_U36E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___6E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7 = value;
	}

	inline static int32_t get_offset_of_U37089F9820A6F9CC830909BCD1FAF2EF0A540F348_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___7089F9820A6F9CC830909BCD1FAF2EF0A540F348_8)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_U37089F9820A6F9CC830909BCD1FAF2EF0A540F348_8() const { return ___7089F9820A6F9CC830909BCD1FAF2EF0A540F348_8; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_U37089F9820A6F9CC830909BCD1FAF2EF0A540F348_8() { return &___7089F9820A6F9CC830909BCD1FAF2EF0A540F348_8; }
	inline void set_U37089F9820A6F9CC830909BCD1FAF2EF0A540F348_8(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___7089F9820A6F9CC830909BCD1FAF2EF0A540F348_8 = value;
	}

	inline static int32_t get_offset_of_U39ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___9ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_U39ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9() const { return ___9ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_U39ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9() { return &___9ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9; }
	inline void set_U39ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___9ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9 = value;
	}

	inline static int32_t get_offset_of_A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10() const { return ___A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10() { return &___A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10; }
	inline void set_A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10 = value;
	}

	inline static int32_t get_offset_of_B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11() const { return ___B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11() { return &___B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11; }
	inline void set_B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11 = value;
	}

	inline static int32_t get_offset_of_D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12() const { return ___D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12() { return &___D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12; }
	inline void set_D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12 = value;
	}

	inline static int32_t get_offset_of_E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13() const { return ___E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13() { return &___E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13; }
	inline void set_E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13 = value;
	}

	inline static int32_t get_offset_of_FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields, ___FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14() const { return ___FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14() { return &___FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14; }
	inline void set_FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255371_H
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
#ifndef CP861_T2877197398_H
#define CP861_T2877197398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP861
struct  CP861_t2877197398  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP861_t2877197398_StaticFields
{
public:
	// System.Char[] I18N.West.CP861::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP861_t2877197398_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP861_T2877197398_H
#ifndef CP863_T1714397984_H
#define CP863_T1714397984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP863
struct  CP863_t1714397984  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP863_t1714397984_StaticFields
{
public:
	// System.Char[] I18N.West.CP863::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP863_t1714397984_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP863_T1714397984_H
#ifndef CP865_T551598570_H
#define CP865_T551598570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP865
struct  CP865_t551598570  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP865_t551598570_StaticFields
{
public:
	// System.Char[] I18N.West.CP865::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP865_t551598570_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP865_T551598570_H
#ifndef ENCIBM861_T2247939372_H
#define ENCIBM861_T2247939372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCibm861
struct  ENCibm861_t2247939372  : public CP861_t2877197398
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM861_T2247939372_H
#ifndef ENCIBM863_T1085139958_H
#define ENCIBM863_T1085139958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCibm863
struct  ENCibm863_t1085139958  : public CP863_t1714397984
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM863_T1085139958_H
#ifndef ENCIBM865_T278570904_H
#define ENCIBM865_T278570904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCibm865
struct  ENCibm865_t278570904  : public CP865_t551598570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM865_T278570904_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3900 = { sizeof (CP861_t2877197398), -1, sizeof(CP861_t2877197398_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3900[1] = 
{
	CP861_t2877197398_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3901 = { sizeof (ENCibm861_t2247939372), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3902 = { sizeof (CP863_t1714397984), -1, sizeof(CP863_t1714397984_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3902[1] = 
{
	CP863_t1714397984_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3903 = { sizeof (ENCibm863_t1085139958), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3904 = { sizeof (CP865_t551598570), -1, sizeof(CP865_t551598570_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3904[1] = 
{
	CP865_t551598570_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3905 = { sizeof (ENCibm865_t278570904), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3906 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255371), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3906[15] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields::get_offset_of_U305C64B887A4D766EEB5842345D6B609A0E3A91C9_0(),
	U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields::get_offset_of_U3148F346330E294B4157ED412259A7E7F373E26A8_1(),
	U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields::get_offset_of_U31F867F0E96DB3A56943B8CB2662D1DA624023FCD_2(),
	U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields::get_offset_of_U33220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3(),
	U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields::get_offset_of_U3356CE585046545CD2D0B109FF8A85DB88EE29074_4(),
	U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields::get_offset_of_U34FEA2A6324C0192B29C90830F5D578051A4B1B16_5(),
	U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields::get_offset_of_U3598D9433A53523A59D462896B803E416AB0B1901_6(),
	U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields::get_offset_of_U36E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7(),
	U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields::get_offset_of_U37089F9820A6F9CC830909BCD1FAF2EF0A540F348_8(),
	U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields::get_offset_of_U39ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9(),
	U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields::get_offset_of_A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10(),
	U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields::get_offset_of_B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11(),
	U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields::get_offset_of_D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12(),
	U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields::get_offset_of_E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13(),
	U3CPrivateImplementationDetailsU3E_t3057255371_StaticFields::get_offset_of_FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3907 = { sizeof (__StaticArrayInitTypeSizeU3D512_t3317833663)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D512_t3317833663 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3908 = { sizeof (U3CModuleU3E_t692745560), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
