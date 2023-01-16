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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<Unity.Services.Authentication.ProfileEventArgs>
struct Action_1_t97B4C0A2C81634DF78A45DF0E8BFCA7ED20F4E87;
// System.Action`1<Unity.Services.Core.RequestFailedException>
struct Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action`2<Unity.Services.Authentication.AuthenticationState,Unity.Services.Authentication.AuthenticationState>
struct Action_2_t881D75688CFDB53402D8BAF505B7F10DB23DE4F0;
// System.Action`2<System.Int32Enum,System.Int32Enum>
struct Action_2_tD3D7B4C276C5182ACF0A4B175305DF0854686FC4;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_tD1C6AF7CE18AF0DA8AA90A6926C0936FD56304C2;
// System.Func`1<System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse>>
struct Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9;
// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver>
struct Func_1_t649DCF3F0E5041B33631B23DFC4D9E7440B6765B;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse>>
struct Func_2_t7A618573BE4971F27978B4A8BA900EB72AAD538C;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Unity.Services.Authentication.WellKnownKeysResponse>>
struct Func_2_tB1C44E88693B4CF8CB6909E1A088205160E9E840;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t79E12DC27E32E788D60D392563070099BEDACA6D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<Unity.Services.Authentication.ExternalIdentity>
struct List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB;
// System.Collections.Generic.List`1<Unity.Services.Authentication.Identity>
struct List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903;
// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Authentication.SignInResponse>
struct TaskFactory_1_tF8CE897BF1B756D411B8678F9FE2A9CCE557AD92;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Authentication.WellKnownKeysResponse>
struct TaskFactory_1_tAD06AAEC317CD4C749E1009A63CAC16FE5937AE9;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse>
struct Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.WellKnownKeysResponse>
struct Task_1_t98B46A031F0AA87AC60519A0EC92DA07388CA383;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Unity.Services.Authentication.ExternalIdentity[]
struct ExternalIdentityU5BU5D_tE38BD14188EABF77B54CF8AEFEBED450CA3BD505;
// Unity.Services.Authentication.Identity[]
struct IdentityU5BU5D_t06B746EE2C687D5DCF4A7FF9DBA77472AC2A2673;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478;
// Unity.Services.Authentication.WellKnownKey[]
struct WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA;
// Unity.Services.Authentication.AccessToken
struct AccessToken_t7BE9F906398E1D7FBBF15ABE169B4FBB03BD00DD;
// Unity.Services.Authentication.AccessTokenComponent
struct AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB;
// Unity.Services.Authentication.AccessTokenExtraClaims
struct AccessTokenExtraClaims_t08B1B799C820999FBDC60E585800A40D373E2CB0;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// Unity.Services.Authentication.AuthenticationCache
struct AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C;
// Unity.Services.Authentication.AuthenticationErrorResponse
struct AuthenticationErrorResponse_tC90CC24823ADC01AD30EAA07CC0A10E39998600F;
// Unity.Services.Authentication.AuthenticationException
struct AuthenticationException_t2C1D97715C433D51CC8B9EE9A86A72015F2E92CC;
// Unity.Services.Authentication.AuthenticationMetrics
struct AuthenticationMetrics_tFC08B32361C09A77C8FCB40451DB189AC19E470F;
// Unity.Services.Authentication.AuthenticationNetworkClient
struct AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65;
// Unity.Services.Authentication.AuthenticationPackageInitializer
struct AuthenticationPackageInitializer_t22DA26E4CD0607D467B231600BC67874239B88F0;
// Unity.Services.Authentication.AuthenticationServiceInternal
struct AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB;
// Unity.Services.Authentication.AuthenticationSettings
struct AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF;
// Unity.Services.Authentication.BaseJwt
struct BaseJwt_t0E7A78CF620D766B3A9060318C68CC3A436C497B;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// Unity.Services.Authentication.DateTimeWrapper
struct DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// Unity.Services.Authentication.EnvironmentIdComponent
struct EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.Exception
struct Exception_t;
// Unity.Services.Authentication.ExternalIdentity
struct ExternalIdentity_t340A154EA8E79B73A6BC04A7D835C8D7F922F724;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// Unity.Services.Authentication.Internal.IAccessToken
struct IAccessToken_tF9F28E25BF665453329EE5A3604EEE1DF64A946E;
// Unity.Services.Core.Scheduler.Internal.IActionScheduler
struct IActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// Unity.Services.Authentication.IAuthenticationCache
struct IAuthenticationCache_t9D5962ED0C8C59E24E5BEBD812413423CB47AD99;
// Unity.Services.Authentication.IAuthenticationMetrics
struct IAuthenticationMetrics_t696FF7DC0F0282CC49A1542207E64AB154F9F429;
// Unity.Services.Authentication.IAuthenticationNetworkClient
struct IAuthenticationNetworkClient_t466AAAF8599451A867223E528F939CD3143FB3A9;
// Unity.Services.Authentication.IAuthenticationService
struct IAuthenticationService_t2D388C3C8F04AA2DA3E0BCE30644E6E7966BF7D1;
// Unity.Services.Authentication.IAuthenticationSettings
struct IAuthenticationSettings_tDF3C2B09002AA87E427B93A667A1F46921EA0339;
// Unity.Services.Core.Configuration.Internal.ICloudProjectId
struct ICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3;
// Unity.Services.Core.Internal.IComponentRegistry
struct IComponentRegistry_t865A92B9368E04957931C2131EE80EC43115A7AC;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_tF6D23F20037CB923F00229219D395611C3132340;
// Unity.Services.Authentication.IDateTimeWrapper
struct IDateTimeWrapper_t911CA57B07090FBD7DEF498C609AC44C20971C1A;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Unity.Services.Authentication.Internal.IEnvironmentId
struct IEnvironmentId_tE5B54B0742EEB7D83B2DA3D5D5809328E3DDACFD;
// Unity.Services.Core.Environments.Internal.IEnvironments
struct IEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// Unity.Services.Authentication.IJwtDecoder
struct IJwtDecoder_t9A47DB83582C6F0C4F8E9FE3F9B91084BDD70A4F;
// UnityEngine.ILogger
struct ILogger_t25627AC5B51863702868D31972297B7D633B4583;
// Unity.Services.Core.Telemetry.Internal.IMetrics
struct IMetrics_tE17233689864CACE2185FCC53E928D858144B3E0;
// Unity.Services.Core.Telemetry.Internal.IMetricsFactory
struct IMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B;
// Unity.Services.Authentication.INetworkConfiguration
struct INetworkConfiguration_tF6EC3BF3F7DD6EA759A3DCF06F625E9B70C17809;
// Unity.Services.Authentication.INetworkHandler
struct INetworkHandler_t1F920A323DEE4153730C7879A0A05CC6C0CF243D;
// Unity.Services.Core.Internal.IPackageRegistry
struct IPackageRegistry_tC4E727967447DA452A70876AA8278363D5AEF4FE;
// Unity.Services.Authentication.Internal.IPlayerId
struct IPlayerId_t2C42E59B43666C8DE5F5A4F65C60B858DF1B5598;
// Unity.Services.Authentication.IProfile
struct IProfile_t30A464C5A6D08D290EA3672E0F659D24FB8C8F04;
// Unity.Services.Core.Configuration.Internal.IProjectConfiguration
struct IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4;
// Newtonsoft.Json.Serialization.ISerializationBinder
struct ISerializationBinder_t8D5E95333B7A0C054D252BCFFBBE07284E7B5880;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t246767FC431AA0EA92CBA91F07913E176E1D7B5B;
// Unity.Services.Authentication.Identity
struct Identity_t2BAFC5C0BCB99BB68210854A8CEE5BA4CBBD0F61;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8;
// Unity.Services.Authentication.JwtDecoder
struct JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A;
// Unity.Services.Authentication.LinkResponse
struct LinkResponse_t69751BCB51A8547BCB5567A4FF1AD97AB47A2DA2;
// Unity.Services.Authentication.LinkWithExternalTokenRequest
struct LinkWithExternalTokenRequest_t11D7023EF630F1B2E1B31AC4FD8977F8C7408A13;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.Services.Authentication.NetworkConfiguration
struct NetworkConfiguration_t6B15FC60FAF58C036FF7F48EB66DDB3ACA451430;
// Unity.Services.Authentication.NetworkHandler
struct NetworkHandler_tA8820CE19530E53BE6AFF793C612117070A4049E;
// Unity.Services.Authentication.PlayerIdComponent
struct PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A;
// Unity.Services.Authentication.PlayerInfo
struct PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32;
// Unity.Services.Authentication.PlayerInfoResponse
struct PlayerInfoResponse_t7B3E12499DA047B05A4796EC426A6C90065F5FC2;
// Unity.Services.Authentication.ProfileComponent
struct ProfileComponent_t84EEB27237207350AE110116875EAF9C246F4367;
// Unity.Services.Authentication.ProfileEventArgs
struct ProfileEventArgs_t7AB21391B1A7EAB039510112B4706389E650CFCB;
// System.Security.Cryptography.RSA
struct RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65;
// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_tEA19E0B65D1CA5C585E0492A7B830B8F34D68228;
// Unity.Services.Core.RequestFailedException
struct RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A;
// System.Security.Cryptography.SHA256
struct SHA256_t7F98FBD5AA9E2F4AC1A5C13FF7122AFF1A920452;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Unity.Services.Core.ServicesInitializationException
struct ServicesInitializationException_tB29CA123886F164D3642AC2F2EFEEA32AE80A0C1;
// Unity.Services.Authentication.SessionTokenComponent
struct SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E;
// Unity.Services.Authentication.SessionTokenRequest
struct SessionTokenRequest_t2E7C97561A7DA7B27587356C426D795EDA0194BD;
// Unity.Services.Authentication.SignInOptions
struct SignInOptions_tFF19EE3FE0A9A233A1AFDBADA8975DD5BA28DDED;
// Unity.Services.Authentication.SignInResponse
struct SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2;
// Unity.Services.Authentication.SignInWithExternalTokenRequest
struct SignInWithExternalTokenRequest_t8B11B8478FB90A6FE5E0128E26EA8E534C794D6E;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// Unity.Services.Authentication.UnlinkRequest
struct UnlinkRequest_t0E793DFA3800A96E0D1F35D1BC8FF970C9B5AEB5;
// Unity.Services.Authentication.UnlinkResponse
struct UnlinkResponse_t857863FF44726429186E2C6CBF43A861C6133FD0;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// Unity.Services.Authentication.User
struct User_tE23EBBD8E21FAAA920F180CA0F37DCB242AA5795;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.Services.Authentication.WebRequest
struct WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4;
// Unity.Services.Authentication.WebRequestException
struct WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6;
// Unity.Services.Authentication.WellKnownKey
struct WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563;
// Unity.Services.Authentication.WellKnownKeysComponent
struct WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069;
// Unity.Services.Authentication.WellKnownKeysResponse
struct WellKnownKeysResponse_t362C5F2449BC6E27CFF9E8DA7E3BEF85044AA899;
// Unity.Services.Authentication.AuthenticationServiceInternal/<>c
struct U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB;
// Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass76_0
struct U3CU3Ec__DisplayClass76_0_tDEF0AEC69CC4EF20E39A0B4DF5F220A8A555B4A8;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Unity.Services.Authentication.WebRequest/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tF37DBED51743B80AAE9FE0A94A6E1B749CDF687F;

IL2CPP_EXTERN_C RuntimeClass* AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationException_t2C1D97715C433D51CC8B9EE9A86A72015F2E92CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationMetrics_tFC08B32361C09A77C8FCB40451DB189AC19E470F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationPackageInitializer_t22DA26E4CD0607D467B231600BC67874239B88F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationService_tEB201696C9477E5EC012BB947716CD6FA2FC7B0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAuthenticationCache_t9D5962ED0C8C59E24E5BEBD812413423CB47AD99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAuthenticationMetrics_t696FF7DC0F0282CC49A1542207E64AB154F9F429_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAuthenticationNetworkClient_t466AAAF8599451A867223E528F939CD3143FB3A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAuthenticationSettings_tDF3C2B09002AA87E427B93A667A1F46921EA0339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICache_t07B36762C1F7A1E2741D9365149AF1D604D1CD65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDateTimeWrapper_t911CA57B07090FBD7DEF498C609AC44C20971C1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tFBD6BBCAEB863478E70CD1504627E429F27569AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t692ABF80A29FB82368A57AE22841134E3626E47A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMetrics_tE17233689864CACE2185FCC53E928D858144B3E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INetworkConfiguration_tF6EC3BF3F7DD6EA759A3DCF06F625E9B70C17809_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProfile_t30A464C5A6D08D290EA3672E0F659D24FB8C8F04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Identity_t2BAFC5C0BCB99BB68210854A8CEE5BA4CBBD0F61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_tD29ADC250B69551530E1BAD9DFA823D775BE95D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkConfiguration_t6B15FC60FAF58C036FF7F48EB66DDB3ACA451430_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkHandler_tA8820CE19530E53BE6AFF793C612117070A4049E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProfileComponent_t84EEB27237207350AE110116875EAF9C246F4367_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProfileEventArgs_t7AB21391B1A7EAB039510112B4706389E650CFCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSAPKCS1SignatureDeformatter_tEA19E0B65D1CA5C585E0492A7B830B8F34D68228_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServicesInitializationException_tB29CA123886F164D3642AC2F2EFEEA32AE80A0C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionTokenRequest_t2E7C97561A7DA7B27587356C426D795EDA0194BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass16_0_tF37DBED51743B80AAE9FE0A94A6E1B749CDF687F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass76_0_tDEF0AEC69CC4EF20E39A0B4DF5F220A8A555B4A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequestVerb_t782ED4D2CC2F1CA91D4492BFCF82C3753B16447A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral043E18C57EC839C385CDC2FA4FBC63FC3F4F1922;
IL2CPP_EXTERN_C String_t* _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708;
IL2CPP_EXTERN_C String_t* _stringLiteral069E76898DCED02EA1198EDF60D34460ED12B74D;
IL2CPP_EXTERN_C String_t* _stringLiteral08236C3D0BD231A7F99CFFF73121864DE711C7AF;
IL2CPP_EXTERN_C String_t* _stringLiteral0BBA17F9025B4E06EB9B984A9380348ECAAA27E7;
IL2CPP_EXTERN_C String_t* _stringLiteral0D0D6E0FD7AC9D830E7B2E7079C8B6D3B7FD573E;
IL2CPP_EXTERN_C String_t* _stringLiteral10E85A1C982FD89AD3C7F21301C7CEF7FA7E7CEC;
IL2CPP_EXTERN_C String_t* _stringLiteral13AA05127DC343690A4511AFDB16512FF022B039;
IL2CPP_EXTERN_C String_t* _stringLiteral141957AF910C5B886304F115D2479EA72DD92035;
IL2CPP_EXTERN_C String_t* _stringLiteral1459AA156A3CC61BE3445EF580D2A5FB14EA4CE8;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD;
IL2CPP_EXTERN_C String_t* _stringLiteral2754A23125BBA5ED316F9C07A3E818C3D63239F1;
IL2CPP_EXTERN_C String_t* _stringLiteral296A65E2A28A506DAA998C4B70E93737444F0726;
IL2CPP_EXTERN_C String_t* _stringLiteral3EC88D38D30295ACC007AF41EA6369A9C7D096CB;
IL2CPP_EXTERN_C String_t* _stringLiteral3F356137CA88ED48EB67D737BE3B186689AF3BDA;
IL2CPP_EXTERN_C String_t* _stringLiteral4511699820F543B7439635CD03C9DF85473764E4;
IL2CPP_EXTERN_C String_t* _stringLiteral4BE0C724DF0778AB44291FE22681FE3735239D7F;
IL2CPP_EXTERN_C String_t* _stringLiteral5007D8D0381075039AADFA5A7B7117BF4299AF46;
IL2CPP_EXTERN_C String_t* _stringLiteral564C592A83288CFC0A06F4F169F973D869F140D9;
IL2CPP_EXTERN_C String_t* _stringLiteral5A5357BFF4777961C0ED9DFB11AC98AFAF29AF93;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral64F0B93C5B7055DDA721986BA7566D27276D2FDD;
IL2CPP_EXTERN_C String_t* _stringLiteral6682BD0725A4AB34573ADAA351C3058894511A91;
IL2CPP_EXTERN_C String_t* _stringLiteral6B0916E2982DC623EA98A7E9D62E6EF0E2312106;
IL2CPP_EXTERN_C String_t* _stringLiteral6E9F41A081334E4B02281220D1D08BE13787C133;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
IL2CPP_EXTERN_C String_t* _stringLiteral717C4F750DC4509915CB09BBCF378D5BCAAE0384;
IL2CPP_EXTERN_C String_t* _stringLiteral77B5A95080D1AC66E0C734381A240DBAF39BB2C9;
IL2CPP_EXTERN_C String_t* _stringLiteral7C65A84C33F095FB079E7C138555673E537FD4FF;
IL2CPP_EXTERN_C String_t* _stringLiteral84A9978B59FFBFBE63AC70C74158A9EC795C97E2;
IL2CPP_EXTERN_C String_t* _stringLiteral860A8D6E0621FF04D34DD0BDB8DAEB769BD82049;
IL2CPP_EXTERN_C String_t* _stringLiteral9118BD0CAA037C7CB5A295148D715E5D7BB54A65;
IL2CPP_EXTERN_C String_t* _stringLiteral9349ADD882729BE53E1C4DE12028C63CA62FB09D;
IL2CPP_EXTERN_C String_t* _stringLiteral98DC5CC9FB1CF6E407FEE201642AC8D774BB85CB;
IL2CPP_EXTERN_C String_t* _stringLiteral9D8209EB4C6E9DAA475A67D53CE5B15D8209D862;
IL2CPP_EXTERN_C String_t* _stringLiteral9F1462AD691582C705B8D80B37739368463E0FE1;
IL2CPP_EXTERN_C String_t* _stringLiteralA10AB45BB9FF2F4B6907E5D38143D5D5AA7ED62E;
IL2CPP_EXTERN_C String_t* _stringLiteralA1D894129428D97A82105EA53B4459C27A9AF712;
IL2CPP_EXTERN_C String_t* _stringLiteralA25CBED3DFB739A64F6004FF039EB7CA4D744F80;
IL2CPP_EXTERN_C String_t* _stringLiteralA6E95469377CE29950B6E671AF6618E8518383E4;
IL2CPP_EXTERN_C String_t* _stringLiteralA807D779356BF929984FEEF020A8F304C0825CD2;
IL2CPP_EXTERN_C String_t* _stringLiteralAA77D5693A0F444FC4C8236C0AEED70B164CFF58;
IL2CPP_EXTERN_C String_t* _stringLiteralAD2602465D20536036625524AF1C558FA78A80ED;
IL2CPP_EXTERN_C String_t* _stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990;
IL2CPP_EXTERN_C String_t* _stringLiteralB94C40AE44D0691F7FCE589508D96B9A91E098C2;
IL2CPP_EXTERN_C String_t* _stringLiteralBF572CA10517B5259B757A364DD3507DF49F7DD3;
IL2CPP_EXTERN_C String_t* _stringLiteralC36D2F78E29E9D66D4CD31ECC1B896992ED4C2B6;
IL2CPP_EXTERN_C String_t* _stringLiteralCB7FE37709A3E5F9D994BF275861CD32D78CD778;
IL2CPP_EXTERN_C String_t* _stringLiteralCDA99DC082690D52234645F88C722A5B296B811B;
IL2CPP_EXTERN_C String_t* _stringLiteralCEB5ADD24A8B3212AEDF863D68D2927C47646EE2;
IL2CPP_EXTERN_C String_t* _stringLiteralD0135F76E285AE1930AF69DEBEFAFB813DE53F08;
IL2CPP_EXTERN_C String_t* _stringLiteralD1CDA7DDA0CE92EAD8BFF309B8D1AF87CE4872B9;
IL2CPP_EXTERN_C String_t* _stringLiteralDEB3E69FC55ED8847330589BDD84FCE65D9533F9;
IL2CPP_EXTERN_C String_t* _stringLiteralE226315A889E342809A09A15505207F9977AF600;
IL2CPP_EXTERN_C String_t* _stringLiteralE4EF956D8605C91DE8D8A5036BA8A8E5C713A5CC;
IL2CPP_EXTERN_C String_t* _stringLiteralE5ADCF3FED825951408599CB8341DA473933C86B;
IL2CPP_EXTERN_C String_t* _stringLiteralECFDE2983A6856B5CACDDC405CED9C5C735543F1;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF67B63DDDBE53FE39B3D99C2D009C6DF09C38E70;
IL2CPP_EXTERN_C String_t* _stringLiteralFDDEE3EA3FCE79DBEAF010D60B12A635E292209E;
IL2CPP_EXTERN_C String_t* _stringLiteralFF3F6295AAF48AC44EE111E7233767AD6B03E6C8;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m9CC3B22AA36F0C57A2B7F085B9ED32E165DE93BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mC6762E9B52359D097DB16C414B77A1FB3718C61E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mBBD58666FB3D2852B654D46A2FF1949AFBBE0D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8_TisU3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9_mD73911D1FECFADF6886DF567EC1993369770591E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8_TisU3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804_m3511BEAB707840875E97AF0B5854ED07EDC3EA6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E_TisU3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510_mA600C04F13DE6B0FEAE3062C8F971C57E2E04AD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9_mED1619B60770BF740628D397454BC988F52701FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510_m76181BA44286F95A6C3DBFEA5A6828A87A4F509A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9_mB7A21A30C63CF5FEED0BA56FFC529E251F94B5E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804_m3BE96F5B33D9D75FEC29B56003965ED539A06715_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationServiceInternal_CompleteSignIn_mC63035B84EABA2C107DD10FB6895261F596DCFBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationServiceInternal_ExecuteScheduledExpiration_mBBE8346B4720DF478AD198075A81D75CA6D86C7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationServiceInternal_ExecuteScheduledRefresh_m26959C204BF58662DCA2FF22ED38F4FBC4B4D6D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationServiceInternal_U3C_ctorU3Eb__75_0_m3BDDCA22E45BD703BF5A36EE29640E25A705DE09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticationService_get_Instance_m5EF78E2942538E65F08502BAD359705C95B2E3E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisIActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_m51ABFC91F8BCF53458512365902A1AD0918253AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_mBF202BD93F078AB0DBC6F6475911A94803F7BDBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_mF847B70AF7EAAEA3E25A97BF25E6F4866C51509D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisIMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_mAEF872A9C9AAA9A069D0C1FA3B186435E3859522_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_DependsOn_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_m8949C1DB57F3EBC5103BE16DE6D0A970E21E5A6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIAccessToken_tF9F28E25BF665453329EE5A3604EEE1DF64A946E_m15937E10E7B0AEAC71F06A6B162874F0A953D739_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIEnvironmentId_tE5B54B0742EEB7D83B2DA3D5D5809328E3DDACFD_m6491587D3C7A569D305B0D69FC92D129EF1629AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIPlayerId_t2C42E59B43666C8DE5F5A4F65C60B858DF1B5598_mC4A218643103832B50E1E82A02D187AD2634F946_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_mEFB3E9E349374CAF2FB3C86F7B594FB3971D95DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_m529959703C2CD50CD18FA2DE8FA0770A38AB263F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_m908B82B3B70DD5FC71F2243DCB6C05C500CFB7D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_mE08D8A9DAF4B538AD8641C4C93B816E80678F75C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_GetServiceComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_m7515A5B4A848755CEC757111F68CDF8584AA7136_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterPackage_TisAuthenticationPackageInitializer_t22DA26E4CD0607D467B231600BC67874239B88F0_mDCCB9E397E2F6949319AD53843B5693D4E325A69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIAccessToken_tF9F28E25BF665453329EE5A3604EEE1DF64A946E_m0006FC4033AB549B9837562247BA8A8C91D81208_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIEnvironmentId_tE5B54B0742EEB7D83B2DA3D5D5809328E3DDACFD_mFD6F3B51CA8A882CFD2C408E213796704F1BA9B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIPlayerId_t2C42E59B43666C8DE5F5A4F65C60B858DF1B5598_m809338902103045C8F4393E7C9A3EC5F16063C19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisString_t_m7B8EA6803D4985135A95AE73079A935FCAAAEF5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m350061C4A479C181BD2590CDF2C0F74146B04097_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m98690085789DB5D924F26959ABDE2B42FFFC1B28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1FA92DE66111B3DBB2EE863487B72C2BED829928_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m7D47B552E0D254ECDFF8CE438279C36B23C1F81C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m6F4A4EBA1F8349FFDFB22268FB766AD34403C503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m6397C103AFDCE68F75EDF44FB493A9B6651F7AFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJwtDecoder_Decode_TisAccessToken_t7BE9F906398E1D7FBBF15ABE169B4FBB03BD00DD_m3C169CE748C3E8F6A01A819FFD6C2D7EFC8A02B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* INetworkHandler_GetAsync_TisWellKnownKeysResponse_t362C5F2449BC6E27CFF9E8DA7E3BEF85044AA899_m874DA766656A601B753BBBF555F24D3B5E33C438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* INetworkHandler_PostAsync_TisSignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2_m603C1B00276F1113188E65A91913B127CB4344CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* INetworkHandler_PostAsync_TisSignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2_m6839F5D36EA104A29FA41D6FF8924DB198A8449B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisAuthenticationErrorResponse_tC90CC24823ADC01AD30EAA07CC0A10E39998600F_m861DBF47FC84C04524DB1410C47F0B7D2B909475_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDCE667BC298C263992DC5C9F61FCAE120BF991E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD75B6D12A8852B0D0EEFA8DB5964F130B4B1618B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3C1B8F51C701CB6203EB8B3E90F4D9F4326BE843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mC63D1129C133CFFD462EEE344A2AE34B29C1E881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m571187F546F4230B8576F169789831BFBA99B93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m50AA4ABD548771EE5E0C30724C9847B16C44F3DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m11C4698C724C62BAAB3EF4ADEB980DDF130B31F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m57A2DAB2C076A68382251D5904A80019A1791AAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m6102E2E06015F97B6F38B8469F4CE3A77ED2A4E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m82AA0A161E0F0459FC1D8843CEDE2EA555C50D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m2741E572F08EDD2E8976B6020E85A1BDB98D6201_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m5B5959C3C40E1FC031A71286348C6E037358443A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mCF257E1EE701A2083F6449CA584EE72E2B01FC9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CHandleSignInRequestAsyncU3Ed__108_MoveNext_m145E76C9AACA43859307E92D8E7707A50D994F30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCompleteSignInU3Eb__110_0_m64200A83BF0406C3575F1100582395123CD94490_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CSendAttemptAsyncU3Eb__0_m97AB673D87CEF1C1830A54CAAB72643351F21955_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass76_0_U3CSignInAnonymouslyAsyncU3Eb__0_mC7E760D3EB52567D4DE5C0B2DE263173FF3A82A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequest_Build_m6D1DDE039F7765E509FFD6773AA56C03B6B06955_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478;
struct WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3C2638A78DA98AC0ED4BE150D955E5C46EDE4E5C 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
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
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.Services.Authentication.ExternalIdentity>
struct List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ExternalIdentityU5BU5D_tE38BD14188EABF77B54CF8AEFEBED450CA3BD505* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB, ____items_1)); }
	inline ExternalIdentityU5BU5D_tE38BD14188EABF77B54CF8AEFEBED450CA3BD505* get__items_1() const { return ____items_1; }
	inline ExternalIdentityU5BU5D_tE38BD14188EABF77B54CF8AEFEBED450CA3BD505** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ExternalIdentityU5BU5D_tE38BD14188EABF77B54CF8AEFEBED450CA3BD505* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ExternalIdentityU5BU5D_tE38BD14188EABF77B54CF8AEFEBED450CA3BD505* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB_StaticFields, ____emptyArray_5)); }
	inline ExternalIdentityU5BU5D_tE38BD14188EABF77B54CF8AEFEBED450CA3BD505* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ExternalIdentityU5BU5D_tE38BD14188EABF77B54CF8AEFEBED450CA3BD505** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ExternalIdentityU5BU5D_tE38BD14188EABF77B54CF8AEFEBED450CA3BD505* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.Services.Authentication.Identity>
struct List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IdentityU5BU5D_t06B746EE2C687D5DCF4A7FF9DBA77472AC2A2673* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A, ____items_1)); }
	inline IdentityU5BU5D_t06B746EE2C687D5DCF4A7FF9DBA77472AC2A2673* get__items_1() const { return ____items_1; }
	inline IdentityU5BU5D_t06B746EE2C687D5DCF4A7FF9DBA77472AC2A2673** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IdentityU5BU5D_t06B746EE2C687D5DCF4A7FF9DBA77472AC2A2673* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IdentityU5BU5D_t06B746EE2C687D5DCF4A7FF9DBA77472AC2A2673* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A_StaticFields, ____emptyArray_5)); }
	inline IdentityU5BU5D_t06B746EE2C687D5DCF4A7FF9DBA77472AC2A2673* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IdentityU5BU5D_t06B746EE2C687D5DCF4A7FF9DBA77472AC2A2673** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IdentityU5BU5D_t06B746EE2C687D5DCF4A7FF9DBA77472AC2A2673* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1, ___m_task_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// Unity.Services.Authentication.AccessTokenExtraClaims
struct AccessTokenExtraClaims_t08B1B799C820999FBDC60E585800A40D373E2CB0  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalKeySizesValue_1), (void*)value);
	}
};


// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct AsymmetricSignatureDeformatter_t4E346B5F7ADCD7E90FBD28DBDB9E540A1D11D033  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Authentication.AuthenticationCache
struct AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C  : public RuntimeObject
{
public:
	// Unity.Services.Core.Configuration.Internal.ICloudProjectId Unity.Services.Authentication.AuthenticationCache::m_CloudProjectId
	RuntimeObject* ___m_CloudProjectId_0;
	// Unity.Services.Authentication.IProfile Unity.Services.Authentication.AuthenticationCache::m_Profile
	RuntimeObject* ___m_Profile_1;

public:
	inline static int32_t get_offset_of_m_CloudProjectId_0() { return static_cast<int32_t>(offsetof(AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C, ___m_CloudProjectId_0)); }
	inline RuntimeObject* get_m_CloudProjectId_0() const { return ___m_CloudProjectId_0; }
	inline RuntimeObject** get_address_of_m_CloudProjectId_0() { return &___m_CloudProjectId_0; }
	inline void set_m_CloudProjectId_0(RuntimeObject* value)
	{
		___m_CloudProjectId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CloudProjectId_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Profile_1() { return static_cast<int32_t>(offsetof(AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C, ___m_Profile_1)); }
	inline RuntimeObject* get_m_Profile_1() const { return ___m_Profile_1; }
	inline RuntimeObject** get_address_of_m_Profile_1() { return &___m_Profile_1; }
	inline void set_m_Profile_1(RuntimeObject* value)
	{
		___m_Profile_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Profile_1), (void*)value);
	}
};


// Unity.Services.Authentication.AuthenticationErrorCodes
struct AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845  : public RuntimeObject
{
public:

public:
};

struct AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields
{
public:
	// System.Int32 Unity.Services.Authentication.AuthenticationErrorCodes::MinValue
	int32_t ___MinValue_0;
	// System.Int32 Unity.Services.Authentication.AuthenticationErrorCodes::ClientInvalidUserState
	int32_t ___ClientInvalidUserState_1;
	// System.Int32 Unity.Services.Authentication.AuthenticationErrorCodes::ClientNoActiveSession
	int32_t ___ClientNoActiveSession_2;
	// System.Int32 Unity.Services.Authentication.AuthenticationErrorCodes::InvalidParameters
	int32_t ___InvalidParameters_3;
	// System.Int32 Unity.Services.Authentication.AuthenticationErrorCodes::AccountAlreadyLinked
	int32_t ___AccountAlreadyLinked_4;
	// System.Int32 Unity.Services.Authentication.AuthenticationErrorCodes::AccountLinkLimitExceeded
	int32_t ___AccountLinkLimitExceeded_5;
	// System.Int32 Unity.Services.Authentication.AuthenticationErrorCodes::ClientUnlinkExternalIdNotFound
	int32_t ___ClientUnlinkExternalIdNotFound_6;
	// System.Int32 Unity.Services.Authentication.AuthenticationErrorCodes::ClientInvalidProfile
	int32_t ___ClientInvalidProfile_7;
	// System.Int32 Unity.Services.Authentication.AuthenticationErrorCodes::InvalidSessionToken
	int32_t ___InvalidSessionToken_8;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields, ___MinValue_0)); }
	inline int32_t get_MinValue_0() const { return ___MinValue_0; }
	inline int32_t* get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(int32_t value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_ClientInvalidUserState_1() { return static_cast<int32_t>(offsetof(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields, ___ClientInvalidUserState_1)); }
	inline int32_t get_ClientInvalidUserState_1() const { return ___ClientInvalidUserState_1; }
	inline int32_t* get_address_of_ClientInvalidUserState_1() { return &___ClientInvalidUserState_1; }
	inline void set_ClientInvalidUserState_1(int32_t value)
	{
		___ClientInvalidUserState_1 = value;
	}

	inline static int32_t get_offset_of_ClientNoActiveSession_2() { return static_cast<int32_t>(offsetof(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields, ___ClientNoActiveSession_2)); }
	inline int32_t get_ClientNoActiveSession_2() const { return ___ClientNoActiveSession_2; }
	inline int32_t* get_address_of_ClientNoActiveSession_2() { return &___ClientNoActiveSession_2; }
	inline void set_ClientNoActiveSession_2(int32_t value)
	{
		___ClientNoActiveSession_2 = value;
	}

	inline static int32_t get_offset_of_InvalidParameters_3() { return static_cast<int32_t>(offsetof(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields, ___InvalidParameters_3)); }
	inline int32_t get_InvalidParameters_3() const { return ___InvalidParameters_3; }
	inline int32_t* get_address_of_InvalidParameters_3() { return &___InvalidParameters_3; }
	inline void set_InvalidParameters_3(int32_t value)
	{
		___InvalidParameters_3 = value;
	}

	inline static int32_t get_offset_of_AccountAlreadyLinked_4() { return static_cast<int32_t>(offsetof(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields, ___AccountAlreadyLinked_4)); }
	inline int32_t get_AccountAlreadyLinked_4() const { return ___AccountAlreadyLinked_4; }
	inline int32_t* get_address_of_AccountAlreadyLinked_4() { return &___AccountAlreadyLinked_4; }
	inline void set_AccountAlreadyLinked_4(int32_t value)
	{
		___AccountAlreadyLinked_4 = value;
	}

	inline static int32_t get_offset_of_AccountLinkLimitExceeded_5() { return static_cast<int32_t>(offsetof(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields, ___AccountLinkLimitExceeded_5)); }
	inline int32_t get_AccountLinkLimitExceeded_5() const { return ___AccountLinkLimitExceeded_5; }
	inline int32_t* get_address_of_AccountLinkLimitExceeded_5() { return &___AccountLinkLimitExceeded_5; }
	inline void set_AccountLinkLimitExceeded_5(int32_t value)
	{
		___AccountLinkLimitExceeded_5 = value;
	}

	inline static int32_t get_offset_of_ClientUnlinkExternalIdNotFound_6() { return static_cast<int32_t>(offsetof(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields, ___ClientUnlinkExternalIdNotFound_6)); }
	inline int32_t get_ClientUnlinkExternalIdNotFound_6() const { return ___ClientUnlinkExternalIdNotFound_6; }
	inline int32_t* get_address_of_ClientUnlinkExternalIdNotFound_6() { return &___ClientUnlinkExternalIdNotFound_6; }
	inline void set_ClientUnlinkExternalIdNotFound_6(int32_t value)
	{
		___ClientUnlinkExternalIdNotFound_6 = value;
	}

	inline static int32_t get_offset_of_ClientInvalidProfile_7() { return static_cast<int32_t>(offsetof(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields, ___ClientInvalidProfile_7)); }
	inline int32_t get_ClientInvalidProfile_7() const { return ___ClientInvalidProfile_7; }
	inline int32_t* get_address_of_ClientInvalidProfile_7() { return &___ClientInvalidProfile_7; }
	inline void set_ClientInvalidProfile_7(int32_t value)
	{
		___ClientInvalidProfile_7 = value;
	}

	inline static int32_t get_offset_of_InvalidSessionToken_8() { return static_cast<int32_t>(offsetof(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields, ___InvalidSessionToken_8)); }
	inline int32_t get_InvalidSessionToken_8() const { return ___InvalidSessionToken_8; }
	inline int32_t* get_address_of_InvalidSessionToken_8() { return &___InvalidSessionToken_8; }
	inline void set_InvalidSessionToken_8(int32_t value)
	{
		___InvalidSessionToken_8 = value;
	}
};


// Unity.Services.Authentication.AuthenticationErrorResponse
struct AuthenticationErrorResponse_tC90CC24823ADC01AD30EAA07CC0A10E39998600F  : public RuntimeObject
{
public:
	// System.String Unity.Services.Authentication.AuthenticationErrorResponse::Title
	String_t* ___Title_0;
	// System.String Unity.Services.Authentication.AuthenticationErrorResponse::Detail
	String_t* ___Detail_1;

public:
	inline static int32_t get_offset_of_Title_0() { return static_cast<int32_t>(offsetof(AuthenticationErrorResponse_tC90CC24823ADC01AD30EAA07CC0A10E39998600F, ___Title_0)); }
	inline String_t* get_Title_0() const { return ___Title_0; }
	inline String_t** get_address_of_Title_0() { return &___Title_0; }
	inline void set_Title_0(String_t* value)
	{
		___Title_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Title_0), (void*)value);
	}

	inline static int32_t get_offset_of_Detail_1() { return static_cast<int32_t>(offsetof(AuthenticationErrorResponse_tC90CC24823ADC01AD30EAA07CC0A10E39998600F, ___Detail_1)); }
	inline String_t* get_Detail_1() const { return ___Detail_1; }
	inline String_t** get_address_of_Detail_1() { return &___Detail_1; }
	inline void set_Detail_1(String_t* value)
	{
		___Detail_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Detail_1), (void*)value);
	}
};


// Unity.Services.Authentication.AuthenticationMetrics
struct AuthenticationMetrics_tFC08B32361C09A77C8FCB40451DB189AC19E470F  : public RuntimeObject
{
public:
	// Unity.Services.Core.Telemetry.Internal.IMetrics Unity.Services.Authentication.AuthenticationMetrics::m_Metrics
	RuntimeObject* ___m_Metrics_0;

public:
	inline static int32_t get_offset_of_m_Metrics_0() { return static_cast<int32_t>(offsetof(AuthenticationMetrics_tFC08B32361C09A77C8FCB40451DB189AC19E470F, ___m_Metrics_0)); }
	inline RuntimeObject* get_m_Metrics_0() const { return ___m_Metrics_0; }
	inline RuntimeObject** get_address_of_m_Metrics_0() { return &___m_Metrics_0; }
	inline void set_m_Metrics_0(RuntimeObject* value)
	{
		___m_Metrics_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Metrics_0), (void*)value);
	}
};


// Unity.Services.Authentication.AuthenticationNetworkClient
struct AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65  : public RuntimeObject
{
public:
	// Unity.Services.Authentication.AccessTokenComponent Unity.Services.Authentication.AuthenticationNetworkClient::<AccessTokenComponent>k__BackingField
	AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * ___U3CAccessTokenComponentU3Ek__BackingField_0;
	// Unity.Services.Core.Configuration.Internal.ICloudProjectId Unity.Services.Authentication.AuthenticationNetworkClient::<CloudProjectIdComponent>k__BackingField
	RuntimeObject* ___U3CCloudProjectIdComponentU3Ek__BackingField_1;
	// Unity.Services.Core.Environments.Internal.IEnvironments Unity.Services.Authentication.AuthenticationNetworkClient::<EnvironmentComponent>k__BackingField
	RuntimeObject* ___U3CEnvironmentComponentU3Ek__BackingField_2;
	// Unity.Services.Authentication.INetworkHandler Unity.Services.Authentication.AuthenticationNetworkClient::<NetworkHandler>k__BackingField
	RuntimeObject* ___U3CNetworkHandlerU3Ek__BackingField_3;
	// System.String Unity.Services.Authentication.AuthenticationNetworkClient::m_WellKnownUrl
	String_t* ___m_WellKnownUrl_4;
	// System.String Unity.Services.Authentication.AuthenticationNetworkClient::m_AnonymousUrl
	String_t* ___m_AnonymousUrl_5;
	// System.String Unity.Services.Authentication.AuthenticationNetworkClient::m_SessionTokenUrl
	String_t* ___m_SessionTokenUrl_6;
	// System.String Unity.Services.Authentication.AuthenticationNetworkClient::m_ExternalTokenUrl
	String_t* ___m_ExternalTokenUrl_7;
	// System.String Unity.Services.Authentication.AuthenticationNetworkClient::m_LinkExternalTokenUrl
	String_t* ___m_LinkExternalTokenUrl_8;
	// System.String Unity.Services.Authentication.AuthenticationNetworkClient::m_UnlinkExternalTokenUrl
	String_t* ___m_UnlinkExternalTokenUrl_9;
	// System.String Unity.Services.Authentication.AuthenticationNetworkClient::m_UsersUrl
	String_t* ___m_UsersUrl_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Authentication.AuthenticationNetworkClient::m_CommonHeaders
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___m_CommonHeaders_11;

public:
	inline static int32_t get_offset_of_U3CAccessTokenComponentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65, ___U3CAccessTokenComponentU3Ek__BackingField_0)); }
	inline AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * get_U3CAccessTokenComponentU3Ek__BackingField_0() const { return ___U3CAccessTokenComponentU3Ek__BackingField_0; }
	inline AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB ** get_address_of_U3CAccessTokenComponentU3Ek__BackingField_0() { return &___U3CAccessTokenComponentU3Ek__BackingField_0; }
	inline void set_U3CAccessTokenComponentU3Ek__BackingField_0(AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * value)
	{
		___U3CAccessTokenComponentU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAccessTokenComponentU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCloudProjectIdComponentU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65, ___U3CCloudProjectIdComponentU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CCloudProjectIdComponentU3Ek__BackingField_1() const { return ___U3CCloudProjectIdComponentU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CCloudProjectIdComponentU3Ek__BackingField_1() { return &___U3CCloudProjectIdComponentU3Ek__BackingField_1; }
	inline void set_U3CCloudProjectIdComponentU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CCloudProjectIdComponentU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCloudProjectIdComponentU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnvironmentComponentU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65, ___U3CEnvironmentComponentU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CEnvironmentComponentU3Ek__BackingField_2() const { return ___U3CEnvironmentComponentU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CEnvironmentComponentU3Ek__BackingField_2() { return &___U3CEnvironmentComponentU3Ek__BackingField_2; }
	inline void set_U3CEnvironmentComponentU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CEnvironmentComponentU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEnvironmentComponentU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNetworkHandlerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65, ___U3CNetworkHandlerU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CNetworkHandlerU3Ek__BackingField_3() const { return ___U3CNetworkHandlerU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CNetworkHandlerU3Ek__BackingField_3() { return &___U3CNetworkHandlerU3Ek__BackingField_3; }
	inline void set_U3CNetworkHandlerU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CNetworkHandlerU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNetworkHandlerU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_WellKnownUrl_4() { return static_cast<int32_t>(offsetof(AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65, ___m_WellKnownUrl_4)); }
	inline String_t* get_m_WellKnownUrl_4() const { return ___m_WellKnownUrl_4; }
	inline String_t** get_address_of_m_WellKnownUrl_4() { return &___m_WellKnownUrl_4; }
	inline void set_m_WellKnownUrl_4(String_t* value)
	{
		___m_WellKnownUrl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WellKnownUrl_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_AnonymousUrl_5() { return static_cast<int32_t>(offsetof(AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65, ___m_AnonymousUrl_5)); }
	inline String_t* get_m_AnonymousUrl_5() const { return ___m_AnonymousUrl_5; }
	inline String_t** get_address_of_m_AnonymousUrl_5() { return &___m_AnonymousUrl_5; }
	inline void set_m_AnonymousUrl_5(String_t* value)
	{
		___m_AnonymousUrl_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnonymousUrl_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SessionTokenUrl_6() { return static_cast<int32_t>(offsetof(AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65, ___m_SessionTokenUrl_6)); }
	inline String_t* get_m_SessionTokenUrl_6() const { return ___m_SessionTokenUrl_6; }
	inline String_t** get_address_of_m_SessionTokenUrl_6() { return &___m_SessionTokenUrl_6; }
	inline void set_m_SessionTokenUrl_6(String_t* value)
	{
		___m_SessionTokenUrl_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SessionTokenUrl_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExternalTokenUrl_7() { return static_cast<int32_t>(offsetof(AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65, ___m_ExternalTokenUrl_7)); }
	inline String_t* get_m_ExternalTokenUrl_7() const { return ___m_ExternalTokenUrl_7; }
	inline String_t** get_address_of_m_ExternalTokenUrl_7() { return &___m_ExternalTokenUrl_7; }
	inline void set_m_ExternalTokenUrl_7(String_t* value)
	{
		___m_ExternalTokenUrl_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExternalTokenUrl_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LinkExternalTokenUrl_8() { return static_cast<int32_t>(offsetof(AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65, ___m_LinkExternalTokenUrl_8)); }
	inline String_t* get_m_LinkExternalTokenUrl_8() const { return ___m_LinkExternalTokenUrl_8; }
	inline String_t** get_address_of_m_LinkExternalTokenUrl_8() { return &___m_LinkExternalTokenUrl_8; }
	inline void set_m_LinkExternalTokenUrl_8(String_t* value)
	{
		___m_LinkExternalTokenUrl_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LinkExternalTokenUrl_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_UnlinkExternalTokenUrl_9() { return static_cast<int32_t>(offsetof(AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65, ___m_UnlinkExternalTokenUrl_9)); }
	inline String_t* get_m_UnlinkExternalTokenUrl_9() const { return ___m_UnlinkExternalTokenUrl_9; }
	inline String_t** get_address_of_m_UnlinkExternalTokenUrl_9() { return &___m_UnlinkExternalTokenUrl_9; }
	inline void set_m_UnlinkExternalTokenUrl_9(String_t* value)
	{
		___m_UnlinkExternalTokenUrl_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UnlinkExternalTokenUrl_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsersUrl_10() { return static_cast<int32_t>(offsetof(AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65, ___m_UsersUrl_10)); }
	inline String_t* get_m_UsersUrl_10() const { return ___m_UsersUrl_10; }
	inline String_t** get_address_of_m_UsersUrl_10() { return &___m_UsersUrl_10; }
	inline void set_m_UsersUrl_10(String_t* value)
	{
		___m_UsersUrl_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsersUrl_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_CommonHeaders_11() { return static_cast<int32_t>(offsetof(AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65, ___m_CommonHeaders_11)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_m_CommonHeaders_11() const { return ___m_CommonHeaders_11; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_m_CommonHeaders_11() { return &___m_CommonHeaders_11; }
	inline void set_m_CommonHeaders_11(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___m_CommonHeaders_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CommonHeaders_11), (void*)value);
	}
};


// Unity.Services.Authentication.AuthenticationPackageInitializer
struct AuthenticationPackageInitializer_t22DA26E4CD0607D467B231600BC67874239B88F0  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Authentication.AuthenticationService
struct AuthenticationService_tEB201696C9477E5EC012BB947716CD6FA2FC7B0F  : public RuntimeObject
{
public:

public:
};

struct AuthenticationService_tEB201696C9477E5EC012BB947716CD6FA2FC7B0F_StaticFields
{
public:
	// Unity.Services.Authentication.IAuthenticationService Unity.Services.Authentication.AuthenticationService::s_Instance
	RuntimeObject* ___s_Instance_0;

public:
	inline static int32_t get_offset_of_s_Instance_0() { return static_cast<int32_t>(offsetof(AuthenticationService_tEB201696C9477E5EC012BB947716CD6FA2FC7B0F_StaticFields, ___s_Instance_0)); }
	inline RuntimeObject* get_s_Instance_0() const { return ___s_Instance_0; }
	inline RuntimeObject** get_address_of_s_Instance_0() { return &___s_Instance_0; }
	inline void set_s_Instance_0(RuntimeObject* value)
	{
		___s_Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_0), (void*)value);
	}
};


// Unity.Services.Authentication.AuthenticationSettings
struct AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF  : public RuntimeObject
{
public:
	// System.Int32 Unity.Services.Authentication.AuthenticationSettings::<AccessTokenRefreshBuffer>k__BackingField
	int32_t ___U3CAccessTokenRefreshBufferU3Ek__BackingField_0;
	// System.Int32 Unity.Services.Authentication.AuthenticationSettings::<AccessTokenExpiryBuffer>k__BackingField
	int32_t ___U3CAccessTokenExpiryBufferU3Ek__BackingField_1;
	// System.Int32 Unity.Services.Authentication.AuthenticationSettings::<RefreshAttemptFrequency>k__BackingField
	int32_t ___U3CRefreshAttemptFrequencyU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CAccessTokenRefreshBufferU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF, ___U3CAccessTokenRefreshBufferU3Ek__BackingField_0)); }
	inline int32_t get_U3CAccessTokenRefreshBufferU3Ek__BackingField_0() const { return ___U3CAccessTokenRefreshBufferU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CAccessTokenRefreshBufferU3Ek__BackingField_0() { return &___U3CAccessTokenRefreshBufferU3Ek__BackingField_0; }
	inline void set_U3CAccessTokenRefreshBufferU3Ek__BackingField_0(int32_t value)
	{
		___U3CAccessTokenRefreshBufferU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CAccessTokenExpiryBufferU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF, ___U3CAccessTokenExpiryBufferU3Ek__BackingField_1)); }
	inline int32_t get_U3CAccessTokenExpiryBufferU3Ek__BackingField_1() const { return ___U3CAccessTokenExpiryBufferU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CAccessTokenExpiryBufferU3Ek__BackingField_1() { return &___U3CAccessTokenExpiryBufferU3Ek__BackingField_1; }
	inline void set_U3CAccessTokenExpiryBufferU3Ek__BackingField_1(int32_t value)
	{
		___U3CAccessTokenExpiryBufferU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CRefreshAttemptFrequencyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF, ___U3CRefreshAttemptFrequencyU3Ek__BackingField_2)); }
	inline int32_t get_U3CRefreshAttemptFrequencyU3Ek__BackingField_2() const { return ___U3CRefreshAttemptFrequencyU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CRefreshAttemptFrequencyU3Ek__BackingField_2() { return &___U3CRefreshAttemptFrequencyU3Ek__BackingField_2; }
	inline void set_U3CRefreshAttemptFrequencyU3Ek__BackingField_2(int32_t value)
	{
		___U3CRefreshAttemptFrequencyU3Ek__BackingField_2 = value;
	}
};


// Unity.Services.Authentication.BaseJwt
struct BaseJwt_t0E7A78CF620D766B3A9060318C68CC3A436C497B  : public RuntimeObject
{
public:
	// System.Int32 Unity.Services.Authentication.BaseJwt::ExpirationTimeUnix
	int32_t ___ExpirationTimeUnix_0;

public:
	inline static int32_t get_offset_of_ExpirationTimeUnix_0() { return static_cast<int32_t>(offsetof(BaseJwt_t0E7A78CF620D766B3A9060318C68CC3A436C497B, ___ExpirationTimeUnix_0)); }
	inline int32_t get_ExpirationTimeUnix_0() const { return ___ExpirationTimeUnix_0; }
	inline int32_t* get_address_of_ExpirationTimeUnix_0() { return &___ExpirationTimeUnix_0; }
	inline void set_ExpirationTimeUnix_0(int32_t value)
	{
		___ExpirationTimeUnix_0 = value;
	}
};


// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D  : public RuntimeObject
{
public:
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistry::<PackageRegistry>k__BackingField
	RuntimeObject* ___U3CPackageRegistryU3Ek__BackingField_1;
	// Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.CoreRegistry::<ComponentRegistry>k__BackingField
	RuntimeObject* ___U3CComponentRegistryU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CPackageRegistryU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D, ___U3CPackageRegistryU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CPackageRegistryU3Ek__BackingField_1() const { return ___U3CPackageRegistryU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CPackageRegistryU3Ek__BackingField_1() { return &___U3CPackageRegistryU3Ek__BackingField_1; }
	inline void set_U3CPackageRegistryU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CPackageRegistryU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPackageRegistryU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CComponentRegistryU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D, ___U3CComponentRegistryU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CComponentRegistryU3Ek__BackingField_2() const { return ___U3CComponentRegistryU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CComponentRegistryU3Ek__BackingField_2() { return &___U3CComponentRegistryU3Ek__BackingField_2; }
	inline void set_U3CComponentRegistryU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CComponentRegistryU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CComponentRegistryU3Ek__BackingField_2), (void*)value);
	}
};

struct CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_StaticFields
{
public:
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::<Instance>k__BackingField
	CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * ___U3CInstanceU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_StaticFields, ___U3CInstanceU3Ek__BackingField_0)); }
	inline CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * get_U3CInstanceU3Ek__BackingField_0() const { return ___U3CInstanceU3Ek__BackingField_0; }
	inline CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D ** get_address_of_U3CInstanceU3Ek__BackingField_0() { return &___U3CInstanceU3Ek__BackingField_0; }
	inline void set_U3CInstanceU3Ek__BackingField_0(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * value)
	{
		___U3CInstanceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_0), (void*)value);
	}
};


// UnityEngine.Debug
struct Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B  : public RuntimeObject
{
public:

public:
};

struct Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_StaticFields
{
public:
	// UnityEngine.ILogger UnityEngine.Debug::s_DefaultLogger
	RuntimeObject* ___s_DefaultLogger_0;
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_1;

public:
	inline static int32_t get_offset_of_s_DefaultLogger_0() { return static_cast<int32_t>(offsetof(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_StaticFields, ___s_DefaultLogger_0)); }
	inline RuntimeObject* get_s_DefaultLogger_0() const { return ___s_DefaultLogger_0; }
	inline RuntimeObject** get_address_of_s_DefaultLogger_0() { return &___s_DefaultLogger_0; }
	inline void set_s_DefaultLogger_0(RuntimeObject* value)
	{
		___s_DefaultLogger_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultLogger_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Logger_1() { return static_cast<int32_t>(offsetof(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_StaticFields, ___s_Logger_1)); }
	inline RuntimeObject* get_s_Logger_1() const { return ___s_Logger_1; }
	inline RuntimeObject** get_address_of_s_Logger_1() { return &___s_Logger_1; }
	inline void set_s_Logger_1(RuntimeObject* value)
	{
		___s_Logger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Logger_1), (void*)value);
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


// Unity.Services.Authentication.EnvironmentIdComponent
struct EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320  : public RuntimeObject
{
public:
	// System.String Unity.Services.Authentication.EnvironmentIdComponent::<EnvironmentId>k__BackingField
	String_t* ___U3CEnvironmentIdU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CEnvironmentIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320, ___U3CEnvironmentIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CEnvironmentIdU3Ek__BackingField_0() const { return ___U3CEnvironmentIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CEnvironmentIdU3Ek__BackingField_0() { return &___U3CEnvironmentIdU3Ek__BackingField_0; }
	inline void set_U3CEnvironmentIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CEnvironmentIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEnvironmentIdU3Ek__BackingField_0), (void*)value);
	}
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// Unity.Services.Authentication.ExternalIdentity
struct ExternalIdentity_t340A154EA8E79B73A6BC04A7D835C8D7F922F724  : public RuntimeObject
{
public:
	// System.String Unity.Services.Authentication.ExternalIdentity::ProviderId
	String_t* ___ProviderId_0;
	// System.String Unity.Services.Authentication.ExternalIdentity::ExternalId
	String_t* ___ExternalId_1;

public:
	inline static int32_t get_offset_of_ProviderId_0() { return static_cast<int32_t>(offsetof(ExternalIdentity_t340A154EA8E79B73A6BC04A7D835C8D7F922F724, ___ProviderId_0)); }
	inline String_t* get_ProviderId_0() const { return ___ProviderId_0; }
	inline String_t** get_address_of_ProviderId_0() { return &___ProviderId_0; }
	inline void set_ProviderId_0(String_t* value)
	{
		___ProviderId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProviderId_0), (void*)value);
	}

	inline static int32_t get_offset_of_ExternalId_1() { return static_cast<int32_t>(offsetof(ExternalIdentity_t340A154EA8E79B73A6BC04A7D835C8D7F922F724, ___ExternalId_1)); }
	inline String_t* get_ExternalId_1() const { return ___ExternalId_1; }
	inline String_t** get_address_of_ExternalId_1() { return &___ExternalId_1; }
	inline void set_ExternalId_1(String_t* value)
	{
		___ExternalId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExternalId_1), (void*)value);
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


// Unity.Services.Authentication.Identity
struct Identity_t2BAFC5C0BCB99BB68210854A8CEE5BA4CBBD0F61  : public RuntimeObject
{
public:
	// System.String Unity.Services.Authentication.Identity::TypeId
	String_t* ___TypeId_0;
	// System.String Unity.Services.Authentication.Identity::UserId
	String_t* ___UserId_1;

public:
	inline static int32_t get_offset_of_TypeId_0() { return static_cast<int32_t>(offsetof(Identity_t2BAFC5C0BCB99BB68210854A8CEE5BA4CBBD0F61, ___TypeId_0)); }
	inline String_t* get_TypeId_0() const { return ___TypeId_0; }
	inline String_t** get_address_of_TypeId_0() { return &___TypeId_0; }
	inline void set_TypeId_0(String_t* value)
	{
		___TypeId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeId_0), (void*)value);
	}

	inline static int32_t get_offset_of_UserId_1() { return static_cast<int32_t>(offsetof(Identity_t2BAFC5C0BCB99BB68210854A8CEE5BA4CBBD0F61, ___UserId_1)); }
	inline String_t* get_UserId_1() const { return ___UserId_1; }
	inline String_t** get_address_of_UserId_1() { return &___UserId_1; }
	inline void set_UserId_1(String_t* value)
	{
		___UserId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UserId_1), (void*)value);
	}
};


// Unity.Services.Authentication.LinkResponse
struct LinkResponse_t69751BCB51A8547BCB5567A4FF1AD97AB47A2DA2  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Authentication.LinkWithExternalTokenRequest
struct LinkWithExternalTokenRequest_t11D7023EF630F1B2E1B31AC4FD8977F8C7408A13  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Authentication.Logger
struct Logger_tE4ECADF83FB008420FB63F04C0AEBCDD29D19871  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Authentication.NetworkConfiguration
struct NetworkConfiguration_t6B15FC60FAF58C036FF7F48EB66DDB3ACA451430  : public RuntimeObject
{
public:
	// System.Int32 Unity.Services.Authentication.NetworkConfiguration::<Retries>k__BackingField
	int32_t ___U3CRetriesU3Ek__BackingField_0;
	// System.Int32 Unity.Services.Authentication.NetworkConfiguration::<Timeout>k__BackingField
	int32_t ___U3CTimeoutU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CRetriesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NetworkConfiguration_t6B15FC60FAF58C036FF7F48EB66DDB3ACA451430, ___U3CRetriesU3Ek__BackingField_0)); }
	inline int32_t get_U3CRetriesU3Ek__BackingField_0() const { return ___U3CRetriesU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CRetriesU3Ek__BackingField_0() { return &___U3CRetriesU3Ek__BackingField_0; }
	inline void set_U3CRetriesU3Ek__BackingField_0(int32_t value)
	{
		___U3CRetriesU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTimeoutU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NetworkConfiguration_t6B15FC60FAF58C036FF7F48EB66DDB3ACA451430, ___U3CTimeoutU3Ek__BackingField_1)); }
	inline int32_t get_U3CTimeoutU3Ek__BackingField_1() const { return ___U3CTimeoutU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CTimeoutU3Ek__BackingField_1() { return &___U3CTimeoutU3Ek__BackingField_1; }
	inline void set_U3CTimeoutU3Ek__BackingField_1(int32_t value)
	{
		___U3CTimeoutU3Ek__BackingField_1 = value;
	}
};


// Unity.Services.Authentication.NetworkHandler
struct NetworkHandler_tA8820CE19530E53BE6AFF793C612117070A4049E  : public RuntimeObject
{
public:
	// Unity.Services.Authentication.INetworkConfiguration Unity.Services.Authentication.NetworkHandler::<Configuration>k__BackingField
	RuntimeObject* ___U3CConfigurationU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CConfigurationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NetworkHandler_tA8820CE19530E53BE6AFF793C612117070A4049E, ___U3CConfigurationU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CConfigurationU3Ek__BackingField_0() const { return ___U3CConfigurationU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CConfigurationU3Ek__BackingField_0() { return &___U3CConfigurationU3Ek__BackingField_0; }
	inline void set_U3CConfigurationU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CConfigurationU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationU3Ek__BackingField_0), (void*)value);
	}
};


// Unity.Services.Authentication.PlayerIdComponent
struct PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A  : public RuntimeObject
{
public:
	// System.Action`1<System.String> Unity.Services.Authentication.PlayerIdComponent::PlayerIdChanged
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___PlayerIdChanged_0;
	// Unity.Services.Authentication.IAuthenticationCache Unity.Services.Authentication.PlayerIdComponent::m_Cache
	RuntimeObject* ___m_Cache_1;

public:
	inline static int32_t get_offset_of_PlayerIdChanged_0() { return static_cast<int32_t>(offsetof(PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A, ___PlayerIdChanged_0)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_PlayerIdChanged_0() const { return ___PlayerIdChanged_0; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_PlayerIdChanged_0() { return &___PlayerIdChanged_0; }
	inline void set_PlayerIdChanged_0(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___PlayerIdChanged_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerIdChanged_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Cache_1() { return static_cast<int32_t>(offsetof(PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A, ___m_Cache_1)); }
	inline RuntimeObject* get_m_Cache_1() const { return ___m_Cache_1; }
	inline RuntimeObject** get_address_of_m_Cache_1() { return &___m_Cache_1; }
	inline void set_m_Cache_1(RuntimeObject* value)
	{
		___m_Cache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cache_1), (void*)value);
	}
};


// Unity.Services.Authentication.PlayerInfoResponse
struct PlayerInfoResponse_t7B3E12499DA047B05A4796EC426A6C90065F5FC2  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Authentication.ProfileComponent
struct ProfileComponent_t84EEB27237207350AE110116875EAF9C246F4367  : public RuntimeObject
{
public:
	// System.Action`1<Unity.Services.Authentication.ProfileEventArgs> Unity.Services.Authentication.ProfileComponent::ProfileChange
	Action_1_t97B4C0A2C81634DF78A45DF0E8BFCA7ED20F4E87 * ___ProfileChange_0;
	// System.String Unity.Services.Authentication.ProfileComponent::_current
	String_t* ____current_1;

public:
	inline static int32_t get_offset_of_ProfileChange_0() { return static_cast<int32_t>(offsetof(ProfileComponent_t84EEB27237207350AE110116875EAF9C246F4367, ___ProfileChange_0)); }
	inline Action_1_t97B4C0A2C81634DF78A45DF0E8BFCA7ED20F4E87 * get_ProfileChange_0() const { return ___ProfileChange_0; }
	inline Action_1_t97B4C0A2C81634DF78A45DF0E8BFCA7ED20F4E87 ** get_address_of_ProfileChange_0() { return &___ProfileChange_0; }
	inline void set_ProfileChange_0(Action_1_t97B4C0A2C81634DF78A45DF0E8BFCA7ED20F4E87 * value)
	{
		___ProfileChange_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProfileChange_0), (void*)value);
	}

	inline static int32_t get_offset_of__current_1() { return static_cast<int32_t>(offsetof(ProfileComponent_t84EEB27237207350AE110116875EAF9C246F4367, ____current_1)); }
	inline String_t* get__current_1() const { return ____current_1; }
	inline String_t** get_address_of__current_1() { return &____current_1; }
	inline void set__current_1(String_t* value)
	{
		____current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_1), (void*)value);
	}
};


// Unity.Services.Authentication.SessionTokenComponent
struct SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E  : public RuntimeObject
{
public:
	// Unity.Services.Authentication.IAuthenticationCache Unity.Services.Authentication.SessionTokenComponent::m_Cache
	RuntimeObject* ___m_Cache_0;

public:
	inline static int32_t get_offset_of_m_Cache_0() { return static_cast<int32_t>(offsetof(SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E, ___m_Cache_0)); }
	inline RuntimeObject* get_m_Cache_0() const { return ___m_Cache_0; }
	inline RuntimeObject** get_address_of_m_Cache_0() { return &___m_Cache_0; }
	inline void set_m_Cache_0(RuntimeObject* value)
	{
		___m_Cache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cache_0), (void*)value);
	}
};


// Unity.Services.Authentication.SessionTokenRequest
struct SessionTokenRequest_t2E7C97561A7DA7B27587356C426D795EDA0194BD  : public RuntimeObject
{
public:
	// System.String Unity.Services.Authentication.SessionTokenRequest::SessionToken
	String_t* ___SessionToken_0;

public:
	inline static int32_t get_offset_of_SessionToken_0() { return static_cast<int32_t>(offsetof(SessionTokenRequest_t2E7C97561A7DA7B27587356C426D795EDA0194BD, ___SessionToken_0)); }
	inline String_t* get_SessionToken_0() const { return ___SessionToken_0; }
	inline String_t** get_address_of_SessionToken_0() { return &___SessionToken_0; }
	inline void set_SessionToken_0(String_t* value)
	{
		___SessionToken_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SessionToken_0), (void*)value);
	}
};


// Unity.Services.Authentication.SignInOptions
struct SignInOptions_tFF19EE3FE0A9A233A1AFDBADA8975DD5BA28DDED  : public RuntimeObject
{
public:
	// System.Boolean Unity.Services.Authentication.SignInOptions::<CreateAccount>k__BackingField
	bool ___U3CCreateAccountU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CCreateAccountU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SignInOptions_tFF19EE3FE0A9A233A1AFDBADA8975DD5BA28DDED, ___U3CCreateAccountU3Ek__BackingField_0)); }
	inline bool get_U3CCreateAccountU3Ek__BackingField_0() const { return ___U3CCreateAccountU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CCreateAccountU3Ek__BackingField_0() { return &___U3CCreateAccountU3Ek__BackingField_0; }
	inline void set_U3CCreateAccountU3Ek__BackingField_0(bool value)
	{
		___U3CCreateAccountU3Ek__BackingField_0 = value;
	}
};


// Unity.Services.Authentication.SignInResponse
struct SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2  : public RuntimeObject
{
public:
	// System.String Unity.Services.Authentication.SignInResponse::UserId
	String_t* ___UserId_0;
	// System.String Unity.Services.Authentication.SignInResponse::IdToken
	String_t* ___IdToken_1;
	// System.String Unity.Services.Authentication.SignInResponse::SessionToken
	String_t* ___SessionToken_2;
	// System.Int32 Unity.Services.Authentication.SignInResponse::ExpiresIn
	int32_t ___ExpiresIn_3;
	// Unity.Services.Authentication.User Unity.Services.Authentication.SignInResponse::User
	User_tE23EBBD8E21FAAA920F180CA0F37DCB242AA5795 * ___User_4;

public:
	inline static int32_t get_offset_of_UserId_0() { return static_cast<int32_t>(offsetof(SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2, ___UserId_0)); }
	inline String_t* get_UserId_0() const { return ___UserId_0; }
	inline String_t** get_address_of_UserId_0() { return &___UserId_0; }
	inline void set_UserId_0(String_t* value)
	{
		___UserId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UserId_0), (void*)value);
	}

	inline static int32_t get_offset_of_IdToken_1() { return static_cast<int32_t>(offsetof(SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2, ___IdToken_1)); }
	inline String_t* get_IdToken_1() const { return ___IdToken_1; }
	inline String_t** get_address_of_IdToken_1() { return &___IdToken_1; }
	inline void set_IdToken_1(String_t* value)
	{
		___IdToken_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdToken_1), (void*)value);
	}

	inline static int32_t get_offset_of_SessionToken_2() { return static_cast<int32_t>(offsetof(SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2, ___SessionToken_2)); }
	inline String_t* get_SessionToken_2() const { return ___SessionToken_2; }
	inline String_t** get_address_of_SessionToken_2() { return &___SessionToken_2; }
	inline void set_SessionToken_2(String_t* value)
	{
		___SessionToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SessionToken_2), (void*)value);
	}

	inline static int32_t get_offset_of_ExpiresIn_3() { return static_cast<int32_t>(offsetof(SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2, ___ExpiresIn_3)); }
	inline int32_t get_ExpiresIn_3() const { return ___ExpiresIn_3; }
	inline int32_t* get_address_of_ExpiresIn_3() { return &___ExpiresIn_3; }
	inline void set_ExpiresIn_3(int32_t value)
	{
		___ExpiresIn_3 = value;
	}

	inline static int32_t get_offset_of_User_4() { return static_cast<int32_t>(offsetof(SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2, ___User_4)); }
	inline User_tE23EBBD8E21FAAA920F180CA0F37DCB242AA5795 * get_User_4() const { return ___User_4; }
	inline User_tE23EBBD8E21FAAA920F180CA0F37DCB242AA5795 ** get_address_of_User_4() { return &___User_4; }
	inline void set_User_4(User_tE23EBBD8E21FAAA920F180CA0F37DCB242AA5795 * value)
	{
		___User_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___User_4), (void*)value);
	}
};


// Unity.Services.Authentication.SignInWithExternalTokenRequest
struct SignInWithExternalTokenRequest_t8B11B8478FB90A6FE5E0128E26EA8E534C794D6E  : public RuntimeObject
{
public:

public:
};


// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
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


// Unity.Services.Authentication.UnlinkRequest
struct UnlinkRequest_t0E793DFA3800A96E0D1F35D1BC8FF970C9B5AEB5  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Authentication.UnlinkResponse
struct UnlinkResponse_t857863FF44726429186E2C6CBF43A861C6133FD0  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Authentication.User
struct User_tE23EBBD8E21FAAA920F180CA0F37DCB242AA5795  : public RuntimeObject
{
public:
	// System.String Unity.Services.Authentication.User::Id
	String_t* ___Id_0;
	// System.String Unity.Services.Authentication.User::CreatedAt
	String_t* ___CreatedAt_1;
	// System.Collections.Generic.List`1<Unity.Services.Authentication.ExternalIdentity> Unity.Services.Authentication.User::ExternalIds
	List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB * ___ExternalIds_2;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(User_tE23EBBD8E21FAAA920F180CA0F37DCB242AA5795, ___Id_0)); }
	inline String_t* get_Id_0() const { return ___Id_0; }
	inline String_t** get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(String_t* value)
	{
		___Id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Id_0), (void*)value);
	}

	inline static int32_t get_offset_of_CreatedAt_1() { return static_cast<int32_t>(offsetof(User_tE23EBBD8E21FAAA920F180CA0F37DCB242AA5795, ___CreatedAt_1)); }
	inline String_t* get_CreatedAt_1() const { return ___CreatedAt_1; }
	inline String_t** get_address_of_CreatedAt_1() { return &___CreatedAt_1; }
	inline void set_CreatedAt_1(String_t* value)
	{
		___CreatedAt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CreatedAt_1), (void*)value);
	}

	inline static int32_t get_offset_of_ExternalIds_2() { return static_cast<int32_t>(offsetof(User_tE23EBBD8E21FAAA920F180CA0F37DCB242AA5795, ___ExternalIds_2)); }
	inline List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB * get_ExternalIds_2() const { return ___ExternalIds_2; }
	inline List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB ** get_address_of_ExternalIds_2() { return &___ExternalIds_2; }
	inline void set_ExternalIds_2(List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB * value)
	{
		___ExternalIds_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExternalIds_2), (void*)value);
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

// Unity.Services.Authentication.WellKnownKey
struct WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563  : public RuntimeObject
{
public:
	// System.String Unity.Services.Authentication.WellKnownKey::KeyId
	String_t* ___KeyId_0;
	// System.String Unity.Services.Authentication.WellKnownKey::N
	String_t* ___N_1;
	// System.String Unity.Services.Authentication.WellKnownKey::E
	String_t* ___E_2;

public:
	inline static int32_t get_offset_of_KeyId_0() { return static_cast<int32_t>(offsetof(WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563, ___KeyId_0)); }
	inline String_t* get_KeyId_0() const { return ___KeyId_0; }
	inline String_t** get_address_of_KeyId_0() { return &___KeyId_0; }
	inline void set_KeyId_0(String_t* value)
	{
		___KeyId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyId_0), (void*)value);
	}

	inline static int32_t get_offset_of_N_1() { return static_cast<int32_t>(offsetof(WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563, ___N_1)); }
	inline String_t* get_N_1() const { return ___N_1; }
	inline String_t** get_address_of_N_1() { return &___N_1; }
	inline void set_N_1(String_t* value)
	{
		___N_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___N_1), (void*)value);
	}

	inline static int32_t get_offset_of_E_2() { return static_cast<int32_t>(offsetof(WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563, ___E_2)); }
	inline String_t* get_E_2() const { return ___E_2; }
	inline String_t** get_address_of_E_2() { return &___E_2; }
	inline void set_E_2(String_t* value)
	{
		___E_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___E_2), (void*)value);
	}
};


// Unity.Services.Authentication.WellKnownKeysComponent
struct WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069  : public RuntimeObject
{
public:
	// Unity.Services.Authentication.WellKnownKey[] Unity.Services.Authentication.WellKnownKeysComponent::<Keys>k__BackingField
	WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* ___U3CKeysU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CKeysU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069, ___U3CKeysU3Ek__BackingField_0)); }
	inline WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* get_U3CKeysU3Ek__BackingField_0() const { return ___U3CKeysU3Ek__BackingField_0; }
	inline WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA** get_address_of_U3CKeysU3Ek__BackingField_0() { return &___U3CKeysU3Ek__BackingField_0; }
	inline void set_U3CKeysU3Ek__BackingField_0(WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* value)
	{
		___U3CKeysU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeysU3Ek__BackingField_0), (void*)value);
	}
};


// Unity.Services.Authentication.WellKnownKeysResponse
struct WellKnownKeysResponse_t362C5F2449BC6E27CFF9E8DA7E3BEF85044AA899  : public RuntimeObject
{
public:
	// Unity.Services.Authentication.WellKnownKey[] Unity.Services.Authentication.WellKnownKeysResponse::Keys
	WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* ___Keys_0;

public:
	inline static int32_t get_offset_of_Keys_0() { return static_cast<int32_t>(offsetof(WellKnownKeysResponse_t362C5F2449BC6E27CFF9E8DA7E3BEF85044AA899, ___Keys_0)); }
	inline WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* get_Keys_0() const { return ___Keys_0; }
	inline WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA** get_address_of_Keys_0() { return &___Keys_0; }
	inline void set_Keys_0(WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* value)
	{
		___Keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Keys_0), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Unity.Services.Authentication.AuthenticationServiceInternal/<>c
struct U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB_StaticFields
{
public:
	// Unity.Services.Authentication.AuthenticationServiceInternal/<>c Unity.Services.Authentication.AuthenticationServiceInternal/<>c::<>9
	U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB * ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> Unity.Services.Authentication.AuthenticationServiceInternal/<>c::<>9__110_0
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__110_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__110_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB_StaticFields, ___U3CU3E9__110_0_1)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__110_0_1() const { return ___U3CU3E9__110_0_1; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__110_0_1() { return &___U3CU3E9__110_0_1; }
	inline void set_U3CU3E9__110_0_1(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__110_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__110_0_1), (void*)value);
	}
};


// Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass76_0
struct U3CU3Ec__DisplayClass76_0_tDEF0AEC69CC4EF20E39A0B4DF5F220A8A555B4A8  : public RuntimeObject
{
public:
	// Unity.Services.Authentication.AuthenticationServiceInternal Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass76_0::<>4__this
	AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * ___U3CU3E4__this_0;
	// System.String Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass76_0::sessionToken
	String_t* ___sessionToken_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass76_0_tDEF0AEC69CC4EF20E39A0B4DF5F220A8A555B4A8, ___U3CU3E4__this_0)); }
	inline AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_sessionToken_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass76_0_tDEF0AEC69CC4EF20E39A0B4DF5F220A8A555B4A8, ___sessionToken_1)); }
	inline String_t* get_sessionToken_1() const { return ___sessionToken_1; }
	inline String_t** get_address_of_sessionToken_1() { return &___sessionToken_1; }
	inline void set_sessionToken_1(String_t* value)
	{
		___sessionToken_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionToken_1), (void*)value);
	}
};


// Unity.Services.Authentication.WebRequest/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tF37DBED51743B80AAE9FE0A94A6E1B749CDF687F  : public RuntimeObject
{
public:
	// Unity.Services.Authentication.WebRequest Unity.Services.Authentication.WebRequest/<>c__DisplayClass16_0::<>4__this
	WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<System.String> Unity.Services.Authentication.WebRequest/<>c__DisplayClass16_0::tcs
	TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * ___tcs_1;
	// UnityEngine.Networking.UnityWebRequest Unity.Services.Authentication.WebRequest/<>c__DisplayClass16_0::request
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___request_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tF37DBED51743B80AAE9FE0A94A6E1B749CDF687F, ___U3CU3E4__this_0)); }
	inline WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_tcs_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tF37DBED51743B80AAE9FE0A94A6E1B749CDF687F, ___tcs_1)); }
	inline TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * get_tcs_1() const { return ___tcs_1; }
	inline TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 ** get_address_of_tcs_1() { return &___tcs_1; }
	inline void set_tcs_1(TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * value)
	{
		___tcs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcs_1), (void*)value);
	}

	inline static int32_t get_offset_of_request_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tF37DBED51743B80AAE9FE0A94A6E1B749CDF687F, ___request_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_request_2() const { return ___request_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_request_2() { return &___request_2; }
	inline void set_request_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___request_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___request_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Unity.Services.Authentication.ExternalIdentity>
struct Enumerator_tAB5981142CC0EEC82DD2F7D043743930D7D4877D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ExternalIdentity_t340A154EA8E79B73A6BC04A7D835C8D7F922F724 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tAB5981142CC0EEC82DD2F7D043743930D7D4877D, ___list_0)); }
	inline List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB * get_list_0() const { return ___list_0; }
	inline List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tAB5981142CC0EEC82DD2F7D043743930D7D4877D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tAB5981142CC0EEC82DD2F7D043743930D7D4877D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tAB5981142CC0EEC82DD2F7D043743930D7D4877D, ___current_3)); }
	inline ExternalIdentity_t340A154EA8E79B73A6BC04A7D835C8D7F922F724 * get_current_3() const { return ___current_3; }
	inline ExternalIdentity_t340A154EA8E79B73A6BC04A7D835C8D7F922F724 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ExternalIdentity_t340A154EA8E79B73A6BC04A7D835C8D7F922F724 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int64>
struct Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.SignInResponse>
struct TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8, ___m_task_0)); }
	inline Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.WellKnownKeysResponse>
struct TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t98B46A031F0AA87AC60519A0EC92DA07388CA383 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E, ___m_task_0)); }
	inline Task_1_t98B46A031F0AA87AC60519A0EC92DA07388CA383 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t98B46A031F0AA87AC60519A0EC92DA07388CA383 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t98B46A031F0AA87AC60519A0EC92DA07388CA383 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// Unity.Services.Authentication.AccessToken
struct AccessToken_t7BE9F906398E1D7FBBF15ABE169B4FBB03BD00DD  : public BaseJwt_t0E7A78CF620D766B3A9060318C68CC3A436C497B
{
public:
	// System.String[] Unity.Services.Authentication.AccessToken::Audience
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___Audience_1;

public:
	inline static int32_t get_offset_of_Audience_1() { return static_cast<int32_t>(offsetof(AccessToken_t7BE9F906398E1D7FBBF15ABE169B4FBB03BD00DD, ___Audience_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_Audience_1() const { return ___Audience_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_Audience_1() { return &___Audience_1; }
	inline void set_Audience_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___Audience_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Audience_1), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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


// Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 
{
public:
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistration::m_Registry
	RuntimeObject* ___m_Registry_0;
	// System.Int32 Unity.Services.Core.Internal.CoreRegistration::m_PackageHash
	int32_t ___m_PackageHash_1;

public:
	inline static int32_t get_offset_of_m_Registry_0() { return static_cast<int32_t>(offsetof(CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7, ___m_Registry_0)); }
	inline RuntimeObject* get_m_Registry_0() const { return ___m_Registry_0; }
	inline RuntimeObject** get_address_of_m_Registry_0() { return &___m_Registry_0; }
	inline void set_m_Registry_0(RuntimeObject* value)
	{
		___m_Registry_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Registry_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PackageHash_1() { return static_cast<int32_t>(offsetof(CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7, ___m_PackageHash_1)); }
	inline int32_t get_m_PackageHash_1() const { return ___m_PackageHash_1; }
	inline int32_t* get_address_of_m_PackageHash_1() { return &___m_PackageHash_1; }
	inline void set_m_PackageHash_1(int32_t value)
	{
		___m_PackageHash_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7_marshaled_pinvoke
{
	RuntimeObject* ___m_Registry_0;
	int32_t ___m_PackageHash_1;
};
// Native definition for COM marshalling of Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7_marshaled_com
{
	RuntimeObject* ___m_Registry_0;
	int32_t ___m_PackageHash_1;
};

// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// Unity.Services.Authentication.ProfileEventArgs
struct ProfileEventArgs_t7AB21391B1A7EAB039510112B4706389E650CFCB  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.String Unity.Services.Authentication.ProfileEventArgs::<Profile>k__BackingField
	String_t* ___U3CProfileU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CProfileU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProfileEventArgs_t7AB21391B1A7EAB039510112B4706389E650CFCB, ___U3CProfileU3Ek__BackingField_1)); }
	inline String_t* get_U3CProfileU3Ek__BackingField_1() const { return ___U3CProfileU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CProfileU3Ek__BackingField_1() { return &___U3CProfileU3Ek__BackingField_1; }
	inline void set_U3CProfileU3Ek__BackingField_1(String_t* value)
	{
		___U3CProfileU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProfileU3Ek__BackingField_1), (void*)value);
	}
};


// System.Security.Cryptography.RSA
struct RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B  : public AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F
{
public:

public:
};


// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_tEA19E0B65D1CA5C585E0492A7B830B8F34D68228  : public AsymmetricSignatureDeformatter_t4E346B5F7ADCD7E90FBD28DBDB9E540A1D11D033
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureDeformatter::rsa
	RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * ___rsa_0;
	// System.String System.Security.Cryptography.RSAPKCS1SignatureDeformatter::hashName
	String_t* ___hashName_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_tEA19E0B65D1CA5C585E0492A7B830B8F34D68228, ___rsa_0)); }
	inline RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rsa_0), (void*)value);
	}

	inline static int32_t get_offset_of_hashName_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_tEA19E0B65D1CA5C585E0492A7B830B8F34D68228, ___hashName_1)); }
	inline String_t* get_hashName_1() const { return ___hashName_1; }
	inline String_t** get_address_of_hashName_1() { return &___hashName_1; }
	inline void set_hashName_1(String_t* value)
	{
		___hashName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hashName_1), (void*)value);
	}
};


// System.Security.Cryptography.RSAParameters
struct RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28 
{
public:
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Exponent_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Modulus_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___P_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Q_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___DP_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___DQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___InverseQ_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___D_7;

public:
	inline static int32_t get_offset_of_Exponent_0() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___Exponent_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Exponent_0() const { return ___Exponent_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Exponent_0() { return &___Exponent_0; }
	inline void set_Exponent_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Exponent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Exponent_0), (void*)value);
	}

	inline static int32_t get_offset_of_Modulus_1() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___Modulus_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Modulus_1() const { return ___Modulus_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Modulus_1() { return &___Modulus_1; }
	inline void set_Modulus_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Modulus_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Modulus_1), (void*)value);
	}

	inline static int32_t get_offset_of_P_2() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___P_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_P_2() const { return ___P_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_P_2() { return &___P_2; }
	inline void set_P_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___P_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___P_2), (void*)value);
	}

	inline static int32_t get_offset_of_Q_3() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___Q_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Q_3() const { return ___Q_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Q_3() { return &___Q_3; }
	inline void set_Q_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Q_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Q_3), (void*)value);
	}

	inline static int32_t get_offset_of_DP_4() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___DP_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_DP_4() const { return ___DP_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_DP_4() { return &___DP_4; }
	inline void set_DP_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___DP_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DP_4), (void*)value);
	}

	inline static int32_t get_offset_of_DQ_5() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___DQ_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_DQ_5() const { return ___DQ_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_DQ_5() { return &___DQ_5; }
	inline void set_DQ_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___DQ_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DQ_5), (void*)value);
	}

	inline static int32_t get_offset_of_InverseQ_6() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___InverseQ_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_InverseQ_6() const { return ___InverseQ_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_InverseQ_6() { return &___InverseQ_6; }
	inline void set_InverseQ_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___InverseQ_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InverseQ_6), (void*)value);
	}

	inline static int32_t get_offset_of_D_7() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___D_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_D_7() const { return ___D_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_D_7() { return &___D_7; }
	inline void set_D_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___D_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___D_7), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___Exponent_0;
	Il2CppSafeArray/*NONE*/* ___Modulus_1;
	Il2CppSafeArray/*NONE*/* ___P_2;
	Il2CppSafeArray/*NONE*/* ___Q_3;
	Il2CppSafeArray/*NONE*/* ___DP_4;
	Il2CppSafeArray/*NONE*/* ___DQ_5;
	Il2CppSafeArray/*NONE*/* ___InverseQ_6;
	Il2CppSafeArray/*NONE*/* ___D_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___Exponent_0;
	Il2CppSafeArray/*NONE*/* ___Modulus_1;
	Il2CppSafeArray/*NONE*/* ___P_2;
	Il2CppSafeArray/*NONE*/* ___Q_3;
	Il2CppSafeArray/*NONE*/* ___DP_4;
	Il2CppSafeArray/*NONE*/* ___DQ_5;
	Il2CppSafeArray/*NONE*/* ___InverseQ_6;
	Il2CppSafeArray/*NONE*/* ___D_7;
};

// System.Security.Cryptography.SHA256
struct SHA256_t7F98FBD5AA9E2F4AC1A5C13FF7122AFF1A920452  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
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


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Nullable`1<System.DateTime>
struct Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D 
{
public:
	// T System.Nullable`1::value
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___value_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_value_0() const { return ___value_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// Unity.Services.Authentication.AuthenticationState
struct AuthenticationState_tD5F2440AB058DA74F7E8555A47582CDA73C00D57 
{
public:
	// System.Int32 Unity.Services.Authentication.AuthenticationState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthenticationState_tD5F2440AB058DA74F7E8555A47582CDA73C00D57, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Newtonsoft.Json.ConstructorHandling
struct ConstructorHandling_t8EF2C9D50692D63B8A50928AADD5C1EDF8A3E7DC 
{
public:
	// System.Int32 Newtonsoft.Json.ConstructorHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConstructorHandling_t8EF2C9D50692D63B8A50928AADD5C1EDF8A3E7DC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.CspProviderFlags
struct CspProviderFlags_t8981EF4CA441D46FBF242ABAA443608B474586D1 
{
public:
	// System.Int32 System.Security.Cryptography.CspProviderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CspProviderFlags_t8981EF4CA441D46FBF242ABAA443608B474586D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateFormatHandling
struct DateFormatHandling_t7D368A07EDDD2F4E105A094FC7A5B80D6539EB5A 
{
public:
	// System.Int32 Newtonsoft.Json.DateFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateFormatHandling_t7D368A07EDDD2F4E105A094FC7A5B80D6539EB5A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateParseHandling
struct DateParseHandling_tF32DF55E7B72FCFC1AD190A6AA1323D74D8498ED 
{
public:
	// System.Int32 Newtonsoft.Json.DateParseHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateParseHandling_tF32DF55E7B72FCFC1AD190A6AA1323D74D8498ED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeKind
struct DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Services.Authentication.DateTimeWrapper
struct DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137  : public RuntimeObject
{
public:

public:
};

struct DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137_StaticFields
{
public:
	// System.DateTime Unity.Services.Authentication.DateTimeWrapper::k_UnixEpoch
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___k_UnixEpoch_0;

public:
	inline static int32_t get_offset_of_k_UnixEpoch_0() { return static_cast<int32_t>(offsetof(DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137_StaticFields, ___k_UnixEpoch_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_k_UnixEpoch_0() const { return ___k_UnixEpoch_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_k_UnixEpoch_0() { return &___k_UnixEpoch_0; }
	inline void set_k_UnixEpoch_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___k_UnixEpoch_0 = value;
	}
};


// Newtonsoft.Json.DateTimeZoneHandling
struct DateTimeZoneHandling_t1B4712A9FBACAC4CDE007353B5E2AEFAA5682314 
{
public:
	// System.Int32 Newtonsoft.Json.DateTimeZoneHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeZoneHandling_t1B4712A9FBACAC4CDE007353B5E2AEFAA5682314, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DefaultValueHandling
struct DefaultValueHandling_t64F11A79D0A8AC61B4EF63FE24918795C2826E77 
{
public:
	// System.Int32 Newtonsoft.Json.DefaultValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DefaultValueHandling_t64F11A79D0A8AC61B4EF63FE24918795C2826E77, ___value___2)); }
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// Newtonsoft.Json.FloatFormatHandling
struct FloatFormatHandling_t885E8AF11DB7C62862372A8A4E40626885C5960E 
{
public:
	// System.Int32 Newtonsoft.Json.FloatFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatFormatHandling_t885E8AF11DB7C62862372A8A4E40626885C5960E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.FloatParseHandling
struct FloatParseHandling_t145124DF9867E684C9794F16A0B1F1E463BE4E34 
{
public:
	// System.Int32 Newtonsoft.Json.FloatParseHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatParseHandling_t145124DF9867E684C9794F16A0B1F1E463BE4E34, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Formatting
struct Formatting_t0249052BCF9F7E782EC05863A164CF7CED128094 
{
public:
	// System.Int32 Newtonsoft.Json.Formatting::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Formatting_t0249052BCF9F7E782EC05863A164CF7CED128094, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Services.Authentication.JwtDecoder
struct JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7  : public RuntimeObject
{
public:
	// Unity.Services.Authentication.IDateTimeWrapper Unity.Services.Authentication.JwtDecoder::m_DateTime
	RuntimeObject* ___m_DateTime_2;

public:
	inline static int32_t get_offset_of_m_DateTime_2() { return static_cast<int32_t>(offsetof(JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7, ___m_DateTime_2)); }
	inline RuntimeObject* get_m_DateTime_2() const { return ___m_DateTime_2; }
	inline RuntimeObject** get_address_of_m_DateTime_2() { return &___m_DateTime_2; }
	inline void set_m_DateTime_2(RuntimeObject* value)
	{
		___m_DateTime_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DateTime_2), (void*)value);
	}
};

struct JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7_StaticFields
{
public:
	// System.DateTime Unity.Services.Authentication.JwtDecoder::k_UnixEpoch
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___k_UnixEpoch_0;
	// System.Char[] Unity.Services.Authentication.JwtDecoder::k_JwtSeparator
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___k_JwtSeparator_1;

public:
	inline static int32_t get_offset_of_k_UnixEpoch_0() { return static_cast<int32_t>(offsetof(JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7_StaticFields, ___k_UnixEpoch_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_k_UnixEpoch_0() const { return ___k_UnixEpoch_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_k_UnixEpoch_0() { return &___k_UnixEpoch_0; }
	inline void set_k_UnixEpoch_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___k_UnixEpoch_0 = value;
	}

	inline static int32_t get_offset_of_k_JwtSeparator_1() { return static_cast<int32_t>(offsetof(JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7_StaticFields, ___k_JwtSeparator_1)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_k_JwtSeparator_1() const { return ___k_JwtSeparator_1; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_k_JwtSeparator_1() { return &___k_JwtSeparator_1; }
	inline void set_k_JwtSeparator_1(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___k_JwtSeparator_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_JwtSeparator_1), (void*)value);
	}
};


// Newtonsoft.Json.MetadataPropertyHandling
struct MetadataPropertyHandling_tC63DA3BC10CD4946359D1AF0308531CCB7926D71 
{
public:
	// System.Int32 Newtonsoft.Json.MetadataPropertyHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MetadataPropertyHandling_tC63DA3BC10CD4946359D1AF0308531CCB7926D71, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.MissingMemberHandling
struct MissingMemberHandling_tEB1745E775089F63B48F3837F4378CFDA324410E 
{
public:
	// System.Int32 Newtonsoft.Json.MissingMemberHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MissingMemberHandling_tEB1745E775089F63B48F3837F4378CFDA324410E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.NullValueHandling
struct NullValueHandling_t7E853B68E9812ACD6766B3E6B53917CD1D4699C1 
{
public:
	// System.Int32 Newtonsoft.Json.NullValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NullValueHandling_t7E853B68E9812ACD6766B3E6B53917CD1D4699C1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ObjectCreationHandling
struct ObjectCreationHandling_t809FC2764FB7157E1538E37F2117A5568BA5AB2E 
{
public:
	// System.Int32 Newtonsoft.Json.ObjectCreationHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectCreationHandling_t809FC2764FB7157E1538E37F2117A5568BA5AB2E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.PreserveReferencesHandling
struct PreserveReferencesHandling_tCF08DBF34C71CD009B91C89CCA75278A6847A372 
{
public:
	// System.Int32 Newtonsoft.Json.PreserveReferencesHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PreserveReferencesHandling_tCF08DBF34C71CD009B91C89CCA75278A6847A372, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ReferenceLoopHandling
struct ReferenceLoopHandling_tD534709B6BE8FEEABEB98318D08943307CE7C9E5 
{
public:
	// System.Int32 Newtonsoft.Json.ReferenceLoopHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReferenceLoopHandling_tD534709B6BE8FEEABEB98318D08943307CE7C9E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// Newtonsoft.Json.StringEscapeHandling
struct StringEscapeHandling_t6FD2495C1B6393CFD174FBBA0B1684CB6BA8D624 
{
public:
	// System.Int32 Newtonsoft.Json.StringEscapeHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringEscapeHandling_t6FD2495C1B6393CFD174FBBA0B1684CB6BA8D624, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// Newtonsoft.Json.TypeNameAssemblyFormatHandling
struct TypeNameAssemblyFormatHandling_tF408387942F5B366F9ED2EFD1897CBC4703C6F92 
{
public:
	// System.Int32 Newtonsoft.Json.TypeNameAssemblyFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameAssemblyFormatHandling_tF408387942F5B366F9ED2EFD1897CBC4703C6F92, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.TypeNameHandling
struct TypeNameHandling_t72E983B53732E4FEF0527D64396BBA288EB13F81 
{
public:
	// System.Int32 Newtonsoft.Json.TypeNameHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameHandling_t72E983B53732E4FEF0527D64396BBA288EB13F81, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Unity.Services.Authentication.WebRequestVerb
struct WebRequestVerb_t782ED4D2CC2F1CA91D4492BFCF82C3753B16447A 
{
public:
	// System.Int32 Unity.Services.Authentication.WebRequestVerb::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebRequestVerb_t782ED4D2CC2F1CA91D4492BFCF82C3753B16447A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest/Result
struct Result_t3233C0F690EC3844C8E0C4649568659679AFBE75 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t3233C0F690EC3844C8E0C4649568659679AFBE75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ConstructorHandling>
struct Nullable_1_t125BA2D32C606CA0EF76F875548282249C2B582A 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t125BA2D32C606CA0EF76F875548282249C2B582A, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t125BA2D32C606CA0EF76F875548282249C2B582A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct Nullable_1_t1B43369EC9A933C68393AC83A57B04A93B5892C7 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1B43369EC9A933C68393AC83A57B04A93B5892C7, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1B43369EC9A933C68393AC83A57B04A93B5892C7, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct Nullable_1_tDFDD131CC24467C6FB6C1D60AA711CE0D7D7FA2C 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tDFDD131CC24467C6FB6C1D60AA711CE0D7D7FA2C, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tDFDD131CC24467C6FB6C1D60AA711CE0D7D7FA2C, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct Nullable_1_tF302419AFDB8FF465B267E0FB85B334C76F6B2E4 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF302419AFDB8FF465B267E0FB85B334C76F6B2E4, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF302419AFDB8FF465B267E0FB85B334C76F6B2E4, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>
struct Nullable_1_tD0E592131A1B6D538A911F285F165C9AFE310115 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD0E592131A1B6D538A911F285F165C9AFE310115, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD0E592131A1B6D538A911F285F165C9AFE310115, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct Nullable_1_t339137FB409DDB29ACF72E6FF4B0018F5FD0971E 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t339137FB409DDB29ACF72E6FF4B0018F5FD0971E, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t339137FB409DDB29ACF72E6FF4B0018F5FD0971E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct Nullable_1_tA0ED4D21D93F0978557A6558BEAB17A5D839B209 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA0ED4D21D93F0978557A6558BEAB17A5D839B209, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA0ED4D21D93F0978557A6558BEAB17A5D839B209, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.Formatting>
struct Nullable_1_tE3B760867512C0006EB766454C05EADEE477E82D 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tE3B760867512C0006EB766454C05EADEE477E82D, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tE3B760867512C0006EB766454C05EADEE477E82D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling>
struct Nullable_1_t6A77015A82518BF00D6135AF5EF5E6C444949ED8 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t6A77015A82518BF00D6135AF5EF5E6C444949ED8, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t6A77015A82518BF00D6135AF5EF5E6C444949ED8, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling>
struct Nullable_1_tFC5E822631DD7E1FC2D78A68ABB5F4EAC4EF460E 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tFC5E822631DD7E1FC2D78A68ABB5F4EAC4EF460E, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tFC5E822631DD7E1FC2D78A68ABB5F4EAC4EF460E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.NullValueHandling>
struct Nullable_1_t364CFAFF7F5FC4E106F6623125862FC285C06D5F 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t364CFAFF7F5FC4E106F6623125862FC285C06D5F, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t364CFAFF7F5FC4E106F6623125862FC285C06D5F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>
struct Nullable_1_t463FD6B35184519F8B3375B8DC7B9AB717DD281B 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t463FD6B35184519F8B3375B8DC7B9AB717DD281B, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t463FD6B35184519F8B3375B8DC7B9AB717DD281B, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling>
struct Nullable_1_tA8BF5C52CF8EF3B189BE940C5FDCC83D8EADD022 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA8BF5C52CF8EF3B189BE940C5FDCC83D8EADD022, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA8BF5C52CF8EF3B189BE940C5FDCC83D8EADD022, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>
struct Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_tD895835E2BF553B44187359A04B63349E4BB64A2 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD895835E2BF553B44187359A04B63349E4BB64A2, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD895835E2BF553B44187359A04B63349E4BB64A2, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling>
struct Nullable_1_tC05EF249BDA91DB6FE40C2F370FC3571AF676984 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tC05EF249BDA91DB6FE40C2F370FC3571AF676984, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tC05EF249BDA91DB6FE40C2F370FC3571AF676984, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>
struct Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_40)); }
	inline RuntimeObject * get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse>
struct Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68, ___m_result_40)); }
	inline SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * get_m_result_40() const { return ___m_result_40; }
	inline SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tF8CE897BF1B756D411B8678F9FE2A9CCE557AD92 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t7A618573BE4971F27978B4A8BA900EB72AAD538C * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tF8CE897BF1B756D411B8678F9FE2A9CCE557AD92 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tF8CE897BF1B756D411B8678F9FE2A9CCE557AD92 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tF8CE897BF1B756D411B8678F9FE2A9CCE557AD92 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t7A618573BE4971F27978B4A8BA900EB72AAD538C * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t7A618573BE4971F27978B4A8BA900EB72AAD538C ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t7A618573BE4971F27978B4A8BA900EB72AAD538C * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3, ___m_result_40)); }
	inline String_t* get_m_result_40() const { return ___m_result_40; }
	inline String_t** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(String_t* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Unity.Services.Authentication.WellKnownKeysResponse>
struct Task_1_t98B46A031F0AA87AC60519A0EC92DA07388CA383  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	WellKnownKeysResponse_t362C5F2449BC6E27CFF9E8DA7E3BEF85044AA899 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t98B46A031F0AA87AC60519A0EC92DA07388CA383, ___m_result_40)); }
	inline WellKnownKeysResponse_t362C5F2449BC6E27CFF9E8DA7E3BEF85044AA899 * get_m_result_40() const { return ___m_result_40; }
	inline WellKnownKeysResponse_t362C5F2449BC6E27CFF9E8DA7E3BEF85044AA899 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(WellKnownKeysResponse_t362C5F2449BC6E27CFF9E8DA7E3BEF85044AA899 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t98B46A031F0AA87AC60519A0EC92DA07388CA383_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tAD06AAEC317CD4C749E1009A63CAC16FE5937AE9 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tB1C44E88693B4CF8CB6909E1A088205160E9E840 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t98B46A031F0AA87AC60519A0EC92DA07388CA383_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tAD06AAEC317CD4C749E1009A63CAC16FE5937AE9 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tAD06AAEC317CD4C749E1009A63CAC16FE5937AE9 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tAD06AAEC317CD4C749E1009A63CAC16FE5937AE9 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t98B46A031F0AA87AC60519A0EC92DA07388CA383_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tB1C44E88693B4CF8CB6909E1A088205160E9E840 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tB1C44E88693B4CF8CB6909E1A088205160E9E840 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tB1C44E88693B4CF8CB6909E1A088205160E9E840 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// Unity.Services.Authentication.AccessTokenComponent
struct AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB  : public RuntimeObject
{
public:
	// System.String Unity.Services.Authentication.AccessTokenComponent::<AccessToken>k__BackingField
	String_t* ___U3CAccessTokenU3Ek__BackingField_0;
	// System.Nullable`1<System.DateTime> Unity.Services.Authentication.AccessTokenComponent::<ExpiryTime>k__BackingField
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___U3CExpiryTimeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAccessTokenU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB, ___U3CAccessTokenU3Ek__BackingField_0)); }
	inline String_t* get_U3CAccessTokenU3Ek__BackingField_0() const { return ___U3CAccessTokenU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CAccessTokenU3Ek__BackingField_0() { return &___U3CAccessTokenU3Ek__BackingField_0; }
	inline void set_U3CAccessTokenU3Ek__BackingField_0(String_t* value)
	{
		___U3CAccessTokenU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAccessTokenU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExpiryTimeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB, ___U3CExpiryTimeU3Ek__BackingField_1)); }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  get_U3CExpiryTimeU3Ek__BackingField_1() const { return ___U3CExpiryTimeU3Ek__BackingField_1; }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * get_address_of_U3CExpiryTimeU3Ek__BackingField_1() { return &___U3CExpiryTimeU3Ek__BackingField_1; }
	inline void set_U3CExpiryTimeU3Ek__BackingField_1(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  value)
	{
		___U3CExpiryTimeU3Ek__BackingField_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// Unity.Services.Authentication.AuthenticationServiceInternal
struct AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB  : public RuntimeObject
{
public:
	// System.Action`1<Unity.Services.Core.RequestFailedException> Unity.Services.Authentication.AuthenticationServiceInternal::SignInFailed
	Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * ___SignInFailed_0;
	// System.Action Unity.Services.Authentication.AuthenticationServiceInternal::SignedIn
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___SignedIn_1;
	// System.Action Unity.Services.Authentication.AuthenticationServiceInternal::SignedOut
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___SignedOut_2;
	// System.Action Unity.Services.Authentication.AuthenticationServiceInternal::Expired
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___Expired_3;
	// Unity.Services.Authentication.PlayerInfo Unity.Services.Authentication.AuthenticationServiceInternal::<PlayerInfo>k__BackingField
	PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 * ___U3CPlayerInfoU3Ek__BackingField_4;
	// System.Nullable`1<System.Int64> Unity.Services.Authentication.AuthenticationServiceInternal::<ExpirationActionId>k__BackingField
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___U3CExpirationActionIdU3Ek__BackingField_5;
	// System.Nullable`1<System.Int64> Unity.Services.Authentication.AuthenticationServiceInternal::<RefreshActionId>k__BackingField
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___U3CRefreshActionIdU3Ek__BackingField_6;
	// Unity.Services.Authentication.AccessTokenComponent Unity.Services.Authentication.AuthenticationServiceInternal::<AccessTokenComponent>k__BackingField
	AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * ___U3CAccessTokenComponentU3Ek__BackingField_7;
	// Unity.Services.Authentication.EnvironmentIdComponent Unity.Services.Authentication.AuthenticationServiceInternal::<EnvironmentIdComponent>k__BackingField
	EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * ___U3CEnvironmentIdComponentU3Ek__BackingField_8;
	// Unity.Services.Authentication.PlayerIdComponent Unity.Services.Authentication.AuthenticationServiceInternal::<PlayerIdComponent>k__BackingField
	PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * ___U3CPlayerIdComponentU3Ek__BackingField_9;
	// Unity.Services.Authentication.SessionTokenComponent Unity.Services.Authentication.AuthenticationServiceInternal::<SessionTokenComponent>k__BackingField
	SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * ___U3CSessionTokenComponentU3Ek__BackingField_10;
	// Unity.Services.Authentication.WellKnownKeysComponent Unity.Services.Authentication.AuthenticationServiceInternal::<WellKnownKeysComponent>k__BackingField
	WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * ___U3CWellKnownKeysComponentU3Ek__BackingField_11;
	// Unity.Services.Authentication.AuthenticationState Unity.Services.Authentication.AuthenticationServiceInternal::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_12;
	// Unity.Services.Authentication.IAuthenticationSettings Unity.Services.Authentication.AuthenticationServiceInternal::<Settings>k__BackingField
	RuntimeObject* ___U3CSettingsU3Ek__BackingField_13;
	// Unity.Services.Authentication.IAuthenticationNetworkClient Unity.Services.Authentication.AuthenticationServiceInternal::<NetworkClient>k__BackingField
	RuntimeObject* ___U3CNetworkClientU3Ek__BackingField_14;
	// Unity.Services.Authentication.IProfile Unity.Services.Authentication.AuthenticationServiceInternal::m_Profile
	RuntimeObject* ___m_Profile_15;
	// Unity.Services.Authentication.IJwtDecoder Unity.Services.Authentication.AuthenticationServiceInternal::m_JwtDecoder
	RuntimeObject* ___m_JwtDecoder_16;
	// Unity.Services.Authentication.IAuthenticationCache Unity.Services.Authentication.AuthenticationServiceInternal::m_Cache
	RuntimeObject* ___m_Cache_17;
	// Unity.Services.Core.Scheduler.Internal.IActionScheduler Unity.Services.Authentication.AuthenticationServiceInternal::m_Scheduler
	RuntimeObject* ___m_Scheduler_18;
	// Unity.Services.Authentication.IDateTimeWrapper Unity.Services.Authentication.AuthenticationServiceInternal::m_DateTime
	RuntimeObject* ___m_DateTime_19;
	// Unity.Services.Authentication.IAuthenticationMetrics Unity.Services.Authentication.AuthenticationServiceInternal::m_Metrics
	RuntimeObject* ___m_Metrics_20;
	// System.Action`2<Unity.Services.Authentication.AuthenticationState,Unity.Services.Authentication.AuthenticationState> Unity.Services.Authentication.AuthenticationServiceInternal::StateChanged
	Action_2_t881D75688CFDB53402D8BAF505B7F10DB23DE4F0 * ___StateChanged_21;

public:
	inline static int32_t get_offset_of_SignInFailed_0() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___SignInFailed_0)); }
	inline Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * get_SignInFailed_0() const { return ___SignInFailed_0; }
	inline Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 ** get_address_of_SignInFailed_0() { return &___SignInFailed_0; }
	inline void set_SignInFailed_0(Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * value)
	{
		___SignInFailed_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SignInFailed_0), (void*)value);
	}

	inline static int32_t get_offset_of_SignedIn_1() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___SignedIn_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_SignedIn_1() const { return ___SignedIn_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_SignedIn_1() { return &___SignedIn_1; }
	inline void set_SignedIn_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___SignedIn_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SignedIn_1), (void*)value);
	}

	inline static int32_t get_offset_of_SignedOut_2() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___SignedOut_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_SignedOut_2() const { return ___SignedOut_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_SignedOut_2() { return &___SignedOut_2; }
	inline void set_SignedOut_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___SignedOut_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SignedOut_2), (void*)value);
	}

	inline static int32_t get_offset_of_Expired_3() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___Expired_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_Expired_3() const { return ___Expired_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_Expired_3() { return &___Expired_3; }
	inline void set_Expired_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___Expired_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Expired_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayerInfoU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___U3CPlayerInfoU3Ek__BackingField_4)); }
	inline PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 * get_U3CPlayerInfoU3Ek__BackingField_4() const { return ___U3CPlayerInfoU3Ek__BackingField_4; }
	inline PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 ** get_address_of_U3CPlayerInfoU3Ek__BackingField_4() { return &___U3CPlayerInfoU3Ek__BackingField_4; }
	inline void set_U3CPlayerInfoU3Ek__BackingField_4(PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 * value)
	{
		___U3CPlayerInfoU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPlayerInfoU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExpirationActionIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___U3CExpirationActionIdU3Ek__BackingField_5)); }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  get_U3CExpirationActionIdU3Ek__BackingField_5() const { return ___U3CExpirationActionIdU3Ek__BackingField_5; }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * get_address_of_U3CExpirationActionIdU3Ek__BackingField_5() { return &___U3CExpirationActionIdU3Ek__BackingField_5; }
	inline void set_U3CExpirationActionIdU3Ek__BackingField_5(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  value)
	{
		___U3CExpirationActionIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CRefreshActionIdU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___U3CRefreshActionIdU3Ek__BackingField_6)); }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  get_U3CRefreshActionIdU3Ek__BackingField_6() const { return ___U3CRefreshActionIdU3Ek__BackingField_6; }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * get_address_of_U3CRefreshActionIdU3Ek__BackingField_6() { return &___U3CRefreshActionIdU3Ek__BackingField_6; }
	inline void set_U3CRefreshActionIdU3Ek__BackingField_6(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  value)
	{
		___U3CRefreshActionIdU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CAccessTokenComponentU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___U3CAccessTokenComponentU3Ek__BackingField_7)); }
	inline AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * get_U3CAccessTokenComponentU3Ek__BackingField_7() const { return ___U3CAccessTokenComponentU3Ek__BackingField_7; }
	inline AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB ** get_address_of_U3CAccessTokenComponentU3Ek__BackingField_7() { return &___U3CAccessTokenComponentU3Ek__BackingField_7; }
	inline void set_U3CAccessTokenComponentU3Ek__BackingField_7(AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * value)
	{
		___U3CAccessTokenComponentU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAccessTokenComponentU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnvironmentIdComponentU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___U3CEnvironmentIdComponentU3Ek__BackingField_8)); }
	inline EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * get_U3CEnvironmentIdComponentU3Ek__BackingField_8() const { return ___U3CEnvironmentIdComponentU3Ek__BackingField_8; }
	inline EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 ** get_address_of_U3CEnvironmentIdComponentU3Ek__BackingField_8() { return &___U3CEnvironmentIdComponentU3Ek__BackingField_8; }
	inline void set_U3CEnvironmentIdComponentU3Ek__BackingField_8(EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * value)
	{
		___U3CEnvironmentIdComponentU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEnvironmentIdComponentU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayerIdComponentU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___U3CPlayerIdComponentU3Ek__BackingField_9)); }
	inline PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * get_U3CPlayerIdComponentU3Ek__BackingField_9() const { return ___U3CPlayerIdComponentU3Ek__BackingField_9; }
	inline PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A ** get_address_of_U3CPlayerIdComponentU3Ek__BackingField_9() { return &___U3CPlayerIdComponentU3Ek__BackingField_9; }
	inline void set_U3CPlayerIdComponentU3Ek__BackingField_9(PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * value)
	{
		___U3CPlayerIdComponentU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPlayerIdComponentU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSessionTokenComponentU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___U3CSessionTokenComponentU3Ek__BackingField_10)); }
	inline SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * get_U3CSessionTokenComponentU3Ek__BackingField_10() const { return ___U3CSessionTokenComponentU3Ek__BackingField_10; }
	inline SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E ** get_address_of_U3CSessionTokenComponentU3Ek__BackingField_10() { return &___U3CSessionTokenComponentU3Ek__BackingField_10; }
	inline void set_U3CSessionTokenComponentU3Ek__BackingField_10(SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * value)
	{
		___U3CSessionTokenComponentU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSessionTokenComponentU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWellKnownKeysComponentU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___U3CWellKnownKeysComponentU3Ek__BackingField_11)); }
	inline WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * get_U3CWellKnownKeysComponentU3Ek__BackingField_11() const { return ___U3CWellKnownKeysComponentU3Ek__BackingField_11; }
	inline WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 ** get_address_of_U3CWellKnownKeysComponentU3Ek__BackingField_11() { return &___U3CWellKnownKeysComponentU3Ek__BackingField_11; }
	inline void set_U3CWellKnownKeysComponentU3Ek__BackingField_11(WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * value)
	{
		___U3CWellKnownKeysComponentU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CWellKnownKeysComponentU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___U3CStateU3Ek__BackingField_12)); }
	inline int32_t get_U3CStateU3Ek__BackingField_12() const { return ___U3CStateU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_12() { return &___U3CStateU3Ek__BackingField_12; }
	inline void set_U3CStateU3Ek__BackingField_12(int32_t value)
	{
		___U3CStateU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CSettingsU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___U3CSettingsU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CSettingsU3Ek__BackingField_13() const { return ___U3CSettingsU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CSettingsU3Ek__BackingField_13() { return &___U3CSettingsU3Ek__BackingField_13; }
	inline void set_U3CSettingsU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CSettingsU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSettingsU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNetworkClientU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___U3CNetworkClientU3Ek__BackingField_14)); }
	inline RuntimeObject* get_U3CNetworkClientU3Ek__BackingField_14() const { return ___U3CNetworkClientU3Ek__BackingField_14; }
	inline RuntimeObject** get_address_of_U3CNetworkClientU3Ek__BackingField_14() { return &___U3CNetworkClientU3Ek__BackingField_14; }
	inline void set_U3CNetworkClientU3Ek__BackingField_14(RuntimeObject* value)
	{
		___U3CNetworkClientU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNetworkClientU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Profile_15() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___m_Profile_15)); }
	inline RuntimeObject* get_m_Profile_15() const { return ___m_Profile_15; }
	inline RuntimeObject** get_address_of_m_Profile_15() { return &___m_Profile_15; }
	inline void set_m_Profile_15(RuntimeObject* value)
	{
		___m_Profile_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Profile_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_JwtDecoder_16() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___m_JwtDecoder_16)); }
	inline RuntimeObject* get_m_JwtDecoder_16() const { return ___m_JwtDecoder_16; }
	inline RuntimeObject** get_address_of_m_JwtDecoder_16() { return &___m_JwtDecoder_16; }
	inline void set_m_JwtDecoder_16(RuntimeObject* value)
	{
		___m_JwtDecoder_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_JwtDecoder_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Cache_17() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___m_Cache_17)); }
	inline RuntimeObject* get_m_Cache_17() const { return ___m_Cache_17; }
	inline RuntimeObject** get_address_of_m_Cache_17() { return &___m_Cache_17; }
	inline void set_m_Cache_17(RuntimeObject* value)
	{
		___m_Cache_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cache_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Scheduler_18() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___m_Scheduler_18)); }
	inline RuntimeObject* get_m_Scheduler_18() const { return ___m_Scheduler_18; }
	inline RuntimeObject** get_address_of_m_Scheduler_18() { return &___m_Scheduler_18; }
	inline void set_m_Scheduler_18(RuntimeObject* value)
	{
		___m_Scheduler_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scheduler_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DateTime_19() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___m_DateTime_19)); }
	inline RuntimeObject* get_m_DateTime_19() const { return ___m_DateTime_19; }
	inline RuntimeObject** get_address_of_m_DateTime_19() { return &___m_DateTime_19; }
	inline void set_m_DateTime_19(RuntimeObject* value)
	{
		___m_DateTime_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DateTime_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Metrics_20() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___m_Metrics_20)); }
	inline RuntimeObject* get_m_Metrics_20() const { return ___m_Metrics_20; }
	inline RuntimeObject** get_address_of_m_Metrics_20() { return &___m_Metrics_20; }
	inline void set_m_Metrics_20(RuntimeObject* value)
	{
		___m_Metrics_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Metrics_20), (void*)value);
	}

	inline static int32_t get_offset_of_StateChanged_21() { return static_cast<int32_t>(offsetof(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB, ___StateChanged_21)); }
	inline Action_2_t881D75688CFDB53402D8BAF505B7F10DB23DE4F0 * get_StateChanged_21() const { return ___StateChanged_21; }
	inline Action_2_t881D75688CFDB53402D8BAF505B7F10DB23DE4F0 ** get_address_of_StateChanged_21() { return &___StateChanged_21; }
	inline void set_StateChanged_21(Action_2_t881D75688CFDB53402D8BAF505B7F10DB23DE4F0 * value)
	{
		___StateChanged_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateChanged_21), (void*)value);
	}
};


// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D  : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_pinvoke : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_com : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
};

// Newtonsoft.Json.JsonException
struct JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962  : public Exception_t
{
public:

public:
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

// Unity.Services.Authentication.PlayerInfo
struct PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32  : public RuntimeObject
{
public:
	// System.String Unity.Services.Authentication.PlayerInfo::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.Nullable`1<System.DateTime> Unity.Services.Authentication.PlayerInfo::<CreatedAt>k__BackingField
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___U3CCreatedAtU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<Unity.Services.Authentication.Identity> Unity.Services.Authentication.PlayerInfo::<Identities>k__BackingField
	List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A * ___U3CIdentitiesU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32, ___U3CIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCreatedAtU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32, ___U3CCreatedAtU3Ek__BackingField_1)); }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  get_U3CCreatedAtU3Ek__BackingField_1() const { return ___U3CCreatedAtU3Ek__BackingField_1; }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * get_address_of_U3CCreatedAtU3Ek__BackingField_1() { return &___U3CCreatedAtU3Ek__BackingField_1; }
	inline void set_U3CCreatedAtU3Ek__BackingField_1(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  value)
	{
		___U3CCreatedAtU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CIdentitiesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32, ___U3CIdentitiesU3Ek__BackingField_2)); }
	inline List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A * get_U3CIdentitiesU3Ek__BackingField_2() const { return ___U3CIdentitiesU3Ek__BackingField_2; }
	inline List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A ** get_address_of_U3CIdentitiesU3Ek__BackingField_2() { return &___U3CIdentitiesU3Ek__BackingField_2; }
	inline void set_U3CIdentitiesU3Ek__BackingField_2(List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A * value)
	{
		___U3CIdentitiesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdentitiesU3Ek__BackingField_2), (void*)value);
	}
};


// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7  : public RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A * ___store_3;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_4;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_6;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_7;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 * ___rsa_8;

public:
	inline static int32_t get_offset_of_store_3() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___store_3)); }
	inline KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A * get_store_3() const { return ___store_3; }
	inline KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A ** get_address_of_store_3() { return &___store_3; }
	inline void set_store_3(KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A * value)
	{
		___store_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___store_3), (void*)value);
	}

	inline static int32_t get_offset_of_persistKey_4() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___persistKey_4)); }
	inline bool get_persistKey_4() const { return ___persistKey_4; }
	inline bool* get_address_of_persistKey_4() { return &___persistKey_4; }
	inline void set_persistKey_4(bool value)
	{
		___persistKey_4 = value;
	}

	inline static int32_t get_offset_of_persisted_5() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___persisted_5)); }
	inline bool get_persisted_5() const { return ___persisted_5; }
	inline bool* get_address_of_persisted_5() { return &___persisted_5; }
	inline void set_persisted_5(bool value)
	{
		___persisted_5 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_6() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___privateKeyExportable_6)); }
	inline bool get_privateKeyExportable_6() const { return ___privateKeyExportable_6; }
	inline bool* get_address_of_privateKeyExportable_6() { return &___privateKeyExportable_6; }
	inline void set_privateKeyExportable_6(bool value)
	{
		___privateKeyExportable_6 = value;
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}

	inline static int32_t get_offset_of_rsa_8() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___rsa_8)); }
	inline RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 * get_rsa_8() const { return ___rsa_8; }
	inline RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 ** get_address_of_rsa_8() { return &___rsa_8; }
	inline void set_rsa_8(RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 * value)
	{
		___rsa_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rsa_8), (void*)value);
	}
};

struct RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_StaticFields
{
public:
	// System.Security.Cryptography.CspProviderFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.RSACryptoServiceProvider::s_UseMachineKeyStore
	int32_t ___s_UseMachineKeyStore_2;

public:
	inline static int32_t get_offset_of_s_UseMachineKeyStore_2() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_StaticFields, ___s_UseMachineKeyStore_2)); }
	inline int32_t get_s_UseMachineKeyStore_2() const { return ___s_UseMachineKeyStore_2; }
	inline int32_t* get_address_of_s_UseMachineKeyStore_2() { return &___s_UseMachineKeyStore_2; }
	inline void set_s_UseMachineKeyStore_2(int32_t value)
	{
		___s_UseMachineKeyStore_2 = value;
	}
};


// Unity.Services.Core.RequestFailedException
struct RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A  : public Exception_t
{
public:
	// System.Int32 Unity.Services.Core.RequestFailedException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A, ___U3CErrorCodeU3Ek__BackingField_17)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_17() const { return ___U3CErrorCodeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_17() { return &___U3CErrorCodeU3Ek__BackingField_17; }
	inline void set_U3CErrorCodeU3Ek__BackingField_17(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_17 = value;
	}
};


// Unity.Services.Core.ServicesInitializationException
struct ServicesInitializationException_tB29CA123886F164D3642AC2F2EFEEA32AE80A0C1  : public Exception_t
{
public:

public:
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


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669  : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
};

// Unity.Services.Authentication.WebRequest
struct WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4  : public RuntimeObject
{
public:
	// Unity.Services.Authentication.WebRequestVerb Unity.Services.Authentication.WebRequest::m_Verb
	int32_t ___m_Verb_0;
	// System.String Unity.Services.Authentication.WebRequest::m_Url
	String_t* ___m_Url_1;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Authentication.WebRequest::m_Headers
	RuntimeObject* ___m_Headers_2;
	// System.String Unity.Services.Authentication.WebRequest::m_Payload
	String_t* ___m_Payload_3;
	// System.String Unity.Services.Authentication.WebRequest::m_PayloadContentType
	String_t* ___m_PayloadContentType_4;
	// Newtonsoft.Json.JsonSerializerSettings Unity.Services.Authentication.WebRequest::m_JsonSerializerSettings
	JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8 * ___m_JsonSerializerSettings_5;
	// Unity.Services.Authentication.INetworkConfiguration Unity.Services.Authentication.WebRequest::<Configuration>k__BackingField
	RuntimeObject* ___U3CConfigurationU3Ek__BackingField_6;
	// System.Int32 Unity.Services.Authentication.WebRequest::<Retries>k__BackingField
	int32_t ___U3CRetriesU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Verb_0() { return static_cast<int32_t>(offsetof(WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4, ___m_Verb_0)); }
	inline int32_t get_m_Verb_0() const { return ___m_Verb_0; }
	inline int32_t* get_address_of_m_Verb_0() { return &___m_Verb_0; }
	inline void set_m_Verb_0(int32_t value)
	{
		___m_Verb_0 = value;
	}

	inline static int32_t get_offset_of_m_Url_1() { return static_cast<int32_t>(offsetof(WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4, ___m_Url_1)); }
	inline String_t* get_m_Url_1() const { return ___m_Url_1; }
	inline String_t** get_address_of_m_Url_1() { return &___m_Url_1; }
	inline void set_m_Url_1(String_t* value)
	{
		___m_Url_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Url_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Headers_2() { return static_cast<int32_t>(offsetof(WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4, ___m_Headers_2)); }
	inline RuntimeObject* get_m_Headers_2() const { return ___m_Headers_2; }
	inline RuntimeObject** get_address_of_m_Headers_2() { return &___m_Headers_2; }
	inline void set_m_Headers_2(RuntimeObject* value)
	{
		___m_Headers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Headers_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Payload_3() { return static_cast<int32_t>(offsetof(WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4, ___m_Payload_3)); }
	inline String_t* get_m_Payload_3() const { return ___m_Payload_3; }
	inline String_t** get_address_of_m_Payload_3() { return &___m_Payload_3; }
	inline void set_m_Payload_3(String_t* value)
	{
		___m_Payload_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Payload_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_PayloadContentType_4() { return static_cast<int32_t>(offsetof(WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4, ___m_PayloadContentType_4)); }
	inline String_t* get_m_PayloadContentType_4() const { return ___m_PayloadContentType_4; }
	inline String_t** get_address_of_m_PayloadContentType_4() { return &___m_PayloadContentType_4; }
	inline void set_m_PayloadContentType_4(String_t* value)
	{
		___m_PayloadContentType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PayloadContentType_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_JsonSerializerSettings_5() { return static_cast<int32_t>(offsetof(WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4, ___m_JsonSerializerSettings_5)); }
	inline JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8 * get_m_JsonSerializerSettings_5() const { return ___m_JsonSerializerSettings_5; }
	inline JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8 ** get_address_of_m_JsonSerializerSettings_5() { return &___m_JsonSerializerSettings_5; }
	inline void set_m_JsonSerializerSettings_5(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8 * value)
	{
		___m_JsonSerializerSettings_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_JsonSerializerSettings_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConfigurationU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4, ___U3CConfigurationU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CConfigurationU3Ek__BackingField_6() const { return ___U3CConfigurationU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CConfigurationU3Ek__BackingField_6() { return &___U3CConfigurationU3Ek__BackingField_6; }
	inline void set_U3CConfigurationU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CConfigurationU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRetriesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4, ___U3CRetriesU3Ek__BackingField_7)); }
	inline int32_t get_U3CRetriesU3Ek__BackingField_7() const { return ___U3CRetriesU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CRetriesU3Ek__BackingField_7() { return &___U3CRetriesU3Ek__BackingField_7; }
	inline void set_U3CRetriesU3Ek__BackingField_7(int32_t value)
	{
		___U3CRetriesU3Ek__BackingField_7 = value;
	}
};


// Unity.Services.Authentication.WebRequestException
struct WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6  : public Exception_t
{
public:
	// System.Boolean Unity.Services.Authentication.WebRequestException::<NetworkError>k__BackingField
	bool ___U3CNetworkErrorU3Ek__BackingField_17;
	// System.Boolean Unity.Services.Authentication.WebRequestException::<DeserializationError>k__BackingField
	bool ___U3CDeserializationErrorU3Ek__BackingField_18;
	// System.Boolean Unity.Services.Authentication.WebRequestException::<ServerError>k__BackingField
	bool ___U3CServerErrorU3Ek__BackingField_19;
	// System.Int64 Unity.Services.Authentication.WebRequestException::<ResponseCode>k__BackingField
	int64_t ___U3CResponseCodeU3Ek__BackingField_20;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Authentication.WebRequestException::<ResponseHeaders>k__BackingField
	RuntimeObject* ___U3CResponseHeadersU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_U3CNetworkErrorU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6, ___U3CNetworkErrorU3Ek__BackingField_17)); }
	inline bool get_U3CNetworkErrorU3Ek__BackingField_17() const { return ___U3CNetworkErrorU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CNetworkErrorU3Ek__BackingField_17() { return &___U3CNetworkErrorU3Ek__BackingField_17; }
	inline void set_U3CNetworkErrorU3Ek__BackingField_17(bool value)
	{
		___U3CNetworkErrorU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CDeserializationErrorU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6, ___U3CDeserializationErrorU3Ek__BackingField_18)); }
	inline bool get_U3CDeserializationErrorU3Ek__BackingField_18() const { return ___U3CDeserializationErrorU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CDeserializationErrorU3Ek__BackingField_18() { return &___U3CDeserializationErrorU3Ek__BackingField_18; }
	inline void set_U3CDeserializationErrorU3Ek__BackingField_18(bool value)
	{
		___U3CDeserializationErrorU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CServerErrorU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6, ___U3CServerErrorU3Ek__BackingField_19)); }
	inline bool get_U3CServerErrorU3Ek__BackingField_19() const { return ___U3CServerErrorU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CServerErrorU3Ek__BackingField_19() { return &___U3CServerErrorU3Ek__BackingField_19; }
	inline void set_U3CServerErrorU3Ek__BackingField_19(bool value)
	{
		___U3CServerErrorU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CResponseCodeU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6, ___U3CResponseCodeU3Ek__BackingField_20)); }
	inline int64_t get_U3CResponseCodeU3Ek__BackingField_20() const { return ___U3CResponseCodeU3Ek__BackingField_20; }
	inline int64_t* get_address_of_U3CResponseCodeU3Ek__BackingField_20() { return &___U3CResponseCodeU3Ek__BackingField_20; }
	inline void set_U3CResponseCodeU3Ek__BackingField_20(int64_t value)
	{
		___U3CResponseCodeU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CResponseHeadersU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6, ___U3CResponseHeadersU3Ek__BackingField_21)); }
	inline RuntimeObject* get_U3CResponseHeadersU3Ek__BackingField_21() const { return ___U3CResponseHeadersU3Ek__BackingField_21; }
	inline RuntimeObject** get_address_of_U3CResponseHeadersU3Ek__BackingField_21() { return &___U3CResponseHeadersU3Ek__BackingField_21; }
	inline void set_U3CResponseHeadersU3Ek__BackingField_21(RuntimeObject* value)
	{
		___U3CResponseHeadersU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResponseHeadersU3Ek__BackingField_21), (void*)value);
	}
};


// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Unity.Services.Authentication.ProfileEventArgs>
struct Action_1_t97B4C0A2C81634DF78A45DF0E8BFCA7ED20F4E87  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Unity.Services.Core.RequestFailedException>
struct Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Unity.Services.Authentication.AuthenticationState,Unity.Services.Authentication.AuthenticationState>
struct Action_2_t881D75688CFDB53402D8BAF505B7F10DB23DE4F0  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse>>
struct Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.String,System.Boolean>
struct Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<System.Runtime.Serialization.StreamingContext>
struct Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15 
{
public:
	// T System.Nullable`1::value
	StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15, ___value_0)); }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  get_value_0() const { return ___value_0; }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
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


// Unity.Services.Authentication.AuthenticationException
struct AuthenticationException_t2C1D97715C433D51CC8B9EE9A86A72015F2E92CC  : public RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A
{
public:

public:
};


// Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__103
struct U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510 
{
public:
	// System.Int32 Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__103::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__103::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Unity.Services.Authentication.AuthenticationServiceInternal Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__103::<>4__this
	AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.WellKnownKeysResponse> Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__103::<>u__1
	TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510, ___U3CU3E4__this_2)); }
	inline AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__108
struct U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9 
{
public:
	// System.Int32 Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__108::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__108::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Unity.Services.Authentication.AuthenticationServiceInternal Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__108::<>4__this
	AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * ___U3CU3E4__this_2;
	// System.Func`1<System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse>> Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__108::signInRequest
	Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9 * ___signInRequest_3;
	// System.Boolean Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__108::enableRefresh
	bool ___enableRefresh_4;
	// System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse> Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__108::<signinRequestTask>5__2
	Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 * ___U3CsigninRequestTaskU3E5__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__108::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.SignInResponse> Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__108::<>u__2
	TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8  ___U3CU3Eu__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9, ___U3CU3E4__this_2)); }
	inline AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_signInRequest_3() { return static_cast<int32_t>(offsetof(U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9, ___signInRequest_3)); }
	inline Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9 * get_signInRequest_3() const { return ___signInRequest_3; }
	inline Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9 ** get_address_of_signInRequest_3() { return &___signInRequest_3; }
	inline void set_signInRequest_3(Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9 * value)
	{
		___signInRequest_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signInRequest_3), (void*)value);
	}

	inline static int32_t get_offset_of_enableRefresh_4() { return static_cast<int32_t>(offsetof(U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9, ___enableRefresh_4)); }
	inline bool get_enableRefresh_4() const { return ___enableRefresh_4; }
	inline bool* get_address_of_enableRefresh_4() { return &___enableRefresh_4; }
	inline void set_enableRefresh_4(bool value)
	{
		___enableRefresh_4 = value;
	}

	inline static int32_t get_offset_of_U3CsigninRequestTaskU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9, ___U3CsigninRequestTaskU3E5__2_5)); }
	inline Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 * get_U3CsigninRequestTaskU3E5__2_5() const { return ___U3CsigninRequestTaskU3E5__2_5; }
	inline Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 ** get_address_of_U3CsigninRequestTaskU3E5__2_5() { return &___U3CsigninRequestTaskU3E5__2_5; }
	inline void set_U3CsigninRequestTaskU3E5__2_5(Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 * value)
	{
		___U3CsigninRequestTaskU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsigninRequestTaskU3E5__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_7() { return static_cast<int32_t>(offsetof(U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9, ___U3CU3Eu__2_7)); }
	inline TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8  get_U3CU3Eu__2_7() const { return ___U3CU3Eu__2_7; }
	inline TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8 * get_address_of_U3CU3Eu__2_7() { return &___U3CU3Eu__2_7; }
	inline void set_U3CU3Eu__2_7(TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8  value)
	{
		___U3CU3Eu__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
	}
};


// Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__109
struct U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804 
{
public:
	// System.Int32 Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__109::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__109::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Unity.Services.Authentication.AuthenticationServiceInternal Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__109::<>4__this
	AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * ___U3CU3E4__this_2;
	// System.String Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__109::sessionToken
	String_t* ___sessionToken_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.SignInResponse> Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__109::<>u__1
	TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804, ___U3CU3E4__this_2)); }
	inline AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_sessionToken_3() { return static_cast<int32_t>(offsetof(U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804, ___sessionToken_3)); }
	inline String_t* get_sessionToken_3() const { return ___sessionToken_3; }
	inline String_t** get_address_of_sessionToken_3() { return &___sessionToken_3; }
	inline void set_sessionToken_3(String_t* value)
	{
		___sessionToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionToken_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8  : public RuntimeObject
{
public:
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializerSettings::_formatting
	Nullable_1_tE3B760867512C0006EB766454C05EADEE477E82D  ____formatting_2;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_dateFormatHandling
	Nullable_1_t1B43369EC9A933C68393AC83A57B04A93B5892C7  ____dateFormatHandling_3;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializerSettings::_dateTimeZoneHandling
	Nullable_1_tF302419AFDB8FF465B267E0FB85B334C76F6B2E4  ____dateTimeZoneHandling_4;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializerSettings::_dateParseHandling
	Nullable_1_tDFDD131CC24467C6FB6C1D60AA711CE0D7D7FA2C  ____dateParseHandling_5;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_floatFormatHandling
	Nullable_1_t339137FB409DDB29ACF72E6FF4B0018F5FD0971E  ____floatFormatHandling_6;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializerSettings::_floatParseHandling
	Nullable_1_tA0ED4D21D93F0978557A6558BEAB17A5D839B209  ____floatParseHandling_7;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializerSettings::_stringEscapeHandling
	Nullable_1_tD895835E2BF553B44187359A04B63349E4BB64A2  ____stringEscapeHandling_8;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____culture_9;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializerSettings::_checkAdditionalContent
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ____checkAdditionalContent_10;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializerSettings::_maxDepth
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ____maxDepth_11;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_maxDepthSet
	bool ____maxDepthSet_12;
	// System.String Newtonsoft.Json.JsonSerializerSettings::_dateFormatString
	String_t* ____dateFormatString_13;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_dateFormatStringSet
	bool ____dateFormatStringSet_14;
	// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameAssemblyFormatHandling
	Nullable_1_tC05EF249BDA91DB6FE40C2F370FC3571AF676984  ____typeNameAssemblyFormatHandling_15;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.JsonSerializerSettings::_defaultValueHandling
	Nullable_1_tD0E592131A1B6D538A911F285F165C9AFE310115  ____defaultValueHandling_16;
	// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling> Newtonsoft.Json.JsonSerializerSettings::_preserveReferencesHandling
	Nullable_1_tA8BF5C52CF8EF3B189BE940C5FDCC83D8EADD022  ____preserveReferencesHandling_17;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.JsonSerializerSettings::_nullValueHandling
	Nullable_1_t364CFAFF7F5FC4E106F6623125862FC285C06D5F  ____nullValueHandling_18;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.JsonSerializerSettings::_objectCreationHandling
	Nullable_1_t463FD6B35184519F8B3375B8DC7B9AB717DD281B  ____objectCreationHandling_19;
	// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling> Newtonsoft.Json.JsonSerializerSettings::_missingMemberHandling
	Nullable_1_tFC5E822631DD7E1FC2D78A68ABB5F4EAC4EF460E  ____missingMemberHandling_20;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.JsonSerializerSettings::_referenceLoopHandling
	Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F  ____referenceLoopHandling_21;
	// System.Nullable`1<System.Runtime.Serialization.StreamingContext> Newtonsoft.Json.JsonSerializerSettings::_context
	Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15  ____context_22;
	// System.Nullable`1<Newtonsoft.Json.ConstructorHandling> Newtonsoft.Json.JsonSerializerSettings::_constructorHandling
	Nullable_1_t125BA2D32C606CA0EF76F875548282249C2B582A  ____constructorHandling_23;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameHandling
	Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866  ____typeNameHandling_24;
	// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling> Newtonsoft.Json.JsonSerializerSettings::_metadataPropertyHandling
	Nullable_1_t6A77015A82518BF00D6135AF5EF5E6C444949ED8  ____metadataPropertyHandling_25;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_26;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializerSettings::<ContractResolver>k__BackingField
	RuntimeObject* ___U3CContractResolverU3Ek__BackingField_27;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializerSettings::<EqualityComparer>k__BackingField
	RuntimeObject* ___U3CEqualityComparerU3Ek__BackingField_28;
	// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver> Newtonsoft.Json.JsonSerializerSettings::<ReferenceResolverProvider>k__BackingField
	Func_1_t649DCF3F0E5041B33631B23DFC4D9E7440B6765B * ___U3CReferenceResolverProviderU3Ek__BackingField_29;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializerSettings::<TraceWriter>k__BackingField
	RuntimeObject* ___U3CTraceWriterU3Ek__BackingField_30;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializerSettings::<SerializationBinder>k__BackingField
	RuntimeObject* ___U3CSerializationBinderU3Ek__BackingField_31;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializerSettings::<Error>k__BackingField
	EventHandler_1_tD1C6AF7CE18AF0DA8AA90A6926C0936FD56304C2 * ___U3CErrorU3Ek__BackingField_32;

public:
	inline static int32_t get_offset_of__formatting_2() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____formatting_2)); }
	inline Nullable_1_tE3B760867512C0006EB766454C05EADEE477E82D  get__formatting_2() const { return ____formatting_2; }
	inline Nullable_1_tE3B760867512C0006EB766454C05EADEE477E82D * get_address_of__formatting_2() { return &____formatting_2; }
	inline void set__formatting_2(Nullable_1_tE3B760867512C0006EB766454C05EADEE477E82D  value)
	{
		____formatting_2 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_3() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____dateFormatHandling_3)); }
	inline Nullable_1_t1B43369EC9A933C68393AC83A57B04A93B5892C7  get__dateFormatHandling_3() const { return ____dateFormatHandling_3; }
	inline Nullable_1_t1B43369EC9A933C68393AC83A57B04A93B5892C7 * get_address_of__dateFormatHandling_3() { return &____dateFormatHandling_3; }
	inline void set__dateFormatHandling_3(Nullable_1_t1B43369EC9A933C68393AC83A57B04A93B5892C7  value)
	{
		____dateFormatHandling_3 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_4() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____dateTimeZoneHandling_4)); }
	inline Nullable_1_tF302419AFDB8FF465B267E0FB85B334C76F6B2E4  get__dateTimeZoneHandling_4() const { return ____dateTimeZoneHandling_4; }
	inline Nullable_1_tF302419AFDB8FF465B267E0FB85B334C76F6B2E4 * get_address_of__dateTimeZoneHandling_4() { return &____dateTimeZoneHandling_4; }
	inline void set__dateTimeZoneHandling_4(Nullable_1_tF302419AFDB8FF465B267E0FB85B334C76F6B2E4  value)
	{
		____dateTimeZoneHandling_4 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_5() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____dateParseHandling_5)); }
	inline Nullable_1_tDFDD131CC24467C6FB6C1D60AA711CE0D7D7FA2C  get__dateParseHandling_5() const { return ____dateParseHandling_5; }
	inline Nullable_1_tDFDD131CC24467C6FB6C1D60AA711CE0D7D7FA2C * get_address_of__dateParseHandling_5() { return &____dateParseHandling_5; }
	inline void set__dateParseHandling_5(Nullable_1_tDFDD131CC24467C6FB6C1D60AA711CE0D7D7FA2C  value)
	{
		____dateParseHandling_5 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_6() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____floatFormatHandling_6)); }
	inline Nullable_1_t339137FB409DDB29ACF72E6FF4B0018F5FD0971E  get__floatFormatHandling_6() const { return ____floatFormatHandling_6; }
	inline Nullable_1_t339137FB409DDB29ACF72E6FF4B0018F5FD0971E * get_address_of__floatFormatHandling_6() { return &____floatFormatHandling_6; }
	inline void set__floatFormatHandling_6(Nullable_1_t339137FB409DDB29ACF72E6FF4B0018F5FD0971E  value)
	{
		____floatFormatHandling_6 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_7() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____floatParseHandling_7)); }
	inline Nullable_1_tA0ED4D21D93F0978557A6558BEAB17A5D839B209  get__floatParseHandling_7() const { return ____floatParseHandling_7; }
	inline Nullable_1_tA0ED4D21D93F0978557A6558BEAB17A5D839B209 * get_address_of__floatParseHandling_7() { return &____floatParseHandling_7; }
	inline void set__floatParseHandling_7(Nullable_1_tA0ED4D21D93F0978557A6558BEAB17A5D839B209  value)
	{
		____floatParseHandling_7 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_8() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____stringEscapeHandling_8)); }
	inline Nullable_1_tD895835E2BF553B44187359A04B63349E4BB64A2  get__stringEscapeHandling_8() const { return ____stringEscapeHandling_8; }
	inline Nullable_1_tD895835E2BF553B44187359A04B63349E4BB64A2 * get_address_of__stringEscapeHandling_8() { return &____stringEscapeHandling_8; }
	inline void set__stringEscapeHandling_8(Nullable_1_tD895835E2BF553B44187359A04B63349E4BB64A2  value)
	{
		____stringEscapeHandling_8 = value;
	}

	inline static int32_t get_offset_of__culture_9() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____culture_9)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__culture_9() const { return ____culture_9; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__culture_9() { return &____culture_9; }
	inline void set__culture_9(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____culture_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_9), (void*)value);
	}

	inline static int32_t get_offset_of__checkAdditionalContent_10() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____checkAdditionalContent_10)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get__checkAdditionalContent_10() const { return ____checkAdditionalContent_10; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of__checkAdditionalContent_10() { return &____checkAdditionalContent_10; }
	inline void set__checkAdditionalContent_10(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		____checkAdditionalContent_10 = value;
	}

	inline static int32_t get_offset_of__maxDepth_11() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____maxDepth_11)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get__maxDepth_11() const { return ____maxDepth_11; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of__maxDepth_11() { return &____maxDepth_11; }
	inline void set__maxDepth_11(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		____maxDepth_11 = value;
	}

	inline static int32_t get_offset_of__maxDepthSet_12() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____maxDepthSet_12)); }
	inline bool get__maxDepthSet_12() const { return ____maxDepthSet_12; }
	inline bool* get_address_of__maxDepthSet_12() { return &____maxDepthSet_12; }
	inline void set__maxDepthSet_12(bool value)
	{
		____maxDepthSet_12 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_13() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____dateFormatString_13)); }
	inline String_t* get__dateFormatString_13() const { return ____dateFormatString_13; }
	inline String_t** get_address_of__dateFormatString_13() { return &____dateFormatString_13; }
	inline void set__dateFormatString_13(String_t* value)
	{
		____dateFormatString_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_13), (void*)value);
	}

	inline static int32_t get_offset_of__dateFormatStringSet_14() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____dateFormatStringSet_14)); }
	inline bool get__dateFormatStringSet_14() const { return ____dateFormatStringSet_14; }
	inline bool* get_address_of__dateFormatStringSet_14() { return &____dateFormatStringSet_14; }
	inline void set__dateFormatStringSet_14(bool value)
	{
		____dateFormatStringSet_14 = value;
	}

	inline static int32_t get_offset_of__typeNameAssemblyFormatHandling_15() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____typeNameAssemblyFormatHandling_15)); }
	inline Nullable_1_tC05EF249BDA91DB6FE40C2F370FC3571AF676984  get__typeNameAssemblyFormatHandling_15() const { return ____typeNameAssemblyFormatHandling_15; }
	inline Nullable_1_tC05EF249BDA91DB6FE40C2F370FC3571AF676984 * get_address_of__typeNameAssemblyFormatHandling_15() { return &____typeNameAssemblyFormatHandling_15; }
	inline void set__typeNameAssemblyFormatHandling_15(Nullable_1_tC05EF249BDA91DB6FE40C2F370FC3571AF676984  value)
	{
		____typeNameAssemblyFormatHandling_15 = value;
	}

	inline static int32_t get_offset_of__defaultValueHandling_16() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____defaultValueHandling_16)); }
	inline Nullable_1_tD0E592131A1B6D538A911F285F165C9AFE310115  get__defaultValueHandling_16() const { return ____defaultValueHandling_16; }
	inline Nullable_1_tD0E592131A1B6D538A911F285F165C9AFE310115 * get_address_of__defaultValueHandling_16() { return &____defaultValueHandling_16; }
	inline void set__defaultValueHandling_16(Nullable_1_tD0E592131A1B6D538A911F285F165C9AFE310115  value)
	{
		____defaultValueHandling_16 = value;
	}

	inline static int32_t get_offset_of__preserveReferencesHandling_17() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____preserveReferencesHandling_17)); }
	inline Nullable_1_tA8BF5C52CF8EF3B189BE940C5FDCC83D8EADD022  get__preserveReferencesHandling_17() const { return ____preserveReferencesHandling_17; }
	inline Nullable_1_tA8BF5C52CF8EF3B189BE940C5FDCC83D8EADD022 * get_address_of__preserveReferencesHandling_17() { return &____preserveReferencesHandling_17; }
	inline void set__preserveReferencesHandling_17(Nullable_1_tA8BF5C52CF8EF3B189BE940C5FDCC83D8EADD022  value)
	{
		____preserveReferencesHandling_17 = value;
	}

	inline static int32_t get_offset_of__nullValueHandling_18() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____nullValueHandling_18)); }
	inline Nullable_1_t364CFAFF7F5FC4E106F6623125862FC285C06D5F  get__nullValueHandling_18() const { return ____nullValueHandling_18; }
	inline Nullable_1_t364CFAFF7F5FC4E106F6623125862FC285C06D5F * get_address_of__nullValueHandling_18() { return &____nullValueHandling_18; }
	inline void set__nullValueHandling_18(Nullable_1_t364CFAFF7F5FC4E106F6623125862FC285C06D5F  value)
	{
		____nullValueHandling_18 = value;
	}

	inline static int32_t get_offset_of__objectCreationHandling_19() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____objectCreationHandling_19)); }
	inline Nullable_1_t463FD6B35184519F8B3375B8DC7B9AB717DD281B  get__objectCreationHandling_19() const { return ____objectCreationHandling_19; }
	inline Nullable_1_t463FD6B35184519F8B3375B8DC7B9AB717DD281B * get_address_of__objectCreationHandling_19() { return &____objectCreationHandling_19; }
	inline void set__objectCreationHandling_19(Nullable_1_t463FD6B35184519F8B3375B8DC7B9AB717DD281B  value)
	{
		____objectCreationHandling_19 = value;
	}

	inline static int32_t get_offset_of__missingMemberHandling_20() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____missingMemberHandling_20)); }
	inline Nullable_1_tFC5E822631DD7E1FC2D78A68ABB5F4EAC4EF460E  get__missingMemberHandling_20() const { return ____missingMemberHandling_20; }
	inline Nullable_1_tFC5E822631DD7E1FC2D78A68ABB5F4EAC4EF460E * get_address_of__missingMemberHandling_20() { return &____missingMemberHandling_20; }
	inline void set__missingMemberHandling_20(Nullable_1_tFC5E822631DD7E1FC2D78A68ABB5F4EAC4EF460E  value)
	{
		____missingMemberHandling_20 = value;
	}

	inline static int32_t get_offset_of__referenceLoopHandling_21() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____referenceLoopHandling_21)); }
	inline Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F  get__referenceLoopHandling_21() const { return ____referenceLoopHandling_21; }
	inline Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F * get_address_of__referenceLoopHandling_21() { return &____referenceLoopHandling_21; }
	inline void set__referenceLoopHandling_21(Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F  value)
	{
		____referenceLoopHandling_21 = value;
	}

	inline static int32_t get_offset_of__context_22() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____context_22)); }
	inline Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15  get__context_22() const { return ____context_22; }
	inline Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15 * get_address_of__context_22() { return &____context_22; }
	inline void set__context_22(Nullable_1_t2FD0F79534780CBE01028C4BD37F24664A490E15  value)
	{
		____context_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____context_22))->___value_0))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__constructorHandling_23() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____constructorHandling_23)); }
	inline Nullable_1_t125BA2D32C606CA0EF76F875548282249C2B582A  get__constructorHandling_23() const { return ____constructorHandling_23; }
	inline Nullable_1_t125BA2D32C606CA0EF76F875548282249C2B582A * get_address_of__constructorHandling_23() { return &____constructorHandling_23; }
	inline void set__constructorHandling_23(Nullable_1_t125BA2D32C606CA0EF76F875548282249C2B582A  value)
	{
		____constructorHandling_23 = value;
	}

	inline static int32_t get_offset_of__typeNameHandling_24() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____typeNameHandling_24)); }
	inline Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866  get__typeNameHandling_24() const { return ____typeNameHandling_24; }
	inline Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866 * get_address_of__typeNameHandling_24() { return &____typeNameHandling_24; }
	inline void set__typeNameHandling_24(Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866  value)
	{
		____typeNameHandling_24 = value;
	}

	inline static int32_t get_offset_of__metadataPropertyHandling_25() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ____metadataPropertyHandling_25)); }
	inline Nullable_1_t6A77015A82518BF00D6135AF5EF5E6C444949ED8  get__metadataPropertyHandling_25() const { return ____metadataPropertyHandling_25; }
	inline Nullable_1_t6A77015A82518BF00D6135AF5EF5E6C444949ED8 * get_address_of__metadataPropertyHandling_25() { return &____metadataPropertyHandling_25; }
	inline void set__metadataPropertyHandling_25(Nullable_1_t6A77015A82518BF00D6135AF5EF5E6C444949ED8  value)
	{
		____metadataPropertyHandling_25 = value;
	}

	inline static int32_t get_offset_of_U3CConvertersU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ___U3CConvertersU3Ek__BackingField_26)); }
	inline RuntimeObject* get_U3CConvertersU3Ek__BackingField_26() const { return ___U3CConvertersU3Ek__BackingField_26; }
	inline RuntimeObject** get_address_of_U3CConvertersU3Ek__BackingField_26() { return &___U3CConvertersU3Ek__BackingField_26; }
	inline void set_U3CConvertersU3Ek__BackingField_26(RuntimeObject* value)
	{
		___U3CConvertersU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConvertersU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CContractResolverU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ___U3CContractResolverU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CContractResolverU3Ek__BackingField_27() const { return ___U3CContractResolverU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CContractResolverU3Ek__BackingField_27() { return &___U3CContractResolverU3Ek__BackingField_27; }
	inline void set_U3CContractResolverU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CContractResolverU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContractResolverU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEqualityComparerU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ___U3CEqualityComparerU3Ek__BackingField_28)); }
	inline RuntimeObject* get_U3CEqualityComparerU3Ek__BackingField_28() const { return ___U3CEqualityComparerU3Ek__BackingField_28; }
	inline RuntimeObject** get_address_of_U3CEqualityComparerU3Ek__BackingField_28() { return &___U3CEqualityComparerU3Ek__BackingField_28; }
	inline void set_U3CEqualityComparerU3Ek__BackingField_28(RuntimeObject* value)
	{
		___U3CEqualityComparerU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEqualityComparerU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReferenceResolverProviderU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ___U3CReferenceResolverProviderU3Ek__BackingField_29)); }
	inline Func_1_t649DCF3F0E5041B33631B23DFC4D9E7440B6765B * get_U3CReferenceResolverProviderU3Ek__BackingField_29() const { return ___U3CReferenceResolverProviderU3Ek__BackingField_29; }
	inline Func_1_t649DCF3F0E5041B33631B23DFC4D9E7440B6765B ** get_address_of_U3CReferenceResolverProviderU3Ek__BackingField_29() { return &___U3CReferenceResolverProviderU3Ek__BackingField_29; }
	inline void set_U3CReferenceResolverProviderU3Ek__BackingField_29(Func_1_t649DCF3F0E5041B33631B23DFC4D9E7440B6765B * value)
	{
		___U3CReferenceResolverProviderU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReferenceResolverProviderU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTraceWriterU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ___U3CTraceWriterU3Ek__BackingField_30)); }
	inline RuntimeObject* get_U3CTraceWriterU3Ek__BackingField_30() const { return ___U3CTraceWriterU3Ek__BackingField_30; }
	inline RuntimeObject** get_address_of_U3CTraceWriterU3Ek__BackingField_30() { return &___U3CTraceWriterU3Ek__BackingField_30; }
	inline void set_U3CTraceWriterU3Ek__BackingField_30(RuntimeObject* value)
	{
		___U3CTraceWriterU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTraceWriterU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSerializationBinderU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ___U3CSerializationBinderU3Ek__BackingField_31)); }
	inline RuntimeObject* get_U3CSerializationBinderU3Ek__BackingField_31() const { return ___U3CSerializationBinderU3Ek__BackingField_31; }
	inline RuntimeObject** get_address_of_U3CSerializationBinderU3Ek__BackingField_31() { return &___U3CSerializationBinderU3Ek__BackingField_31; }
	inline void set_U3CSerializationBinderU3Ek__BackingField_31(RuntimeObject* value)
	{
		___U3CSerializationBinderU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSerializationBinderU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8, ___U3CErrorU3Ek__BackingField_32)); }
	inline EventHandler_1_tD1C6AF7CE18AF0DA8AA90A6926C0936FD56304C2 * get_U3CErrorU3Ek__BackingField_32() const { return ___U3CErrorU3Ek__BackingField_32; }
	inline EventHandler_1_tD1C6AF7CE18AF0DA8AA90A6926C0936FD56304C2 ** get_address_of_U3CErrorU3Ek__BackingField_32() { return &___U3CErrorU3Ek__BackingField_32; }
	inline void set_U3CErrorU3Ek__BackingField_32(EventHandler_1_tD1C6AF7CE18AF0DA8AA90A6926C0936FD56304C2 * value)
	{
		___U3CErrorU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_32), (void*)value);
	}
};

struct JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8_StaticFields
{
public:
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializerSettings::DefaultContext
	StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___DefaultContext_0;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::DefaultCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___DefaultCulture_1;

public:
	inline static int32_t get_offset_of_DefaultContext_0() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8_StaticFields, ___DefaultContext_0)); }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  get_DefaultContext_0() const { return ___DefaultContext_0; }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 * get_address_of_DefaultContext_0() { return &___DefaultContext_0; }
	inline void set_DefaultContext_0(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  value)
	{
		___DefaultContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultContext_0))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_DefaultCulture_1() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8_StaticFields, ___DefaultCulture_1)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_DefaultCulture_1() const { return ___DefaultCulture_1; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_DefaultCulture_1() { return &___DefaultCulture_1; }
	inline void set_DefaultCulture_1(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___DefaultCulture_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultCulture_1), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.Services.Authentication.WellKnownKey[]
struct WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563 * m_Items[1];

public:
	inline WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * m_Items[1];

public:
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<!0,!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m15FB53DEA7CD6487FD59ED68D6DB681FD332025C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// !!0 Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CoreRegistry_GetServiceComponent_TisRuntimeObject_m0876CEAF0098FCD7DEB80BC7488E24A2F788C935_gshared (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m0412E2BE82AB42ABBC2EEC663FDF2862BFE91E20_gshared (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject * ___component0, const RuntimeMethod* method);
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistry_RegisterPackage_TisRuntimeObject_m01248EDCB97C401EB2D7EEEC3EC471D8E5A4DF19_gshared (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject * ___package0, const RuntimeMethod* method);
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_DependsOn_TisRuntimeObject_m5B752217FBCB62F838D2DBC85F06D3D44F8798F3_gshared (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method);
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_ProvidesComponent_TisRuntimeObject_mFF019F101DC670F4855A0ACBCCDCAE0817385F6A_gshared (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__103>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510_m76181BA44286F95A6C3DBFEA5A6828A87A4F509A_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__108>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9_mB7A21A30C63CF5FEED0BA56FFC529E251F94B5E4_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__109>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804_m3BE96F5B33D9D75FEC29B56003965ED539A06715_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_mEA8E5753D70A4AA5ABF983D5FE3BACC1537B3ECE_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_gshared (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_gshared_inline (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.DateTime>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  Nullable_1_GetValueOrDefault_mC63D1129C133CFFD462EEE344A2AE34B29C1E881_gshared_inline (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int64>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_gshared (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m571187F546F4230B8576F169789831BFBA99B93F_gshared_inline (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int64>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Nullable_1_get_Value_m50AA4ABD548771EE5E0C30724C9847B16C44F3DA_gshared (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32Enum,System.Int32Enum>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_mDFC6D6B2873F442AC35EFE4E881049BB86468946_gshared (Action_2_tD3D7B4C276C5182ACF0A4B175305DF0854686FC4 * __this, int32_t ___arg10, int32_t ___arg21, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonConvert_DeserializeObject_TisRuntimeObject_mBC5E0B85411F010BCAD18947438EB33CD43B208C_gshared (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_mDD594BEBBEE23B395C77001EE646A1E9F4C820BE_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__103>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510_mCE6C3D35EA615FBD2259DCF71626707DD0540863_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__108>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9_mED1619B60770BF740628D397454BC988F52701FD_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__108>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9_mE00CE5AF8FED046261EBC61470D0716E9874C677_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__109>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804_mBEBD6AD793F9106802C13E8A40A0A7CF1261BD07_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804 * ___stateMachine1, const RuntimeMethod* method);

// System.Void Unity.Services.Authentication.BaseJwt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseJwt__ctor_mB5B7C699C99A13A3DB01042C6ACDF8F13BA9790C (BaseJwt_t0E7A78CF620D766B3A9060318C68CC3A436C497B * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AccessTokenComponent::set_AccessToken(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessTokenComponent_set_AccessToken_mCE8771733C9E04D7CC5C568581800BAB07180E75_inline (AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AccessTokenComponent::set_ExpiryTime(System.Nullable`1<System.DateTime>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessTokenComponent_set_ExpiryTime_m608106453E1FEFA2B6CB6F2A0AF5F0A642A3BEB7_inline (AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * __this, Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___value0, const RuntimeMethod* method);
// System.String Unity.Services.Authentication.AuthenticationCache::get_CloudProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_get_CloudProjectId_m2D15450147B0CDC96385F631E4D1256D353A8FA0 (AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * __this, const RuntimeMethod* method);
// System.String Unity.Services.Authentication.AuthenticationCache::get_Profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_get_Profile_mCCC6D885D686B5BA12FA3F1BFCFC61F48FFB302D (AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.String Unity.Services.Authentication.AuthenticationCache::GetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_GetKey_m12223D9D28F4C3BA8389F903CDD14B64493FC6B1 (AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * __this, String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteKey_mCEF6CE08D7D7670AD4072228E261A7E746030554 (String_t* ___key0, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC (const RuntimeMethod* method);
// System.String Unity.Services.Authentication.AuthenticationCache::GetOldKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_GetOldKey_m75E29414B4D6A97F53E21D41CDCB6BDCF5182732 (AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * __this, String_t* ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.String Unity.Services.Authentication.AuthenticationCache::get_Prefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_get_Prefix_m749662D57FFBBC52ED3F259113D2FE8BCC3C04BD (AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String Unity.Services.Authentication.AuthenticationCache::get_OldPrefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_get_OldPrefix_mA3B20DC3AACC2DEB1CDB62EECFD41B339A444E0A (AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.RequestFailedException::.ctor(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestFailedException__ctor_mE7F7D9D726A75E7CEE7EB910D325A462687A2E1D (RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * __this, int32_t ___errorCode0, String_t* ___message1, Exception_t * ___innerException2, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationException::.ctor(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationException__ctor_m89AFAE112F5DE463C5AF83D7337A270621C823BE (AuthenticationException_t2C1D97715C433D51CC8B9EE9A86A72015F2E92CC * __this, int32_t ___errorCode0, String_t* ___message1, Exception_t * ___innerException2, const RuntimeMethod* method);
// Unity.Services.Core.Environments.Internal.IEnvironments Unity.Services.Authentication.AuthenticationNetworkClient::get_EnvironmentComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationNetworkClient_get_EnvironmentComponent_mB9659CF2F4308C0C55A15766114FC46C50C7D019_inline (AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// Unity.Services.Core.Configuration.Internal.ICloudProjectId Unity.Services.Authentication.AuthenticationNetworkClient::get_CloudProjectIdComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationNetworkClient_get_CloudProjectIdComponent_mE6A548BDBE08D746C26C8666DE86C84860814BCA_inline (AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// Unity.Services.Authentication.INetworkHandler Unity.Services.Authentication.AuthenticationNetworkClient::get_NetworkHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationNetworkClient_get_NetworkHandler_mADC5CDB5943FFFA2318DA4BC97BA0B4551908CB3_inline (AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Authentication.AuthenticationNetworkClient::GetCommonHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * AuthenticationNetworkClient_GetCommonHeaders_m1C94817255AE1CEDD51C51A17B4022D2BE11FC1D (AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Authentication.AuthenticationNetworkClient::WithEnvironment(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * AuthenticationNetworkClient_WithEnvironment_m0281D95C106C87650DBE497369C0E82EEE2AE9D4 (AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.SessionTokenRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenRequest__ctor_m2B6028D736AA3CA532722B94633E29D840968208 (SessionTokenRequest_t2E7C97561A7DA7B27587356C426D795EDA0194BD * __this, const RuntimeMethod* method);
// System.String Unity.Services.Authentication.AuthenticationNetworkClient::get_EnvironmentId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationNetworkClient_get_EnvironmentId_m99C74B2BB41B32EE10B3F4EE3C072AB3993BD054 (AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<!0,!1>)
inline void Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m15FB53DEA7CD6487FD59ED68D6DB681FD332025C_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationSettings__ctor_mDC97DB036D99F7FD820CD4E62650FF4A4AA4F8FD (AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF * __this, const RuntimeMethod* method);
// !!0 Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Scheduler.Internal.IActionScheduler>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_mEFB3E9E349374CAF2FB3C86F7B594FB3971D95DE (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m0876CEAF0098FCD7DEB80BC7488E24A2F788C935_gshared)(__this, method);
}
// !!0 Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Environments.Internal.IEnvironments>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_m908B82B3B70DD5FC71F2243DCB6C05C500CFB7D7 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m0876CEAF0098FCD7DEB80BC7488E24A2F788C935_gshared)(__this, method);
}
// !!0 Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Configuration.Internal.ICloudProjectId>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_m529959703C2CD50CD18FA2DE8FA0770A38AB263F (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m0876CEAF0098FCD7DEB80BC7488E24A2F788C935_gshared)(__this, method);
}
// !!0 Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_m7515A5B4A848755CEC757111F68CDF8584AA7136 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m0876CEAF0098FCD7DEB80BC7488E24A2F788C935_gshared)(__this, method);
}
// System.Void Unity.Services.Authentication.ProfileComponent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileComponent__ctor_m2C9F1751C10B5004B12EAB6B969203963A471983 (ProfileComponent_t84EEB27237207350AE110116875EAF9C246F4367 * __this, String_t* ___profile0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.DateTimeWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeWrapper__ctor_m3DAAC87852643F97ADB2E7ED52A23ACED837AE0D (DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137 * __this, const RuntimeMethod* method);
// !!0 Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent<Unity.Services.Core.Telemetry.Internal.IMetricsFactory>()
inline RuntimeObject* CoreRegistry_GetServiceComponent_TisIMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_mE08D8A9DAF4B538AD8641C4C93B816E80678F75C (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, const RuntimeMethod*))CoreRegistry_GetServiceComponent_TisRuntimeObject_m0876CEAF0098FCD7DEB80BC7488E24A2F788C935_gshared)(__this, method);
}
// System.Void Unity.Services.Authentication.AuthenticationMetrics::.ctor(Unity.Services.Core.Telemetry.Internal.IMetricsFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationMetrics__ctor_m7ACAF4097703A80A9DFDE113E0AE9C8568E353E7 (AuthenticationMetrics_tFC08B32361C09A77C8FCB40451DB189AC19E470F * __this, RuntimeObject* ___metricsFactory0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.JwtDecoder::.ctor(Unity.Services.Authentication.IDateTimeWrapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JwtDecoder__ctor_mAF16941528D35E2E8ADDDF0C9E8720842AEC4E78 (JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7 * __this, RuntimeObject* ___dateTime0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationCache::.ctor(Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Authentication.IProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationCache__ctor_m84A80083362E387BED6E7DD08138FAFF9950E958 (AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * __this, RuntimeObject* ___cloudProjectId0, RuntimeObject* ___profile1, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AccessTokenComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessTokenComponent__ctor_m7609AF34D4D18B743697D8D58C51D75CFCC8A96B (AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.EnvironmentIdComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentIdComponent__ctor_m7F53B9DB9592A685013C8AC24280B3FF1359E718 (EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.PlayerIdComponent::.ctor(Unity.Services.Authentication.IAuthenticationCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdComponent__ctor_mC532CDEF131A15D279324E9F64D10A1CDD88BCE0 (PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * __this, RuntimeObject* ___cache0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.SessionTokenComponent::.ctor(Unity.Services.Authentication.IAuthenticationCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenComponent__ctor_m481E6304C6ED4F7CB829C00B3EB80A9DB2AAF07B (SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * __this, RuntimeObject* ___cache0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.WellKnownKeysComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WellKnownKeysComponent__ctor_m9E1D834A356744CBAD7CEDE7EC5C1A8C392E931E (WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.NetworkHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkHandler__ctor_m988FC7CFE15CE1F4D89809942E90C6F3904CC644 (NetworkHandler_tA8820CE19530E53BE6AFF793C612117070A4049E * __this, const RuntimeMethod* method);
// System.String Unity.Services.Authentication.AuthenticationPackageInitializer::GetHost(Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationPackageInitializer_GetHost_mDF8DD50B5511AB5F56C1D7564FEBE75E9B7CF198 (AuthenticationPackageInitializer_t22DA26E4CD0607D467B231600BC67874239B88F0 * __this, RuntimeObject* ___projectConfiguration0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationNetworkClient::.ctor(System.String,Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments,Unity.Services.Authentication.INetworkHandler,Unity.Services.Authentication.AccessTokenComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationNetworkClient__ctor_m48F033732ADC17821C2590DC5B0106C6E7C6C941 (AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * __this, String_t* ___host0, RuntimeObject* ___cloudProjectId1, RuntimeObject* ___environment2, RuntimeObject* ___networkHandler3, AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * ___accessToken4, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::.ctor(Unity.Services.Authentication.IAuthenticationSettings,Unity.Services.Authentication.IAuthenticationNetworkClient,Unity.Services.Authentication.IProfile,Unity.Services.Authentication.IJwtDecoder,Unity.Services.Authentication.IAuthenticationCache,Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Authentication.IDateTimeWrapper,Unity.Services.Authentication.IAuthenticationMetrics,Unity.Services.Authentication.AccessTokenComponent,Unity.Services.Authentication.EnvironmentIdComponent,Unity.Services.Authentication.PlayerIdComponent,Unity.Services.Authentication.SessionTokenComponent,Unity.Services.Authentication.WellKnownKeysComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal__ctor_m6B4CA57B637ECB1095D45652B0BB88DA21E6A9D8 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, RuntimeObject* ___settings0, RuntimeObject* ___networkClient1, RuntimeObject* ___profile2, RuntimeObject* ___jwtDecoder3, RuntimeObject* ___cache4, RuntimeObject* ___scheduler5, RuntimeObject* ___dateTime6, RuntimeObject* ___metrics7, AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * ___accessToken8, EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * ___environmentId9, PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * ___playerId10, SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * ___sessionToken11, WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * ___wellKnownKeys12, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationService::set_Instance(Unity.Services.Authentication.IAuthenticationService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationService_set_Instance_m9954CE13AD489EA393654415815BE7FD5F3B54FE_inline (RuntimeObject* ___value0, const RuntimeMethod* method);
// Unity.Services.Authentication.AccessTokenComponent Unity.Services.Authentication.AuthenticationServiceInternal::get_AccessTokenComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * AuthenticationServiceInternal_get_AccessTokenComponent_m2852F0AF5020BEE250234B898DB7656AE37D183C_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Authentication.Internal.IAccessToken>(!!0)
inline void CoreRegistry_RegisterServiceComponent_TisIAccessToken_tF9F28E25BF665453329EE5A3604EEE1DF64A946E_m0006FC4033AB549B9837562247BA8A8C91D81208 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m0412E2BE82AB42ABBC2EEC663FDF2862BFE91E20_gshared)(__this, ___component0, method);
}
// Unity.Services.Authentication.EnvironmentIdComponent Unity.Services.Authentication.AuthenticationServiceInternal::get_EnvironmentIdComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * AuthenticationServiceInternal_get_EnvironmentIdComponent_m9E28929DD30DBF6130606021CA9D021FBB8A0AFD_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Authentication.Internal.IEnvironmentId>(!!0)
inline void CoreRegistry_RegisterServiceComponent_TisIEnvironmentId_tE5B54B0742EEB7D83B2DA3D5D5809328E3DDACFD_mFD6F3B51CA8A882CFD2C408E213796704F1BA9B2 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m0412E2BE82AB42ABBC2EEC663FDF2862BFE91E20_gshared)(__this, ___component0, method);
}
// Unity.Services.Authentication.PlayerIdComponent Unity.Services.Authentication.AuthenticationServiceInternal::get_PlayerIdComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * AuthenticationServiceInternal_get_PlayerIdComponent_m71FBCC6657B8435FF144D92C29524719CA1FAD92_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Authentication.Internal.IPlayerId>(!!0)
inline void CoreRegistry_RegisterServiceComponent_TisIPlayerId_t2C42E59B43666C8DE5F5A4F65C60B858DF1B5598_m809338902103045C8F4393E7C9A3EC5F16063C19 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m0412E2BE82AB42ABBC2EEC663FDF2862BFE91E20_gshared)(__this, ___component0, method);
}
// System.Void System.Diagnostics.Stopwatch::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationMetrics::SendPackageInitTimeMetric(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationMetrics_SendPackageInitTimeMetric_m7DA1ACF0ECF4ACB93C29D1A41883B9251AB7FBB9 (AuthenticationMetrics_tFC08B32361C09A77C8FCB40451DB189AC19E470F * __this, double ___initTimeSeconds0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D (const RuntimeMethod* method);
// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * CoreRegistry_get_Instance_m4D1C714218A28598060C670E87B7B59834A53510_inline (const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationPackageInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationPackageInitializer__ctor_mE12A4D9F92D00BDE46F0A8396C2CFF738161BB59 (AuthenticationPackageInitializer_t22DA26E4CD0607D467B231600BC67874239B88F0 * __this, const RuntimeMethod* method);
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage<Unity.Services.Authentication.AuthenticationPackageInitializer>(!!0)
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistry_RegisterPackage_TisAuthenticationPackageInitializer_t22DA26E4CD0607D467B231600BC67874239B88F0_mDCCB9E397E2F6949319AD53843B5693D4E325A69 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, AuthenticationPackageInitializer_t22DA26E4CD0607D467B231600BC67874239B88F0 * ___package0, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, AuthenticationPackageInitializer_t22DA26E4CD0607D467B231600BC67874239B88F0 *, const RuntimeMethod*))CoreRegistry_RegisterPackage_TisRuntimeObject_m01248EDCB97C401EB2D7EEEC3EC471D8E5A4DF19_gshared)(__this, ___package0, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Environments.Internal.IEnvironments>()
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_DependsOn_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_mF847B70AF7EAAEA3E25A97BF25E6F4866C51509D (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *, const RuntimeMethod*))CoreRegistration_DependsOn_TisRuntimeObject_m5B752217FBCB62F838D2DBC85F06D3D44F8798F3_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Scheduler.Internal.IActionScheduler>()
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_DependsOn_TisIActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_m51ABFC91F8BCF53458512365902A1AD0918253AE (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *, const RuntimeMethod*))CoreRegistration_DependsOn_TisRuntimeObject_m5B752217FBCB62F838D2DBC85F06D3D44F8798F3_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Configuration.Internal.ICloudProjectId>()
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_DependsOn_TisICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_mBF202BD93F078AB0DBC6F6475911A94803F7BDBA (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *, const RuntimeMethod*))CoreRegistration_DependsOn_TisRuntimeObject_m5B752217FBCB62F838D2DBC85F06D3D44F8798F3_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>()
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_DependsOn_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_m8949C1DB57F3EBC5103BE16DE6D0A970E21E5A6C (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *, const RuntimeMethod*))CoreRegistration_DependsOn_TisRuntimeObject_m5B752217FBCB62F838D2DBC85F06D3D44F8798F3_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn<Unity.Services.Core.Telemetry.Internal.IMetricsFactory>()
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_DependsOn_TisIMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_mAEF872A9C9AAA9A069D0C1FA3B186435E3859522 (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *, const RuntimeMethod*))CoreRegistration_DependsOn_TisRuntimeObject_m5B752217FBCB62F838D2DBC85F06D3D44F8798F3_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Authentication.Internal.IPlayerId>()
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_ProvidesComponent_TisIPlayerId_t2C42E59B43666C8DE5F5A4F65C60B858DF1B5598_mC4A218643103832B50E1E82A02D187AD2634F946 (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mFF019F101DC670F4855A0ACBCCDCAE0817385F6A_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Authentication.Internal.IAccessToken>()
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_ProvidesComponent_TisIAccessToken_tF9F28E25BF665453329EE5A3604EEE1DF64A946E_m15937E10E7B0AEAC71F06A6B162874F0A953D739 (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mFF019F101DC670F4855A0ACBCCDCAE0817385F6A_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Authentication.Internal.IEnvironmentId>()
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_ProvidesComponent_TisIEnvironmentId_tE5B54B0742EEB7D83B2DA3D5D5809328E3DDACFD_m6491587D3C7A569D305B0D69FC92D129EF1629AC (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mFF019F101DC670F4855A0ACBCCDCAE0817385F6A_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Unity.Services.Core.ServicesInitializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_mA0E87B856358F94EB0512AD68016E32681239839 (ServicesInitializationException_tB29CA123886F164D3642AC2F2EFEEA32AE80A0C1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// Unity.Services.Authentication.AuthenticationState Unity.Services.Authentication.AuthenticationServiceInternal::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AuthenticationServiceInternal_get_State_m540B2858E462412EE82083304EB498C369512E14_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method);
// Unity.Services.Authentication.SessionTokenComponent Unity.Services.Authentication.AuthenticationServiceInternal::get_SessionTokenComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * AuthenticationServiceInternal_get_SessionTokenComponent_m150C338CB83BC5464384ABE379924EF79197A92C_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method);
// System.String Unity.Services.Authentication.SessionTokenComponent::get_SessionToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionTokenComponent_get_SessionToken_mBE753CDE8271DB7F676DDD98A2AA47F9E8CADC22 (SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * __this, const RuntimeMethod* method);
// System.String Unity.Services.Authentication.PlayerIdComponent::get_PlayerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerIdComponent_get_PlayerId_m4957B73DF1907391FEDA66DC946AC1758B67B2D5 (PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::set_NetworkClient(Unity.Services.Authentication.IAuthenticationNetworkClient)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_NetworkClient_m11CAD22C0C19EB50172B7992617E7816386F047C_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::set_State(Unity.Services.Authentication.AuthenticationState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_State_m1258E7117ABE0843B4C65DDBADDC1328D1A1F0FA_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::MigrateCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_MigrateCache_mF008EE253B5FF4F17F42A9C6E61E241FC7115428 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::add_Expired(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_add_Expired_m18E81D98D2F0BA45A44D52CC807F882FCCD938F6 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass76_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass76_0__ctor_mD4B48FB6A86272D0A578DE4915F8CD38026E327B (U3CU3Ec__DisplayClass76_0_tDEF0AEC69CC4EF20E39A0B4DF5F220A8A555B4A8 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Services.Authentication.AuthenticationServiceInternal::get_SessionTokenExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticationServiceInternal_get_SessionTokenExists_m4FDEE6A9D6F87DF423746ACBA790D747137778DD (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method);
// Unity.Services.Core.RequestFailedException Unity.Services.Authentication.AuthenticationServiceInternal::BuildClientSessionTokenNotExistsException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * AuthenticationServiceInternal_BuildClientSessionTokenNotExistsException_mF8559C94D9FC86C9EE9FF63B53244E6FBEE1D84A (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::SendSignInFailedEvent(Unity.Services.Core.RequestFailedException,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_SendSignInFailedEvent_m5715005540D9E4418F07FCE528D3136099DE54ED (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * ___exception0, bool ___forceSignOut1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::FromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_FromException_m601DE8188AC96059BD00E85AB276E48F4EB9ABEE (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse>>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m6F4A4EBA1F8349FFDFB22268FB766AD34403C503 (Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::HandleSignInRequestAsync(System.Func`1<System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse>>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AuthenticationServiceInternal_HandleSignInRequestAsync_m0700784B3D9570AC2037C68948BB75C8E158049C (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9 * ___signInRequest0, bool ___enableRefresh1, const RuntimeMethod* method);
// System.Boolean Unity.Services.Authentication.SignInOptions::get_CreateAccount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SignInOptions_get_CreateAccount_m57FD32C6C36343090735D3DA29856088F58E250F_inline (SignInOptions_tFF19EE3FE0A9A233A1AFDBADA8975DD5BA28DDED * __this, const RuntimeMethod* method);
// Unity.Services.Authentication.IAuthenticationNetworkClient Unity.Services.Authentication.AuthenticationServiceInternal::get_NetworkClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationServiceInternal_get_NetworkClient_mB5524A9B13CB5CD1B5583FA68344B9DA22ED128C_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method);
// Unity.Services.Core.RequestFailedException Unity.Services.Authentication.AuthenticationServiceInternal::BuildClientInvalidStateException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * AuthenticationServiceInternal_BuildClientInvalidStateException_m5E09C8BDB689926B8D9D96670047561FF4732767 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AccessTokenComponent::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessTokenComponent_Clear_m1CAF5EED0646956500FC45ADDB0BF966CE623CD7 (AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::set_PlayerInfo(Unity.Services.Authentication.PlayerInfo)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_PlayerInfo_mDC51AF45FACB6A62AAF39346CDF474186B49537B_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 * ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.SessionTokenComponent::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenComponent_Clear_m27747BAF3B5B4C158E801D23884800A8B2B51029 (SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.PlayerIdComponent::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdComponent_Clear_m248222E0C66BB987DCAC4BD3C1601ACE6C6FE82C (PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::CancelScheduledRefresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_CancelScheduledRefresh_m64EC0FA0638CF96C4C71C14C215F59709CDBDA7B (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::CancelScheduledExpiration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_CancelScheduledExpiration_mC289D37D7143CDCD2B6D6ED537EF6CECB5A99415 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::ChangeState(Unity.Services.Authentication.AuthenticationState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_ChangeState_m667E7EC4D3723293438F62CDA24584F482C80A68 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, int32_t ___newState0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__103>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510_m76181BA44286F95A6C3DBFEA5A6828A87A4F509A (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510_m76181BA44286F95A6C3DBFEA5A6828A87A4F509A_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Boolean Unity.Services.Authentication.AuthenticationServiceInternal::get_IsSignedIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticationServiceInternal_get_IsSignedIn_m2D49717E9D61D003457AB76D407104DBFC1FC074 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::StartRefreshAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AuthenticationServiceInternal_StartRefreshAsync_m3CAB0A3B1E5E564C897C9A508FABDB1CBF4F51CA (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, String_t* ___sessionToken0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__108>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9_mB7A21A30C63CF5FEED0BA56FFC529E251F94B5E4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9_mB7A21A30C63CF5FEED0BA56FFC529E251F94B5E4_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__109>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804_m3BE96F5B33D9D75FEC29B56003965ED539A06715 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804_m3BE96F5B33D9D75FEC29B56003965ED539A06715_gshared)(__this, ___stateMachine0, method);
}
// Unity.Services.Authentication.WellKnownKeysComponent Unity.Services.Authentication.AuthenticationServiceInternal::get_WellKnownKeysComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * AuthenticationServiceInternal_get_WellKnownKeysComponent_m6ED68B8DC812AE0D662679F619EB1E00CB46FD7E_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method);
// Unity.Services.Authentication.WellKnownKey[] Unity.Services.Authentication.WellKnownKeysComponent::get_Keys()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* WellKnownKeysComponent_get_Keys_m651DBE0F1FFFD2929ADC5BDC8126819EFBF46423_inline (WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * __this, const RuntimeMethod* method);
// Unity.Services.Core.RequestFailedException Unity.Services.Authentication.AuthenticationException::Create(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * AuthenticationException_Create_m125C5AB22F4E35B2F43FC63C7715FD615AE0788D (int32_t ___errorCode0, String_t* ___message1, Exception_t * ___innerException2, const RuntimeMethod* method);
// System.Void System.Func`2<System.String,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6397C103AFDCE68F75EDF44FB493A9B6651F7AFE (Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// !!0 System.Linq.Enumerable::FirstOrDefault<System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline String_t* Enumerable_FirstOrDefault_TisString_t_m7B8EA6803D4985135A95AE73079A935FCAAAEF5A (RuntimeObject* ___source0, Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___predicate1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D *, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mEA8E5753D70A4AA5ABF983D5FE3BACC1537B3ECE_gshared)(___source0, ___predicate1, method);
}
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.EnvironmentIdComponent::set_EnvironmentId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnvironmentIdComponent_set_EnvironmentId_m64287B97B7875A6D017F110FCB14575DF466BAE7_inline (EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.PlayerInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo__ctor_m7BE8E88BE750D922FC7CCB91930088DEC3834896 (PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 * __this, String_t* ___playerId0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.PlayerInfo::.ctor(Unity.Services.Authentication.User)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo__ctor_m142965DB47E202DD489AA33278B3ABC7F34788CC (PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 * __this, User_tE23EBBD8E21FAAA920F180CA0F37DCB242AA5795 * ___user0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.PlayerIdComponent::set_PlayerId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdComponent_set_PlayerId_m67FC4FAF6B4BC13C056FECAC893E8583F42A93C1 (PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.SessionTokenComponent::set_SessionToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenComponent_set_SessionToken_mA0F02B56A97EF4E4030C687C3462103778B8BEFA (SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * __this, String_t* ___value0, const RuntimeMethod* method);
// Unity.Services.Authentication.IAuthenticationSettings Unity.Services.Authentication.AuthenticationServiceInternal::get_Settings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationServiceInternal_get_Settings_m207CE9E7E79C996BA697C5AF82154C51CAC4F852_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::AddSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_AddSeconds_mCA0940A7E7C3ED40A86532349B7D4CB3A0F0DEAF (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, double ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
inline void Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_gshared)(__this, ___value0, method);
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::ScheduleRefresh(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_ScheduleRefresh_m079A4344C2F75D3184DA085534A056888D0F2507 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, double ___delay0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::ScheduleExpiration(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_ScheduleExpiration_mE56623FFA0D7CA1389867A23EC75548213BD5F48 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, double ___delay0, const RuntimeMethod* method);
// System.Nullable`1<System.DateTime> Unity.Services.Authentication.AccessTokenComponent::get_ExpiryTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  AccessTokenComponent_get_ExpiryTime_m8A38E762B531DA5C273EA09DC9E3EEDE68891869_inline (AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
inline bool Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_inline (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *, const RuntimeMethod*))Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.DateTime>::GetValueOrDefault()
inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  Nullable_1_GetValueOrDefault_mC63D1129C133CFFD462EEE344A2AE34B29C1E881_inline (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method)
{
	return ((  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  (*) (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mC63D1129C133CFFD462EEE344A2AE34B29C1E881_gshared_inline)(__this, method);
}
// System.Boolean System.DateTime::op_LessThan(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_LessThan_m9822D8ADDCCACAA534FE3F98C44C352778B0C3DE (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___t10, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___t21, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int64>::.ctor(!0)
inline void Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * __this, int64_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F *, int64_t, const RuntimeMethod*))Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_gshared)(__this, ___value0, method);
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::set_RefreshActionId(System.Nullable`1<System.Int64>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_RefreshActionId_m21A7BE58654368157A696B9731F9AA1412C070A9_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::set_ExpirationActionId(System.Nullable`1<System.Int64>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_ExpirationActionId_mABA89665FBBD8124A496811E7AC9659D0113E765_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___value0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::RefreshAccessTokenAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AuthenticationServiceInternal_RefreshAccessTokenAsync_mB70761EF9C337D4FF7EE72454D35DC7C5790E146 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::Expire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_Expire_m03AC98A45621D10F4239EF4F9E24F1383B765FB6 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int64> Unity.Services.Authentication.AuthenticationServiceInternal::get_RefreshActionId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  AuthenticationServiceInternal_get_RefreshActionId_m36939AD0C220FA3733F31C7A3B73AF99834CC20C_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
inline bool Nullable_1_get_HasValue_m571187F546F4230B8576F169789831BFBA99B93F_inline (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F *, const RuntimeMethod*))Nullable_1_get_HasValue_m571187F546F4230B8576F169789831BFBA99B93F_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Int64>::get_Value()
inline int64_t Nullable_1_get_Value_m50AA4ABD548771EE5E0C30724C9847B16C44F3DA (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F *, const RuntimeMethod*))Nullable_1_get_Value_m50AA4ABD548771EE5E0C30724C9847B16C44F3DA_gshared)(__this, method);
}
// System.Nullable`1<System.Int64> Unity.Services.Authentication.AuthenticationServiceInternal::get_ExpirationActionId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  AuthenticationServiceInternal_get_ExpirationActionId_mB1BFDC05A1FA873FB9AC27BFF6B11B0B9749EA54_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.SessionTokenComponent::Migrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenComponent_Migrate_m80A127227B9CC7B5356E1DAB54C24A95B7BD583C (SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::HandleStateChanged(Unity.Services.Authentication.AuthenticationState,Unity.Services.Authentication.AuthenticationState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_HandleStateChanged_m4853170F69E506148AA030D799514C9C035B10E4 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method);
// System.Void System.Action`2<Unity.Services.Authentication.AuthenticationState,Unity.Services.Authentication.AuthenticationState>::Invoke(!0,!1)
inline void Action_2_Invoke_mBBD58666FB3D2852B654D46A2FF1949AFBBE0D16 (Action_2_t881D75688CFDB53402D8BAF505B7F10DB23DE4F0 * __this, int32_t ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t881D75688CFDB53402D8BAF505B7F10DB23DE4F0 *, int32_t, int32_t, const RuntimeMethod*))Action_2_Invoke_mDFC6D6B2873F442AC35EFE4E881049BB86468946_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<Unity.Services.Core.RequestFailedException>::Invoke(!0)
inline void Action_1_Invoke_mC6762E9B52359D097DB16C414B77A1FB3718C61E (Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * __this, RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 *, RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::SignOut(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_SignOut_m7EA7890AF71F36C5C3B859F2A5B107866C9202B0 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, bool ___clearCredentials0, const RuntimeMethod* method);
// System.Int64 Unity.Services.Authentication.WebRequestException::get_ResponseCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t WebRequestException_get_ResponseCode_mE7F0EB27F64B0E2B93D8D1C1B8BFB95F5B42C99D_inline (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.Logger::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogError_m27F93E9B4188BC7B3D6317A6D3293A51CA01C062 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean Unity.Services.Authentication.WebRequestException::get_NetworkError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRequestException_get_NetworkError_m645FAC3101DC039DD6CE649F7984450CE8CCCC0F_inline (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.JsonConvert::DeserializeObject<Unity.Services.Authentication.AuthenticationErrorResponse>(System.String)
inline AuthenticationErrorResponse_tC90CC24823ADC01AD30EAA07CC0A10E39998600F * JsonConvert_DeserializeObject_TisAuthenticationErrorResponse_tC90CC24823ADC01AD30EAA07CC0A10E39998600F_m861DBF47FC84C04524DB1410C47F0B7D2B909475 (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  AuthenticationErrorResponse_tC90CC24823ADC01AD30EAA07CC0A10E39998600F * (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_mBC5E0B85411F010BCAD18947438EB33CD43B208C_gshared)(___value0, method);
}
// System.Int32 Unity.Services.Authentication.AuthenticationServiceInternal::MapErrorCodes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticationServiceInternal_MapErrorCodes_mAF2652B57EC927DE873FDEB9BF1180D6812405FB (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, String_t* ___serverErrorTitle0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationSettings::set_AccessTokenRefreshBuffer(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationSettings_set_AccessTokenRefreshBuffer_m149024C770352BD9A87BD1FFA1F6B3A0896A33CD_inline (AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationSettings::set_AccessTokenExpiryBuffer(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationSettings_set_AccessTokenExpiryBuffer_m5F60B60502A86DC2FCF76FCC19DB223F07798F68_inline (AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationSettings::set_RefreshAttemptFrequency(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationSettings_set_RefreshAttemptFrequency_m03D44C030EC39C0D3E2625159E76BD62A6DF8DC7_inline (AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090 (const RuntimeMethod* method);
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d10, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d21, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mCB99E35879988A22842FDDA9BBC3ACA74F1BEE38 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, int32_t ___kind7, const RuntimeMethod* method);
// Unity.Services.Authentication.WellKnownKey Unity.Services.Authentication.JwtDecoder::GetKey(System.String,Unity.Services.Authentication.WellKnownKey[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563 * JwtDecoder_GetKey_m506FBD5D18803C250351A01231F58B96B654520C (JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7 * __this, String_t* ___keyId0, WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* ___keys1, const RuntimeMethod* method);
// System.Byte[] Unity.Services.Authentication.JwtDecoder::Base64UrlDecode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* JwtDecoder_Base64UrlDecode_m829BE92817BA8542FA81374FBA5F878BF1AD16B7 (JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7 * __this, String_t* ___input0, const RuntimeMethod* method);
// System.Boolean Unity.Services.Authentication.JwtDecoder::Verify(System.String,System.String,System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JwtDecoder_Verify_mD1959951504C6BB98EDB2E291E7CD2040D2AB519 (JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7 * __this, String_t* ___header0, String_t* ___payload1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___signature2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___modulus3, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___exponent4, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider__ctor_m540359C328E1E9E9818A1192E34C74C986186B80 (RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * __this, const RuntimeMethod* method);
// System.Security.Cryptography.SHA256 System.Security.Cryptography.SHA256::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA256_t7F98FBD5AA9E2F4AC1A5C13FF7122AFF1A920452 * SHA256_Create_mA93565DD491DC3380FB602957B00EA909FEB8A20 (const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* HashAlgorithm_ComputeHash_m54AE40F9CD9E46736384369DBB5739FBCBDF67D9 (HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAPKCS1SignatureDeformatter__ctor_m9DAC3CBA41CE93578EB3942360F47A3ADDE59278 (RSAPKCS1SignatureDeformatter_tEA19E0B65D1CA5C585E0492A7B830B8F34D68228 * __this, AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F * ___key0, const RuntimeMethod* method);
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618 (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Convert_FromBase64String_mB2E4E2CD03B34DB7C2665694D5B2E967BC81E9A8 (String_t* ___s0, const RuntimeMethod* method);
// UnityEngine.ILogger UnityEngine.Debug::get_unityLogger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m70D38067C3055104F6C8D050AB7CE0FDFD05EE22_inline (const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.NetworkConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConfiguration__ctor_mC3E3A36A7F924D8F1878639321C146A04071E8F7 (NetworkConfiguration_t6B15FC60FAF58C036FF7F48EB66DDB3ACA451430 * __this, const RuntimeMethod* method);
// System.String Unity.Services.Authentication.PlayerIdComponent::GetPlayerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerIdComponent_GetPlayerId_m6F0BFFC29AD13CF113D4D6C4351CC5D47C447A83 (PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.PlayerIdComponent::SetPlayerId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdComponent_SetPlayerId_m9014B343E209D56698B01F14BEAC546F7068EB20 (PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * __this, String_t* ___playerId0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, String_t*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Services.Authentication.Identity>::.ctor()
inline void List_1__ctor_m3C1B8F51C701CB6203EB8B3E90F4D9F4326BE843 (List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Unity.Services.Authentication.PlayerInfo::.ctor(System.String,System.String,System.Collections.Generic.List`1<Unity.Services.Authentication.ExternalIdentity>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo__ctor_mF09E1AA604D81E72415E5319D82D96EDAF3949FF (PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 * __this, String_t* ___playerId0, String_t* ___createdAt1, List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB * ___externalIdentities2, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m9152D976CDFE0B30C7E251DDD04EAD6BBD0800B0 (String_t* ___s0, double* ___result1, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mE84FCDCEAD332A62B587191C5874DAD7C238CFEA (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___kind6, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Unity.Services.Authentication.ExternalIdentity>::GetEnumerator()
inline Enumerator_tAB5981142CC0EEC82DD2F7D043743930D7D4877D  List_1_GetEnumerator_mD75B6D12A8852B0D0EEFA8DB5964F130B4B1618B (List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAB5981142CC0EEC82DD2F7D043743930D7D4877D  (*) (List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Unity.Services.Authentication.ExternalIdentity>::get_Current()
inline ExternalIdentity_t340A154EA8E79B73A6BC04A7D835C8D7F922F724 * Enumerator_get_Current_m1FA92DE66111B3DBB2EE863487B72C2BED829928_inline (Enumerator_tAB5981142CC0EEC82DD2F7D043743930D7D4877D * __this, const RuntimeMethod* method)
{
	return ((  ExternalIdentity_t340A154EA8E79B73A6BC04A7D835C8D7F922F724 * (*) (Enumerator_tAB5981142CC0EEC82DD2F7D043743930D7D4877D *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<Unity.Services.Authentication.Identity> Unity.Services.Authentication.PlayerInfo::get_Identities()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A * PlayerInfo_get_Identities_m0F5766F970AE063F7DE842334C68B07F3EC23E9C_inline (PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.Identity::.ctor(Unity.Services.Authentication.ExternalIdentity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Identity__ctor_m7273990582F881F65C5175A46D3F94F3CE55B2D0 (Identity_t2BAFC5C0BCB99BB68210854A8CEE5BA4CBBD0F61 * __this, ExternalIdentity_t340A154EA8E79B73A6BC04A7D835C8D7F922F724 * ___externalIdentity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Services.Authentication.Identity>::Add(!0)
inline void List_1_Add_mDCE667BC298C263992DC5C9F61FCAE120BF991E7 (List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A * __this, Identity_t2BAFC5C0BCB99BB68210854A8CEE5BA4CBBD0F61 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A *, Identity_t2BAFC5C0BCB99BB68210854A8CEE5BA4CBBD0F61 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Services.Authentication.ExternalIdentity>::MoveNext()
inline bool Enumerator_MoveNext_m98690085789DB5D924F26959ABDE2B42FFFC1B28 (Enumerator_tAB5981142CC0EEC82DD2F7D043743930D7D4877D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAB5981142CC0EEC82DD2F7D043743930D7D4877D *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.Services.Authentication.ExternalIdentity>::Dispose()
inline void Enumerator_Dispose_m350061C4A479C181BD2590CDF2C0F74146B04097 (Enumerator_tAB5981142CC0EEC82DD2F7D043743930D7D4877D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAB5981142CC0EEC82DD2F7D043743930D7D4877D *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Unity.Services.Authentication.ProfileComponent::SetProfile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileComponent_SetProfile_mD9D2387E75F5A34ED506C86DD6E60B7D7FB98C08 (ProfileComponent_t84EEB27237207350AE110116875EAF9C246F4367 * __this, String_t* ___profile0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.ProfileEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileEventArgs__ctor_m8F7D86D26FAB29A0794F2A43D4B9EFF5CE66F5BB (ProfileEventArgs_t7AB21391B1A7EAB039510112B4706389E650CFCB * __this, String_t* ___profile0, const RuntimeMethod* method);
// System.Void System.Action`1<Unity.Services.Authentication.ProfileEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m9CC3B22AA36F0C57A2B7F085B9ED32E165DE93BB (Action_1_t97B4C0A2C81634DF78A45DF0E8BFCA7ED20F4E87 * __this, ProfileEventArgs_t7AB21391B1A7EAB039510112B4706389E650CFCB * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t97B4C0A2C81634DF78A45DF0E8BFCA7ED20F4E87 *, ProfileEventArgs_t7AB21391B1A7EAB039510112B4706389E650CFCB *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// System.String Unity.Services.Authentication.SessionTokenComponent::GetSessionToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionTokenComponent_GetSessionToken_m39A5303D01671CDBFDF185B599B193C83DFF0459 (SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.SessionTokenComponent::SetSessionToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenComponent_SetSessionToken_mAABCBBD0715DA94AD9F9C2C1A715923AC1ABB375 (SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * __this, String_t* ___sessionToken0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonSerializerSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings__ctor_m903CE3365DEA2C8167994B5FD878BD34825C72EA (JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_NullValueHandling(Newtonsoft.Json.NullValueHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_NullValueHandling_mBD2CC55F38FF2D418402376DAEDB311FB22DE22E (JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.WebRequest/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m80E69D2DC9FB882880251ADB39019033B78E6FE6 (U3CU3Ec__DisplayClass16_0_tF37DBED51743B80AAE9FE0A94A6E1B749CDF687F * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest Unity.Services.Authentication.WebRequest::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * WebRequest_Build_m6D1DDE039F7765E509FFD6773AA56C03B6B06955 (WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10 (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_m44D28A82BB10C85AED56A43BB666850D2E9E59E8 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 *, Exception_t *, const RuntimeMethod*))TaskCompletionSource_1_SetException_mDD594BEBBEE23B395C77001EE646A1E9F4C820BE_gshared)(__this, ___exception0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.String>::get_Task()
inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_inline (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * (*) (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline)(__this, method);
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Post_m661DC62ED36C9BA54246F5795DB8866BE2948739 (String_t* ___uri0, String_t* ___postData1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9 (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A (String_t* ___uri0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Delete_m5BC5399C131263E04A677CF8494D15DA7888C7F3 (String_t* ___uri0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// Unity.Services.Authentication.INetworkConfiguration Unity.Services.Authentication.WebRequest::get_Configuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WebRequest_get_Configuration_mE815C1CBDB6A086D00B915A9C22EC4E916870C98_inline (WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Unity.Services.Authentication.WebRequest::get_Retries()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebRequest_get_Retries_mB9795033114913C44BE87F5A05F50668316D0D4E_inline (WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.Logger::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogWarning_m89AD2E4C5CE3B0BA63F90C047DFEE64C59851430 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.WebRequest::set_Retries(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequest_set_Retries_m209B8993903A208CFEF7BCF8F088F13576EC7154_inline (WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.String> Unity.Services.Authentication.WebRequest::SendAttemptAsync(System.Threading.Tasks.TaskCompletionSource`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * WebRequest_SendAttemptAsync_mC29F48105086F4D891B3B343D261EB658566A09A (WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * __this, TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * ___tcs0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.WebRequestException::.ctor(System.Boolean,System.Boolean,System.Boolean,System.Int64,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestException__ctor_m53042F8EC4F6C40C683BECF75DCC97EB375898E1 (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, bool ___isNetworkError0, bool ___isServerError1, bool ___isDeserializationError2, int64_t ___responseCode3, String_t* ___errorMessage4, RuntimeObject* ___responseHeaders5, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_m2741E572F08EDD2E8976B6020E85A1BDB98D6201 (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 *, String_t*, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared)(__this, ___result0, method);
}
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.WebRequestException::set_NetworkError(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequestException_set_NetworkError_mC1FA2EFF205250B122AD4A44B494B63850C7722B_inline (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.WebRequestException::set_ServerError(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequestException_set_ServerError_m214BE708A528B63FA7FB0484514AF02D7ECFBF83_inline (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.WebRequestException::set_DeserializationError(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequestException_set_DeserializationError_m36196B7BE547C0925B66FE28273CC689C0342131_inline (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.WebRequestException::set_ResponseCode(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequestException_set_ResponseCode_mCD4590D5F88BA28ED3406FE765783C9ED72828A1_inline (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.WebRequestException::set_ResponseHeaders(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequestException_set_ResponseHeaders_mF585FC95469C086FF17914E8CA0C0A3D942331B7_inline (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA486789C3592050AA93509A53FF13DC3D625509C (U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB * __this, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Unity.Services.Authentication.WellKnownKeysResponse>::GetAwaiter()
inline TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E  Task_1_GetAwaiter_m5B5959C3C40E1FC031A71286348C6E037358443A (Task_1_t98B46A031F0AA87AC60519A0EC92DA07388CA383 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E  (*) (Task_1_t98B46A031F0AA87AC60519A0EC92DA07388CA383 *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.WellKnownKeysResponse>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m6102E2E06015F97B6F38B8469F4CE3A77ED2A4E6 (TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.WellKnownKeysResponse>,Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__103>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E_TisU3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510_mA600C04F13DE6B0FEAE3062C8F971C57E2E04AD0 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E * ___awaiter0, U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E *, U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510_mCE6C3D35EA615FBD2259DCF71626707DD0540863_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.WellKnownKeysResponse>::GetResult()
inline WellKnownKeysResponse_t362C5F2449BC6E27CFF9E8DA7E3BEF85044AA899 * TaskAwaiter_1_GetResult_m11C4698C724C62BAAB3EF4ADEB980DDF130B31F4 (TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E * __this, const RuntimeMethod* method)
{
	return ((  WellKnownKeysResponse_t362C5F2449BC6E27CFF9E8DA7E3BEF85044AA899 * (*) (TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void Unity.Services.Authentication.WellKnownKeysComponent::set_Keys(Unity.Services.Authentication.WellKnownKey[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WellKnownKeysComponent_set_Keys_mD0A251052C38E066D9DADD6EB842DF4226508B96_inline (WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * __this, WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__103::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetWellKnownKeysAsyncU3Ed__103_MoveNext_m06D44C927267F41E42A3EE2D7473BFBDADFFEAD3 (U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__103::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetWellKnownKeysAsyncU3Ed__103_SetStateMachine_mA4AC1F844D32FC7F7FE597D9BC94D881522412CE (U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::GetWellKnownKeysAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AuthenticationServiceInternal_GetWellKnownKeysAsync_m51864139F01BE531A3C9EE608912D24B65AF60E7 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method);
// !0 System.Func`1<System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse>>::Invoke()
inline Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 * Func_1_Invoke_m7D47B552E0D254ECDFF8CE438279C36B23C1F81C (Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 * (*) (Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9 *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Threading.Tasks.Task[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_WhenAll_m5E4DAF3B017D9E8C830ED1ABDD87C6FFF58B4495 (TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* ___tasks0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__108>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9_mED1619B60770BF740628D397454BC988F52701FD (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9_mED1619B60770BF740628D397454BC988F52701FD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse>::GetAwaiter()
inline TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8  Task_1_GetAwaiter_mCF257E1EE701A2083F6449CA584EE72E2B01FC9A (Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8  (*) (Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.SignInResponse>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m82AA0A161E0F0459FC1D8843CEDE2EA555C50D36 (TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.SignInResponse>,Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__108>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8_TisU3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9_mD73911D1FECFADF6886DF567EC1993369770591E (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8 * ___awaiter0, U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8 *, U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9_mE00CE5AF8FED046261EBC61470D0716E9874C677_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.SignInResponse>::GetResult()
inline SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * TaskAwaiter_1_GetResult_m57A2DAB2C076A68382251D5904A80019A1791AAE (TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8 * __this, const RuntimeMethod* method)
{
	return ((  SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * (*) (TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::CompleteSignIn(Unity.Services.Authentication.SignInResponse,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_CompleteSignIn_mC63035B84EABA2C107DD10FB6895261F596DCFBC (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * ___response0, bool ___enableRefresh1, const RuntimeMethod* method);
// Unity.Services.Core.RequestFailedException Unity.Services.Authentication.AuthenticationServiceInternal::BuildServerException(Unity.Services.Authentication.WebRequestException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * AuthenticationServiceInternal_BuildServerException_m65325EA837C5EB0BF8BD6F7DA6538A62666A74A8 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * ___exception0, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__108::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleSignInRequestAsyncU3Ed__108_MoveNext_m145E76C9AACA43859307E92D8E7707A50D994F30 (U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__108::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleSignInRequestAsyncU3Ed__108_SetStateMachine_m008B1229A5293C043B2EF8351F8EEA35AA9F98FD (U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Authentication.SignInResponse>,Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__109>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8_TisU3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804_m3511BEAB707840875E97AF0B5854ED07EDC3EA6E (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8 * ___awaiter0, U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8 *, U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804_mBEBD6AD793F9106802C13E8A40A0A7CF1261BD07_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__109::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRefreshAsyncU3Ed__109_MoveNext_m81C0AF6374558FF8C0603DD7979C55A107E29B10 (U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__109::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRefreshAsyncU3Ed__109_SetStateMachine_mA9BACBDA7675C9A3B3CF06C41C9ABA425C973ECA (U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Boolean Unity.Services.Authentication.WebRequest::RequestHasNetworkError(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRequest_RequestHasNetworkError_m88DDC062108A0A69D9DF3621E1A40FF91CCAC3E1 (WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___request0, const RuntimeMethod* method);
// System.Boolean Unity.Services.Authentication.WebRequest::RequestHasServerError(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRequest_RequestHasServerError_m6B11C6BA8EDEE6B7A48513D5A573ED605CA275FA (WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___request0, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Networking.UnityWebRequest::GetResponseHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * UnityWebRequest_GetResponseHeaders_mD42F316C2E0B8A8AD0F9E6F3A3D4103CAB92FB23 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Authentication.WebRequest::RequestCompleted(System.Threading.Tasks.TaskCompletionSource`1<System.String>,System.Int64,System.Boolean,System.Boolean,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequest_RequestCompleted_mDAF35B91908AFBE5C0859D0854581BD6B2D73477 (WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * __this, TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * ___tcs0, int64_t ___responseCode1, bool ___isNetworkError2, bool ___isServerError3, String_t* ___errorText4, String_t* ___bodyText5, RuntimeObject* ___headers6, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m8032472F6BC2EC4FEE017DE7E4C440078BC4E1C8 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
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
// System.Void Unity.Services.Authentication.AccessToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessToken__ctor_m511DB5AE738A6A3930C793CDDA3875FB5863BB87 (AccessToken_t7BE9F906398E1D7FBBF15ABE169B4FBB03BD00DD * __this, const RuntimeMethod* method)
{
	{
		// public AccessToken() {}
		BaseJwt__ctor_mB5B7C699C99A13A3DB01042C6ACDF8F13BA9790C(__this, /*hidden argument*/NULL);
		// public AccessToken() {}
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
// System.Void Unity.Services.Authentication.AccessTokenComponent::set_AccessToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessTokenComponent_set_AccessToken_mCE8771733C9E04D7CC5C568581800BAB07180E75 (AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AccessToken { get; internal set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAccessTokenU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Nullable`1<System.DateTime> Unity.Services.Authentication.AccessTokenComponent::get_ExpiryTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  AccessTokenComponent_get_ExpiryTime_m8A38E762B531DA5C273EA09DC9E3EEDE68891869 (AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * __this, const RuntimeMethod* method)
{
	{
		// public DateTime? ExpiryTime { get; internal set; }
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0 = __this->get_U3CExpiryTimeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.AccessTokenComponent::set_ExpiryTime(System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessTokenComponent_set_ExpiryTime_m608106453E1FEFA2B6CB6F2A0AF5F0A642A3BEB7 (AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * __this, Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___value0, const RuntimeMethod* method)
{
	{
		// public DateTime? ExpiryTime { get; internal set; }
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0 = ___value0;
		__this->set_U3CExpiryTimeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Unity.Services.Authentication.AccessTokenComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessTokenComponent__ctor_m7609AF34D4D18B743697D8D58C51D75CFCC8A96B (AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * __this, const RuntimeMethod* method)
{
	{
		// internal AccessTokenComponent()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AccessTokenComponent::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessTokenComponent_Clear_m1CAF5EED0646956500FC45ADDB0BF966CE623CD7 (AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * __this, const RuntimeMethod* method)
{
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// AccessToken = null;
		AccessTokenComponent_set_AccessToken_mCE8771733C9E04D7CC5C568581800BAB07180E75_inline(__this, (String_t*)NULL, /*hidden argument*/NULL);
		// ExpiryTime = null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D ));
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0 = V_0;
		AccessTokenComponent_set_ExpiryTime_m608106453E1FEFA2B6CB6F2A0AF5F0A642A3BEB7_inline(__this, L_0, /*hidden argument*/NULL);
		// }
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
// System.Void Unity.Services.Authentication.AccessTokenExtraClaims::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessTokenExtraClaims__ctor_m13630DF1DE7C136292A17F02CAFAA52B90A1DD33 (AccessTokenExtraClaims_t08B1B799C820999FBDC60E585800A40D373E2CB0 * __this, const RuntimeMethod* method)
{
	{
		// public AccessTokenExtraClaims() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public AccessTokenExtraClaims() {}
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
// System.String Unity.Services.Authentication.AuthenticationCache::get_CloudProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_get_CloudProjectId_m2D15450147B0CDC96385F631E4D1256D353A8FA0 (AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string CloudProjectId => m_CloudProjectId.GetCloudProjectId();
		RuntimeObject* L_0 = __this->get_m_CloudProjectId_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Configuration.Internal.ICloudProjectId::GetCloudProjectId() */, ICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String Unity.Services.Authentication.AuthenticationCache::get_Profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_get_Profile_mCCC6D885D686B5BA12FA3F1BFCFC61F48FFB302D (AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProfile_t30A464C5A6D08D290EA3672E0F659D24FB8C8F04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Profile => m_Profile.Current;
		RuntimeObject* L_0 = __this->get_m_Profile_1();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Authentication.IProfile::get_Current() */, IProfile_t30A464C5A6D08D290EA3672E0F659D24FB8C8F04_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String Unity.Services.Authentication.AuthenticationCache::get_Prefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_get_Prefix_m749662D57FFBBC52ED3F259113D2FE8BCC3C04BD (AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDA99DC082690D52234645F88C722A5B296B811B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string Prefix => $"{CloudProjectId}.{Profile}.unity.services.authentication.";
		String_t* L_0;
		L_0 = AuthenticationCache_get_CloudProjectId_m2D15450147B0CDC96385F631E4D1256D353A8FA0(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = AuthenticationCache_get_Profile_mCCC6D885D686B5BA12FA3F1BFCFC61F48FFB302D(__this, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_0, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_1, _stringLiteralCDA99DC082690D52234645F88C722A5B296B811B, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Unity.Services.Authentication.AuthenticationCache::get_OldPrefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_get_OldPrefix_mA3B20DC3AACC2DEB1CDB62EECFD41B339A444E0A (AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB94C40AE44D0691F7FCE589508D96B9A91E098C2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string OldPrefix => $"unity.services.authentication.";
		return _stringLiteralB94C40AE44D0691F7FCE589508D96B9A91E098C2;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationCache::.ctor(Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Authentication.IProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationCache__ctor_m84A80083362E387BED6E7DD08138FAFF9950E958 (AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * __this, RuntimeObject* ___cloudProjectId0, RuntimeObject* ___profile1, const RuntimeMethod* method)
{
	{
		// public AuthenticationCache(ICloudProjectId cloudProjectId, IProfile profile)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_CloudProjectId = cloudProjectId;
		RuntimeObject* L_0 = ___cloudProjectId0;
		__this->set_m_CloudProjectId_0(L_0);
		// m_Profile = profile;
		RuntimeObject* L_1 = ___profile1;
		__this->set_m_Profile_1(L_1);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationCache::DeleteKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationCache_DeleteKey_m89EF8284B8FE20A3B85D5171302772ACE52C9D79 (AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	{
		// PlayerPrefs.DeleteKey(GetKey(key));
		String_t* L_0 = ___key0;
		String_t* L_1;
		L_1 = AuthenticationCache_GetKey_m12223D9D28F4C3BA8389F903CDD14B64493FC6B1(__this, L_0, /*hidden argument*/NULL);
		PlayerPrefs_DeleteKey_mCEF6CE08D7D7670AD4072228E261A7E746030554(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Unity.Services.Authentication.AuthenticationCache::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_GetString_m3A7BB5F9D61FAD61A976F429C2DF6D2EE35EAB88 (AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	{
		// return PlayerPrefs.GetString(GetKey(key));
		String_t* L_0 = ___key0;
		String_t* L_1;
		L_1 = AuthenticationCache_GetKey_m12223D9D28F4C3BA8389F903CDD14B64493FC6B1(__this, L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationCache::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationCache_SetString_m145D9DB8085783405D04FDFAED54759EB72D207F (AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		// PlayerPrefs.SetString(GetKey(key), value);
		String_t* L_0 = ___key0;
		String_t* L_1;
		L_1 = AuthenticationCache_GetKey_m12223D9D28F4C3BA8389F903CDD14B64493FC6B1(__this, L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___value1;
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(L_1, L_2, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationCache::Migrate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationCache_Migrate_mA940C52954BEF5B20A7A7ACE83DAD17CB5205CF0 (AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// var oldKey = GetOldKey(key);
		String_t* L_0 = ___key0;
		String_t* L_1;
		L_1 = AuthenticationCache_GetOldKey_m75E29414B4D6A97F53E21D41CDCB6BDCF5182732(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (PlayerPrefs.HasKey(oldKey))
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// var newKey = GetKey(key);
		String_t* L_4 = ___key0;
		String_t* L_5;
		L_5 = AuthenticationCache_GetKey_m12223D9D28F4C3BA8389F903CDD14B64493FC6B1(__this, L_4, /*hidden argument*/NULL);
		// PlayerPrefs.SetString(newKey, PlayerPrefs.GetString(oldKey));
		String_t* L_6 = V_0;
		String_t* L_7;
		L_7 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(L_6, /*hidden argument*/NULL);
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(L_5, L_7, /*hidden argument*/NULL);
		// PlayerPrefs.DeleteKey(oldKey);
		String_t* L_8 = V_0;
		PlayerPrefs_DeleteKey_mCEF6CE08D7D7670AD4072228E261A7E746030554(L_8, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.String Unity.Services.Authentication.AuthenticationCache::GetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_GetKey_m12223D9D28F4C3BA8389F903CDD14B64493FC6B1 (AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	{
		// return Prefix + key;
		String_t* L_0;
		L_0 = AuthenticationCache_get_Prefix_m749662D57FFBBC52ED3F259113D2FE8BCC3C04BD(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___key0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Unity.Services.Authentication.AuthenticationCache::GetOldKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationCache_GetOldKey_m75E29414B4D6A97F53E21D41CDCB6BDCF5182732 (AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	{
		// return OldPrefix + key;
		String_t* L_0;
		L_0 = AuthenticationCache_get_OldPrefix_mA3B20DC3AACC2DEB1CDB62EECFD41B339A444E0A(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___key0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Unity.Services.Authentication.AuthenticationErrorCodes::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationErrorCodes__cctor_m922DCE27A1EDDC9CC59D48A6969779BC0257561B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int MinValue = 10000;
		((AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var))->set_MinValue_0(((int32_t)10000));
		// public static readonly int ClientInvalidUserState = 10000;
		((AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var))->set_ClientInvalidUserState_1(((int32_t)10000));
		// public static readonly int ClientNoActiveSession = 10001;
		((AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var))->set_ClientNoActiveSession_2(((int32_t)10001));
		// public static readonly int InvalidParameters = 10002;
		((AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var))->set_InvalidParameters_3(((int32_t)10002));
		// public static readonly int AccountAlreadyLinked = 10003;
		((AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var))->set_AccountAlreadyLinked_4(((int32_t)10003));
		// public static readonly int AccountLinkLimitExceeded = 10004;
		((AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var))->set_AccountLinkLimitExceeded_5(((int32_t)10004));
		// public static readonly int ClientUnlinkExternalIdNotFound = 10005;
		((AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var))->set_ClientUnlinkExternalIdNotFound_6(((int32_t)10005));
		// public static readonly int ClientInvalidProfile = 10006;
		((AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var))->set_ClientInvalidProfile_7(((int32_t)10006));
		// public static readonly int InvalidSessionToken = 10007;
		((AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var))->set_InvalidSessionToken_8(((int32_t)10007));
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
// System.Void Unity.Services.Authentication.AuthenticationErrorResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationErrorResponse__ctor_m2D58F1D943813ADFFC7F30AC4F96642EFF2C990C (AuthenticationErrorResponse_tC90CC24823ADC01AD30EAA07CC0A10E39998600F * __this, const RuntimeMethod* method)
{
	{
		// public AuthenticationErrorResponse() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public AuthenticationErrorResponse() {}
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
// System.Void Unity.Services.Authentication.AuthenticationException::.ctor(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationException__ctor_m89AFAE112F5DE463C5AF83D7337A270621C823BE (AuthenticationException_t2C1D97715C433D51CC8B9EE9A86A72015F2E92CC * __this, int32_t ___errorCode0, String_t* ___message1, Exception_t * ___innerException2, const RuntimeMethod* method)
{
	{
		// : base(errorCode, message, innerException)
		int32_t L_0 = ___errorCode0;
		String_t* L_1 = ___message1;
		Exception_t * L_2 = ___innerException2;
		RequestFailedException__ctor_mE7F7D9D726A75E7CEE7EB910D325A462687A2E1D(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.Services.Core.RequestFailedException Unity.Services.Authentication.AuthenticationException::Create(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * AuthenticationException_Create_m125C5AB22F4E35B2F43FC63C7715FD615AE0788D (int32_t ___errorCode0, String_t* ___message1, Exception_t * ___innerException2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationException_t2C1D97715C433D51CC8B9EE9A86A72015F2E92CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (errorCode < AuthenticationErrorCodes.MinValue)
		int32_t L_0 = ___errorCode0;
		IL2CPP_RUNTIME_CLASS_INIT(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var);
		int32_t L_1 = ((AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var))->get_MinValue_0();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		// return new RequestFailedException(errorCode, message, innerException);
		int32_t L_2 = ___errorCode0;
		String_t* L_3 = ___message1;
		Exception_t * L_4 = ___innerException2;
		RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_5 = (RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A *)il2cpp_codegen_object_new(RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A_il2cpp_TypeInfo_var);
		RequestFailedException__ctor_mE7F7D9D726A75E7CEE7EB910D325A462687A2E1D(L_5, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0011:
	{
		// return new AuthenticationException(errorCode, message, innerException);
		int32_t L_6 = ___errorCode0;
		String_t* L_7 = ___message1;
		Exception_t * L_8 = ___innerException2;
		AuthenticationException_t2C1D97715C433D51CC8B9EE9A86A72015F2E92CC * L_9 = (AuthenticationException_t2C1D97715C433D51CC8B9EE9A86A72015F2E92CC *)il2cpp_codegen_object_new(AuthenticationException_t2C1D97715C433D51CC8B9EE9A86A72015F2E92CC_il2cpp_TypeInfo_var);
		AuthenticationException__ctor_m89AFAE112F5DE463C5AF83D7337A270621C823BE(L_9, L_6, L_7, L_8, /*hidden argument*/NULL);
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
// System.Void Unity.Services.Authentication.AuthenticationMetrics::.ctor(Unity.Services.Core.Telemetry.Internal.IMetricsFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationMetrics__ctor_m7ACAF4097703A80A9DFDE113E0AE9C8568E353E7 (AuthenticationMetrics_tFC08B32361C09A77C8FCB40451DB189AC19E470F * __this, RuntimeObject* ___metricsFactory0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9349ADD882729BE53E1C4DE12028C63CA62FB09D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal AuthenticationMetrics(IMetricsFactory metricsFactory)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Metrics = metricsFactory.Create(k_PackageName);
		RuntimeObject* L_0 = ___metricsFactory0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* Unity.Services.Core.Telemetry.Internal.IMetrics Unity.Services.Core.Telemetry.Internal.IMetricsFactory::Create(System.String) */, IMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_il2cpp_TypeInfo_var, L_0, _stringLiteral9349ADD882729BE53E1C4DE12028C63CA62FB09D);
		__this->set_m_Metrics_0(L_1);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationMetrics::SendPackageInitTimeMetric(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationMetrics_SendPackageInitTimeMetric_m7DA1ACF0ECF4ACB93C29D1A41883B9251AB7FBB9 (AuthenticationMetrics_tFC08B32361C09A77C8FCB40451DB189AC19E470F * __this, double ___initTimeSeconds0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetrics_tE17233689864CACE2185FCC53E928D858144B3E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral860A8D6E0621FF04D34DD0BDB8DAEB769BD82049);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Metrics.SendHistogramMetric(k_PackageInitTimeKey, initTimeSeconds);
		RuntimeObject* L_0 = __this->get_m_Metrics_0();
		double L_1 = ___initTimeSeconds0;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, double, RuntimeObject* >::Invoke(0 /* System.Void Unity.Services.Core.Telemetry.Internal.IMetrics::SendHistogramMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>) */, IMetrics_tE17233689864CACE2185FCC53E928D858144B3E0_il2cpp_TypeInfo_var, L_0, _stringLiteral860A8D6E0621FF04D34DD0BDB8DAEB769BD82049, L_1, (RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationMetrics::SendNetworkErrorMetric()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationMetrics_SendNetworkErrorMetric_m67D0C140984B307EC297DA57C05F80FA983829EF (AuthenticationMetrics_tFC08B32361C09A77C8FCB40451DB189AC19E470F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetrics_tE17233689864CACE2185FCC53E928D858144B3E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0135F76E285AE1930AF69DEBEFAFB813DE53F08);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Metrics.SendSumMetric(k_NetworkErrorKey);
		RuntimeObject* L_0 = __this->get_m_Metrics_0();
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, double, RuntimeObject* >::Invoke(1 /* System.Void Unity.Services.Core.Telemetry.Internal.IMetrics::SendSumMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>) */, IMetrics_tE17233689864CACE2185FCC53E928D858144B3E0_il2cpp_TypeInfo_var, L_0, _stringLiteralD0135F76E285AE1930AF69DEBEFAFB813DE53F08, (1.0), (RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationMetrics::SendExpiredSessionMetric()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationMetrics_SendExpiredSessionMetric_m7509559B764F7EA9D2C63C9323DF8E20C12AC2A7 (AuthenticationMetrics_tFC08B32361C09A77C8FCB40451DB189AC19E470F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetrics_tE17233689864CACE2185FCC53E928D858144B3E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84A9978B59FFBFBE63AC70C74158A9EC795C97E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Metrics.SendSumMetric(k_ExpiredSessionKey);
		RuntimeObject* L_0 = __this->get_m_Metrics_0();
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, double, RuntimeObject* >::Invoke(1 /* System.Void Unity.Services.Core.Telemetry.Internal.IMetrics::SendSumMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>) */, IMetrics_tE17233689864CACE2185FCC53E928D858144B3E0_il2cpp_TypeInfo_var, L_0, _stringLiteral84A9978B59FFBFBE63AC70C74158A9EC795C97E2, (1.0), (RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationMetrics::SendClientInvalidStateExceptionMetric()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationMetrics_SendClientInvalidStateExceptionMetric_m8418B7B2BEFC5BF84F5894A5BE1CC2A1FEC89729 (AuthenticationMetrics_tFC08B32361C09A77C8FCB40451DB189AC19E470F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetrics_tE17233689864CACE2185FCC53E928D858144B3E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB3E69FC55ED8847330589BDD84FCE65D9533F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Metrics.SendSumMetric(k_ClientInvalidStateExceptionKey);
		RuntimeObject* L_0 = __this->get_m_Metrics_0();
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, double, RuntimeObject* >::Invoke(1 /* System.Void Unity.Services.Core.Telemetry.Internal.IMetrics::SendSumMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>) */, IMetrics_tE17233689864CACE2185FCC53E928D858144B3E0_il2cpp_TypeInfo_var, L_0, _stringLiteralDEB3E69FC55ED8847330589BDD84FCE65D9533F9, (1.0), (RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationMetrics::SendClientSessionTokenNotExistsExceptionMetric()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationMetrics_SendClientSessionTokenNotExistsExceptionMetric_m7481AE1A120BEC6D90393732B0FF7CBE72E442E8 (AuthenticationMetrics_tFC08B32361C09A77C8FCB40451DB189AC19E470F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetrics_tE17233689864CACE2185FCC53E928D858144B3E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08236C3D0BD231A7F99CFFF73121864DE711C7AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Metrics.SendSumMetric(k_ClientSessionTokenNotExistsExceptionKey);
		RuntimeObject* L_0 = __this->get_m_Metrics_0();
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, double, RuntimeObject* >::Invoke(1 /* System.Void Unity.Services.Core.Telemetry.Internal.IMetrics::SendSumMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>) */, IMetrics_tE17233689864CACE2185FCC53E928D858144B3E0_il2cpp_TypeInfo_var, L_0, _stringLiteral08236C3D0BD231A7F99CFFF73121864DE711C7AF, (1.0), (RuntimeObject*)NULL);
		// }
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
// Unity.Services.Core.Configuration.Internal.ICloudProjectId Unity.Services.Authentication.AuthenticationNetworkClient::get_CloudProjectIdComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationNetworkClient_get_CloudProjectIdComponent_mE6A548BDBE08D746C26C8666DE86C84860814BCA (AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * __this, const RuntimeMethod* method)
{
	{
		// internal ICloudProjectId CloudProjectIdComponent { get; }
		RuntimeObject* L_0 = __this->get_U3CCloudProjectIdComponentU3Ek__BackingField_1();
		return L_0;
	}
}
// Unity.Services.Core.Environments.Internal.IEnvironments Unity.Services.Authentication.AuthenticationNetworkClient::get_EnvironmentComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationNetworkClient_get_EnvironmentComponent_mB9659CF2F4308C0C55A15766114FC46C50C7D019 (AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * __this, const RuntimeMethod* method)
{
	{
		// internal IEnvironments EnvironmentComponent { get; }
		RuntimeObject* L_0 = __this->get_U3CEnvironmentComponentU3Ek__BackingField_2();
		return L_0;
	}
}
// Unity.Services.Authentication.INetworkHandler Unity.Services.Authentication.AuthenticationNetworkClient::get_NetworkHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationNetworkClient_get_NetworkHandler_mADC5CDB5943FFFA2318DA4BC97BA0B4551908CB3 (AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * __this, const RuntimeMethod* method)
{
	{
		// internal INetworkHandler NetworkHandler { get; }
		RuntimeObject* L_0 = __this->get_U3CNetworkHandlerU3Ek__BackingField_3();
		return L_0;
	}
}
// System.String Unity.Services.Authentication.AuthenticationNetworkClient::get_EnvironmentId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationNetworkClient_get_EnvironmentId_m99C74B2BB41B32EE10B3F4EE3C072AB3993BD054 (AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string EnvironmentId => EnvironmentComponent.Current;
		RuntimeObject* L_0;
		L_0 = AuthenticationNetworkClient_get_EnvironmentComponent_mB9659CF2F4308C0C55A15766114FC46C50C7D019_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Environments.Internal.IEnvironments::get_Current() */, IEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationNetworkClient::.ctor(System.String,Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments,Unity.Services.Authentication.INetworkHandler,Unity.Services.Authentication.AccessTokenComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationNetworkClient__ctor_m48F033732ADC17821C2590DC5B0106C6E7C6C941 (AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * __this, String_t* ___host0, RuntimeObject* ___cloudProjectId1, RuntimeObject* ___environment2, RuntimeObject* ___networkHandler3, AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * ___accessToken4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D0D6E0FD7AC9D830E7B2E7079C8B6D3B7FD573E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1459AA156A3CC61BE3445EF580D2A5FB14EA4CE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64F0B93C5B7055DDA721986BA7566D27276D2FDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B0916E2982DC623EA98A7E9D62E6EF0E2312106);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77B5A95080D1AC66E0C734381A240DBAF39BB2C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA10AB45BB9FF2F4B6907E5D38143D5D5AA7ED62E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF572CA10517B5259B757A364DD3507DF49F7DD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC36D2F78E29E9D66D4CD31ECC1B896992ED4C2B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1CDA7DDA0CE92EAD8BFF309B8D1AF87CE4872B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4EF956D8605C91DE8D8A5036BA8A8E5C713A5CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal AuthenticationNetworkClient(string host,
		//                                      ICloudProjectId cloudProjectId,
		//                                      IEnvironments environment,
		//                                      INetworkHandler networkHandler,
		//                                      AccessTokenComponent accessToken)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// AccessTokenComponent = accessToken;
		AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * L_0 = ___accessToken4;
		__this->set_U3CAccessTokenComponentU3Ek__BackingField_0(L_0);
		// CloudProjectIdComponent = cloudProjectId;
		RuntimeObject* L_1 = ___cloudProjectId1;
		__this->set_U3CCloudProjectIdComponentU3Ek__BackingField_1(L_1);
		// EnvironmentComponent = environment;
		RuntimeObject* L_2 = ___environment2;
		__this->set_U3CEnvironmentComponentU3Ek__BackingField_2(L_2);
		// NetworkHandler = networkHandler;
		RuntimeObject* L_3 = ___networkHandler3;
		__this->set_U3CNetworkHandlerU3Ek__BackingField_3(L_3);
		// m_WellKnownUrl = host + k_WellKnownUrlStem;
		String_t* L_4 = ___host0;
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_4, _stringLiteralE4EF956D8605C91DE8D8A5036BA8A8E5C713A5CC, /*hidden argument*/NULL);
		__this->set_m_WellKnownUrl_4(L_5);
		// m_AnonymousUrl = host + k_AnonymousUrlStem;
		String_t* L_6 = ___host0;
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, _stringLiteral0D0D6E0FD7AC9D830E7B2E7079C8B6D3B7FD573E, /*hidden argument*/NULL);
		__this->set_m_AnonymousUrl_5(L_7);
		// m_SessionTokenUrl = host + k_SessionTokenUrlStem;
		String_t* L_8 = ___host0;
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_8, _stringLiteralBF572CA10517B5259B757A364DD3507DF49F7DD3, /*hidden argument*/NULL);
		__this->set_m_SessionTokenUrl_6(L_9);
		// m_ExternalTokenUrl = host + k_ExternalTokenUrlStem;
		String_t* L_10 = ___host0;
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_10, _stringLiteralD1CDA7DDA0CE92EAD8BFF309B8D1AF87CE4872B9, /*hidden argument*/NULL);
		__this->set_m_ExternalTokenUrl_7(L_11);
		// m_LinkExternalTokenUrl = host + k_LinkExternalTokenUrlStem;
		String_t* L_12 = ___host0;
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_12, _stringLiteralA10AB45BB9FF2F4B6907E5D38143D5D5AA7ED62E, /*hidden argument*/NULL);
		__this->set_m_LinkExternalTokenUrl_8(L_13);
		// m_UnlinkExternalTokenUrl = host + k_UnlinkExternalTokenUrlStem;
		String_t* L_14 = ___host0;
		String_t* L_15;
		L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_14, _stringLiteralC36D2F78E29E9D66D4CD31ECC1B896992ED4C2B6, /*hidden argument*/NULL);
		__this->set_m_UnlinkExternalTokenUrl_9(L_15);
		// m_UsersUrl = host + k_UsersUrlStem;
		String_t* L_16 = ___host0;
		String_t* L_17;
		L_17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_16, _stringLiteral6B0916E2982DC623EA98A7E9D62E6EF0E2312106, /*hidden argument*/NULL);
		__this->set_m_UsersUrl_10(L_17);
		// m_CommonHeaders = new Dictionary<string, string>
		// {
		//     ["ProjectId"] = CloudProjectIdComponent.GetCloudProjectId(),
		//     // The Error-Version header enables RFC7807HttpError error responses
		//     ["Error-Version"] = "v1"
		// };
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_18 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_18, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_19 = L_18;
		RuntimeObject* L_20;
		L_20 = AuthenticationNetworkClient_get_CloudProjectIdComponent_mE6A548BDBE08D746C26C8666DE86C84860814BCA_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Configuration.Internal.ICloudProjectId::GetCloudProjectId() */, ICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_19);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_19, _stringLiteral1459AA156A3CC61BE3445EF580D2A5FB14EA4CE8, L_21, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_22 = L_19;
		NullCheck(L_22);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_22, _stringLiteral77B5A95080D1AC66E0C734381A240DBAF39BB2C9, _stringLiteral64F0B93C5B7055DDA721986BA7566D27276D2FDD, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		__this->set_m_CommonHeaders_11(L_22);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.WellKnownKeysResponse> Unity.Services.Authentication.AuthenticationNetworkClient::GetWellKnownKeysAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t98B46A031F0AA87AC60519A0EC92DA07388CA383 * AuthenticationNetworkClient_GetWellKnownKeysAsync_m81CCB0825FBA19A5BC26520317D17EF484A8C2E3 (AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkHandler_GetAsync_TisWellKnownKeysResponse_t362C5F2449BC6E27CFF9E8DA7E3BEF85044AA899_m874DA766656A601B753BBBF555F24D3B5E33C438_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NetworkHandler.GetAsync<WellKnownKeysResponse>(m_WellKnownUrl);
		RuntimeObject* L_0;
		L_0 = AuthenticationNetworkClient_get_NetworkHandler_mADC5CDB5943FFFA2318DA4BC97BA0B4551908CB3_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = __this->get_m_WellKnownUrl_4();
		NullCheck(L_0);
		Task_1_t98B46A031F0AA87AC60519A0EC92DA07388CA383 * L_2;
		L_2 = GenericInterfaceFuncInvoker2< Task_1_t98B46A031F0AA87AC60519A0EC92DA07388CA383 *, String_t*, RuntimeObject* >::Invoke(INetworkHandler_GetAsync_TisWellKnownKeysResponse_t362C5F2449BC6E27CFF9E8DA7E3BEF85044AA899_m874DA766656A601B753BBBF555F24D3B5E33C438_RuntimeMethod_var, L_0, L_1, (RuntimeObject*)NULL);
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse> Unity.Services.Authentication.AuthenticationNetworkClient::SignInAnonymouslyAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 * AuthenticationNetworkClient_SignInAnonymouslyAsync_mC37B8043DDE52AD6BE3D593655BAE66C7357D4B7 (AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkHandler_PostAsync_TisSignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2_m603C1B00276F1113188E65A91913B127CB4344CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NetworkHandler.PostAsync<SignInResponse>(m_AnonymousUrl, WithEnvironment(GetCommonHeaders()));
		RuntimeObject* L_0;
		L_0 = AuthenticationNetworkClient_get_NetworkHandler_mADC5CDB5943FFFA2318DA4BC97BA0B4551908CB3_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = __this->get_m_AnonymousUrl_5();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_2;
		L_2 = AuthenticationNetworkClient_GetCommonHeaders_m1C94817255AE1CEDD51C51A17B4022D2BE11FC1D(__this, /*hidden argument*/NULL);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3;
		L_3 = AuthenticationNetworkClient_WithEnvironment_m0281D95C106C87650DBE497369C0E82EEE2AE9D4(__this, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 * L_4;
		L_4 = GenericInterfaceFuncInvoker2< Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 *, String_t*, RuntimeObject* >::Invoke(INetworkHandler_PostAsync_TisSignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2_m603C1B00276F1113188E65A91913B127CB4344CD_RuntimeMethod_var, L_0, L_1, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse> Unity.Services.Authentication.AuthenticationNetworkClient::SignInWithSessionTokenAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 * AuthenticationNetworkClient_SignInWithSessionTokenAsync_mCEE13FAF8516DC72F9758BE4EC0705FBDE908CFE (AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * __this, String_t* ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkHandler_PostAsync_TisSignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2_m6839F5D36EA104A29FA41D6FF8924DB198A8449B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionTokenRequest_t2E7C97561A7DA7B27587356C426D795EDA0194BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NetworkHandler.PostAsync<SignInResponse>(m_SessionTokenUrl, new SessionTokenRequest
		// {
		//     SessionToken = token
		// }, WithEnvironment(GetCommonHeaders()));
		RuntimeObject* L_0;
		L_0 = AuthenticationNetworkClient_get_NetworkHandler_mADC5CDB5943FFFA2318DA4BC97BA0B4551908CB3_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = __this->get_m_SessionTokenUrl_6();
		SessionTokenRequest_t2E7C97561A7DA7B27587356C426D795EDA0194BD * L_2 = (SessionTokenRequest_t2E7C97561A7DA7B27587356C426D795EDA0194BD *)il2cpp_codegen_object_new(SessionTokenRequest_t2E7C97561A7DA7B27587356C426D795EDA0194BD_il2cpp_TypeInfo_var);
		SessionTokenRequest__ctor_m2B6028D736AA3CA532722B94633E29D840968208(L_2, /*hidden argument*/NULL);
		SessionTokenRequest_t2E7C97561A7DA7B27587356C426D795EDA0194BD * L_3 = L_2;
		String_t* L_4 = ___token0;
		NullCheck(L_3);
		L_3->set_SessionToken_0(L_4);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_5;
		L_5 = AuthenticationNetworkClient_GetCommonHeaders_m1C94817255AE1CEDD51C51A17B4022D2BE11FC1D(__this, /*hidden argument*/NULL);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_6;
		L_6 = AuthenticationNetworkClient_WithEnvironment_m0281D95C106C87650DBE497369C0E82EEE2AE9D4(__this, L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 * L_7;
		L_7 = GenericInterfaceFuncInvoker3< Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 *, String_t*, RuntimeObject *, RuntimeObject* >::Invoke(INetworkHandler_PostAsync_TisSignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2_m6839F5D36EA104A29FA41D6FF8924DB198A8449B_RuntimeMethod_var, L_0, L_1, L_3, L_6);
		return L_7;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Authentication.AuthenticationNetworkClient::WithEnvironment(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * AuthenticationNetworkClient_WithEnvironment_m0281D95C106C87650DBE497369C0E82EEE2AE9D4 (AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral141957AF910C5B886304F115D2479EA72DD92035);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var environmentId = EnvironmentId;
		String_t* L_0;
		L_0 = AuthenticationNetworkClient_get_EnvironmentId_m99C74B2BB41B32EE10B3F4EE3C072AB3993BD054(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (!string.IsNullOrEmpty(environmentId))
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// headers["UnityEnvironment"] = environmentId;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = ___headers0;
		String_t* L_4 = V_0;
		NullCheck(L_3);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_3, _stringLiteral141957AF910C5B886304F115D2479EA72DD92035, L_4, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
	}

IL_001b:
	{
		// return headers;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_5 = ___headers0;
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Authentication.AuthenticationNetworkClient::GetCommonHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * AuthenticationNetworkClient_GetCommonHeaders_m1C94817255AE1CEDD51C51A17B4022D2BE11FC1D (AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Dictionary<string, string>(m_CommonHeaders);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_m_CommonHeaders_11();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9(L_1, L_0, /*hidden argument*/Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9_RuntimeMethod_var);
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
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationPackageInitializer::Initialize(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AuthenticationPackageInitializer_Initialize_mD03C970B20E9D5B768FAD1775963946C8E07021B (AuthenticationPackageInitializer_t22DA26E4CD0607D467B231600BC67874239B88F0 * __this, CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * ___registry0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationMetrics_tFC08B32361C09A77C8FCB40451DB189AC19E470F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_mEFB3E9E349374CAF2FB3C86F7B594FB3971D95DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_m529959703C2CD50CD18FA2DE8FA0770A38AB263F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_m908B82B3B70DD5FC71F2243DCB6C05C500CFB7D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_mE08D8A9DAF4B538AD8641C4C93B816E80678F75C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_GetServiceComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_m7515A5B4A848755CEC757111F68CDF8584AA7136_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIAccessToken_tF9F28E25BF665453329EE5A3604EEE1DF64A946E_m0006FC4033AB549B9837562247BA8A8C91D81208_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIEnvironmentId_tE5B54B0742EEB7D83B2DA3D5D5809328E3DDACFD_mFD6F3B51CA8A882CFD2C408E213796704F1BA9B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIPlayerId_t2C42E59B43666C8DE5F5A4F65C60B858DF1B5598_m809338902103045C8F4393E7C9A3EC5F16063C19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkHandler_tA8820CE19530E53BE6AFF793C612117070A4049E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfileComponent_t84EEB27237207350AE110116875EAF9C246F4367_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BBA17F9025B4E06EB9B984A9380348ECAAA27E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		s_Il2CppMethodInitialized = true;
	}
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	ProfileComponent_t84EEB27237207350AE110116875EAF9C246F4367 * V_5 = NULL;
	DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137 * V_6 = NULL;
	AuthenticationMetrics_tFC08B32361C09A77C8FCB40451DB189AC19E470F * V_7 = NULL;
	JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7 * V_8 = NULL;
	AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * V_9 = NULL;
	AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * V_10 = NULL;
	EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * V_11 = NULL;
	PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * V_12 = NULL;
	SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * V_13 = NULL;
	WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * V_14 = NULL;
	NetworkHandler_tA8820CE19530E53BE6AFF793C612117070A4049E * V_15 = NULL;
	AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * V_16 = NULL;
	AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * V_17 = NULL;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_18;
	memset((&V_18), 0, sizeof(V_18));
	{
		// var stopwatch = new Stopwatch();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_0 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// stopwatch.Start();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_1 = V_0;
		NullCheck(L_1);
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_1, /*hidden argument*/NULL);
		// var settings = new AuthenticationSettings();
		AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF * L_2 = (AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF *)il2cpp_codegen_object_new(AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF_il2cpp_TypeInfo_var);
		AuthenticationSettings__ctor_mDC97DB036D99F7FD820CD4E62650FF4A4AA4F8FD(L_2, /*hidden argument*/NULL);
		// var scheduler = registry.GetServiceComponent<IActionScheduler>();
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_3 = ___registry0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = CoreRegistry_GetServiceComponent_TisIActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_mEFB3E9E349374CAF2FB3C86F7B594FB3971D95DE(L_3, /*hidden argument*/CoreRegistry_GetServiceComponent_TisIActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_mEFB3E9E349374CAF2FB3C86F7B594FB3971D95DE_RuntimeMethod_var);
		V_1 = L_4;
		// var environment = registry.GetServiceComponent<IEnvironments>();
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_5 = ___registry0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = CoreRegistry_GetServiceComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_m908B82B3B70DD5FC71F2243DCB6C05C500CFB7D7(L_5, /*hidden argument*/CoreRegistry_GetServiceComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_m908B82B3B70DD5FC71F2243DCB6C05C500CFB7D7_RuntimeMethod_var);
		V_2 = L_6;
		// var projectId = registry.GetServiceComponent<ICloudProjectId>();
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_7 = ___registry0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = CoreRegistry_GetServiceComponent_TisICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_m529959703C2CD50CD18FA2DE8FA0770A38AB263F(L_7, /*hidden argument*/CoreRegistry_GetServiceComponent_TisICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_m529959703C2CD50CD18FA2DE8FA0770A38AB263F_RuntimeMethod_var);
		V_3 = L_8;
		// var projectConfiguration = registry.GetServiceComponent<IProjectConfiguration>();
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_9 = ___registry0;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = CoreRegistry_GetServiceComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_m7515A5B4A848755CEC757111F68CDF8584AA7136(L_9, /*hidden argument*/CoreRegistry_GetServiceComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_m7515A5B4A848755CEC757111F68CDF8584AA7136_RuntimeMethod_var);
		V_4 = L_10;
		// var profile = new ProfileComponent(projectConfiguration.GetString(AuthenticationExtensions.ProfileKey, "default"));
		RuntimeObject* L_11 = V_4;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(2 /* System.String Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetString(System.String,System.String) */, IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var, L_11, _stringLiteral0BBA17F9025B4E06EB9B984A9380348ECAAA27E7, _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		ProfileComponent_t84EEB27237207350AE110116875EAF9C246F4367 * L_13 = (ProfileComponent_t84EEB27237207350AE110116875EAF9C246F4367 *)il2cpp_codegen_object_new(ProfileComponent_t84EEB27237207350AE110116875EAF9C246F4367_il2cpp_TypeInfo_var);
		ProfileComponent__ctor_m2C9F1751C10B5004B12EAB6B969203963A471983(L_13, L_12, /*hidden argument*/NULL);
		V_5 = L_13;
		// var dateTime = new DateTimeWrapper();
		DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137 * L_14 = (DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137 *)il2cpp_codegen_object_new(DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137_il2cpp_TypeInfo_var);
		DateTimeWrapper__ctor_m3DAAC87852643F97ADB2E7ED52A23ACED837AE0D(L_14, /*hidden argument*/NULL);
		V_6 = L_14;
		// var metricsFactory = registry.GetServiceComponent<IMetricsFactory>();
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_15 = ___registry0;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = CoreRegistry_GetServiceComponent_TisIMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_mE08D8A9DAF4B538AD8641C4C93B816E80678F75C(L_15, /*hidden argument*/CoreRegistry_GetServiceComponent_TisIMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_mE08D8A9DAF4B538AD8641C4C93B816E80678F75C_RuntimeMethod_var);
		// var metrics = new AuthenticationMetrics(metricsFactory);
		AuthenticationMetrics_tFC08B32361C09A77C8FCB40451DB189AC19E470F * L_17 = (AuthenticationMetrics_tFC08B32361C09A77C8FCB40451DB189AC19E470F *)il2cpp_codegen_object_new(AuthenticationMetrics_tFC08B32361C09A77C8FCB40451DB189AC19E470F_il2cpp_TypeInfo_var);
		AuthenticationMetrics__ctor_m7ACAF4097703A80A9DFDE113E0AE9C8568E353E7(L_17, L_16, /*hidden argument*/NULL);
		V_7 = L_17;
		// var jwtDecoder = new JwtDecoder(dateTime);
		DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137 * L_18 = V_6;
		JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7 * L_19 = (JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7 *)il2cpp_codegen_object_new(JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7_il2cpp_TypeInfo_var);
		JwtDecoder__ctor_mAF16941528D35E2E8ADDDF0C9E8720842AEC4E78(L_19, L_18, /*hidden argument*/NULL);
		V_8 = L_19;
		// var cache = new AuthenticationCache(projectId, profile);
		RuntimeObject* L_20 = V_3;
		ProfileComponent_t84EEB27237207350AE110116875EAF9C246F4367 * L_21 = V_5;
		AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * L_22 = (AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C *)il2cpp_codegen_object_new(AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C_il2cpp_TypeInfo_var);
		AuthenticationCache__ctor_m84A80083362E387BED6E7DD08138FAFF9950E958(L_22, L_20, L_21, /*hidden argument*/NULL);
		V_9 = L_22;
		// var accessToken = new AccessTokenComponent();
		AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * L_23 = (AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB *)il2cpp_codegen_object_new(AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB_il2cpp_TypeInfo_var);
		AccessTokenComponent__ctor_m7609AF34D4D18B743697D8D58C51D75CFCC8A96B(L_23, /*hidden argument*/NULL);
		V_10 = L_23;
		// var environmentId = new EnvironmentIdComponent();
		EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * L_24 = (EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 *)il2cpp_codegen_object_new(EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320_il2cpp_TypeInfo_var);
		EnvironmentIdComponent__ctor_m7F53B9DB9592A685013C8AC24280B3FF1359E718(L_24, /*hidden argument*/NULL);
		V_11 = L_24;
		// var playerId = new PlayerIdComponent(cache);
		AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * L_25 = V_9;
		PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * L_26 = (PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A *)il2cpp_codegen_object_new(PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A_il2cpp_TypeInfo_var);
		PlayerIdComponent__ctor_mC532CDEF131A15D279324E9F64D10A1CDD88BCE0(L_26, L_25, /*hidden argument*/NULL);
		V_12 = L_26;
		// var sessionToken = new SessionTokenComponent(cache);
		AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * L_27 = V_9;
		SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * L_28 = (SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E *)il2cpp_codegen_object_new(SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E_il2cpp_TypeInfo_var);
		SessionTokenComponent__ctor_m481E6304C6ED4F7CB829C00B3EB80A9DB2AAF07B(L_28, L_27, /*hidden argument*/NULL);
		V_13 = L_28;
		// var wellKnownKeys = new WellKnownKeysComponent();
		WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * L_29 = (WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 *)il2cpp_codegen_object_new(WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069_il2cpp_TypeInfo_var);
		WellKnownKeysComponent__ctor_m9E1D834A356744CBAD7CEDE7EC5C1A8C392E931E(L_29, /*hidden argument*/NULL);
		V_14 = L_29;
		// var networkHandler = new NetworkHandler();
		NetworkHandler_tA8820CE19530E53BE6AFF793C612117070A4049E * L_30 = (NetworkHandler_tA8820CE19530E53BE6AFF793C612117070A4049E *)il2cpp_codegen_object_new(NetworkHandler_tA8820CE19530E53BE6AFF793C612117070A4049E_il2cpp_TypeInfo_var);
		NetworkHandler__ctor_m988FC7CFE15CE1F4D89809942E90C6F3904CC644(L_30, /*hidden argument*/NULL);
		V_15 = L_30;
		// var host = GetHost(projectConfiguration);
		RuntimeObject* L_31 = V_4;
		String_t* L_32;
		L_32 = AuthenticationPackageInitializer_GetHost_mDF8DD50B5511AB5F56C1D7564FEBE75E9B7CF198(__this, L_31, /*hidden argument*/NULL);
		// var networkClient = new AuthenticationNetworkClient(host,
		//     projectId,
		//     environment,
		//     networkHandler,
		//     accessToken);
		RuntimeObject* L_33 = V_3;
		RuntimeObject* L_34 = V_2;
		NetworkHandler_tA8820CE19530E53BE6AFF793C612117070A4049E * L_35 = V_15;
		AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * L_36 = V_10;
		AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * L_37 = (AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 *)il2cpp_codegen_object_new(AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65_il2cpp_TypeInfo_var);
		AuthenticationNetworkClient__ctor_m48F033732ADC17821C2590DC5B0106C6E7C6C941(L_37, L_32, L_33, L_34, L_35, L_36, /*hidden argument*/NULL);
		V_16 = L_37;
		// var authenticationService = new AuthenticationServiceInternal(
		//     settings,
		//     networkClient,
		//     profile,
		//     jwtDecoder,
		//     cache,
		//     scheduler,
		//     dateTime,
		//     metrics,
		//     accessToken,
		//     environmentId,
		//     playerId,
		//     sessionToken,
		//     wellKnownKeys);
		AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * L_38 = V_16;
		ProfileComponent_t84EEB27237207350AE110116875EAF9C246F4367 * L_39 = V_5;
		JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7 * L_40 = V_8;
		AuthenticationCache_tA2E1564466223510C0D1E90B490220DC6794556C * L_41 = V_9;
		RuntimeObject* L_42 = V_1;
		DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137 * L_43 = V_6;
		AuthenticationMetrics_tFC08B32361C09A77C8FCB40451DB189AC19E470F * L_44 = V_7;
		AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * L_45 = V_10;
		EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * L_46 = V_11;
		PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * L_47 = V_12;
		SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * L_48 = V_13;
		WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * L_49 = V_14;
		AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_50 = (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB *)il2cpp_codegen_object_new(AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB_il2cpp_TypeInfo_var);
		AuthenticationServiceInternal__ctor_m6B4CA57B637ECB1095D45652B0BB88DA21E6A9D8(L_50, L_2, L_38, L_39, L_40, L_41, L_42, L_43, L_44, L_45, L_46, L_47, L_48, L_49, /*hidden argument*/NULL);
		V_17 = L_50;
		// AuthenticationService.Instance = authenticationService;
		AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_51 = V_17;
		AuthenticationService_set_Instance_m9954CE13AD489EA393654415815BE7FD5F3B54FE_inline(L_51, /*hidden argument*/NULL);
		// registry.RegisterServiceComponent<IAccessToken>(authenticationService.AccessTokenComponent);
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_52 = ___registry0;
		AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_53 = V_17;
		NullCheck(L_53);
		AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * L_54;
		L_54 = AuthenticationServiceInternal_get_AccessTokenComponent_m2852F0AF5020BEE250234B898DB7656AE37D183C_inline(L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		CoreRegistry_RegisterServiceComponent_TisIAccessToken_tF9F28E25BF665453329EE5A3604EEE1DF64A946E_m0006FC4033AB549B9837562247BA8A8C91D81208(L_52, L_54, /*hidden argument*/CoreRegistry_RegisterServiceComponent_TisIAccessToken_tF9F28E25BF665453329EE5A3604EEE1DF64A946E_m0006FC4033AB549B9837562247BA8A8C91D81208_RuntimeMethod_var);
		// registry.RegisterServiceComponent<IEnvironmentId>(authenticationService.EnvironmentIdComponent);
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_55 = ___registry0;
		AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_56 = V_17;
		NullCheck(L_56);
		EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * L_57;
		L_57 = AuthenticationServiceInternal_get_EnvironmentIdComponent_m9E28929DD30DBF6130606021CA9D021FBB8A0AFD_inline(L_56, /*hidden argument*/NULL);
		NullCheck(L_55);
		CoreRegistry_RegisterServiceComponent_TisIEnvironmentId_tE5B54B0742EEB7D83B2DA3D5D5809328E3DDACFD_mFD6F3B51CA8A882CFD2C408E213796704F1BA9B2(L_55, L_57, /*hidden argument*/CoreRegistry_RegisterServiceComponent_TisIEnvironmentId_tE5B54B0742EEB7D83B2DA3D5D5809328E3DDACFD_mFD6F3B51CA8A882CFD2C408E213796704F1BA9B2_RuntimeMethod_var);
		// registry.RegisterServiceComponent<IPlayerId>(authenticationService.PlayerIdComponent);
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_58 = ___registry0;
		AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_59 = V_17;
		NullCheck(L_59);
		PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * L_60;
		L_60 = AuthenticationServiceInternal_get_PlayerIdComponent_m71FBCC6657B8435FF144D92C29524719CA1FAD92_inline(L_59, /*hidden argument*/NULL);
		NullCheck(L_58);
		CoreRegistry_RegisterServiceComponent_TisIPlayerId_t2C42E59B43666C8DE5F5A4F65C60B858DF1B5598_m809338902103045C8F4393E7C9A3EC5F16063C19(L_58, L_60, /*hidden argument*/CoreRegistry_RegisterServiceComponent_TisIPlayerId_t2C42E59B43666C8DE5F5A4F65C60B858DF1B5598_m809338902103045C8F4393E7C9A3EC5F16063C19_RuntimeMethod_var);
		// stopwatch.Stop();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_61 = V_0;
		NullCheck(L_61);
		Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63(L_61, /*hidden argument*/NULL);
		// metrics.SendPackageInitTimeMetric(stopwatch.Elapsed.TotalSeconds);
		AuthenticationMetrics_tFC08B32361C09A77C8FCB40451DB189AC19E470F * L_62 = V_7;
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_63 = V_0;
		NullCheck(L_63);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_64;
		L_64 = Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6(L_63, /*hidden argument*/NULL);
		V_18 = L_64;
		double L_65;
		L_65 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_18), /*hidden argument*/NULL);
		NullCheck(L_62);
		AuthenticationMetrics_SendPackageInitTimeMetric_m7DA1ACF0ECF4ACB93C29D1A41883B9251AB7FBB9(L_62, L_65, /*hidden argument*/NULL);
		// return Task.CompletedTask;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_66;
		L_66 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
		return L_66;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationPackageInitializer::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationPackageInitializer_Register_mCFD136CEA5A10E1B2E490B50C81875A5531F76CE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationPackageInitializer_t22DA26E4CD0607D467B231600BC67874239B88F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisIActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_m51ABFC91F8BCF53458512365902A1AD0918253AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_mBF202BD93F078AB0DBC6F6475911A94803F7BDBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_mF847B70AF7EAAEA3E25A97BF25E6F4866C51509D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisIMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_mAEF872A9C9AAA9A069D0C1FA3B186435E3859522_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_DependsOn_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_m8949C1DB57F3EBC5103BE16DE6D0A970E21E5A6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIAccessToken_tF9F28E25BF665453329EE5A3604EEE1DF64A946E_m15937E10E7B0AEAC71F06A6B162874F0A953D739_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIEnvironmentId_tE5B54B0742EEB7D83B2DA3D5D5809328E3DDACFD_m6491587D3C7A569D305B0D69FC92D129EF1629AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIPlayerId_t2C42E59B43666C8DE5F5A4F65C60B858DF1B5598_mC4A218643103832B50E1E82A02D187AD2634F946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterPackage_TisAuthenticationPackageInitializer_t22DA26E4CD0607D467B231600BC67874239B88F0_mDCCB9E397E2F6949319AD53843B5693D4E325A69_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CoreRegistry.Instance.RegisterPackage(new AuthenticationPackageInitializer())
		//     .DependsOn<IEnvironments>()
		//     .DependsOn<IActionScheduler>()
		//     .DependsOn<ICloudProjectId>()
		//     .DependsOn<IProjectConfiguration>()
		//     .DependsOn<IMetricsFactory>()
		//     .ProvidesComponent<IPlayerId>()
		//     .ProvidesComponent<IAccessToken>()
		//     .ProvidesComponent<IEnvironmentId>();
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_0;
		L_0 = CoreRegistry_get_Instance_m4D1C714218A28598060C670E87B7B59834A53510_inline(/*hidden argument*/NULL);
		AuthenticationPackageInitializer_t22DA26E4CD0607D467B231600BC67874239B88F0 * L_1 = (AuthenticationPackageInitializer_t22DA26E4CD0607D467B231600BC67874239B88F0 *)il2cpp_codegen_object_new(AuthenticationPackageInitializer_t22DA26E4CD0607D467B231600BC67874239B88F0_il2cpp_TypeInfo_var);
		AuthenticationPackageInitializer__ctor_mE12A4D9F92D00BDE46F0A8396C2CFF738161BB59(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_2;
		L_2 = CoreRegistry_RegisterPackage_TisAuthenticationPackageInitializer_t22DA26E4CD0607D467B231600BC67874239B88F0_mDCCB9E397E2F6949319AD53843B5693D4E325A69(L_0, L_1, /*hidden argument*/CoreRegistry_RegisterPackage_TisAuthenticationPackageInitializer_t22DA26E4CD0607D467B231600BC67874239B88F0_mDCCB9E397E2F6949319AD53843B5693D4E325A69_RuntimeMethod_var);
		V_0 = L_2;
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_3;
		L_3 = CoreRegistration_DependsOn_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_mF847B70AF7EAAEA3E25A97BF25E6F4866C51509D((CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *)(&V_0), /*hidden argument*/CoreRegistration_DependsOn_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_mF847B70AF7EAAEA3E25A97BF25E6F4866C51509D_RuntimeMethod_var);
		V_0 = L_3;
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_4;
		L_4 = CoreRegistration_DependsOn_TisIActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_m51ABFC91F8BCF53458512365902A1AD0918253AE((CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *)(&V_0), /*hidden argument*/CoreRegistration_DependsOn_TisIActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_m51ABFC91F8BCF53458512365902A1AD0918253AE_RuntimeMethod_var);
		V_0 = L_4;
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_5;
		L_5 = CoreRegistration_DependsOn_TisICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_mBF202BD93F078AB0DBC6F6475911A94803F7BDBA((CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *)(&V_0), /*hidden argument*/CoreRegistration_DependsOn_TisICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_mBF202BD93F078AB0DBC6F6475911A94803F7BDBA_RuntimeMethod_var);
		V_0 = L_5;
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_6;
		L_6 = CoreRegistration_DependsOn_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_m8949C1DB57F3EBC5103BE16DE6D0A970E21E5A6C((CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *)(&V_0), /*hidden argument*/CoreRegistration_DependsOn_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_m8949C1DB57F3EBC5103BE16DE6D0A970E21E5A6C_RuntimeMethod_var);
		V_0 = L_6;
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_7;
		L_7 = CoreRegistration_DependsOn_TisIMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_mAEF872A9C9AAA9A069D0C1FA3B186435E3859522((CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *)(&V_0), /*hidden argument*/CoreRegistration_DependsOn_TisIMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_mAEF872A9C9AAA9A069D0C1FA3B186435E3859522_RuntimeMethod_var);
		V_0 = L_7;
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_8;
		L_8 = CoreRegistration_ProvidesComponent_TisIPlayerId_t2C42E59B43666C8DE5F5A4F65C60B858DF1B5598_mC4A218643103832B50E1E82A02D187AD2634F946((CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *)(&V_0), /*hidden argument*/CoreRegistration_ProvidesComponent_TisIPlayerId_t2C42E59B43666C8DE5F5A4F65C60B858DF1B5598_mC4A218643103832B50E1E82A02D187AD2634F946_RuntimeMethod_var);
		V_0 = L_8;
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_9;
		L_9 = CoreRegistration_ProvidesComponent_TisIAccessToken_tF9F28E25BF665453329EE5A3604EEE1DF64A946E_m15937E10E7B0AEAC71F06A6B162874F0A953D739((CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *)(&V_0), /*hidden argument*/CoreRegistration_ProvidesComponent_TisIAccessToken_tF9F28E25BF665453329EE5A3604EEE1DF64A946E_m15937E10E7B0AEAC71F06A6B162874F0A953D739_RuntimeMethod_var);
		V_0 = L_9;
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_10;
		L_10 = CoreRegistration_ProvidesComponent_TisIEnvironmentId_tE5B54B0742EEB7D83B2DA3D5D5809328E3DDACFD_m6491587D3C7A569D305B0D69FC92D129EF1629AC((CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *)(&V_0), /*hidden argument*/CoreRegistration_ProvidesComponent_TisIEnvironmentId_tE5B54B0742EEB7D83B2DA3D5D5809328E3DDACFD_m6491587D3C7A569D305B0D69FC92D129EF1629AC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String Unity.Services.Authentication.AuthenticationPackageInitializer::GetHost(Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationPackageInitializer_GetHost_mDF8DD50B5511AB5F56C1D7564FEBE75E9B7CF198 (AuthenticationPackageInitializer_t22DA26E4CD0607D467B231600BC67874239B88F0 * __this, RuntimeObject* ___projectConfiguration0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E9F41A081334E4B02281220D1D08BE13787C133);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral717C4F750DC4509915CB09BBCF378D5BCAAE0384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD2602465D20536036625524AF1C558FA78A80ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECFDE2983A6856B5CACDDC405CED9C5C735543F1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// var cloudEnvironment = projectConfiguration?.GetString(k_CloudEnvironmentKey);
		RuntimeObject* L_0 = ___projectConfiguration0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0012;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___projectConfiguration0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(2 /* System.String Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetString(System.String,System.String) */, IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var, L_1, _stringLiteralAD2602465D20536036625524AF1C558FA78A80ED, (String_t*)NULL);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteral6E9F41A081334E4B02281220D1D08BE13787C133, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// return "https://player-auth-stg.services.api.unity.com";
		return _stringLiteral717C4F750DC4509915CB09BBCF378D5BCAAE0384;
	}

IL_0029:
	{
		// return "https://player-auth.services.api.unity.com";
		return _stringLiteralECFDE2983A6856B5CACDDC405CED9C5C735543F1;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationPackageInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationPackageInitializer__ctor_mE12A4D9F92D00BDE46F0A8396C2CFF738161BB59 (AuthenticationPackageInitializer_t22DA26E4CD0607D467B231600BC67874239B88F0 * __this, const RuntimeMethod* method)
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
// Unity.Services.Authentication.IAuthenticationService Unity.Services.Authentication.AuthenticationService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationService_get_Instance_m5EF78E2942538E65F08502BAD359705C95B2E3E6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationService_tEB201696C9477E5EC012BB947716CD6FA2FC7B0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_Instance == null)
		RuntimeObject* L_0 = ((AuthenticationService_tEB201696C9477E5EC012BB947716CD6FA2FC7B0F_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationService_tEB201696C9477E5EC012BB947716CD6FA2FC7B0F_il2cpp_TypeInfo_var))->get_s_Instance_0();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// throw new ServicesInitializationException("Singleton is not initialized. " +
		//     "Please call UnityServices.InitializeAsync() to initialize.");
		ServicesInitializationException_tB29CA123886F164D3642AC2F2EFEEA32AE80A0C1 * L_1 = (ServicesInitializationException_tB29CA123886F164D3642AC2F2EFEEA32AE80A0C1 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServicesInitializationException_tB29CA123886F164D3642AC2F2EFEEA32AE80A0C1_il2cpp_TypeInfo_var)));
		ServicesInitializationException__ctor_mA0E87B856358F94EB0512AD68016E32681239839(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral564C592A83288CFC0A06F4F169F973D869F140D9)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticationService_get_Instance_m5EF78E2942538E65F08502BAD359705C95B2E3E6_RuntimeMethod_var)));
	}

IL_0012:
	{
		// return s_Instance;
		RuntimeObject* L_2 = ((AuthenticationService_tEB201696C9477E5EC012BB947716CD6FA2FC7B0F_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationService_tEB201696C9477E5EC012BB947716CD6FA2FC7B0F_il2cpp_TypeInfo_var))->get_s_Instance_0();
		return L_2;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationService::set_Instance(Unity.Services.Authentication.IAuthenticationService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationService_set_Instance_m9954CE13AD489EA393654415815BE7FD5F3B54FE (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationService_tEB201696C9477E5EC012BB947716CD6FA2FC7B0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal set => s_Instance = value;
		RuntimeObject* L_0 = ___value0;
		((AuthenticationService_tEB201696C9477E5EC012BB947716CD6FA2FC7B0F_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationService_tEB201696C9477E5EC012BB947716CD6FA2FC7B0F_il2cpp_TypeInfo_var))->set_s_Instance_0(L_0);
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
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::add_SignInFailed(System.Action`1<Unity.Services.Core.RequestFailedException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_add_SignInFailed_mD883A0B2BDCDC61DC2B8B452403B0CFF3C149348 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * V_0 = NULL;
	Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * V_1 = NULL;
	Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * V_2 = NULL;
	{
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * L_0 = __this->get_SignInFailed_0();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * L_2 = V_1;
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326_il2cpp_TypeInfo_var));
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 ** L_5 = __this->get_address_of_SignInFailed_0();
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * L_6 = V_2;
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * L_7 = V_1;
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 *>((Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * L_9 = V_0;
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 *)L_9) == ((RuntimeObject*)(Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::remove_SignInFailed(System.Action`1<Unity.Services.Core.RequestFailedException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_remove_SignInFailed_m783B7A897867C1A3FF645BEC54AFFDD19E991C52 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * V_0 = NULL;
	Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * V_1 = NULL;
	Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * V_2 = NULL;
	{
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * L_0 = __this->get_SignInFailed_0();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * L_2 = V_1;
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326_il2cpp_TypeInfo_var));
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 ** L_5 = __this->get_address_of_SignInFailed_0();
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * L_6 = V_2;
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * L_7 = V_1;
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 *>((Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * L_9 = V_0;
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 *)L_9) == ((RuntimeObject*)(Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::add_SignedIn(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_add_SignedIn_m9FED235D0F551DC5267F5B7CB09516CCCD97D9CB (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_SignedIn_1();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_SignedIn_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::remove_SignedIn(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_remove_SignedIn_m2EDC3D05FF9F10B2AB13D579D0230D55BF756558 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_SignedIn_1();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_SignedIn_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::add_SignedOut(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_add_SignedOut_m1FDFBA4C4FE89368BDB2EA95C1F7DAE38355061A (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_SignedOut_2();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_SignedOut_2();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::remove_SignedOut(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_remove_SignedOut_m5AED5710CB22C3A2E5B1F62CCF3B3819BF97AC08 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_SignedOut_2();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_SignedOut_2();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::add_Expired(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_add_Expired_m18E81D98D2F0BA45A44D52CC807F882FCCD938F6 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_Expired_3();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_Expired_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::remove_Expired(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_remove_Expired_m696DBF1209B7FEC5077675AFB4889605C7F08D13 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_Expired_3();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_Expired_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Unity.Services.Authentication.AuthenticationServiceInternal::get_IsSignedIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticationServiceInternal_get_IsSignedIn_m2D49717E9D61D003457AB76D407104DBFC1FC074 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// State == AuthenticationState.Authorized ||
		// State == AuthenticationState.Refreshing ||
		// State == AuthenticationState.Expired;
		int32_t L_0;
		L_0 = AuthenticationServiceInternal_get_State_m540B2858E462412EE82083304EB498C369512E14_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1;
		L_1 = AuthenticationServiceInternal_get_State_m540B2858E462412EE82083304EB498C369512E14_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2;
		L_2 = AuthenticationServiceInternal_get_State_m540B2858E462412EE82083304EB498C369512E14_inline(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)4))? 1 : 0);
	}

IL_001c:
	{
		return (bool)1;
	}
}
// System.Boolean Unity.Services.Authentication.AuthenticationServiceInternal::get_SessionTokenExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticationServiceInternal_get_SessionTokenExists_m4FDEE6A9D6F87DF423746ACBA790D747137778DD (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// public bool SessionTokenExists => !string.IsNullOrEmpty(SessionTokenComponent.SessionToken);
		SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * L_0;
		L_0 = AuthenticationServiceInternal_get_SessionTokenComponent_m150C338CB83BC5464384ABE379924EF79197A92C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = SessionTokenComponent_get_SessionToken_mBE753CDE8271DB7F676DDD98A2AA47F9E8CADC22(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Unity.Services.Authentication.AuthenticationServiceInternal::get_PlayerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationServiceInternal_get_PlayerId_mCCA768C662D013F13C29546E0AE1F609EF974ACB (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// public string PlayerId => PlayerIdComponent.PlayerId;
		PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * L_0;
		L_0 = AuthenticationServiceInternal_get_PlayerIdComponent_m71FBCC6657B8435FF144D92C29524719CA1FAD92_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = PlayerIdComponent_get_PlayerId_m4957B73DF1907391FEDA66DC946AC1758B67B2D5(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::set_PlayerInfo(Unity.Services.Authentication.PlayerInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_PlayerInfo_mDC51AF45FACB6A62AAF39346CDF474186B49537B (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 * ___value0, const RuntimeMethod* method)
{
	{
		// public PlayerInfo PlayerInfo { get; internal set; }
		PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 * L_0 = ___value0;
		__this->set_U3CPlayerInfoU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Nullable`1<System.Int64> Unity.Services.Authentication.AuthenticationServiceInternal::get_ExpirationActionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  AuthenticationServiceInternal_get_ExpirationActionId_mB1BFDC05A1FA873FB9AC27BFF6B11B0B9749EA54 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// internal long? ExpirationActionId { get; set; }
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_0 = __this->get_U3CExpirationActionIdU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::set_ExpirationActionId(System.Nullable`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_ExpirationActionId_mABA89665FBBD8124A496811E7AC9659D0113E765 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___value0, const RuntimeMethod* method)
{
	{
		// internal long? ExpirationActionId { get; set; }
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_0 = ___value0;
		__this->set_U3CExpirationActionIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Nullable`1<System.Int64> Unity.Services.Authentication.AuthenticationServiceInternal::get_RefreshActionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  AuthenticationServiceInternal_get_RefreshActionId_m36939AD0C220FA3733F31C7A3B73AF99834CC20C (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// internal long? RefreshActionId { get; set; }
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_0 = __this->get_U3CRefreshActionIdU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::set_RefreshActionId(System.Nullable`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_RefreshActionId_m21A7BE58654368157A696B9731F9AA1412C070A9 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___value0, const RuntimeMethod* method)
{
	{
		// internal long? RefreshActionId { get; set; }
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_0 = ___value0;
		__this->set_U3CRefreshActionIdU3Ek__BackingField_6(L_0);
		return;
	}
}
// Unity.Services.Authentication.AccessTokenComponent Unity.Services.Authentication.AuthenticationServiceInternal::get_AccessTokenComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * AuthenticationServiceInternal_get_AccessTokenComponent_m2852F0AF5020BEE250234B898DB7656AE37D183C (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// internal AccessTokenComponent AccessTokenComponent { get; }
		AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * L_0 = __this->get_U3CAccessTokenComponentU3Ek__BackingField_7();
		return L_0;
	}
}
// Unity.Services.Authentication.EnvironmentIdComponent Unity.Services.Authentication.AuthenticationServiceInternal::get_EnvironmentIdComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * AuthenticationServiceInternal_get_EnvironmentIdComponent_m9E28929DD30DBF6130606021CA9D021FBB8A0AFD (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// internal EnvironmentIdComponent EnvironmentIdComponent { get; }
		EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * L_0 = __this->get_U3CEnvironmentIdComponentU3Ek__BackingField_8();
		return L_0;
	}
}
// Unity.Services.Authentication.PlayerIdComponent Unity.Services.Authentication.AuthenticationServiceInternal::get_PlayerIdComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * AuthenticationServiceInternal_get_PlayerIdComponent_m71FBCC6657B8435FF144D92C29524719CA1FAD92 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// internal PlayerIdComponent PlayerIdComponent { get; }
		PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * L_0 = __this->get_U3CPlayerIdComponentU3Ek__BackingField_9();
		return L_0;
	}
}
// Unity.Services.Authentication.SessionTokenComponent Unity.Services.Authentication.AuthenticationServiceInternal::get_SessionTokenComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * AuthenticationServiceInternal_get_SessionTokenComponent_m150C338CB83BC5464384ABE379924EF79197A92C (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// internal SessionTokenComponent SessionTokenComponent { get; }
		SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * L_0 = __this->get_U3CSessionTokenComponentU3Ek__BackingField_10();
		return L_0;
	}
}
// Unity.Services.Authentication.WellKnownKeysComponent Unity.Services.Authentication.AuthenticationServiceInternal::get_WellKnownKeysComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * AuthenticationServiceInternal_get_WellKnownKeysComponent_m6ED68B8DC812AE0D662679F619EB1E00CB46FD7E (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// internal WellKnownKeysComponent WellKnownKeysComponent { get; }
		WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * L_0 = __this->get_U3CWellKnownKeysComponentU3Ek__BackingField_11();
		return L_0;
	}
}
// Unity.Services.Authentication.AuthenticationState Unity.Services.Authentication.AuthenticationServiceInternal::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticationServiceInternal_get_State_m540B2858E462412EE82083304EB498C369512E14 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// internal AuthenticationState State { get; set; }
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::set_State(Unity.Services.Authentication.AuthenticationState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_State_m1258E7117ABE0843B4C65DDBADDC1328D1A1F0FA (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal AuthenticationState State { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_12(L_0);
		return;
	}
}
// Unity.Services.Authentication.IAuthenticationSettings Unity.Services.Authentication.AuthenticationServiceInternal::get_Settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationServiceInternal_get_Settings_m207CE9E7E79C996BA697C5AF82154C51CAC4F852 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// internal IAuthenticationSettings Settings { get; }
		RuntimeObject* L_0 = __this->get_U3CSettingsU3Ek__BackingField_13();
		return L_0;
	}
}
// Unity.Services.Authentication.IAuthenticationNetworkClient Unity.Services.Authentication.AuthenticationServiceInternal::get_NetworkClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationServiceInternal_get_NetworkClient_mB5524A9B13CB5CD1B5583FA68344B9DA22ED128C (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// internal IAuthenticationNetworkClient NetworkClient { get; set; }
		RuntimeObject* L_0 = __this->get_U3CNetworkClientU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::set_NetworkClient(Unity.Services.Authentication.IAuthenticationNetworkClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_NetworkClient_m11CAD22C0C19EB50172B7992617E7816386F047C (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// internal IAuthenticationNetworkClient NetworkClient { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CNetworkClientU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::.ctor(Unity.Services.Authentication.IAuthenticationSettings,Unity.Services.Authentication.IAuthenticationNetworkClient,Unity.Services.Authentication.IProfile,Unity.Services.Authentication.IJwtDecoder,Unity.Services.Authentication.IAuthenticationCache,Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Authentication.IDateTimeWrapper,Unity.Services.Authentication.IAuthenticationMetrics,Unity.Services.Authentication.AccessTokenComponent,Unity.Services.Authentication.EnvironmentIdComponent,Unity.Services.Authentication.PlayerIdComponent,Unity.Services.Authentication.SessionTokenComponent,Unity.Services.Authentication.WellKnownKeysComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal__ctor_m6B4CA57B637ECB1095D45652B0BB88DA21E6A9D8 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, RuntimeObject* ___settings0, RuntimeObject* ___networkClient1, RuntimeObject* ___profile2, RuntimeObject* ___jwtDecoder3, RuntimeObject* ___cache4, RuntimeObject* ___scheduler5, RuntimeObject* ___dateTime6, RuntimeObject* ___metrics7, AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * ___accessToken8, EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * ___environmentId9, PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * ___playerId10, SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * ___sessionToken11, WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * ___wellKnownKeys12, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationServiceInternal_U3C_ctorU3Eb__75_0_m3BDDCA22E45BD703BF5A36EE29640E25A705DE09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal AuthenticationServiceInternal(IAuthenticationSettings settings,
		//                                        IAuthenticationNetworkClient networkClient,
		//                                        IProfile profile,
		//                                        IJwtDecoder jwtDecoder,
		//                                        IAuthenticationCache cache,
		//                                        IActionScheduler scheduler,
		//                                        IDateTimeWrapper dateTime,
		//                                        IAuthenticationMetrics metrics,
		//                                        AccessTokenComponent accessToken,
		//                                        EnvironmentIdComponent environmentId,
		//                                        PlayerIdComponent playerId,
		//                                        SessionTokenComponent sessionToken,
		//                                        WellKnownKeysComponent wellKnownKeys)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Settings = settings;
		RuntimeObject* L_0 = ___settings0;
		__this->set_U3CSettingsU3Ek__BackingField_13(L_0);
		// NetworkClient = networkClient;
		RuntimeObject* L_1 = ___networkClient1;
		AuthenticationServiceInternal_set_NetworkClient_m11CAD22C0C19EB50172B7992617E7816386F047C_inline(__this, L_1, /*hidden argument*/NULL);
		// m_Profile = profile;
		RuntimeObject* L_2 = ___profile2;
		__this->set_m_Profile_15(L_2);
		// m_JwtDecoder = jwtDecoder;
		RuntimeObject* L_3 = ___jwtDecoder3;
		__this->set_m_JwtDecoder_16(L_3);
		// m_Cache = cache;
		RuntimeObject* L_4 = ___cache4;
		__this->set_m_Cache_17(L_4);
		// m_Scheduler = scheduler;
		RuntimeObject* L_5 = ___scheduler5;
		__this->set_m_Scheduler_18(L_5);
		// m_DateTime = dateTime;
		RuntimeObject* L_6 = ___dateTime6;
		__this->set_m_DateTime_19(L_6);
		// m_Metrics = metrics;
		RuntimeObject* L_7 = ___metrics7;
		__this->set_m_Metrics_20(L_7);
		// AccessTokenComponent = accessToken;
		AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * L_8 = ___accessToken8;
		__this->set_U3CAccessTokenComponentU3Ek__BackingField_7(L_8);
		// EnvironmentIdComponent = environmentId;
		EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * L_9 = ___environmentId9;
		__this->set_U3CEnvironmentIdComponentU3Ek__BackingField_8(L_9);
		// PlayerIdComponent = playerId;
		PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * L_10 = ___playerId10;
		__this->set_U3CPlayerIdComponentU3Ek__BackingField_9(L_10);
		// SessionTokenComponent = sessionToken;
		SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * L_11 = ___sessionToken11;
		__this->set_U3CSessionTokenComponentU3Ek__BackingField_10(L_11);
		// WellKnownKeysComponent = wellKnownKeys;
		WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * L_12 = ___wellKnownKeys12;
		__this->set_U3CWellKnownKeysComponentU3Ek__BackingField_11(L_12);
		// State = AuthenticationState.SignedOut;
		AuthenticationServiceInternal_set_State_m1258E7117ABE0843B4C65DDBADDC1328D1A1F0FA_inline(__this, 0, /*hidden argument*/NULL);
		// MigrateCache();
		AuthenticationServiceInternal_MigrateCache_mF008EE253B5FF4F17F42A9C6E61E241FC7115428(__this, /*hidden argument*/NULL);
		// Expired += () => m_Metrics.SendExpiredSessionMetric();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_13 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_13, __this, (intptr_t)((intptr_t)AuthenticationServiceInternal_U3C_ctorU3Eb__75_0_m3BDDCA22E45BD703BF5A36EE29640E25A705DE09_RuntimeMethod_var), /*hidden argument*/NULL);
		AuthenticationServiceInternal_add_Expired_m18E81D98D2F0BA45A44D52CC807F882FCCD938F6(__this, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::SignInAnonymouslyAsync(Unity.Services.Authentication.SignInOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AuthenticationServiceInternal_SignInAnonymouslyAsync_mB33E512272157809CE02B953C3DD0E9E881E6158 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, SignInOptions_tFF19EE3FE0A9A233A1AFDBADA8975DD5BA28DDED * ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m6F4A4EBA1F8349FFDFB22268FB766AD34403C503_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationNetworkClient_t466AAAF8599451A867223E528F939CD3143FB3A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass76_0_U3CSignInAnonymouslyAsyncU3Eb__0_mC7E760D3EB52567D4DE5C0B2DE263173FF3A82A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass76_0_tDEF0AEC69CC4EF20E39A0B4DF5F220A8A555B4A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass76_0_tDEF0AEC69CC4EF20E39A0B4DF5F220A8A555B4A8 * V_0 = NULL;
	RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * V_1 = NULL;
	RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * V_2 = NULL;
	RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * V_3 = NULL;
	int32_t G_B9_0 = 0;
	{
		U3CU3Ec__DisplayClass76_0_tDEF0AEC69CC4EF20E39A0B4DF5F220A8A555B4A8 * L_0 = (U3CU3Ec__DisplayClass76_0_tDEF0AEC69CC4EF20E39A0B4DF5F220A8A555B4A8 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass76_0_tDEF0AEC69CC4EF20E39A0B4DF5F220A8A555B4A8_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass76_0__ctor_mD4B48FB6A86272D0A578DE4915F8CD38026E327B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass76_0_tDEF0AEC69CC4EF20E39A0B4DF5F220A8A555B4A8 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		// if (State == AuthenticationState.SignedOut || State == AuthenticationState.Expired)
		int32_t L_2;
		L_2 = AuthenticationServiceInternal_get_State_m540B2858E462412EE82083304EB498C369512E14_inline(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3;
		L_3 = AuthenticationServiceInternal_get_State_m540B2858E462412EE82083304EB498C369512E14_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_00af;
		}
	}

IL_0021:
	{
		// if (SessionTokenExists)
		bool L_4;
		L_4 = AuthenticationServiceInternal_get_SessionTokenExists_m4FDEE6A9D6F87DF423746ACBA790D747137778DD(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0071;
		}
	}
	{
		// var sessionToken = SessionTokenComponent.SessionToken;
		U3CU3Ec__DisplayClass76_0_tDEF0AEC69CC4EF20E39A0B4DF5F220A8A555B4A8 * L_5 = V_0;
		SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * L_6;
		L_6 = AuthenticationServiceInternal_get_SessionTokenComponent_m150C338CB83BC5464384ABE379924EF79197A92C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = SessionTokenComponent_get_SessionToken_mBE753CDE8271DB7F676DDD98A2AA47F9E8CADC22(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_sessionToken_1(L_7);
		// if (string.IsNullOrEmpty(sessionToken))
		U3CU3Ec__DisplayClass76_0_tDEF0AEC69CC4EF20E39A0B4DF5F220A8A555B4A8 * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_sessionToken_1();
		bool L_10;
		L_10 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005d;
		}
	}
	{
		// var exception = BuildClientSessionTokenNotExistsException();
		RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_11;
		L_11 = AuthenticationServiceInternal_BuildClientSessionTokenNotExistsException_mF8559C94D9FC86C9EE9FF63B53244E6FBEE1D84A(__this, /*hidden argument*/NULL);
		V_1 = L_11;
		// SendSignInFailedEvent(exception, true);
		RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_12 = V_1;
		AuthenticationServiceInternal_SendSignInFailedEvent_m5715005540D9E4418F07FCE528D3136099DE54ED(__this, L_12, (bool)1, /*hidden argument*/NULL);
		// return Task.FromException(exception);
		RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_14;
		L_14 = Task_FromException_m601DE8188AC96059BD00E85AB276E48F4EB9ABEE(L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_005d:
	{
		// return HandleSignInRequestAsync(() => NetworkClient.SignInWithSessionTokenAsync(sessionToken));
		U3CU3Ec__DisplayClass76_0_tDEF0AEC69CC4EF20E39A0B4DF5F220A8A555B4A8 * L_15 = V_0;
		Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9 * L_16 = (Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9 *)il2cpp_codegen_object_new(Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9_il2cpp_TypeInfo_var);
		Func_1__ctor_m6F4A4EBA1F8349FFDFB22268FB766AD34403C503(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass76_0_U3CSignInAnonymouslyAsyncU3Eb__0_mC7E760D3EB52567D4DE5C0B2DE263173FF3A82A2_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m6F4A4EBA1F8349FFDFB22268FB766AD34403C503_RuntimeMethod_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_17;
		L_17 = AuthenticationServiceInternal_HandleSignInRequestAsync_m0700784B3D9570AC2037C68948BB75C8E158049C(__this, L_16, (bool)1, /*hidden argument*/NULL);
		return L_17;
	}

IL_0071:
	{
		// if (options?.CreateAccount ?? true)
		SignInOptions_tFF19EE3FE0A9A233A1AFDBADA8975DD5BA28DDED * L_18 = ___options0;
		if (L_18)
		{
			goto IL_0077;
		}
	}
	{
		G_B9_0 = 1;
		goto IL_007d;
	}

IL_0077:
	{
		SignInOptions_tFF19EE3FE0A9A233A1AFDBADA8975DD5BA28DDED * L_19 = ___options0;
		NullCheck(L_19);
		bool L_20;
		L_20 = SignInOptions_get_CreateAccount_m57FD32C6C36343090735D3DA29856088F58E250F_inline(L_19, /*hidden argument*/NULL);
		G_B9_0 = ((int32_t)(L_20));
	}

IL_007d:
	{
		if (!G_B9_0)
		{
			goto IL_0099;
		}
	}
	{
		// return HandleSignInRequestAsync(NetworkClient.SignInAnonymouslyAsync);
		RuntimeObject* L_21;
		L_21 = AuthenticationServiceInternal_get_NetworkClient_mB5524A9B13CB5CD1B5583FA68344B9DA22ED128C_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_22 = L_21;
		Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9 * L_23 = (Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9 *)il2cpp_codegen_object_new(Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9_il2cpp_TypeInfo_var);
		Func_1__ctor_m6F4A4EBA1F8349FFDFB22268FB766AD34403C503(L_23, L_22, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_22, 1, IAuthenticationNetworkClient_t466AAAF8599451A867223E528F939CD3143FB3A9_il2cpp_TypeInfo_var)), /*hidden argument*/Func_1__ctor_m6F4A4EBA1F8349FFDFB22268FB766AD34403C503_RuntimeMethod_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_24;
		L_24 = AuthenticationServiceInternal_HandleSignInRequestAsync_m0700784B3D9570AC2037C68948BB75C8E158049C(__this, L_23, (bool)1, /*hidden argument*/NULL);
		return L_24;
	}

IL_0099:
	{
		// var exception = BuildClientSessionTokenNotExistsException();
		RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_25;
		L_25 = AuthenticationServiceInternal_BuildClientSessionTokenNotExistsException_mF8559C94D9FC86C9EE9FF63B53244E6FBEE1D84A(__this, /*hidden argument*/NULL);
		V_2 = L_25;
		// SendSignInFailedEvent(exception, true);
		RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_26 = V_2;
		AuthenticationServiceInternal_SendSignInFailedEvent_m5715005540D9E4418F07FCE528D3136099DE54ED(__this, L_26, (bool)1, /*hidden argument*/NULL);
		// return Task.FromException(exception);
		RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_27 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_28;
		L_28 = Task_FromException_m601DE8188AC96059BD00E85AB276E48F4EB9ABEE(L_27, /*hidden argument*/NULL);
		return L_28;
	}

IL_00af:
	{
		// var exception = BuildClientInvalidStateException();
		RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_29;
		L_29 = AuthenticationServiceInternal_BuildClientInvalidStateException_m5E09C8BDB689926B8D9D96670047561FF4732767(__this, /*hidden argument*/NULL);
		V_3 = L_29;
		// SendSignInFailedEvent(exception, false);
		RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_30 = V_3;
		AuthenticationServiceInternal_SendSignInFailedEvent_m5715005540D9E4418F07FCE528D3136099DE54ED(__this, L_30, (bool)0, /*hidden argument*/NULL);
		// return Task.FromException(exception);
		RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_31 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_32;
		L_32 = Task_FromException_m601DE8188AC96059BD00E85AB276E48F4EB9ABEE(L_31, /*hidden argument*/NULL);
		return L_32;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::SignOut(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_SignOut_m7EA7890AF71F36C5C3B859F2A5B107866C9202B0 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, bool ___clearCredentials0, const RuntimeMethod* method)
{
	{
		// AccessTokenComponent.Clear();
		AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * L_0;
		L_0 = AuthenticationServiceInternal_get_AccessTokenComponent_m2852F0AF5020BEE250234B898DB7656AE37D183C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		AccessTokenComponent_Clear_m1CAF5EED0646956500FC45ADDB0BF966CE623CD7(L_0, /*hidden argument*/NULL);
		// PlayerInfo = null;
		AuthenticationServiceInternal_set_PlayerInfo_mDC51AF45FACB6A62AAF39346CDF474186B49537B_inline(__this, (PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 *)NULL, /*hidden argument*/NULL);
		// if (clearCredentials)
		bool L_1 = ___clearCredentials0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// SessionTokenComponent.Clear();
		SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * L_2;
		L_2 = AuthenticationServiceInternal_get_SessionTokenComponent_m150C338CB83BC5464384ABE379924EF79197A92C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		SessionTokenComponent_Clear_m27747BAF3B5B4C158E801D23884800A8B2B51029(L_2, /*hidden argument*/NULL);
		// PlayerIdComponent.Clear();
		PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * L_3;
		L_3 = AuthenticationServiceInternal_get_PlayerIdComponent_m71FBCC6657B8435FF144D92C29524719CA1FAD92_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		PlayerIdComponent_Clear_m248222E0C66BB987DCAC4BD3C1601ACE6C6FE82C(L_3, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// CancelScheduledRefresh();
		AuthenticationServiceInternal_CancelScheduledRefresh_m64EC0FA0638CF96C4C71C14C215F59709CDBDA7B(__this, /*hidden argument*/NULL);
		// CancelScheduledExpiration();
		AuthenticationServiceInternal_CancelScheduledExpiration_mC289D37D7143CDCD2B6D6ED537EF6CECB5A99415(__this, /*hidden argument*/NULL);
		// ChangeState(AuthenticationState.SignedOut);
		AuthenticationServiceInternal_ChangeState_m667E7EC4D3723293438F62CDA24584F482C80A68(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::GetWellKnownKeysAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AuthenticationServiceInternal_GetWellKnownKeysAsync_m51864139F01BE531A3C9EE608912D24B65AF60E7 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510_m76181BA44286F95A6C3DBFEA5A6828A87A4F509A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_0;
		L_0 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510  L_1 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_Start_TisU3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510_m76181BA44286F95A6C3DBFEA5A6828A87A4F509A((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510_m76181BA44286F95A6C3DBFEA5A6828A87A4F509A_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::RefreshAccessTokenAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AuthenticationServiceInternal_RefreshAccessTokenAsync_mB70761EF9C337D4FF7EE72454D35DC7C5790E146 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (IsSignedIn)
		bool L_0;
		L_0 = AuthenticationServiceInternal_get_IsSignedIn_m2D49717E9D61D003457AB76D407104DBFC1FC074(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		// if (State == AuthenticationState.Expired)
		int32_t L_1;
		L_1 = AuthenticationServiceInternal_get_State_m540B2858E462412EE82083304EB498C369512E14_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0017;
		}
	}
	{
		// return Task.CompletedTask;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2;
		L_2 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		// var sessionToken = SessionTokenComponent.SessionToken;
		SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * L_3;
		L_3 = AuthenticationServiceInternal_get_SessionTokenComponent_m150C338CB83BC5464384ABE379924EF79197A92C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = SessionTokenComponent_get_SessionToken_mBE753CDE8271DB7F676DDD98A2AA47F9E8CADC22(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (string.IsNullOrEmpty(sessionToken))
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// return Task.CompletedTask;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
		L_7 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
		return L_7;
	}

IL_0031:
	{
		// return StartRefreshAsync(sessionToken);
		String_t* L_8 = V_0;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
		L_9 = AuthenticationServiceInternal_StartRefreshAsync_m3CAB0A3B1E5E564C897C9A508FABDB1CBF4F51CA(__this, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0039:
	{
		// return Task.CompletedTask;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_10;
		L_10 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
		return L_10;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::HandleSignInRequestAsync(System.Func`1<System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse>>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AuthenticationServiceInternal_HandleSignInRequestAsync_m0700784B3D9570AC2037C68948BB75C8E158049C (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9 * ___signInRequest0, bool ___enableRefresh1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9_mB7A21A30C63CF5FEED0BA56FFC529E251F94B5E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9 * L_0 = ___signInRequest0;
		(&V_0)->set_signInRequest_3(L_0);
		bool L_1 = ___enableRefresh1;
		(&V_0)->set_enableRefresh_4(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_2;
		L_2 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9  L_3 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_4 = L_3.get_U3CU3Et__builder_1();
		V_1 = L_4;
		AsyncTaskMethodBuilder_Start_TisU3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9_mB7A21A30C63CF5FEED0BA56FFC529E251F94B5E4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9_mB7A21A30C63CF5FEED0BA56FFC529E251F94B5E4_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
		L_6 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Threading.Tasks.Task Unity.Services.Authentication.AuthenticationServiceInternal::StartRefreshAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AuthenticationServiceInternal_StartRefreshAsync_m3CAB0A3B1E5E564C897C9A508FABDB1CBF4F51CA (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, String_t* ___sessionToken0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804_m3BE96F5B33D9D75FEC29B56003965ED539A06715_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		String_t* L_0 = ___sessionToken0;
		(&V_0)->set_sessionToken_3(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_1;
		L_1 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804  L_2 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncTaskMethodBuilder_Start_TisU3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804_m3BE96F5B33D9D75FEC29B56003965ED539A06715((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804_m3BE96F5B33D9D75FEC29B56003965ED539A06715_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::CompleteSignIn(Unity.Services.Authentication.SignInResponse,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_CompleteSignIn_mC63035B84EABA2C107DD10FB6895261F596DCFBC (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * ___response0, bool ___enableRefresh1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisString_t_m7B8EA6803D4985135A95AE73079A935FCAAAEF5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m6397C103AFDCE68F75EDF44FB493A9B6651F7AFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationSettings_tDF3C2B09002AA87E427B93A667A1F46921EA0339_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDateTimeWrapper_t911CA57B07090FBD7DEF498C609AC44C20971C1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJwtDecoder_Decode_TisAccessToken_t7BE9F906398E1D7FBBF15ABE169B4FBB03BD00DD_m3C169CE748C3E8F6A01A819FFD6C2D7EFC8A02B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCompleteSignInU3Eb__110_0_m64200A83BF0406C3575F1100582395123CD94490_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AccessToken_t7BE9F906398E1D7FBBF15ABE169B4FBB03BD00DD * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	RuntimeObject* G_B2_2 = NULL;
	WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	RuntimeObject* G_B1_2 = NULL;
	WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	RuntimeObject* G_B3_2 = NULL;
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * G_B8_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_1 = NULL;
	EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * G_B8_2 = NULL;
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * G_B7_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_1 = NULL;
	EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * G_B7_2 = NULL;
	String_t* G_B10_0 = NULL;
	EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * G_B10_1 = NULL;
	String_t* G_B9_0 = NULL;
	EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * G_B9_1 = NULL;
	String_t* G_B11_0 = NULL;
	EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * G_B11_1 = NULL;
	AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * G_B14_0 = NULL;
	AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * G_B13_0 = NULL;
	PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 * G_B15_0 = NULL;
	AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * G_B15_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// var accessTokenDecoded = m_JwtDecoder.Decode<AccessToken>(response.IdToken, WellKnownKeysComponent?.Keys);
			RuntimeObject* L_0 = __this->get_m_JwtDecoder_16();
			SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * L_1 = ___response0;
			NullCheck(L_1);
			String_t* L_2 = L_1->get_IdToken_1();
			WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * L_3;
			L_3 = AuthenticationServiceInternal_get_WellKnownKeysComponent_m6ED68B8DC812AE0D662679F619EB1E00CB46FD7E_inline(__this, /*hidden argument*/NULL);
			WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * L_4 = L_3;
			G_B1_0 = L_4;
			G_B1_1 = L_2;
			G_B1_2 = L_0;
			if (L_4)
			{
				G_B2_0 = L_4;
				G_B2_1 = L_2;
				G_B2_2 = L_0;
				goto IL_0019;
			}
		}

IL_0015:
		{
			G_B3_0 = ((WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA*)(NULL));
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			goto IL_001e;
		}

IL_0019:
		{
			NullCheck(G_B2_0);
			WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* L_5;
			L_5 = WellKnownKeysComponent_get_Keys_m651DBE0F1FFFD2929ADC5BDC8126819EFBF46423_inline(G_B2_0, /*hidden argument*/NULL);
			G_B3_0 = L_5;
			G_B3_1 = G_B2_1;
			G_B3_2 = G_B2_2;
		}

IL_001e:
		{
			NullCheck(G_B3_2);
			AccessToken_t7BE9F906398E1D7FBBF15ABE169B4FBB03BD00DD * L_6;
			L_6 = GenericInterfaceFuncInvoker2< AccessToken_t7BE9F906398E1D7FBBF15ABE169B4FBB03BD00DD *, String_t*, WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* >::Invoke(IJwtDecoder_Decode_TisAccessToken_t7BE9F906398E1D7FBBF15ABE169B4FBB03BD00DD_m3C169CE748C3E8F6A01A819FFD6C2D7EFC8A02B0_RuntimeMethod_var, G_B3_2, G_B3_1, G_B3_0);
			V_0 = L_6;
			// if (accessTokenDecoded == null)
			AccessToken_t7BE9F906398E1D7FBBF15ABE169B4FBB03BD00DD * L_7 = V_0;
			if (L_7)
			{
				goto IL_0035;
			}
		}

IL_0027:
		{
			// throw AuthenticationException.Create(CommonErrorCodes.InvalidToken, "Failed to decode and verify access token.");
			RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_8;
			L_8 = AuthenticationException_Create_m125C5AB22F4E35B2F43FC63C7715FD615AE0788D(((int32_t)51), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral069E76898DCED02EA1198EDF60D34460ED12B74D)), (Exception_t *)NULL, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticationServiceInternal_CompleteSignIn_mC63035B84EABA2C107DD10FB6895261F596DCFBC_RuntimeMethod_var)));
		}

IL_0035:
		{
			// AccessTokenComponent.AccessToken = response.IdToken;
			AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * L_9;
			L_9 = AuthenticationServiceInternal_get_AccessTokenComponent_m2852F0AF5020BEE250234B898DB7656AE37D183C_inline(__this, /*hidden argument*/NULL);
			SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * L_10 = ___response0;
			NullCheck(L_10);
			String_t* L_11 = L_10->get_IdToken_1();
			NullCheck(L_9);
			AccessTokenComponent_set_AccessToken_mCE8771733C9E04D7CC5C568581800BAB07180E75_inline(L_9, L_11, /*hidden argument*/NULL);
			// if (accessTokenDecoded.Audience != null)
			AccessToken_t7BE9F906398E1D7FBBF15ABE169B4FBB03BD00DD * L_12 = V_0;
			NullCheck(L_12);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12->get_Audience_1();
			if (!L_13)
			{
				goto IL_0090;
			}
		}

IL_004e:
		{
			// EnvironmentIdComponent.EnvironmentId = accessTokenDecoded.Audience.FirstOrDefault(s => s.StartsWith("envId:"))?.Substring(6);
			EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * L_14;
			L_14 = AuthenticationServiceInternal_get_EnvironmentIdComponent_m9E28929DD30DBF6130606021CA9D021FBB8A0AFD_inline(__this, /*hidden argument*/NULL);
			AccessToken_t7BE9F906398E1D7FBBF15ABE169B4FBB03BD00DD * L_15 = V_0;
			NullCheck(L_15);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15->get_Audience_1();
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB_il2cpp_TypeInfo_var);
			Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * L_17 = ((U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB_il2cpp_TypeInfo_var))->get_U3CU3E9__110_0_1();
			Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * L_18 = L_17;
			G_B7_0 = L_18;
			G_B7_1 = L_16;
			G_B7_2 = L_14;
			if (L_18)
			{
				G_B8_0 = L_18;
				G_B8_1 = L_16;
				G_B8_2 = L_14;
				goto IL_0079;
			}
		}

IL_0062:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB_il2cpp_TypeInfo_var);
			U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB * L_19 = ((U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * L_20 = (Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D *)il2cpp_codegen_object_new(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D_il2cpp_TypeInfo_var);
			Func_2__ctor_m6397C103AFDCE68F75EDF44FB493A9B6651F7AFE(L_20, L_19, (intptr_t)((intptr_t)U3CU3Ec_U3CCompleteSignInU3Eb__110_0_m64200A83BF0406C3575F1100582395123CD94490_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m6397C103AFDCE68F75EDF44FB493A9B6651F7AFE_RuntimeMethod_var);
			Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * L_21 = L_20;
			((U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB_il2cpp_TypeInfo_var))->set_U3CU3E9__110_0_1(L_21);
			G_B8_0 = L_21;
			G_B8_1 = G_B7_1;
			G_B8_2 = G_B7_2;
		}

IL_0079:
		{
			String_t* L_22;
			L_22 = Enumerable_FirstOrDefault_TisString_t_m7B8EA6803D4985135A95AE73079A935FCAAAEF5A((RuntimeObject*)(RuntimeObject*)G_B8_1, G_B8_0, /*hidden argument*/Enumerable_FirstOrDefault_TisString_t_m7B8EA6803D4985135A95AE73079A935FCAAAEF5A_RuntimeMethod_var);
			String_t* L_23 = L_22;
			G_B9_0 = L_23;
			G_B9_1 = G_B8_2;
			if (L_23)
			{
				G_B10_0 = L_23;
				G_B10_1 = G_B8_2;
				goto IL_0085;
			}
		}

IL_0081:
		{
			G_B11_0 = ((String_t*)(NULL));
			G_B11_1 = G_B9_1;
			goto IL_008b;
		}

IL_0085:
		{
			NullCheck(G_B10_0);
			String_t* L_24;
			L_24 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(G_B10_0, 6, /*hidden argument*/NULL);
			G_B11_0 = L_24;
			G_B11_1 = G_B10_1;
		}

IL_008b:
		{
			NullCheck(G_B11_1);
			EnvironmentIdComponent_set_EnvironmentId_m64287B97B7875A6D017F110FCB14575DF466BAE7_inline(G_B11_1, G_B11_0, /*hidden argument*/NULL);
		}

IL_0090:
		{
			// PlayerInfo = response.User != null ? new PlayerInfo(response.User) : new PlayerInfo(response.UserId);
			SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * L_25 = ___response0;
			NullCheck(L_25);
			User_tE23EBBD8E21FAAA920F180CA0F37DCB242AA5795 * L_26 = L_25->get_User_4();
			G_B13_0 = __this;
			if (L_26)
			{
				G_B14_0 = __this;
				goto IL_00a6;
			}
		}

IL_0099:
		{
			SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * L_27 = ___response0;
			NullCheck(L_27);
			String_t* L_28 = L_27->get_UserId_0();
			PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 * L_29 = (PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 *)il2cpp_codegen_object_new(PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32_il2cpp_TypeInfo_var);
			PlayerInfo__ctor_m7BE8E88BE750D922FC7CCB91930088DEC3834896(L_29, L_28, /*hidden argument*/NULL);
			G_B15_0 = L_29;
			G_B15_1 = G_B13_0;
			goto IL_00b1;
		}

IL_00a6:
		{
			SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * L_30 = ___response0;
			NullCheck(L_30);
			User_tE23EBBD8E21FAAA920F180CA0F37DCB242AA5795 * L_31 = L_30->get_User_4();
			PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 * L_32 = (PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 *)il2cpp_codegen_object_new(PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32_il2cpp_TypeInfo_var);
			PlayerInfo__ctor_m142965DB47E202DD489AA33278B3ABC7F34788CC(L_32, L_31, /*hidden argument*/NULL);
			G_B15_0 = L_32;
			G_B15_1 = G_B14_0;
		}

IL_00b1:
		{
			NullCheck(G_B15_1);
			AuthenticationServiceInternal_set_PlayerInfo_mDC51AF45FACB6A62AAF39346CDF474186B49537B_inline(G_B15_1, G_B15_0, /*hidden argument*/NULL);
			// PlayerIdComponent.PlayerId = response.UserId;
			PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * L_33;
			L_33 = AuthenticationServiceInternal_get_PlayerIdComponent_m71FBCC6657B8435FF144D92C29524719CA1FAD92_inline(__this, /*hidden argument*/NULL);
			SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * L_34 = ___response0;
			NullCheck(L_34);
			String_t* L_35 = L_34->get_UserId_0();
			NullCheck(L_33);
			PlayerIdComponent_set_PlayerId_m67FC4FAF6B4BC13C056FECAC893E8583F42A93C1(L_33, L_35, /*hidden argument*/NULL);
			// SessionTokenComponent.SessionToken = response.SessionToken;
			SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * L_36;
			L_36 = AuthenticationServiceInternal_get_SessionTokenComponent_m150C338CB83BC5464384ABE379924EF79197A92C_inline(__this, /*hidden argument*/NULL);
			SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * L_37 = ___response0;
			NullCheck(L_37);
			String_t* L_38 = L_37->get_SessionToken_2();
			NullCheck(L_36);
			SessionTokenComponent_set_SessionToken_mA0F02B56A97EF4E4030C687C3462103778B8BEFA(L_36, L_38, /*hidden argument*/NULL);
			// var refreshTime = response.ExpiresIn - Settings.AccessTokenRefreshBuffer;
			SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * L_39 = ___response0;
			NullCheck(L_39);
			int32_t L_40 = L_39->get_ExpiresIn_3();
			RuntimeObject* L_41;
			L_41 = AuthenticationServiceInternal_get_Settings_m207CE9E7E79C996BA697C5AF82154C51CAC4F852_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_41);
			int32_t L_42;
			L_42 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.Services.Authentication.IAuthenticationSettings::get_AccessTokenRefreshBuffer() */, IAuthenticationSettings_tDF3C2B09002AA87E427B93A667A1F46921EA0339_il2cpp_TypeInfo_var, L_41);
			V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)L_42));
			// var expiryTime = response.ExpiresIn - Settings.AccessTokenExpiryBuffer;
			SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * L_43 = ___response0;
			NullCheck(L_43);
			int32_t L_44 = L_43->get_ExpiresIn_3();
			RuntimeObject* L_45;
			L_45 = AuthenticationServiceInternal_get_Settings_m207CE9E7E79C996BA697C5AF82154C51CAC4F852_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_45);
			int32_t L_46;
			L_46 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Unity.Services.Authentication.IAuthenticationSettings::get_AccessTokenExpiryBuffer() */, IAuthenticationSettings_tDF3C2B09002AA87E427B93A667A1F46921EA0339_il2cpp_TypeInfo_var, L_45);
			V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)L_46));
			// AccessTokenComponent.ExpiryTime = m_DateTime.UtcNow.AddSeconds(expiryTime);
			AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * L_47;
			L_47 = AuthenticationServiceInternal_get_AccessTokenComponent_m2852F0AF5020BEE250234B898DB7656AE37D183C_inline(__this, /*hidden argument*/NULL);
			RuntimeObject* L_48 = __this->get_m_DateTime_19();
			NullCheck(L_48);
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_49;
			L_49 = InterfaceFuncInvoker0< DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  >::Invoke(1 /* System.DateTime Unity.Services.Authentication.IDateTimeWrapper::get_UtcNow() */, IDateTimeWrapper_t911CA57B07090FBD7DEF498C609AC44C20971C1A_il2cpp_TypeInfo_var, L_48);
			V_3 = L_49;
			int32_t L_50 = V_2;
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_51;
			L_51 = DateTime_AddSeconds_mCA0940A7E7C3ED40A86532349B7D4CB3A0F0DEAF((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_3), ((double)((double)L_50)), /*hidden argument*/NULL);
			Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_52;
			memset((&L_52), 0, sizeof(L_52));
			Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB((&L_52), L_51, /*hidden argument*/Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var);
			NullCheck(L_47);
			AccessTokenComponent_set_ExpiryTime_m608106453E1FEFA2B6CB6F2A0AF5F0A642A3BEB7_inline(L_47, L_52, /*hidden argument*/NULL);
			// if (enableRefresh)
			bool L_53 = ___enableRefresh1;
			if (!L_53)
			{
				goto IL_012e;
			}
		}

IL_0126:
		{
			// ScheduleRefresh(refreshTime);
			int32_t L_54 = V_1;
			AuthenticationServiceInternal_ScheduleRefresh_m079A4344C2F75D3184DA085534A056888D0F2507(__this, ((double)((double)L_54)), /*hidden argument*/NULL);
		}

IL_012e:
		{
			// ScheduleExpiration(expiryTime);
			int32_t L_55 = V_2;
			AuthenticationServiceInternal_ScheduleExpiration_mE56623FFA0D7CA1389867A23EC75548213BD5F48(__this, ((double)((double)L_55)), /*hidden argument*/NULL);
			// ChangeState(AuthenticationState.Authorized);
			AuthenticationServiceInternal_ChangeState_m667E7EC4D3723293438F62CDA24584F482C80A68(__this, 2, /*hidden argument*/NULL);
			// }
			goto IL_0152;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticationException_t2C1D97715C433D51CC8B9EE9A86A72015F2E92CC_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_013f;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0142;
		}
		throw e;
	}

CATCH_013f:
	{ // begin catch(Unity.Services.Authentication.AuthenticationException)
		// catch (AuthenticationException)
		// throw;
		IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticationServiceInternal_CompleteSignIn_mC63035B84EABA2C107DD10FB6895261F596DCFBC_RuntimeMethod_var)));
	} // end catch (depth: 1)

CATCH_0142:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// throw AuthenticationException.Create(CommonErrorCodes.Unknown, "Unknown error completing sign-in.", e);
		Exception_t * L_56 = V_4;
		RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_57;
		L_57 = AuthenticationException_Create_m125C5AB22F4E35B2F43FC63C7715FD615AE0788D(0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF67B63DDDBE53FE39B3D99C2D009C6DF09C38E70)), L_56, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticationServiceInternal_CompleteSignIn_mC63035B84EABA2C107DD10FB6895261F596DCFBC_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0152:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::ScheduleRefresh(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_ScheduleRefresh_m079A4344C2F75D3184DA085534A056888D0F2507 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, double ___delay0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationServiceInternal_ExecuteScheduledRefresh_m26959C204BF58662DCA2FF22ED38F4FBC4B4D6D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDateTimeWrapper_t911CA57B07090FBD7DEF498C609AC44C20971C1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mC63D1129C133CFFD462EEE344A2AE34B29C1E881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		// CancelScheduledRefresh();
		AuthenticationServiceInternal_CancelScheduledRefresh_m64EC0FA0638CF96C4C71C14C215F59709CDBDA7B(__this, /*hidden argument*/NULL);
		// if (m_DateTime.UtcNow.AddSeconds(delay) < AccessTokenComponent.ExpiryTime)
		RuntimeObject* L_0 = __this->get_m_DateTime_19();
		NullCheck(L_0);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1;
		L_1 = InterfaceFuncInvoker0< DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  >::Invoke(1 /* System.DateTime Unity.Services.Authentication.IDateTimeWrapper::get_UtcNow() */, IDateTimeWrapper_t911CA57B07090FBD7DEF498C609AC44C20971C1A_il2cpp_TypeInfo_var, L_0);
		V_2 = L_1;
		double L_2 = ___delay0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3;
		L_3 = DateTime_AddSeconds_mCA0940A7E7C3ED40A86532349B7D4CB3A0F0DEAF((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * L_4;
		L_4 = AuthenticationServiceInternal_get_AccessTokenComponent_m2852F0AF5020BEE250234B898DB7656AE37D183C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_5;
		L_5 = AccessTokenComponent_get_ExpiryTime_m8A38E762B531DA5C273EA09DC9E3EEDE68891869_inline(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6;
		L_6 = Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_inline((Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0033;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0040;
	}

IL_0033:
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_7 = V_0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_8;
		L_8 = Nullable_1_GetValueOrDefault_mC63D1129C133CFFD462EEE344A2AE34B29C1E881_inline((Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *)(&V_1), /*hidden argument*/Nullable_1_GetValueOrDefault_mC63D1129C133CFFD462EEE344A2AE34B29C1E881_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = DateTime_op_LessThan_m9822D8ADDCCACAA534FE3F98C44C352778B0C3DE(L_7, L_8, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_9));
	}

IL_0040:
	{
		if (!G_B3_0)
		{
			goto IL_0065;
		}
	}
	{
		// RefreshActionId = m_Scheduler.ScheduleAction(ExecuteScheduledRefresh, delay);
		RuntimeObject* L_10 = __this->get_m_Scheduler_18();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_11 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_11, __this, (intptr_t)((intptr_t)AuthenticationServiceInternal_ExecuteScheduledRefresh_m26959C204BF58662DCA2FF22ED38F4FBC4B4D6D8_RuntimeMethod_var), /*hidden argument*/NULL);
		double L_12 = ___delay0;
		NullCheck(L_10);
		int64_t L_13;
		L_13 = InterfaceFuncInvoker2< int64_t, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, double >::Invoke(0 /* System.Int64 Unity.Services.Core.Scheduler.Internal.IActionScheduler::ScheduleAction(System.Action,System.Double) */, IActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_il2cpp_TypeInfo_var, L_10, L_11, L_12);
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D((&L_14), L_13, /*hidden argument*/Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_RuntimeMethod_var);
		AuthenticationServiceInternal_set_RefreshActionId_m21A7BE58654368157A696B9731F9AA1412C070A9_inline(__this, L_14, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::ScheduleExpiration(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_ScheduleExpiration_mE56623FFA0D7CA1389867A23EC75548213BD5F48 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, double ___delay0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationServiceInternal_ExecuteScheduledExpiration_mBBE8346B4720DF478AD198075A81D75CA6D86C7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CancelScheduledExpiration();
		AuthenticationServiceInternal_CancelScheduledExpiration_mC289D37D7143CDCD2B6D6ED537EF6CECB5A99415(__this, /*hidden argument*/NULL);
		// ExpirationActionId = m_Scheduler.ScheduleAction(ExecuteScheduledExpiration, delay);
		RuntimeObject* L_0 = __this->get_m_Scheduler_18();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_1, __this, (intptr_t)((intptr_t)AuthenticationServiceInternal_ExecuteScheduledExpiration_mBBE8346B4720DF478AD198075A81D75CA6D86C7D_RuntimeMethod_var), /*hidden argument*/NULL);
		double L_2 = ___delay0;
		NullCheck(L_0);
		int64_t L_3;
		L_3 = InterfaceFuncInvoker2< int64_t, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, double >::Invoke(0 /* System.Int64 Unity.Services.Core.Scheduler.Internal.IActionScheduler::ScheduleAction(System.Action,System.Double) */, IActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_RuntimeMethod_var);
		AuthenticationServiceInternal_set_ExpirationActionId_mABA89665FBBD8124A496811E7AC9659D0113E765_inline(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::ExecuteScheduledRefresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_ExecuteScheduledRefresh_m26959C204BF58662DCA2FF22ED38F4FBC4B4D6D8 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// RefreshActionId = null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F ));
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_0 = V_0;
		AuthenticationServiceInternal_set_RefreshActionId_m21A7BE58654368157A696B9731F9AA1412C070A9_inline(__this, L_0, /*hidden argument*/NULL);
		// RefreshAccessTokenAsync();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_1;
		L_1 = AuthenticationServiceInternal_RefreshAccessTokenAsync_mB70761EF9C337D4FF7EE72454D35DC7C5790E146(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::ExecuteScheduledExpiration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_ExecuteScheduledExpiration_mBBE8346B4720DF478AD198075A81D75CA6D86C7D (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ExpirationActionId = null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F ));
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_0 = V_0;
		AuthenticationServiceInternal_set_ExpirationActionId_mABA89665FBBD8124A496811E7AC9659D0113E765_inline(__this, L_0, /*hidden argument*/NULL);
		// Expire();
		AuthenticationServiceInternal_Expire_m03AC98A45621D10F4239EF4F9E24F1383B765FB6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::CancelScheduledRefresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_CancelScheduledRefresh_m64EC0FA0638CF96C4C71C14C215F59709CDBDA7B (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m571187F546F4230B8576F169789831BFBA99B93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m50AA4ABD548771EE5E0C30724C9847B16C44F3DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (RefreshActionId.HasValue)
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_0;
		L_0 = AuthenticationServiceInternal_get_RefreshActionId_m36939AD0C220FA3733F31C7A3B73AF99834CC20C_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m571187F546F4230B8576F169789831BFBA99B93F_inline((Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m571187F546F4230B8576F169789831BFBA99B93F_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// m_Scheduler.CancelAction(RefreshActionId.Value);
		RuntimeObject* L_2 = __this->get_m_Scheduler_18();
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_3;
		L_3 = AuthenticationServiceInternal_get_RefreshActionId_m36939AD0C220FA3733F31C7A3B73AF99834CC20C_inline(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		int64_t L_4;
		L_4 = Nullable_1_get_Value_m50AA4ABD548771EE5E0C30724C9847B16C44F3DA((Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m50AA4ABD548771EE5E0C30724C9847B16C44F3DA_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< int64_t >::Invoke(1 /* System.Void Unity.Services.Core.Scheduler.Internal.IActionScheduler::CancelAction(System.Int64) */, IActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_il2cpp_TypeInfo_var, L_2, L_4);
		// RefreshActionId = null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F ));
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_5 = V_0;
		AuthenticationServiceInternal_set_RefreshActionId_m21A7BE58654368157A696B9731F9AA1412C070A9_inline(__this, L_5, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::CancelScheduledExpiration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_CancelScheduledExpiration_mC289D37D7143CDCD2B6D6ED537EF6CECB5A99415 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m571187F546F4230B8576F169789831BFBA99B93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m50AA4ABD548771EE5E0C30724C9847B16C44F3DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (ExpirationActionId.HasValue)
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_0;
		L_0 = AuthenticationServiceInternal_get_ExpirationActionId_mB1BFDC05A1FA873FB9AC27BFF6B11B0B9749EA54_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m571187F546F4230B8576F169789831BFBA99B93F_inline((Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m571187F546F4230B8576F169789831BFBA99B93F_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// m_Scheduler.CancelAction(ExpirationActionId.Value);
		RuntimeObject* L_2 = __this->get_m_Scheduler_18();
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_3;
		L_3 = AuthenticationServiceInternal_get_ExpirationActionId_mB1BFDC05A1FA873FB9AC27BFF6B11B0B9749EA54_inline(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		int64_t L_4;
		L_4 = Nullable_1_get_Value_m50AA4ABD548771EE5E0C30724C9847B16C44F3DA((Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m50AA4ABD548771EE5E0C30724C9847B16C44F3DA_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< int64_t >::Invoke(1 /* System.Void Unity.Services.Core.Scheduler.Internal.IActionScheduler::CancelAction(System.Int64) */, IActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_il2cpp_TypeInfo_var, L_2, L_4);
		// ExpirationActionId = null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F ));
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_5 = V_0;
		AuthenticationServiceInternal_set_ExpirationActionId_mABA89665FBBD8124A496811E7AC9659D0113E765_inline(__this, L_5, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::Expire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_Expire_m03AC98A45621D10F4239EF4F9E24F1383B765FB6 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// AccessTokenComponent.Clear();
		AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * L_0;
		L_0 = AuthenticationServiceInternal_get_AccessTokenComponent_m2852F0AF5020BEE250234B898DB7656AE37D183C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		AccessTokenComponent_Clear_m1CAF5EED0646956500FC45ADDB0BF966CE623CD7(L_0, /*hidden argument*/NULL);
		// CancelScheduledRefresh();
		AuthenticationServiceInternal_CancelScheduledRefresh_m64EC0FA0638CF96C4C71C14C215F59709CDBDA7B(__this, /*hidden argument*/NULL);
		// CancelScheduledExpiration();
		AuthenticationServiceInternal_CancelScheduledExpiration_mC289D37D7143CDCD2B6D6ED537EF6CECB5A99415(__this, /*hidden argument*/NULL);
		// ChangeState(AuthenticationState.Expired);
		AuthenticationServiceInternal_ChangeState_m667E7EC4D3723293438F62CDA24584F482C80A68(__this, 4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::MigrateCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_MigrateCache_mF008EE253B5FF4F17F42A9C6E61E241FC7115428 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// SessionTokenComponent.Migrate();
		SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * L_0;
		L_0 = AuthenticationServiceInternal_get_SessionTokenComponent_m150C338CB83BC5464384ABE379924EF79197A92C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SessionTokenComponent_Migrate_m80A127227B9CC7B5356E1DAB54C24A95B7BD583C(L_0, /*hidden argument*/NULL);
		// }
		goto IL_0014;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000d;
		}
		throw e;
	}

CATCH_000d:
	{ // begin catch(System.Exception)
		// Debug.LogException(e);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0014;
	} // end catch (depth: 1)

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::ChangeState(Unity.Services.Authentication.AuthenticationState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_ChangeState_m667E7EC4D3723293438F62CDA24584F482C80A68 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, int32_t ___newState0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (State == newState)
		int32_t L_0;
		L_0 = AuthenticationServiceInternal_get_State_m540B2858E462412EE82083304EB498C369512E14_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___newState0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// var oldState = State;
		int32_t L_2;
		L_2 = AuthenticationServiceInternal_get_State_m540B2858E462412EE82083304EB498C369512E14_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		// State = newState;
		int32_t L_3 = ___newState0;
		AuthenticationServiceInternal_set_State_m1258E7117ABE0843B4C65DDBADDC1328D1A1F0FA_inline(__this, L_3, /*hidden argument*/NULL);
		// HandleStateChanged(oldState, newState);
		int32_t L_4 = V_0;
		int32_t L_5 = ___newState0;
		AuthenticationServiceInternal_HandleStateChanged_m4853170F69E506148AA030D799514C9C035B10E4(__this, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::HandleStateChanged(Unity.Services.Authentication.AuthenticationState,Unity.Services.Authentication.AuthenticationState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_HandleStateChanged_m4853170F69E506148AA030D799514C9C035B10E4 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_mBBD58666FB3D2852B654D46A2FF1949AFBBE0D16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t881D75688CFDB53402D8BAF505B7F10DB23DE4F0 * G_B2_0 = NULL;
	Action_2_t881D75688CFDB53402D8BAF505B7F10DB23DE4F0 * G_B1_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B8_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B7_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B12_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B11_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B15_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B14_0 = NULL;
	{
		// StateChanged?.Invoke(oldState, newState);
		Action_2_t881D75688CFDB53402D8BAF505B7F10DB23DE4F0 * L_0 = __this->get_StateChanged_21();
		Action_2_t881D75688CFDB53402D8BAF505B7F10DB23DE4F0 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		int32_t L_2 = ___oldState0;
		int32_t L_3 = ___newState1;
		NullCheck(G_B2_0);
		Action_2_Invoke_mBBD58666FB3D2852B654D46A2FF1949AFBBE0D16(G_B2_0, L_2, L_3, /*hidden argument*/Action_2_Invoke_mBBD58666FB3D2852B654D46A2FF1949AFBBE0D16_RuntimeMethod_var);
	}

IL_0013:
	{
		int32_t L_4 = ___newState1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0043;
			}
			case 1:
			{
				goto IL_0068;
			}
			case 2:
			{
				goto IL_002e;
			}
			case 3:
			{
				goto IL_0068;
			}
			case 4:
			{
				goto IL_0058;
			}
		}
	}
	{
		return;
	}

IL_002e:
	{
		// if (oldState != AuthenticationState.Refreshing)
		int32_t L_5 = ___oldState0;
		if ((((int32_t)L_5) == ((int32_t)3)))
		{
			goto IL_0068;
		}
	}
	{
		// SignedIn?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = __this->get_SignedIn_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = L_6;
		G_B7_0 = L_7;
		if (L_7)
		{
			G_B8_0 = L_7;
			goto IL_003d;
		}
	}
	{
		return;
	}

IL_003d:
	{
		NullCheck(G_B8_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B8_0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0043:
	{
		// if (oldState != AuthenticationState.SigningIn)
		int32_t L_8 = ___oldState0;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0068;
		}
	}
	{
		// SignedOut?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = __this->get_SignedOut_2();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = L_9;
		G_B11_0 = L_10;
		if (L_10)
		{
			G_B12_0 = L_10;
			goto IL_0052;
		}
	}
	{
		return;
	}

IL_0052:
	{
		NullCheck(G_B12_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B12_0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0058:
	{
		// Expired?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_11 = __this->get_Expired_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12 = L_11;
		G_B14_0 = L_12;
		if (L_12)
		{
			G_B15_0 = L_12;
			goto IL_0063;
		}
	}
	{
		return;
	}

IL_0063:
	{
		NullCheck(G_B15_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B15_0, /*hidden argument*/NULL);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::SendSignInFailedEvent(Unity.Services.Core.RequestFailedException,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_SendSignInFailedEvent_m5715005540D9E4418F07FCE528D3136099DE54ED (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * ___exception0, bool ___forceSignOut1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mC6762E9B52359D097DB16C414B77A1FB3718C61E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * G_B2_0 = NULL;
	Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * G_B1_0 = NULL;
	{
		// SignInFailed?.Invoke(exception);
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * L_0 = __this->get_SignInFailed_0();
		Action_1_tD4DC9A696DF3CCEA9E68ED0E98EE7EE39E765326 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_2 = ___exception0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mC6762E9B52359D097DB16C414B77A1FB3718C61E(G_B2_0, L_2, /*hidden argument*/Action_1_Invoke_mC6762E9B52359D097DB16C414B77A1FB3718C61E_RuntimeMethod_var);
	}

IL_0012:
	{
		// if (forceSignOut)
		bool L_3 = ___forceSignOut1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// SignOut();
		AuthenticationServiceInternal_SignOut_m7EA7890AF71F36C5C3B859F2A5B107866C9202B0(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// Unity.Services.Core.RequestFailedException Unity.Services.Authentication.AuthenticationServiceInternal::BuildClientInvalidStateException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * AuthenticationServiceInternal_BuildClientInvalidStateException_m5E09C8BDB689926B8D9D96670047561FF4732767 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationMetrics_t696FF7DC0F0282CC49A1542207E64AB154F9F429_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13AA05127DC343690A4511AFDB16512FF022B039);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA25CBED3DFB739A64F6004FF039EB7CA4D744F80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6E95469377CE29950B6E671AF6618E8518383E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA807D779356BF929984FEEF020A8F304C0825CD2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var errorMessage = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		// switch (State)
		int32_t L_1;
		L_1 = AuthenticationServiceInternal_get_State_m540B2858E462412EE82083304EB498C369512E14_inline(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0039;
			}
			case 3:
			{
				goto IL_0039;
			}
			case 4:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_0047;
	}

IL_0029:
	{
		// errorMessage = "Invalid state for this operation. The player is signed out.";
		V_0 = _stringLiteralA25CBED3DFB739A64F6004FF039EB7CA4D744F80;
		// break;
		goto IL_0047;
	}

IL_0031:
	{
		// errorMessage = "Invalid state for this operation. The player is already signing in.";
		V_0 = _stringLiteral13AA05127DC343690A4511AFDB16512FF022B039;
		// break;
		goto IL_0047;
	}

IL_0039:
	{
		// errorMessage = "Invalid state for this operation. The player is already signed in.";
		V_0 = _stringLiteralA6E95469377CE29950B6E671AF6618E8518383E4;
		// break;
		goto IL_0047;
	}

IL_0041:
	{
		// errorMessage = "Invalid state for this operation. The player session has expired.";
		V_0 = _stringLiteralA807D779356BF929984FEEF020A8F304C0825CD2;
	}

IL_0047:
	{
		// m_Metrics.SendClientInvalidStateExceptionMetric();
		RuntimeObject* L_3 = __this->get_m_Metrics_20();
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Unity.Services.Authentication.IAuthenticationMetrics::SendClientInvalidStateExceptionMetric() */, IAuthenticationMetrics_t696FF7DC0F0282CC49A1542207E64AB154F9F429_il2cpp_TypeInfo_var, L_3);
		// return AuthenticationException.Create(AuthenticationErrorCodes.ClientInvalidUserState, errorMessage);
		IL2CPP_RUNTIME_CLASS_INIT(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var);
		int32_t L_4 = ((AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var))->get_ClientInvalidUserState_1();
		String_t* L_5 = V_0;
		RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_6;
		L_6 = AuthenticationException_Create_m125C5AB22F4E35B2F43FC63C7715FD615AE0788D(L_4, L_5, (Exception_t *)NULL, /*hidden argument*/NULL);
		return L_6;
	}
}
// Unity.Services.Core.RequestFailedException Unity.Services.Authentication.AuthenticationServiceInternal::BuildClientSessionTokenNotExistsException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * AuthenticationServiceInternal_BuildClientSessionTokenNotExistsException_mF8559C94D9FC86C9EE9FF63B53244E6FBEE1D84A (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationMetrics_t696FF7DC0F0282CC49A1542207E64AB154F9F429_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9118BD0CAA037C7CB5A295148D715E5D7BB54A65);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Metrics.SendClientSessionTokenNotExistsExceptionMetric();
		RuntimeObject* L_0 = __this->get_m_Metrics_20();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Unity.Services.Authentication.IAuthenticationMetrics::SendClientSessionTokenNotExistsExceptionMetric() */, IAuthenticationMetrics_t696FF7DC0F0282CC49A1542207E64AB154F9F429_il2cpp_TypeInfo_var, L_0);
		// SessionTokenComponent.Clear();
		SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * L_1;
		L_1 = AuthenticationServiceInternal_get_SessionTokenComponent_m150C338CB83BC5464384ABE379924EF79197A92C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		SessionTokenComponent_Clear_m27747BAF3B5B4C158E801D23884800A8B2B51029(L_1, /*hidden argument*/NULL);
		// return AuthenticationException.Create(AuthenticationErrorCodes.ClientNoActiveSession, "There is no cached session token.");
		IL2CPP_RUNTIME_CLASS_INIT(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var);
		int32_t L_2 = ((AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var))->get_ClientNoActiveSession_2();
		RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_3;
		L_3 = AuthenticationException_Create_m125C5AB22F4E35B2F43FC63C7715FD615AE0788D(L_2, _stringLiteral9118BD0CAA037C7CB5A295148D715E5D7BB54A65, (Exception_t *)NULL, /*hidden argument*/NULL);
		return L_3;
	}
}
// Unity.Services.Core.RequestFailedException Unity.Services.Authentication.AuthenticationServiceInternal::BuildServerException(Unity.Services.Authentication.WebRequestException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * AuthenticationServiceInternal_BuildServerException_m65325EA837C5EB0BF8BD6F7DA6538A62666A74A8 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * ___exception0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationMetrics_t696FF7DC0F0282CC49A1542207E64AB154F9F429_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisAuthenticationErrorResponse_tC90CC24823ADC01AD30EAA07CC0A10E39998600F_m861DBF47FC84C04524DB1410C47F0B7D2B909475_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_tD29ADC250B69551530E1BAD9DFA823D775BE95D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A5357BFF4777961C0ED9DFB11AC98AFAF29AF93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5ADCF3FED825951408599CB8341DA473933C86B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF3F6295AAF48AC44EE111E7233767AD6B03E6C8);
		s_Il2CppMethodInitialized = true;
	}
	AuthenticationErrorResponse_tC90CC24823ADC01AD30EAA07CC0A10E39998600F * V_0 = NULL;
	RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * V_1 = NULL;
	JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962 * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	{
		// Logger.LogError($"Request failed: {exception.ResponseCode}, {exception.Message}");
		WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * L_0 = ___exception0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = WebRequestException_get_ResponseCode_mE7F0EB27F64B0E2B93D8D1C1B8BFB95F5B42C99D_inline(L_0, /*hidden argument*/NULL);
		int64_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_2);
		WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * L_4 = ___exception0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral5A5357BFF4777961C0ED9DFB11AC98AFAF29AF93, L_3, L_5, /*hidden argument*/NULL);
		Logger_LogError_m27F93E9B4188BC7B3D6317A6D3293A51CA01C062(L_6, /*hidden argument*/NULL);
		// if (exception.NetworkError)
		WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * L_7 = ___exception0;
		NullCheck(L_7);
		bool L_8;
		L_8 = WebRequestException_get_NetworkError_m645FAC3101DC039DD6CE649F7984450CE8CCCC0F_inline(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		// m_Metrics.SendNetworkErrorMetric();
		RuntimeObject* L_9 = __this->get_m_Metrics_20();
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.Services.Authentication.IAuthenticationMetrics::SendNetworkErrorMetric() */, IAuthenticationMetrics_t696FF7DC0F0282CC49A1542207E64AB154F9F429_il2cpp_TypeInfo_var, L_9);
		// return AuthenticationException.Create(CommonErrorCodes.TransportError, $"Network Error: {exception.Message}", exception);
		WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * L_10 = ___exception0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_10);
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFF3F6295AAF48AC44EE111E7233767AD6B03E6C8, L_11, /*hidden argument*/NULL);
		WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * L_13 = ___exception0;
		RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_14;
		L_14 = AuthenticationException_Create_m125C5AB22F4E35B2F43FC63C7715FD615AE0788D(1, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_004b:
	{
	}

IL_004c:
	try
	{ // begin try (depth: 1)
		{
			// var errorResponse = JsonConvert.DeserializeObject<AuthenticationErrorResponse>(exception.Message);
			WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * L_15 = ___exception0;
			NullCheck(L_15);
			String_t* L_16;
			L_16 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_15);
			IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_tD29ADC250B69551530E1BAD9DFA823D775BE95D7_il2cpp_TypeInfo_var);
			AuthenticationErrorResponse_tC90CC24823ADC01AD30EAA07CC0A10E39998600F * L_17;
			L_17 = JsonConvert_DeserializeObject_TisAuthenticationErrorResponse_tC90CC24823ADC01AD30EAA07CC0A10E39998600F_m861DBF47FC84C04524DB1410C47F0B7D2B909475(L_16, /*hidden argument*/JsonConvert_DeserializeObject_TisAuthenticationErrorResponse_tC90CC24823ADC01AD30EAA07CC0A10E39998600F_m861DBF47FC84C04524DB1410C47F0B7D2B909475_RuntimeMethod_var);
			V_0 = L_17;
			// var errorCode = MapErrorCodes(errorResponse.Title);
			AuthenticationErrorResponse_tC90CC24823ADC01AD30EAA07CC0A10E39998600F * L_18 = V_0;
			NullCheck(L_18);
			String_t* L_19 = L_18->get_Title_0();
			int32_t L_20;
			L_20 = AuthenticationServiceInternal_MapErrorCodes_mAF2652B57EC927DE873FDEB9BF1180D6812405FB(__this, L_19, /*hidden argument*/NULL);
			// if (errorCode == AuthenticationErrorCodes.InvalidSessionToken)
			int32_t L_21 = L_20;
			IL2CPP_RUNTIME_CLASS_INIT(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var);
			int32_t L_22 = ((AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var))->get_InvalidSessionToken_8();
			G_B4_0 = L_21;
			if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
			{
				G_B5_0 = L_21;
				goto IL_0081;
			}
		}

IL_006c:
		{
			// SessionTokenComponent.Clear();
			SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * L_23;
			L_23 = AuthenticationServiceInternal_get_SessionTokenComponent_m150C338CB83BC5464384ABE379924EF79197A92C_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_23);
			SessionTokenComponent_Clear_m27747BAF3B5B4C158E801D23884800A8B2B51029(L_23, /*hidden argument*/NULL);
			// Logger.LogError($"The session token is invalid and has been cleared. The associated account is no longer accessible through this login method.");
			Logger_LogError_m27F93E9B4188BC7B3D6317A6D3293A51CA01C062(_stringLiteralE5ADCF3FED825951408599CB8341DA473933C86B, /*hidden argument*/NULL);
			G_B5_0 = G_B4_0;
		}

IL_0081:
		{
			// return AuthenticationException.Create(errorCode, errorResponse.Detail, exception);
			AuthenticationErrorResponse_tC90CC24823ADC01AD30EAA07CC0A10E39998600F * L_24 = V_0;
			NullCheck(L_24);
			String_t* L_25 = L_24->get_Detail_1();
			WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * L_26 = ___exception0;
			RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_27;
			L_27 = AuthenticationException_Create_m125C5AB22F4E35B2F43FC63C7715FD615AE0788D(G_B5_0, L_25, L_26, /*hidden argument*/NULL);
			V_1 = L_27;
			goto IL_00b0;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0090;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a0;
		}
		throw e;
	}

CATCH_0090:
	{ // begin catch(Newtonsoft.Json.JsonException)
		// catch (JsonException e)
		V_2 = ((JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962 *)IL2CPP_GET_ACTIVE_EXCEPTION(JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962 *));
		// return AuthenticationException.Create(CommonErrorCodes.Unknown, "Failed to deserialize server response.", e);
		JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962 * L_28 = V_2;
		RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_29;
		L_29 = AuthenticationException_Create_m125C5AB22F4E35B2F43FC63C7715FD615AE0788D(0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA1D894129428D97A82105EA53B4459C27A9AF712)), L_28, /*hidden argument*/NULL);
		V_1 = L_29;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b0;
	} // end catch (depth: 1)

CATCH_00a0:
	{ // begin catch(System.Exception)
		// catch (Exception)
		// return AuthenticationException.Create(CommonErrorCodes.Unknown, "Unknown error deserializing server response. ", exception);
		WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * L_30 = ___exception0;
		RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_31;
		L_31 = AuthenticationException_Create_m125C5AB22F4E35B2F43FC63C7715FD615AE0788D(0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB7FE37709A3E5F9D994BF275861CD32D78CD778)), L_30, /*hidden argument*/NULL);
		V_1 = L_31;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b0;
	} // end catch (depth: 1)

IL_00b0:
	{
		// }
		RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_32 = V_1;
		return L_32;
	}
}
// System.Int32 Unity.Services.Authentication.AuthenticationServiceInternal::MapErrorCodes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticationServiceInternal_MapErrorCodes_mAF2652B57EC927DE873FDEB9BF1180D6812405FB (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, String_t* ___serverErrorTitle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2754A23125BBA5ED316F9C07A3E818C3D63239F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F356137CA88ED48EB67D737BE3B186689AF3BDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5007D8D0381075039AADFA5A7B7117BF4299AF46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6682BD0725A4AB34573ADAA351C3058894511A91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F1462AD691582C705B8D80B37739368463E0FE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEB5ADD24A8B3212AEDF863D68D2927C47646EE2);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___serverErrorTitle0;
		if (!L_0)
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_1 = ___serverErrorTitle0;
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral5007D8D0381075039AADFA5A7B7117BF4299AF46, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_3 = ___serverErrorTitle0;
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteral2754A23125BBA5ED316F9C07A3E818C3D63239F1, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_5 = ___serverErrorTitle0;
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteralCEB5ADD24A8B3212AEDF863D68D2927C47646EE2, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_7 = ___serverErrorTitle0;
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteral9F1462AD691582C705B8D80B37739368463E0FE1, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_9 = ___serverErrorTitle0;
		bool L_10;
		L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, _stringLiteral6682BD0725A4AB34573ADAA351C3058894511A91, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_11 = ___serverErrorTitle0;
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteral3F356137CA88ED48EB67D737BE3B186689AF3BDA, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0071;
		}
	}
	{
		goto IL_0074;
	}

IL_0053:
	{
		// return AuthenticationErrorCodes.AccountAlreadyLinked;
		IL2CPP_RUNTIME_CLASS_INIT(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var);
		int32_t L_13 = ((AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var))->get_AccountAlreadyLinked_4();
		return L_13;
	}

IL_0059:
	{
		// return AuthenticationErrorCodes.AccountLinkLimitExceeded;
		IL2CPP_RUNTIME_CLASS_INIT(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var);
		int32_t L_14 = ((AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var))->get_AccountLinkLimitExceeded_5();
		return L_14;
	}

IL_005f:
	{
		// return AuthenticationErrorCodes.InvalidParameters;
		IL2CPP_RUNTIME_CLASS_INIT(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var);
		int32_t L_15 = ((AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var))->get_InvalidParameters_3();
		return L_15;
	}

IL_0065:
	{
		// return AuthenticationErrorCodes.InvalidSessionToken;
		IL2CPP_RUNTIME_CLASS_INIT(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var);
		int32_t L_16 = ((AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var))->get_InvalidSessionToken_8();
		return L_16;
	}

IL_006b:
	{
		// return AuthenticationErrorCodes.InvalidParameters;
		IL2CPP_RUNTIME_CLASS_INIT(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var);
		int32_t L_17 = ((AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationErrorCodes_t000EC28BB6BC6FFD83A620F35ABFB498C6FAB845_il2cpp_TypeInfo_var))->get_InvalidParameters_3();
		return L_17;
	}

IL_0071:
	{
		// return CommonErrorCodes.InvalidToken;
		return ((int32_t)51);
	}

IL_0074:
	{
		// return CommonErrorCodes.Unknown;
		return 0;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal::<.ctor>b__75_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_U3C_ctorU3Eb__75_0_m3BDDCA22E45BD703BF5A36EE29640E25A705DE09 (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationMetrics_t696FF7DC0F0282CC49A1542207E64AB154F9F429_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Expired += () => m_Metrics.SendExpiredSessionMetric();
		RuntimeObject* L_0 = __this->get_m_Metrics_20();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Unity.Services.Authentication.IAuthenticationMetrics::SendExpiredSessionMetric() */, IAuthenticationMetrics_t696FF7DC0F0282CC49A1542207E64AB154F9F429_il2cpp_TypeInfo_var, L_0);
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
// System.Int32 Unity.Services.Authentication.AuthenticationSettings::get_AccessTokenRefreshBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticationSettings_get_AccessTokenRefreshBuffer_mC5C38156847006342F32AA73CAE50303E3AE4ED1 (AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF * __this, const RuntimeMethod* method)
{
	{
		// public int AccessTokenRefreshBuffer { get; internal set; }
		int32_t L_0 = __this->get_U3CAccessTokenRefreshBufferU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationSettings::set_AccessTokenRefreshBuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationSettings_set_AccessTokenRefreshBuffer_m149024C770352BD9A87BD1FFA1F6B3A0896A33CD (AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int AccessTokenRefreshBuffer { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CAccessTokenRefreshBufferU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 Unity.Services.Authentication.AuthenticationSettings::get_AccessTokenExpiryBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticationSettings_get_AccessTokenExpiryBuffer_m7E8318C9ED039A5597BDDE01FF0F0B20EFE91F06 (AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF * __this, const RuntimeMethod* method)
{
	{
		// public int AccessTokenExpiryBuffer { get; internal set; }
		int32_t L_0 = __this->get_U3CAccessTokenExpiryBufferU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationSettings::set_AccessTokenExpiryBuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationSettings_set_AccessTokenExpiryBuffer_m5F60B60502A86DC2FCF76FCC19DB223F07798F68 (AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int AccessTokenExpiryBuffer { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CAccessTokenExpiryBufferU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 Unity.Services.Authentication.AuthenticationSettings::get_RefreshAttemptFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticationSettings_get_RefreshAttemptFrequency_m54BDF73EA098953413A84546B9F0D56F86D67A31 (AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF * __this, const RuntimeMethod* method)
{
	{
		// public int RefreshAttemptFrequency { get; internal set; }
		int32_t L_0 = __this->get_U3CRefreshAttemptFrequencyU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationSettings::set_RefreshAttemptFrequency(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationSettings_set_RefreshAttemptFrequency_m03D44C030EC39C0D3E2625159E76BD62A6DF8DC7 (AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int RefreshAttemptFrequency { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRefreshAttemptFrequencyU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationSettings__ctor_mDC97DB036D99F7FD820CD4E62650FF4A4AA4F8FD (AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF * __this, const RuntimeMethod* method)
{
	{
		// internal AuthenticationSettings()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// AccessTokenRefreshBuffer = k_AccessTokenRefreshBuffer;
		AuthenticationSettings_set_AccessTokenRefreshBuffer_m149024C770352BD9A87BD1FFA1F6B3A0896A33CD_inline(__this, ((int32_t)300), /*hidden argument*/NULL);
		// AccessTokenExpiryBuffer = k_AccessTokenExpiryBuffer;
		AuthenticationSettings_set_AccessTokenExpiryBuffer_m5F60B60502A86DC2FCF76FCC19DB223F07798F68_inline(__this, ((int32_t)15), /*hidden argument*/NULL);
		// RefreshAttemptFrequency = k_RefreshAttemptFrequency;
		AuthenticationSettings_set_RefreshAttemptFrequency_m03D44C030EC39C0D3E2625159E76BD62A6DF8DC7_inline(__this, ((int32_t)30), /*hidden argument*/NULL);
		// }
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
// System.Void Unity.Services.Authentication.BaseJwt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseJwt__ctor_mB5B7C699C99A13A3DB01042C6ACDF8F13BA9790C (BaseJwt_t0E7A78CF620D766B3A9060318C68CC3A436C497B * __this, const RuntimeMethod* method)
{
	{
		// public BaseJwt() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public BaseJwt() {}
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
// System.DateTime Unity.Services.Authentication.DateTimeWrapper::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTimeWrapper_get_UtcNow_m081B49916EAF4630E1F3EDC2FBFCDD1E50D0DAD1 (DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DateTime UtcNow => DateTime.UtcNow;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		L_0 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Double Unity.Services.Authentication.DateTimeWrapper::SecondsSinceUnixEpoch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DateTimeWrapper_SecondsSinceUnixEpoch_m823F49CBE1EDF5A9B4469AD6E0EB48CE9993D173 (DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Math.Round((DateTime.UtcNow - k_UnixEpoch).TotalSeconds);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		L_0 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ((DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137_il2cpp_TypeInfo_var))->get_k_UnixEpoch_0();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2;
		L_2 = DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		double L_3;
		L_3 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = bankers_round(L_3);
		return L_4;
	}
}
// System.Void Unity.Services.Authentication.DateTimeWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeWrapper__ctor_m3DAAC87852643F97ADB2E7ED52A23ACED837AE0D (DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Services.Authentication.DateTimeWrapper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeWrapper__cctor_mD7696A52981C2B9E263CE3F2101B5AE8AF091AB3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly DateTime k_UnixEpoch = new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_mCB99E35879988A22842FDDA9BBC3ACA74F1BEE38((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, /*hidden argument*/NULL);
		((DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeWrapper_t407D40E7366E81C1B4A8276D01D404911EBED137_il2cpp_TypeInfo_var))->set_k_UnixEpoch_0(L_0);
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
// System.Void Unity.Services.Authentication.EnvironmentIdComponent::set_EnvironmentId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentIdComponent_set_EnvironmentId_m64287B97B7875A6D017F110FCB14575DF466BAE7 (EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string EnvironmentId { get; internal set; }
		String_t* L_0 = ___value0;
		__this->set_U3CEnvironmentIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Unity.Services.Authentication.EnvironmentIdComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentIdComponent__ctor_m7F53B9DB9592A685013C8AC24280B3FF1359E718 (EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * __this, const RuntimeMethod* method)
{
	{
		// internal EnvironmentIdComponent()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
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
// System.Void Unity.Services.Authentication.ExternalIdentity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalIdentity__ctor_m3450C03D6B613F3C28746808CBC2F52B85D98E6D (ExternalIdentity_t340A154EA8E79B73A6BC04A7D835C8D7F922F724 * __this, const RuntimeMethod* method)
{
	{
		// public ExternalIdentity() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public ExternalIdentity() {}
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
// System.Void Unity.Services.Authentication.Identity::.ctor(Unity.Services.Authentication.ExternalIdentity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Identity__ctor_m7273990582F881F65C5175A46D3F94F3CE55B2D0 (Identity_t2BAFC5C0BCB99BB68210854A8CEE5BA4CBBD0F61 * __this, ExternalIdentity_t340A154EA8E79B73A6BC04A7D835C8D7F922F724 * ___externalIdentity0, const RuntimeMethod* method)
{
	{
		// internal Identity(ExternalIdentity externalIdentity)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// if (externalIdentity != null)
		ExternalIdentity_t340A154EA8E79B73A6BC04A7D835C8D7F922F724 * L_0 = ___externalIdentity0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// TypeId = externalIdentity.ProviderId;
		ExternalIdentity_t340A154EA8E79B73A6BC04A7D835C8D7F922F724 * L_1 = ___externalIdentity0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_ProviderId_0();
		__this->set_TypeId_0(L_2);
		// UserId = externalIdentity.ExternalId;
		ExternalIdentity_t340A154EA8E79B73A6BC04A7D835C8D7F922F724 * L_3 = ___externalIdentity0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_ExternalId_1();
		__this->set_UserId_1(L_4);
	}

IL_0021:
	{
		// }
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
// System.Void Unity.Services.Authentication.JwtDecoder::.ctor(Unity.Services.Authentication.IDateTimeWrapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JwtDecoder__ctor_mAF16941528D35E2E8ADDDF0C9E8720842AEC4E78 (JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7 * __this, RuntimeObject* ___dateTime0, const RuntimeMethod* method)
{
	{
		// internal JwtDecoder(IDateTimeWrapper dateTime)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_DateTime = dateTime;
		RuntimeObject* L_0 = ___dateTime0;
		__this->set_m_DateTime_2(L_0);
		// }
		return;
	}
}
// System.Boolean Unity.Services.Authentication.JwtDecoder::VerifySignature(System.String,System.String,System.String,Unity.Services.Authentication.WellKnownKey[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JwtDecoder_VerifySignature_mCEDBACF1156CDFA2821364426B94F69A09EDCE2E (JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7 * __this, String_t* ___header0, String_t* ___keyId1, String_t* ___payload2, WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* ___keys3, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___signature4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98DC5CC9FB1CF6E407FEE201642AC8D774BB85CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA77D5693A0F444FC4C8236C0AEED70B164CFF58);
		s_Il2CppMethodInitialized = true;
	}
	WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563 * V_0 = NULL;
	bool G_B3_0 = false;
	bool G_B2_0 = false;
	{
		// var key = GetKey(keyId, keys);
		String_t* L_0 = ___keyId1;
		WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* L_1 = ___keys3;
		WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563 * L_2;
		L_2 = JwtDecoder_GetKey_m506FBD5D18803C250351A01231F58B96B654520C(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (key != null)
		WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		// var verified = Verify(header, payload, signature, Base64UrlDecode(key.N), Base64UrlDecode(key.E));
		String_t* L_4 = ___header0;
		String_t* L_5 = ___payload2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___signature4;
		WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_N_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
		L_9 = JwtDecoder_Base64UrlDecode_m829BE92817BA8542FA81374FBA5F878BF1AD16B7(__this, L_8, /*hidden argument*/NULL);
		WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563 * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = L_10->get_E_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12;
		L_12 = JwtDecoder_Base64UrlDecode_m829BE92817BA8542FA81374FBA5F878BF1AD16B7(__this, L_11, /*hidden argument*/NULL);
		bool L_13;
		L_13 = JwtDecoder_Verify_mD1959951504C6BB98EDB2E291E7CD2040D2AB519(__this, L_4, L_5, L_6, L_9, L_12, /*hidden argument*/NULL);
		// if (!verified)
		bool L_14 = L_13;
		G_B2_0 = L_14;
		if (L_14)
		{
			G_B3_0 = L_14;
			goto IL_003c;
		}
	}
	{
		// Logger.LogError("Signature failed verification!");
		Logger_LogError_m27F93E9B4188BC7B3D6317A6D3293A51CA01C062(_stringLiteralAA77D5693A0F444FC4C8236C0AEED70B164CFF58, /*hidden argument*/NULL);
		G_B3_0 = G_B2_0;
	}

IL_003c:
	{
		// return verified;
		return G_B3_0;
	}

IL_003d:
	{
		// Logger.LogError("Unable to verify signature, does not use a well-known key ID.");
		Logger_LogError_m27F93E9B4188BC7B3D6317A6D3293A51CA01C062(_stringLiteral98DC5CC9FB1CF6E407FEE201642AC8D774BB85CB, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}
}
// Unity.Services.Authentication.WellKnownKey Unity.Services.Authentication.JwtDecoder::GetKey(System.String,Unity.Services.Authentication.WellKnownKey[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563 * JwtDecoder_GetKey_m506FBD5D18803C250351A01231F58B96B654520C (JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7 * __this, String_t* ___keyId0, WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* ___keys1, const RuntimeMethod* method)
{
	WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* V_0 = NULL;
	int32_t V_1 = 0;
	WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563 * V_2 = NULL;
	{
		// foreach (var key in keys)
		WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* L_0 = ___keys1;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001e;
	}

IL_0006:
	{
		// foreach (var key in keys)
		WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (key.KeyId == keyId)
		WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563 * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_KeyId_0();
		String_t* L_7 = ___keyId0;
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_001a;
		}
	}
	{
		// return key;
		WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563 * L_9 = V_2;
		return L_9;
	}

IL_001a:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_001e:
	{
		// foreach (var key in keys)
		int32_t L_11 = V_1;
		WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		// return null;
		return (WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563 *)NULL;
	}
}
// System.Boolean Unity.Services.Authentication.JwtDecoder::Verify(System.String,System.String,System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JwtDecoder_Verify_mD1959951504C6BB98EDB2E291E7CD2040D2AB519 (JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7 * __this, String_t* ___header0, String_t* ___payload1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___signature2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___modulus3, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___exponent4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSAPKCS1SignatureDeformatter_tEA19E0B65D1CA5C585E0492A7B830B8F34D68228_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * V_0 = NULL;
	RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  V_1;
	memset((&V_1), 0, sizeof(V_1));
	SHA256_t7F98FBD5AA9E2F4AC1A5C13FF7122AFF1A920452 * V_2 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (var rsa = new RSACryptoServiceProvider())
		RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * L_0 = (RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 *)il2cpp_codegen_object_new(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_il2cpp_TypeInfo_var);
		RSACryptoServiceProvider__ctor_m540359C328E1E9E9818A1192E34C74C986186B80(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			// rsa.ImportParameters(new RSAParameters
			// {
			//     Modulus = modulus,
			//     Exponent = exponent
			// });
			RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * L_1 = V_0;
			il2cpp_codegen_initobj((&V_1), sizeof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28 ));
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___modulus3;
			(&V_1)->set_Modulus_1(L_2);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___exponent4;
			(&V_1)->set_Exponent_0(L_3);
			RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_4 = V_1;
			NullCheck(L_1);
			VirtActionInvoker1< RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  >::Invoke(12 /* System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_1, L_4);
			// using (var sha256 = SHA256.Create())
			SHA256_t7F98FBD5AA9E2F4AC1A5C13FF7122AFF1A920452 * L_5;
			L_5 = SHA256_Create_mA93565DD491DC3380FB602957B00EA909FEB8A20(/*hidden argument*/NULL);
			V_2 = L_5;
		}

IL_002d:
		try
		{ // begin try (depth: 2)
			// var hash = sha256.ComputeHash(Encoding.UTF8.GetBytes(header + '.' + payload));
			SHA256_t7F98FBD5AA9E2F4AC1A5C13FF7122AFF1A920452 * L_6 = V_2;
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_7;
			L_7 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
			String_t* L_8 = ___header0;
			String_t* L_9 = ___payload1;
			String_t* L_10;
			L_10 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_8, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_9, /*hidden argument*/NULL);
			NullCheck(L_7);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
			L_11 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_7, L_10);
			NullCheck(L_6);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12;
			L_12 = HashAlgorithm_ComputeHash_m54AE40F9CD9E46736384369DBB5739FBCBDF67D9(L_6, L_11, /*hidden argument*/NULL);
			V_3 = L_12;
			// var rsaDeformatter = new RSAPKCS1SignatureDeformatter(rsa);
			RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * L_13 = V_0;
			RSAPKCS1SignatureDeformatter_tEA19E0B65D1CA5C585E0492A7B830B8F34D68228 * L_14 = (RSAPKCS1SignatureDeformatter_tEA19E0B65D1CA5C585E0492A7B830B8F34D68228 *)il2cpp_codegen_object_new(RSAPKCS1SignatureDeformatter_tEA19E0B65D1CA5C585E0492A7B830B8F34D68228_il2cpp_TypeInfo_var);
			RSAPKCS1SignatureDeformatter__ctor_m9DAC3CBA41CE93578EB3942360F47A3ADDE59278(L_14, L_13, /*hidden argument*/NULL);
			// rsaDeformatter.SetHashAlgorithm("SHA256");
			RSAPKCS1SignatureDeformatter_tEA19E0B65D1CA5C585E0492A7B830B8F34D68228 * L_15 = L_14;
			NullCheck(L_15);
			VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void System.Security.Cryptography.AsymmetricSignatureDeformatter::SetHashAlgorithm(System.String) */, L_15, _stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD);
			// return rsaDeformatter.VerifySignature(hash, signature);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = V_3;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = ___signature2;
			NullCheck(L_15);
			bool L_18;
			L_18 = VirtFuncInvoker2< bool, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(6 /* System.Boolean System.Security.Cryptography.AsymmetricSignatureDeformatter::VerifySignature(System.Byte[],System.Byte[]) */, L_15, L_16, L_17);
			V_4 = L_18;
			IL2CPP_LEAVE(0x7A, FINALLY_0066);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0066;
		}

FINALLY_0066:
		{ // begin finally (depth: 2)
			{
				SHA256_t7F98FBD5AA9E2F4AC1A5C13FF7122AFF1A920452 * L_19 = V_2;
				if (!L_19)
				{
					goto IL_006f;
				}
			}

IL_0069:
			{
				SHA256_t7F98FBD5AA9E2F4AC1A5C13FF7122AFF1A920452 * L_20 = V_2;
				NullCheck(L_20);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_20);
			}

IL_006f:
			{
				IL2CPP_END_FINALLY(102)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(102)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x7A, FINALLY_0070);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0070;
	}

FINALLY_0070:
	{ // begin finally (depth: 1)
		{
			RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * L_21 = V_0;
			if (!L_21)
			{
				goto IL_0079;
			}
		}

IL_0073:
		{
			RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * L_22 = V_0;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_22);
		}

IL_0079:
		{
			IL2CPP_END_FINALLY(112)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(112)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
	}

IL_007a:
	{
		// }
		bool L_23 = V_4;
		return L_23;
	}
}
// System.Byte[] Unity.Services.Authentication.JwtDecoder::Base64UrlDecode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* JwtDecoder_Base64UrlDecode_m829BE92817BA8542FA81374FBA5F878BF1AD16B7 (JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7 * __this, String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var output = input;
		String_t* L_0 = ___input0;
		V_0 = L_0;
		// output = output.Replace('-', '+'); // 62nd char of encoding
		String_t* L_1 = V_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618(L_1, ((int32_t)45), ((int32_t)43), /*hidden argument*/NULL);
		V_0 = L_2;
		// output = output.Replace('_', '/'); // 63rd char of encoding
		String_t* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618(L_3, ((int32_t)95), ((int32_t)47), /*hidden argument*/NULL);
		V_0 = L_4;
		// var mod4 = input.Length % 4;
		String_t* L_5 = ___input0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_5, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_6%(int32_t)4));
		// if (mod4 > 0)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		// output += new string('=', 4 - mod4);
		String_t* L_8 = V_0;
		int32_t L_9 = V_1;
		String_t* L_10;
		L_10 = String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED(NULL, ((int32_t)61), ((int32_t)il2cpp_codegen_subtract((int32_t)4, (int32_t)L_9)), /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_8, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_0036:
	{
		// var converted = Convert.FromBase64String(output); // Standard base64 decoder
		String_t* L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = Convert_FromBase64String_mB2E4E2CD03B34DB7C2665694D5B2E967BC81E9A8(L_12, /*hidden argument*/NULL);
		// return converted;
		return L_13;
	}
}
// System.Void Unity.Services.Authentication.JwtDecoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JwtDecoder__cctor_m8CD8BDD8980EF4ACAFA2E50232CF799AAB61B4D8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly DateTime k_UnixEpoch = new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_mCB99E35879988A22842FDDA9BBC3ACA74F1BEE38((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, /*hidden argument*/NULL);
		((JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7_StaticFields*)il2cpp_codegen_static_fields_for(JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7_il2cpp_TypeInfo_var))->set_k_UnixEpoch_0(L_0);
		// static readonly char[] k_JwtSeparator = { '.' };
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		((JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7_StaticFields*)il2cpp_codegen_static_fields_for(JwtDecoder_t98D9EEAB2D465A6B98F908716362356C85D0F3B7_il2cpp_TypeInfo_var))->set_k_JwtSeparator_1(L_2);
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
// System.Void Unity.Services.Authentication.LinkResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkResponse__ctor_mC47D865700A55D887BAB44840154FAA42AF86F83 (LinkResponse_t69751BCB51A8547BCB5567A4FF1AD97AB47A2DA2 * __this, const RuntimeMethod* method)
{
	{
		// public LinkResponse() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public LinkResponse() {}
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
// System.Void Unity.Services.Authentication.LinkWithExternalTokenRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkWithExternalTokenRequest__ctor_m08B0DC090262B742EC3B6D5D57B1F96CC682F95B (LinkWithExternalTokenRequest_t11D7023EF630F1B2E1B31AC4FD8977F8C7408A13 * __this, const RuntimeMethod* method)
{
	{
		// internal LinkWithExternalTokenRequest() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// internal LinkWithExternalTokenRequest() {}
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
// System.Void Unity.Services.Authentication.Logger::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogWarning_m89AD2E4C5CE3B0BA63F90C047DFEE64C59851430 (RuntimeObject * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral043E18C57EC839C385CDC2FA4FBC63FC3F4F1922);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void LogWarning(object message) => Debug.unityLogger.LogWarning(k_Tag, message);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m70D38067C3055104F6C8D050AB7CE0FDFD05EE22_inline(/*hidden argument*/NULL);
		RuntimeObject * L_1 = ___message0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(5 /* System.Void UnityEngine.ILogger::LogWarning(System.String,System.Object) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_0, _stringLiteral043E18C57EC839C385CDC2FA4FBC63FC3F4F1922, L_1);
		return;
	}
}
// System.Void Unity.Services.Authentication.Logger::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogError_m27F93E9B4188BC7B3D6317A6D3293A51CA01C062 (RuntimeObject * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral043E18C57EC839C385CDC2FA4FBC63FC3F4F1922);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void LogError(object message) => Debug.unityLogger.LogError(k_Tag, message);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m70D38067C3055104F6C8D050AB7CE0FDFD05EE22_inline(/*hidden argument*/NULL);
		RuntimeObject * L_1 = ___message0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(6 /* System.Void UnityEngine.ILogger::LogError(System.String,System.Object) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_0, _stringLiteral043E18C57EC839C385CDC2FA4FBC63FC3F4F1922, L_1);
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
// System.Int32 Unity.Services.Authentication.NetworkConfiguration::get_Retries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkConfiguration_get_Retries_m8B498ED158A39CAD213DA79B2429B1CA7AF0C4F3 (NetworkConfiguration_t6B15FC60FAF58C036FF7F48EB66DDB3ACA451430 * __this, const RuntimeMethod* method)
{
	{
		// public int Retries { get; set; } = k_DefaultRetries;
		int32_t L_0 = __this->get_U3CRetriesU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Int32 Unity.Services.Authentication.NetworkConfiguration::get_Timeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkConfiguration_get_Timeout_mC4DDB14385F6C41E0B385A44D30E401B8FD333B5 (NetworkConfiguration_t6B15FC60FAF58C036FF7F48EB66DDB3ACA451430 * __this, const RuntimeMethod* method)
{
	{
		// public int Timeout { get; set; } = k_DefaultTimeout;
		int32_t L_0 = __this->get_U3CTimeoutU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.NetworkConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkConfiguration__ctor_mC3E3A36A7F924D8F1878639321C146A04071E8F7 (NetworkConfiguration_t6B15FC60FAF58C036FF7F48EB66DDB3ACA451430 * __this, const RuntimeMethod* method)
{
	{
		// public int Retries { get; set; } = k_DefaultRetries;
		__this->set_U3CRetriesU3Ek__BackingField_0(2);
		// public int Timeout { get; set; } = k_DefaultTimeout;
		__this->set_U3CTimeoutU3Ek__BackingField_1(5);
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
// Unity.Services.Authentication.INetworkConfiguration Unity.Services.Authentication.NetworkHandler::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkHandler_get_Configuration_m164B3074FA5465959E99387544D7B84D16748AD5 (NetworkHandler_tA8820CE19530E53BE6AFF793C612117070A4049E * __this, const RuntimeMethod* method)
{
	{
		// INetworkConfiguration Configuration { get; }
		RuntimeObject* L_0 = __this->get_U3CConfigurationU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.NetworkHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkHandler__ctor_m988FC7CFE15CE1F4D89809942E90C6F3904CC644 (NetworkHandler_tA8820CE19530E53BE6AFF793C612117070A4049E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkConfiguration_t6B15FC60FAF58C036FF7F48EB66DDB3ACA451430_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NetworkHandler()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Configuration = new NetworkConfiguration();
		NetworkConfiguration_t6B15FC60FAF58C036FF7F48EB66DDB3ACA451430 * L_0 = (NetworkConfiguration_t6B15FC60FAF58C036FF7F48EB66DDB3ACA451430 *)il2cpp_codegen_object_new(NetworkConfiguration_t6B15FC60FAF58C036FF7F48EB66DDB3ACA451430_il2cpp_TypeInfo_var);
		NetworkConfiguration__ctor_mC3E3A36A7F924D8F1878639321C146A04071E8F7(L_0, /*hidden argument*/NULL);
		__this->set_U3CConfigurationU3Ek__BackingField_0(L_0);
		// }
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
// System.String Unity.Services.Authentication.PlayerIdComponent::get_PlayerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerIdComponent_get_PlayerId_m4957B73DF1907391FEDA66DC946AC1758B67B2D5 (PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * __this, const RuntimeMethod* method)
{
	{
		// public string PlayerId { get => GetPlayerId(); internal set => SetPlayerId(value); }
		String_t* L_0;
		L_0 = PlayerIdComponent_GetPlayerId_m6F0BFFC29AD13CF113D4D6C4351CC5D47C447A83(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.PlayerIdComponent::set_PlayerId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdComponent_set_PlayerId_m67FC4FAF6B4BC13C056FECAC893E8583F42A93C1 (PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string PlayerId { get => GetPlayerId(); internal set => SetPlayerId(value); }
		String_t* L_0 = ___value0;
		PlayerIdComponent_SetPlayerId_m9014B343E209D56698B01F14BEAC546F7068EB20(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Services.Authentication.PlayerIdComponent::.ctor(Unity.Services.Authentication.IAuthenticationCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdComponent__ctor_mC532CDEF131A15D279324E9F64D10A1CDD88BCE0 (PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * __this, RuntimeObject* ___cache0, const RuntimeMethod* method)
{
	{
		// internal PlayerIdComponent(IAuthenticationCache cache)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Cache = cache;
		RuntimeObject* L_0 = ___cache0;
		__this->set_m_Cache_1(L_0);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.PlayerIdComponent::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdComponent_Clear_m248222E0C66BB987DCAC4BD3C1601ACE6C6FE82C (PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICache_t07B36762C1F7A1E2741D9365149AF1D604D1CD65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C65A84C33F095FB079E7C138555673E537FD4FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Cache.DeleteKey(k_CacheKey);
		RuntimeObject* L_0 = __this->get_m_Cache_1();
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void Unity.Services.Authentication.ICache::DeleteKey(System.String) */, ICache_t07B36762C1F7A1E2741D9365149AF1D604D1CD65_il2cpp_TypeInfo_var, L_0, _stringLiteral7C65A84C33F095FB079E7C138555673E537FD4FF);
		// }
		return;
	}
}
// System.String Unity.Services.Authentication.PlayerIdComponent::GetPlayerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerIdComponent_GetPlayerId_m6F0BFFC29AD13CF113D4D6C4351CC5D47C447A83 (PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICache_t07B36762C1F7A1E2741D9365149AF1D604D1CD65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C65A84C33F095FB079E7C138555673E537FD4FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Cache.GetString(k_CacheKey);
		RuntimeObject* L_0 = __this->get_m_Cache_1();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(2 /* System.String Unity.Services.Authentication.ICache::GetString(System.String) */, ICache_t07B36762C1F7A1E2741D9365149AF1D604D1CD65_il2cpp_TypeInfo_var, L_0, _stringLiteral7C65A84C33F095FB079E7C138555673E537FD4FF);
		return L_1;
	}
}
// System.Void Unity.Services.Authentication.PlayerIdComponent::SetPlayerId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerIdComponent_SetPlayerId_m9014B343E209D56698B01F14BEAC546F7068EB20 (PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * __this, String_t* ___playerId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICache_t07B36762C1F7A1E2741D9365149AF1D604D1CD65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C65A84C33F095FB079E7C138555673E537FD4FF);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B3_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B2_0 = NULL;
	{
		// if (PlayerId != playerId)
		String_t* L_0;
		L_0 = PlayerIdComponent_get_PlayerId_m4957B73DF1907391FEDA66DC946AC1758B67B2D5(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___playerId0;
		bool L_2;
		L_2 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// m_Cache.SetString(k_CacheKey, playerId);
		RuntimeObject* L_3 = __this->get_m_Cache_1();
		String_t* L_4 = ___playerId0;
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void Unity.Services.Authentication.ICache::SetString(System.String,System.String) */, ICache_t07B36762C1F7A1E2741D9365149AF1D604D1CD65_il2cpp_TypeInfo_var, L_3, _stringLiteral7C65A84C33F095FB079E7C138555673E537FD4FF, L_4);
		// PlayerIdChanged?.Invoke(playerId);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_5 = __this->get_PlayerIdChanged_0();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_6 = L_5;
		G_B2_0 = L_6;
		if (L_6)
		{
			G_B3_0 = L_6;
			goto IL_002a;
		}
	}
	{
		return;
	}

IL_002a:
	{
		String_t* L_7 = ___playerId0;
		NullCheck(G_B3_0);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B3_0, L_7, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
	}

IL_0030:
	{
		// }
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
// System.Collections.Generic.List`1<Unity.Services.Authentication.Identity> Unity.Services.Authentication.PlayerInfo::get_Identities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A * PlayerInfo_get_Identities_m0F5766F970AE063F7DE842334C68B07F3EC23E9C (PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 * __this, const RuntimeMethod* method)
{
	{
		// public List<Identity> Identities { get; }
		List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A * L_0 = __this->get_U3CIdentitiesU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.PlayerInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo__ctor_m7BE8E88BE750D922FC7CCB91930088DEC3834896 (PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 * __this, String_t* ___playerId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3C1B8F51C701CB6203EB8B3E90F4D9F4326BE843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal PlayerInfo(string playerId)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Id = playerId;
		String_t* L_0 = ___playerId0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		// Identities = new List<Identity>();
		List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A * L_1 = (List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A *)il2cpp_codegen_object_new(List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A_il2cpp_TypeInfo_var);
		List_1__ctor_m3C1B8F51C701CB6203EB8B3E90F4D9F4326BE843(L_1, /*hidden argument*/List_1__ctor_m3C1B8F51C701CB6203EB8B3E90F4D9F4326BE843_RuntimeMethod_var);
		__this->set_U3CIdentitiesU3Ek__BackingField_2(L_1);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.PlayerInfo::.ctor(Unity.Services.Authentication.User)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo__ctor_m142965DB47E202DD489AA33278B3ABC7F34788CC (PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 * __this, User_tE23EBBD8E21FAAA920F180CA0F37DCB242AA5795 * ___user0, const RuntimeMethod* method)
{
	{
		// internal PlayerInfo(User user) : this(user.Id, user.CreatedAt, user.ExternalIds)
		User_tE23EBBD8E21FAAA920F180CA0F37DCB242AA5795 * L_0 = ___user0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Id_0();
		User_tE23EBBD8E21FAAA920F180CA0F37DCB242AA5795 * L_2 = ___user0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_CreatedAt_1();
		User_tE23EBBD8E21FAAA920F180CA0F37DCB242AA5795 * L_4 = ___user0;
		NullCheck(L_4);
		List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB * L_5 = L_4->get_ExternalIds_2();
		PlayerInfo__ctor_mF09E1AA604D81E72415E5319D82D96EDAF3949FF(__this, L_1, L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.PlayerInfo::.ctor(System.String,System.String,System.Collections.Generic.List`1<Unity.Services.Authentication.ExternalIdentity>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo__ctor_mF09E1AA604D81E72415E5319D82D96EDAF3949FF (PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 * __this, String_t* ___playerId0, String_t* ___createdAt1, List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB * ___externalIdentities2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m350061C4A479C181BD2590CDF2C0F74146B04097_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m98690085789DB5D924F26959ABDE2B42FFFC1B28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1FA92DE66111B3DBB2EE863487B72C2BED829928_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Identity_t2BAFC5C0BCB99BB68210854A8CEE5BA4CBBD0F61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDCE667BC298C263992DC5C9F61FCAE120BF991E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD75B6D12A8852B0D0EEFA8DB5964F130B4B1618B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3C1B8F51C701CB6203EB8B3E90F4D9F4326BE843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tAB5981142CC0EEC82DD2F7D043743930D7D4877D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ExternalIdentity_t340A154EA8E79B73A6BC04A7D835C8D7F922F724 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// internal PlayerInfo(string playerId, string createdAt, List<ExternalIdentity> externalIdentities)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Id = playerId;
		String_t* L_0 = ___playerId0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		// Identities = new List<Identity>();
		List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A * L_1 = (List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A *)il2cpp_codegen_object_new(List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A_il2cpp_TypeInfo_var);
		List_1__ctor_m3C1B8F51C701CB6203EB8B3E90F4D9F4326BE843(L_1, /*hidden argument*/List_1__ctor_m3C1B8F51C701CB6203EB8B3E90F4D9F4326BE843_RuntimeMethod_var);
		__this->set_U3CIdentitiesU3Ek__BackingField_2(L_1);
		// if (double.TryParse(createdAt, out var createAtSeconds))
		String_t* L_2 = ___createdAt1;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Double_TryParse_m9152D976CDFE0B30C7E251DDD04EAD6BBD0800B0(L_2, (double*)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		// var epoch = new DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
		DateTime__ctor_mE84FCDCEAD332A62B587191C5874DAD7C238CFEA((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_1), ((int32_t)1970), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		// CreatedAt = epoch.AddSeconds(createAtSeconds);
		double L_4 = V_0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_5;
		L_5 = DateTime_AddSeconds_mCA0940A7E7C3ED40A86532349B7D4CB3A0F0DEAF((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_1), L_4, /*hidden argument*/NULL);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB((&L_6), L_5, /*hidden argument*/Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var);
		__this->set_U3CCreatedAtU3Ek__BackingField_1(L_6);
	}

IL_0047:
	{
		// if (externalIdentities != null)
		List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB * L_7 = ___externalIdentities2;
		if (!L_7)
		{
			goto IL_0085;
		}
	}
	{
		// foreach (var externalId in externalIdentities)
		List_1_t0D5E1054CC3977EEEB2DFE735FA4B04BCC83B3AB * L_8 = ___externalIdentities2;
		NullCheck(L_8);
		Enumerator_tAB5981142CC0EEC82DD2F7D043743930D7D4877D  L_9;
		L_9 = List_1_GetEnumerator_mD75B6D12A8852B0D0EEFA8DB5964F130B4B1618B(L_8, /*hidden argument*/List_1_GetEnumerator_mD75B6D12A8852B0D0EEFA8DB5964F130B4B1618B_RuntimeMethod_var);
		V_2 = L_9;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006c;
		}

IL_0053:
		{
			// foreach (var externalId in externalIdentities)
			ExternalIdentity_t340A154EA8E79B73A6BC04A7D835C8D7F922F724 * L_10;
			L_10 = Enumerator_get_Current_m1FA92DE66111B3DBB2EE863487B72C2BED829928_inline((Enumerator_tAB5981142CC0EEC82DD2F7D043743930D7D4877D *)(&V_2), /*hidden argument*/Enumerator_get_Current_m1FA92DE66111B3DBB2EE863487B72C2BED829928_RuntimeMethod_var);
			V_3 = L_10;
			// Identities.Add(new Identity(externalId));
			List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A * L_11;
			L_11 = PlayerInfo_get_Identities_m0F5766F970AE063F7DE842334C68B07F3EC23E9C_inline(__this, /*hidden argument*/NULL);
			ExternalIdentity_t340A154EA8E79B73A6BC04A7D835C8D7F922F724 * L_12 = V_3;
			Identity_t2BAFC5C0BCB99BB68210854A8CEE5BA4CBBD0F61 * L_13 = (Identity_t2BAFC5C0BCB99BB68210854A8CEE5BA4CBBD0F61 *)il2cpp_codegen_object_new(Identity_t2BAFC5C0BCB99BB68210854A8CEE5BA4CBBD0F61_il2cpp_TypeInfo_var);
			Identity__ctor_m7273990582F881F65C5175A46D3F94F3CE55B2D0(L_13, L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			List_1_Add_mDCE667BC298C263992DC5C9F61FCAE120BF991E7(L_11, L_13, /*hidden argument*/List_1_Add_mDCE667BC298C263992DC5C9F61FCAE120BF991E7_RuntimeMethod_var);
		}

IL_006c:
		{
			// foreach (var externalId in externalIdentities)
			bool L_14;
			L_14 = Enumerator_MoveNext_m98690085789DB5D924F26959ABDE2B42FFFC1B28((Enumerator_tAB5981142CC0EEC82DD2F7D043743930D7D4877D *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m98690085789DB5D924F26959ABDE2B42FFFC1B28_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0053;
			}
		}

IL_0075:
		{
			IL2CPP_LEAVE(0x85, FINALLY_0077);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0077;
	}

FINALLY_0077:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m350061C4A479C181BD2590CDF2C0F74146B04097((Enumerator_tAB5981142CC0EEC82DD2F7D043743930D7D4877D *)(&V_2), /*hidden argument*/Enumerator_Dispose_m350061C4A479C181BD2590CDF2C0F74146B04097_RuntimeMethod_var);
		IL2CPP_END_FINALLY(119)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(119)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x85, IL_0085)
	}

IL_0085:
	{
		// }
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
// System.Void Unity.Services.Authentication.PlayerInfoResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfoResponse__ctor_m8373CA5EB9CA93FD66792F09FC6A9F10B204CEA3 (PlayerInfoResponse_t7B3E12499DA047B05A4796EC426A6C90065F5FC2 * __this, const RuntimeMethod* method)
{
	{
		// public PlayerInfoResponse() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public PlayerInfoResponse() {}
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
// System.String Unity.Services.Authentication.ProfileComponent::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProfileComponent_get_Current_m017782B2605A517D5DFEBB4A3A43B41CAC4DF7A6 (ProfileComponent_t84EEB27237207350AE110116875EAF9C246F4367 * __this, const RuntimeMethod* method)
{
	{
		// public string Current { get => _current; set => SetProfile(value); }
		String_t* L_0 = __this->get__current_1();
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.ProfileComponent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileComponent__ctor_m2C9F1751C10B5004B12EAB6B969203963A471983 (ProfileComponent_t84EEB27237207350AE110116875EAF9C246F4367 * __this, String_t* ___profile0, const RuntimeMethod* method)
{
	{
		// internal ProfileComponent(string profile)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// SetProfile(profile);
		String_t* L_0 = ___profile0;
		ProfileComponent_SetProfile_mD9D2387E75F5A34ED506C86DD6E60B7D7FB98C08(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.ProfileComponent::SetProfile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileComponent_SetProfile_mD9D2387E75F5A34ED506C86DD6E60B7D7FB98C08 (ProfileComponent_t84EEB27237207350AE110116875EAF9C246F4367 * __this, String_t* ___profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m9CC3B22AA36F0C57A2B7F085B9ED32E165DE93BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfileEventArgs_t7AB21391B1A7EAB039510112B4706389E650CFCB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t97B4C0A2C81634DF78A45DF0E8BFCA7ED20F4E87 * G_B2_0 = NULL;
	Action_1_t97B4C0A2C81634DF78A45DF0E8BFCA7ED20F4E87 * G_B1_0 = NULL;
	{
		// _current = profile;
		String_t* L_0 = ___profile0;
		__this->set__current_1(L_0);
		// ProfileChange?.Invoke(new ProfileEventArgs(_current));
		Action_1_t97B4C0A2C81634DF78A45DF0E8BFCA7ED20F4E87 * L_1 = __this->get_ProfileChange_0();
		Action_1_t97B4C0A2C81634DF78A45DF0E8BFCA7ED20F4E87 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		String_t* L_3 = __this->get__current_1();
		ProfileEventArgs_t7AB21391B1A7EAB039510112B4706389E650CFCB * L_4 = (ProfileEventArgs_t7AB21391B1A7EAB039510112B4706389E650CFCB *)il2cpp_codegen_object_new(ProfileEventArgs_t7AB21391B1A7EAB039510112B4706389E650CFCB_il2cpp_TypeInfo_var);
		ProfileEventArgs__ctor_m8F7D86D26FAB29A0794F2A43D4B9EFF5CE66F5BB(L_4, L_3, /*hidden argument*/NULL);
		NullCheck(G_B2_0);
		Action_1_Invoke_m9CC3B22AA36F0C57A2B7F085B9ED32E165DE93BB(G_B2_0, L_4, /*hidden argument*/Action_1_Invoke_m9CC3B22AA36F0C57A2B7F085B9ED32E165DE93BB_RuntimeMethod_var);
		// }
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
// System.Void Unity.Services.Authentication.ProfileEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileEventArgs__ctor_m8F7D86D26FAB29A0794F2A43D4B9EFF5CE66F5BB (ProfileEventArgs_t7AB21391B1A7EAB039510112B4706389E650CFCB * __this, String_t* ___profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ProfileEventArgs(string profile)
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		// Profile = profile;
		String_t* L_0 = ___profile0;
		__this->set_U3CProfileU3Ek__BackingField_1(L_0);
		// }
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
// System.String Unity.Services.Authentication.SessionTokenComponent::get_SessionToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionTokenComponent_get_SessionToken_mBE753CDE8271DB7F676DDD98A2AA47F9E8CADC22 (SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * __this, const RuntimeMethod* method)
{
	{
		// internal string SessionToken { get => GetSessionToken(); set => SetSessionToken(value); }
		String_t* L_0;
		L_0 = SessionTokenComponent_GetSessionToken_m39A5303D01671CDBFDF185B599B193C83DFF0459(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.SessionTokenComponent::set_SessionToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenComponent_set_SessionToken_mA0F02B56A97EF4E4030C687C3462103778B8BEFA (SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// internal string SessionToken { get => GetSessionToken(); set => SetSessionToken(value); }
		String_t* L_0 = ___value0;
		SessionTokenComponent_SetSessionToken_mAABCBBD0715DA94AD9F9C2C1A715923AC1ABB375(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Services.Authentication.SessionTokenComponent::.ctor(Unity.Services.Authentication.IAuthenticationCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenComponent__ctor_m481E6304C6ED4F7CB829C00B3EB80A9DB2AAF07B (SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * __this, RuntimeObject* ___cache0, const RuntimeMethod* method)
{
	{
		// internal SessionTokenComponent(IAuthenticationCache cache)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Cache = cache;
		RuntimeObject* L_0 = ___cache0;
		__this->set_m_Cache_0(L_0);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.SessionTokenComponent::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenComponent_Clear_m27747BAF3B5B4C158E801D23884800A8B2B51029 (SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICache_t07B36762C1F7A1E2741D9365149AF1D604D1CD65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Cache.DeleteKey(k_CacheKey);
		RuntimeObject* L_0 = __this->get_m_Cache_0();
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void Unity.Services.Authentication.ICache::DeleteKey(System.String) */, ICache_t07B36762C1F7A1E2741D9365149AF1D604D1CD65_il2cpp_TypeInfo_var, L_0, _stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990);
		// }
		return;
	}
}
// System.Void Unity.Services.Authentication.SessionTokenComponent::Migrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenComponent_Migrate_m80A127227B9CC7B5356E1DAB54C24A95B7BD583C (SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationCache_t9D5962ED0C8C59E24E5BEBD812413423CB47AD99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Cache.Migrate(k_CacheKey);
		RuntimeObject* L_0 = __this->get_m_Cache_0();
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void Unity.Services.Authentication.IAuthenticationCache::Migrate(System.String) */, IAuthenticationCache_t9D5962ED0C8C59E24E5BEBD812413423CB47AD99_il2cpp_TypeInfo_var, L_0, _stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990);
		// }
		return;
	}
}
// System.String Unity.Services.Authentication.SessionTokenComponent::GetSessionToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionTokenComponent_GetSessionToken_m39A5303D01671CDBFDF185B599B193C83DFF0459 (SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICache_t07B36762C1F7A1E2741D9365149AF1D604D1CD65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Cache.GetString(k_CacheKey);
		RuntimeObject* L_0 = __this->get_m_Cache_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(2 /* System.String Unity.Services.Authentication.ICache::GetString(System.String) */, ICache_t07B36762C1F7A1E2741D9365149AF1D604D1CD65_il2cpp_TypeInfo_var, L_0, _stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990);
		return L_1;
	}
}
// System.Void Unity.Services.Authentication.SessionTokenComponent::SetSessionToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenComponent_SetSessionToken_mAABCBBD0715DA94AD9F9C2C1A715923AC1ABB375 (SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * __this, String_t* ___sessionToken0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICache_t07B36762C1F7A1E2741D9365149AF1D604D1CD65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Cache.SetString(k_CacheKey, sessionToken);
		RuntimeObject* L_0 = __this->get_m_Cache_0();
		String_t* L_1 = ___sessionToken0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void Unity.Services.Authentication.ICache::SetString(System.String,System.String) */, ICache_t07B36762C1F7A1E2741D9365149AF1D604D1CD65_il2cpp_TypeInfo_var, L_0, _stringLiteralAE7E6AE60C8EC55BA909CC1BA73A40DC066F9990, L_1);
		// }
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
// System.Void Unity.Services.Authentication.SessionTokenRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionTokenRequest__ctor_m2B6028D736AA3CA532722B94633E29D840968208 (SessionTokenRequest_t2E7C97561A7DA7B27587356C426D795EDA0194BD * __this, const RuntimeMethod* method)
{
	{
		// public SessionTokenRequest() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public SessionTokenRequest() {}
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
// System.Boolean Unity.Services.Authentication.SignInOptions::get_CreateAccount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SignInOptions_get_CreateAccount_m57FD32C6C36343090735D3DA29856088F58E250F (SignInOptions_tFF19EE3FE0A9A233A1AFDBADA8975DD5BA28DDED * __this, const RuntimeMethod* method)
{
	{
		// public bool CreateAccount { get; set; }
		bool L_0 = __this->get_U3CCreateAccountU3Ek__BackingField_0();
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
// System.Void Unity.Services.Authentication.SignInResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInResponse__ctor_mD85A5DE8AE29F551F7AD8B7CB3275318BC31D34D (SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * __this, const RuntimeMethod* method)
{
	{
		// public SignInResponse() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public SignInResponse() {}
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
// System.Void Unity.Services.Authentication.SignInWithExternalTokenRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInWithExternalTokenRequest__ctor_m4C2C377FB2DDF630FA9425861A8704F6B2569C67 (SignInWithExternalTokenRequest_t8B11B8478FB90A6FE5E0128E26EA8E534C794D6E * __this, const RuntimeMethod* method)
{
	{
		// internal SignInWithExternalTokenRequest() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// internal SignInWithExternalTokenRequest() {}
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
// System.Void Unity.Services.Authentication.UnlinkRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkRequest__ctor_mB973918DCDD2ED0054DC032B02CCB47056DC995C (UnlinkRequest_t0E793DFA3800A96E0D1F35D1BC8FF970C9B5AEB5 * __this, const RuntimeMethod* method)
{
	{
		// internal UnlinkRequest() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// internal UnlinkRequest() {}
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
// System.Void Unity.Services.Authentication.UnlinkResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlinkResponse__ctor_mD5C6FA8E9AAB3D47CA7B2D1CED7FD0E605171487 (UnlinkResponse_t857863FF44726429186E2C6CBF43A861C6133FD0 * __this, const RuntimeMethod* method)
{
	{
		// public UnlinkResponse() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public UnlinkResponse() {}
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
// System.Void Unity.Services.Authentication.User::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_mB5EFE912A5F1559CCAED1A985096F3EEF8A41581 (User_tE23EBBD8E21FAAA920F180CA0F37DCB242AA5795 * __this, const RuntimeMethod* method)
{
	{
		// public User() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public User() {}
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
// Unity.Services.Authentication.INetworkConfiguration Unity.Services.Authentication.WebRequest::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebRequest_get_Configuration_mE815C1CBDB6A086D00B915A9C22EC4E916870C98 (WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * __this, const RuntimeMethod* method)
{
	{
		// internal INetworkConfiguration Configuration { get; }
		RuntimeObject* L_0 = __this->get_U3CConfigurationU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Int32 Unity.Services.Authentication.WebRequest::get_Retries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRequest_get_Retries_mB9795033114913C44BE87F5A05F50668316D0D4E (WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * __this, const RuntimeMethod* method)
{
	{
		// internal int Retries { get; private set; }
		int32_t L_0 = __this->get_U3CRetriesU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.WebRequest::set_Retries(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequest_set_Retries_m209B8993903A208CFEF7BCF8F088F13576EC7154 (WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int Retries { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRetriesU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void Unity.Services.Authentication.WebRequest::.ctor(Unity.Services.Authentication.INetworkConfiguration,Unity.Services.Authentication.WebRequestVerb,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequest__ctor_m57D1518E48CED9CF5BEDF31D4F005ACF24B02DD5 (WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * __this, RuntimeObject* ___configuration0, int32_t ___verb1, String_t* ___url2, RuntimeObject* ___headers3, String_t* ___payload4, String_t* ___payloadContentType5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly JsonSerializerSettings m_JsonSerializerSettings = new JsonSerializerSettings { NullValueHandling = NullValueHandling.Ignore };
		JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8 * L_0 = (JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8 *)il2cpp_codegen_object_new(JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8_il2cpp_TypeInfo_var);
		JsonSerializerSettings__ctor_m903CE3365DEA2C8167994B5FD878BD34825C72EA(L_0, /*hidden argument*/NULL);
		JsonSerializerSettings_t7C985E2CEF771B43357D6278AC576915BDE88BC8 * L_1 = L_0;
		NullCheck(L_1);
		JsonSerializerSettings_set_NullValueHandling_mBD2CC55F38FF2D418402376DAEDB311FB22DE22E(L_1, 1, /*hidden argument*/NULL);
		__this->set_m_JsonSerializerSettings_5(L_1);
		// internal WebRequest(INetworkConfiguration configuration,
		//                     WebRequestVerb verb,
		//                     string url,
		//                     IDictionary<string, string> headers,
		//                     string payload,
		//                     string payloadContentType)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Configuration = configuration;
		RuntimeObject* L_2 = ___configuration0;
		__this->set_U3CConfigurationU3Ek__BackingField_6(L_2);
		// m_Verb = verb;
		int32_t L_3 = ___verb1;
		__this->set_m_Verb_0(L_3);
		// m_Url = url;
		String_t* L_4 = ___url2;
		__this->set_m_Url_1(L_4);
		// m_Headers = headers;
		RuntimeObject* L_5 = ___headers3;
		__this->set_m_Headers_2(L_5);
		// m_Payload = payload;
		String_t* L_6 = ___payload4;
		__this->set_m_Payload_3(L_6);
		// m_PayloadContentType = payloadContentType;
		String_t* L_7 = ___payloadContentType5;
		__this->set_m_PayloadContentType_4(L_7);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> Unity.Services.Authentication.WebRequest::SendAttemptAsync(System.Threading.Tasks.TaskCompletionSource`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * WebRequest_SendAttemptAsync_mC29F48105086F4D891B3B343D261EB658566A09A (WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * __this, TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * ___tcs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3CSendAttemptAsyncU3Eb__0_m97AB673D87CEF1C1830A54CAAB72643351F21955_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_tF37DBED51743B80AAE9FE0A94A6E1B749CDF687F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass16_0_tF37DBED51743B80AAE9FE0A94A6E1B749CDF687F * V_0 = NULL;
	Exception_t * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		U3CU3Ec__DisplayClass16_0_tF37DBED51743B80AAE9FE0A94A6E1B749CDF687F * L_0 = (U3CU3Ec__DisplayClass16_0_tF37DBED51743B80AAE9FE0A94A6E1B749CDF687F *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass16_0_tF37DBED51743B80AAE9FE0A94A6E1B749CDF687F_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass16_0__ctor_m80E69D2DC9FB882880251ADB39019033B78E6FE6(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass16_0_tF37DBED51743B80AAE9FE0A94A6E1B749CDF687F * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass16_0_tF37DBED51743B80AAE9FE0A94A6E1B749CDF687F * L_2 = V_0;
		TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_3 = ___tcs0;
		NullCheck(L_2);
		L_2->set_tcs_1(L_3);
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		// var request = Build();
		U3CU3Ec__DisplayClass16_0_tF37DBED51743B80AAE9FE0A94A6E1B749CDF687F * L_4 = V_0;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_5;
		L_5 = WebRequest_Build_m6D1DDE039F7765E509FFD6773AA56C03B6B06955(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_request_2(L_5);
		// request.SendWebRequest().completed += (operation) =>
		// {
		//     RequestCompleted(tcs,
		//         request.responseCode,
		//         RequestHasNetworkError(request),
		//         RequestHasServerError(request),
		//         request.error,
		//         request.downloadHandler?.text,
		//         request.GetResponseHeaders());
		//     request.Dispose();
		// };
		U3CU3Ec__DisplayClass16_0_tF37DBED51743B80AAE9FE0A94A6E1B749CDF687F * L_6 = V_0;
		NullCheck(L_6);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7 = L_6->get_request_2();
		NullCheck(L_7);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_8;
		L_8 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_7, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass16_0_tF37DBED51743B80AAE9FE0A94A6E1B749CDF687F * L_9 = V_0;
		Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * L_10 = (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 *)il2cpp_codegen_object_new(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var);
		Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass16_0_U3CSendAttemptAsyncU3Eb__0_m97AB673D87CEF1C1830A54CAAB72643351F21955_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var);
		NullCheck(L_8);
		AsyncOperation_add_completed_m44D28A82BB10C85AED56A43BB666850D2E9E59E8(L_8, L_10, /*hidden argument*/NULL);
		// }
		goto IL_004d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003e;
		}
		throw e;
	}

CATCH_003e:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// tcs.SetException(e);
		U3CU3Ec__DisplayClass16_0_tF37DBED51743B80AAE9FE0A94A6E1B749CDF687F * L_11 = V_0;
		NullCheck(L_11);
		TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_12 = L_11->get_tcs_1();
		Exception_t * L_13 = V_1;
		NullCheck(L_12);
		TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA(L_12, L_13, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	} // end catch (depth: 1)

IL_004d:
	{
		// return tcs.Task;
		U3CU3Ec__DisplayClass16_0_tF37DBED51743B80AAE9FE0A94A6E1B749CDF687F * L_14 = V_0;
		NullCheck(L_14);
		TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_15 = L_14->get_tcs_1();
		NullCheck(L_15);
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_16;
		L_16 = TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_inline(L_15, /*hidden argument*/TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_RuntimeMethod_var);
		return L_16;
	}
}
// UnityEngine.Networking.UnityWebRequest Unity.Services.Authentication.WebRequest::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * WebRequest_Build_m6D1DDE039F7765E509FFD6773AA56C03B6B06955 (WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tFBD6BBCAEB863478E70CD1504627E429F27569AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t692ABF80A29FB82368A57AE22841134E3626E47A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkConfiguration_tF6EC3BF3F7DD6EA759A3DCF06F625E9B70C17809_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// switch (m_Verb)
		int32_t L_0 = __this->get_m_Verb_0();
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0081;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_0092;
			}
			case 3:
			{
				goto IL_00e3;
			}
		}
	}
	{
		goto IL_00fc;
	}

IL_0022:
	{
		// if (string.IsNullOrEmpty(m_Payload))
		String_t* L_2 = __this->get_m_Payload_3();
		bool L_3;
		L_3 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// unityWebRequest = UnityWebRequest.Post(m_Url, string.Empty);
		String_t* L_4 = __this->get_m_Url_1();
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6;
		L_6 = UnityWebRequest_Post_m661DC62ED36C9BA54246F5795DB8866BE2948739(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// }
		goto IL_011d;
	}

IL_0045:
	{
		// unityWebRequest = new UnityWebRequest(m_Url, UnityWebRequest.kHttpVerbPOST)
		// {
		//     uploadHandler = new UploadHandlerRaw(Encoding.UTF8.GetBytes(m_Payload)),
		//     downloadHandler = new DownloadHandlerBuffer()
		// };
		String_t* L_7 = __this->get_m_Url_1();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975(L_8, L_7, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = L_8;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_10;
		L_10 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_11 = __this->get_m_Payload_3();
		NullCheck(L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12;
		L_12 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_10, L_11);
		UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * L_13 = (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *)il2cpp_codegen_object_new(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9(L_13, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA(L_9, L_13, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_14 = L_9;
		DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_15 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2(L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_14;
		// break;
		goto IL_011d;
	}

IL_0081:
	{
		// unityWebRequest = UnityWebRequest.Get(m_Url);
		String_t* L_16 = __this->get_m_Url_1();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_17;
		L_17 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		// break;
		goto IL_011d;
	}

IL_0092:
	{
		// if (string.IsNullOrEmpty(m_Payload))
		String_t* L_18 = __this->get_m_Payload_3();
		bool L_19;
		L_19 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00aa;
		}
	}
	{
		// throw new ArgumentException("PUT payload cannot be empty.");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_20 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10E85A1C982FD89AD3C7F21301C7CEF7FA7E7CEC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRequest_Build_m6D1DDE039F7765E509FFD6773AA56C03B6B06955_RuntimeMethod_var)));
	}

IL_00aa:
	{
		// unityWebRequest = new UnityWebRequest(m_Url, UnityWebRequest.kHttpVerbPUT)
		// {
		//     uploadHandler = new UploadHandlerRaw(Encoding.UTF8.GetBytes(m_Payload)),
		//     downloadHandler = new DownloadHandlerBuffer()
		// };
		String_t* L_21 = __this->get_m_Url_1();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_22 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975(L_22, L_21, _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_23 = L_22;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_24;
		L_24 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_25 = __this->get_m_Payload_3();
		NullCheck(L_24);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26;
		L_26 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_24, L_25);
		UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * L_27 = (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *)il2cpp_codegen_object_new(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9(L_27, L_26, /*hidden argument*/NULL);
		NullCheck(L_23);
		UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA(L_23, L_27, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_28 = L_23;
		DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_29 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2(L_28, L_29, /*hidden argument*/NULL);
		V_0 = L_28;
		// break;
		goto IL_011d;
	}

IL_00e3:
	{
		// unityWebRequest = UnityWebRequest.Delete(m_Url);
		String_t* L_30 = __this->get_m_Url_1();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_31;
		L_31 = UnityWebRequest_Delete_m5BC5399C131263E04A677CF8494D15DA7888C7F3(L_30, /*hidden argument*/NULL);
		V_0 = L_31;
		// unityWebRequest.downloadHandler = new DownloadHandlerBuffer();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_32 = V_0;
		DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_33 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_33, /*hidden argument*/NULL);
		NullCheck(L_32);
		UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2(L_32, L_33, /*hidden argument*/NULL);
		// break;
		goto IL_011d;
	}

IL_00fc:
	{
		// throw new ArgumentException("Unknown verb " + m_Verb);
		int32_t* L_34 = __this->get_address_of_m_Verb_0();
		RuntimeObject * L_35 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRequestVerb_t782ED4D2CC2F1CA91D4492BFCF82C3753B16447A_il2cpp_TypeInfo_var)), L_34);
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_35);
		*L_34 = *(int32_t*)UnBox(L_35);
		String_t* L_37;
		L_37 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral296A65E2A28A506DAA998C4B70E93737444F0726)), L_36, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_38 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_38, L_37, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRequest_Build_m6D1DDE039F7765E509FFD6773AA56C03B6B06955_RuntimeMethod_var)));
	}

IL_011d:
	{
		// if (!string.IsNullOrEmpty(m_PayloadContentType))
		String_t* L_39 = __this->get_m_PayloadContentType_4();
		bool L_40;
		L_40 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_39, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_013b;
		}
	}
	{
		// unityWebRequest.SetRequestHeader("Content-Type", m_PayloadContentType);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_41 = V_0;
		String_t* L_42 = __this->get_m_PayloadContentType_4();
		NullCheck(L_41);
		UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_41, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, L_42, /*hidden argument*/NULL);
	}

IL_013b:
	{
		// if (m_Headers != null)
		RuntimeObject* L_43 = __this->get_m_Headers_2();
		if (!L_43)
		{
			goto IL_0180;
		}
	}
	{
		// foreach (var headerAndValue in m_Headers)
		RuntimeObject* L_44 = __this->get_m_Headers_2();
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_tFBD6BBCAEB863478E70CD1504627E429F27569AA_il2cpp_TypeInfo_var, L_44);
		V_2 = L_45;
	}

IL_014f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_016c;
		}

IL_0151:
		{
			// foreach (var headerAndValue in m_Headers)
			RuntimeObject* L_46 = V_2;
			NullCheck(L_46);
			KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_47;
			L_47 = InterfaceFuncInvoker0< KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t692ABF80A29FB82368A57AE22841134E3626E47A_il2cpp_TypeInfo_var, L_46);
			V_3 = L_47;
			// unityWebRequest.SetRequestHeader(headerAndValue.Key, headerAndValue.Value);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_48 = V_0;
			String_t* L_49;
			L_49 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
			String_t* L_50;
			L_50 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
			NullCheck(L_48);
			UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_48, L_49, L_50, /*hidden argument*/NULL);
		}

IL_016c:
		{
			// foreach (var headerAndValue in m_Headers)
			RuntimeObject* L_51 = V_2;
			NullCheck(L_51);
			bool L_52;
			L_52 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_51);
			if (L_52)
			{
				goto IL_0151;
			}
		}

IL_0174:
		{
			IL2CPP_LEAVE(0x180, FINALLY_0176);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0176;
	}

FINALLY_0176:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_53 = V_2;
			if (!L_53)
			{
				goto IL_017f;
			}
		}

IL_0179:
		{
			RuntimeObject* L_54 = V_2;
			NullCheck(L_54);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_54);
		}

IL_017f:
		{
			IL2CPP_END_FINALLY(374)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(374)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x180, IL_0180)
	}

IL_0180:
	{
		// unityWebRequest.timeout = Configuration.Timeout;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_55 = V_0;
		RuntimeObject* L_56;
		L_56 = WebRequest_get_Configuration_mE815C1CBDB6A086D00B915A9C22EC4E916870C98_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Unity.Services.Authentication.INetworkConfiguration::get_Timeout() */, INetworkConfiguration_tF6EC3BF3F7DD6EA759A3DCF06F625E9B70C17809_il2cpp_TypeInfo_var, L_56);
		NullCheck(L_55);
		UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90(L_55, L_57, /*hidden argument*/NULL);
		// return unityWebRequest;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_58 = V_0;
		return L_58;
	}
}
// System.Void Unity.Services.Authentication.WebRequest::RequestCompleted(System.Threading.Tasks.TaskCompletionSource`1<System.String>,System.Int64,System.Boolean,System.Boolean,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequest_RequestCompleted_mDAF35B91908AFBE5C0859D0854581BD6B2D73477 (WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * __this, TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * ___tcs0, int64_t ___responseCode1, bool ___isNetworkError2, bool ___isServerError3, String_t* ___errorText4, String_t* ___bodyText5, RuntimeObject* ___headers6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkConfiguration_tF6EC3BF3F7DD6EA759A3DCF06F625E9B70C17809_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m2741E572F08EDD2E8976B6020E85A1BDB98D6201_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4511699820F543B7439635CD03C9DF85473764E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D8209EB4C6E9DAA475A67D53CE5B15D8209D862);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * V_2 = NULL;
	String_t* G_B8_0 = NULL;
	{
		// if (isNetworkError && Retries < Configuration.Retries)
		bool L_0 = ___isNetworkError2;
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_1;
		L_1 = WebRequest_get_Retries_mB9795033114913C44BE87F5A05F50668316D0D4E_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2;
		L_2 = WebRequest_get_Configuration_mE815C1CBDB6A086D00B915A9C22EC4E916870C98_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.Services.Authentication.INetworkConfiguration::get_Retries() */, INetworkConfiguration_tF6EC3BF3F7DD6EA759A3DCF06F625E9B70C17809_il2cpp_TypeInfo_var, L_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0039;
		}
	}
	{
		// Logger.LogWarning("Network error detected, retrying...");
		Logger_LogWarning_m89AD2E4C5CE3B0BA63F90C047DFEE64C59851430(_stringLiteral9D8209EB4C6E9DAA475A67D53CE5B15D8209D862, /*hidden argument*/NULL);
		// Retries++;
		int32_t L_4;
		L_4 = WebRequest_get_Retries_mB9795033114913C44BE87F5A05F50668316D0D4E_inline(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		WebRequest_set_Retries_m209B8993903A208CFEF7BCF8F088F13576EC7154_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), /*hidden argument*/NULL);
		// SendAttemptAsync(tcs);
		TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_6 = ___tcs0;
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_7;
		L_7 = WebRequest_SendAttemptAsync_mC29F48105086F4D891B3B343D261EB658566A09A(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0039:
	{
		// if (isNetworkError || isServerError)
		bool L_8 = ___isNetworkError2;
		bool L_9 = ___isServerError3;
		if (!((int32_t)((int32_t)L_8|(int32_t)L_9)))
		{
			goto IL_0079;
		}
	}
	{
		// var errorMessage = (isServerError && !string.IsNullOrEmpty(bodyText)) ? bodyText : errorText;
		bool L_10 = ___isServerError3;
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_11 = ___bodyText5;
		bool L_12;
		L_12 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0050;
		}
	}

IL_004c:
	{
		String_t* L_13 = ___errorText4;
		G_B8_0 = L_13;
		goto IL_0052;
	}

IL_0050:
	{
		String_t* L_14 = ___bodyText5;
		G_B8_0 = L_14;
	}

IL_0052:
	{
		V_1 = G_B8_0;
		// var exception = new WebRequestException(isNetworkError, isServerError, false, responseCode, errorMessage, headers);
		bool L_15 = ___isNetworkError2;
		bool L_16 = ___isServerError3;
		int64_t L_17 = ___responseCode1;
		String_t* L_18 = V_1;
		RuntimeObject* L_19 = ___headers6;
		WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * L_20 = (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 *)il2cpp_codegen_object_new(WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6_il2cpp_TypeInfo_var);
		WebRequestException__ctor_m53042F8EC4F6C40C683BECF75DCC97EB375898E1(L_20, L_15, L_16, (bool)0, L_17, L_18, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		// tcs.SetException(exception);
		TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_21 = ___tcs0;
		WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * L_22 = V_2;
		NullCheck(L_21);
		TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA(L_21, L_22, /*hidden argument*/TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA_RuntimeMethod_var);
		// Logger.LogWarning($"Request completed with error: {errorMessage}");
		String_t* L_23 = V_1;
		String_t* L_24;
		L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral4511699820F543B7439635CD03C9DF85473764E4, L_23, /*hidden argument*/NULL);
		Logger_LogWarning_m89AD2E4C5CE3B0BA63F90C047DFEE64C59851430(L_24, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0079:
	{
		// tcs.SetResult(bodyText);
		TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_25 = ___tcs0;
		String_t* L_26 = ___bodyText5;
		NullCheck(L_25);
		TaskCompletionSource_1_SetResult_m2741E572F08EDD2E8976B6020E85A1BDB98D6201(L_25, L_26, /*hidden argument*/TaskCompletionSource_1_SetResult_m2741E572F08EDD2E8976B6020E85A1BDB98D6201_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Unity.Services.Authentication.WebRequest::RequestHasServerError(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRequest_RequestHasServerError_m6B11C6BA8EDEE6B7A48513D5A573ED605CA275FA (WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___request0, const RuntimeMethod* method)
{
	{
		// return request.responseCode >= 400;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = ___request0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int64_t)L_1) < ((int64_t)((int64_t)((int64_t)((int32_t)400)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Unity.Services.Authentication.WebRequest::RequestHasNetworkError(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRequest_RequestHasNetworkError_m88DDC062108A0A69D9DF3621E1A40FF91CCAC3E1 (WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDDEE3EA3FCE79DBEAF010D60B12A635E292209E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return request.result == UnityWebRequest.Result.ConnectionError && request.error != "Redirect limit exceeded";
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = ___request0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_2 = ___request0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_3, _stringLiteralFDDEE3EA3FCE79DBEAF010D60B12A635E292209E, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
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
// System.Boolean Unity.Services.Authentication.WebRequestException::get_NetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRequestException_get_NetworkError_m645FAC3101DC039DD6CE649F7984450CE8CCCC0F (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, const RuntimeMethod* method)
{
	{
		// public bool NetworkError { get; private set; }
		bool L_0 = __this->get_U3CNetworkErrorU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.WebRequestException::set_NetworkError(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestException_set_NetworkError_mC1FA2EFF205250B122AD4A44B494B63850C7722B (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool NetworkError { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CNetworkErrorU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Void Unity.Services.Authentication.WebRequestException::set_DeserializationError(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestException_set_DeserializationError_m36196B7BE547C0925B66FE28273CC689C0342131 (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool DeserializationError { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CDeserializationErrorU3Ek__BackingField_18(L_0);
		return;
	}
}
// System.Void Unity.Services.Authentication.WebRequestException::set_ServerError(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestException_set_ServerError_m214BE708A528B63FA7FB0484514AF02D7ECFBF83 (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ServerError { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CServerErrorU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Int64 Unity.Services.Authentication.WebRequestException::get_ResponseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WebRequestException_get_ResponseCode_mE7F0EB27F64B0E2B93D8D1C1B8BFB95F5B42C99D (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, const RuntimeMethod* method)
{
	{
		// public long ResponseCode { get; private set; }
		int64_t L_0 = __this->get_U3CResponseCodeU3Ek__BackingField_20();
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.WebRequestException::set_ResponseCode(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestException_set_ResponseCode_mCD4590D5F88BA28ED3406FE765783C9ED72828A1 (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// public long ResponseCode { get; private set; }
		int64_t L_0 = ___value0;
		__this->set_U3CResponseCodeU3Ek__BackingField_20(L_0);
		return;
	}
}
// System.Void Unity.Services.Authentication.WebRequestException::set_ResponseHeaders(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestException_set_ResponseHeaders_mF585FC95469C086FF17914E8CA0C0A3D942331B7 (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IDictionary<string, string> ResponseHeaders { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CResponseHeadersU3Ek__BackingField_21(L_0);
		return;
	}
}
// System.Void Unity.Services.Authentication.WebRequestException::.ctor(System.Boolean,System.Boolean,System.Boolean,System.Int64,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestException__ctor_m53042F8EC4F6C40C683BECF75DCC97EB375898E1 (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, bool ___isNetworkError0, bool ___isServerError1, bool ___isDeserializationError2, int64_t ___responseCode3, String_t* ___errorMessage4, RuntimeObject* ___responseHeaders5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal WebRequestException(bool isNetworkError, bool isServerError, bool isDeserializationError, long responseCode, string errorMessage, IDictionary<string, string> responseHeaders = null) : base(errorMessage)
		String_t* L_0 = ___errorMessage4;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		// NetworkError = isNetworkError;
		bool L_1 = ___isNetworkError0;
		WebRequestException_set_NetworkError_mC1FA2EFF205250B122AD4A44B494B63850C7722B_inline(__this, L_1, /*hidden argument*/NULL);
		// ServerError = isServerError;
		bool L_2 = ___isServerError1;
		WebRequestException_set_ServerError_m214BE708A528B63FA7FB0484514AF02D7ECFBF83_inline(__this, L_2, /*hidden argument*/NULL);
		// DeserializationError = isDeserializationError;
		bool L_3 = ___isDeserializationError2;
		WebRequestException_set_DeserializationError_m36196B7BE547C0925B66FE28273CC689C0342131_inline(__this, L_3, /*hidden argument*/NULL);
		// ResponseCode = responseCode;
		int64_t L_4 = ___responseCode3;
		WebRequestException_set_ResponseCode_mCD4590D5F88BA28ED3406FE765783C9ED72828A1_inline(__this, L_4, /*hidden argument*/NULL);
		// ResponseHeaders = responseHeaders;
		RuntimeObject* L_5 = ___responseHeaders5;
		WebRequestException_set_ResponseHeaders_mF585FC95469C086FF17914E8CA0C0A3D942331B7_inline(__this, L_5, /*hidden argument*/NULL);
		// }
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
// System.Void Unity.Services.Authentication.WellKnownKey::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WellKnownKey__ctor_mC67FDF842A2D123CCC199B3C985E694C51909775 (WellKnownKey_tEB0A16E34854C7FDD563B544324BC7A0E2913563 * __this, const RuntimeMethod* method)
{
	{
		// public WellKnownKey() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public WellKnownKey() {}
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
// Unity.Services.Authentication.WellKnownKey[] Unity.Services.Authentication.WellKnownKeysComponent::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* WellKnownKeysComponent_get_Keys_m651DBE0F1FFFD2929ADC5BDC8126819EFBF46423 (WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * __this, const RuntimeMethod* method)
{
	{
		// public WellKnownKey[] Keys { get; internal set; }
		WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* L_0 = __this->get_U3CKeysU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.Services.Authentication.WellKnownKeysComponent::set_Keys(Unity.Services.Authentication.WellKnownKey[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WellKnownKeysComponent_set_Keys_mD0A251052C38E066D9DADD6EB842DF4226508B96 (WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * __this, WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* ___value0, const RuntimeMethod* method)
{
	{
		// public WellKnownKey[] Keys { get; internal set; }
		WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* L_0 = ___value0;
		__this->set_U3CKeysU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Unity.Services.Authentication.WellKnownKeysComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WellKnownKeysComponent__ctor_m9E1D834A356744CBAD7CEDE7EC5C1A8C392E931E (WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * __this, const RuntimeMethod* method)
{
	{
		// internal WellKnownKeysComponent()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
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
// System.Void Unity.Services.Authentication.WellKnownKeysResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WellKnownKeysResponse__ctor_m995CAA7D3E7014B15848B82829B5947C608B1B91 (WellKnownKeysResponse_t362C5F2449BC6E27CFF9E8DA7E3BEF85044AA899 * __this, const RuntimeMethod* method)
{
	{
		// public WellKnownKeysResponse() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public WellKnownKeysResponse() {}
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
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m474A12FFFEC5968D8567A4C84F4302DDCE548212 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB * L_0 = (U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB *)il2cpp_codegen_object_new(U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA486789C3592050AA93509A53FF13DC3D625509C(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA486789C3592050AA93509A53FF13DC3D625509C (U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Services.Authentication.AuthenticationServiceInternal/<>c::<CompleteSignIn>b__110_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCompleteSignInU3Eb__110_0_m64200A83BF0406C3575F1100582395123CD94490 (U3CU3Ec_tD84A267C8F5DF7D89DFF276E87E0F183FC8F5CDB * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC88D38D30295ACC007AF41EA6369A9C7D096CB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EnvironmentIdComponent.EnvironmentId = accessTokenDecoded.Audience.FirstOrDefault(s => s.StartsWith("envId:"))?.Substring(6);
		String_t* L_0 = ___s0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_0, _stringLiteral3EC88D38D30295ACC007AF41EA6369A9C7D096CB, /*hidden argument*/NULL);
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
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass76_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass76_0__ctor_mD4B48FB6A86272D0A578DE4915F8CD38026E327B (U3CU3Ec__DisplayClass76_0_tDEF0AEC69CC4EF20E39A0B4DF5F220A8A555B4A8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse> Unity.Services.Authentication.AuthenticationServiceInternal/<>c__DisplayClass76_0::<SignInAnonymouslyAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 * U3CU3Ec__DisplayClass76_0_U3CSignInAnonymouslyAsyncU3Eb__0_mC7E760D3EB52567D4DE5C0B2DE263173FF3A82A2 (U3CU3Ec__DisplayClass76_0_tDEF0AEC69CC4EF20E39A0B4DF5F220A8A555B4A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationNetworkClient_t466AAAF8599451A867223E528F939CD3143FB3A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return HandleSignInRequestAsync(() => NetworkClient.SignInWithSessionTokenAsync(sessionToken));
		AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = AuthenticationServiceInternal_get_NetworkClient_mB5524A9B13CB5CD1B5583FA68344B9DA22ED128C_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_sessionToken_1();
		NullCheck(L_1);
		Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 * L_3;
		L_3 = InterfaceFuncInvoker1< Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 *, String_t* >::Invoke(2 /* System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse> Unity.Services.Authentication.IAuthenticationNetworkClient::SignInWithSessionTokenAsync(System.String) */, IAuthenticationNetworkClient_t466AAAF8599451A867223E528F939CD3143FB3A9_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__103::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetWellKnownKeysAsyncU3Ed__103_MoveNext_m06D44C927267F41E42A3EE2D7473BFBDADFFEAD3 (U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E_TisU3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510_mA600C04F13DE6B0FEAE3062C8F971C57E2E04AD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationNetworkClient_t466AAAF8599451A867223E528F939CD3143FB3A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m11C4698C724C62BAAB3EF4ADEB980DDF130B31F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m6102E2E06015F97B6F38B8469F4CE3A77ED2A4E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m5B5959C3C40E1FC031A71286348C6E037358443A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * V_1 = NULL;
	WellKnownKeysResponse_t362C5F2449BC6E27CFF9E8DA7E3BEF85044AA899 * V_2 = NULL;
	TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004b;
			}
		}

IL_0011:
		{
			// var response = await NetworkClient.GetWellKnownKeysAsync();
			AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = AuthenticationServiceInternal_get_NetworkClient_mB5524A9B13CB5CD1B5583FA68344B9DA22ED128C_inline(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			Task_1_t98B46A031F0AA87AC60519A0EC92DA07388CA383 * L_5;
			L_5 = InterfaceFuncInvoker0< Task_1_t98B46A031F0AA87AC60519A0EC92DA07388CA383 * >::Invoke(0 /* System.Threading.Tasks.Task`1<Unity.Services.Authentication.WellKnownKeysResponse> Unity.Services.Authentication.IAuthenticationNetworkClient::GetWellKnownKeysAsync() */, IAuthenticationNetworkClient_t466AAAF8599451A867223E528F939CD3143FB3A9_il2cpp_TypeInfo_var, L_4);
			NullCheck(L_5);
			TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E  L_6;
			L_6 = Task_1_GetAwaiter_m5B5959C3C40E1FC031A71286348C6E037358443A(L_5, /*hidden argument*/Task_1_GetAwaiter_m5B5959C3C40E1FC031A71286348C6E037358443A_RuntimeMethod_var);
			V_3 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_1_get_IsCompleted_m6102E2E06015F97B6F38B8469F4CE3A77ED2A4E6((TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m6102E2E06015F97B6F38B8469F4CE3A77ED2A4E6_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0067;
			}
		}

IL_002b:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E  L_9 = V_3;
			__this->set_U3CU3Eu__1_3(L_9);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E_TisU3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510_mA600C04F13DE6B0FEAE3062C8F971C57E2E04AD0((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_10, (TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E *)(&V_3), (U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E_TisU3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510_mA600C04F13DE6B0FEAE3062C8F971C57E2E04AD0_RuntimeMethod_var);
			goto IL_00ae;
		}

IL_004b:
		{
			TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E  L_11 = __this->get_U3CU3Eu__1_3();
			V_3 = L_11;
			TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E * L_12 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_0067:
		{
			WellKnownKeysResponse_t362C5F2449BC6E27CFF9E8DA7E3BEF85044AA899 * L_14;
			L_14 = TaskAwaiter_1_GetResult_m11C4698C724C62BAAB3EF4ADEB980DDF130B31F4((TaskAwaiter_1_tFD24A323623E2184736565759773310F3B05EC7E *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m11C4698C724C62BAAB3EF4ADEB980DDF130B31F4_RuntimeMethod_var);
			V_2 = L_14;
			// WellKnownKeysComponent.Keys = response.Keys;
			AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_15 = V_1;
			NullCheck(L_15);
			WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * L_16;
			L_16 = AuthenticationServiceInternal_get_WellKnownKeysComponent_m6ED68B8DC812AE0D662679F619EB1E00CB46FD7E_inline(L_15, /*hidden argument*/NULL);
			WellKnownKeysResponse_t362C5F2449BC6E27CFF9E8DA7E3BEF85044AA899 * L_17 = V_2;
			NullCheck(L_17);
			WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* L_18 = L_17->get_Keys_0();
			NullCheck(L_16);
			WellKnownKeysComponent_set_Keys_mD0A251052C38E066D9DADD6EB842DF4226508B96_inline(L_16, L_18, /*hidden argument*/NULL);
			goto IL_009b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0082;
		}
		throw e;
	}

CATCH_0082:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_20 = V_4;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ae;
	} // end catch (depth: 1)

IL_009b:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_21, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetWellKnownKeysAsyncU3Ed__103_MoveNext_m06D44C927267F41E42A3EE2D7473BFBDADFFEAD3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510 * _thisAdjusted = reinterpret_cast<U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510 *>(__this + _offset);
	U3CGetWellKnownKeysAsyncU3Ed__103_MoveNext_m06D44C927267F41E42A3EE2D7473BFBDADFFEAD3(_thisAdjusted, method);
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<GetWellKnownKeysAsync>d__103::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetWellKnownKeysAsyncU3Ed__103_SetStateMachine_mA4AC1F844D32FC7F7FE597D9BC94D881522412CE (U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetWellKnownKeysAsyncU3Ed__103_SetStateMachine_mA4AC1F844D32FC7F7FE597D9BC94D881522412CE_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510 * _thisAdjusted = reinterpret_cast<U3CGetWellKnownKeysAsyncU3Ed__103_t49845A1B09C77D4FBB17CB7A3EA9EEB40B2A5510 *>(__this + _offset);
	U3CGetWellKnownKeysAsyncU3Ed__103_SetStateMachine_mA4AC1F844D32FC7F7FE597D9BC94D881522412CE(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__108::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleSignInRequestAsyncU3Ed__108_MoveNext_m145E76C9AACA43859307E92D8E7707A50D994F30 (U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8_TisU3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9_mD73911D1FECFADF6886DF567EC1993369770591E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9_mED1619B60770BF740628D397454BC988F52701FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m7D47B552E0D254ECDFF8CE438279C36B23C1F81C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m57A2DAB2C076A68382251D5904A80019A1791AAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m82AA0A161E0F0459FC1D8843CEDE2EA555C50D36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mCF257E1EE701A2083F6449CA584EE72E2B01FC9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * V_1 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_2 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * V_4 = NULL;
	TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8  V_5;
	memset((&V_5), 0, sizeof(V_5));
	RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * V_6 = NULL;
	WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * V_7 = NULL;
	RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * V_8 = NULL;
	Exception_t * V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * G_B7_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}

IL_0013:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_009d;
				}
			}

IL_0019:
			{
				int32_t L_4 = V_0;
				if ((((int32_t)L_4) == ((int32_t)1)))
				{
					goto IL_00fa;
				}
			}

IL_0020:
			{
				// ChangeState(AuthenticationState.SigningIn);
				AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_5 = V_1;
				NullCheck(L_5);
				AuthenticationServiceInternal_ChangeState_m667E7EC4D3723293438F62CDA24584F482C80A68(L_5, 1, /*hidden argument*/NULL);
				// var wellKnownKeysTask = WellKnownKeysComponent.Keys == null ? GetWellKnownKeysAsync() : Task.CompletedTask;
				AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_6 = V_1;
				NullCheck(L_6);
				WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * L_7;
				L_7 = AuthenticationServiceInternal_get_WellKnownKeysComponent_m6ED68B8DC812AE0D662679F619EB1E00CB46FD7E_inline(L_6, /*hidden argument*/NULL);
				NullCheck(L_7);
				WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* L_8;
				L_8 = WellKnownKeysComponent_get_Keys_m651DBE0F1FFFD2929ADC5BDC8126819EFBF46423_inline(L_7, /*hidden argument*/NULL);
				if (!L_8)
				{
					goto IL_003b;
				}
			}

IL_0034:
			{
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
				L_9 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
				G_B7_0 = L_9;
				goto IL_0041;
			}

IL_003b:
			{
				AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_10 = V_1;
				NullCheck(L_10);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_11;
				L_11 = AuthenticationServiceInternal_GetWellKnownKeysAsync_m51864139F01BE531A3C9EE608912D24B65AF60E7(L_10, /*hidden argument*/NULL);
				G_B7_0 = L_11;
			}

IL_0041:
			{
				V_2 = G_B7_0;
				// var signinRequestTask = signInRequest();
				Func_1_t453480ACC68F23E9FA67E53305662073FD263CE9 * L_12 = __this->get_signInRequest_3();
				NullCheck(L_12);
				Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 * L_13;
				L_13 = Func_1_Invoke_m7D47B552E0D254ECDFF8CE438279C36B23C1F81C(L_12, /*hidden argument*/Func_1_Invoke_m7D47B552E0D254ECDFF8CE438279C36B23C1F81C_RuntimeMethod_var);
				__this->set_U3CsigninRequestTaskU3E5__2_5(L_13);
				// await Task.WhenAll(signinRequestTask, wellKnownKeysTask);
				TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* L_14 = (TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478*)(TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478*)SZArrayNew(TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478_il2cpp_TypeInfo_var, (uint32_t)2);
				TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* L_15 = L_14;
				Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 * L_16 = __this->get_U3CsigninRequestTaskU3E5__2_5();
				NullCheck(L_15);
				ArrayElementTypeCheck (L_15, L_16);
				(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_16);
				TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* L_17 = L_15;
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_18 = V_2;
				NullCheck(L_17);
				ArrayElementTypeCheck (L_17, L_18);
				(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_18);
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_19;
				L_19 = Task_WhenAll_m5E4DAF3B017D9E8C830ED1ABDD87C6FFF58B4495(L_17, /*hidden argument*/NULL);
				NullCheck(L_19);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_20;
				L_20 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_19, /*hidden argument*/NULL);
				V_3 = L_20;
				bool L_21;
				L_21 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
				if (L_21)
				{
					goto IL_00b9;
				}
			}

IL_007a:
			{
				int32_t L_22 = 0;
				V_0 = L_22;
				__this->set_U3CU3E1__state_0(L_22);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_23 = V_3;
				__this->set_U3CU3Eu__1_6(L_23);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_24 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9_mED1619B60770BF740628D397454BC988F52701FD((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_24, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9_mED1619B60770BF740628D397454BC988F52701FD_RuntimeMethod_var);
				goto IL_018a;
			}

IL_009d:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_25 = __this->get_U3CU3Eu__1_6();
				V_3 = L_25;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_26 = __this->get_address_of_U3CU3Eu__1_6();
				il2cpp_codegen_initobj(L_26, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_27 = (-1);
				V_0 = L_27;
				__this->set_U3CU3E1__state_0(L_27);
			}

IL_00b9:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
				// CompleteSignIn(await signinRequestTask, enableRefresh);
				Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 * L_28 = __this->get_U3CsigninRequestTaskU3E5__2_5();
				NullCheck(L_28);
				TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8  L_29;
				L_29 = Task_1_GetAwaiter_mCF257E1EE701A2083F6449CA584EE72E2B01FC9A(L_28, /*hidden argument*/Task_1_GetAwaiter_mCF257E1EE701A2083F6449CA584EE72E2B01FC9A_RuntimeMethod_var);
				V_5 = L_29;
				bool L_30;
				L_30 = TaskAwaiter_1_get_IsCompleted_m82AA0A161E0F0459FC1D8843CEDE2EA555C50D36((TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8 *)(&V_5), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m82AA0A161E0F0459FC1D8843CEDE2EA555C50D36_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_0117;
				}
			}

IL_00d6:
			{
				int32_t L_31 = 1;
				V_0 = L_31;
				__this->set_U3CU3E1__state_0(L_31);
				TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8  L_32 = V_5;
				__this->set_U3CU3Eu__2_7(L_32);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_33 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8_TisU3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9_mD73911D1FECFADF6886DF567EC1993369770591E((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_33, (TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8 *)(&V_5), (U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8_TisU3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9_mD73911D1FECFADF6886DF567EC1993369770591E_RuntimeMethod_var);
				goto IL_018a;
			}

IL_00fa:
			{
				TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8  L_34 = __this->get_U3CU3Eu__2_7();
				V_5 = L_34;
				TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8 * L_35 = __this->get_address_of_U3CU3Eu__2_7();
				il2cpp_codegen_initobj(L_35, sizeof(TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8 ));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->set_U3CU3E1__state_0(L_36);
			}

IL_0117:
			{
				SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * L_37;
				L_37 = TaskAwaiter_1_GetResult_m57A2DAB2C076A68382251D5904A80019A1791AAE((TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8 *)(&V_5), /*hidden argument*/TaskAwaiter_1_GetResult_m57A2DAB2C076A68382251D5904A80019A1791AAE_RuntimeMethod_var);
				V_4 = L_37;
				AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_38 = V_1;
				SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * L_39 = V_4;
				bool L_40 = __this->get_enableRefresh_4();
				NullCheck(L_38);
				AuthenticationServiceInternal_CompleteSignIn_mC63035B84EABA2C107DD10FB6895261F596DCFBC(L_38, L_39, L_40, /*hidden argument*/NULL);
				// }
				__this->set_U3CsigninRequestTaskU3E5__2_5((Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 *)NULL);
				goto IL_015c;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0137;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0144;
			}
			throw e;
		}

CATCH_0137:
		{ // begin catch(Unity.Services.Core.RequestFailedException)
			// catch (RequestFailedException e)
			V_6 = ((RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A *)IL2CPP_GET_ACTIVE_EXCEPTION(RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A *));
			// SendSignInFailedEvent(e, true);
			AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_41 = V_1;
			RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_42 = V_6;
			NullCheck(L_41);
			AuthenticationServiceInternal_SendSignInFailedEvent_m5715005540D9E4418F07FCE528D3136099DE54ED(L_41, L_42, (bool)1, /*hidden argument*/NULL);
			// throw;
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CHandleSignInRequestAsyncU3Ed__108_MoveNext_m145E76C9AACA43859307E92D8E7707A50D994F30_RuntimeMethod_var)));
		} // end catch (depth: 2)

CATCH_0144:
		{ // begin catch(Unity.Services.Authentication.WebRequestException)
			// catch (WebRequestException e)
			V_7 = ((WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 *)IL2CPP_GET_ACTIVE_EXCEPTION(WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 *));
			// var authException = BuildServerException(e);
			AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_43 = V_1;
			WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * L_44 = V_7;
			NullCheck(L_43);
			RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_45;
			L_45 = AuthenticationServiceInternal_BuildServerException_m65325EA837C5EB0BF8BD6F7DA6538A62666A74A8(L_43, L_44, /*hidden argument*/NULL);
			V_8 = L_45;
			// SendSignInFailedEvent(authException, true);
			AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_46 = V_1;
			RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_47 = V_8;
			NullCheck(L_46);
			AuthenticationServiceInternal_SendSignInFailedEvent_m5715005540D9E4418F07FCE528D3136099DE54ED(L_46, L_47, (bool)1, /*hidden argument*/NULL);
			// throw authException;
			RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A * L_48 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CHandleSignInRequestAsyncU3Ed__108_MoveNext_m145E76C9AACA43859307E92D8E7707A50D994F30_RuntimeMethod_var)));
		} // end catch (depth: 2)

IL_015c:
		{
			goto IL_0177;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_015e;
		}
		throw e;
	}

CATCH_015e:
	{ // begin catch(System.Exception)
		V_9 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_49 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_50 = V_9;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_49, L_50, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_018a;
	} // end catch (depth: 1)

IL_0177:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_51 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_51, /*hidden argument*/NULL);
	}

IL_018a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CHandleSignInRequestAsyncU3Ed__108_MoveNext_m145E76C9AACA43859307E92D8E7707A50D994F30_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9 * _thisAdjusted = reinterpret_cast<U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9 *>(__this + _offset);
	U3CHandleSignInRequestAsyncU3Ed__108_MoveNext_m145E76C9AACA43859307E92D8E7707A50D994F30(_thisAdjusted, method);
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<HandleSignInRequestAsync>d__108::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleSignInRequestAsyncU3Ed__108_SetStateMachine_m008B1229A5293C043B2EF8351F8EEA35AA9F98FD (U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CHandleSignInRequestAsyncU3Ed__108_SetStateMachine_m008B1229A5293C043B2EF8351F8EEA35AA9F98FD_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9 * _thisAdjusted = reinterpret_cast<U3CHandleSignInRequestAsyncU3Ed__108_t80FE8179148749D6F60CCAF74958DF3E2D3E29F9 *>(__this + _offset);
	U3CHandleSignInRequestAsyncU3Ed__108_SetStateMachine_m008B1229A5293C043B2EF8351F8EEA35AA9F98FD(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__109::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRefreshAsyncU3Ed__109_MoveNext_m81C0AF6374558FF8C0603DD7979C55A107E29B10 (U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8_TisU3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804_m3511BEAB707840875E97AF0B5854ED07EDC3EA6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationNetworkClient_t466AAAF8599451A867223E528F939CD3143FB3A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m57A2DAB2C076A68382251D5904A80019A1791AAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m82AA0A161E0F0459FC1D8843CEDE2EA555C50D36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mCF257E1EE701A2083F6449CA584EE72E2B01FC9A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * V_1 = NULL;
	SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * V_2 = NULL;
	TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0018;
			}
		}

IL_0011:
		{
			// ChangeState(AuthenticationState.Refreshing);
			AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_3 = V_1;
			NullCheck(L_3);
			AuthenticationServiceInternal_ChangeState_m667E7EC4D3723293438F62CDA24584F482C80A68(L_3, 3, /*hidden argument*/NULL);
		}

IL_0018:
		{
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_4 = V_0;
				if (!L_4)
				{
					goto IL_005f;
				}
			}

IL_001c:
			{
				// var response = await NetworkClient.SignInWithSessionTokenAsync(sessionToken);
				AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_5 = V_1;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = AuthenticationServiceInternal_get_NetworkClient_mB5524A9B13CB5CD1B5583FA68344B9DA22ED128C_inline(L_5, /*hidden argument*/NULL);
				String_t* L_7 = __this->get_sessionToken_3();
				NullCheck(L_6);
				Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 * L_8;
				L_8 = InterfaceFuncInvoker1< Task_1_t953E0EF3DFDB2104A6C2CE540237EFFD420C2F68 *, String_t* >::Invoke(2 /* System.Threading.Tasks.Task`1<Unity.Services.Authentication.SignInResponse> Unity.Services.Authentication.IAuthenticationNetworkClient::SignInWithSessionTokenAsync(System.String) */, IAuthenticationNetworkClient_t466AAAF8599451A867223E528F939CD3143FB3A9_il2cpp_TypeInfo_var, L_6, L_7);
				NullCheck(L_8);
				TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8  L_9;
				L_9 = Task_1_GetAwaiter_mCF257E1EE701A2083F6449CA584EE72E2B01FC9A(L_8, /*hidden argument*/Task_1_GetAwaiter_mCF257E1EE701A2083F6449CA584EE72E2B01FC9A_RuntimeMethod_var);
				V_3 = L_9;
				bool L_10;
				L_10 = TaskAwaiter_1_get_IsCompleted_m82AA0A161E0F0459FC1D8843CEDE2EA555C50D36((TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m82AA0A161E0F0459FC1D8843CEDE2EA555C50D36_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_007b;
				}
			}

IL_003c:
			{
				int32_t L_11 = 0;
				V_0 = L_11;
				__this->set_U3CU3E1__state_0(L_11);
				TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8  L_12 = V_3;
				__this->set_U3CU3Eu__1_4(L_12);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_13 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8_TisU3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804_m3511BEAB707840875E97AF0B5854ED07EDC3EA6E((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_13, (TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8 *)(&V_3), (U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8_TisU3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804_m3511BEAB707840875E97AF0B5854ED07EDC3EA6E_RuntimeMethod_var);
				goto IL_0106;
			}

IL_005f:
			{
				TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8  L_14 = __this->get_U3CU3Eu__1_4();
				V_3 = L_14;
				TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8 * L_15 = __this->get_address_of_U3CU3Eu__1_4();
				il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8 ));
				int32_t L_16 = (-1);
				V_0 = L_16;
				__this->set_U3CU3E1__state_0(L_16);
			}

IL_007b:
			{
				SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * L_17;
				L_17 = TaskAwaiter_1_GetResult_m57A2DAB2C076A68382251D5904A80019A1791AAE((TaskAwaiter_1_tB8F6A25A1DB75C79151D6680A55B6B3FF29E3EB8 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m57A2DAB2C076A68382251D5904A80019A1791AAE_RuntimeMethod_var);
				V_2 = L_17;
				// CompleteSignIn(response);
				AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_18 = V_1;
				SignInResponse_t1142F5CAD1AB9B63C984C493E1180B09FB465DA2 * L_19 = V_2;
				NullCheck(L_18);
				AuthenticationServiceInternal_CompleteSignIn_mC63035B84EABA2C107DD10FB6895261F596DCFBC(L_18, L_19, (bool)1, /*hidden argument*/NULL);
				// }
				goto IL_00d8;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RequestFailedException_t039E40488F04D9E2F32A688F1D440B493139216A_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_008d;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00a9;
			}
			throw e;
		}

CATCH_008d:
		{ // begin catch(Unity.Services.Core.RequestFailedException)
			{
				// catch (RequestFailedException)
				// Logger.LogWarning("The access token is not valid. Retry JWKS and refresh again.");
				Logger_LogWarning_m89AD2E4C5CE3B0BA63F90C047DFEE64C59851430(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BE0C724DF0778AB44291FE22681FE3735239D7F)), /*hidden argument*/NULL);
				// if (State != AuthenticationState.Expired)
				AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_20 = V_1;
				NullCheck(L_20);
				int32_t L_21;
				L_21 = AuthenticationServiceInternal_get_State_m540B2858E462412EE82083304EB498C369512E14_inline(L_20, /*hidden argument*/NULL);
				if ((((int32_t)L_21) == ((int32_t)4)))
				{
					goto IL_00a7;
				}
			}

IL_00a1:
			{
				// Expire();
				AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_22 = V_1;
				NullCheck(L_22);
				AuthenticationServiceInternal_Expire_m03AC98A45621D10F4239EF4F9E24F1383B765FB6(L_22, /*hidden argument*/NULL);
			}

IL_00a7:
			{
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00d8;
			}
		} // end catch (depth: 2)

CATCH_00a9:
		{ // begin catch(Unity.Services.Authentication.WebRequestException)
			{
				// catch (WebRequestException)
				// if (State == AuthenticationState.Refreshing)
				AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_23 = V_1;
				NullCheck(L_23);
				int32_t L_24;
				L_24 = AuthenticationServiceInternal_get_State_m540B2858E462412EE82083304EB498C369512E14_inline(L_23, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_24) == ((uint32_t)3))))
				{
					goto IL_00d6;
				}
			}

IL_00b3:
			{
				// Logger.LogWarning("Failed to refresh access token due to network error or internal server error, will retry later.");
				Logger_LogWarning_m89AD2E4C5CE3B0BA63F90C047DFEE64C59851430(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE226315A889E342809A09A15505207F9977AF600)), /*hidden argument*/NULL);
				// ChangeState(AuthenticationState.Authorized);
				AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_25 = V_1;
				NullCheck(L_25);
				AuthenticationServiceInternal_ChangeState_m667E7EC4D3723293438F62CDA24584F482C80A68(L_25, 2, /*hidden argument*/NULL);
				// ScheduleRefresh(Settings.RefreshAttemptFrequency);
				AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_26 = V_1;
				AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * L_27 = V_1;
				NullCheck(L_27);
				RuntimeObject* L_28;
				L_28 = AuthenticationServiceInternal_get_Settings_m207CE9E7E79C996BA697C5AF82154C51CAC4F852_inline(L_27, /*hidden argument*/NULL);
				NullCheck(L_28);
				int32_t L_29;
				L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Unity.Services.Authentication.IAuthenticationSettings::get_RefreshAttemptFrequency() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IAuthenticationSettings_tDF3C2B09002AA87E427B93A667A1F46921EA0339_il2cpp_TypeInfo_var)), L_28);
				NullCheck(L_26);
				AuthenticationServiceInternal_ScheduleRefresh_m079A4344C2F75D3184DA085534A056888D0F2507(L_26, ((double)((double)L_29)), /*hidden argument*/NULL);
			}

IL_00d6:
			{
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00d8;
			}
		} // end catch (depth: 2)

IL_00d8:
		{
			goto IL_00f3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00da;
		}
		throw e;
	}

CATCH_00da:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_30 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_31 = V_4;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_30, L_31, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0106;
	} // end catch (depth: 1)

IL_00f3:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_32 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_32, /*hidden argument*/NULL);
	}

IL_0106:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartRefreshAsyncU3Ed__109_MoveNext_m81C0AF6374558FF8C0603DD7979C55A107E29B10_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804 * _thisAdjusted = reinterpret_cast<U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804 *>(__this + _offset);
	U3CStartRefreshAsyncU3Ed__109_MoveNext_m81C0AF6374558FF8C0603DD7979C55A107E29B10(_thisAdjusted, method);
}
// System.Void Unity.Services.Authentication.AuthenticationServiceInternal/<StartRefreshAsync>d__109::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartRefreshAsyncU3Ed__109_SetStateMachine_mA9BACBDA7675C9A3B3CF06C41C9ABA425C973ECA (U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartRefreshAsyncU3Ed__109_SetStateMachine_mA9BACBDA7675C9A3B3CF06C41C9ABA425C973ECA_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804 * _thisAdjusted = reinterpret_cast<U3CStartRefreshAsyncU3Ed__109_tDB8E1C204B32CAC9BDAE8F274EF97CF6C0775804 *>(__this + _offset);
	U3CStartRefreshAsyncU3Ed__109_SetStateMachine_mA9BACBDA7675C9A3B3CF06C41C9ABA425C973ECA(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Authentication.WebRequest/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m80E69D2DC9FB882880251ADB39019033B78E6FE6 (U3CU3Ec__DisplayClass16_0_tF37DBED51743B80AAE9FE0A94A6E1B749CDF687F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Services.Authentication.WebRequest/<>c__DisplayClass16_0::<SendAttemptAsync>b__0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CSendAttemptAsyncU3Eb__0_m97AB673D87CEF1C1830A54CAAB72643351F21955 (U3CU3Ec__DisplayClass16_0_tF37DBED51743B80AAE9FE0A94A6E1B749CDF687F * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___operation0, const RuntimeMethod* method)
{
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	bool G_B2_2 = false;
	bool G_B2_3 = false;
	int64_t G_B2_4 = 0;
	TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * G_B2_5 = NULL;
	WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * G_B2_6 = NULL;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	bool G_B1_2 = false;
	bool G_B1_3 = false;
	int64_t G_B1_4 = 0;
	TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * G_B1_5 = NULL;
	WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * G_B1_6 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	bool G_B3_2 = false;
	bool G_B3_3 = false;
	int64_t G_B3_4 = 0;
	TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * G_B3_5 = NULL;
	WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * G_B3_6 = NULL;
	{
		// RequestCompleted(tcs,
		//     request.responseCode,
		//     RequestHasNetworkError(request),
		//     RequestHasServerError(request),
		//     request.error,
		//     request.downloadHandler?.text,
		//     request.GetResponseHeaders());
		WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * L_0 = __this->get_U3CU3E4__this_0();
		TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_1 = __this->get_tcs_1();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_2 = __this->get_request_2();
		NullCheck(L_2);
		int64_t L_3;
		L_3 = UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753(L_2, /*hidden argument*/NULL);
		WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * L_4 = __this->get_U3CU3E4__this_0();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_5 = __this->get_request_2();
		NullCheck(L_4);
		bool L_6;
		L_6 = WebRequest_RequestHasNetworkError_m88DDC062108A0A69D9DF3621E1A40FF91CCAC3E1(L_4, L_5, /*hidden argument*/NULL);
		WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * L_7 = __this->get_U3CU3E4__this_0();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8 = __this->get_request_2();
		NullCheck(L_7);
		bool L_9;
		L_9 = WebRequest_RequestHasServerError_m6B11C6BA8EDEE6B7A48513D5A573ED605CA275FA(L_7, L_8, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_10 = __this->get_request_2();
		NullCheck(L_10);
		String_t* L_11;
		L_11 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_10, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_12 = __this->get_request_2();
		NullCheck(L_12);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_13;
		L_13 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_12, /*hidden argument*/NULL);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_14 = L_13;
		G_B1_0 = L_14;
		G_B1_1 = L_11;
		G_B1_2 = L_9;
		G_B1_3 = L_6;
		G_B1_4 = L_3;
		G_B1_5 = L_1;
		G_B1_6 = L_0;
		if (L_14)
		{
			G_B2_0 = L_14;
			G_B2_1 = L_11;
			G_B2_2 = L_9;
			G_B2_3 = L_6;
			G_B2_4 = L_3;
			G_B2_5 = L_1;
			G_B2_6 = L_0;
			goto IL_0056;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		G_B3_5 = G_B1_5;
		G_B3_6 = G_B1_6;
		goto IL_005b;
	}

IL_0056:
	{
		NullCheck(G_B2_0);
		String_t* L_15;
		L_15 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(G_B2_0, /*hidden argument*/NULL);
		G_B3_0 = L_15;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
		G_B3_5 = G_B2_5;
		G_B3_6 = G_B2_6;
	}

IL_005b:
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_16 = __this->get_request_2();
		NullCheck(L_16);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_17;
		L_17 = UnityWebRequest_GetResponseHeaders_mD42F316C2E0B8A8AD0F9E6F3A3D4103CAB92FB23(L_16, /*hidden argument*/NULL);
		NullCheck(G_B3_6);
		WebRequest_RequestCompleted_mDAF35B91908AFBE5C0859D0854581BD6B2D73477(G_B3_6, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_17, /*hidden argument*/NULL);
		// request.Dispose();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_18 = __this->get_request_2();
		NullCheck(L_18);
		UnityWebRequest_Dispose_m8032472F6BC2EC4FEE017DE7E4C440078BC4E1C8(L_18, /*hidden argument*/NULL);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessTokenComponent_set_AccessToken_mCE8771733C9E04D7CC5C568581800BAB07180E75_inline (AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AccessToken { get; internal set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAccessTokenU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessTokenComponent_set_ExpiryTime_m608106453E1FEFA2B6CB6F2A0AF5F0A642A3BEB7_inline (AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * __this, Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___value0, const RuntimeMethod* method)
{
	{
		// public DateTime? ExpiryTime { get; internal set; }
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0 = ___value0;
		__this->set_U3CExpiryTimeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationNetworkClient_get_EnvironmentComponent_mB9659CF2F4308C0C55A15766114FC46C50C7D019_inline (AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * __this, const RuntimeMethod* method)
{
	{
		// internal IEnvironments EnvironmentComponent { get; }
		RuntimeObject* L_0 = __this->get_U3CEnvironmentComponentU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationNetworkClient_get_CloudProjectIdComponent_mE6A548BDBE08D746C26C8666DE86C84860814BCA_inline (AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * __this, const RuntimeMethod* method)
{
	{
		// internal ICloudProjectId CloudProjectIdComponent { get; }
		RuntimeObject* L_0 = __this->get_U3CCloudProjectIdComponentU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationNetworkClient_get_NetworkHandler_mADC5CDB5943FFFA2318DA4BC97BA0B4551908CB3_inline (AuthenticationNetworkClient_tA7B17F72CA0715B79F7EACA2C81C02CE9488AB65 * __this, const RuntimeMethod* method)
{
	{
		// internal INetworkHandler NetworkHandler { get; }
		RuntimeObject* L_0 = __this->get_U3CNetworkHandlerU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationService_set_Instance_m9954CE13AD489EA393654415815BE7FD5F3B54FE_inline (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationService_tEB201696C9477E5EC012BB947716CD6FA2FC7B0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal set => s_Instance = value;
		RuntimeObject* L_0 = ___value0;
		((AuthenticationService_tEB201696C9477E5EC012BB947716CD6FA2FC7B0F_StaticFields*)il2cpp_codegen_static_fields_for(AuthenticationService_tEB201696C9477E5EC012BB947716CD6FA2FC7B0F_il2cpp_TypeInfo_var))->set_s_Instance_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * AuthenticationServiceInternal_get_AccessTokenComponent_m2852F0AF5020BEE250234B898DB7656AE37D183C_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// internal AccessTokenComponent AccessTokenComponent { get; }
		AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * L_0 = __this->get_U3CAccessTokenComponentU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * AuthenticationServiceInternal_get_EnvironmentIdComponent_m9E28929DD30DBF6130606021CA9D021FBB8A0AFD_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// internal EnvironmentIdComponent EnvironmentIdComponent { get; }
		EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * L_0 = __this->get_U3CEnvironmentIdComponentU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * AuthenticationServiceInternal_get_PlayerIdComponent_m71FBCC6657B8435FF144D92C29524719CA1FAD92_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// internal PlayerIdComponent PlayerIdComponent { get; }
		PlayerIdComponent_t0108349398A0CE29DA95D9649E1DDAD88ECCF21A * L_0 = __this->get_U3CPlayerIdComponentU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * CoreRegistry_get_Instance_m4D1C714218A28598060C670E87B7B59834A53510_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreRegistry Instance { get; internal set; }
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_0 = ((CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_StaticFields*)il2cpp_codegen_static_fields_for(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AuthenticationServiceInternal_get_State_m540B2858E462412EE82083304EB498C369512E14_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// internal AuthenticationState State { get; set; }
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * AuthenticationServiceInternal_get_SessionTokenComponent_m150C338CB83BC5464384ABE379924EF79197A92C_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// internal SessionTokenComponent SessionTokenComponent { get; }
		SessionTokenComponent_t9D4310F518843E6DABC6F0917FB220B98F6ED67E * L_0 = __this->get_U3CSessionTokenComponentU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_NetworkClient_m11CAD22C0C19EB50172B7992617E7816386F047C_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// internal IAuthenticationNetworkClient NetworkClient { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CNetworkClientU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_State_m1258E7117ABE0843B4C65DDBADDC1328D1A1F0FA_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal AuthenticationState State { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SignInOptions_get_CreateAccount_m57FD32C6C36343090735D3DA29856088F58E250F_inline (SignInOptions_tFF19EE3FE0A9A233A1AFDBADA8975DD5BA28DDED * __this, const RuntimeMethod* method)
{
	{
		// public bool CreateAccount { get; set; }
		bool L_0 = __this->get_U3CCreateAccountU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationServiceInternal_get_NetworkClient_mB5524A9B13CB5CD1B5583FA68344B9DA22ED128C_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// internal IAuthenticationNetworkClient NetworkClient { get; set; }
		RuntimeObject* L_0 = __this->get_U3CNetworkClientU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_PlayerInfo_mDC51AF45FACB6A62AAF39346CDF474186B49537B_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 * ___value0, const RuntimeMethod* method)
{
	{
		// public PlayerInfo PlayerInfo { get; internal set; }
		PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 * L_0 = ___value0;
		__this->set_U3CPlayerInfoU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * AuthenticationServiceInternal_get_WellKnownKeysComponent_m6ED68B8DC812AE0D662679F619EB1E00CB46FD7E_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// internal WellKnownKeysComponent WellKnownKeysComponent { get; }
		WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * L_0 = __this->get_U3CWellKnownKeysComponentU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* WellKnownKeysComponent_get_Keys_m651DBE0F1FFFD2929ADC5BDC8126819EFBF46423_inline (WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * __this, const RuntimeMethod* method)
{
	{
		// public WellKnownKey[] Keys { get; internal set; }
		WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* L_0 = __this->get_U3CKeysU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnvironmentIdComponent_set_EnvironmentId_m64287B97B7875A6D017F110FCB14575DF466BAE7_inline (EnvironmentIdComponent_t84954E564D12CF2FD6286B7F96CEF305D5E38320 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string EnvironmentId { get; internal set; }
		String_t* L_0 = ___value0;
		__this->set_U3CEnvironmentIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationServiceInternal_get_Settings_m207CE9E7E79C996BA697C5AF82154C51CAC4F852_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// internal IAuthenticationSettings Settings { get; }
		RuntimeObject* L_0 = __this->get_U3CSettingsU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  AccessTokenComponent_get_ExpiryTime_m8A38E762B531DA5C273EA09DC9E3EEDE68891869_inline (AccessTokenComponent_t7C2229FA43B1F6B39153DDBE897C8BAFDD940EBB * __this, const RuntimeMethod* method)
{
	{
		// public DateTime? ExpiryTime { get; internal set; }
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0 = __this->get_U3CExpiryTimeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_RefreshActionId_m21A7BE58654368157A696B9731F9AA1412C070A9_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___value0, const RuntimeMethod* method)
{
	{
		// internal long? RefreshActionId { get; set; }
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_0 = ___value0;
		__this->set_U3CRefreshActionIdU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationServiceInternal_set_ExpirationActionId_mABA89665FBBD8124A496811E7AC9659D0113E765_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___value0, const RuntimeMethod* method)
{
	{
		// internal long? ExpirationActionId { get; set; }
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_0 = ___value0;
		__this->set_U3CExpirationActionIdU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  AuthenticationServiceInternal_get_RefreshActionId_m36939AD0C220FA3733F31C7A3B73AF99834CC20C_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// internal long? RefreshActionId { get; set; }
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_0 = __this->get_U3CRefreshActionIdU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  AuthenticationServiceInternal_get_ExpirationActionId_mB1BFDC05A1FA873FB9AC27BFF6B11B0B9749EA54_inline (AuthenticationServiceInternal_tB3187D59D3740EC95DD79DA5D443BD18F780C7EB * __this, const RuntimeMethod* method)
{
	{
		// internal long? ExpirationActionId { get; set; }
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_0 = __this->get_U3CExpirationActionIdU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t WebRequestException_get_ResponseCode_mE7F0EB27F64B0E2B93D8D1C1B8BFB95F5B42C99D_inline (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, const RuntimeMethod* method)
{
	{
		// public long ResponseCode { get; private set; }
		int64_t L_0 = __this->get_U3CResponseCodeU3Ek__BackingField_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebRequestException_get_NetworkError_m645FAC3101DC039DD6CE649F7984450CE8CCCC0F_inline (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, const RuntimeMethod* method)
{
	{
		// public bool NetworkError { get; private set; }
		bool L_0 = __this->get_U3CNetworkErrorU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationSettings_set_AccessTokenRefreshBuffer_m149024C770352BD9A87BD1FFA1F6B3A0896A33CD_inline (AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int AccessTokenRefreshBuffer { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CAccessTokenRefreshBufferU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationSettings_set_AccessTokenExpiryBuffer_m5F60B60502A86DC2FCF76FCC19DB223F07798F68_inline (AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int AccessTokenExpiryBuffer { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CAccessTokenExpiryBufferU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationSettings_set_RefreshAttemptFrequency_m03D44C030EC39C0D3E2625159E76BD62A6DF8DC7_inline (AuthenticationSettings_tEFD41AF2D5FECF8CFF43B245F19384409C5433CF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int RefreshAttemptFrequency { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRefreshAttemptFrequencyU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m70D38067C3055104F6C8D050AB7CE0FDFD05EE22_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_StaticFields*)il2cpp_codegen_static_fields_for(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var))->get_s_Logger_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A * PlayerInfo_get_Identities_m0F5766F970AE063F7DE842334C68B07F3EC23E9C_inline (PlayerInfo_t5C2AB448A8E1D1590CF3E4482DA0DF44263BFF32 * __this, const RuntimeMethod* method)
{
	{
		// public List<Identity> Identities { get; }
		List_1_t0423B5029A3B23F46D555E98F30DE133E34CA31A * L_0 = __this->get_U3CIdentitiesU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WebRequest_get_Configuration_mE815C1CBDB6A086D00B915A9C22EC4E916870C98_inline (WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * __this, const RuntimeMethod* method)
{
	{
		// internal INetworkConfiguration Configuration { get; }
		RuntimeObject* L_0 = __this->get_U3CConfigurationU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebRequest_get_Retries_mB9795033114913C44BE87F5A05F50668316D0D4E_inline (WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * __this, const RuntimeMethod* method)
{
	{
		// internal int Retries { get; private set; }
		int32_t L_0 = __this->get_U3CRetriesU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequest_set_Retries_m209B8993903A208CFEF7BCF8F088F13576EC7154_inline (WebRequest_t6023E179FF813EC4DD75BFAA6C90DB315D1BEDA4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int Retries { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRetriesU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequestException_set_NetworkError_mC1FA2EFF205250B122AD4A44B494B63850C7722B_inline (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool NetworkError { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CNetworkErrorU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequestException_set_ServerError_m214BE708A528B63FA7FB0484514AF02D7ECFBF83_inline (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ServerError { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CServerErrorU3Ek__BackingField_19(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequestException_set_DeserializationError_m36196B7BE547C0925B66FE28273CC689C0342131_inline (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool DeserializationError { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CDeserializationErrorU3Ek__BackingField_18(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequestException_set_ResponseCode_mCD4590D5F88BA28ED3406FE765783C9ED72828A1_inline (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// public long ResponseCode { get; private set; }
		int64_t L_0 = ___value0;
		__this->set_U3CResponseCodeU3Ek__BackingField_20(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRequestException_set_ResponseHeaders_mF585FC95469C086FF17914E8CA0C0A3D942331B7_inline (WebRequestException_tB09586460084D7D7B60108A4AFD127304CE5FAB6 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IDictionary<string, string> ResponseHeaders { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CResponseHeadersU3Ek__BackingField_21(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WellKnownKeysComponent_set_Keys_mD0A251052C38E066D9DADD6EB842DF4226508B96_inline (WellKnownKeysComponent_t00FBA2C26DC27CD0EED5F62C82E2D9831A501069 * __this, WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* ___value0, const RuntimeMethod* method)
{
	{
		// public WellKnownKey[] Keys { get; internal set; }
		WellKnownKeyU5BU5D_t632932E6E2ACB31354D757E6F5C1D16FDBE5F9AA* L_0 = ___value0;
		__this->set_U3CKeysU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_gshared_inline (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  Nullable_1_GetValueOrDefault_mC63D1129C133CFFD462EEE344A2AE34B29C1E881_gshared_inline (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )__this->get_value_0();
		return (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m571187F546F4230B8576F169789831BFBA99B93F_gshared_inline (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method)
{
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_0 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this->get_m_task_0();
		return (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
