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


// Mono.Math.BigInteger
struct BigInteger_t2902905089;
// Mono.Security.ASN1
struct ASN1_t2114160832;
// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t3828027274;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t3064139577;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t489243024;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1542168549;
// Mono.Security.X509.X509Chain
struct X509Chain_t863783600;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,System.AppContext/SwitchValueState>
struct Dictionary_2_t2590507766;
// System.Collections.Generic.Dictionary`2<System.String,System.LocalDataStoreSlot>
struct Dictionary_2_t526098267;
// System.Collections.Generic.List`1<System.LocalDataStore>
struct List_1_t560690073;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t2649313536;
// System.ConsoleCancelEventArgs
struct ConsoleCancelEventArgs_t3423053037;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.EventArgs
struct EventArgs_t3591816995;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.FileStream
struct FileStream_t4292183065;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.LocalDataStore
struct LocalDataStore_t3383582627;
// System.LocalDataStoreElement[]
struct LocalDataStoreElementU5BU5D_t1026346256;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t1707895399;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.RuntimeType
struct RuntimeType_t3636489352;
// System.RuntimeType[]
struct RuntimeTypeU5BU5D_t236644441;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t4254223087;
// System.String
struct String_t;
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
#ifndef BIGINTEGER_T2902905089_H
#define BIGINTEGER_T2902905089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger
struct  BigInteger_t2902905089  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t2770800703* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_t2902905089, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t2902905089, ___data_1)); }
	inline UInt32U5BU5D_t2770800703* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_t2770800703** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_t2770800703* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

struct BigInteger_t2902905089_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t2770800703* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t386037858 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_t2902905089_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_t2770800703* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_t2770800703** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_t2770800703* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier((&___smallPrimes_2), value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_t2902905089_StaticFields, ___rng_3)); }
	inline RandomNumberGenerator_t386037858 * get_rng_3() const { return ___rng_3; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_rng_3() { return &___rng_3; }
	inline void set_rng_3(RandomNumberGenerator_t386037858 * value)
	{
		___rng_3 = value;
		Il2CppCodeGenWriteBarrier((&___rng_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGINTEGER_T2902905089_H
#ifndef KERNEL_T1402667219_H
#define KERNEL_T1402667219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Kernel
struct  Kernel_t1402667219  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KERNEL_T1402667219_H
#ifndef MODULUSRING_T596511504_H
#define MODULUSRING_T596511504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/ModulusRing
struct  ModulusRing_t596511504  : public RuntimeObject
{
public:
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::mod
	BigInteger_t2902905089 * ___mod_0;
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::constant
	BigInteger_t2902905089 * ___constant_1;

public:
	inline static int32_t get_offset_of_mod_0() { return static_cast<int32_t>(offsetof(ModulusRing_t596511504, ___mod_0)); }
	inline BigInteger_t2902905089 * get_mod_0() const { return ___mod_0; }
	inline BigInteger_t2902905089 ** get_address_of_mod_0() { return &___mod_0; }
	inline void set_mod_0(BigInteger_t2902905089 * value)
	{
		___mod_0 = value;
		Il2CppCodeGenWriteBarrier((&___mod_0), value);
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(ModulusRing_t596511504, ___constant_1)); }
	inline BigInteger_t2902905089 * get_constant_1() const { return ___constant_1; }
	inline BigInteger_t2902905089 ** get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(BigInteger_t2902905089 * value)
	{
		___constant_1 = value;
		Il2CppCodeGenWriteBarrier((&___constant_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULUSRING_T596511504_H
#ifndef PRIMEGENERATORBASE_T446028866_H
#define PRIMEGENERATORBASE_T446028866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct  PrimeGeneratorBase_t446028866  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMEGENERATORBASE_T446028866_H
#ifndef PRIMALITYTESTS_T1538473975_H
#define PRIMALITYTESTS_T1538473975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTests
struct  PrimalityTests_t1538473975  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTESTS_T1538473975_H
#ifndef AUTHENTICODEBASE_T263562949_H
#define AUTHENTICODEBASE_T263562949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Authenticode.AuthenticodeBase
struct  AuthenticodeBase_t263562949  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::fileblock
	ByteU5BU5D_t4116647657* ___fileblock_0;
	// System.IO.FileStream Mono.Security.Authenticode.AuthenticodeBase::fs
	FileStream_t4292183065 * ___fs_1;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::blockNo
	int32_t ___blockNo_2;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::blockLength
	int32_t ___blockLength_3;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::peOffset
	int32_t ___peOffset_4;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::dirSecurityOffset
	int32_t ___dirSecurityOffset_5;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::dirSecuritySize
	int32_t ___dirSecuritySize_6;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::coffSymbolTableOffset
	int32_t ___coffSymbolTableOffset_7;

public:
	inline static int32_t get_offset_of_fileblock_0() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t263562949, ___fileblock_0)); }
	inline ByteU5BU5D_t4116647657* get_fileblock_0() const { return ___fileblock_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_fileblock_0() { return &___fileblock_0; }
	inline void set_fileblock_0(ByteU5BU5D_t4116647657* value)
	{
		___fileblock_0 = value;
		Il2CppCodeGenWriteBarrier((&___fileblock_0), value);
	}

	inline static int32_t get_offset_of_fs_1() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t263562949, ___fs_1)); }
	inline FileStream_t4292183065 * get_fs_1() const { return ___fs_1; }
	inline FileStream_t4292183065 ** get_address_of_fs_1() { return &___fs_1; }
	inline void set_fs_1(FileStream_t4292183065 * value)
	{
		___fs_1 = value;
		Il2CppCodeGenWriteBarrier((&___fs_1), value);
	}

	inline static int32_t get_offset_of_blockNo_2() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t263562949, ___blockNo_2)); }
	inline int32_t get_blockNo_2() const { return ___blockNo_2; }
	inline int32_t* get_address_of_blockNo_2() { return &___blockNo_2; }
	inline void set_blockNo_2(int32_t value)
	{
		___blockNo_2 = value;
	}

	inline static int32_t get_offset_of_blockLength_3() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t263562949, ___blockLength_3)); }
	inline int32_t get_blockLength_3() const { return ___blockLength_3; }
	inline int32_t* get_address_of_blockLength_3() { return &___blockLength_3; }
	inline void set_blockLength_3(int32_t value)
	{
		___blockLength_3 = value;
	}

	inline static int32_t get_offset_of_peOffset_4() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t263562949, ___peOffset_4)); }
	inline int32_t get_peOffset_4() const { return ___peOffset_4; }
	inline int32_t* get_address_of_peOffset_4() { return &___peOffset_4; }
	inline void set_peOffset_4(int32_t value)
	{
		___peOffset_4 = value;
	}

	inline static int32_t get_offset_of_dirSecurityOffset_5() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t263562949, ___dirSecurityOffset_5)); }
	inline int32_t get_dirSecurityOffset_5() const { return ___dirSecurityOffset_5; }
	inline int32_t* get_address_of_dirSecurityOffset_5() { return &___dirSecurityOffset_5; }
	inline void set_dirSecurityOffset_5(int32_t value)
	{
		___dirSecurityOffset_5 = value;
	}

	inline static int32_t get_offset_of_dirSecuritySize_6() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t263562949, ___dirSecuritySize_6)); }
	inline int32_t get_dirSecuritySize_6() const { return ___dirSecuritySize_6; }
	inline int32_t* get_address_of_dirSecuritySize_6() { return &___dirSecuritySize_6; }
	inline void set_dirSecuritySize_6(int32_t value)
	{
		___dirSecuritySize_6 = value;
	}

	inline static int32_t get_offset_of_coffSymbolTableOffset_7() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t263562949, ___coffSymbolTableOffset_7)); }
	inline int32_t get_coffSymbolTableOffset_7() const { return ___coffSymbolTableOffset_7; }
	inline int32_t* get_address_of_coffSymbolTableOffset_7() { return &___coffSymbolTableOffset_7; }
	inline void set_coffSymbolTableOffset_7(int32_t value)
	{
		___coffSymbolTableOffset_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICODEBASE_T263562949_H
#ifndef ENCRYPTEDPRIVATEKEYINFO_T862116835_H
#define ENCRYPTEDPRIVATEKEYINFO_T862116835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct  EncryptedPrivateKeyInfo_t862116835  : public RuntimeObject
{
public:
	// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_algorithm
	String_t* ____algorithm_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_salt
	ByteU5BU5D_t4116647657* ____salt_1;
	// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_iterations
	int32_t ____iterations_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_data
	ByteU5BU5D_t4116647657* ____data_3;

public:
	inline static int32_t get_offset_of__algorithm_0() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t862116835, ____algorithm_0)); }
	inline String_t* get__algorithm_0() const { return ____algorithm_0; }
	inline String_t** get_address_of__algorithm_0() { return &____algorithm_0; }
	inline void set__algorithm_0(String_t* value)
	{
		____algorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_0), value);
	}

	inline static int32_t get_offset_of__salt_1() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t862116835, ____salt_1)); }
	inline ByteU5BU5D_t4116647657* get__salt_1() const { return ____salt_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__salt_1() { return &____salt_1; }
	inline void set__salt_1(ByteU5BU5D_t4116647657* value)
	{
		____salt_1 = value;
		Il2CppCodeGenWriteBarrier((&____salt_1), value);
	}

	inline static int32_t get_offset_of__iterations_2() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t862116835, ____iterations_2)); }
	inline int32_t get__iterations_2() const { return ____iterations_2; }
	inline int32_t* get_address_of__iterations_2() { return &____iterations_2; }
	inline void set__iterations_2(int32_t value)
	{
		____iterations_2 = value;
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t862116835, ____data_3)); }
	inline ByteU5BU5D_t4116647657* get__data_3() const { return ____data_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(ByteU5BU5D_t4116647657* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDPRIVATEKEYINFO_T862116835_H
#ifndef ACTIVATOR_T1841325713_H
#define ACTIVATOR_T1841325713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Activator
struct  Activator_t1841325713  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATOR_T1841325713_H
#ifndef APPCONTEXTSWITCHES_T4163756012_H
#define APPCONTEXTSWITCHES_T4163756012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppContextSwitches
struct  AppContextSwitches_t4163756012  : public RuntimeObject
{
public:

public:
};

struct AppContextSwitches_t4163756012_StaticFields
{
public:
	// System.Int32 System.AppContextSwitches::_noAsyncCurrentCulture
	int32_t ____noAsyncCurrentCulture_0;
	// System.Int32 System.AppContextSwitches::_throwExceptionIfDisposedCancellationTokenSource
	int32_t ____throwExceptionIfDisposedCancellationTokenSource_1;
	// System.Boolean System.AppContextSwitches::<DisableCaching>k__BackingField
	bool ___U3CDisableCachingU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of__noAsyncCurrentCulture_0() { return static_cast<int32_t>(offsetof(AppContextSwitches_t4163756012_StaticFields, ____noAsyncCurrentCulture_0)); }
	inline int32_t get__noAsyncCurrentCulture_0() const { return ____noAsyncCurrentCulture_0; }
	inline int32_t* get_address_of__noAsyncCurrentCulture_0() { return &____noAsyncCurrentCulture_0; }
	inline void set__noAsyncCurrentCulture_0(int32_t value)
	{
		____noAsyncCurrentCulture_0 = value;
	}

	inline static int32_t get_offset_of__throwExceptionIfDisposedCancellationTokenSource_1() { return static_cast<int32_t>(offsetof(AppContextSwitches_t4163756012_StaticFields, ____throwExceptionIfDisposedCancellationTokenSource_1)); }
	inline int32_t get__throwExceptionIfDisposedCancellationTokenSource_1() const { return ____throwExceptionIfDisposedCancellationTokenSource_1; }
	inline int32_t* get_address_of__throwExceptionIfDisposedCancellationTokenSource_1() { return &____throwExceptionIfDisposedCancellationTokenSource_1; }
	inline void set__throwExceptionIfDisposedCancellationTokenSource_1(int32_t value)
	{
		____throwExceptionIfDisposedCancellationTokenSource_1 = value;
	}

	inline static int32_t get_offset_of_U3CDisableCachingU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AppContextSwitches_t4163756012_StaticFields, ___U3CDisableCachingU3Ek__BackingField_2)); }
	inline bool get_U3CDisableCachingU3Ek__BackingField_2() const { return ___U3CDisableCachingU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CDisableCachingU3Ek__BackingField_2() { return &___U3CDisableCachingU3Ek__BackingField_2; }
	inline void set_U3CDisableCachingU3Ek__BackingField_2(bool value)
	{
		___U3CDisableCachingU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPCONTEXTSWITCHES_T4163756012_H
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
#ifndef ARRAYENUMERATOR_T572707261_H
#define ARRAYENUMERATOR_T572707261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array/ArrayEnumerator
struct  ArrayEnumerator_t572707261  : public RuntimeObject
{
public:
	// System.Array System.Array/ArrayEnumerator::_array
	RuntimeArray * ____array_0;
	// System.Int32 System.Array/ArrayEnumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Array/ArrayEnumerator::_endIndex
	int32_t ____endIndex_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArrayEnumerator_t572707261, ____array_0)); }
	inline RuntimeArray * get__array_0() const { return ____array_0; }
	inline RuntimeArray ** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(RuntimeArray * value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(ArrayEnumerator_t572707261, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__endIndex_2() { return static_cast<int32_t>(offsetof(ArrayEnumerator_t572707261, ____endIndex_2)); }
	inline int32_t get__endIndex_2() const { return ____endIndex_2; }
	inline int32_t* get_address_of__endIndex_2() { return &____endIndex_2; }
	inline void set__endIndex_2(int32_t value)
	{
		____endIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYENUMERATOR_T572707261_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef BITCONVERTER_T3118986983_H
#define BITCONVERTER_T3118986983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.BitConverter
struct  BitConverter_t3118986983  : public RuntimeObject
{
public:

public:
};

struct BitConverter_t3118986983_StaticFields
{
public:
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;

public:
	inline static int32_t get_offset_of_IsLittleEndian_0() { return static_cast<int32_t>(offsetof(BitConverter_t3118986983_StaticFields, ___IsLittleEndian_0)); }
	inline bool get_IsLittleEndian_0() const { return ___IsLittleEndian_0; }
	inline bool* get_address_of_IsLittleEndian_0() { return &___IsLittleEndian_0; }
	inline void set_IsLittleEndian_0(bool value)
	{
		___IsLittleEndian_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTER_T3118986983_H
#ifndef BUFFER_T1599081364_H
#define BUFFER_T1599081364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Buffer
struct  Buffer_t1599081364  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFER_T1599081364_H
#ifndef CHARENUMERATOR_T1121470421_H
#define CHARENUMERATOR_T1121470421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CharEnumerator
struct  CharEnumerator_t1121470421  : public RuntimeObject
{
public:
	// System.String System.CharEnumerator::str
	String_t* ___str_0;
	// System.Int32 System.CharEnumerator::index
	int32_t ___index_1;
	// System.Char System.CharEnumerator::currentElement
	Il2CppChar ___currentElement_2;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(CharEnumerator_t1121470421, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(CharEnumerator_t1121470421, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_currentElement_2() { return static_cast<int32_t>(offsetof(CharEnumerator_t1121470421, ___currentElement_2)); }
	inline Il2CppChar get_currentElement_2() const { return ___currentElement_2; }
	inline Il2CppChar* get_address_of_currentElement_2() { return &___currentElement_2; }
	inline void set_currentElement_2(Il2CppChar value)
	{
		___currentElement_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARENUMERATOR_T1121470421_H
#ifndef CONVERT_T2465617642_H
#define CONVERT_T2465617642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Convert
struct  Convert_t2465617642  : public RuntimeObject
{
public:

public:
};

struct Convert_t2465617642_StaticFields
{
public:
	// System.RuntimeType[] System.Convert::ConvertTypes
	RuntimeTypeU5BU5D_t236644441* ___ConvertTypes_0;
	// System.RuntimeType System.Convert::EnumType
	RuntimeType_t3636489352 * ___EnumType_1;
	// System.Char[] System.Convert::base64Table
	CharU5BU5D_t3528271667* ___base64Table_2;
	// System.Object System.Convert::DBNull
	RuntimeObject * ___DBNull_3;

public:
	inline static int32_t get_offset_of_ConvertTypes_0() { return static_cast<int32_t>(offsetof(Convert_t2465617642_StaticFields, ___ConvertTypes_0)); }
	inline RuntimeTypeU5BU5D_t236644441* get_ConvertTypes_0() const { return ___ConvertTypes_0; }
	inline RuntimeTypeU5BU5D_t236644441** get_address_of_ConvertTypes_0() { return &___ConvertTypes_0; }
	inline void set_ConvertTypes_0(RuntimeTypeU5BU5D_t236644441* value)
	{
		___ConvertTypes_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConvertTypes_0), value);
	}

	inline static int32_t get_offset_of_EnumType_1() { return static_cast<int32_t>(offsetof(Convert_t2465617642_StaticFields, ___EnumType_1)); }
	inline RuntimeType_t3636489352 * get_EnumType_1() const { return ___EnumType_1; }
	inline RuntimeType_t3636489352 ** get_address_of_EnumType_1() { return &___EnumType_1; }
	inline void set_EnumType_1(RuntimeType_t3636489352 * value)
	{
		___EnumType_1 = value;
		Il2CppCodeGenWriteBarrier((&___EnumType_1), value);
	}

	inline static int32_t get_offset_of_base64Table_2() { return static_cast<int32_t>(offsetof(Convert_t2465617642_StaticFields, ___base64Table_2)); }
	inline CharU5BU5D_t3528271667* get_base64Table_2() const { return ___base64Table_2; }
	inline CharU5BU5D_t3528271667** get_address_of_base64Table_2() { return &___base64Table_2; }
	inline void set_base64Table_2(CharU5BU5D_t3528271667* value)
	{
		___base64Table_2 = value;
		Il2CppCodeGenWriteBarrier((&___base64Table_2), value);
	}

	inline static int32_t get_offset_of_DBNull_3() { return static_cast<int32_t>(offsetof(Convert_t2465617642_StaticFields, ___DBNull_3)); }
	inline RuntimeObject * get_DBNull_3() const { return ___DBNull_3; }
	inline RuntimeObject ** get_address_of_DBNull_3() { return &___DBNull_3; }
	inline void set_DBNull_3(RuntimeObject * value)
	{
		___DBNull_3 = value;
		Il2CppCodeGenWriteBarrier((&___DBNull_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVERT_T2465617642_H
#ifndef DBNULL_T3725197148_H
#define DBNULL_T3725197148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DBNull
struct  DBNull_t3725197148  : public RuntimeObject
{
public:

public:
};

struct DBNull_t3725197148_StaticFields
{
public:
	// System.DBNull System.DBNull::Value
	DBNull_t3725197148 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(DBNull_t3725197148_StaticFields, ___Value_0)); }
	inline DBNull_t3725197148 * get_Value_0() const { return ___Value_0; }
	inline DBNull_t3725197148 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(DBNull_t3725197148 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBNULL_T3725197148_H
#ifndef BINDERSTATE_T1273278376_H
#define BINDERSTATE_T1273278376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DefaultBinder/BinderState
struct  BinderState_t1273278376  : public RuntimeObject
{
public:
	// System.Int32[] System.DefaultBinder/BinderState::m_argsMap
	Int32U5BU5D_t385246372* ___m_argsMap_0;
	// System.Int32 System.DefaultBinder/BinderState::m_originalSize
	int32_t ___m_originalSize_1;
	// System.Boolean System.DefaultBinder/BinderState::m_isParamArray
	bool ___m_isParamArray_2;

public:
	inline static int32_t get_offset_of_m_argsMap_0() { return static_cast<int32_t>(offsetof(BinderState_t1273278376, ___m_argsMap_0)); }
	inline Int32U5BU5D_t385246372* get_m_argsMap_0() const { return ___m_argsMap_0; }
	inline Int32U5BU5D_t385246372** get_address_of_m_argsMap_0() { return &___m_argsMap_0; }
	inline void set_m_argsMap_0(Int32U5BU5D_t385246372* value)
	{
		___m_argsMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_argsMap_0), value);
	}

	inline static int32_t get_offset_of_m_originalSize_1() { return static_cast<int32_t>(offsetof(BinderState_t1273278376, ___m_originalSize_1)); }
	inline int32_t get_m_originalSize_1() const { return ___m_originalSize_1; }
	inline int32_t* get_address_of_m_originalSize_1() { return &___m_originalSize_1; }
	inline void set_m_originalSize_1(int32_t value)
	{
		___m_originalSize_1 = value;
	}

	inline static int32_t get_offset_of_m_isParamArray_2() { return static_cast<int32_t>(offsetof(BinderState_t1273278376, ___m_isParamArray_2)); }
	inline bool get_m_isParamArray_2() const { return ___m_isParamArray_2; }
	inline bool* get_address_of_m_isParamArray_2() { return &___m_isParamArray_2; }
	inline void set_m_isParamArray_2(bool value)
	{
		___m_isParamArray_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDERSTATE_T1273278376_H
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
#ifndef LOCALDATASTORE_T3383582627_H
#define LOCALDATASTORE_T3383582627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LocalDataStore
struct  LocalDataStore_t3383582627  : public RuntimeObject
{
public:
	// System.LocalDataStoreElement[] System.LocalDataStore::m_DataTable
	LocalDataStoreElementU5BU5D_t1026346256* ___m_DataTable_0;
	// System.LocalDataStoreMgr System.LocalDataStore::m_Manager
	LocalDataStoreMgr_t1707895399 * ___m_Manager_1;

public:
	inline static int32_t get_offset_of_m_DataTable_0() { return static_cast<int32_t>(offsetof(LocalDataStore_t3383582627, ___m_DataTable_0)); }
	inline LocalDataStoreElementU5BU5D_t1026346256* get_m_DataTable_0() const { return ___m_DataTable_0; }
	inline LocalDataStoreElementU5BU5D_t1026346256** get_address_of_m_DataTable_0() { return &___m_DataTable_0; }
	inline void set_m_DataTable_0(LocalDataStoreElementU5BU5D_t1026346256* value)
	{
		___m_DataTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DataTable_0), value);
	}

	inline static int32_t get_offset_of_m_Manager_1() { return static_cast<int32_t>(offsetof(LocalDataStore_t3383582627, ___m_Manager_1)); }
	inline LocalDataStoreMgr_t1707895399 * get_m_Manager_1() const { return ___m_Manager_1; }
	inline LocalDataStoreMgr_t1707895399 ** get_address_of_m_Manager_1() { return &___m_Manager_1; }
	inline void set_m_Manager_1(LocalDataStoreMgr_t1707895399 * value)
	{
		___m_Manager_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Manager_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALDATASTORE_T3383582627_H
#ifndef LOCALDATASTOREELEMENT_T4055991005_H
#define LOCALDATASTOREELEMENT_T4055991005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LocalDataStoreElement
struct  LocalDataStoreElement_t4055991005  : public RuntimeObject
{
public:
	// System.Object System.LocalDataStoreElement::m_value
	RuntimeObject * ___m_value_0;
	// System.Int64 System.LocalDataStoreElement::m_cookie
	int64_t ___m_cookie_1;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(LocalDataStoreElement_t4055991005, ___m_value_0)); }
	inline RuntimeObject * get_m_value_0() const { return ___m_value_0; }
	inline RuntimeObject ** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(RuntimeObject * value)
	{
		___m_value_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_value_0), value);
	}

	inline static int32_t get_offset_of_m_cookie_1() { return static_cast<int32_t>(offsetof(LocalDataStoreElement_t4055991005, ___m_cookie_1)); }
	inline int64_t get_m_cookie_1() const { return ___m_cookie_1; }
	inline int64_t* get_address_of_m_cookie_1() { return &___m_cookie_1; }
	inline void set_m_cookie_1(int64_t value)
	{
		___m_cookie_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALDATASTOREELEMENT_T4055991005_H
#ifndef LOCALDATASTOREHOLDER_T2567786569_H
#define LOCALDATASTOREHOLDER_T2567786569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LocalDataStoreHolder
struct  LocalDataStoreHolder_t2567786569  : public RuntimeObject
{
public:
	// System.LocalDataStore System.LocalDataStoreHolder::m_Store
	LocalDataStore_t3383582627 * ___m_Store_0;

public:
	inline static int32_t get_offset_of_m_Store_0() { return static_cast<int32_t>(offsetof(LocalDataStoreHolder_t2567786569, ___m_Store_0)); }
	inline LocalDataStore_t3383582627 * get_m_Store_0() const { return ___m_Store_0; }
	inline LocalDataStore_t3383582627 ** get_address_of_m_Store_0() { return &___m_Store_0; }
	inline void set_m_Store_0(LocalDataStore_t3383582627 * value)
	{
		___m_Store_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Store_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALDATASTOREHOLDER_T2567786569_H
#ifndef LOCALDATASTOREMGR_T1707895399_H
#define LOCALDATASTOREMGR_T1707895399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LocalDataStoreMgr
struct  LocalDataStoreMgr_t1707895399  : public RuntimeObject
{
public:
	// System.Boolean[] System.LocalDataStoreMgr::m_SlotInfoTable
	BooleanU5BU5D_t2897418192* ___m_SlotInfoTable_0;
	// System.Int32 System.LocalDataStoreMgr::m_FirstAvailableSlot
	int32_t ___m_FirstAvailableSlot_1;
	// System.Collections.Generic.List`1<System.LocalDataStore> System.LocalDataStoreMgr::m_ManagedLocalDataStores
	List_1_t560690073 * ___m_ManagedLocalDataStores_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.LocalDataStoreSlot> System.LocalDataStoreMgr::m_KeyToSlotMap
	Dictionary_2_t526098267 * ___m_KeyToSlotMap_3;
	// System.Int64 System.LocalDataStoreMgr::m_CookieGenerator
	int64_t ___m_CookieGenerator_4;

public:
	inline static int32_t get_offset_of_m_SlotInfoTable_0() { return static_cast<int32_t>(offsetof(LocalDataStoreMgr_t1707895399, ___m_SlotInfoTable_0)); }
	inline BooleanU5BU5D_t2897418192* get_m_SlotInfoTable_0() const { return ___m_SlotInfoTable_0; }
	inline BooleanU5BU5D_t2897418192** get_address_of_m_SlotInfoTable_0() { return &___m_SlotInfoTable_0; }
	inline void set_m_SlotInfoTable_0(BooleanU5BU5D_t2897418192* value)
	{
		___m_SlotInfoTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_SlotInfoTable_0), value);
	}

	inline static int32_t get_offset_of_m_FirstAvailableSlot_1() { return static_cast<int32_t>(offsetof(LocalDataStoreMgr_t1707895399, ___m_FirstAvailableSlot_1)); }
	inline int32_t get_m_FirstAvailableSlot_1() const { return ___m_FirstAvailableSlot_1; }
	inline int32_t* get_address_of_m_FirstAvailableSlot_1() { return &___m_FirstAvailableSlot_1; }
	inline void set_m_FirstAvailableSlot_1(int32_t value)
	{
		___m_FirstAvailableSlot_1 = value;
	}

	inline static int32_t get_offset_of_m_ManagedLocalDataStores_2() { return static_cast<int32_t>(offsetof(LocalDataStoreMgr_t1707895399, ___m_ManagedLocalDataStores_2)); }
	inline List_1_t560690073 * get_m_ManagedLocalDataStores_2() const { return ___m_ManagedLocalDataStores_2; }
	inline List_1_t560690073 ** get_address_of_m_ManagedLocalDataStores_2() { return &___m_ManagedLocalDataStores_2; }
	inline void set_m_ManagedLocalDataStores_2(List_1_t560690073 * value)
	{
		___m_ManagedLocalDataStores_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ManagedLocalDataStores_2), value);
	}

	inline static int32_t get_offset_of_m_KeyToSlotMap_3() { return static_cast<int32_t>(offsetof(LocalDataStoreMgr_t1707895399, ___m_KeyToSlotMap_3)); }
	inline Dictionary_2_t526098267 * get_m_KeyToSlotMap_3() const { return ___m_KeyToSlotMap_3; }
	inline Dictionary_2_t526098267 ** get_address_of_m_KeyToSlotMap_3() { return &___m_KeyToSlotMap_3; }
	inline void set_m_KeyToSlotMap_3(Dictionary_2_t526098267 * value)
	{
		___m_KeyToSlotMap_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_KeyToSlotMap_3), value);
	}

	inline static int32_t get_offset_of_m_CookieGenerator_4() { return static_cast<int32_t>(offsetof(LocalDataStoreMgr_t1707895399, ___m_CookieGenerator_4)); }
	inline int64_t get_m_CookieGenerator_4() const { return ___m_CookieGenerator_4; }
	inline int64_t* get_address_of_m_CookieGenerator_4() { return &___m_CookieGenerator_4; }
	inline void set_m_CookieGenerator_4(int64_t value)
	{
		___m_CookieGenerator_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALDATASTOREMGR_T1707895399_H
#ifndef LOCALDATASTORESLOT_T740841968_H
#define LOCALDATASTORESLOT_T740841968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LocalDataStoreSlot
struct  LocalDataStoreSlot_t740841968  : public RuntimeObject
{
public:
	// System.LocalDataStoreMgr System.LocalDataStoreSlot::m_mgr
	LocalDataStoreMgr_t1707895399 * ___m_mgr_0;
	// System.Int32 System.LocalDataStoreSlot::m_slot
	int32_t ___m_slot_1;
	// System.Int64 System.LocalDataStoreSlot::m_cookie
	int64_t ___m_cookie_2;

public:
	inline static int32_t get_offset_of_m_mgr_0() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t740841968, ___m_mgr_0)); }
	inline LocalDataStoreMgr_t1707895399 * get_m_mgr_0() const { return ___m_mgr_0; }
	inline LocalDataStoreMgr_t1707895399 ** get_address_of_m_mgr_0() { return &___m_mgr_0; }
	inline void set_m_mgr_0(LocalDataStoreMgr_t1707895399 * value)
	{
		___m_mgr_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_mgr_0), value);
	}

	inline static int32_t get_offset_of_m_slot_1() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t740841968, ___m_slot_1)); }
	inline int32_t get_m_slot_1() const { return ___m_slot_1; }
	inline int32_t* get_address_of_m_slot_1() { return &___m_slot_1; }
	inline void set_m_slot_1(int32_t value)
	{
		___m_slot_1 = value;
	}

	inline static int32_t get_offset_of_m_cookie_2() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t740841968, ___m_cookie_2)); }
	inline int64_t get_m_cookie_2() const { return ___m_cookie_2; }
	inline int64_t* get_address_of_m_cookie_2() { return &___m_cookie_2; }
	inline void set_m_cookie_2(int64_t value)
	{
		___m_cookie_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALDATASTORESLOT_T740841968_H
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
#ifndef BINDER_T2999457153_H
#define BINDER_T2999457153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder
struct  Binder_t2999457153  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDER_T2999457153_H
#ifndef ASYMMETRICALGORITHM_T932037087_H
#define ASYMMETRICALGORITHM_T932037087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t932037087  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t722666473* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t932037087, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t932037087, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t722666473* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t722666473* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T932037087_H
#ifndef THROWHELPER_T481305680_H
#define THROWHELPER_T481305680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ThrowHelper
struct  ThrowHelper_t481305680  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THROWHELPER_T481305680_H
#ifndef TUPLE_T963300607_H
#define TUPLE_T963300607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Tuple
struct  Tuple_t963300607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLE_T963300607_H
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
#ifndef __FILTERS_T550753867_H
#define __FILTERS_T550753867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Filters
struct  __Filters_t550753867  : public RuntimeObject
{
public:

public:
};

struct __Filters_t550753867_StaticFields
{
public:
	// System.__Filters System.__Filters::Instance
	__Filters_t550753867 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(__Filters_t550753867_StaticFields, ___Instance_0)); }
	inline __Filters_t550753867 * get_Instance_0() const { return ___Instance_0; }
	inline __Filters_t550753867 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(__Filters_t550753867 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __FILTERS_T550753867_H
#ifndef SEQUENTIALSEARCHPRIMEGENERATORBASE_T2996090508_H
#define SEQUENTIALSEARCHPRIMEGENERATORBASE_T2996090508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct  SequentialSearchPrimeGeneratorBase_t2996090508  : public PrimeGeneratorBase_t446028866
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEQUENTIALSEARCHPRIMEGENERATORBASE_T2996090508_H
#ifndef AGGREGATEEXCEPTION_T3586243216_H
#define AGGREGATEEXCEPTION_T3586243216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AggregateException
struct  AggregateException_t3586243216  : public Exception_t
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t2649313536 * ___m_innerExceptions_17;

public:
	inline static int32_t get_offset_of_m_innerExceptions_17() { return static_cast<int32_t>(offsetof(AggregateException_t3586243216, ___m_innerExceptions_17)); }
	inline ReadOnlyCollection_1_t2649313536 * get_m_innerExceptions_17() const { return ___m_innerExceptions_17; }
	inline ReadOnlyCollection_1_t2649313536 ** get_address_of_m_innerExceptions_17() { return &___m_innerExceptions_17; }
	inline void set_m_innerExceptions_17(ReadOnlyCollection_1_t2649313536 * value)
	{
		___m_innerExceptions_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_innerExceptions_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AGGREGATEEXCEPTION_T3586243216_H
#ifndef APPLICATIONEXCEPTION_T2339761290_H
#define APPLICATIONEXCEPTION_T2339761290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ApplicationException
struct  ApplicationException_t2339761290  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONEXCEPTION_T2339761290_H
#ifndef SORTERGENERICARRAY_T3557937876_H
#define SORTERGENERICARRAY_T3557937876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array/SorterGenericArray
struct  SorterGenericArray_t3557937876 
{
public:
	// System.Array System.Array/SorterGenericArray::keys
	RuntimeArray * ___keys_0;
	// System.Array System.Array/SorterGenericArray::items
	RuntimeArray * ___items_1;
	// System.Collections.IComparer System.Array/SorterGenericArray::comparer
	RuntimeObject* ___comparer_2;

public:
	inline static int32_t get_offset_of_keys_0() { return static_cast<int32_t>(offsetof(SorterGenericArray_t3557937876, ___keys_0)); }
	inline RuntimeArray * get_keys_0() const { return ___keys_0; }
	inline RuntimeArray ** get_address_of_keys_0() { return &___keys_0; }
	inline void set_keys_0(RuntimeArray * value)
	{
		___keys_0 = value;
		Il2CppCodeGenWriteBarrier((&___keys_0), value);
	}

	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(SorterGenericArray_t3557937876, ___items_1)); }
	inline RuntimeArray * get_items_1() const { return ___items_1; }
	inline RuntimeArray ** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(RuntimeArray * value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_comparer_2() { return static_cast<int32_t>(offsetof(SorterGenericArray_t3557937876, ___comparer_2)); }
	inline RuntimeObject* get_comparer_2() const { return ___comparer_2; }
	inline RuntimeObject** get_address_of_comparer_2() { return &___comparer_2; }
	inline void set_comparer_2(RuntimeObject* value)
	{
		___comparer_2 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Array/SorterGenericArray
struct SorterGenericArray_t3557937876_marshaled_pinvoke
{
	RuntimeArray * ___keys_0;
	RuntimeArray * ___items_1;
	RuntimeObject* ___comparer_2;
};
// Native definition for COM marshalling of System.Array/SorterGenericArray
struct SorterGenericArray_t3557937876_marshaled_com
{
	RuntimeArray * ___keys_0;
	RuntimeArray * ___items_1;
	RuntimeObject* ___comparer_2;
};
#endif // SORTERGENERICARRAY_T3557937876_H
#ifndef SORTEROBJECTARRAY_T2043158284_H
#define SORTEROBJECTARRAY_T2043158284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array/SorterObjectArray
struct  SorterObjectArray_t2043158284 
{
public:
	// System.Object[] System.Array/SorterObjectArray::keys
	ObjectU5BU5D_t2843939325* ___keys_0;
	// System.Object[] System.Array/SorterObjectArray::items
	ObjectU5BU5D_t2843939325* ___items_1;
	// System.Collections.IComparer System.Array/SorterObjectArray::comparer
	RuntimeObject* ___comparer_2;

public:
	inline static int32_t get_offset_of_keys_0() { return static_cast<int32_t>(offsetof(SorterObjectArray_t2043158284, ___keys_0)); }
	inline ObjectU5BU5D_t2843939325* get_keys_0() const { return ___keys_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of_keys_0() { return &___keys_0; }
	inline void set_keys_0(ObjectU5BU5D_t2843939325* value)
	{
		___keys_0 = value;
		Il2CppCodeGenWriteBarrier((&___keys_0), value);
	}

	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(SorterObjectArray_t2043158284, ___items_1)); }
	inline ObjectU5BU5D_t2843939325* get_items_1() const { return ___items_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(ObjectU5BU5D_t2843939325* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_comparer_2() { return static_cast<int32_t>(offsetof(SorterObjectArray_t2043158284, ___comparer_2)); }
	inline RuntimeObject* get_comparer_2() const { return ___comparer_2; }
	inline RuntimeObject** get_address_of_comparer_2() { return &___comparer_2; }
	inline void set_comparer_2(RuntimeObject* value)
	{
		___comparer_2 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Array/SorterObjectArray
struct SorterObjectArray_t2043158284_marshaled_pinvoke
{
	ObjectU5BU5D_t2843939325* ___keys_0;
	ObjectU5BU5D_t2843939325* ___items_1;
	RuntimeObject* ___comparer_2;
};
// Native definition for COM marshalling of System.Array/SorterObjectArray
struct SorterObjectArray_t2043158284_marshaled_com
{
	ObjectU5BU5D_t2843939325* ___keys_0;
	ObjectU5BU5D_t2843939325* ___items_1;
	RuntimeObject* ___comparer_2;
};
#endif // SORTEROBJECTARRAY_T2043158284_H
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
#ifndef CLSCOMPLIANTATTRIBUTE_T999444765_H
#define CLSCOMPLIANTATTRIBUTE_T999444765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CLSCompliantAttribute
struct  CLSCompliantAttribute_t999444765  : public Attribute_t861562559
{
public:
	// System.Boolean System.CLSCompliantAttribute::m_compliant
	bool ___m_compliant_0;

public:
	inline static int32_t get_offset_of_m_compliant_0() { return static_cast<int32_t>(offsetof(CLSCompliantAttribute_t999444765, ___m_compliant_0)); }
	inline bool get_m_compliant_0() const { return ___m_compliant_0; }
	inline bool* get_address_of_m_compliant_0() { return &___m_compliant_0; }
	inline void set_m_compliant_0(bool value)
	{
		___m_compliant_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLSCOMPLIANTATTRIBUTE_T999444765_H
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
#ifndef CONTEXTBOUNDOBJECT_T1394786030_H
#define CONTEXTBOUNDOBJECT_T1394786030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ContextBoundObject
struct  ContextBoundObject_t1394786030  : public MarshalByRefObject_t2760389100
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTBOUNDOBJECT_T1394786030_H
#ifndef CONTEXTSTATICATTRIBUTE_T2700898555_H
#define CONTEXTSTATICATTRIBUTE_T2700898555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ContextStaticAttribute
struct  ContextStaticAttribute_t2700898555  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTSTATICATTRIBUTE_T2700898555_H
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
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t2770800703* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2948259380  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2948259380  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2948259380  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t2770800703* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t2770800703** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t2770800703* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((&___Powers10_6), value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Zero_7)); }
	inline Decimal_t2948259380  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2948259380 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2948259380  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_8)); }
	inline Decimal_t2948259380  get_One_8() const { return ___One_8; }
	inline Decimal_t2948259380 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2948259380  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2948259380  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2948259380  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2948259380  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2948259380  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_11)); }
	inline Decimal_t2948259380  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2948259380 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2948259380  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2948259380  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2948259380 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2948259380  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2948259380  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2948259380 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2948259380  value)
	{
		___NearPositiveZero_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef DEFAULTBINDER_T3032604929_H
#define DEFAULTBINDER_T3032604929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DefaultBinder
struct  DefaultBinder_t3032604929  : public Binder_t2999457153
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTBINDER_T3032604929_H
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
#ifndef MONOTODOATTRIBUTE_T4131080581_H
#define MONOTODOATTRIBUTE_T4131080581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t4131080581  : public Attribute_t861562559
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t4131080581, ___comment_0)); }
	inline String_t* get_comment_0() const { return ___comment_0; }
	inline String_t** get_address_of_comment_0() { return &___comment_0; }
	inline void set_comment_0(String_t* value)
	{
		___comment_0 = value;
		Il2CppCodeGenWriteBarrier((&___comment_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T4131080581_H
#ifndef DSA_T2386879874_H
#define DSA_T2386879874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSA
struct  DSA_t2386879874  : public AsymmetricAlgorithm_t932037087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSA_T2386879874_H
#ifndef RSA_T2385438082_H
#define RSA_T2385438082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t2385438082  : public AsymmetricAlgorithm_t932037087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T2385438082_H
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
#ifndef VALUETUPLE_T3168505507_H
#define VALUETUPLE_T3168505507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueTuple
struct  ValueTuple_t3168505507 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ValueTuple_t3168505507__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUETUPLE_T3168505507_H
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
#ifndef SIGN_T3338384038_H
#define SIGN_T3338384038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Sign
struct  Sign_t3338384038 
{
public:
	// System.Int32 Mono.Math.BigInteger/Sign::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Sign_t3338384038, ___value___2)); }
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
#endif // SIGN_T3338384038_H
#ifndef CONFIDENCEFACTOR_T2516000285_H
#define CONFIDENCEFACTOR_T2516000285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t2516000285 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t2516000285, ___value___2)); }
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
#endif // CONFIDENCEFACTOR_T2516000285_H
#ifndef AUTHENTICODEDEFORMATTER_T88130231_H
#define AUTHENTICODEDEFORMATTER_T88130231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Authenticode.AuthenticodeDeformatter
struct  AuthenticodeDeformatter_t88130231  : public AuthenticodeBase_t263562949
{
public:
	// System.String Mono.Security.Authenticode.AuthenticodeDeformatter::filename
	String_t* ___filename_8;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::hash
	ByteU5BU5D_t4116647657* ___hash_9;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Authenticode.AuthenticodeDeformatter::coll
	X509CertificateCollection_t1542168549 * ___coll_10;
	// Mono.Security.ASN1 Mono.Security.Authenticode.AuthenticodeDeformatter::signedHash
	ASN1_t2114160832 * ___signedHash_11;
	// System.DateTime Mono.Security.Authenticode.AuthenticodeDeformatter::timestamp
	DateTime_t3738529785  ___timestamp_12;
	// Mono.Security.X509.X509Certificate Mono.Security.Authenticode.AuthenticodeDeformatter::signingCertificate
	X509Certificate_t489243024 * ___signingCertificate_13;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeDeformatter::reason
	int32_t ___reason_14;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::trustedRoot
	bool ___trustedRoot_15;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::trustedTimestampRoot
	bool ___trustedTimestampRoot_16;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::entry
	ByteU5BU5D_t4116647657* ___entry_17;
	// Mono.Security.X509.X509Chain Mono.Security.Authenticode.AuthenticodeDeformatter::signerChain
	X509Chain_t863783600 * ___signerChain_18;
	// Mono.Security.X509.X509Chain Mono.Security.Authenticode.AuthenticodeDeformatter::timestampChain
	X509Chain_t863783600 * ___timestampChain_19;

public:
	inline static int32_t get_offset_of_filename_8() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___filename_8)); }
	inline String_t* get_filename_8() const { return ___filename_8; }
	inline String_t** get_address_of_filename_8() { return &___filename_8; }
	inline void set_filename_8(String_t* value)
	{
		___filename_8 = value;
		Il2CppCodeGenWriteBarrier((&___filename_8), value);
	}

	inline static int32_t get_offset_of_hash_9() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___hash_9)); }
	inline ByteU5BU5D_t4116647657* get_hash_9() const { return ___hash_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_hash_9() { return &___hash_9; }
	inline void set_hash_9(ByteU5BU5D_t4116647657* value)
	{
		___hash_9 = value;
		Il2CppCodeGenWriteBarrier((&___hash_9), value);
	}

	inline static int32_t get_offset_of_coll_10() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___coll_10)); }
	inline X509CertificateCollection_t1542168549 * get_coll_10() const { return ___coll_10; }
	inline X509CertificateCollection_t1542168549 ** get_address_of_coll_10() { return &___coll_10; }
	inline void set_coll_10(X509CertificateCollection_t1542168549 * value)
	{
		___coll_10 = value;
		Il2CppCodeGenWriteBarrier((&___coll_10), value);
	}

	inline static int32_t get_offset_of_signedHash_11() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___signedHash_11)); }
	inline ASN1_t2114160832 * get_signedHash_11() const { return ___signedHash_11; }
	inline ASN1_t2114160832 ** get_address_of_signedHash_11() { return &___signedHash_11; }
	inline void set_signedHash_11(ASN1_t2114160832 * value)
	{
		___signedHash_11 = value;
		Il2CppCodeGenWriteBarrier((&___signedHash_11), value);
	}

	inline static int32_t get_offset_of_timestamp_12() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___timestamp_12)); }
	inline DateTime_t3738529785  get_timestamp_12() const { return ___timestamp_12; }
	inline DateTime_t3738529785 * get_address_of_timestamp_12() { return &___timestamp_12; }
	inline void set_timestamp_12(DateTime_t3738529785  value)
	{
		___timestamp_12 = value;
	}

	inline static int32_t get_offset_of_signingCertificate_13() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___signingCertificate_13)); }
	inline X509Certificate_t489243024 * get_signingCertificate_13() const { return ___signingCertificate_13; }
	inline X509Certificate_t489243024 ** get_address_of_signingCertificate_13() { return &___signingCertificate_13; }
	inline void set_signingCertificate_13(X509Certificate_t489243024 * value)
	{
		___signingCertificate_13 = value;
		Il2CppCodeGenWriteBarrier((&___signingCertificate_13), value);
	}

	inline static int32_t get_offset_of_reason_14() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___reason_14)); }
	inline int32_t get_reason_14() const { return ___reason_14; }
	inline int32_t* get_address_of_reason_14() { return &___reason_14; }
	inline void set_reason_14(int32_t value)
	{
		___reason_14 = value;
	}

	inline static int32_t get_offset_of_trustedRoot_15() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___trustedRoot_15)); }
	inline bool get_trustedRoot_15() const { return ___trustedRoot_15; }
	inline bool* get_address_of_trustedRoot_15() { return &___trustedRoot_15; }
	inline void set_trustedRoot_15(bool value)
	{
		___trustedRoot_15 = value;
	}

	inline static int32_t get_offset_of_trustedTimestampRoot_16() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___trustedTimestampRoot_16)); }
	inline bool get_trustedTimestampRoot_16() const { return ___trustedTimestampRoot_16; }
	inline bool* get_address_of_trustedTimestampRoot_16() { return &___trustedTimestampRoot_16; }
	inline void set_trustedTimestampRoot_16(bool value)
	{
		___trustedTimestampRoot_16 = value;
	}

	inline static int32_t get_offset_of_entry_17() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___entry_17)); }
	inline ByteU5BU5D_t4116647657* get_entry_17() const { return ___entry_17; }
	inline ByteU5BU5D_t4116647657** get_address_of_entry_17() { return &___entry_17; }
	inline void set_entry_17(ByteU5BU5D_t4116647657* value)
	{
		___entry_17 = value;
		Il2CppCodeGenWriteBarrier((&___entry_17), value);
	}

	inline static int32_t get_offset_of_signerChain_18() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___signerChain_18)); }
	inline X509Chain_t863783600 * get_signerChain_18() const { return ___signerChain_18; }
	inline X509Chain_t863783600 ** get_address_of_signerChain_18() { return &___signerChain_18; }
	inline void set_signerChain_18(X509Chain_t863783600 * value)
	{
		___signerChain_18 = value;
		Il2CppCodeGenWriteBarrier((&___signerChain_18), value);
	}

	inline static int32_t get_offset_of_timestampChain_19() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t88130231, ___timestampChain_19)); }
	inline X509Chain_t863783600 * get_timestampChain_19() const { return ___timestampChain_19; }
	inline X509Chain_t863783600 ** get_address_of_timestampChain_19() { return &___timestampChain_19; }
	inline void set_timestampChain_19(X509Chain_t863783600 * value)
	{
		___timestampChain_19 = value;
		Il2CppCodeGenWriteBarrier((&___timestampChain_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICODEDEFORMATTER_T88130231_H
#ifndef DSAMANAGED_T2800260182_H
#define DSAMANAGED_T2800260182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.DSAManaged
struct  DSAManaged_t2800260182  : public DSA_t2386879874
{
public:
	// System.Boolean Mono.Security.Cryptography.DSAManaged::keypairGenerated
	bool ___keypairGenerated_2;
	// System.Boolean Mono.Security.Cryptography.DSAManaged::m_disposed
	bool ___m_disposed_3;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::p
	BigInteger_t2902905089 * ___p_4;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::q
	BigInteger_t2902905089 * ___q_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::g
	BigInteger_t2902905089 * ___g_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::x
	BigInteger_t2902905089 * ___x_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::y
	BigInteger_t2902905089 * ___y_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::j
	BigInteger_t2902905089 * ___j_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::seed
	BigInteger_t2902905089 * ___seed_10;
	// System.Int32 Mono.Security.Cryptography.DSAManaged::counter
	int32_t ___counter_11;
	// System.Boolean Mono.Security.Cryptography.DSAManaged::j_missing
	bool ___j_missing_12;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.DSAManaged::rng
	RandomNumberGenerator_t386037858 * ___rng_13;
	// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.DSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t3828027274 * ___KeyGenerated_14;

public:
	inline static int32_t get_offset_of_keypairGenerated_2() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___keypairGenerated_2)); }
	inline bool get_keypairGenerated_2() const { return ___keypairGenerated_2; }
	inline bool* get_address_of_keypairGenerated_2() { return &___keypairGenerated_2; }
	inline void set_keypairGenerated_2(bool value)
	{
		___keypairGenerated_2 = value;
	}

	inline static int32_t get_offset_of_m_disposed_3() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___m_disposed_3)); }
	inline bool get_m_disposed_3() const { return ___m_disposed_3; }
	inline bool* get_address_of_m_disposed_3() { return &___m_disposed_3; }
	inline void set_m_disposed_3(bool value)
	{
		___m_disposed_3 = value;
	}

	inline static int32_t get_offset_of_p_4() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___p_4)); }
	inline BigInteger_t2902905089 * get_p_4() const { return ___p_4; }
	inline BigInteger_t2902905089 ** get_address_of_p_4() { return &___p_4; }
	inline void set_p_4(BigInteger_t2902905089 * value)
	{
		___p_4 = value;
		Il2CppCodeGenWriteBarrier((&___p_4), value);
	}

	inline static int32_t get_offset_of_q_5() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___q_5)); }
	inline BigInteger_t2902905089 * get_q_5() const { return ___q_5; }
	inline BigInteger_t2902905089 ** get_address_of_q_5() { return &___q_5; }
	inline void set_q_5(BigInteger_t2902905089 * value)
	{
		___q_5 = value;
		Il2CppCodeGenWriteBarrier((&___q_5), value);
	}

	inline static int32_t get_offset_of_g_6() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___g_6)); }
	inline BigInteger_t2902905089 * get_g_6() const { return ___g_6; }
	inline BigInteger_t2902905089 ** get_address_of_g_6() { return &___g_6; }
	inline void set_g_6(BigInteger_t2902905089 * value)
	{
		___g_6 = value;
		Il2CppCodeGenWriteBarrier((&___g_6), value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___x_7)); }
	inline BigInteger_t2902905089 * get_x_7() const { return ___x_7; }
	inline BigInteger_t2902905089 ** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(BigInteger_t2902905089 * value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier((&___x_7), value);
	}

	inline static int32_t get_offset_of_y_8() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___y_8)); }
	inline BigInteger_t2902905089 * get_y_8() const { return ___y_8; }
	inline BigInteger_t2902905089 ** get_address_of_y_8() { return &___y_8; }
	inline void set_y_8(BigInteger_t2902905089 * value)
	{
		___y_8 = value;
		Il2CppCodeGenWriteBarrier((&___y_8), value);
	}

	inline static int32_t get_offset_of_j_9() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___j_9)); }
	inline BigInteger_t2902905089 * get_j_9() const { return ___j_9; }
	inline BigInteger_t2902905089 ** get_address_of_j_9() { return &___j_9; }
	inline void set_j_9(BigInteger_t2902905089 * value)
	{
		___j_9 = value;
		Il2CppCodeGenWriteBarrier((&___j_9), value);
	}

	inline static int32_t get_offset_of_seed_10() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___seed_10)); }
	inline BigInteger_t2902905089 * get_seed_10() const { return ___seed_10; }
	inline BigInteger_t2902905089 ** get_address_of_seed_10() { return &___seed_10; }
	inline void set_seed_10(BigInteger_t2902905089 * value)
	{
		___seed_10 = value;
		Il2CppCodeGenWriteBarrier((&___seed_10), value);
	}

	inline static int32_t get_offset_of_counter_11() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___counter_11)); }
	inline int32_t get_counter_11() const { return ___counter_11; }
	inline int32_t* get_address_of_counter_11() { return &___counter_11; }
	inline void set_counter_11(int32_t value)
	{
		___counter_11 = value;
	}

	inline static int32_t get_offset_of_j_missing_12() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___j_missing_12)); }
	inline bool get_j_missing_12() const { return ___j_missing_12; }
	inline bool* get_address_of_j_missing_12() { return &___j_missing_12; }
	inline void set_j_missing_12(bool value)
	{
		___j_missing_12 = value;
	}

	inline static int32_t get_offset_of_rng_13() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___rng_13)); }
	inline RandomNumberGenerator_t386037858 * get_rng_13() const { return ___rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_rng_13() { return &___rng_13; }
	inline void set_rng_13(RandomNumberGenerator_t386037858 * value)
	{
		___rng_13 = value;
		Il2CppCodeGenWriteBarrier((&___rng_13), value);
	}

	inline static int32_t get_offset_of_KeyGenerated_14() { return static_cast<int32_t>(offsetof(DSAManaged_t2800260182, ___KeyGenerated_14)); }
	inline KeyGeneratedEventHandler_t3828027274 * get_KeyGenerated_14() const { return ___KeyGenerated_14; }
	inline KeyGeneratedEventHandler_t3828027274 ** get_address_of_KeyGenerated_14() { return &___KeyGenerated_14; }
	inline void set_KeyGenerated_14(KeyGeneratedEventHandler_t3828027274 * value)
	{
		___KeyGenerated_14 = value;
		Il2CppCodeGenWriteBarrier((&___KeyGenerated_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSAMANAGED_T2800260182_H
#ifndef RSAMANAGED_T1757093819_H
#define RSAMANAGED_T1757093819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged
struct  RSAManaged_t1757093819  : public RSA_t2385438082
{
public:
	// System.Boolean Mono.Security.Cryptography.RSAManaged::isCRTpossible
	bool ___isCRTpossible_2;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keyBlinding
	bool ___keyBlinding_3;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keypairGenerated
	bool ___keypairGenerated_4;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::m_disposed
	bool ___m_disposed_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::d
	BigInteger_t2902905089 * ___d_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_t2902905089 * ___p_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_t2902905089 * ___q_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_t2902905089 * ___dp_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_t2902905089 * ___dq_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_t2902905089 * ___qInv_11;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_t2902905089 * ___n_12;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_t2902905089 * ___e_13;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t3064139577 * ___KeyGenerated_14;

public:
	inline static int32_t get_offset_of_isCRTpossible_2() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___isCRTpossible_2)); }
	inline bool get_isCRTpossible_2() const { return ___isCRTpossible_2; }
	inline bool* get_address_of_isCRTpossible_2() { return &___isCRTpossible_2; }
	inline void set_isCRTpossible_2(bool value)
	{
		___isCRTpossible_2 = value;
	}

	inline static int32_t get_offset_of_keyBlinding_3() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___keyBlinding_3)); }
	inline bool get_keyBlinding_3() const { return ___keyBlinding_3; }
	inline bool* get_address_of_keyBlinding_3() { return &___keyBlinding_3; }
	inline void set_keyBlinding_3(bool value)
	{
		___keyBlinding_3 = value;
	}

	inline static int32_t get_offset_of_keypairGenerated_4() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___keypairGenerated_4)); }
	inline bool get_keypairGenerated_4() const { return ___keypairGenerated_4; }
	inline bool* get_address_of_keypairGenerated_4() { return &___keypairGenerated_4; }
	inline void set_keypairGenerated_4(bool value)
	{
		___keypairGenerated_4 = value;
	}

	inline static int32_t get_offset_of_m_disposed_5() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___m_disposed_5)); }
	inline bool get_m_disposed_5() const { return ___m_disposed_5; }
	inline bool* get_address_of_m_disposed_5() { return &___m_disposed_5; }
	inline void set_m_disposed_5(bool value)
	{
		___m_disposed_5 = value;
	}

	inline static int32_t get_offset_of_d_6() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___d_6)); }
	inline BigInteger_t2902905089 * get_d_6() const { return ___d_6; }
	inline BigInteger_t2902905089 ** get_address_of_d_6() { return &___d_6; }
	inline void set_d_6(BigInteger_t2902905089 * value)
	{
		___d_6 = value;
		Il2CppCodeGenWriteBarrier((&___d_6), value);
	}

	inline static int32_t get_offset_of_p_7() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___p_7)); }
	inline BigInteger_t2902905089 * get_p_7() const { return ___p_7; }
	inline BigInteger_t2902905089 ** get_address_of_p_7() { return &___p_7; }
	inline void set_p_7(BigInteger_t2902905089 * value)
	{
		___p_7 = value;
		Il2CppCodeGenWriteBarrier((&___p_7), value);
	}

	inline static int32_t get_offset_of_q_8() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___q_8)); }
	inline BigInteger_t2902905089 * get_q_8() const { return ___q_8; }
	inline BigInteger_t2902905089 ** get_address_of_q_8() { return &___q_8; }
	inline void set_q_8(BigInteger_t2902905089 * value)
	{
		___q_8 = value;
		Il2CppCodeGenWriteBarrier((&___q_8), value);
	}

	inline static int32_t get_offset_of_dp_9() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___dp_9)); }
	inline BigInteger_t2902905089 * get_dp_9() const { return ___dp_9; }
	inline BigInteger_t2902905089 ** get_address_of_dp_9() { return &___dp_9; }
	inline void set_dp_9(BigInteger_t2902905089 * value)
	{
		___dp_9 = value;
		Il2CppCodeGenWriteBarrier((&___dp_9), value);
	}

	inline static int32_t get_offset_of_dq_10() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___dq_10)); }
	inline BigInteger_t2902905089 * get_dq_10() const { return ___dq_10; }
	inline BigInteger_t2902905089 ** get_address_of_dq_10() { return &___dq_10; }
	inline void set_dq_10(BigInteger_t2902905089 * value)
	{
		___dq_10 = value;
		Il2CppCodeGenWriteBarrier((&___dq_10), value);
	}

	inline static int32_t get_offset_of_qInv_11() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___qInv_11)); }
	inline BigInteger_t2902905089 * get_qInv_11() const { return ___qInv_11; }
	inline BigInteger_t2902905089 ** get_address_of_qInv_11() { return &___qInv_11; }
	inline void set_qInv_11(BigInteger_t2902905089 * value)
	{
		___qInv_11 = value;
		Il2CppCodeGenWriteBarrier((&___qInv_11), value);
	}

	inline static int32_t get_offset_of_n_12() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___n_12)); }
	inline BigInteger_t2902905089 * get_n_12() const { return ___n_12; }
	inline BigInteger_t2902905089 ** get_address_of_n_12() { return &___n_12; }
	inline void set_n_12(BigInteger_t2902905089 * value)
	{
		___n_12 = value;
		Il2CppCodeGenWriteBarrier((&___n_12), value);
	}

	inline static int32_t get_offset_of_e_13() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___e_13)); }
	inline BigInteger_t2902905089 * get_e_13() const { return ___e_13; }
	inline BigInteger_t2902905089 ** get_address_of_e_13() { return &___e_13; }
	inline void set_e_13(BigInteger_t2902905089 * value)
	{
		___e_13 = value;
		Il2CppCodeGenWriteBarrier((&___e_13), value);
	}

	inline static int32_t get_offset_of_KeyGenerated_14() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093819, ___KeyGenerated_14)); }
	inline KeyGeneratedEventHandler_t3064139577 * get_KeyGenerated_14() const { return ___KeyGenerated_14; }
	inline KeyGeneratedEventHandler_t3064139577 ** get_address_of_KeyGenerated_14() { return &___KeyGenerated_14; }
	inline void set_KeyGenerated_14(KeyGeneratedEventHandler_t3064139577 * value)
	{
		___KeyGenerated_14 = value;
		Il2CppCodeGenWriteBarrier((&___KeyGenerated_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAMANAGED_T1757093819_H
#ifndef APPCONTEXT_T1196086570_H
#define APPCONTEXT_T1196086570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppContext
struct  AppContext_t1196086570  : public RuntimeObject
{
public:

public:
};

struct AppContext_t1196086570_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.AppContext/SwitchValueState> System.AppContext::s_switchMap
	Dictionary_2_t2590507766 * ___s_switchMap_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.AppContext::s_defaultsInitialized
	bool ___s_defaultsInitialized_1;

public:
	inline static int32_t get_offset_of_s_switchMap_0() { return static_cast<int32_t>(offsetof(AppContext_t1196086570_StaticFields, ___s_switchMap_0)); }
	inline Dictionary_2_t2590507766 * get_s_switchMap_0() const { return ___s_switchMap_0; }
	inline Dictionary_2_t2590507766 ** get_address_of_s_switchMap_0() { return &___s_switchMap_0; }
	inline void set_s_switchMap_0(Dictionary_2_t2590507766 * value)
	{
		___s_switchMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_switchMap_0), value);
	}

	inline static int32_t get_offset_of_s_defaultsInitialized_1() { return static_cast<int32_t>(offsetof(AppContext_t1196086570_StaticFields, ___s_defaultsInitialized_1)); }
	inline bool get_s_defaultsInitialized_1() const { return ___s_defaultsInitialized_1; }
	inline bool* get_address_of_s_defaultsInitialized_1() { return &___s_defaultsInitialized_1; }
	inline void set_s_defaultsInitialized_1(bool value)
	{
		___s_defaultsInitialized_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPCONTEXT_T1196086570_H
#ifndef SWITCHVALUESTATE_T2805251467_H
#define SWITCHVALUESTATE_T2805251467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppContext/SwitchValueState
struct  SwitchValueState_t2805251467 
{
public:
	// System.Int32 System.AppContext/SwitchValueState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SwitchValueState_t2805251467, ___value___2)); }
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
#endif // SWITCHVALUESTATE_T2805251467_H
#ifndef APPDOMAINUNLOADEDEXCEPTION_T2857636191_H
#define APPDOMAINUNLOADEDEXCEPTION_T2857636191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomainUnloadedException
struct  AppDomainUnloadedException_t2857636191  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAINUNLOADEDEXCEPTION_T2857636191_H
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
#ifndef ARITHMETICEXCEPTION_T4283546778_H
#define ARITHMETICEXCEPTION_T4283546778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t4283546778  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T4283546778_H
#ifndef ARRAYTYPEMISMATCHEXCEPTION_T2342549375_H
#define ARRAYTYPEMISMATCHEXCEPTION_T2342549375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArrayTypeMismatchException
struct  ArrayTypeMismatchException_t2342549375  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYTYPEMISMATCHEXCEPTION_T2342549375_H
#ifndef ATTRIBUTETARGETS_T1784037988_H
#define ATTRIBUTETARGETS_T1784037988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeTargets
struct  AttributeTargets_t1784037988 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_t1784037988, ___value___2)); }
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
#endif // ATTRIBUTETARGETS_T1784037988_H
#ifndef BADIMAGEFORMATEXCEPTION_T251534586_H
#define BADIMAGEFORMATEXCEPTION_T251534586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.BadImageFormatException
struct  BadImageFormatException_t251534586  : public SystemException_t176217640
{
public:
	// System.String System.BadImageFormatException::_fileName
	String_t* ____fileName_17;
	// System.String System.BadImageFormatException::_fusionLog
	String_t* ____fusionLog_18;

public:
	inline static int32_t get_offset_of__fileName_17() { return static_cast<int32_t>(offsetof(BadImageFormatException_t251534586, ____fileName_17)); }
	inline String_t* get__fileName_17() const { return ____fileName_17; }
	inline String_t** get_address_of__fileName_17() { return &____fileName_17; }
	inline void set__fileName_17(String_t* value)
	{
		____fileName_17 = value;
		Il2CppCodeGenWriteBarrier((&____fileName_17), value);
	}

	inline static int32_t get_offset_of__fusionLog_18() { return static_cast<int32_t>(offsetof(BadImageFormatException_t251534586, ____fusionLog_18)); }
	inline String_t* get__fusionLog_18() const { return ____fusionLog_18; }
	inline String_t** get_address_of__fusionLog_18() { return &____fusionLog_18; }
	inline void set__fusionLog_18(String_t* value)
	{
		____fusionLog_18 = value;
		Il2CppCodeGenWriteBarrier((&____fusionLog_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BADIMAGEFORMATEXCEPTION_T251534586_H
#ifndef BASE64FORMATTINGOPTIONS_T1508405059_H
#define BASE64FORMATTINGOPTIONS_T1508405059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Base64FormattingOptions
struct  Base64FormattingOptions_t1508405059 
{
public:
	// System.Int32 System.Base64FormattingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Base64FormattingOptions_t1508405059, ___value___2)); }
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
#endif // BASE64FORMATTINGOPTIONS_T1508405059_H
#ifndef CANNOTUNLOADAPPDOMAINEXCEPTION_T2990071197_H
#define CANNOTUNLOADAPPDOMAINEXCEPTION_T2990071197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CannotUnloadAppDomainException
struct  CannotUnloadAppDomainException_t2990071197  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANNOTUNLOADAPPDOMAINEXCEPTION_T2990071197_H
#ifndef CONSOLECOLOR_T2680034144_H
#define CONSOLECOLOR_T2680034144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleColor
struct  ConsoleColor_t2680034144 
{
public:
	// System.Int32 System.ConsoleColor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleColor_t2680034144, ___value___2)); }
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
#endif // CONSOLECOLOR_T2680034144_H
#ifndef CONSOLEKEY_T4097401472_H
#define CONSOLEKEY_T4097401472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleKey
struct  ConsoleKey_t4097401472 
{
public:
	// System.Int32 System.ConsoleKey::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleKey_t4097401472, ___value___2)); }
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
#endif // CONSOLEKEY_T4097401472_H
#ifndef CONSOLEMODIFIERS_T1471011467_H
#define CONSOLEMODIFIERS_T1471011467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleModifiers
struct  ConsoleModifiers_t1471011467 
{
public:
	// System.Int32 System.ConsoleModifiers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleModifiers_t1471011467, ___value___2)); }
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
#endif // CONSOLEMODIFIERS_T1471011467_H
#ifndef CONSOLESPECIALKEY_T3452252982_H
#define CONSOLESPECIALKEY_T3452252982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleSpecialKey
struct  ConsoleSpecialKey_t3452252982 
{
public:
	// System.Int32 System.ConsoleSpecialKey::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleSpecialKey_t3452252982, ___value___2)); }
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
#endif // CONSOLESPECIALKEY_T3452252982_H
#ifndef CONTEXTMARSHALEXCEPTION_T3675971023_H
#define CONTEXTMARSHALEXCEPTION_T3675971023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ContextMarshalException
struct  ContextMarshalException_t3675971023  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTMARSHALEXCEPTION_T3675971023_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___2)); }
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
#endif // DATETIMEKIND_T3468814247_H
#ifndef DATETIMEOFFSET_T3229287507_H
#define DATETIMEOFFSET_T3229287507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t3229287507 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t3738529785  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___m_dateTime_2)); }
	inline DateTime_t3738529785  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t3738529785 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t3738529785  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t3229287507_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t3229287507  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t3229287507  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t3229287507  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t3229287507 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t3229287507  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t3229287507  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t3229287507 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t3229287507  value)
	{
		___MaxValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T3229287507_H
#ifndef DAYOFWEEK_T3650621421_H
#define DAYOFWEEK_T3650621421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DayOfWeek
struct  DayOfWeek_t3650621421 
{
public:
	// System.Int32 System.DayOfWeek::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DayOfWeek_t3650621421, ___value___2)); }
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
#endif // DAYOFWEEK_T3650621421_H
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
#ifndef LOADEROPTIMIZATION_T1484956347_H
#define LOADEROPTIMIZATION_T1484956347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LoaderOptimization
struct  LoaderOptimization_t1484956347 
{
public:
	// System.Int32 System.LoaderOptimization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoaderOptimization_t1484956347, ___value___2)); }
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
#endif // LOADEROPTIMIZATION_T1484956347_H
#ifndef MONOLIMITATIONATTRIBUTE_T3672514598_H
#define MONOLIMITATIONATTRIBUTE_T3672514598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoLimitationAttribute
struct  MonoLimitationAttribute_t3672514598  : public MonoTODOAttribute_t4131080581
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOLIMITATIONATTRIBUTE_T3672514598_H
#ifndef PADDINGMODE_T2546806710_H
#define PADDINGMODE_T2546806710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t2546806710 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PaddingMode_t2546806710, ___value___2)); }
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
#endif // PADDINGMODE_T2546806710_H
#ifndef SYMMETRICTRANSFORM_T3802591842_H
#define SYMMETRICTRANSFORM_T3802591842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t3802591842  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t4254223087 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t4116647657* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t4116647657* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t4116647657* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t4116647657* ___workout_6;
	// System.Security.Cryptography.PaddingMode Mono.Security.Cryptography.SymmetricTransform::padmode
	int32_t ___padmode_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t386037858 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___algo_0)); }
	inline SymmetricAlgorithm_t4254223087 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t4254223087 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t4254223087 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___temp_3)); }
	inline ByteU5BU5D_t4116647657* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t4116647657* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___temp2_4)); }
	inline ByteU5BU5D_t4116647657* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t4116647657* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___workBuff_5)); }
	inline ByteU5BU5D_t4116647657* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t4116647657* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___workout_6)); }
	inline ByteU5BU5D_t4116647657* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t4116647657* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_padmode_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___padmode_7)); }
	inline int32_t get_padmode_7() const { return ___padmode_7; }
	inline int32_t* get_address_of_padmode_7() { return &___padmode_7; }
	inline void set_padmode_7(int32_t value)
	{
		___padmode_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackByte_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___FeedBackByte_8)); }
	inline int32_t get_FeedBackByte_8() const { return ___FeedBackByte_8; }
	inline int32_t* get_address_of_FeedBackByte_8() { return &___FeedBackByte_8; }
	inline void set_FeedBackByte_8(int32_t value)
	{
		___FeedBackByte_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ____rng_11)); }
	inline RandomNumberGenerator_t386037858 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t386037858 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T3802591842_H
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
#ifndef ATTRIBUTEUSAGEATTRIBUTE_T290877318_H
#define ATTRIBUTEUSAGEATTRIBUTE_T290877318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeUsageAttribute
struct  AttributeUsageAttribute_t290877318  : public Attribute_t861562559
{
public:
	// System.AttributeTargets System.AttributeUsageAttribute::m_attributeTarget
	int32_t ___m_attributeTarget_0;
	// System.Boolean System.AttributeUsageAttribute::m_allowMultiple
	bool ___m_allowMultiple_1;
	// System.Boolean System.AttributeUsageAttribute::m_inherited
	bool ___m_inherited_2;

public:
	inline static int32_t get_offset_of_m_attributeTarget_0() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_t290877318, ___m_attributeTarget_0)); }
	inline int32_t get_m_attributeTarget_0() const { return ___m_attributeTarget_0; }
	inline int32_t* get_address_of_m_attributeTarget_0() { return &___m_attributeTarget_0; }
	inline void set_m_attributeTarget_0(int32_t value)
	{
		___m_attributeTarget_0 = value;
	}

	inline static int32_t get_offset_of_m_allowMultiple_1() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_t290877318, ___m_allowMultiple_1)); }
	inline bool get_m_allowMultiple_1() const { return ___m_allowMultiple_1; }
	inline bool* get_address_of_m_allowMultiple_1() { return &___m_allowMultiple_1; }
	inline void set_m_allowMultiple_1(bool value)
	{
		___m_allowMultiple_1 = value;
	}

	inline static int32_t get_offset_of_m_inherited_2() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_t290877318, ___m_inherited_2)); }
	inline bool get_m_inherited_2() const { return ___m_inherited_2; }
	inline bool* get_address_of_m_inherited_2() { return &___m_inherited_2; }
	inline void set_m_inherited_2(bool value)
	{
		___m_inherited_2 = value;
	}
};

struct AttributeUsageAttribute_t290877318_StaticFields
{
public:
	// System.AttributeUsageAttribute System.AttributeUsageAttribute::Default
	AttributeUsageAttribute_t290877318 * ___Default_3;

public:
	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_t290877318_StaticFields, ___Default_3)); }
	inline AttributeUsageAttribute_t290877318 * get_Default_3() const { return ___Default_3; }
	inline AttributeUsageAttribute_t290877318 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(AttributeUsageAttribute_t290877318 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEUSAGEATTRIBUTE_T290877318_H
#ifndef CONSOLECANCELEVENTARGS_T3423053037_H
#define CONSOLECANCELEVENTARGS_T3423053037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleCancelEventArgs
struct  ConsoleCancelEventArgs_t3423053037  : public EventArgs_t3591816995
{
public:
	// System.ConsoleSpecialKey System.ConsoleCancelEventArgs::_type
	int32_t ____type_1;
	// System.Boolean System.ConsoleCancelEventArgs::_cancel
	bool ____cancel_2;

public:
	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(ConsoleCancelEventArgs_t3423053037, ____type_1)); }
	inline int32_t get__type_1() const { return ____type_1; }
	inline int32_t* get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(int32_t value)
	{
		____type_1 = value;
	}

	inline static int32_t get_offset_of__cancel_2() { return static_cast<int32_t>(offsetof(ConsoleCancelEventArgs_t3423053037, ____cancel_2)); }
	inline bool get__cancel_2() const { return ____cancel_2; }
	inline bool* get_address_of__cancel_2() { return &____cancel_2; }
	inline void set__cancel_2(bool value)
	{
		____cancel_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLECANCELEVENTARGS_T3423053037_H
#ifndef CONSOLEKEYINFO_T1802691652_H
#define CONSOLEKEYINFO_T1802691652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleKeyInfo
struct  ConsoleKeyInfo_t1802691652 
{
public:
	// System.Char System.ConsoleKeyInfo::_keyChar
	Il2CppChar ____keyChar_0;
	// System.ConsoleKey System.ConsoleKeyInfo::_key
	int32_t ____key_1;
	// System.ConsoleModifiers System.ConsoleKeyInfo::_mods
	int32_t ____mods_2;

public:
	inline static int32_t get_offset_of__keyChar_0() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t1802691652, ____keyChar_0)); }
	inline Il2CppChar get__keyChar_0() const { return ____keyChar_0; }
	inline Il2CppChar* get_address_of__keyChar_0() { return &____keyChar_0; }
	inline void set__keyChar_0(Il2CppChar value)
	{
		____keyChar_0 = value;
	}

	inline static int32_t get_offset_of__key_1() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t1802691652, ____key_1)); }
	inline int32_t get__key_1() const { return ____key_1; }
	inline int32_t* get_address_of__key_1() { return &____key_1; }
	inline void set__key_1(int32_t value)
	{
		____key_1 = value;
	}

	inline static int32_t get_offset_of__mods_2() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t1802691652, ____mods_2)); }
	inline int32_t get__mods_2() const { return ____mods_2; }
	inline int32_t* get_address_of__mods_2() { return &____mods_2; }
	inline void set__mods_2(int32_t value)
	{
		____mods_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ConsoleKeyInfo
struct ConsoleKeyInfo_t1802691652_marshaled_pinvoke
{
	uint8_t ____keyChar_0;
	int32_t ____key_1;
	int32_t ____mods_2;
};
// Native definition for COM marshalling of System.ConsoleKeyInfo
struct ConsoleKeyInfo_t1802691652_marshaled_com
{
	uint8_t ____keyChar_0;
	int32_t ____key_1;
	int32_t ____mods_2;
};
#endif // CONSOLEKEYINFO_T1802691652_H
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
#ifndef PRIMALITYTEST_T1539325943_H
#define PRIMALITYTEST_T1539325943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTest
struct  PrimalityTest_t1539325943  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTEST_T1539325943_H
#ifndef KEYGENERATEDEVENTHANDLER_T3828027274_H
#define KEYGENERATEDEVENTHANDLER_T3828027274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct  KeyGeneratedEventHandler_t3828027274  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYGENERATEDEVENTHANDLER_T3828027274_H
#ifndef KEYGENERATEDEVENTHANDLER_T3064139577_H
#define KEYGENERATEDEVENTHANDLER_T3064139577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct  KeyGeneratedEventHandler_t3064139577  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYGENERATEDEVENTHANDLER_T3064139577_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
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
#ifndef CONSOLECANCELEVENTHANDLER_T3919940372_H
#define CONSOLECANCELEVENTHANDLER_T3919940372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleCancelEventHandler
struct  ConsoleCancelEventHandler_t3919940372  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLECANCELEVENTHANDLER_T3919940372_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize100 = { sizeof (EncryptedPrivateKeyInfo_t862116835), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable100[4] = 
{
	EncryptedPrivateKeyInfo_t862116835::get_offset_of__algorithm_0(),
	EncryptedPrivateKeyInfo_t862116835::get_offset_of__salt_1(),
	EncryptedPrivateKeyInfo_t862116835::get_offset_of__iterations_2(),
	EncryptedPrivateKeyInfo_t862116835::get_offset_of__data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize101 = { sizeof (RSAManaged_t1757093819), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable101[13] = 
{
	RSAManaged_t1757093819::get_offset_of_isCRTpossible_2(),
	RSAManaged_t1757093819::get_offset_of_keyBlinding_3(),
	RSAManaged_t1757093819::get_offset_of_keypairGenerated_4(),
	RSAManaged_t1757093819::get_offset_of_m_disposed_5(),
	RSAManaged_t1757093819::get_offset_of_d_6(),
	RSAManaged_t1757093819::get_offset_of_p_7(),
	RSAManaged_t1757093819::get_offset_of_q_8(),
	RSAManaged_t1757093819::get_offset_of_dp_9(),
	RSAManaged_t1757093819::get_offset_of_dq_10(),
	RSAManaged_t1757093819::get_offset_of_qInv_11(),
	RSAManaged_t1757093819::get_offset_of_n_12(),
	RSAManaged_t1757093819::get_offset_of_e_13(),
	RSAManaged_t1757093819::get_offset_of_KeyGenerated_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize102 = { sizeof (KeyGeneratedEventHandler_t3064139577), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize103 = { sizeof (SymmetricTransform_t3802591842), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable103[12] = 
{
	SymmetricTransform_t3802591842::get_offset_of_algo_0(),
	SymmetricTransform_t3802591842::get_offset_of_encrypt_1(),
	SymmetricTransform_t3802591842::get_offset_of_BlockSizeByte_2(),
	SymmetricTransform_t3802591842::get_offset_of_temp_3(),
	SymmetricTransform_t3802591842::get_offset_of_temp2_4(),
	SymmetricTransform_t3802591842::get_offset_of_workBuff_5(),
	SymmetricTransform_t3802591842::get_offset_of_workout_6(),
	SymmetricTransform_t3802591842::get_offset_of_padmode_7(),
	SymmetricTransform_t3802591842::get_offset_of_FeedBackByte_8(),
	SymmetricTransform_t3802591842::get_offset_of_m_disposed_9(),
	SymmetricTransform_t3802591842::get_offset_of_lastBlock_10(),
	SymmetricTransform_t3802591842::get_offset_of__rng_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize104 = { sizeof (DSAManaged_t2800260182), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable104[13] = 
{
	DSAManaged_t2800260182::get_offset_of_keypairGenerated_2(),
	DSAManaged_t2800260182::get_offset_of_m_disposed_3(),
	DSAManaged_t2800260182::get_offset_of_p_4(),
	DSAManaged_t2800260182::get_offset_of_q_5(),
	DSAManaged_t2800260182::get_offset_of_g_6(),
	DSAManaged_t2800260182::get_offset_of_x_7(),
	DSAManaged_t2800260182::get_offset_of_y_8(),
	DSAManaged_t2800260182::get_offset_of_j_9(),
	DSAManaged_t2800260182::get_offset_of_seed_10(),
	DSAManaged_t2800260182::get_offset_of_counter_11(),
	DSAManaged_t2800260182::get_offset_of_j_missing_12(),
	DSAManaged_t2800260182::get_offset_of_rng_13(),
	DSAManaged_t2800260182::get_offset_of_KeyGenerated_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize105 = { sizeof (KeyGeneratedEventHandler_t3828027274), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize106 = { sizeof (AuthenticodeBase_t263562949), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable106[8] = 
{
	AuthenticodeBase_t263562949::get_offset_of_fileblock_0(),
	AuthenticodeBase_t263562949::get_offset_of_fs_1(),
	AuthenticodeBase_t263562949::get_offset_of_blockNo_2(),
	AuthenticodeBase_t263562949::get_offset_of_blockLength_3(),
	AuthenticodeBase_t263562949::get_offset_of_peOffset_4(),
	AuthenticodeBase_t263562949::get_offset_of_dirSecurityOffset_5(),
	AuthenticodeBase_t263562949::get_offset_of_dirSecuritySize_6(),
	AuthenticodeBase_t263562949::get_offset_of_coffSymbolTableOffset_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize107 = { sizeof (AuthenticodeDeformatter_t88130231), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable107[12] = 
{
	AuthenticodeDeformatter_t88130231::get_offset_of_filename_8(),
	AuthenticodeDeformatter_t88130231::get_offset_of_hash_9(),
	AuthenticodeDeformatter_t88130231::get_offset_of_coll_10(),
	AuthenticodeDeformatter_t88130231::get_offset_of_signedHash_11(),
	AuthenticodeDeformatter_t88130231::get_offset_of_timestamp_12(),
	AuthenticodeDeformatter_t88130231::get_offset_of_signingCertificate_13(),
	AuthenticodeDeformatter_t88130231::get_offset_of_reason_14(),
	AuthenticodeDeformatter_t88130231::get_offset_of_trustedRoot_15(),
	AuthenticodeDeformatter_t88130231::get_offset_of_trustedTimestampRoot_16(),
	AuthenticodeDeformatter_t88130231::get_offset_of_entry_17(),
	AuthenticodeDeformatter_t88130231::get_offset_of_signerChain_18(),
	AuthenticodeDeformatter_t88130231::get_offset_of_timestampChain_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize108 = { sizeof (BigInteger_t2902905089), -1, sizeof(BigInteger_t2902905089_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable108[4] = 
{
	BigInteger_t2902905089::get_offset_of_length_0(),
	BigInteger_t2902905089::get_offset_of_data_1(),
	BigInteger_t2902905089_StaticFields::get_offset_of_smallPrimes_2(),
	BigInteger_t2902905089_StaticFields::get_offset_of_rng_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize109 = { sizeof (Sign_t3338384038)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable109[4] = 
{
	Sign_t3338384038::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize110 = { sizeof (ModulusRing_t596511504), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable110[2] = 
{
	ModulusRing_t596511504::get_offset_of_mod_0(),
	ModulusRing_t596511504::get_offset_of_constant_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize111 = { sizeof (Kernel_t1402667219), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize112 = { sizeof (ConfidenceFactor_t2516000285)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable112[7] = 
{
	ConfidenceFactor_t2516000285::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize113 = { sizeof (PrimalityTest_t1539325943), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize114 = { sizeof (PrimalityTests_t1538473975), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize115 = { sizeof (PrimeGeneratorBase_t446028866), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize116 = { sizeof (SequentialSearchPrimeGeneratorBase_t2996090508), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize117 = { sizeof (ThrowHelper_t481305680), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize118 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize119 = { sizeof (ValueTuple_t3168505507)+ sizeof (RuntimeObject), sizeof(ValueTuple_t3168505507 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize120 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable120[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize121 = { sizeof (RuntimeArray), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize122 = { sizeof (ArrayEnumerator_t572707261), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable122[3] = 
{
	ArrayEnumerator_t572707261::get_offset_of__array_0(),
	ArrayEnumerator_t572707261::get_offset_of__index_1(),
	ArrayEnumerator_t572707261::get_offset_of__endIndex_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize123 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable123[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize124 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable124[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize125 = { sizeof (SorterObjectArray_t2043158284)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable125[3] = 
{
	SorterObjectArray_t2043158284::get_offset_of_keys_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SorterObjectArray_t2043158284::get_offset_of_items_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SorterObjectArray_t2043158284::get_offset_of_comparer_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize126 = { sizeof (SorterGenericArray_t3557937876)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable126[3] = 
{
	SorterGenericArray_t3557937876::get_offset_of_keys_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SorterGenericArray_t3557937876::get_offset_of_items_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SorterGenericArray_t3557937876::get_offset_of_comparer_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize127 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize128 = { sizeof (Tuple_t963300607), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize129 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable129[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize130 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable130[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize131 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable131[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize132 = { sizeof (MonoTODOAttribute_t4131080581), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable132[1] = 
{
	MonoTODOAttribute_t4131080581::get_offset_of_comment_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize133 = { sizeof (MonoLimitationAttribute_t3672514598), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize134 = { sizeof (AggregateException_t3586243216), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable134[1] = 
{
	AggregateException_t3586243216::get_offset_of_m_innerExceptions_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize135 = { sizeof (AppContext_t1196086570), -1, sizeof(AppContext_t1196086570_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable135[2] = 
{
	AppContext_t1196086570_StaticFields::get_offset_of_s_switchMap_0(),
	AppContext_t1196086570_StaticFields::get_offset_of_s_defaultsInitialized_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize136 = { sizeof (SwitchValueState_t2805251467)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable136[5] = 
{
	SwitchValueState_t2805251467::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize137 = { sizeof (AppContextSwitches_t4163756012), -1, sizeof(AppContextSwitches_t4163756012_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable137[3] = 
{
	AppContextSwitches_t4163756012_StaticFields::get_offset_of__noAsyncCurrentCulture_0(),
	AppContextSwitches_t4163756012_StaticFields::get_offset_of__throwExceptionIfDisposedCancellationTokenSource_1(),
	AppContextSwitches_t4163756012_StaticFields::get_offset_of_U3CDisableCachingU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize138 = { sizeof (__Filters_t550753867), -1, sizeof(__Filters_t550753867_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable138[1] = 
{
	__Filters_t550753867_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize139 = { sizeof (LocalDataStoreHolder_t2567786569), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable139[1] = 
{
	LocalDataStoreHolder_t2567786569::get_offset_of_m_Store_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize140 = { sizeof (LocalDataStoreElement_t4055991005), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable140[2] = 
{
	LocalDataStoreElement_t4055991005::get_offset_of_m_value_0(),
	LocalDataStoreElement_t4055991005::get_offset_of_m_cookie_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize141 = { sizeof (LocalDataStore_t3383582627), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable141[2] = 
{
	LocalDataStore_t3383582627::get_offset_of_m_DataTable_0(),
	LocalDataStore_t3383582627::get_offset_of_m_Manager_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize142 = { sizeof (LocalDataStoreSlot_t740841968), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable142[3] = 
{
	LocalDataStoreSlot_t740841968::get_offset_of_m_mgr_0(),
	LocalDataStoreSlot_t740841968::get_offset_of_m_slot_1(),
	LocalDataStoreSlot_t740841968::get_offset_of_m_cookie_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize143 = { sizeof (LocalDataStoreMgr_t1707895399), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable143[5] = 
{
	LocalDataStoreMgr_t1707895399::get_offset_of_m_SlotInfoTable_0(),
	LocalDataStoreMgr_t1707895399::get_offset_of_m_FirstAvailableSlot_1(),
	LocalDataStoreMgr_t1707895399::get_offset_of_m_ManagedLocalDataStores_2(),
	LocalDataStoreMgr_t1707895399::get_offset_of_m_KeyToSlotMap_3(),
	LocalDataStoreMgr_t1707895399::get_offset_of_m_CookieGenerator_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize144 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize145 = { sizeof (Action_t1264377477), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize146 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize147 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize148 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize149 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize150 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize151 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize152 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize153 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize154 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize155 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize156 = { sizeof (Activator_t1841325713), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize157 = { sizeof (LoaderOptimization_t1484956347)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable157[7] = 
{
	LoaderOptimization_t1484956347::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize158 = { sizeof (AppDomainUnloadedException_t2857636191), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize159 = { sizeof (ApplicationException_t2339761290), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize160 = { sizeof (ArgumentException_t132251570), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable160[1] = 
{
	ArgumentException_t132251570::get_offset_of_m_paramName_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize161 = { sizeof (ArgumentNullException_t1615371798), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize162 = { sizeof (ArgumentOutOfRangeException_t777629997), -1, sizeof(ArgumentOutOfRangeException_t777629997_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable162[2] = 
{
	ArgumentOutOfRangeException_t777629997_StaticFields::get_offset_of__rangeMessage_18(),
	ArgumentOutOfRangeException_t777629997::get_offset_of_m_actualValue_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize163 = { sizeof (ArithmeticException_t4283546778), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize164 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable164[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize165 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable165[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize166 = { sizeof (ArrayTypeMismatchException_t2342549375), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize167 = { sizeof (AsyncCallback_t3962456242), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize168 = { sizeof (Attribute_t861562559), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize169 = { sizeof (AttributeTargets_t1784037988)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable169[17] = 
{
	AttributeTargets_t1784037988::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize170 = { sizeof (AttributeUsageAttribute_t290877318), -1, sizeof(AttributeUsageAttribute_t290877318_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable170[4] = 
{
	AttributeUsageAttribute_t290877318::get_offset_of_m_attributeTarget_0(),
	AttributeUsageAttribute_t290877318::get_offset_of_m_allowMultiple_1(),
	AttributeUsageAttribute_t290877318::get_offset_of_m_inherited_2(),
	AttributeUsageAttribute_t290877318_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize171 = { sizeof (BadImageFormatException_t251534586), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable171[2] = 
{
	BadImageFormatException_t251534586::get_offset_of__fileName_17(),
	BadImageFormatException_t251534586::get_offset_of__fusionLog_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize172 = { sizeof (BitConverter_t3118986983), -1, sizeof(BitConverter_t3118986983_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable172[1] = 
{
	BitConverter_t3118986983_StaticFields::get_offset_of_IsLittleEndian_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize173 = { sizeof (Boolean_t97287965)+ sizeof (RuntimeObject), 4, sizeof(Boolean_t97287965_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable173[7] = 
{
	Boolean_t97287965::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	Boolean_t97287965_StaticFields::get_offset_of_TrueString_5(),
	Boolean_t97287965_StaticFields::get_offset_of_FalseString_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize174 = { sizeof (Buffer_t1599081364), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize175 = { sizeof (Byte_t1134296376)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable175[3] = 
{
	Byte_t1134296376::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize176 = { sizeof (CannotUnloadAppDomainException_t2990071197), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize177 = { sizeof (Char_t3634460470)+ sizeof (RuntimeObject), 1, sizeof(Char_t3634460470_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable177[9] = 
{
	Char_t3634460470::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	Char_t3634460470_StaticFields::get_offset_of_categoryForLatin1_3(),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize178 = { sizeof (CharEnumerator_t1121470421), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable178[3] = 
{
	CharEnumerator_t1121470421::get_offset_of_str_0(),
	CharEnumerator_t1121470421::get_offset_of_index_1(),
	CharEnumerator_t1121470421::get_offset_of_currentElement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize179 = { sizeof (CLSCompliantAttribute_t999444765), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable179[1] = 
{
	CLSCompliantAttribute_t999444765::get_offset_of_m_compliant_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize180 = { sizeof (ConsoleCancelEventHandler_t3919940372), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize181 = { sizeof (ConsoleCancelEventArgs_t3423053037), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable181[2] = 
{
	ConsoleCancelEventArgs_t3423053037::get_offset_of__type_1(),
	ConsoleCancelEventArgs_t3423053037::get_offset_of__cancel_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize182 = { sizeof (ConsoleColor_t2680034144)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable182[17] = 
{
	ConsoleColor_t2680034144::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize183 = { sizeof (ConsoleKey_t4097401472)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable183[145] = 
{
	ConsoleKey_t4097401472::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize184 = { sizeof (ConsoleKeyInfo_t1802691652)+ sizeof (RuntimeObject), sizeof(ConsoleKeyInfo_t1802691652_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable184[3] = 
{
	ConsoleKeyInfo_t1802691652::get_offset_of__keyChar_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConsoleKeyInfo_t1802691652::get_offset_of__key_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConsoleKeyInfo_t1802691652::get_offset_of__mods_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize185 = { sizeof (ConsoleModifiers_t1471011467)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable185[4] = 
{
	ConsoleModifiers_t1471011467::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize186 = { sizeof (ConsoleSpecialKey_t3452252982)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable186[3] = 
{
	ConsoleSpecialKey_t3452252982::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize187 = { sizeof (ContextBoundObject_t1394786030), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize188 = { sizeof (ContextMarshalException_t3675971023), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize189 = { sizeof (ContextStaticAttribute_t2700898555), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize190 = { sizeof (Base64FormattingOptions_t1508405059)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable190[3] = 
{
	Base64FormattingOptions_t1508405059::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize191 = { sizeof (Convert_t2465617642), -1, sizeof(Convert_t2465617642_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable191[4] = 
{
	Convert_t2465617642_StaticFields::get_offset_of_ConvertTypes_0(),
	Convert_t2465617642_StaticFields::get_offset_of_EnumType_1(),
	Convert_t2465617642_StaticFields::get_offset_of_base64Table_2(),
	Convert_t2465617642_StaticFields::get_offset_of_DBNull_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize192 = { sizeof (DateTime_t3738529785)+ sizeof (RuntimeObject), -1, sizeof(DateTime_t3738529785_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable192[45] = 
{
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
	DateTime_t3738529785_StaticFields::get_offset_of_DaysToMonth365_29(),
	DateTime_t3738529785_StaticFields::get_offset_of_DaysToMonth366_30(),
	DateTime_t3738529785_StaticFields::get_offset_of_MinValue_31(),
	DateTime_t3738529785_StaticFields::get_offset_of_MaxValue_32(),
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
	DateTime_t3738529785::get_offset_of_dateData_44() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize193 = { sizeof (DateTimeKind_t3468814247)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable193[4] = 
{
	DateTimeKind_t3468814247::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize194 = { sizeof (DateTimeOffset_t3229287507)+ sizeof (RuntimeObject), -1, sizeof(DateTimeOffset_t3229287507_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable194[4] = 
{
	DateTimeOffset_t3229287507_StaticFields::get_offset_of_MinValue_0(),
	DateTimeOffset_t3229287507_StaticFields::get_offset_of_MaxValue_1(),
	DateTimeOffset_t3229287507::get_offset_of_m_dateTime_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeOffset_t3229287507::get_offset_of_m_offsetMinutes_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize195 = { sizeof (DayOfWeek_t3650621421)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable195[8] = 
{
	DayOfWeek_t3650621421::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize196 = { sizeof (DBNull_t3725197148), -1, sizeof(DBNull_t3725197148_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable196[1] = 
{
	DBNull_t3725197148_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize197 = { sizeof (Decimal_t2948259380)+ sizeof (RuntimeObject), sizeof(Decimal_t2948259380 ), sizeof(Decimal_t2948259380_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable197[18] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	Decimal_t2948259380_StaticFields::get_offset_of_Powers10_6(),
	Decimal_t2948259380_StaticFields::get_offset_of_Zero_7(),
	Decimal_t2948259380_StaticFields::get_offset_of_One_8(),
	Decimal_t2948259380_StaticFields::get_offset_of_MinusOne_9(),
	Decimal_t2948259380_StaticFields::get_offset_of_MaxValue_10(),
	Decimal_t2948259380_StaticFields::get_offset_of_MinValue_11(),
	Decimal_t2948259380_StaticFields::get_offset_of_NearNegativeZero_12(),
	Decimal_t2948259380_StaticFields::get_offset_of_NearPositiveZero_13(),
	Decimal_t2948259380::get_offset_of_flags_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Decimal_t2948259380::get_offset_of_hi_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Decimal_t2948259380::get_offset_of_lo_16() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Decimal_t2948259380::get_offset_of_mid_17() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize198 = { sizeof (DefaultBinder_t3032604929), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize199 = { sizeof (BinderState_t1273278376), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable199[3] = 
{
	BinderState_t1273278376::get_offset_of_m_argsMap_0(),
	BinderState_t1273278376::get_offset_of_m_originalSize_1(),
	BinderState_t1273278376::get_offset_of_m_isParamArray_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
