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

// System.Char[]
struct CharU5BU5D_t3528271667;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349;
// UnityEngine.Tilemaps.ITilemap
struct ITilemap_t3496540090;
// UnityEngine.Tilemaps.Tile
struct Tile_t1378929773;
// UnityEngine.Tilemaps.TileBase
struct TileBase_t3985733243;
// UnityEngine.Tilemaps.Tilemap
struct Tilemap_t1578933799;

extern RuntimeClass* ITilemap_t3496540090_il2cpp_TypeInfo_var;
extern RuntimeClass* Matrix4x4_t1817901843_il2cpp_TypeInfo_var;
extern const uint32_t ITilemap_CreateInstance_m2624613551_MetadataUsageId;
extern const uint32_t Tile__ctor_m646807577_MetadataUsageId;

struct SpriteU5BU5D_t2581906349;


#ifndef U3CMODULEU3E_T692745548_H
#define U3CMODULEU3E_T692745548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745548 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745548_H
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
#ifndef ITILEMAP_T3496540090_H
#define ITILEMAP_T3496540090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Tilemaps.ITilemap
struct  ITilemap_t3496540090  : public RuntimeObject
{
public:
	// UnityEngine.Tilemaps.Tilemap UnityEngine.Tilemaps.ITilemap::m_Tilemap
	Tilemap_t1578933799 * ___m_Tilemap_1;

public:
	inline static int32_t get_offset_of_m_Tilemap_1() { return static_cast<int32_t>(offsetof(ITilemap_t3496540090, ___m_Tilemap_1)); }
	inline Tilemap_t1578933799 * get_m_Tilemap_1() const { return ___m_Tilemap_1; }
	inline Tilemap_t1578933799 ** get_address_of_m_Tilemap_1() { return &___m_Tilemap_1; }
	inline void set_m_Tilemap_1(Tilemap_t1578933799 * value)
	{
		___m_Tilemap_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tilemap_1), value);
	}
};

struct ITilemap_t3496540090_StaticFields
{
public:
	// UnityEngine.Tilemaps.ITilemap UnityEngine.Tilemaps.ITilemap::s_Instance
	ITilemap_t3496540090 * ___s_Instance_0;

public:
	inline static int32_t get_offset_of_s_Instance_0() { return static_cast<int32_t>(offsetof(ITilemap_t3496540090_StaticFields, ___s_Instance_0)); }
	inline ITilemap_t3496540090 * get_s_Instance_0() const { return ___s_Instance_0; }
	inline ITilemap_t3496540090 ** get_address_of_s_Instance_0() { return &___s_Instance_0; }
	inline void set_s_Instance_0(ITilemap_t3496540090 * value)
	{
		___s_Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITILEMAP_T3496540090_H
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
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef TILEANIMATIONDATA_T649120048_H
#define TILEANIMATIONDATA_T649120048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Tilemaps.TileAnimationData
struct  TileAnimationData_t649120048 
{
public:
	// UnityEngine.Sprite[] UnityEngine.Tilemaps.TileAnimationData::m_AnimatedSprites
	SpriteU5BU5D_t2581906349* ___m_AnimatedSprites_0;
	// System.Single UnityEngine.Tilemaps.TileAnimationData::m_AnimationSpeed
	float ___m_AnimationSpeed_1;
	// System.Single UnityEngine.Tilemaps.TileAnimationData::m_AnimationStartTime
	float ___m_AnimationStartTime_2;

public:
	inline static int32_t get_offset_of_m_AnimatedSprites_0() { return static_cast<int32_t>(offsetof(TileAnimationData_t649120048, ___m_AnimatedSprites_0)); }
	inline SpriteU5BU5D_t2581906349* get_m_AnimatedSprites_0() const { return ___m_AnimatedSprites_0; }
	inline SpriteU5BU5D_t2581906349** get_address_of_m_AnimatedSprites_0() { return &___m_AnimatedSprites_0; }
	inline void set_m_AnimatedSprites_0(SpriteU5BU5D_t2581906349* value)
	{
		___m_AnimatedSprites_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimatedSprites_0), value);
	}

	inline static int32_t get_offset_of_m_AnimationSpeed_1() { return static_cast<int32_t>(offsetof(TileAnimationData_t649120048, ___m_AnimationSpeed_1)); }
	inline float get_m_AnimationSpeed_1() const { return ___m_AnimationSpeed_1; }
	inline float* get_address_of_m_AnimationSpeed_1() { return &___m_AnimationSpeed_1; }
	inline void set_m_AnimationSpeed_1(float value)
	{
		___m_AnimationSpeed_1 = value;
	}

	inline static int32_t get_offset_of_m_AnimationStartTime_2() { return static_cast<int32_t>(offsetof(TileAnimationData_t649120048, ___m_AnimationStartTime_2)); }
	inline float get_m_AnimationStartTime_2() const { return ___m_AnimationStartTime_2; }
	inline float* get_address_of_m_AnimationStartTime_2() { return &___m_AnimationStartTime_2; }
	inline void set_m_AnimationStartTime_2(float value)
	{
		___m_AnimationStartTime_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Tilemaps.TileAnimationData
struct TileAnimationData_t649120048_marshaled_pinvoke
{
	SpriteU5BU5D_t2581906349* ___m_AnimatedSprites_0;
	float ___m_AnimationSpeed_1;
	float ___m_AnimationStartTime_2;
};
// Native definition for COM marshalling of UnityEngine.Tilemaps.TileAnimationData
struct TileAnimationData_t649120048_marshaled_com
{
	SpriteU5BU5D_t2581906349* ___m_AnimatedSprites_0;
	float ___m_AnimationSpeed_1;
	float ___m_AnimationStartTime_2;
};
#endif // TILEANIMATIONDATA_T649120048_H
#ifndef VECTOR3INT_T741115188_H
#define VECTOR3INT_T741115188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3Int
struct  Vector3Int_t741115188 
{
public:
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector3Int_t741115188, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector3Int_t741115188, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}

	inline static int32_t get_offset_of_m_Z_2() { return static_cast<int32_t>(offsetof(Vector3Int_t741115188, ___m_Z_2)); }
	inline int32_t get_m_Z_2() const { return ___m_Z_2; }
	inline int32_t* get_address_of_m_Z_2() { return &___m_Z_2; }
	inline void set_m_Z_2(int32_t value)
	{
		___m_Z_2 = value;
	}
};

struct Vector3Int_t741115188_StaticFields
{
public:
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t741115188  ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t741115188  ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t741115188  ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t741115188  ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t741115188  ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t741115188  ___s_Right_8;

public:
	inline static int32_t get_offset_of_s_Zero_3() { return static_cast<int32_t>(offsetof(Vector3Int_t741115188_StaticFields, ___s_Zero_3)); }
	inline Vector3Int_t741115188  get_s_Zero_3() const { return ___s_Zero_3; }
	inline Vector3Int_t741115188 * get_address_of_s_Zero_3() { return &___s_Zero_3; }
	inline void set_s_Zero_3(Vector3Int_t741115188  value)
	{
		___s_Zero_3 = value;
	}

	inline static int32_t get_offset_of_s_One_4() { return static_cast<int32_t>(offsetof(Vector3Int_t741115188_StaticFields, ___s_One_4)); }
	inline Vector3Int_t741115188  get_s_One_4() const { return ___s_One_4; }
	inline Vector3Int_t741115188 * get_address_of_s_One_4() { return &___s_One_4; }
	inline void set_s_One_4(Vector3Int_t741115188  value)
	{
		___s_One_4 = value;
	}

	inline static int32_t get_offset_of_s_Up_5() { return static_cast<int32_t>(offsetof(Vector3Int_t741115188_StaticFields, ___s_Up_5)); }
	inline Vector3Int_t741115188  get_s_Up_5() const { return ___s_Up_5; }
	inline Vector3Int_t741115188 * get_address_of_s_Up_5() { return &___s_Up_5; }
	inline void set_s_Up_5(Vector3Int_t741115188  value)
	{
		___s_Up_5 = value;
	}

	inline static int32_t get_offset_of_s_Down_6() { return static_cast<int32_t>(offsetof(Vector3Int_t741115188_StaticFields, ___s_Down_6)); }
	inline Vector3Int_t741115188  get_s_Down_6() const { return ___s_Down_6; }
	inline Vector3Int_t741115188 * get_address_of_s_Down_6() { return &___s_Down_6; }
	inline void set_s_Down_6(Vector3Int_t741115188  value)
	{
		___s_Down_6 = value;
	}

	inline static int32_t get_offset_of_s_Left_7() { return static_cast<int32_t>(offsetof(Vector3Int_t741115188_StaticFields, ___s_Left_7)); }
	inline Vector3Int_t741115188  get_s_Left_7() const { return ___s_Left_7; }
	inline Vector3Int_t741115188 * get_address_of_s_Left_7() { return &___s_Left_7; }
	inline void set_s_Left_7(Vector3Int_t741115188  value)
	{
		___s_Left_7 = value;
	}

	inline static int32_t get_offset_of_s_Right_8() { return static_cast<int32_t>(offsetof(Vector3Int_t741115188_StaticFields, ___s_Right_8)); }
	inline Vector3Int_t741115188  get_s_Right_8() const { return ___s_Right_8; }
	inline Vector3Int_t741115188 * get_address_of_s_Right_8() { return &___s_Right_8; }
	inline void set_s_Right_8(Vector3Int_t741115188  value)
	{
		___s_Right_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3INT_T741115188_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef COLLIDERTYPE_T2056028780_H
#define COLLIDERTYPE_T2056028780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Tilemaps.Tile/ColliderType
struct  ColliderType_t2056028780 
{
public:
	// System.Int32 UnityEngine.Tilemaps.Tile/ColliderType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColliderType_t2056028780, ___value___2)); }
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
#endif // COLLIDERTYPE_T2056028780_H
#ifndef TILEFLAGS_T2429973456_H
#define TILEFLAGS_T2429973456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Tilemaps.TileFlags
struct  TileFlags_t2429973456 
{
public:
	// System.Int32 UnityEngine.Tilemaps.TileFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TileFlags_t2429973456, ___value___2)); }
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
#endif // TILEFLAGS_T2429973456_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef TILEDATA_T2042394239_H
#define TILEDATA_T2042394239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Tilemaps.TileData
struct  TileData_t2042394239 
{
public:
	// UnityEngine.Sprite UnityEngine.Tilemaps.TileData::m_Sprite
	Sprite_t280657092 * ___m_Sprite_0;
	// UnityEngine.Color UnityEngine.Tilemaps.TileData::m_Color
	Color_t2555686324  ___m_Color_1;
	// UnityEngine.Matrix4x4 UnityEngine.Tilemaps.TileData::m_Transform
	Matrix4x4_t1817901843  ___m_Transform_2;
	// UnityEngine.GameObject UnityEngine.Tilemaps.TileData::m_GameObject
	GameObject_t1113636619 * ___m_GameObject_3;
	// UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.TileData::m_Flags
	int32_t ___m_Flags_4;
	// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.TileData::m_ColliderType
	int32_t ___m_ColliderType_5;

public:
	inline static int32_t get_offset_of_m_Sprite_0() { return static_cast<int32_t>(offsetof(TileData_t2042394239, ___m_Sprite_0)); }
	inline Sprite_t280657092 * get_m_Sprite_0() const { return ___m_Sprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_0() { return &___m_Sprite_0; }
	inline void set_m_Sprite_0(Sprite_t280657092 * value)
	{
		___m_Sprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_0), value);
	}

	inline static int32_t get_offset_of_m_Color_1() { return static_cast<int32_t>(offsetof(TileData_t2042394239, ___m_Color_1)); }
	inline Color_t2555686324  get_m_Color_1() const { return ___m_Color_1; }
	inline Color_t2555686324 * get_address_of_m_Color_1() { return &___m_Color_1; }
	inline void set_m_Color_1(Color_t2555686324  value)
	{
		___m_Color_1 = value;
	}

	inline static int32_t get_offset_of_m_Transform_2() { return static_cast<int32_t>(offsetof(TileData_t2042394239, ___m_Transform_2)); }
	inline Matrix4x4_t1817901843  get_m_Transform_2() const { return ___m_Transform_2; }
	inline Matrix4x4_t1817901843 * get_address_of_m_Transform_2() { return &___m_Transform_2; }
	inline void set_m_Transform_2(Matrix4x4_t1817901843  value)
	{
		___m_Transform_2 = value;
	}

	inline static int32_t get_offset_of_m_GameObject_3() { return static_cast<int32_t>(offsetof(TileData_t2042394239, ___m_GameObject_3)); }
	inline GameObject_t1113636619 * get_m_GameObject_3() const { return ___m_GameObject_3; }
	inline GameObject_t1113636619 ** get_address_of_m_GameObject_3() { return &___m_GameObject_3; }
	inline void set_m_GameObject_3(GameObject_t1113636619 * value)
	{
		___m_GameObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_3), value);
	}

	inline static int32_t get_offset_of_m_Flags_4() { return static_cast<int32_t>(offsetof(TileData_t2042394239, ___m_Flags_4)); }
	inline int32_t get_m_Flags_4() const { return ___m_Flags_4; }
	inline int32_t* get_address_of_m_Flags_4() { return &___m_Flags_4; }
	inline void set_m_Flags_4(int32_t value)
	{
		___m_Flags_4 = value;
	}

	inline static int32_t get_offset_of_m_ColliderType_5() { return static_cast<int32_t>(offsetof(TileData_t2042394239, ___m_ColliderType_5)); }
	inline int32_t get_m_ColliderType_5() const { return ___m_ColliderType_5; }
	inline int32_t* get_address_of_m_ColliderType_5() { return &___m_ColliderType_5; }
	inline void set_m_ColliderType_5(int32_t value)
	{
		___m_ColliderType_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Tilemaps.TileData
struct TileData_t2042394239_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_Sprite_0;
	Color_t2555686324  ___m_Color_1;
	Matrix4x4_t1817901843  ___m_Transform_2;
	GameObject_t1113636619 * ___m_GameObject_3;
	int32_t ___m_Flags_4;
	int32_t ___m_ColliderType_5;
};
// Native definition for COM marshalling of UnityEngine.Tilemaps.TileData
struct TileData_t2042394239_marshaled_com
{
	Sprite_t280657092 * ___m_Sprite_0;
	Color_t2555686324  ___m_Color_1;
	Matrix4x4_t1817901843  ___m_Transform_2;
	GameObject_t1113636619 * ___m_GameObject_3;
	int32_t ___m_Flags_4;
	int32_t ___m_ColliderType_5;
};
#endif // TILEDATA_T2042394239_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef TILEBASE_T3985733243_H
#define TILEBASE_T3985733243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Tilemaps.TileBase
struct  TileBase_t3985733243  : public ScriptableObject_t2528358522
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILEBASE_T3985733243_H
#ifndef GRIDLAYOUT_T754322041_H
#define GRIDLAYOUT_T754322041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GridLayout
struct  GridLayout_t754322041  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRIDLAYOUT_T754322041_H
#ifndef TILE_T1378929773_H
#define TILE_T1378929773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Tilemaps.Tile
struct  Tile_t1378929773  : public TileBase_t3985733243
{
public:
	// UnityEngine.Sprite UnityEngine.Tilemaps.Tile::m_Sprite
	Sprite_t280657092 * ___m_Sprite_4;
	// UnityEngine.Color UnityEngine.Tilemaps.Tile::m_Color
	Color_t2555686324  ___m_Color_5;
	// UnityEngine.Matrix4x4 UnityEngine.Tilemaps.Tile::m_Transform
	Matrix4x4_t1817901843  ___m_Transform_6;
	// UnityEngine.GameObject UnityEngine.Tilemaps.Tile::m_InstancedGameObject
	GameObject_t1113636619 * ___m_InstancedGameObject_7;
	// UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.Tile::m_Flags
	int32_t ___m_Flags_8;
	// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.Tile::m_ColliderType
	int32_t ___m_ColliderType_9;

public:
	inline static int32_t get_offset_of_m_Sprite_4() { return static_cast<int32_t>(offsetof(Tile_t1378929773, ___m_Sprite_4)); }
	inline Sprite_t280657092 * get_m_Sprite_4() const { return ___m_Sprite_4; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_4() { return &___m_Sprite_4; }
	inline void set_m_Sprite_4(Sprite_t280657092 * value)
	{
		___m_Sprite_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Tile_t1378929773, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_Transform_6() { return static_cast<int32_t>(offsetof(Tile_t1378929773, ___m_Transform_6)); }
	inline Matrix4x4_t1817901843  get_m_Transform_6() const { return ___m_Transform_6; }
	inline Matrix4x4_t1817901843 * get_address_of_m_Transform_6() { return &___m_Transform_6; }
	inline void set_m_Transform_6(Matrix4x4_t1817901843  value)
	{
		___m_Transform_6 = value;
	}

	inline static int32_t get_offset_of_m_InstancedGameObject_7() { return static_cast<int32_t>(offsetof(Tile_t1378929773, ___m_InstancedGameObject_7)); }
	inline GameObject_t1113636619 * get_m_InstancedGameObject_7() const { return ___m_InstancedGameObject_7; }
	inline GameObject_t1113636619 ** get_address_of_m_InstancedGameObject_7() { return &___m_InstancedGameObject_7; }
	inline void set_m_InstancedGameObject_7(GameObject_t1113636619 * value)
	{
		___m_InstancedGameObject_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_InstancedGameObject_7), value);
	}

	inline static int32_t get_offset_of_m_Flags_8() { return static_cast<int32_t>(offsetof(Tile_t1378929773, ___m_Flags_8)); }
	inline int32_t get_m_Flags_8() const { return ___m_Flags_8; }
	inline int32_t* get_address_of_m_Flags_8() { return &___m_Flags_8; }
	inline void set_m_Flags_8(int32_t value)
	{
		___m_Flags_8 = value;
	}

	inline static int32_t get_offset_of_m_ColliderType_9() { return static_cast<int32_t>(offsetof(Tile_t1378929773, ___m_ColliderType_9)); }
	inline int32_t get_m_ColliderType_9() const { return ___m_ColliderType_9; }
	inline int32_t* get_address_of_m_ColliderType_9() { return &___m_ColliderType_9; }
	inline void set_m_ColliderType_9(int32_t value)
	{
		___m_ColliderType_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILE_T1378929773_H
#ifndef TILEMAP_T1578933799_H
#define TILEMAP_T1578933799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Tilemaps.Tilemap
struct  Tilemap_t1578933799  : public GridLayout_t754322041
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILEMAP_T1578933799_H
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t280657092 * m_Items[1];

public:
	inline Sprite_t280657092 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t280657092 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t280657092 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Sprite_t280657092 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t280657092 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t280657092 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile(UnityEngine.Vector3Int)
extern "C" IL2CPP_METHOD_ATTR void Tilemap_RefreshTile_m1116399155 (Tilemap_t1578933799 * __this, Vector3Int_t741115188  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Tilemaps.ITilemap::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ITilemap__ctor_m1535076762 (ITilemap_t3496540090 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  Matrix4x4_get_identity_m1406790249 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Tilemaps.TileBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TileBase__ctor_m587868030 (TileBase_t3985733243 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Tilemaps.TileData::set_sprite(UnityEngine.Sprite)
extern "C" IL2CPP_METHOD_ATTR void TileData_set_sprite_m2765088979 (TileData_t2042394239 * __this, Sprite_t280657092 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Tilemaps.TileData::set_color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void TileData_set_color_m2031655830 (TileData_t2042394239 * __this, Color_t2555686324  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Tilemaps.TileData::set_transform(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR void TileData_set_transform_m1036780625 (TileData_t2042394239 * __this, Matrix4x4_t1817901843  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Tilemaps.TileData::set_gameObject(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void TileData_set_gameObject_m4268609905 (TileData_t2042394239 * __this, GameObject_t1113636619 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Tilemaps.TileData::set_flags(UnityEngine.Tilemaps.TileFlags)
extern "C" IL2CPP_METHOD_ATTR void TileData_set_flags_m4161876872 (TileData_t2042394239 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Tilemaps.TileData::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType)
extern "C" IL2CPP_METHOD_ATTR void TileData_set_colliderType_m1558905503 (TileData_t2042394239 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m1310743131 (ScriptableObject_t2528358522 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Tilemaps.ITilemap::RefreshTile(UnityEngine.Vector3Int)
extern "C" IL2CPP_METHOD_ATTR void ITilemap_RefreshTile_m959177989 (ITilemap_t3496540090 * __this, Vector3Int_t741115188  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile_Injected(UnityEngine.Vector3Int&)
extern "C" IL2CPP_METHOD_ATTR void Tilemap_RefreshTile_Injected_m3594480345 (Tilemap_t1578933799 * __this, Vector3Int_t741115188 * ___position0, const RuntimeMethod* method);
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
// System.Void UnityEngine.Tilemaps.ITilemap::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ITilemap__ctor_m1535076762 (ITilemap_t3496540090 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.ITilemap::RefreshTile(UnityEngine.Vector3Int)
extern "C" IL2CPP_METHOD_ATTR void ITilemap_RefreshTile_m959177989 (ITilemap_t3496540090 * __this, Vector3Int_t741115188  ___position0, const RuntimeMethod* method)
{
	{
		Tilemap_t1578933799 * L_0 = __this->get_m_Tilemap_1();
		Vector3Int_t741115188  L_1 = ___position0;
		NullCheck(L_0);
		Tilemap_RefreshTile_m1116399155(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Tilemaps.ITilemap UnityEngine.Tilemaps.ITilemap::CreateInstance()
extern "C" IL2CPP_METHOD_ATTR ITilemap_t3496540090 * ITilemap_CreateInstance_m2624613551 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ITilemap_CreateInstance_m2624613551_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ITilemap_t3496540090 * V_0 = NULL;
	{
		ITilemap_t3496540090 * L_0 = (ITilemap_t3496540090 *)il2cpp_codegen_object_new(ITilemap_t3496540090_il2cpp_TypeInfo_var);
		ITilemap__ctor_m1535076762(L_0, /*hidden argument*/NULL);
		((ITilemap_t3496540090_StaticFields*)il2cpp_codegen_static_fields_for(ITilemap_t3496540090_il2cpp_TypeInfo_var))->set_s_Instance_0(L_0);
		ITilemap_t3496540090 * L_1 = ((ITilemap_t3496540090_StaticFields*)il2cpp_codegen_static_fields_for(ITilemap_t3496540090_il2cpp_TypeInfo_var))->get_s_Instance_0();
		V_0 = L_1;
		goto IL_0016;
	}

IL_0016:
	{
		ITilemap_t3496540090 * L_2 = V_0;
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
// System.Void UnityEngine.Tilemaps.Tile::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Tile__ctor_m646807577 (Tile_t1378929773 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tile__ctor_m646807577_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color_t2555686324  L_0 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Color_5(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t1817901843_il2cpp_TypeInfo_var);
		Matrix4x4_t1817901843  L_1 = Matrix4x4_get_identity_m1406790249(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Transform_6(L_1);
		__this->set_m_Flags_8(1);
		__this->set_m_ColliderType_9(1);
		TileBase__ctor_m587868030(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tile::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&)
extern "C" IL2CPP_METHOD_ATTR void Tile_GetTileData_m1811823766 (Tile_t1378929773 * __this, Vector3Int_t741115188  ___position0, ITilemap_t3496540090 * ___tilemap1, TileData_t2042394239 * ___tileData2, const RuntimeMethod* method)
{
	{
		TileData_t2042394239 * L_0 = ___tileData2;
		Sprite_t280657092 * L_1 = __this->get_m_Sprite_4();
		TileData_set_sprite_m2765088979((TileData_t2042394239 *)L_0, L_1, /*hidden argument*/NULL);
		TileData_t2042394239 * L_2 = ___tileData2;
		Color_t2555686324  L_3 = __this->get_m_Color_5();
		TileData_set_color_m2031655830((TileData_t2042394239 *)L_2, L_3, /*hidden argument*/NULL);
		TileData_t2042394239 * L_4 = ___tileData2;
		Matrix4x4_t1817901843  L_5 = __this->get_m_Transform_6();
		TileData_set_transform_m1036780625((TileData_t2042394239 *)L_4, L_5, /*hidden argument*/NULL);
		TileData_t2042394239 * L_6 = ___tileData2;
		GameObject_t1113636619 * L_7 = __this->get_m_InstancedGameObject_7();
		TileData_set_gameObject_m4268609905((TileData_t2042394239 *)L_6, L_7, /*hidden argument*/NULL);
		TileData_t2042394239 * L_8 = ___tileData2;
		int32_t L_9 = __this->get_m_Flags_8();
		TileData_set_flags_m4161876872((TileData_t2042394239 *)L_8, L_9, /*hidden argument*/NULL);
		TileData_t2042394239 * L_10 = ___tileData2;
		int32_t L_11 = __this->get_m_ColliderType_9();
		TileData_set_colliderType_m1558905503((TileData_t2042394239 *)L_10, L_11, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.Tilemaps.TileAnimationData
extern "C" void TileAnimationData_t649120048_marshal_pinvoke(const TileAnimationData_t649120048& unmarshaled, TileAnimationData_t649120048_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_AnimatedSprites_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_AnimatedSprites' of type 'TileAnimationData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_AnimatedSprites_0Exception, NULL, NULL);
}
extern "C" void TileAnimationData_t649120048_marshal_pinvoke_back(const TileAnimationData_t649120048_marshaled_pinvoke& marshaled, TileAnimationData_t649120048& unmarshaled)
{
	Exception_t* ___m_AnimatedSprites_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_AnimatedSprites' of type 'TileAnimationData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_AnimatedSprites_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Tilemaps.TileAnimationData
extern "C" void TileAnimationData_t649120048_marshal_pinvoke_cleanup(TileAnimationData_t649120048_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Tilemaps.TileAnimationData
extern "C" void TileAnimationData_t649120048_marshal_com(const TileAnimationData_t649120048& unmarshaled, TileAnimationData_t649120048_marshaled_com& marshaled)
{
	Exception_t* ___m_AnimatedSprites_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_AnimatedSprites' of type 'TileAnimationData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_AnimatedSprites_0Exception, NULL, NULL);
}
extern "C" void TileAnimationData_t649120048_marshal_com_back(const TileAnimationData_t649120048_marshaled_com& marshaled, TileAnimationData_t649120048& unmarshaled)
{
	Exception_t* ___m_AnimatedSprites_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_AnimatedSprites' of type 'TileAnimationData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_AnimatedSprites_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Tilemaps.TileAnimationData
extern "C" void TileAnimationData_t649120048_marshal_com_cleanup(TileAnimationData_t649120048_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Tilemaps.TileBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TileBase__ctor_m587868030 (TileBase_t3985733243 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m1310743131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.TileBase::RefreshTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap)
extern "C" IL2CPP_METHOD_ATTR void TileBase_RefreshTile_m2649746093 (TileBase_t3985733243 * __this, Vector3Int_t741115188  ___position0, ITilemap_t3496540090 * ___tilemap1, const RuntimeMethod* method)
{
	{
		ITilemap_t3496540090 * L_0 = ___tilemap1;
		Vector3Int_t741115188  L_1 = ___position0;
		NullCheck(L_0);
		ITilemap_RefreshTile_m959177989(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&)
extern "C" IL2CPP_METHOD_ATTR void TileBase_GetTileData_m1994442890 (TileBase_t3985733243 * __this, Vector3Int_t741115188  ___position0, ITilemap_t3496540090 * ___tilemap1, TileData_t2042394239 * ___tileData2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UnityEngine.Tilemaps.TileData UnityEngine.Tilemaps.TileBase::GetTileDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap)
extern "C" IL2CPP_METHOD_ATTR TileData_t2042394239  TileBase_GetTileDataNoRef_m2520915147 (TileBase_t3985733243 * __this, Vector3Int_t741115188  ___position0, ITilemap_t3496540090 * ___tilemap1, const RuntimeMethod* method)
{
	TileData_t2042394239  V_0;
	memset(&V_0, 0, sizeof(V_0));
	TileData_t2042394239  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TileData_t2042394239 ));
		Vector3Int_t741115188  L_0 = ___position0;
		ITilemap_t3496540090 * L_1 = ___tilemap1;
		VirtActionInvoker3< Vector3Int_t741115188 , ITilemap_t3496540090 *, TileData_t2042394239 * >::Invoke(5 /* System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */, __this, L_0, L_1, (TileData_t2042394239 *)(&V_0));
		TileData_t2042394239  L_2 = V_0;
		V_1 = L_2;
		goto IL_001a;
	}

IL_001a:
	{
		TileData_t2042394239  L_3 = V_1;
		return L_3;
	}
}
// System.Boolean UnityEngine.Tilemaps.TileBase::GetTileAnimationData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileAnimationData&)
extern "C" IL2CPP_METHOD_ATTR bool TileBase_GetTileAnimationData_m904755430 (TileBase_t3985733243 * __this, Vector3Int_t741115188  ___position0, ITilemap_t3496540090 * ___tilemap1, TileAnimationData_t649120048 * ___tileAnimationData2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Tilemaps.TileAnimationData UnityEngine.Tilemaps.TileBase::GetTileAnimationDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap)
extern "C" IL2CPP_METHOD_ATTR TileAnimationData_t649120048  TileBase_GetTileAnimationDataNoRef_m3492923159 (TileBase_t3985733243 * __this, Vector3Int_t741115188  ___position0, ITilemap_t3496540090 * ___tilemap1, const RuntimeMethod* method)
{
	TileAnimationData_t649120048  V_0;
	memset(&V_0, 0, sizeof(V_0));
	TileAnimationData_t649120048  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TileAnimationData_t649120048 ));
		Vector3Int_t741115188  L_0 = ___position0;
		ITilemap_t3496540090 * L_1 = ___tilemap1;
		VirtFuncInvoker3< bool, Vector3Int_t741115188 , ITilemap_t3496540090 *, TileAnimationData_t649120048 * >::Invoke(6 /* System.Boolean UnityEngine.Tilemaps.TileBase::GetTileAnimationData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileAnimationData&) */, __this, L_0, L_1, (TileAnimationData_t649120048 *)(&V_0));
		TileAnimationData_t649120048  L_2 = V_0;
		V_1 = L_2;
		goto IL_001b;
	}

IL_001b:
	{
		TileAnimationData_t649120048  L_3 = V_1;
		return L_3;
	}
}
// System.Boolean UnityEngine.Tilemaps.TileBase::StartUp(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR bool TileBase_StartUp_m4197002915 (TileBase_t3985733243 * __this, Vector3Int_t741115188  ___position0, ITilemap_t3496540090 * ___tilemap1, GameObject_t1113636619 * ___go2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
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
// Conversion methods for marshalling of: UnityEngine.Tilemaps.TileData
extern "C" void TileData_t2042394239_marshal_pinvoke(const TileData_t2042394239& unmarshaled, TileData_t2042394239_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Sprite_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Sprite' of type 'TileData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Sprite_0Exception, NULL, NULL);
}
extern "C" void TileData_t2042394239_marshal_pinvoke_back(const TileData_t2042394239_marshaled_pinvoke& marshaled, TileData_t2042394239& unmarshaled)
{
	Exception_t* ___m_Sprite_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Sprite' of type 'TileData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Sprite_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Tilemaps.TileData
extern "C" void TileData_t2042394239_marshal_pinvoke_cleanup(TileData_t2042394239_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Tilemaps.TileData
extern "C" void TileData_t2042394239_marshal_com(const TileData_t2042394239& unmarshaled, TileData_t2042394239_marshaled_com& marshaled)
{
	Exception_t* ___m_Sprite_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Sprite' of type 'TileData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Sprite_0Exception, NULL, NULL);
}
extern "C" void TileData_t2042394239_marshal_com_back(const TileData_t2042394239_marshaled_com& marshaled, TileData_t2042394239& unmarshaled)
{
	Exception_t* ___m_Sprite_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Sprite' of type 'TileData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Sprite_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Tilemaps.TileData
extern "C" void TileData_t2042394239_marshal_com_cleanup(TileData_t2042394239_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Tilemaps.TileData::set_sprite(UnityEngine.Sprite)
extern "C" IL2CPP_METHOD_ATTR void TileData_set_sprite_m2765088979 (TileData_t2042394239 * __this, Sprite_t280657092 * ___value0, const RuntimeMethod* method)
{
	{
		Sprite_t280657092 * L_0 = ___value0;
		__this->set_m_Sprite_0(L_0);
		return;
	}
}
extern "C"  void TileData_set_sprite_m2765088979_AdjustorThunk (RuntimeObject * __this, Sprite_t280657092 * ___value0, const RuntimeMethod* method)
{
	TileData_t2042394239 * _thisAdjusted = reinterpret_cast<TileData_t2042394239 *>(__this + 1);
	TileData_set_sprite_m2765088979(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Tilemaps.TileData::set_color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void TileData_set_color_m2031655830 (TileData_t2042394239 * __this, Color_t2555686324  ___value0, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = ___value0;
		__this->set_m_Color_1(L_0);
		return;
	}
}
extern "C"  void TileData_set_color_m2031655830_AdjustorThunk (RuntimeObject * __this, Color_t2555686324  ___value0, const RuntimeMethod* method)
{
	TileData_t2042394239 * _thisAdjusted = reinterpret_cast<TileData_t2042394239 *>(__this + 1);
	TileData_set_color_m2031655830(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Tilemaps.TileData::set_transform(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR void TileData_set_transform_m1036780625 (TileData_t2042394239 * __this, Matrix4x4_t1817901843  ___value0, const RuntimeMethod* method)
{
	{
		Matrix4x4_t1817901843  L_0 = ___value0;
		__this->set_m_Transform_2(L_0);
		return;
	}
}
extern "C"  void TileData_set_transform_m1036780625_AdjustorThunk (RuntimeObject * __this, Matrix4x4_t1817901843  ___value0, const RuntimeMethod* method)
{
	TileData_t2042394239 * _thisAdjusted = reinterpret_cast<TileData_t2042394239 *>(__this + 1);
	TileData_set_transform_m1036780625(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Tilemaps.TileData::set_gameObject(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void TileData_set_gameObject_m4268609905 (TileData_t2042394239 * __this, GameObject_t1113636619 * ___value0, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = ___value0;
		__this->set_m_GameObject_3(L_0);
		return;
	}
}
extern "C"  void TileData_set_gameObject_m4268609905_AdjustorThunk (RuntimeObject * __this, GameObject_t1113636619 * ___value0, const RuntimeMethod* method)
{
	TileData_t2042394239 * _thisAdjusted = reinterpret_cast<TileData_t2042394239 *>(__this + 1);
	TileData_set_gameObject_m4268609905(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Tilemaps.TileData::set_flags(UnityEngine.Tilemaps.TileFlags)
extern "C" IL2CPP_METHOD_ATTR void TileData_set_flags_m4161876872 (TileData_t2042394239 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Flags_4(L_0);
		return;
	}
}
extern "C"  void TileData_set_flags_m4161876872_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	TileData_t2042394239 * _thisAdjusted = reinterpret_cast<TileData_t2042394239 *>(__this + 1);
	TileData_set_flags_m4161876872(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Tilemaps.TileData::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType)
extern "C" IL2CPP_METHOD_ATTR void TileData_set_colliderType_m1558905503 (TileData_t2042394239 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_ColliderType_5(L_0);
		return;
	}
}
extern "C"  void TileData_set_colliderType_m1558905503_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	TileData_t2042394239 * _thisAdjusted = reinterpret_cast<TileData_t2042394239 *>(__this + 1);
	TileData_set_colliderType_m1558905503(_thisAdjusted, ___value0, method);
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
// System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile(UnityEngine.Vector3Int)
extern "C" IL2CPP_METHOD_ATTR void Tilemap_RefreshTile_m1116399155 (Tilemap_t1578933799 * __this, Vector3Int_t741115188  ___position0, const RuntimeMethod* method)
{
	{
		Tilemap_RefreshTile_Injected_m3594480345(__this, (Vector3Int_t741115188 *)(&___position0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile_Injected(UnityEngine.Vector3Int&)
extern "C" IL2CPP_METHOD_ATTR void Tilemap_RefreshTile_Injected_m3594480345 (Tilemap_t1578933799 * __this, Vector3Int_t741115188 * ___position0, const RuntimeMethod* method)
{
	typedef void (*Tilemap_RefreshTile_Injected_m3594480345_ftn) (Tilemap_t1578933799 *, Vector3Int_t741115188 *);
	static Tilemap_RefreshTile_Injected_m3594480345_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_RefreshTile_Injected_m3594480345_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::RefreshTile_Injected(UnityEngine.Vector3Int&)");
	_il2cpp_icall_func(__this, ___position0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
