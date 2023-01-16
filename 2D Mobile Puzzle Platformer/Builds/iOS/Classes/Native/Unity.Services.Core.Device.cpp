#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Unity.Services.Core.Device.IUserIdentifierProvider
struct IUserIdentifierProvider_t40461661E5FE07A813535047577423A33D6BE3A2;
// Unity.Services.Core.Device.InstallationId
struct InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// Unity.Services.Core.Device.UnityAdsIdentifier
struct UnityAdsIdentifier_t8F72F655179A6E8A20AD5029FA932010F90F2A8A;
// Unity.Services.Core.Device.UnityAnalyticsIdentifier
struct UnityAnalyticsIdentifier_t5D4BCB7199D7C9C19B36BFE173AA04FDA446B4FE;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUserIdentifierProvider_t40461661E5FE07A813535047577423A33D6BE3A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsIdentifier_t8F72F655179A6E8A20AD5029FA932010F90F2A8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAnalyticsIdentifier_t5D4BCB7199D7C9C19B36BFE173AA04FDA446B4FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2;
IL2CPP_EXTERN_C String_t* _stringLiteral9802A0C242B6B1F11EC74461BB2DF09CE62B8035;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralECBE14D0ACE36FACE92343327DF7DFEC932523A5;
IL2CPP_EXTERN_C const RuntimeMethod* NSUserDefaults_GetString_mEB87AF0587165433A76CFB068B1FFFD2204E45A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NSUserDefaults_SetString_mD5CF4B504516767863122F21EF03995619DE3F6D_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6BFD4691657B5AF1743EAC801518488AC553BCF4 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// Unity.Services.Core.Device.InstallationId
struct InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A  : public RuntimeObject
{
public:
	// System.String Unity.Services.Core.Device.InstallationId::Identifier
	String_t* ___Identifier_0;
	// Unity.Services.Core.Device.IUserIdentifierProvider Unity.Services.Core.Device.InstallationId::UnityAdsIdentifierProvider
	RuntimeObject* ___UnityAdsIdentifierProvider_1;
	// Unity.Services.Core.Device.IUserIdentifierProvider Unity.Services.Core.Device.InstallationId::UnityAnalyticsIdentifierProvider
	RuntimeObject* ___UnityAnalyticsIdentifierProvider_2;

public:
	inline static int32_t get_offset_of_Identifier_0() { return static_cast<int32_t>(offsetof(InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A, ___Identifier_0)); }
	inline String_t* get_Identifier_0() const { return ___Identifier_0; }
	inline String_t** get_address_of_Identifier_0() { return &___Identifier_0; }
	inline void set_Identifier_0(String_t* value)
	{
		___Identifier_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Identifier_0), (void*)value);
	}

	inline static int32_t get_offset_of_UnityAdsIdentifierProvider_1() { return static_cast<int32_t>(offsetof(InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A, ___UnityAdsIdentifierProvider_1)); }
	inline RuntimeObject* get_UnityAdsIdentifierProvider_1() const { return ___UnityAdsIdentifierProvider_1; }
	inline RuntimeObject** get_address_of_UnityAdsIdentifierProvider_1() { return &___UnityAdsIdentifierProvider_1; }
	inline void set_UnityAdsIdentifierProvider_1(RuntimeObject* value)
	{
		___UnityAdsIdentifierProvider_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnityAdsIdentifierProvider_1), (void*)value);
	}

	inline static int32_t get_offset_of_UnityAnalyticsIdentifierProvider_2() { return static_cast<int32_t>(offsetof(InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A, ___UnityAnalyticsIdentifierProvider_2)); }
	inline RuntimeObject* get_UnityAnalyticsIdentifierProvider_2() const { return ___UnityAnalyticsIdentifierProvider_2; }
	inline RuntimeObject** get_address_of_UnityAnalyticsIdentifierProvider_2() { return &___UnityAnalyticsIdentifierProvider_2; }
	inline void set_UnityAnalyticsIdentifierProvider_2(RuntimeObject* value)
	{
		___UnityAnalyticsIdentifierProvider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnityAnalyticsIdentifierProvider_2), (void*)value);
	}
};


// Unity.Services.Core.Device.NSUserDefaults
struct NSUserDefaults_t1FF035702AC57B52F0985A7EFFB3562D63E58511  : public RuntimeObject
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


// Unity.Services.Core.Device.UnityAdsIdentifier
struct UnityAdsIdentifier_t8F72F655179A6E8A20AD5029FA932010F90F2A8A  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Core.Device.UnityAnalyticsIdentifier
struct UnityAnalyticsIdentifier_t5D4BCB7199D7C9C19B36BFE173AA04FDA446B4FE  : public RuntimeObject
{
public:

public:
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


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
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


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Device.UnityAdsIdentifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsIdentifier__ctor_m3765D3DA8A4A60CC29D6F8CD6ECA1447899E8F39 (UnityAdsIdentifier_t8F72F655179A6E8A20AD5029FA932010F90F2A8A * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Device.UnityAnalyticsIdentifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAnalyticsIdentifier__ctor_m3CE328162A0FE019519DEBFE90AFC0AC4BB95032 (UnityAnalyticsIdentifier_t5D4BCB7199D7C9C19B36BFE173AA04FDA446B4FE * __this, const RuntimeMethod* method);
// System.String Unity.Services.Core.Device.InstallationId::ReadIdentifierFromFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InstallationId_ReadIdentifierFromFile_m0E4A4EA2FBD807E88D989A6D69231773B0EAB7B0 (const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String Unity.Services.Core.Device.InstallationId::GenerateGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InstallationId_GenerateGuid_mB93F33EAAB95478CF5E5AFB4493908269BCF3DCE (const RuntimeMethod* method);
// System.Void Unity.Services.Core.Device.InstallationId::WriteIdentifierToFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId_WriteIdentifierToFile_mD644147932CFE2BEB56BCB3C110C4A5471549DC4 (String_t* ___identifier0, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC (const RuntimeMethod* method);
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0 (const RuntimeMethod* method);
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75 (Guid_t * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.String Unity.Services.Core.Device.NSUserDefaults::UserDefaultsGetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSUserDefaults_UserDefaultsGetString_m6E8766AEC2BAFF800C20B9B3AA4449905F7CA803 (String_t* ___key0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Device.NSUserDefaults::UserDefaultsSetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSUserDefaults_UserDefaultsSetString_mFAF50B47113ACACE3213FF44593B55C58E45240A (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.String Unity.Services.Core.Device.UnityAdsIdentifier::get_IdentifierForInstallIos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityAdsIdentifier_get_IdentifierForInstallIos_mB822301EF18C8FE6E34685785B198D32A4A5FE6F (const RuntimeMethod* method);
// System.Void Unity.Services.Core.Device.UnityAdsIdentifier::set_IdentifierForInstallIos(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsIdentifier_set_IdentifierForInstallIos_m541ABFA6883FA10A8E8507320AB3D63C8B3D72B6 (String_t* ___value0, const RuntimeMethod* method);
// System.String Unity.Services.Core.Device.NSUserDefaults::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSUserDefaults_GetString_mEB87AF0587165433A76CFB068B1FFFD2204E45A8 (String_t* ___key0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Device.NSUserDefaults::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSUserDefaults_SetString_mD5CF4B504516767863122F21EF03995619DE3F6D (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
IL2CPP_EXTERN_C char* DEFAULT_CALL UOCPUserDefaultsGetString(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL UOCPUserDefaultsSetString(char*, char*);
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
// System.Void Unity.Services.Core.Device.InstallationId::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId__ctor_m639C8440CCFB01C47A91C4836EE10633AFACCB18 (InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsIdentifier_t8F72F655179A6E8A20AD5029FA932010F90F2A8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAnalyticsIdentifier_t5D4BCB7199D7C9C19B36BFE173AA04FDA446B4FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public InstallationId()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// UnityAdsIdentifierProvider = new UnityAdsIdentifier();
		UnityAdsIdentifier_t8F72F655179A6E8A20AD5029FA932010F90F2A8A * L_0 = (UnityAdsIdentifier_t8F72F655179A6E8A20AD5029FA932010F90F2A8A *)il2cpp_codegen_object_new(UnityAdsIdentifier_t8F72F655179A6E8A20AD5029FA932010F90F2A8A_il2cpp_TypeInfo_var);
		UnityAdsIdentifier__ctor_m3765D3DA8A4A60CC29D6F8CD6ECA1447899E8F39(L_0, /*hidden argument*/NULL);
		__this->set_UnityAdsIdentifierProvider_1(L_0);
		// UnityAnalyticsIdentifierProvider = new UnityAnalyticsIdentifier();
		UnityAnalyticsIdentifier_t5D4BCB7199D7C9C19B36BFE173AA04FDA446B4FE * L_1 = (UnityAnalyticsIdentifier_t5D4BCB7199D7C9C19B36BFE173AA04FDA446B4FE *)il2cpp_codegen_object_new(UnityAnalyticsIdentifier_t5D4BCB7199D7C9C19B36BFE173AA04FDA446B4FE_il2cpp_TypeInfo_var);
		UnityAnalyticsIdentifier__ctor_m3CE328162A0FE019519DEBFE90AFC0AC4BB95032(L_1, /*hidden argument*/NULL);
		__this->set_UnityAnalyticsIdentifierProvider_2(L_1);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Device.InstallationId::CreateIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId_CreateIdentifier_mBD7DDA32FAA6D3BC0DE7D6D214BE7E5DF5771069 (InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUserIdentifierProvider_t40461661E5FE07A813535047577423A33D6BE3A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// Identifier = ReadIdentifierFromFile();
		String_t* L_0;
		L_0 = InstallationId_ReadIdentifierFromFile_m0E4A4EA2FBD807E88D989A6D69231773B0EAB7B0(/*hidden argument*/NULL);
		__this->set_Identifier_0(L_0);
		// if (!string.IsNullOrEmpty(Identifier))
		String_t* L_1 = __this->get_Identifier_0();
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		return;
	}

IL_0019:
	{
		// var analyticsId = UnityAnalyticsIdentifierProvider.UserId;
		RuntimeObject* L_3 = __this->get_UnityAnalyticsIdentifierProvider_2();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Device.IUserIdentifierProvider::get_UserId() */, IUserIdentifierProvider_t40461661E5FE07A813535047577423A33D6BE3A2_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
		// var adsId = UnityAdsIdentifierProvider.UserId;
		RuntimeObject* L_5 = __this->get_UnityAdsIdentifierProvider_1();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Device.IUserIdentifierProvider::get_UserId() */, IUserIdentifierProvider_t40461661E5FE07A813535047577423A33D6BE3A2_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
		// if (!string.IsNullOrEmpty(analyticsId))
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0042;
		}
	}
	{
		// Identifier = analyticsId;
		String_t* L_9 = V_0;
		__this->set_Identifier_0(L_9);
		// }
		goto IL_005e;
	}

IL_0042:
	{
		// else if (!string.IsNullOrEmpty(adsId))
		String_t* L_10 = V_1;
		bool L_11;
		L_11 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0053;
		}
	}
	{
		// Identifier = adsId;
		String_t* L_12 = V_1;
		__this->set_Identifier_0(L_12);
		// }
		goto IL_005e;
	}

IL_0053:
	{
		// Identifier = GenerateGuid();
		String_t* L_13;
		L_13 = InstallationId_GenerateGuid_mB93F33EAAB95478CF5E5AFB4493908269BCF3DCE(/*hidden argument*/NULL);
		__this->set_Identifier_0(L_13);
	}

IL_005e:
	{
		// WriteIdentifierToFile(Identifier);
		String_t* L_14 = __this->get_Identifier_0();
		InstallationId_WriteIdentifierToFile_mD644147932CFE2BEB56BCB3C110C4A5471549DC4(L_14, /*hidden argument*/NULL);
		// if (string.IsNullOrEmpty(analyticsId))
		String_t* L_15 = V_0;
		bool L_16;
		L_16 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0082;
		}
	}
	{
		// UnityAnalyticsIdentifierProvider.UserId = Identifier;
		RuntimeObject* L_17 = __this->get_UnityAnalyticsIdentifierProvider_2();
		String_t* L_18 = __this->get_Identifier_0();
		NullCheck(L_17);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void Unity.Services.Core.Device.IUserIdentifierProvider::set_UserId(System.String) */, IUserIdentifierProvider_t40461661E5FE07A813535047577423A33D6BE3A2_il2cpp_TypeInfo_var, L_17, L_18);
	}

IL_0082:
	{
		// if (string.IsNullOrEmpty(adsId))
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_009b;
		}
	}
	{
		// UnityAdsIdentifierProvider.UserId = Identifier;
		RuntimeObject* L_21 = __this->get_UnityAdsIdentifierProvider_1();
		String_t* L_22 = __this->get_Identifier_0();
		NullCheck(L_21);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void Unity.Services.Core.Device.IUserIdentifierProvider::set_UserId(System.String) */, IUserIdentifierProvider_t40461661E5FE07A813535047577423A33D6BE3A2_il2cpp_TypeInfo_var, L_21, L_22);
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.String Unity.Services.Core.Device.InstallationId::ReadIdentifierFromFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InstallationId_ReadIdentifierFromFile_m0E4A4EA2FBD807E88D989A6D69231773B0EAB7B0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9802A0C242B6B1F11EC74461BB2DF09CE62B8035);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetString(k_UnityInstallationIdKey);
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral9802A0C242B6B1F11EC74461BB2DF09CE62B8035, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Core.Device.InstallationId::WriteIdentifierToFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId_WriteIdentifierToFile_mD644147932CFE2BEB56BCB3C110C4A5471549DC4 (String_t* ___identifier0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9802A0C242B6B1F11EC74461BB2DF09CE62B8035);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString(k_UnityInstallationIdKey, identifier);
		String_t* L_0 = ___identifier0;
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral9802A0C242B6B1F11EC74461BB2DF09CE62B8035, L_0, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Unity.Services.Core.Device.InstallationId::GenerateGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InstallationId_GenerateGuid_mB93F33EAAB95478CF5E5AFB4493908269BCF3DCE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Guid.NewGuid().ToString();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0;
		L_0 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_0), /*hidden argument*/NULL);
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
// System.String Unity.Services.Core.Device.NSUserDefaults::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSUserDefaults_GetString_mEB87AF0587165433A76CFB068B1FFFD2204E45A8 (String_t* ___key0, const RuntimeMethod* method)
{
	{
		// if (string.IsNullOrEmpty(key))
		String_t* L_0 = ___key0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NSUserDefaults_GetString_mEB87AF0587165433A76CFB068B1FFFD2204E45A8_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return UserDefaultsGetString(key);
		String_t* L_3 = ___key0;
		String_t* L_4;
		L_4 = NSUserDefaults_UserDefaultsGetString_m6E8766AEC2BAFF800C20B9B3AA4449905F7CA803(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Unity.Services.Core.Device.NSUserDefaults::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSUserDefaults_SetString_mD5CF4B504516767863122F21EF03995619DE3F6D (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		// if (string.IsNullOrEmpty(key))
		String_t* L_0 = ___key0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(key));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NSUserDefaults_SetString_mD5CF4B504516767863122F21EF03995619DE3F6D_RuntimeMethod_var)));
	}

IL_0013:
	{
		// UserDefaultsSetString(key, value);
		String_t* L_3 = ___key0;
		String_t* L_4 = ___value1;
		NSUserDefaults_UserDefaultsSetString_mFAF50B47113ACACE3213FF44593B55C58E45240A(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Unity.Services.Core.Device.NSUserDefaults::UserDefaultsGetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSUserDefaults_UserDefaultsGetString_m6E8766AEC2BAFF800C20B9B3AA4449905F7CA803 (String_t* ___key0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(UOCPUserDefaultsGetString)(____key0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Unity.Services.Core.Device.NSUserDefaults::UserDefaultsSetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSUserDefaults_UserDefaultsSetString_mFAF50B47113ACACE3213FF44593B55C58E45240A (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Marshaling of parameter '___value1' to native representation
	char* ____value1_marshaled = NULL;
	____value1_marshaled = il2cpp_codegen_marshal_string(___value1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UOCPUserDefaultsSetString)(____key0_marshaled, ____value1_marshaled);

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

	// Marshaling cleanup of parameter '___value1' native representation
	il2cpp_codegen_marshal_free(____value1_marshaled);
	____value1_marshaled = NULL;

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Services.Core.Device.UnityAdsIdentifier::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityAdsIdentifier_get_UserId_mB4CA93E5B3C306B5323B2730F077A00DAAAE7827 (UnityAdsIdentifier_t8F72F655179A6E8A20AD5029FA932010F90F2A8A * __this, const RuntimeMethod* method)
{
	{
		// return IdentifierForInstallIos;
		String_t* L_0;
		L_0 = UnityAdsIdentifier_get_IdentifierForInstallIos_mB822301EF18C8FE6E34685785B198D32A4A5FE6F(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Core.Device.UnityAdsIdentifier::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsIdentifier_set_UserId_mF5FAD79AE249C73084639759654110E6CF94B1D4 (UnityAdsIdentifier_t8F72F655179A6E8A20AD5029FA932010F90F2A8A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// IdentifierForInstallIos = value;
		String_t* L_0 = ___value0;
		UnityAdsIdentifier_set_IdentifierForInstallIos_m541ABFA6883FA10A8E8507320AB3D63C8B3D72B6(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Unity.Services.Core.Device.UnityAdsIdentifier::get_IdentifierForInstallIos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityAdsIdentifier_get_IdentifierForInstallIos_mB822301EF18C8FE6E34685785B198D32A4A5FE6F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECBE14D0ACE36FACE92343327DF7DFEC932523A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => NSUserDefaults.GetString(k_IdfiKey);
		String_t* L_0;
		L_0 = NSUserDefaults_GetString_mEB87AF0587165433A76CFB068B1FFFD2204E45A8(_stringLiteralECBE14D0ACE36FACE92343327DF7DFEC932523A5, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Core.Device.UnityAdsIdentifier::set_IdentifierForInstallIos(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsIdentifier_set_IdentifierForInstallIos_m541ABFA6883FA10A8E8507320AB3D63C8B3D72B6 (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECBE14D0ACE36FACE92343327DF7DFEC932523A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => NSUserDefaults.SetString(k_IdfiKey, value);
		String_t* L_0 = ___value0;
		NSUserDefaults_SetString_mD5CF4B504516767863122F21EF03995619DE3F6D(_stringLiteralECBE14D0ACE36FACE92343327DF7DFEC932523A5, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Device.UnityAdsIdentifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsIdentifier__ctor_m3765D3DA8A4A60CC29D6F8CD6ECA1447899E8F39 (UnityAdsIdentifier_t8F72F655179A6E8A20AD5029FA932010F90F2A8A * __this, const RuntimeMethod* method)
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
// System.String Unity.Services.Core.Device.UnityAnalyticsIdentifier::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityAnalyticsIdentifier_get_UserId_m7FEBB7DFC791C97211BDDFEF5036C268317B5C91 (UnityAnalyticsIdentifier_t5D4BCB7199D7C9C19B36BFE173AA04FDA446B4FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => PlayerPrefs.GetString(k_PlayerUserIdKey);
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Core.Device.UnityAnalyticsIdentifier::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAnalyticsIdentifier_set_UserId_m53C45D08B507983BAB45AC0B3E8229922FCEB1AE (UnityAnalyticsIdentifier_t5D4BCB7199D7C9C19B36BFE173AA04FDA446B4FE * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// PlayerPrefs.SetString(k_PlayerUserIdKey, value);
		String_t* L_0 = ___value0;
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2, L_0, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		goto IL_0015;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		throw e;
	}

CATCH_0012:
	{ // begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0015;
	} // end catch (depth: 1)

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Device.UnityAnalyticsIdentifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAnalyticsIdentifier__ctor_m3CE328162A0FE019519DEBFE90AFC0AC4BB95032 (UnityAnalyticsIdentifier_t5D4BCB7199D7C9C19B36BFE173AA04FDA446B4FE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
