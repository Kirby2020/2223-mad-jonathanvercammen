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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<Unity.Services.Core.Telemetry.Internal.WebRequest>
struct Action_1_tF53DB2CD9E161979EF52137A49BBBC58D2C3E49F;
// System.Action`2<System.Object,System.Object>
struct Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D;
// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4;
// Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>
struct CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A;
// Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.MetricsPayload>
struct CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// Unity.Services.Core.Telemetry.Internal.ICachePersister`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>
struct ICachePersister_1_t2B5DA838D04E99AD675CD3A748B6B63E0B28AB04;
// Unity.Services.Core.Telemetry.Internal.ICachePersister`1<Unity.Services.Core.Telemetry.Internal.MetricsPayload>
struct ICachePersister_1_t0D065A3A15334F2937118381EEB91732555A94ED;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560;
// System.Collections.Generic.IEnumerable`1<Unity.Services.Core.Telemetry.Internal.Diagnostic>
struct IEnumerable_1_t8BCDC46E6D8DA55378EEBDAB44D546AE1ECDDD6E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String>
struct IReadOnlyDictionary_2_tAEC11FE6416E1B7D425F72068284FFB83F53BB71;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Diagnostic>
struct List_1_t5DA432D36F1D12C1681B80D1EB14144383682219;
// System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Metric>
struct List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload,Unity.Services.Core.Telemetry.Internal.Diagnostic>
struct TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD;
// Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.MetricsPayload,Unity.Services.Core.Telemetry.Internal.Metric>
struct TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34;
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
// Unity.Services.Core.Telemetry.Internal.Diagnostic[]
struct DiagnosticU5BU5D_tC653636011EACF7EC4DAD64598905CF2C020801E;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Unity.Services.Core.Telemetry.Internal.Metric[]
struct MetricU5BU5D_t37BADCF6A42EB3CFB0642786AAC2C1AD3F9D0D89;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Unity.Services.Core.Telemetry.Internal.Diagnostics
struct Diagnostics_t77D54D438A6C2AA9042730FB90BEF3357DEB0728;
// Unity.Services.Core.Telemetry.Internal.DiagnosticsFactory
struct DiagnosticsFactory_t035E06152439A7D806A2770BA3029E9C4AE88931;
// Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler
struct DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710;
// Unity.Services.Core.Telemetry.Internal.DisabledDiagnostics
struct DisabledDiagnostics_t27E5329A61EC82CD8672ED82E6960DA1A570481D;
// Unity.Services.Core.Telemetry.Internal.DisabledDiagnosticsFactory
struct DisabledDiagnosticsFactory_t3AE17E796B5A67BA640A7E091AA1D8CCC8F1A3D3;
// Unity.Services.Core.Telemetry.Internal.DisabledMetrics
struct DisabledMetrics_tF0F8EBCE70B7C34D51D8E5E6A19D1714580EAA13;
// Unity.Services.Core.Telemetry.Internal.DisabledMetricsFactory
struct DisabledMetricsFactory_t4AC0F22034937C56A8FB5A67EC19D086CC246FB0;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D;
// Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy
struct ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416;
// Unity.Services.Core.Telemetry.Internal.FileCachePersister
struct FileCachePersister_tDF13401D17534AF99A9129316F81890DEB4DA4BC;
// Unity.Services.Core.Scheduler.Internal.IActionScheduler
struct IActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Unity.Services.Core.Configuration.Internal.ICloudProjectId
struct ICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3;
// Unity.Services.Core.Telemetry.Internal.IDiagnostics
struct IDiagnostics_tBC063F5A4F1E9A39FCC4CA5F319D99C0BF2DBB92;
// Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory
struct IDiagnosticsFactory_tF98D72E5A724DFEBC2D6F913DFAC54AA9B0FB925;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Unity.Services.Core.Environments.Internal.IEnvironments
struct IEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Unity.Services.Core.Telemetry.Internal.IMetrics
struct IMetrics_tE17233689864CACE2185FCC53E928D858144B3E0;
// Unity.Services.Core.Telemetry.Internal.IMetricsFactory
struct IMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B;
// Unity.Services.Core.Configuration.Internal.IProjectConfiguration
struct IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4;
// Unity.Services.Core.Telemetry.Internal.ITelemetryEvent
struct ITelemetryEvent_t368170C547742218E6DDE627E9E5ABF0EFE6A951;
// Unity.Services.Core.Telemetry.Internal.IUnityWebRequestSender
struct IUnityWebRequestSender_tA90635B35BA2F8A8CA9F997B92CABD978054977E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.Services.Core.Telemetry.Internal.Metrics
struct Metrics_t6ECAC6AD63039C6F5E3AB6AFFEB9A41159776764;
// Unity.Services.Core.Telemetry.Internal.MetricsFactory
struct MetricsFactory_tD507E89F251BBFFF3E762FCE0C8B8280C79B1DF1;
// Unity.Services.Core.Telemetry.Internal.MetricsHandler
struct MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// Unity.Services.Core.Telemetry.Internal.TelemetryConfig
struct TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D;
// Unity.Services.Core.Telemetry.Internal.TelemetryHandler
struct TelemetryHandler_t8F0CC3A9415D4ACE40E25ED9F990ECD36F6A216F;
// Unity.Services.Core.Telemetry.Internal.TelemetrySender
struct TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// Unity.Services.Core.Telemetry.Internal.UnityWebRequestSender
struct UnityWebRequestSender_tBE2E7D88776F300B0F34024BBA8C0FA4B77EDEFA;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler/SendState
struct SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Unity.Services.Core.Telemetry.Internal.UnityWebRequestSender/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t14CAA4D1C0D0D7E7918A9CAD8B056600BE729DCC;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AotHelper_tD029F18A2EE9E104E9F9654EDD28818DF8D0E830_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiagnosticsFactory_t035E06152439A7D806A2770BA3029E9C4AE88931_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Diagnostics_t77D54D438A6C2AA9042730FB90BEF3357DEB0728_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisabledDiagnosticsFactory_t3AE17E796B5A67BA640A7E091AA1D8CCC8F1A3D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisabledDiagnostics_t27E5329A61EC82CD8672ED82E6960DA1A570481D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisabledMetricsFactory_t4AC0F22034937C56A8FB5A67EC19D086CC246FB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisabledMetrics_tF0F8EBCE70B7C34D51D8E5E6A19D1714580EAA13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICachePersister_1_t0D065A3A15334F2937118381EEB91732555A94ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICachePersister_1_t2B5DA838D04E99AD675CD3A748B6B63E0B28AB04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5DA432D36F1D12C1681B80D1EB14144383682219_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricsFactory_tD507E89F251BBFFF3E762FCE0C8B8280C79B1DF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Metrics_t6ECAC6AD63039C6F5E3AB6AFFEB9A41159776764_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkReachability_t8F15310A11943C1C3752844598A796FB8EE2BFBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t14CAA4D1C0D0D7E7918A9CAD8B056600BE729DCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequestSender_tBE2E7D88776F300B0F34024BBA8C0FA4B77EDEFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01C466FBD86FBB7A01FEE5B4420364EB13779331;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA7E3B11F9D5595D8DA92EFABA9403825DEF0DB;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral25A6C8E3033AB7B31F1A36176973EBF46D6AA102;
IL2CPP_EXTERN_C String_t* _stringLiteral2C11F35652FEF935B5238B8E510E25D3B44E30B6;
IL2CPP_EXTERN_C String_t* _stringLiteral2D004E384A2A96BC8F24287F0F45615FB0FC7C91;
IL2CPP_EXTERN_C String_t* _stringLiteral2F053D35B71695AE25BC86EAF016A79788935D58;
IL2CPP_EXTERN_C String_t* _stringLiteral343F1EB8B84724E244591A9C2D3BEA692FFCE3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral3B77922C3A2E8F89E4C7359003D66665B608BA30;
IL2CPP_EXTERN_C String_t* _stringLiteral3F484DF1DE5CC5067AC2EE918EB63F569DC0CC1E;
IL2CPP_EXTERN_C String_t* _stringLiteral4D5478220D856D71CDF1A603AC386C9BA7C0865C;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral617DBC0E88F9FD64E6BA155A3D52F887B665BD74;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral71D28320423B0978CBA625BE0E4846EC97389105;
IL2CPP_EXTERN_C String_t* _stringLiteral7B9C8571450A4F167BFFD8C1D0899412FD5DD5F7;
IL2CPP_EXTERN_C String_t* _stringLiteral823AF51D12FCD183C3A2AABB30CAFA6C05DC54B6;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8D1DED8A499AFE312E9F9007B113A945D953937C;
IL2CPP_EXTERN_C String_t* _stringLiteral8F227E0CD8E768A9E3A64A7320B1DAD5F9A5EE81;
IL2CPP_EXTERN_C String_t* _stringLiteral92E679ED3523A4085D0D6AE912EAE820BE235580;
IL2CPP_EXTERN_C String_t* _stringLiteral9D3C19E3A647A2449C174675979309A559260621;
IL2CPP_EXTERN_C String_t* _stringLiteralA56563187CE402C2D214D1D438FAEFE383069121;
IL2CPP_EXTERN_C String_t* _stringLiteralA9392DA9B947060CA08274EAE942417D75A7CA0D;
IL2CPP_EXTERN_C String_t* _stringLiteralB25C6E111877202657B311A682A6585AE1F652B9;
IL2CPP_EXTERN_C String_t* _stringLiteralC15B993D6B8D2B9BD7784FABEF615F72066DB53C;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralCE871287248FF7EDAEE587BCFE45EB79F4C06B0D;
IL2CPP_EXTERN_C String_t* _stringLiteralCEBC9755CF071B2DB2F4E4365093DF8A5009F227;
IL2CPP_EXTERN_C String_t* _stringLiteralD0F18B89B1F8655687A510EA40A91CA6D56786B9;
IL2CPP_EXTERN_C String_t* _stringLiteralD370FE1ACCF063EBBC76335CFD838026A2B964C0;
IL2CPP_EXTERN_C String_t* _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964;
IL2CPP_EXTERN_C String_t* _stringLiteralE19245005C2942CFC2763E0A415F5F5582F12C1F;
IL2CPP_EXTERN_C String_t* _stringLiteralEC0C33C027C86616F69526EFB6E3328D3A142734;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m8C0419007C7C4F2A4B97AEFDE54E8F61FEC16BE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mF5BAD5A096500EC74F25D943B318D37A7E9B2772_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AotHelper_EnsureType_TisStringEnumConverter_tE53DF2A99F7AF815FC7B5600F1E580C1AA649556_m88DE7AAB1148746E03A3501EB782FB49688EA42D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CacheExtensions_IsEmpty_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m3C957849FC68E3DB5C14B366B5A4AD8B74CFAD24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedPayload_1__ctor_m35D57431F42F984330DB9E2393FBDB552C248C1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedPayload_1__ctor_mC11E2A4EC35C9CBA21AA4DE267B4BE8E37EE0FFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsFactory_Create_m998CE50370DBA97DC1721169C36C0B7B62B890EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsHandler_OnSendAsyncCompleted_m1E5728BE6B16E3C83F8B0F43E629C4B425FB288F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add_m639E8AF30440C2692140AF5DB9B8FABF9E8D4367_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DictionaryExtensions_MergeAllowOverride_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_TisString_t_TisString_t_m76A96D51EF6EA68D4E64E435FADF7D38AC8D311E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DictionaryExtensions_MergeAllowOverride_TisIDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_TisString_t_TisString_t_m441EB26E8827E32CFB42A5A5E1FC4955955F6351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mD1FFC5A20C0935413A60C7E205113CF50EAB947E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF52274977DB2F80CE0E3B2686A88F93A9F123F17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF7516AB0BEE97FFD4FD59456778F2AD4692B4CDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m83EB82C5AF4DF1FEC3C82C1D33F805246C2A2836_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mA52F909D3E2C9ACAD96DB6E0D2E9A3221B3F09D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4CC06DBC64F6D87FDEBC50A10169CE6F0CE2470C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5BAB264E522362F7F3E437C0F9BD90DA0C406187_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m914565735F215A98066C412DE2C40916BD385FD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m96DD29242C4F14B1DA6AC3146CE13E2786EE7590_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA5929D0369712599805200E150E0F1C98250F052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC4E34F94D45D3903017D537DF9B4FAC0ED6490BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE3AABCF8B688AB84FABF2C239D960127E28FBB2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsFactory_Create_mE921E42509576507F7B5D382CFD5D6661CEE8633_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add_m47C6DBA28798422C1FB05C799CD04A8822D70481_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelemetryHandler_2_Initialize_m09C5741F2A2E19A3B3FF6F4261805C0062CAA5CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelemetryHandler_2_Initialize_m192185702069F62A93421AA9AA1763AC8923ECBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelemetryHandler_2_Register_mD67F5E5162BF4BBC039837E341315ADA2FD8CEA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelemetryHandler_2_Register_mDF6ED28D7C2C6FB663B70B7C4ACE2C9C5CCAF6F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelemetryHandler_2__ctor_m0DE1BF6FE34433BE16E2B4BBC5060CD264797E3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelemetryHandler_2__ctor_m7594D711F3F43DB0F376BDBAA5BBF64A8DFAF7C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelemetryHandler_2_get_Config_m2E26D63E35F736C441D337EA7FBB99D93A7878DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelemetrySender_SendAsync_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m0A9A17FC07F11A9D92AA82351AC18B6E7DE98CF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelemetrySender_SendAsync_TisMetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_mB918AE49663DF24311221FD5D6D826A5EAFA28B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelemetryUtils_CreateCachePersister_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m7D63490F889496FF7CBFDE112BC077F5270FE95C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TelemetryUtils_CreateCachePersister_TisMetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_m2BD780D6A0F8A924BCC811DD8A94A83E19A1AA0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CSendRequestU3Eg__OnSendingRequestCompletedU7C0_mF694A2BB93842E397B6F619271C1C1A76FF67CDC_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tDF5FE582C460F88BEA9E4023BE390E706B96F8E1 
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


// System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Diagnostic>
struct List_1_t5DA432D36F1D12C1681B80D1EB14144383682219  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DiagnosticU5BU5D_tC653636011EACF7EC4DAD64598905CF2C020801E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5DA432D36F1D12C1681B80D1EB14144383682219, ____items_1)); }
	inline DiagnosticU5BU5D_tC653636011EACF7EC4DAD64598905CF2C020801E* get__items_1() const { return ____items_1; }
	inline DiagnosticU5BU5D_tC653636011EACF7EC4DAD64598905CF2C020801E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DiagnosticU5BU5D_tC653636011EACF7EC4DAD64598905CF2C020801E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5DA432D36F1D12C1681B80D1EB14144383682219, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5DA432D36F1D12C1681B80D1EB14144383682219, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5DA432D36F1D12C1681B80D1EB14144383682219, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5DA432D36F1D12C1681B80D1EB14144383682219_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DiagnosticU5BU5D_tC653636011EACF7EC4DAD64598905CF2C020801E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5DA432D36F1D12C1681B80D1EB14144383682219_StaticFields, ____emptyArray_5)); }
	inline DiagnosticU5BU5D_tC653636011EACF7EC4DAD64598905CF2C020801E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DiagnosticU5BU5D_tC653636011EACF7EC4DAD64598905CF2C020801E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DiagnosticU5BU5D_tC653636011EACF7EC4DAD64598905CF2C020801E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Metric>
struct List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MetricU5BU5D_t37BADCF6A42EB3CFB0642786AAC2C1AD3F9D0D89* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875, ____items_1)); }
	inline MetricU5BU5D_t37BADCF6A42EB3CFB0642786AAC2C1AD3F9D0D89* get__items_1() const { return ____items_1; }
	inline MetricU5BU5D_t37BADCF6A42EB3CFB0642786AAC2C1AD3F9D0D89** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MetricU5BU5D_t37BADCF6A42EB3CFB0642786AAC2C1AD3F9D0D89* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MetricU5BU5D_t37BADCF6A42EB3CFB0642786AAC2C1AD3F9D0D89* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875_StaticFields, ____emptyArray_5)); }
	inline MetricU5BU5D_t37BADCF6A42EB3CFB0642786AAC2C1AD3F9D0D89* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MetricU5BU5D_t37BADCF6A42EB3CFB0642786AAC2C1AD3F9D0D89** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MetricU5BU5D_t37BADCF6A42EB3CFB0642786AAC2C1AD3F9D0D89* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Unity.Services.Core.Telemetry.Internal.CacheExtensions
struct CacheExtensions_t8CA9B053048A963CD113ACA19A6D1ECE3B599DDE  : public RuntimeObject
{
public:

public:
};


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
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
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
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
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Unity.Services.Core.Telemetry.Internal.Diagnostics
struct Diagnostics_t77D54D438A6C2AA9042730FB90BEF3357DEB0728  : public RuntimeObject
{
public:
	// Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler Unity.Services.Core.Telemetry.Internal.Diagnostics::<Handler>k__BackingField
	DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * ___U3CHandlerU3Ek__BackingField_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.Diagnostics::<PackageTags>k__BackingField
	RuntimeObject* ___U3CPackageTagsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CHandlerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Diagnostics_t77D54D438A6C2AA9042730FB90BEF3357DEB0728, ___U3CHandlerU3Ek__BackingField_0)); }
	inline DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * get_U3CHandlerU3Ek__BackingField_0() const { return ___U3CHandlerU3Ek__BackingField_0; }
	inline DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 ** get_address_of_U3CHandlerU3Ek__BackingField_0() { return &___U3CHandlerU3Ek__BackingField_0; }
	inline void set_U3CHandlerU3Ek__BackingField_0(DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * value)
	{
		___U3CHandlerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandlerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPackageTagsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Diagnostics_t77D54D438A6C2AA9042730FB90BEF3357DEB0728, ___U3CPackageTagsU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CPackageTagsU3Ek__BackingField_1() const { return ___U3CPackageTagsU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CPackageTagsU3Ek__BackingField_1() { return &___U3CPackageTagsU3Ek__BackingField_1; }
	inline void set_U3CPackageTagsU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CPackageTagsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPackageTagsU3Ek__BackingField_1), (void*)value);
	}
};


// Unity.Services.Core.Telemetry.Internal.DiagnosticsFactory
struct DiagnosticsFactory_t035E06152439A7D806A2770BA3029E9C4AE88931  : public RuntimeObject
{
public:
	// Unity.Services.Core.Configuration.Internal.IProjectConfiguration Unity.Services.Core.Telemetry.Internal.DiagnosticsFactory::m_ProjectConfig
	RuntimeObject* ___m_ProjectConfig_0;
	// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.DiagnosticsFactory::<CommonTags>k__BackingField
	RuntimeObject* ___U3CCommonTagsU3Ek__BackingField_1;
	// Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler Unity.Services.Core.Telemetry.Internal.DiagnosticsFactory::<Handler>k__BackingField
	DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * ___U3CHandlerU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_m_ProjectConfig_0() { return static_cast<int32_t>(offsetof(DiagnosticsFactory_t035E06152439A7D806A2770BA3029E9C4AE88931, ___m_ProjectConfig_0)); }
	inline RuntimeObject* get_m_ProjectConfig_0() const { return ___m_ProjectConfig_0; }
	inline RuntimeObject** get_address_of_m_ProjectConfig_0() { return &___m_ProjectConfig_0; }
	inline void set_m_ProjectConfig_0(RuntimeObject* value)
	{
		___m_ProjectConfig_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProjectConfig_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCommonTagsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DiagnosticsFactory_t035E06152439A7D806A2770BA3029E9C4AE88931, ___U3CCommonTagsU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CCommonTagsU3Ek__BackingField_1() const { return ___U3CCommonTagsU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CCommonTagsU3Ek__BackingField_1() { return &___U3CCommonTagsU3Ek__BackingField_1; }
	inline void set_U3CCommonTagsU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CCommonTagsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCommonTagsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandlerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DiagnosticsFactory_t035E06152439A7D806A2770BA3029E9C4AE88931, ___U3CHandlerU3Ek__BackingField_2)); }
	inline DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * get_U3CHandlerU3Ek__BackingField_2() const { return ___U3CHandlerU3Ek__BackingField_2; }
	inline DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 ** get_address_of_U3CHandlerU3Ek__BackingField_2() { return &___U3CHandlerU3Ek__BackingField_2; }
	inline void set_U3CHandlerU3Ek__BackingField_2(DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * value)
	{
		___U3CHandlerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandlerU3Ek__BackingField_2), (void*)value);
	}
};


// Unity.Services.Core.Telemetry.Internal.DisabledDiagnostics
struct DisabledDiagnostics_t27E5329A61EC82CD8672ED82E6960DA1A570481D  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Core.Telemetry.Internal.DisabledDiagnosticsFactory
struct DisabledDiagnosticsFactory_t3AE17E796B5A67BA640A7E091AA1D8CCC8F1A3D3  : public RuntimeObject
{
public:
	// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.DisabledDiagnosticsFactory::<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory.CommonTags>k__BackingField
	RuntimeObject* ___U3CUnity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTagsU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CUnity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTagsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DisabledDiagnosticsFactory_t3AE17E796B5A67BA640A7E091AA1D8CCC8F1A3D3, ___U3CUnity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTagsU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CUnity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTagsU3Ek__BackingField_0() const { return ___U3CUnity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTagsU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CUnity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTagsU3Ek__BackingField_0() { return &___U3CUnity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTagsU3Ek__BackingField_0; }
	inline void set_U3CUnity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTagsU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CUnity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTagsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTagsU3Ek__BackingField_0), (void*)value);
	}
};


// Unity.Services.Core.Telemetry.Internal.DisabledMetrics
struct DisabledMetrics_tF0F8EBCE70B7C34D51D8E5E6A19D1714580EAA13  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Core.Telemetry.Internal.DisabledMetricsFactory
struct DisabledMetricsFactory_t4AC0F22034937C56A8FB5A67EC19D086CC246FB0  : public RuntimeObject
{
public:
	// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.DisabledMetricsFactory::<Unity.Services.Core.Telemetry.Internal.IMetricsFactory.CommonTags>k__BackingField
	RuntimeObject* ___U3CUnity_Services_Core_Telemetry_Internal_IMetricsFactory_CommonTagsU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CUnity_Services_Core_Telemetry_Internal_IMetricsFactory_CommonTagsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DisabledMetricsFactory_t4AC0F22034937C56A8FB5A67EC19D086CC246FB0, ___U3CUnity_Services_Core_Telemetry_Internal_IMetricsFactory_CommonTagsU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CUnity_Services_Core_Telemetry_Internal_IMetricsFactory_CommonTagsU3Ek__BackingField_0() const { return ___U3CUnity_Services_Core_Telemetry_Internal_IMetricsFactory_CommonTagsU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CUnity_Services_Core_Telemetry_Internal_IMetricsFactory_CommonTagsU3Ek__BackingField_0() { return &___U3CUnity_Services_Core_Telemetry_Internal_IMetricsFactory_CommonTagsU3Ek__BackingField_0; }
	inline void set_U3CUnity_Services_Core_Telemetry_Internal_IMetricsFactory_CommonTagsU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CUnity_Services_Core_Telemetry_Internal_IMetricsFactory_CommonTagsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnity_Services_Core_Telemetry_Internal_IMetricsFactory_CommonTagsU3Ek__BackingField_0), (void*)value);
	}
};


// Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy
struct ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416  : public RuntimeObject
{
public:
	// System.Int32 Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy::m_MaxTryCount
	int32_t ___m_MaxTryCount_0;
	// System.Single Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy::m_BaseDelaySeconds
	float ___m_BaseDelaySeconds_1;

public:
	inline static int32_t get_offset_of_m_MaxTryCount_0() { return static_cast<int32_t>(offsetof(ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416, ___m_MaxTryCount_0)); }
	inline int32_t get_m_MaxTryCount_0() const { return ___m_MaxTryCount_0; }
	inline int32_t* get_address_of_m_MaxTryCount_0() { return &___m_MaxTryCount_0; }
	inline void set_m_MaxTryCount_0(int32_t value)
	{
		___m_MaxTryCount_0 = value;
	}

	inline static int32_t get_offset_of_m_BaseDelaySeconds_1() { return static_cast<int32_t>(offsetof(ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416, ___m_BaseDelaySeconds_1)); }
	inline float get_m_BaseDelaySeconds_1() const { return ___m_BaseDelaySeconds_1; }
	inline float* get_address_of_m_BaseDelaySeconds_1() { return &___m_BaseDelaySeconds_1; }
	inline void set_m_BaseDelaySeconds_1(float value)
	{
		___m_BaseDelaySeconds_1 = value;
	}
};


// Unity.Services.Core.Telemetry.Internal.FactoryUtils
struct FactoryUtils_tEA4252C35676EFA24C4BF60C82C1A89F3E239F24  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Core.Telemetry.Internal.FileCachePersister
struct FileCachePersister_tDF13401D17534AF99A9129316F81890DEB4DA4BC  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Core.Telemetry.Internal.Metrics
struct Metrics_t6ECAC6AD63039C6F5E3AB6AFFEB9A41159776764  : public RuntimeObject
{
public:
	// Unity.Services.Core.Telemetry.Internal.MetricsHandler Unity.Services.Core.Telemetry.Internal.Metrics::<Handler>k__BackingField
	MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * ___U3CHandlerU3Ek__BackingField_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.Metrics::<PackageTags>k__BackingField
	RuntimeObject* ___U3CPackageTagsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CHandlerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Metrics_t6ECAC6AD63039C6F5E3AB6AFFEB9A41159776764, ___U3CHandlerU3Ek__BackingField_0)); }
	inline MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * get_U3CHandlerU3Ek__BackingField_0() const { return ___U3CHandlerU3Ek__BackingField_0; }
	inline MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 ** get_address_of_U3CHandlerU3Ek__BackingField_0() { return &___U3CHandlerU3Ek__BackingField_0; }
	inline void set_U3CHandlerU3Ek__BackingField_0(MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * value)
	{
		___U3CHandlerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandlerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPackageTagsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Metrics_t6ECAC6AD63039C6F5E3AB6AFFEB9A41159776764, ___U3CPackageTagsU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CPackageTagsU3Ek__BackingField_1() const { return ___U3CPackageTagsU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CPackageTagsU3Ek__BackingField_1() { return &___U3CPackageTagsU3Ek__BackingField_1; }
	inline void set_U3CPackageTagsU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CPackageTagsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPackageTagsU3Ek__BackingField_1), (void*)value);
	}
};


// Unity.Services.Core.Telemetry.Internal.MetricsFactory
struct MetricsFactory_tD507E89F251BBFFF3E762FCE0C8B8280C79B1DF1  : public RuntimeObject
{
public:
	// Unity.Services.Core.Configuration.Internal.IProjectConfiguration Unity.Services.Core.Telemetry.Internal.MetricsFactory::m_ProjectConfig
	RuntimeObject* ___m_ProjectConfig_0;
	// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.MetricsFactory::<CommonTags>k__BackingField
	RuntimeObject* ___U3CCommonTagsU3Ek__BackingField_1;
	// Unity.Services.Core.Telemetry.Internal.MetricsHandler Unity.Services.Core.Telemetry.Internal.MetricsFactory::<Handler>k__BackingField
	MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * ___U3CHandlerU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_m_ProjectConfig_0() { return static_cast<int32_t>(offsetof(MetricsFactory_tD507E89F251BBFFF3E762FCE0C8B8280C79B1DF1, ___m_ProjectConfig_0)); }
	inline RuntimeObject* get_m_ProjectConfig_0() const { return ___m_ProjectConfig_0; }
	inline RuntimeObject** get_address_of_m_ProjectConfig_0() { return &___m_ProjectConfig_0; }
	inline void set_m_ProjectConfig_0(RuntimeObject* value)
	{
		___m_ProjectConfig_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProjectConfig_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCommonTagsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MetricsFactory_tD507E89F251BBFFF3E762FCE0C8B8280C79B1DF1, ___U3CCommonTagsU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CCommonTagsU3Ek__BackingField_1() const { return ___U3CCommonTagsU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CCommonTagsU3Ek__BackingField_1() { return &___U3CCommonTagsU3Ek__BackingField_1; }
	inline void set_U3CCommonTagsU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CCommonTagsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCommonTagsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandlerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MetricsFactory_tD507E89F251BBFFF3E762FCE0C8B8280C79B1DF1, ___U3CHandlerU3Ek__BackingField_2)); }
	inline MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * get_U3CHandlerU3Ek__BackingField_2() const { return ___U3CHandlerU3Ek__BackingField_2; }
	inline MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 ** get_address_of_U3CHandlerU3Ek__BackingField_2() { return &___U3CHandlerU3Ek__BackingField_2; }
	inline void set_U3CHandlerU3Ek__BackingField_2(MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * value)
	{
		___U3CHandlerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandlerU3Ek__BackingField_2), (void*)value);
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


// Unity.Services.Core.Telemetry.Internal.TelemetryConfig
struct TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D  : public RuntimeObject
{
public:
	// System.String Unity.Services.Core.Telemetry.Internal.TelemetryConfig::TargetUrl
	String_t* ___TargetUrl_0;
	// System.String Unity.Services.Core.Telemetry.Internal.TelemetryConfig::ServicePath
	String_t* ___ServicePath_1;
	// System.Double Unity.Services.Core.Telemetry.Internal.TelemetryConfig::PayloadExpirationSeconds
	double ___PayloadExpirationSeconds_2;
	// System.Double Unity.Services.Core.Telemetry.Internal.TelemetryConfig::PayloadSendingMaxIntervalSeconds
	double ___PayloadSendingMaxIntervalSeconds_3;
	// System.Double Unity.Services.Core.Telemetry.Internal.TelemetryConfig::SafetyPersistenceIntervalSeconds
	double ___SafetyPersistenceIntervalSeconds_4;
	// System.Int32 Unity.Services.Core.Telemetry.Internal.TelemetryConfig::MaxMetricCountPerPayload
	int32_t ___MaxMetricCountPerPayload_5;

public:
	inline static int32_t get_offset_of_TargetUrl_0() { return static_cast<int32_t>(offsetof(TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D, ___TargetUrl_0)); }
	inline String_t* get_TargetUrl_0() const { return ___TargetUrl_0; }
	inline String_t** get_address_of_TargetUrl_0() { return &___TargetUrl_0; }
	inline void set_TargetUrl_0(String_t* value)
	{
		___TargetUrl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetUrl_0), (void*)value);
	}

	inline static int32_t get_offset_of_ServicePath_1() { return static_cast<int32_t>(offsetof(TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D, ___ServicePath_1)); }
	inline String_t* get_ServicePath_1() const { return ___ServicePath_1; }
	inline String_t** get_address_of_ServicePath_1() { return &___ServicePath_1; }
	inline void set_ServicePath_1(String_t* value)
	{
		___ServicePath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ServicePath_1), (void*)value);
	}

	inline static int32_t get_offset_of_PayloadExpirationSeconds_2() { return static_cast<int32_t>(offsetof(TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D, ___PayloadExpirationSeconds_2)); }
	inline double get_PayloadExpirationSeconds_2() const { return ___PayloadExpirationSeconds_2; }
	inline double* get_address_of_PayloadExpirationSeconds_2() { return &___PayloadExpirationSeconds_2; }
	inline void set_PayloadExpirationSeconds_2(double value)
	{
		___PayloadExpirationSeconds_2 = value;
	}

	inline static int32_t get_offset_of_PayloadSendingMaxIntervalSeconds_3() { return static_cast<int32_t>(offsetof(TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D, ___PayloadSendingMaxIntervalSeconds_3)); }
	inline double get_PayloadSendingMaxIntervalSeconds_3() const { return ___PayloadSendingMaxIntervalSeconds_3; }
	inline double* get_address_of_PayloadSendingMaxIntervalSeconds_3() { return &___PayloadSendingMaxIntervalSeconds_3; }
	inline void set_PayloadSendingMaxIntervalSeconds_3(double value)
	{
		___PayloadSendingMaxIntervalSeconds_3 = value;
	}

	inline static int32_t get_offset_of_SafetyPersistenceIntervalSeconds_4() { return static_cast<int32_t>(offsetof(TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D, ___SafetyPersistenceIntervalSeconds_4)); }
	inline double get_SafetyPersistenceIntervalSeconds_4() const { return ___SafetyPersistenceIntervalSeconds_4; }
	inline double* get_address_of_SafetyPersistenceIntervalSeconds_4() { return &___SafetyPersistenceIntervalSeconds_4; }
	inline void set_SafetyPersistenceIntervalSeconds_4(double value)
	{
		___SafetyPersistenceIntervalSeconds_4 = value;
	}

	inline static int32_t get_offset_of_MaxMetricCountPerPayload_5() { return static_cast<int32_t>(offsetof(TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D, ___MaxMetricCountPerPayload_5)); }
	inline int32_t get_MaxMetricCountPerPayload_5() const { return ___MaxMetricCountPerPayload_5; }
	inline int32_t* get_address_of_MaxMetricCountPerPayload_5() { return &___MaxMetricCountPerPayload_5; }
	inline void set_MaxMetricCountPerPayload_5(int32_t value)
	{
		___MaxMetricCountPerPayload_5 = value;
	}
};


// Unity.Services.Core.Telemetry.Internal.TelemetryHandler
struct TelemetryHandler_t8F0CC3A9415D4ACE40E25ED9F990ECD36F6A216F  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Core.Telemetry.Internal.TelemetrySender
struct TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911  : public RuntimeObject
{
public:
	// System.String Unity.Services.Core.Telemetry.Internal.TelemetrySender::<TargetUrl>k__BackingField
	String_t* ___U3CTargetUrlU3Ek__BackingField_0;
	// Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy Unity.Services.Core.Telemetry.Internal.TelemetrySender::m_RetryPolicy
	ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * ___m_RetryPolicy_1;
	// Unity.Services.Core.Scheduler.Internal.IActionScheduler Unity.Services.Core.Telemetry.Internal.TelemetrySender::m_Scheduler
	RuntimeObject* ___m_Scheduler_2;
	// Unity.Services.Core.Telemetry.Internal.IUnityWebRequestSender Unity.Services.Core.Telemetry.Internal.TelemetrySender::m_RequestSender
	RuntimeObject* ___m_RequestSender_3;

public:
	inline static int32_t get_offset_of_U3CTargetUrlU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911, ___U3CTargetUrlU3Ek__BackingField_0)); }
	inline String_t* get_U3CTargetUrlU3Ek__BackingField_0() const { return ___U3CTargetUrlU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTargetUrlU3Ek__BackingField_0() { return &___U3CTargetUrlU3Ek__BackingField_0; }
	inline void set_U3CTargetUrlU3Ek__BackingField_0(String_t* value)
	{
		___U3CTargetUrlU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTargetUrlU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_RetryPolicy_1() { return static_cast<int32_t>(offsetof(TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911, ___m_RetryPolicy_1)); }
	inline ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * get_m_RetryPolicy_1() const { return ___m_RetryPolicy_1; }
	inline ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 ** get_address_of_m_RetryPolicy_1() { return &___m_RetryPolicy_1; }
	inline void set_m_RetryPolicy_1(ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * value)
	{
		___m_RetryPolicy_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RetryPolicy_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Scheduler_2() { return static_cast<int32_t>(offsetof(TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911, ___m_Scheduler_2)); }
	inline RuntimeObject* get_m_Scheduler_2() const { return ___m_Scheduler_2; }
	inline RuntimeObject** get_address_of_m_Scheduler_2() { return &___m_Scheduler_2; }
	inline void set_m_Scheduler_2(RuntimeObject* value)
	{
		___m_Scheduler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scheduler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_RequestSender_3() { return static_cast<int32_t>(offsetof(TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911, ___m_RequestSender_3)); }
	inline RuntimeObject* get_m_RequestSender_3() const { return ___m_RequestSender_3; }
	inline RuntimeObject** get_address_of_m_RequestSender_3() { return &___m_RequestSender_3; }
	inline void set_m_RequestSender_3(RuntimeObject* value)
	{
		___m_RequestSender_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RequestSender_3), (void*)value);
	}
};


// Unity.Services.Core.Telemetry.Internal.TelemetryUtils
struct TelemetryUtils_tEAEAD73088392CAB3D8F06FA3FF53550D7C61C66  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Core.Telemetry.Internal.UnityWebRequestSender
struct UnityWebRequestSender_tBE2E7D88776F300B0F34024BBA8C0FA4B77EDEFA  : public RuntimeObject
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

// Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler/SendState
struct SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E  : public RuntimeObject
{
public:
	// Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler/SendState::Self
	DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * ___Self_0;
	// Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload> Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler/SendState::Payload
	CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * ___Payload_1;

public:
	inline static int32_t get_offset_of_Self_0() { return static_cast<int32_t>(offsetof(SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E, ___Self_0)); }
	inline DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * get_Self_0() const { return ___Self_0; }
	inline DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 ** get_address_of_Self_0() { return &___Self_0; }
	inline void set_Self_0(DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * value)
	{
		___Self_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Self_0), (void*)value);
	}

	inline static int32_t get_offset_of_Payload_1() { return static_cast<int32_t>(offsetof(SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E, ___Payload_1)); }
	inline CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * get_Payload_1() const { return ___Payload_1; }
	inline CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A ** get_address_of_Payload_1() { return &___Payload_1; }
	inline void set_Payload_1(CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * value)
	{
		___Payload_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Payload_1), (void*)value);
	}
};


// Unity.Services.Core.Telemetry.Internal.UnityWebRequestSender/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t14CAA4D1C0D0D7E7918A9CAD8B056600BE729DCC  : public RuntimeObject
{
public:
	// System.Action`1<Unity.Services.Core.Telemetry.Internal.WebRequest> Unity.Services.Core.Telemetry.Internal.UnityWebRequestSender/<>c__DisplayClass0_0::callback
	Action_1_tF53DB2CD9E161979EF52137A49BBBC58D2C3E49F * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t14CAA4D1C0D0D7E7918A9CAD8B056600BE729DCC, ___callback_0)); }
	inline Action_1_tF53DB2CD9E161979EF52137A49BBBC58D2C3E49F * get_callback_0() const { return ___callback_0; }
	inline Action_1_tF53DB2CD9E161979EF52137A49BBBC58D2C3E49F ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tF53DB2CD9E161979EF52137A49BBBC58D2C3E49F * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload,Unity.Services.Core.Telemetry.Internal.Diagnostic>
struct TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD  : public TelemetryHandler_t8F0CC3A9415D4ACE40E25ED9F990ECD36F6A216F
{
public:
	// Unity.Services.Core.Scheduler.Internal.IActionScheduler Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::m_Scheduler
	RuntimeObject* ___m_Scheduler_0;
	// Unity.Services.Core.Telemetry.Internal.ICachePersister`1<TPayload> Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::m_CachePersister
	RuntimeObject* ___m_CachePersister_1;
	// Unity.Services.Core.Telemetry.Internal.TelemetrySender Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::m_Sender
	TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * ___m_Sender_2;
	// System.Int64 Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::SendingLoopScheduleId
	int64_t ___SendingLoopScheduleId_3;
	// System.Int64 Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::PersistenceLoopScheduleId
	int64_t ___PersistenceLoopScheduleId_4;
	// Unity.Services.Core.Telemetry.Internal.TelemetryConfig Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::<Config>k__BackingField
	TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * ___U3CConfigU3Ek__BackingField_5;
	// Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload> Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::<Cache>k__BackingField
	CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * ___U3CCacheU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_Scheduler_0() { return static_cast<int32_t>(offsetof(TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD, ___m_Scheduler_0)); }
	inline RuntimeObject* get_m_Scheduler_0() const { return ___m_Scheduler_0; }
	inline RuntimeObject** get_address_of_m_Scheduler_0() { return &___m_Scheduler_0; }
	inline void set_m_Scheduler_0(RuntimeObject* value)
	{
		___m_Scheduler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scheduler_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachePersister_1() { return static_cast<int32_t>(offsetof(TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD, ___m_CachePersister_1)); }
	inline RuntimeObject* get_m_CachePersister_1() const { return ___m_CachePersister_1; }
	inline RuntimeObject** get_address_of_m_CachePersister_1() { return &___m_CachePersister_1; }
	inline void set_m_CachePersister_1(RuntimeObject* value)
	{
		___m_CachePersister_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachePersister_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Sender_2() { return static_cast<int32_t>(offsetof(TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD, ___m_Sender_2)); }
	inline TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * get_m_Sender_2() const { return ___m_Sender_2; }
	inline TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 ** get_address_of_m_Sender_2() { return &___m_Sender_2; }
	inline void set_m_Sender_2(TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * value)
	{
		___m_Sender_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sender_2), (void*)value);
	}

	inline static int32_t get_offset_of_SendingLoopScheduleId_3() { return static_cast<int32_t>(offsetof(TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD, ___SendingLoopScheduleId_3)); }
	inline int64_t get_SendingLoopScheduleId_3() const { return ___SendingLoopScheduleId_3; }
	inline int64_t* get_address_of_SendingLoopScheduleId_3() { return &___SendingLoopScheduleId_3; }
	inline void set_SendingLoopScheduleId_3(int64_t value)
	{
		___SendingLoopScheduleId_3 = value;
	}

	inline static int32_t get_offset_of_PersistenceLoopScheduleId_4() { return static_cast<int32_t>(offsetof(TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD, ___PersistenceLoopScheduleId_4)); }
	inline int64_t get_PersistenceLoopScheduleId_4() const { return ___PersistenceLoopScheduleId_4; }
	inline int64_t* get_address_of_PersistenceLoopScheduleId_4() { return &___PersistenceLoopScheduleId_4; }
	inline void set_PersistenceLoopScheduleId_4(int64_t value)
	{
		___PersistenceLoopScheduleId_4 = value;
	}

	inline static int32_t get_offset_of_U3CConfigU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD, ___U3CConfigU3Ek__BackingField_5)); }
	inline TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * get_U3CConfigU3Ek__BackingField_5() const { return ___U3CConfigU3Ek__BackingField_5; }
	inline TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D ** get_address_of_U3CConfigU3Ek__BackingField_5() { return &___U3CConfigU3Ek__BackingField_5; }
	inline void set_U3CConfigU3Ek__BackingField_5(TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * value)
	{
		___U3CConfigU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCacheU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD, ___U3CCacheU3Ek__BackingField_6)); }
	inline CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * get_U3CCacheU3Ek__BackingField_6() const { return ___U3CCacheU3Ek__BackingField_6; }
	inline CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A ** get_address_of_U3CCacheU3Ek__BackingField_6() { return &___U3CCacheU3Ek__BackingField_6; }
	inline void set_U3CCacheU3Ek__BackingField_6(CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * value)
	{
		___U3CCacheU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCacheU3Ek__BackingField_6), (void*)value);
	}
};


// Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.MetricsPayload,Unity.Services.Core.Telemetry.Internal.Metric>
struct TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34  : public TelemetryHandler_t8F0CC3A9415D4ACE40E25ED9F990ECD36F6A216F
{
public:
	// Unity.Services.Core.Scheduler.Internal.IActionScheduler Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::m_Scheduler
	RuntimeObject* ___m_Scheduler_0;
	// Unity.Services.Core.Telemetry.Internal.ICachePersister`1<TPayload> Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::m_CachePersister
	RuntimeObject* ___m_CachePersister_1;
	// Unity.Services.Core.Telemetry.Internal.TelemetrySender Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::m_Sender
	TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * ___m_Sender_2;
	// System.Int64 Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::SendingLoopScheduleId
	int64_t ___SendingLoopScheduleId_3;
	// System.Int64 Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::PersistenceLoopScheduleId
	int64_t ___PersistenceLoopScheduleId_4;
	// Unity.Services.Core.Telemetry.Internal.TelemetryConfig Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::<Config>k__BackingField
	TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * ___U3CConfigU3Ek__BackingField_5;
	// Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload> Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2::<Cache>k__BackingField
	CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * ___U3CCacheU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_Scheduler_0() { return static_cast<int32_t>(offsetof(TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34, ___m_Scheduler_0)); }
	inline RuntimeObject* get_m_Scheduler_0() const { return ___m_Scheduler_0; }
	inline RuntimeObject** get_address_of_m_Scheduler_0() { return &___m_Scheduler_0; }
	inline void set_m_Scheduler_0(RuntimeObject* value)
	{
		___m_Scheduler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scheduler_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachePersister_1() { return static_cast<int32_t>(offsetof(TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34, ___m_CachePersister_1)); }
	inline RuntimeObject* get_m_CachePersister_1() const { return ___m_CachePersister_1; }
	inline RuntimeObject** get_address_of_m_CachePersister_1() { return &___m_CachePersister_1; }
	inline void set_m_CachePersister_1(RuntimeObject* value)
	{
		___m_CachePersister_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachePersister_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Sender_2() { return static_cast<int32_t>(offsetof(TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34, ___m_Sender_2)); }
	inline TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * get_m_Sender_2() const { return ___m_Sender_2; }
	inline TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 ** get_address_of_m_Sender_2() { return &___m_Sender_2; }
	inline void set_m_Sender_2(TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * value)
	{
		___m_Sender_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sender_2), (void*)value);
	}

	inline static int32_t get_offset_of_SendingLoopScheduleId_3() { return static_cast<int32_t>(offsetof(TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34, ___SendingLoopScheduleId_3)); }
	inline int64_t get_SendingLoopScheduleId_3() const { return ___SendingLoopScheduleId_3; }
	inline int64_t* get_address_of_SendingLoopScheduleId_3() { return &___SendingLoopScheduleId_3; }
	inline void set_SendingLoopScheduleId_3(int64_t value)
	{
		___SendingLoopScheduleId_3 = value;
	}

	inline static int32_t get_offset_of_PersistenceLoopScheduleId_4() { return static_cast<int32_t>(offsetof(TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34, ___PersistenceLoopScheduleId_4)); }
	inline int64_t get_PersistenceLoopScheduleId_4() const { return ___PersistenceLoopScheduleId_4; }
	inline int64_t* get_address_of_PersistenceLoopScheduleId_4() { return &___PersistenceLoopScheduleId_4; }
	inline void set_PersistenceLoopScheduleId_4(int64_t value)
	{
		___PersistenceLoopScheduleId_4 = value;
	}

	inline static int32_t get_offset_of_U3CConfigU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34, ___U3CConfigU3Ek__BackingField_5)); }
	inline TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * get_U3CConfigU3Ek__BackingField_5() const { return ___U3CConfigU3Ek__BackingField_5; }
	inline TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D ** get_address_of_U3CConfigU3Ek__BackingField_5() { return &___U3CConfigU3Ek__BackingField_5; }
	inline void set_U3CConfigU3Ek__BackingField_5(TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * value)
	{
		___U3CConfigU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCacheU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34, ___U3CCacheU3Ek__BackingField_6)); }
	inline CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * get_U3CCacheU3Ek__BackingField_6() const { return ___U3CCacheU3Ek__BackingField_6; }
	inline CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 ** get_address_of_U3CCacheU3Ek__BackingField_6() { return &___U3CCacheU3Ek__BackingField_6; }
	inline void set_U3CCacheU3Ek__BackingField_6(CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * value)
	{
		___U3CCacheU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCacheU3Ek__BackingField_6), (void*)value);
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


// Unity.Services.Core.Telemetry.Internal.Diagnostic
struct Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2 
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.Diagnostic::Content
	RuntimeObject* ___Content_0;

public:
	inline static int32_t get_offset_of_Content_0() { return static_cast<int32_t>(offsetof(Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2, ___Content_0)); }
	inline RuntimeObject* get_Content_0() const { return ___Content_0; }
	inline RuntimeObject** get_address_of_Content_0() { return &___Content_0; }
	inline void set_Content_0(RuntimeObject* value)
	{
		___Content_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Content_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Services.Core.Telemetry.Internal.Diagnostic
struct Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2_marshaled_pinvoke
{
	RuntimeObject* ___Content_0;
};
// Native definition for COM marshalling of Unity.Services.Core.Telemetry.Internal.Diagnostic
struct Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2_marshaled_com
{
	RuntimeObject* ___Content_0;
};

// Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload
struct DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 
{
public:
	// System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Diagnostic> Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload::Diagnostics
	List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * ___Diagnostics_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload::CommonTags
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___CommonTags_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload::DiagnosticsCommonTags
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___DiagnosticsCommonTags_2;

public:
	inline static int32_t get_offset_of_Diagnostics_0() { return static_cast<int32_t>(offsetof(DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863, ___Diagnostics_0)); }
	inline List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * get_Diagnostics_0() const { return ___Diagnostics_0; }
	inline List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 ** get_address_of_Diagnostics_0() { return &___Diagnostics_0; }
	inline void set_Diagnostics_0(List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * value)
	{
		___Diagnostics_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Diagnostics_0), (void*)value);
	}

	inline static int32_t get_offset_of_CommonTags_1() { return static_cast<int32_t>(offsetof(DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863, ___CommonTags_1)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_CommonTags_1() const { return ___CommonTags_1; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_CommonTags_1() { return &___CommonTags_1; }
	inline void set_CommonTags_1(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___CommonTags_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CommonTags_1), (void*)value);
	}

	inline static int32_t get_offset_of_DiagnosticsCommonTags_2() { return static_cast<int32_t>(offsetof(DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863, ___DiagnosticsCommonTags_2)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_DiagnosticsCommonTags_2() const { return ___DiagnosticsCommonTags_2; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_DiagnosticsCommonTags_2() { return &___DiagnosticsCommonTags_2; }
	inline void set_DiagnosticsCommonTags_2(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___DiagnosticsCommonTags_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DiagnosticsCommonTags_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload
struct DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_marshaled_pinvoke
{
	List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * ___Diagnostics_0;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___CommonTags_1;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___DiagnosticsCommonTags_2;
};
// Native definition for COM marshalling of Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload
struct DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_marshaled_com
{
	List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * ___Diagnostics_0;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___CommonTags_1;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___DiagnosticsCommonTags_2;
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


// Unity.Services.Core.Telemetry.Internal.MetricsPayload
struct MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 
{
public:
	// System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Metric> Unity.Services.Core.Telemetry.Internal.MetricsPayload::Metrics
	List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * ___Metrics_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.MetricsPayload::CommonTags
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___CommonTags_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.MetricsPayload::MetricsCommonTags
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___MetricsCommonTags_2;

public:
	inline static int32_t get_offset_of_Metrics_0() { return static_cast<int32_t>(offsetof(MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19, ___Metrics_0)); }
	inline List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * get_Metrics_0() const { return ___Metrics_0; }
	inline List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 ** get_address_of_Metrics_0() { return &___Metrics_0; }
	inline void set_Metrics_0(List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * value)
	{
		___Metrics_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Metrics_0), (void*)value);
	}

	inline static int32_t get_offset_of_CommonTags_1() { return static_cast<int32_t>(offsetof(MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19, ___CommonTags_1)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_CommonTags_1() const { return ___CommonTags_1; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_CommonTags_1() { return &___CommonTags_1; }
	inline void set_CommonTags_1(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___CommonTags_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CommonTags_1), (void*)value);
	}

	inline static int32_t get_offset_of_MetricsCommonTags_2() { return static_cast<int32_t>(offsetof(MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19, ___MetricsCommonTags_2)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_MetricsCommonTags_2() const { return ___MetricsCommonTags_2; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_MetricsCommonTags_2() { return &___MetricsCommonTags_2; }
	inline void set_MetricsCommonTags_2(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___MetricsCommonTags_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MetricsCommonTags_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Services.Core.Telemetry.Internal.MetricsPayload
struct MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_marshaled_pinvoke
{
	List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * ___Metrics_0;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___CommonTags_1;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___MetricsCommonTags_2;
};
// Native definition for COM marshalling of Unity.Services.Core.Telemetry.Internal.MetricsPayload
struct MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_marshaled_com
{
	List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * ___Metrics_0;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___CommonTags_1;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___MetricsCommonTags_2;
};

// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
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


// Unity.Services.Core.Telemetry.Internal.MetricsHandler/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t001FFEB184E0584DA956B66FF667ABC0D3FA16E8 
{
public:
	// Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.MetricsPayload> Unity.Services.Core.Telemetry.Internal.MetricsHandler/<>c__DisplayClass1_0::persistedCache
	CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * ___persistedCache_0;
	// Unity.Services.Core.Telemetry.Internal.MetricsHandler Unity.Services.Core.Telemetry.Internal.MetricsHandler/<>c__DisplayClass1_0::<>4__this
	MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_persistedCache_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t001FFEB184E0584DA956B66FF667ABC0D3FA16E8, ___persistedCache_0)); }
	inline CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * get_persistedCache_0() const { return ___persistedCache_0; }
	inline CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 ** get_address_of_persistedCache_0() { return &___persistedCache_0; }
	inline void set_persistedCache_0(CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * value)
	{
		___persistedCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___persistedCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t001FFEB184E0584DA956B66FF667ABC0D3FA16E8, ___U3CU3E4__this_1)); }
	inline MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>
struct CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A  : public RuntimeObject
{
public:
	// System.Int64 Unity.Services.Core.Telemetry.Internal.CachedPayload`1::TimeOfOccurenceTicks
	int64_t ___TimeOfOccurenceTicks_0;
	// TPayload Unity.Services.Core.Telemetry.Internal.CachedPayload`1::Payload
	DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863  ___Payload_1;

public:
	inline static int32_t get_offset_of_TimeOfOccurenceTicks_0() { return static_cast<int32_t>(offsetof(CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A, ___TimeOfOccurenceTicks_0)); }
	inline int64_t get_TimeOfOccurenceTicks_0() const { return ___TimeOfOccurenceTicks_0; }
	inline int64_t* get_address_of_TimeOfOccurenceTicks_0() { return &___TimeOfOccurenceTicks_0; }
	inline void set_TimeOfOccurenceTicks_0(int64_t value)
	{
		___TimeOfOccurenceTicks_0 = value;
	}

	inline static int32_t get_offset_of_Payload_1() { return static_cast<int32_t>(offsetof(CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A, ___Payload_1)); }
	inline DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863  get_Payload_1() const { return ___Payload_1; }
	inline DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 * get_address_of_Payload_1() { return &___Payload_1; }
	inline void set_Payload_1(DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863  value)
	{
		___Payload_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Payload_1))->___Diagnostics_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Payload_1))->___CommonTags_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Payload_1))->___DiagnosticsCommonTags_2), (void*)NULL);
		#endif
	}
};


// Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.MetricsPayload>
struct CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9  : public RuntimeObject
{
public:
	// System.Int64 Unity.Services.Core.Telemetry.Internal.CachedPayload`1::TimeOfOccurenceTicks
	int64_t ___TimeOfOccurenceTicks_0;
	// TPayload Unity.Services.Core.Telemetry.Internal.CachedPayload`1::Payload
	MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19  ___Payload_1;

public:
	inline static int32_t get_offset_of_TimeOfOccurenceTicks_0() { return static_cast<int32_t>(offsetof(CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9, ___TimeOfOccurenceTicks_0)); }
	inline int64_t get_TimeOfOccurenceTicks_0() const { return ___TimeOfOccurenceTicks_0; }
	inline int64_t* get_address_of_TimeOfOccurenceTicks_0() { return &___TimeOfOccurenceTicks_0; }
	inline void set_TimeOfOccurenceTicks_0(int64_t value)
	{
		___TimeOfOccurenceTicks_0 = value;
	}

	inline static int32_t get_offset_of_Payload_1() { return static_cast<int32_t>(offsetof(CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9, ___Payload_1)); }
	inline MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19  get_Payload_1() const { return ___Payload_1; }
	inline MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 * get_address_of_Payload_1() { return &___Payload_1; }
	inline void set_Payload_1(MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19  value)
	{
		___Payload_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Payload_1))->___Metrics_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Payload_1))->___CommonTags_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Payload_1))->___MetricsCommonTags_2), (void*)NULL);
		#endif
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

// Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler
struct DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710  : public TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD
{
public:

public:
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

// Unity.Services.Core.Telemetry.Internal.MetricType
struct MetricType_t4B83CDDB72AED85FBD9D3FDD11FF93EAF1EFF538 
{
public:
	// System.Int32 Unity.Services.Core.Telemetry.Internal.MetricType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MetricType_t4B83CDDB72AED85FBD9D3FDD11FF93EAF1EFF538, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Services.Core.Telemetry.Internal.MetricsHandler
struct MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231  : public TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34
{
public:

public:
};


// UnityEngine.NetworkReachability
struct NetworkReachability_t8F15310A11943C1C3752844598A796FB8EE2BFBC 
{
public:
	// System.Int32 UnityEngine.NetworkReachability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkReachability_t8F15310A11943C1C3752844598A796FB8EE2BFBC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
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


// System.Threading.Tasks.TaskContinuationOptions
struct TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399 
{
public:
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskStatus
struct TaskStatus_t550D7DA3655E0A44C7B2925539A4025FB6BA9EF2 
{
public:
	// System.Int32 System.Threading.Tasks.TaskStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskStatus_t550D7DA3655E0A44C7B2925539A4025FB6BA9EF2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// Unity.Services.Core.Telemetry.Internal.WebRequestResult
struct WebRequestResult_tB4D30ED76EA760ED09C4F94EB80C2F09AD661C49 
{
public:
	// System.Int32 Unity.Services.Core.Telemetry.Internal.WebRequestResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebRequestResult_tB4D30ED76EA760ED09C4F94EB80C2F09AD661C49, ___value___2)); }
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

// Unity.Services.Core.Telemetry.Internal.Metric
struct Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD 
{
public:
	// System.String Unity.Services.Core.Telemetry.Internal.Metric::Name
	String_t* ___Name_0;
	// System.Double Unity.Services.Core.Telemetry.Internal.Metric::Value
	double ___Value_1;
	// Unity.Services.Core.Telemetry.Internal.MetricType Unity.Services.Core.Telemetry.Internal.Metric::Type
	int32_t ___Type_2;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.Metric::Tags
	RuntimeObject* ___Tags_3;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD, ___Value_1)); }
	inline double get_Value_1() const { return ___Value_1; }
	inline double* get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(double value)
	{
		___Value_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD, ___Type_2)); }
	inline int32_t get_Type_2() const { return ___Type_2; }
	inline int32_t* get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(int32_t value)
	{
		___Type_2 = value;
	}

	inline static int32_t get_offset_of_Tags_3() { return static_cast<int32_t>(offsetof(Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD, ___Tags_3)); }
	inline RuntimeObject* get_Tags_3() const { return ___Tags_3; }
	inline RuntimeObject** get_address_of_Tags_3() { return &___Tags_3; }
	inline void set_Tags_3(RuntimeObject* value)
	{
		___Tags_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tags_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Services.Core.Telemetry.Internal.Metric
struct Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD_marshaled_pinvoke
{
	char* ___Name_0;
	double ___Value_1;
	int32_t ___Type_2;
	RuntimeObject* ___Tags_3;
};
// Native definition for COM marshalling of Unity.Services.Core.Telemetry.Internal.Metric
struct Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD_marshaled_com
{
	Il2CppChar* ___Name_0;
	double ___Value_1;
	int32_t ___Type_2;
	RuntimeObject* ___Tags_3;
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

// Unity.Services.Core.Telemetry.Internal.WebRequest
struct WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D 
{
public:
	// Unity.Services.Core.Telemetry.Internal.WebRequestResult Unity.Services.Core.Telemetry.Internal.WebRequest::Result
	int32_t ___Result_0;
	// System.String Unity.Services.Core.Telemetry.Internal.WebRequest::ErrorMessage
	String_t* ___ErrorMessage_1;
	// System.String Unity.Services.Core.Telemetry.Internal.WebRequest::ErrorBody
	String_t* ___ErrorBody_2;
	// System.Int64 Unity.Services.Core.Telemetry.Internal.WebRequest::ResponseCode
	int64_t ___ResponseCode_3;

public:
	inline static int32_t get_offset_of_Result_0() { return static_cast<int32_t>(offsetof(WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D, ___Result_0)); }
	inline int32_t get_Result_0() const { return ___Result_0; }
	inline int32_t* get_address_of_Result_0() { return &___Result_0; }
	inline void set_Result_0(int32_t value)
	{
		___Result_0 = value;
	}

	inline static int32_t get_offset_of_ErrorMessage_1() { return static_cast<int32_t>(offsetof(WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D, ___ErrorMessage_1)); }
	inline String_t* get_ErrorMessage_1() const { return ___ErrorMessage_1; }
	inline String_t** get_address_of_ErrorMessage_1() { return &___ErrorMessage_1; }
	inline void set_ErrorMessage_1(String_t* value)
	{
		___ErrorMessage_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorMessage_1), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorBody_2() { return static_cast<int32_t>(offsetof(WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D, ___ErrorBody_2)); }
	inline String_t* get_ErrorBody_2() const { return ___ErrorBody_2; }
	inline String_t** get_address_of_ErrorBody_2() { return &___ErrorBody_2; }
	inline void set_ErrorBody_2(String_t* value)
	{
		___ErrorBody_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorBody_2), (void*)value);
	}

	inline static int32_t get_offset_of_ResponseCode_3() { return static_cast<int32_t>(offsetof(WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D, ___ResponseCode_3)); }
	inline int64_t get_ResponseCode_3() const { return ___ResponseCode_3; }
	inline int64_t* get_address_of_ResponseCode_3() { return &___ResponseCode_3; }
	inline void set_ResponseCode_3(int64_t value)
	{
		___ResponseCode_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Services.Core.Telemetry.Internal.WebRequest
struct WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D_marshaled_pinvoke
{
	int32_t ___Result_0;
	char* ___ErrorMessage_1;
	char* ___ErrorBody_2;
	int64_t ___ResponseCode_3;
};
// Native definition for COM marshalling of Unity.Services.Core.Telemetry.Internal.WebRequest
struct WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D_marshaled_com
{
	int32_t ___Result_0;
	Il2CppChar* ___ErrorMessage_1;
	Il2CppChar* ___ErrorBody_2;
	int64_t ___ResponseCode_3;
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Unity.Services.Core.Telemetry.Internal.WebRequest>
struct Action_1_tF53DB2CD9E161979EF52137A49BBBC58D2C3E49F  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4  : public MulticastDelegate_t
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


// System.Int32 System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Diagnostic>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC4E34F94D45D3903017D537DF9B4FAC0ED6490BC_gshared_inline (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Diagnostic>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mD1FFC5A20C0935413A60C7E205113CF50EAB947E_gshared (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<!0,!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m15FB53DEA7CD6487FD59ED68D6DB681FD332025C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// !!0 Unity.Services.Core.Internal.DictionaryExtensions::MergeAllowOverride<System.Object,System.Object,System.Object>(!!0,System.Collections.Generic.IDictionary`2<!!1,!!2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DictionaryExtensions_MergeAllowOverride_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m76BBA5262F314A166B44F94A0E29AE064353BA09_gshared (RuntimeObject * ___self0, RuntimeObject* ___dictionary1, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload,Unity.Services.Core.Telemetry.Internal.Diagnostic>::Register(TEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelemetryHandler_2_Register_mD67F5E5162BF4BBC039837E341315ADA2FD8CEA3_gshared (TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD * __this, Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2  ___telemetryEvent0, const RuntimeMethod* method);
// Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload> Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload,Unity.Services.Core.Telemetry.Internal.Diagnostic>::get_Cache()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_gshared_inline (TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload,Unity.Services.Core.Telemetry.Internal.Diagnostic>::.ctor(Unity.Services.Core.Telemetry.Internal.TelemetryConfig,Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload>,Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Telemetry.Internal.ICachePersister`1<TPayload>,Unity.Services.Core.Telemetry.Internal.TelemetrySender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelemetryHandler_2__ctor_m0DE1BF6FE34433BE16E2B4BBC5060CD264797E3F_gshared (TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD * __this, TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * ___config0, CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * ___cache1, RuntimeObject* ___scheduler2, RuntimeObject* ___cachePersister3, TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * ___sender4, const RuntimeMethod* method);
// System.Threading.Tasks.Task Unity.Services.Core.Telemetry.Internal.TelemetrySender::SendAsync<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>(TPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * TelemetrySender_SendAsync_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m0A9A17FC07F11A9D92AA82351AC18B6E7DE98CF3_gshared (TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * __this, DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863  ___payload0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedPayload_1__ctor_m35D57431F42F984330DB9E2393FBDB552C248C1E_gshared (CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean Unity.Services.Core.Telemetry.Internal.CacheExtensions::IsEmpty<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>(Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CacheExtensions_IsEmpty_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m3C957849FC68E3DB5C14B366B5A4AD8B74CFAD24_gshared (CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * ___self0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Diagnostic>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m96DD29242C4F14B1DA6AC3146CE13E2786EE7590_gshared (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Diagnostic>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m83EB82C5AF4DF1FEC3C82C1D33F805246C2A2836_gshared (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Diagnostic>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA5929D0369712599805200E150E0F1C98250F052_gshared (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Diagnostic>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF7516AB0BEE97FFD4FD59456778F2AD4692B4CDB_gshared (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * __this, Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.MetricsPayload,Unity.Services.Core.Telemetry.Internal.Metric>::Register(TEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelemetryHandler_2_Register_mDF6ED28D7C2C6FB663B70B7C4ACE2C9C5CCAF6F0_gshared (TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 * __this, Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD  ___telemetryEvent0, const RuntimeMethod* method);
// Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload> Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.MetricsPayload,Unity.Services.Core.Telemetry.Internal.Metric>::get_Cache()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_gshared_inline (TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.MetricsPayload,Unity.Services.Core.Telemetry.Internal.Metric>::.ctor(Unity.Services.Core.Telemetry.Internal.TelemetryConfig,Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload>,Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Telemetry.Internal.ICachePersister`1<TPayload>,Unity.Services.Core.Telemetry.Internal.TelemetrySender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelemetryHandler_2__ctor_m7594D711F3F43DB0F376BDBAA5BBF64A8DFAF7C8_gshared (TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 * __this, TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * ___config0, CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * ___cache1, RuntimeObject* ___scheduler2, RuntimeObject* ___cachePersister3, TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * ___sender4, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.AotHelper::EnsureType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AotHelper_EnsureType_TisRuntimeObject_m6EDF28690DD7B8CA181720E806A64BD3E45CE6E1_gshared (const RuntimeMethod* method);
// System.Threading.Tasks.Task Unity.Services.Core.Telemetry.Internal.TelemetrySender::SendAsync<Unity.Services.Core.Telemetry.Internal.MetricsPayload>(TPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * TelemetrySender_SendAsync_TisMetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_mB918AE49663DF24311221FD5D6D826A5EAFA28B4_gshared (TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * __this, MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19  ___payload0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Metric>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE3AABCF8B688AB84FABF2C239D960127E28FBB2D_gshared_inline (List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Metric>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mA52F909D3E2C9ACAD96DB6E0D2E9A3221B3F09D9_gshared (List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * __this, const RuntimeMethod* method);
// Unity.Services.Core.Telemetry.Internal.TelemetryConfig Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.MetricsPayload,Unity.Services.Core.Telemetry.Internal.Metric>::get_Config()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * TelemetryHandler_2_get_Config_m2E26D63E35F736C441D337EA7FBB99D93A7878DD_gshared_inline (TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Metric>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m914565735F215A98066C412DE2C40916BD385FD0_gshared (List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Metric>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF52274977DB2F80CE0E3B2686A88F93A9F123F17_gshared (List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * __this, Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD  ___item0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.MetricsPayload>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedPayload_1__ctor_mC11E2A4EC35C9CBA21AA4DE267B4BE8E37EE0FFC_gshared (CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Metric>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m5BAB264E522362F7F3E437C0F9BD90DA0C406187_gshared (List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * __this, const RuntimeMethod* method);
// Unity.Services.Core.Telemetry.Internal.ICachePersister`1<TPayload> Unity.Services.Core.Telemetry.Internal.TelemetryUtils::CreateCachePersister<Unity.Services.Core.Telemetry.Internal.MetricsPayload>(System.String,UnityEngine.RuntimePlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TelemetryUtils_CreateCachePersister_TisMetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_m2BD780D6A0F8A924BCC811DD8A94A83E19A1AA0C_gshared (String_t* ___fileName0, int32_t ___platform1, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.MetricsPayload,Unity.Services.Core.Telemetry.Internal.Metric>::Initialize(Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelemetryHandler_2_Initialize_m192185702069F62A93421AA9AA1763AC8923ECBA_gshared (TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 * __this, RuntimeObject* ___cloudProjectId0, RuntimeObject* ___environments1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Diagnostic>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4CC06DBC64F6D87FDEBC50A10169CE6F0CE2470C_gshared (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * __this, const RuntimeMethod* method);
// Unity.Services.Core.Telemetry.Internal.ICachePersister`1<TPayload> Unity.Services.Core.Telemetry.Internal.TelemetryUtils::CreateCachePersister<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>(System.String,UnityEngine.RuntimePlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TelemetryUtils_CreateCachePersister_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m7D63490F889496FF7CBFDE112BC077F5270FE95C_gshared (String_t* ___fileName0, int32_t ___platform1, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload,Unity.Services.Core.Telemetry.Internal.Diagnostic>::Initialize(Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelemetryHandler_2_Initialize_m09C5741F2A2E19A3B3FF6F4261805C0062CAA5CE_gshared (TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD * __this, RuntimeObject* ___cloudProjectId0, RuntimeObject* ___environments1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<Unity.Services.Core.Telemetry.Internal.WebRequest>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m8C0419007C7C4F2A4B97AEFDE54E8F61FEC16BE9_gshared (Action_1_tF53DB2CD9E161979EF52137A49BBBC58D2C3E49F * __this, WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D  ___obj0, const RuntimeMethod* method);

// System.Int32 System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Diagnostic>::get_Count()
inline int32_t List_1_get_Count_mC4E34F94D45D3903017D537DF9B4FAC0ED6490BC_inline (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 *, const RuntimeMethod*))List_1_get_Count_mC4E34F94D45D3903017D537DF9B4FAC0ED6490BC_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Diagnostic>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mD1FFC5A20C0935413A60C7E205113CF50EAB947E (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_mD1FFC5A20C0935413A60C7E205113CF50EAB947E_gshared)(__this, ___collection0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<!0,!1>)
inline void Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m15FB53DEA7CD6487FD59ED68D6DB681FD332025C_gshared)(__this, ___dictionary0, method);
}
// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.Diagnostics::get_PackageTags()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Diagnostics_get_PackageTags_mC970F45FF13D9C8728B2516E7F49CD2E94E064D1_inline (Diagnostics_t77D54D438A6C2AA9042730FB90BEF3357DEB0728 * __this, const RuntimeMethod* method);
// !!0 Unity.Services.Core.Internal.DictionaryExtensions::MergeAllowOverride<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.String>(!!0,System.Collections.Generic.IDictionary`2<!!1,!!2>)
inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * DictionaryExtensions_MergeAllowOverride_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_TisString_t_TisString_t_m76A96D51EF6EA68D4E64E435FADF7D38AC8D311E (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___self0, RuntimeObject* ___dictionary1, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, RuntimeObject*, const RuntimeMethod*))DictionaryExtensions_MergeAllowOverride_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m76BBA5262F314A166B44F94A0E29AE064353BA09_gshared)(___self0, ___dictionary1, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4 (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler Unity.Services.Core.Telemetry.Internal.Diagnostics::get_Handler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * Diagnostics_get_Handler_mA93DC705972AD769F706BD98F8F0901734D607A3_inline (Diagnostics_t77D54D438A6C2AA9042730FB90BEF3357DEB0728 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload,Unity.Services.Core.Telemetry.Internal.Diagnostic>::Register(TEvent)
inline void TelemetryHandler_2_Register_mD67F5E5162BF4BBC039837E341315ADA2FD8CEA3 (TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD * __this, Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2  ___telemetryEvent0, const RuntimeMethod* method)
{
	((  void (*) (TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD *, Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2 , const RuntimeMethod*))TelemetryHandler_2_Register_mD67F5E5162BF4BBC039837E341315ADA2FD8CEA3_gshared)(__this, ___telemetryEvent0, method);
}
// Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload> Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload,Unity.Services.Core.Telemetry.Internal.Diagnostic>::get_Cache()
inline CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_inline (TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD * __this, const RuntimeMethod* method)
{
	return ((  CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * (*) (TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD *, const RuntimeMethod*))TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_gshared_inline)(__this, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.FactoryUtils::CreatePackageTags(Unity.Services.Core.Configuration.Internal.IProjectConfiguration,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FactoryUtils_CreatePackageTags_mD3215ED8D60E9ABB1E75E7E386EB154215D3548E (RuntimeObject* ___projectConfig0, String_t* ___packageName1, const RuntimeMethod* method);
// Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler Unity.Services.Core.Telemetry.Internal.DiagnosticsFactory::get_Handler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * DiagnosticsFactory_get_Handler_m89453A3F3D5FA717F4A39BB919636EB16F7FA23A_inline (DiagnosticsFactory_t035E06152439A7D806A2770BA3029E9C4AE88931 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.Diagnostics::.ctor(Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics__ctor_m7D5CA600179AA060DB0C23A0ECFF2BD3C2D78EDA (Diagnostics_t77D54D438A6C2AA9042730FB90BEF3357DEB0728 * __this, DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * ___handler0, RuntimeObject* ___packageTags1, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload,Unity.Services.Core.Telemetry.Internal.Diagnostic>::.ctor(Unity.Services.Core.Telemetry.Internal.TelemetryConfig,Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload>,Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Telemetry.Internal.ICachePersister`1<TPayload>,Unity.Services.Core.Telemetry.Internal.TelemetrySender)
inline void TelemetryHandler_2__ctor_m0DE1BF6FE34433BE16E2B4BBC5060CD264797E3F (TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD * __this, TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * ___config0, CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * ___cache1, RuntimeObject* ___scheduler2, RuntimeObject* ___cachePersister3, TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * ___sender4, const RuntimeMethod* method)
{
	((  void (*) (TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD *, TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D *, CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A *, RuntimeObject*, RuntimeObject*, TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 *, const RuntimeMethod*))TelemetryHandler_2__ctor_m0DE1BF6FE34433BE16E2B4BBC5060CD264797E3F_gshared)(__this, ___config0, ___cache1, ___scheduler2, ___cachePersister3, ___sender4, method);
}
// System.Threading.Tasks.Task Unity.Services.Core.Telemetry.Internal.TelemetrySender::SendAsync<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>(TPayload)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * TelemetrySender_SendAsync_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m0A9A17FC07F11A9D92AA82351AC18B6E7DE98CF3 (TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * __this, DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863  ___payload0, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 *, DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 , const RuntimeMethod*))TelemetrySender_SendAsync_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m0A9A17FC07F11A9D92AA82351AC18B6E7DE98CF3_gshared)(__this, ___payload0, method);
}
// System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler/SendState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendState__ctor_m2D59753171C2D08FB84F12EED9EF6363D99A020E (SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>::.ctor()
inline void CachedPayload_1__ctor_m35D57431F42F984330DB9E2393FBDB552C248C1E (CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * __this, const RuntimeMethod* method)
{
	((  void (*) (CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A *, const RuntimeMethod*))CachedPayload_1__ctor_m35D57431F42F984330DB9E2393FBDB552C248C1E_gshared)(__this, method);
}
// System.Void System.Action`2<System.Threading.Tasks.Task,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mF5BAD5A096500EC74F25D943B318D37A7E9B2772 (Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`2<System.Threading.Tasks.Task,System.Object>,System.Object,System.Threading.Tasks.TaskContinuationOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_ContinueWith_mDE539398374581D979DB702253F1F3C10AE24E2B (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * ___continuationAction0, RuntimeObject * ___state1, int32_t ___continuationOptions2, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Threading.Tasks.TaskStatus System.Threading.Tasks.Task::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_get_Status_m322B3FEDAED081C1EA55F6E2922007475E7CAAED (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.CacheExtensions::AddRangeFrom(Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>,Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheExtensions_AddRangeFrom_mEEBA1F115EAD88F3D8F6DBAF3A4DEBAFE0141DAF (CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * ___self0, CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * ___payload1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Clear()
inline void Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared)(__this, method);
}
// System.String UnityEngine.Application::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_version_m3D7E3915FF7D40E0E5569C7A80BCFE7C2D2528C9 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.String UnityEngine.Application::get_productName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_productName_m712E2BD951F92F0D8E992E45C8508F0B5B045E83 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_genuineCheckAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_genuineCheckAvailable_mB2F50490ED4F6F035BE3312E457C1566D3A5E8B2 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_genuine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_genuine_m97BCEF4D5E4692AFF566CBD0936BBC7FEC21C419 (const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.String System.Boolean::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6AF340BBFF7B2ABB5987CE80AE6335EE96BC71E9 (bool* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// UnityEngine.NetworkReachability UnityEngine.Application::get_internetReachability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_internetReachability_m039C30126BD989614BF2A4A3F33129177A95C61C (const RuntimeMethod* method);
// System.Boolean Unity.Services.Core.Telemetry.Internal.CacheExtensions::IsEmpty<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>(Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload>)
inline bool CacheExtensions_IsEmpty_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m3C957849FC68E3DB5C14B366B5A4AD8B74CFAD24 (CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * ___self0, const RuntimeMethod* method)
{
	return ((  bool (*) (CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A *, const RuntimeMethod*))CacheExtensions_IsEmpty_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m3C957849FC68E3DB5C14B366B5A4AD8B74CFAD24_gshared)(___self0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Diagnostic>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m96DD29242C4F14B1DA6AC3146CE13E2786EE7590 (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m96DD29242C4F14B1DA6AC3146CE13E2786EE7590_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Diagnostic>::Clear()
inline void List_1_Clear_m83EB82C5AF4DF1FEC3C82C1D33F805246C2A2836 (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 *, const RuntimeMethod*))List_1_Clear_m83EB82C5AF4DF1FEC3C82C1D33F805246C2A2836_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload::Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.get_CommonTags()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags_m9A322F41FCB2FFE6C4BB1734669869E136825A99_inline (DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload::Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_Count_m6A4DBC50C973E4912BEA1FAC32F90B8D33F3B854 (DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Diagnostic>::.ctor(System.Int32)
inline void List_1__ctor_mA5929D0369712599805200E150E0F1C98250F052 (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 *, int32_t, const RuntimeMethod*))List_1__ctor_mA5929D0369712599805200E150E0F1C98250F052_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Diagnostic>::Add(!0)
inline void List_1_Add_mF7516AB0BEE97FFD4FD59456778F2AD4692B4CDB (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * __this, Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 *, Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2 , const RuntimeMethod*))List_1_Add_mF7516AB0BEE97FFD4FD59456778F2AD4692B4CDB_gshared)(__this, ___item0, method);
}
// System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload::Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.Add(Unity.Services.Core.Telemetry.Internal.ITelemetryEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add_m639E8AF30440C2692140AF5DB9B8FABF9E8D4367 (DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 * __this, RuntimeObject* ___telemetryEvent0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.DisabledDiagnostics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisabledDiagnostics__ctor_m0023B64C119B874BAD623EBD0A87C386833561CF (DisabledDiagnostics_t27E5329A61EC82CD8672ED82E6960DA1A570481D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void Unity.Services.Core.Telemetry.Internal.DisabledMetrics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisabledMetrics__ctor_m536610D43ED9B7342E43750017CD5D09383B12B1 (DisabledMetrics_tF0F8EBCE70B7C34D51D8E5E6A19D1714580EAA13 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy::get_MaxTryCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ExponentialBackOffRetryPolicy_get_MaxTryCount_m6101EA53ACF9BE54AC7C54F1DB399F32656349D7_inline (ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy::IsTransientError(Unity.Services.Core.Telemetry.Internal.WebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExponentialBackOffRetryPolicy_IsTransientError_m7071198D3AD96882AC5807F068BF82C24A8C1F6D (WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D  ___webRequest0, const RuntimeMethod* method);
// System.Boolean Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy::<IsTransientError>g__IsServerErrorCode|9_0(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExponentialBackOffRetryPolicy_U3CIsTransientErrorU3Eg__IsServerErrorCodeU7C9_0_m75BA8C5B3E2F9EDEDAC390BBA6DA0456F7B34956 (int64_t ___responseCode0, const RuntimeMethod* method);
// System.Single Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy::get_BaseDelaySeconds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ExponentialBackOffRetryPolicy_get_BaseDelaySeconds_m70788C0F0E02C71BC00F2D49481958E677C90022_inline (ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String Unity.Services.Core.Telemetry.Internal.FileCachePersister::GetPersistentDataPathFor(UnityEngine.RuntimePlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileCachePersister_GetPersistentDataPathFor_mEDE6204BB85622E2FCA1BF634B720D5BBB00ACD6 (int32_t ___platform0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.Metrics::get_PackageTags()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Metrics_get_PackageTags_mE5692757668C3A30E78AC2A52AA661AA76CFFD8C_inline (Metrics_t6ECAC6AD63039C6F5E3AB6AFFEB9A41159776764 * __this, const RuntimeMethod* method);
// !!0 Unity.Services.Core.Internal.DictionaryExtensions::MergeAllowOverride<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.String>(!!0,System.Collections.Generic.IDictionary`2<!!1,!!2>)
inline RuntimeObject* DictionaryExtensions_MergeAllowOverride_TisIDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_TisString_t_TisString_t_m441EB26E8827E32CFB42A5A5E1FC4955955F6351 (RuntimeObject* ___self0, RuntimeObject* ___dictionary1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))DictionaryExtensions_MergeAllowOverride_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m76BBA5262F314A166B44F94A0E29AE064353BA09_gshared)(___self0, ___dictionary1, method);
}
// Unity.Services.Core.Telemetry.Internal.Metric Unity.Services.Core.Telemetry.Internal.Metrics::CreateMetric(System.String,System.Double,Unity.Services.Core.Telemetry.Internal.MetricType,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD  Metrics_CreateMetric_m91FB92106AFCAF3E440C2978B44E867AB4AAA239 (Metrics_t6ECAC6AD63039C6F5E3AB6AFFEB9A41159776764 * __this, String_t* ___name0, double ___value1, int32_t ___type2, RuntimeObject* ___tags3, const RuntimeMethod* method);
// Unity.Services.Core.Telemetry.Internal.MetricsHandler Unity.Services.Core.Telemetry.Internal.Metrics::get_Handler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * Metrics_get_Handler_mAF3E6B486B9338FD23ECDB10D1F09FD2C0198432_inline (Metrics_t6ECAC6AD63039C6F5E3AB6AFFEB9A41159776764 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.MetricsPayload,Unity.Services.Core.Telemetry.Internal.Metric>::Register(TEvent)
inline void TelemetryHandler_2_Register_mDF6ED28D7C2C6FB663B70B7C4ACE2C9C5CCAF6F0 (TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 * __this, Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD  ___telemetryEvent0, const RuntimeMethod* method)
{
	((  void (*) (TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 *, Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD , const RuntimeMethod*))TelemetryHandler_2_Register_mDF6ED28D7C2C6FB663B70B7C4ACE2C9C5CCAF6F0_gshared)(__this, ___telemetryEvent0, method);
}
// Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload> Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.MetricsPayload,Unity.Services.Core.Telemetry.Internal.Metric>::get_Cache()
inline CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_inline (TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 * __this, const RuntimeMethod* method)
{
	return ((  CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * (*) (TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 *, const RuntimeMethod*))TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_gshared_inline)(__this, method);
}
// Unity.Services.Core.Telemetry.Internal.MetricsHandler Unity.Services.Core.Telemetry.Internal.MetricsFactory::get_Handler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * MetricsFactory_get_Handler_mA9E730A2CCF7B37C8249546FBB4F846F97A02602_inline (MetricsFactory_tD507E89F251BBFFF3E762FCE0C8B8280C79B1DF1 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.Metrics::.ctor(Unity.Services.Core.Telemetry.Internal.MetricsHandler,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metrics__ctor_m839F7DF34351EF188EC4DD62A06B190BF276D818 (Metrics_t6ECAC6AD63039C6F5E3AB6AFFEB9A41159776764 * __this, MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * ___handler0, RuntimeObject* ___packageTags1, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.MetricsPayload,Unity.Services.Core.Telemetry.Internal.Metric>::.ctor(Unity.Services.Core.Telemetry.Internal.TelemetryConfig,Unity.Services.Core.Telemetry.Internal.CachedPayload`1<TPayload>,Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Telemetry.Internal.ICachePersister`1<TPayload>,Unity.Services.Core.Telemetry.Internal.TelemetrySender)
inline void TelemetryHandler_2__ctor_m7594D711F3F43DB0F376BDBAA5BBF64A8DFAF7C8 (TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 * __this, TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * ___config0, CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * ___cache1, RuntimeObject* ___scheduler2, RuntimeObject* ___cachePersister3, TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * ___sender4, const RuntimeMethod* method)
{
	((  void (*) (TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 *, TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D *, CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 *, RuntimeObject*, RuntimeObject*, TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 *, const RuntimeMethod*))TelemetryHandler_2__ctor_m7594D711F3F43DB0F376BDBAA5BBF64A8DFAF7C8_gshared)(__this, ___config0, ___cache1, ___scheduler2, ___cachePersister3, ___sender4, method);
}
// System.Void Newtonsoft.Json.Utilities.AotHelper::EnsureType<Newtonsoft.Json.Converters.StringEnumConverter>()
inline void AotHelper_EnsureType_TisStringEnumConverter_tE53DF2A99F7AF815FC7B5600F1E580C1AA649556_m88DE7AAB1148746E03A3501EB782FB49688EA42D (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))AotHelper_EnsureType_TisRuntimeObject_m6EDF28690DD7B8CA181720E806A64BD3E45CE6E1_gshared)(method);
}
// System.Boolean Unity.Services.Core.Telemetry.Internal.MetricsHandler::<SendPersistedCache>g__AreMetricsOutdated|1_0(Unity.Services.Core.Telemetry.Internal.MetricsHandler/<>c__DisplayClass1_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricsHandler_U3CSendPersistedCacheU3Eg__AreMetricsOutdatedU7C1_0_mA181D05894D14A9A418B889D0AF3D575C1C28A9A (MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * __this, U3CU3Ec__DisplayClass1_0_t001FFEB184E0584DA956B66FF667ABC0D3FA16E8 * p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Unity.Services.Core.Telemetry.Internal.TelemetrySender::SendAsync<Unity.Services.Core.Telemetry.Internal.MetricsPayload>(TPayload)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * TelemetrySender_SendAsync_TisMetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_mB918AE49663DF24311221FD5D6D826A5EAFA28B4 (TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * __this, MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19  ___payload0, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 *, MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 , const RuntimeMethod*))TelemetrySender_SendAsync_TisMetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_mB918AE49663DF24311221FD5D6D826A5EAFA28B4_gshared)(__this, ___payload0, method);
}
// System.Int32 System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Metric>::get_Count()
inline int32_t List_1_get_Count_mE3AABCF8B688AB84FABF2C239D960127E28FBB2D_inline (List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 *, const RuntimeMethod*))List_1_get_Count_mE3AABCF8B688AB84FABF2C239D960127E28FBB2D_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Metric>::Clear()
inline void List_1_Clear_mA52F909D3E2C9ACAD96DB6E0D2E9A3221B3F09D9 (List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 *, const RuntimeMethod*))List_1_Clear_mA52F909D3E2C9ACAD96DB6E0D2E9A3221B3F09D9_gshared)(__this, method);
}
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090 (const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m14D7C60472AE477F824F8BEE8830C5F5D4FCA16A (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, int64_t ___ticks0, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d10, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d21, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// Unity.Services.Core.Telemetry.Internal.TelemetryConfig Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.MetricsPayload,Unity.Services.Core.Telemetry.Internal.Metric>::get_Config()
inline TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * TelemetryHandler_2_get_Config_m2E26D63E35F736C441D337EA7FBB99D93A7878DD_inline (TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 * __this, const RuntimeMethod* method)
{
	return ((  TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * (*) (TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 *, const RuntimeMethod*))TelemetryHandler_2_get_Config_m2E26D63E35F736C441D337EA7FBB99D93A7878DD_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.MetricsPayload::Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.get_CommonTags()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags_m09CDC380DE374675706B6BCAF1D7DCA4F4CB2043_inline (MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Services.Core.Telemetry.Internal.MetricsPayload::Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_Count_m072E80CC3B3D4C221BA9B6AE15EAC16D389B2C4D (MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Metric>::.ctor(System.Int32)
inline void List_1__ctor_m914565735F215A98066C412DE2C40916BD385FD0 (List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 *, int32_t, const RuntimeMethod*))List_1__ctor_m914565735F215A98066C412DE2C40916BD385FD0_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Metric>::Add(!0)
inline void List_1_Add_mF52274977DB2F80CE0E3B2686A88F93A9F123F17 (List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * __this, Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 *, Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD , const RuntimeMethod*))List_1_Add_mF52274977DB2F80CE0E3B2686A88F93A9F123F17_gshared)(__this, ___item0, method);
}
// System.Void Unity.Services.Core.Telemetry.Internal.MetricsPayload::Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.Add(Unity.Services.Core.Telemetry.Internal.ITelemetryEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add_m47C6DBA28798422C1FB05C799CD04A8822D70481 (MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 * __this, RuntimeObject* ___telemetryEvent0, const RuntimeMethod* method);
// System.String Unity.Services.Core.Telemetry.Internal.TelemetrySender::get_TargetUrl()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TelemetrySender_get_TargetUrl_m74B01582AF1424F2EC351DD9D1FEB2CB5405E510_inline (TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9 (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandler::set_contentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_set_contentType_mAECD24AB554541300BD126E01C65329F0A29A328 (UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.Boolean Unity.Services.Core.Telemetry.Internal.TelemetryUtils::IsTelemetryDisabled(Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelemetryUtils_IsTelemetryDisabled_m0B6A8C6F61672C595DDEB14D4B7837FAA5D5C452 (RuntimeObject* ___projectConfiguration0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.DisabledMetricsFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisabledMetricsFactory__ctor_mBF0702F244DF6D3905E27E2360B91F3027052395 (DisabledMetricsFactory_t4AC0F22034937C56A8FB5A67EC19D086CC246FB0 * __this, const RuntimeMethod* method);
// Unity.Services.Core.Telemetry.Internal.TelemetryConfig Unity.Services.Core.Telemetry.Internal.TelemetryUtils::CreateTelemetryConfig(Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * TelemetryUtils_CreateTelemetryConfig_m9A1AB532C9ED2F93A46AC64C8D3E2CFFA845C648 (RuntimeObject* ___projectConfiguration0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.MetricsPayload>::.ctor()
inline void CachedPayload_1__ctor_mC11E2A4EC35C9CBA21AA4DE267B4BE8E37EE0FFC (CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * __this, const RuntimeMethod* method)
{
	((  void (*) (CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 *, const RuntimeMethod*))CachedPayload_1__ctor_mC11E2A4EC35C9CBA21AA4DE267B4BE8E37EE0FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Metric>::.ctor()
inline void List_1__ctor_m5BAB264E522362F7F3E437C0F9BD90DA0C406187 (List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 *, const RuntimeMethod*))List_1__ctor_m5BAB264E522362F7F3E437C0F9BD90DA0C406187_gshared)(__this, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// Unity.Services.Core.Telemetry.Internal.ICachePersister`1<TPayload> Unity.Services.Core.Telemetry.Internal.TelemetryUtils::CreateCachePersister<Unity.Services.Core.Telemetry.Internal.MetricsPayload>(System.String,UnityEngine.RuntimePlatform)
inline RuntimeObject* TelemetryUtils_CreateCachePersister_TisMetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_m2BD780D6A0F8A924BCC811DD8A94A83E19A1AA0C (String_t* ___fileName0, int32_t ___platform1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (String_t*, int32_t, const RuntimeMethod*))TelemetryUtils_CreateCachePersister_TisMetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_m2BD780D6A0F8A924BCC811DD8A94A83E19A1AA0C_gshared)(___fileName0, ___platform1, method);
}
// System.Void Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExponentialBackOffRetryPolicy__ctor_m05CD4D215EDD77E62B874F7F85BE4E98E774AC14 (ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.UnityWebRequestSender::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestSender__ctor_mA11216EAB62A1338EEC354F377AA0D0F6207EE29 (UnityWebRequestSender_tBE2E7D88776F300B0F34024BBA8C0FA4B77EDEFA * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.TelemetrySender::.ctor(System.String,System.String,Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy,Unity.Services.Core.Telemetry.Internal.IUnityWebRequestSender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelemetrySender__ctor_mFBABC9EAEB34BC9E7A43888DB11742C900348938 (TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * __this, String_t* ___targetUrl0, String_t* ___servicePath1, RuntimeObject* ___scheduler2, ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * ___retryPolicy3, RuntimeObject* ___requestSender4, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.MetricsHandler::.ctor(Unity.Services.Core.Telemetry.Internal.TelemetryConfig,Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.MetricsPayload>,Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Telemetry.Internal.ICachePersister`1<Unity.Services.Core.Telemetry.Internal.MetricsPayload>,Unity.Services.Core.Telemetry.Internal.TelemetrySender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricsHandler__ctor_m8E2AFD1459BAA0D7E0DDDD4D9C7D22B75AF11BF9 (MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * __this, TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * ___config0, CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * ___cache1, RuntimeObject* ___scheduler2, RuntimeObject* ___cachePersister3, TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * ___sender4, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.MetricsPayload,Unity.Services.Core.Telemetry.Internal.Metric>::Initialize(Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments)
inline void TelemetryHandler_2_Initialize_m192185702069F62A93421AA9AA1763AC8923ECBA (TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 * __this, RuntimeObject* ___cloudProjectId0, RuntimeObject* ___environments1, const RuntimeMethod* method)
{
	((  void (*) (TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))TelemetryHandler_2_Initialize_m192185702069F62A93421AA9AA1763AC8923ECBA_gshared)(__this, ___cloudProjectId0, ___environments1, method);
}
// System.Void Unity.Services.Core.Telemetry.Internal.MetricsFactory::.ctor(Unity.Services.Core.Telemetry.Internal.MetricsHandler,Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricsFactory__ctor_mB6689743B76FCDB3986053C6CB2C3431725C61EB (MetricsFactory_tD507E89F251BBFFF3E762FCE0C8B8280C79B1DF1 * __this, MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * ___handler0, RuntimeObject* ___projectConfig1, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.DisabledDiagnosticsFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisabledDiagnosticsFactory__ctor_m98F5E115DCBA52AFB7190F2E419DF085FA5A6356 (DisabledDiagnosticsFactory_t3AE17E796B5A67BA640A7E091AA1D8CCC8F1A3D3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Telemetry.Internal.Diagnostic>::.ctor()
inline void List_1__ctor_m4CC06DBC64F6D87FDEBC50A10169CE6F0CE2470C (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 *, const RuntimeMethod*))List_1__ctor_m4CC06DBC64F6D87FDEBC50A10169CE6F0CE2470C_gshared)(__this, method);
}
// Unity.Services.Core.Telemetry.Internal.ICachePersister`1<TPayload> Unity.Services.Core.Telemetry.Internal.TelemetryUtils::CreateCachePersister<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>(System.String,UnityEngine.RuntimePlatform)
inline RuntimeObject* TelemetryUtils_CreateCachePersister_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m7D63490F889496FF7CBFDE112BC077F5270FE95C (String_t* ___fileName0, int32_t ___platform1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (String_t*, int32_t, const RuntimeMethod*))TelemetryUtils_CreateCachePersister_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m7D63490F889496FF7CBFDE112BC077F5270FE95C_gshared)(___fileName0, ___platform1, method);
}
// System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler::.ctor(Unity.Services.Core.Telemetry.Internal.TelemetryConfig,Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>,Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Telemetry.Internal.ICachePersister`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>,Unity.Services.Core.Telemetry.Internal.TelemetrySender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsHandler__ctor_m1FD38166806FF3D1435FFDE86764436D4B087AEC (DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * __this, TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * ___config0, CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * ___cache1, RuntimeObject* ___scheduler2, RuntimeObject* ___cachePersister3, TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * ___sender4, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler`2<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload,Unity.Services.Core.Telemetry.Internal.Diagnostic>::Initialize(Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments)
inline void TelemetryHandler_2_Initialize_m09C5741F2A2E19A3B3FF6F4261805C0062CAA5CE (TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD * __this, RuntimeObject* ___cloudProjectId0, RuntimeObject* ___environments1, const RuntimeMethod* method)
{
	((  void (*) (TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))TelemetryHandler_2_Initialize_m09C5741F2A2E19A3B3FF6F4261805C0062CAA5CE_gshared)(__this, ___cloudProjectId0, ___environments1, method);
}
// System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsFactory::.ctor(Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler,Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsFactory__ctor_m94E13A224764049FB392BF9BF0EC1139D0630DBC (DiagnosticsFactory_t035E06152439A7D806A2770BA3029E9C4AE88931 * __this, DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * ___handler0, RuntimeObject* ___projectConfig1, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.TelemetryConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelemetryConfig__ctor_mB44120EA43D09FD1749F10662EA9554AEBB98567 (TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * __this, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Telemetry.Internal.UnityWebRequestSender/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m1293CAEAF4397E61E8E4C3E889ED9F0F9A5F381A (U3CU3Ec__DisplayClass0_0_t14CAA4D1C0D0D7E7918A9CAD8B056600BE729DCC * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10 (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_m44D28A82BB10C85AED56A43BB666850D2E9E59E8 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___value0, const RuntimeMethod* method);
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean Unity.Services.Core.Internal.UnityWebRequestUtils::HasSucceeded(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestUtils_HasSucceeded_m187B4E129C0225BE9215C8684B3D588E7A195B71 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___self0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Boolean Unity.Services.Core.Telemetry.Internal.WebRequest::get_IsSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRequest_get_IsSuccess_m051188E93FCE554B69A490AFFF3EEDD3D28AA726 (WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::get_webRequest()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequestAsyncOperation_get_webRequest_m3D57A3FA8CF2214D219CA25026558E212E893151_inline (UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * __this, const RuntimeMethod* method);
// Unity.Services.Core.Telemetry.Internal.WebRequest Unity.Services.Core.Telemetry.Internal.UnityWebRequestSender::Simplify(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D  UnityWebRequestSender_Simplify_m2E626DF31F20FAF4CABD327178C2601EDE8ADEC8 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___webRequest0, const RuntimeMethod* method);
// System.Void System.Action`1<Unity.Services.Core.Telemetry.Internal.WebRequest>::Invoke(!0)
inline void Action_1_Invoke_m8C0419007C7C4F2A4B97AEFDE54E8F61FEC16BE9 (Action_1_tF53DB2CD9E161979EF52137A49BBBC58D2C3E49F * __this, WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF53DB2CD9E161979EF52137A49BBBC58D2C3E49F *, WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D , const RuntimeMethod*))Action_1_Invoke_m8C0419007C7C4F2A4B97AEFDE54E8F61FEC16BE9_gshared)(__this, ___obj0, method);
}
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
// System.Void Unity.Services.Core.Telemetry.Internal.CacheExtensions::AddRangeFrom(Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>,Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheExtensions_AddRangeFrom_mEEBA1F115EAD88F3D8F6DBAF3A4DEBAFE0141DAF (CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * ___self0, CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * ___payload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mD1FFC5A20C0935413A60C7E205113CF50EAB947E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC4E34F94D45D3903017D537DF9B4FAC0ED6490BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		// var hasDiagnosticsToAdd = payload.Payload.Diagnostics.Count > 0;
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_0 = ___payload1;
		NullCheck(L_0);
		DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 * L_1 = L_0->get_address_of_Payload_1();
		List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * L_2 = L_1->get_Diagnostics_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mC4E34F94D45D3903017D537DF9B4FAC0ED6490BC_inline(L_2, /*hidden argument*/List_1_get_Count_mC4E34F94D45D3903017D537DF9B4FAC0ED6490BC_RuntimeMethod_var);
		// if (hasDiagnosticsToAdd)
		int32_t L_4 = ((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		G_B1_0 = L_4;
		if (!L_4)
		{
			G_B2_0 = L_4;
			goto IL_0031;
		}
	}
	{
		// self.Payload.Diagnostics.AddRange(payload.Payload.Diagnostics);
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_5 = ___self0;
		NullCheck(L_5);
		DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 * L_6 = L_5->get_address_of_Payload_1();
		List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * L_7 = L_6->get_Diagnostics_0();
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_8 = ___payload1;
		NullCheck(L_8);
		DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 * L_9 = L_8->get_address_of_Payload_1();
		List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * L_10 = L_9->get_Diagnostics_0();
		NullCheck(L_7);
		List_1_AddRange_mD1FFC5A20C0935413A60C7E205113CF50EAB947E(L_7, L_10, /*hidden argument*/List_1_AddRange_mD1FFC5A20C0935413A60C7E205113CF50EAB947E_RuntimeMethod_var);
		G_B2_0 = G_B1_0;
	}

IL_0031:
	{
		// if (hasDiagnosticsToAdd
		//     && self.TimeOfOccurenceTicks <= 0)
		if (!G_B2_0)
		{
			goto IL_0049;
		}
	}
	{
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_11 = ___self0;
		NullCheck(L_11);
		int64_t L_12 = L_11->get_TimeOfOccurenceTicks_0();
		if ((((int64_t)L_12) > ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_0049;
		}
	}
	{
		// self.TimeOfOccurenceTicks = payload.TimeOfOccurenceTicks;
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_13 = ___self0;
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_14 = ___payload1;
		NullCheck(L_14);
		int64_t L_15 = L_14->get_TimeOfOccurenceTicks_0();
		NullCheck(L_13);
		L_13->set_TimeOfOccurenceTicks_0(L_15);
	}

IL_0049:
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
// Conversion methods for marshalling of: Unity.Services.Core.Telemetry.Internal.Diagnostic
IL2CPP_EXTERN_C void Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2_marshal_pinvoke(const Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2& unmarshaled, Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Content_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Content' of type 'Diagnostic'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Content_0Exception, NULL);
}
IL2CPP_EXTERN_C void Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2_marshal_pinvoke_back(const Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2_marshaled_pinvoke& marshaled, Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2& unmarshaled)
{
	Exception_t* ___Content_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Content' of type 'Diagnostic'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Content_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Telemetry.Internal.Diagnostic
IL2CPP_EXTERN_C void Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2_marshal_pinvoke_cleanup(Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Services.Core.Telemetry.Internal.Diagnostic
IL2CPP_EXTERN_C void Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2_marshal_com(const Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2& unmarshaled, Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2_marshaled_com& marshaled)
{
	Exception_t* ___Content_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Content' of type 'Diagnostic'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Content_0Exception, NULL);
}
IL2CPP_EXTERN_C void Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2_marshal_com_back(const Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2_marshaled_com& marshaled, Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2& unmarshaled)
{
	Exception_t* ___Content_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Content' of type 'Diagnostic'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Content_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Telemetry.Internal.Diagnostic
IL2CPP_EXTERN_C void Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2_marshal_com_cleanup(Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2_marshaled_com& marshaled)
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
// Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler Unity.Services.Core.Telemetry.Internal.Diagnostics::get_Handler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * Diagnostics_get_Handler_mA93DC705972AD769F706BD98F8F0901734D607A3 (Diagnostics_t77D54D438A6C2AA9042730FB90BEF3357DEB0728 * __this, const RuntimeMethod* method)
{
	{
		// internal DiagnosticsHandler Handler { get; }
		DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * L_0 = __this->get_U3CHandlerU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.Diagnostics::get_PackageTags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Diagnostics_get_PackageTags_mC970F45FF13D9C8728B2516E7F49CD2E94E064D1 (Diagnostics_t77D54D438A6C2AA9042730FB90BEF3357DEB0728 * __this, const RuntimeMethod* method)
{
	{
		// internal IDictionary<string, string> PackageTags { get; }
		RuntimeObject* L_0 = __this->get_U3CPackageTagsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.Diagnostics::.ctor(Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics__ctor_m7D5CA600179AA060DB0C23A0ECFF2BD3C2D78EDA (Diagnostics_t77D54D438A6C2AA9042730FB90BEF3357DEB0728 * __this, DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * ___handler0, RuntimeObject* ___packageTags1, const RuntimeMethod* method)
{
	{
		// public Diagnostics(DiagnosticsHandler handler, IDictionary<string, string> packageTags)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Handler = handler;
		DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * L_0 = ___handler0;
		__this->set_U3CHandlerU3Ek__BackingField_0(L_0);
		// PackageTags = packageTags;
		RuntimeObject* L_1 = ___packageTags1;
		__this->set_U3CPackageTagsU3Ek__BackingField_1(L_1);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.Diagnostics::SendDiagnostic(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SendDiagnostic_mE94B0DC4FF6686D4C460826B484D81091E83889F (Diagnostics_t77D54D438A6C2AA9042730FB90BEF3357DEB0728 * __this, String_t* ___name0, String_t* ___message1, RuntimeObject* ___tags2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_MergeAllowOverride_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_TisString_t_TisString_t_m76A96D51EF6EA68D4E64E435FADF7D38AC8D311E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetryHandler_2_Register_mD67F5E5162BF4BBC039837E341315ADA2FD8CEA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0F18B89B1F8655687A510EA40A91CA6D56786B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		s_Il2CppMethodInitialized = true;
	}
	Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2 * G_B2_0 = NULL;
	Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2 * G_B1_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B3_0 = NULL;
	Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2 * G_B3_1 = NULL;
	{
		// var diagnostic = new Diagnostic
		// {
		//     Content = tags is null
		//         ? new Dictionary<string, string>(PackageTags)
		//         : new Dictionary<string, string>(tags)
		//             .MergeAllowOverride(PackageTags),
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2 ));
		RuntimeObject* L_0 = ___tags2;
		G_B1_0 = (&V_1);
		if (!L_0)
		{
			G_B2_0 = (&V_1);
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_1 = ___tags2;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_2 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9(L_2, L_1, /*hidden argument*/Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9_RuntimeMethod_var);
		RuntimeObject* L_3;
		L_3 = Diagnostics_get_PackageTags_mC970F45FF13D9C8728B2516E7F49CD2E94E064D1_inline(__this, /*hidden argument*/NULL);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_4;
		L_4 = DictionaryExtensions_MergeAllowOverride_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_TisString_t_TisString_t_m76A96D51EF6EA68D4E64E435FADF7D38AC8D311E(L_2, L_3, /*hidden argument*/DictionaryExtensions_MergeAllowOverride_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_TisString_t_TisString_t_m76A96D51EF6EA68D4E64E435FADF7D38AC8D311E_RuntimeMethod_var);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_002b;
	}

IL_0020:
	{
		RuntimeObject* L_5;
		L_5 = Diagnostics_get_PackageTags_mC970F45FF13D9C8728B2516E7F49CD2E94E064D1_inline(__this, /*hidden argument*/NULL);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_6 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9(L_6, L_5, /*hidden argument*/Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9_RuntimeMethod_var);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_002b:
	{
		G_B3_1->set_Content_0(G_B3_0);
		Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2  L_7 = V_1;
		V_0 = L_7;
		// diagnostic.Content.Add(TagKeys.DiagnosticName, name);
		Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2  L_8 = V_0;
		RuntimeObject* L_9 = L_8.get_Content_0();
		String_t* L_10 = ___name0;
		NullCheck(L_9);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::Add(!0,!1) */, IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var, L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_10);
		// if (message != null && message.Length > MaxDiagnosticMessageLength)
		String_t* L_11 = ___message1;
		if (!L_11)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_12 = ___message1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)10000))))
		{
			goto IL_0070;
		}
	}
	{
		// message = $"{message.Substring(0, MaxDiagnosticMessageLength)}{Environment.NewLine}{DiagnosticMessageTruncateSuffix}";
		String_t* L_14 = ___message1;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_14, 0, ((int32_t)10000), /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		String_t* L_17;
		L_17 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_15, L_16, _stringLiteralD0F18B89B1F8655687A510EA40A91CA6D56786B9, /*hidden argument*/NULL);
		___message1 = L_17;
	}

IL_0070:
	{
		// diagnostic.Content.Add(TagKeys.DiagnosticMessage, message);
		Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2  L_18 = V_0;
		RuntimeObject* L_19 = L_18.get_Content_0();
		String_t* L_20 = ___message1;
		NullCheck(L_19);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::Add(!0,!1) */, IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var, L_19, _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964, L_20);
		// Handler.Register(diagnostic);
		DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * L_21;
		L_21 = Diagnostics_get_Handler_mA93DC705972AD769F706BD98F8F0901734D607A3_inline(__this, /*hidden argument*/NULL);
		Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2  L_22 = V_0;
		NullCheck(L_21);
		TelemetryHandler_2_Register_mD67F5E5162BF4BBC039837E341315ADA2FD8CEA3(L_21, L_22, /*hidden argument*/TelemetryHandler_2_Register_mD67F5E5162BF4BBC039837E341315ADA2FD8CEA3_RuntimeMethod_var);
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
// Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler Unity.Services.Core.Telemetry.Internal.DiagnosticsFactory::get_Handler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * DiagnosticsFactory_get_Handler_m89453A3F3D5FA717F4A39BB919636EB16F7FA23A (DiagnosticsFactory_t035E06152439A7D806A2770BA3029E9C4AE88931 * __this, const RuntimeMethod* method)
{
	{
		// internal DiagnosticsHandler Handler { get; }
		DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * L_0 = __this->get_U3CHandlerU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsFactory::.ctor(Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler,Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsFactory__ctor_m94E13A224764049FB392BF9BF0EC1139D0630DBC (DiagnosticsFactory_t035E06152439A7D806A2770BA3029E9C4AE88931 * __this, DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * ___handler0, RuntimeObject* ___projectConfig1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_MergeAllowOverride_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_TisString_t_TisString_t_m76A96D51EF6EA68D4E64E435FADF7D38AC8D311E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DiagnosticsFactory(DiagnosticsHandler handler, IProjectConfiguration projectConfig)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Handler = handler;
		DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * L_0 = ___handler0;
		__this->set_U3CHandlerU3Ek__BackingField_2(L_0);
		// m_ProjectConfig = projectConfig;
		RuntimeObject* L_1 = ___projectConfig1;
		__this->set_m_ProjectConfig_0(L_1);
		// CommonTags = new Dictionary<string, string>(handler.Cache.Payload.CommonTags)
		//     .MergeAllowOverride(handler.Cache.Payload.DiagnosticsCommonTags);
		DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * L_2 = ___handler0;
		NullCheck(L_2);
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_3;
		L_3 = TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_inline(L_2, /*hidden argument*/TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_RuntimeMethod_var);
		NullCheck(L_3);
		DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 * L_4 = L_3->get_address_of_Payload_1();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_5 = L_4->get_CommonTags_1();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_6 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9(L_6, L_5, /*hidden argument*/Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9_RuntimeMethod_var);
		DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * L_7 = ___handler0;
		NullCheck(L_7);
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_8;
		L_8 = TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_inline(L_7, /*hidden argument*/TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_RuntimeMethod_var);
		NullCheck(L_8);
		DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 * L_9 = L_8->get_address_of_Payload_1();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_10 = L_9->get_DiagnosticsCommonTags_2();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_11;
		L_11 = DictionaryExtensions_MergeAllowOverride_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_TisString_t_TisString_t_m76A96D51EF6EA68D4E64E435FADF7D38AC8D311E(L_6, L_10, /*hidden argument*/DictionaryExtensions_MergeAllowOverride_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_TisString_t_TisString_t_m76A96D51EF6EA68D4E64E435FADF7D38AC8D311E_RuntimeMethod_var);
		__this->set_U3CCommonTagsU3Ek__BackingField_1(L_11);
		// }
		return;
	}
}
// Unity.Services.Core.Telemetry.Internal.IDiagnostics Unity.Services.Core.Telemetry.Internal.DiagnosticsFactory::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagnosticsFactory_Create_m998CE50370DBA97DC1721169C36C0B7B62B890EA (DiagnosticsFactory_t035E06152439A7D806A2770BA3029E9C4AE88931 * __this, String_t* ___packageName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Diagnostics_t77D54D438A6C2AA9042730FB90BEF3357DEB0728_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (string.IsNullOrEmpty(packageName))
		String_t* L_0 = ___packageName0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(packageName));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3B77922C3A2E8F89E4C7359003D66665B608BA30)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DiagnosticsFactory_Create_m998CE50370DBA97DC1721169C36C0B7B62B890EA_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var packageTags = FactoryUtils.CreatePackageTags(m_ProjectConfig, packageName);
		RuntimeObject* L_3 = __this->get_m_ProjectConfig_0();
		String_t* L_4 = ___packageName0;
		RuntimeObject* L_5;
		L_5 = FactoryUtils_CreatePackageTags_mD3215ED8D60E9ABB1E75E7E386EB154215D3548E(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// var diagnostics = new Diagnostics(Handler, packageTags);
		DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * L_6;
		L_6 = DiagnosticsFactory_get_Handler_m89453A3F3D5FA717F4A39BB919636EB16F7FA23A_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_7 = V_0;
		Diagnostics_t77D54D438A6C2AA9042730FB90BEF3357DEB0728 * L_8 = (Diagnostics_t77D54D438A6C2AA9042730FB90BEF3357DEB0728 *)il2cpp_codegen_object_new(Diagnostics_t77D54D438A6C2AA9042730FB90BEF3357DEB0728_il2cpp_TypeInfo_var);
		Diagnostics__ctor_m7D5CA600179AA060DB0C23A0ECFF2BD3C2D78EDA(L_8, L_6, L_7, /*hidden argument*/NULL);
		// return diagnostics;
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
// System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler::.ctor(Unity.Services.Core.Telemetry.Internal.TelemetryConfig,Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>,Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Telemetry.Internal.ICachePersister`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>,Unity.Services.Core.Telemetry.Internal.TelemetrySender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsHandler__ctor_m1FD38166806FF3D1435FFDE86764436D4B087AEC (DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * __this, TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * ___config0, CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * ___cache1, RuntimeObject* ___scheduler2, RuntimeObject* ___cachePersister3, TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * ___sender4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetryHandler_2__ctor_m0DE1BF6FE34433BE16E2B4BBC5060CD264797E3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(config, cache, scheduler, cachePersister, sender) {}
		TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * L_0 = ___config0;
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_1 = ___cache1;
		RuntimeObject* L_2 = ___scheduler2;
		RuntimeObject* L_3 = ___cachePersister3;
		TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * L_4 = ___sender4;
		TelemetryHandler_2__ctor_m0DE1BF6FE34433BE16E2B4BBC5060CD264797E3F(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/TelemetryHandler_2__ctor_m0DE1BF6FE34433BE16E2B4BBC5060CD264797E3F_RuntimeMethod_var);
		// : base(config, cache, scheduler, cachePersister, sender) {}
		return;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler::SendPersistedCache(Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsHandler_SendPersistedCache_mF8326FAEF1EA8190BF1D14659C120F130859FD72 (DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * __this, CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * ___persistedCache0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mF5BAD5A096500EC74F25D943B318D37A7E9B2772_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedPayload_1__ctor_m35D57431F42F984330DB9E2393FBDB552C248C1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsHandler_OnSendAsyncCompleted_m1E5728BE6B16E3C83F8B0F43E629C4B425FB288F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICachePersister_1_t2B5DA838D04E99AD675CD3A748B6B63E0B28AB04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetrySender_SendAsync_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m0A9A17FC07F11A9D92AA82351AC18B6E7DE98CF3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E * V_0 = NULL;
	{
		// var sendAsync = m_Sender.SendAsync(persistedCache.Payload);
		TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * L_0 = ((TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD *)__this)->get_m_Sender_2();
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_1 = ___persistedCache0;
		NullCheck(L_1);
		DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863  L_2 = L_1->get_Payload_1();
		NullCheck(L_0);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3;
		L_3 = TelemetrySender_SendAsync_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m0A9A17FC07F11A9D92AA82351AC18B6E7DE98CF3(L_0, L_2, /*hidden argument*/TelemetrySender_SendAsync_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m0A9A17FC07F11A9D92AA82351AC18B6E7DE98CF3_RuntimeMethod_var);
		// m_CachePersister.Delete();
		RuntimeObject* L_4 = ((TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD *)__this)->get_m_CachePersister_1();
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Unity.Services.Core.Telemetry.Internal.ICachePersister`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>::Delete() */, ICachePersister_1_t2B5DA838D04E99AD675CD3A748B6B63E0B28AB04_il2cpp_TypeInfo_var, L_4);
		// var localState = new SendState
		// {
		//     Self = this,
		//     Payload = new CachedPayload<DiagnosticsPayload>
		//     {
		//         TimeOfOccurenceTicks = persistedCache.TimeOfOccurenceTicks,
		//         Payload = persistedCache.Payload,
		//     },
		// };
		SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E * L_5 = (SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E *)il2cpp_codegen_object_new(SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E_il2cpp_TypeInfo_var);
		SendState__ctor_m2D59753171C2D08FB84F12EED9EF6363D99A020E(L_5, /*hidden argument*/NULL);
		SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E * L_6 = L_5;
		NullCheck(L_6);
		L_6->set_Self_0(__this);
		SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E * L_7 = L_6;
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_8 = (CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A *)il2cpp_codegen_object_new(CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A_il2cpp_TypeInfo_var);
		CachedPayload_1__ctor_m35D57431F42F984330DB9E2393FBDB552C248C1E(L_8, /*hidden argument*/CachedPayload_1__ctor_m35D57431F42F984330DB9E2393FBDB552C248C1E_RuntimeMethod_var);
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_9 = L_8;
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_10 = ___persistedCache0;
		NullCheck(L_10);
		int64_t L_11 = L_10->get_TimeOfOccurenceTicks_0();
		NullCheck(L_9);
		L_9->set_TimeOfOccurenceTicks_0(L_11);
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_12 = L_9;
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_13 = ___persistedCache0;
		NullCheck(L_13);
		DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863  L_14 = L_13->get_Payload_1();
		NullCheck(L_12);
		L_12->set_Payload_1(L_14);
		NullCheck(L_7);
		L_7->set_Payload_1(L_12);
		V_0 = L_7;
		// sendAsync.ContinueWith(OnSendAsyncCompleted, localState, TaskContinuationOptions.ExecuteSynchronously);
		Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * L_15 = (Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 *)il2cpp_codegen_object_new(Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4_il2cpp_TypeInfo_var);
		Action_2__ctor_mF5BAD5A096500EC74F25D943B318D37A7E9B2772(L_15, NULL, (intptr_t)((intptr_t)DiagnosticsHandler_OnSendAsyncCompleted_m1E5728BE6B16E3C83F8B0F43E629C4B425FB288F_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mF5BAD5A096500EC74F25D943B318D37A7E9B2772_RuntimeMethod_var);
		SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E * L_16 = V_0;
		NullCheck(L_3);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_17;
		L_17 = Task_ContinueWith_mDE539398374581D979DB702253F1F3C10AE24E2B(L_3, L_15, L_16, ((int32_t)524288), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler::OnSendAsyncCompleted(System.Threading.Tasks.Task,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsHandler_OnSendAsyncCompleted_m1E5728BE6B16E3C83F8B0F43E629C4B425FB288F (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___sendOperation0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!(state is SendState castState))
		RuntimeObject * L_0 = ___state1;
		V_0 = ((SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E *)IsInstClass((RuntimeObject*)L_0, SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E_il2cpp_TypeInfo_var));
		SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E * L_1 = V_0;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		// throw new ArgumentException("The given state is invalid.");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCEBC9755CF071B2DB2F4E4365093DF8A5009F227)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DiagnosticsHandler_OnSendAsyncCompleted_m1E5728BE6B16E3C83F8B0F43E629C4B425FB288F_RuntimeMethod_var)));
	}

IL_0015:
	{
		// switch (sendOperation.Status)
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = ___sendOperation0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Task_get_Status_m322B3FEDAED081C1EA55F6E2922007475E7CAAED(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)5)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)6))) <= ((uint32_t)1))))
		{
			goto IL_003d;
		}
	}
	{
		// castState.Self.Cache.AddRangeFrom(castState.Payload);
		SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E * L_7 = V_0;
		NullCheck(L_7);
		DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * L_8 = L_7->get_Self_0();
		NullCheck(L_8);
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_9;
		L_9 = TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_inline(L_8, /*hidden argument*/TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_RuntimeMethod_var);
		SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E * L_10 = V_0;
		NullCheck(L_10);
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_11 = L_10->get_Payload_1();
		CacheExtensions_AddRangeFrom_mEEBA1F115EAD88F3D8F6DBAF3A4DEBAFE0141DAF(L_9, L_11, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_003d:
	{
		// throw new ArgumentOutOfRangeException(
		//     nameof(sendOperation.Status), "Can't continue without the send operation being completed.");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_12 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB25C6E111877202657B311A682A6585AE1F652B9)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F053D35B71695AE25BC86EAF016A79788935D58)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DiagnosticsHandler_OnSendAsyncCompleted_m1E5728BE6B16E3C83F8B0F43E629C4B425FB288F_RuntimeMethod_var)));
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler::FetchSpecificCommonTags(Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsHandler_FetchSpecificCommonTags_m6C8B66A678EF17EE33BCA09869AEFDA6803285AB (DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * __this, RuntimeObject* ___cloudProjectId0, RuntimeObject* ___environments1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkReachability_t8F15310A11943C1C3752844598A796FB8EE2BFBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA7E3B11F9D5595D8DA92EFABA9403825DEF0DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25A6C8E3033AB7B31F1A36176973EBF46D6AA102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral343F1EB8B84724E244591A9C2D3BEA692FFCE3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral617DBC0E88F9FD64E6BA155A3D52F887B665BD74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D1DED8A499AFE312E9F9007B113A945D953937C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC15B993D6B8D2B9BD7784FABEF615F72066DB53C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE19245005C2942CFC2763E0A415F5F5582F12C1F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* G_B2_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B2_1 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B2_2 = NULL;
	String_t* G_B1_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B1_1 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B3_2 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B3_3 = NULL;
	{
		// var commonTags = Cache.Payload.DiagnosticsCommonTags;
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_0;
		L_0 = TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_inline(__this, /*hidden argument*/TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_RuntimeMethod_var);
		NullCheck(L_0);
		DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 * L_1 = L_0->get_address_of_Payload_1();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_2 = L_1->get_DiagnosticsCommonTags_2();
		// commonTags.Clear();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A(L_3, /*hidden argument*/Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A_RuntimeMethod_var);
		// commonTags[TagKeys.ApplicationVersion] = Application.version;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_4 = L_3;
		String_t* L_5;
		L_5 = Application_get_version_m3D7E3915FF7D40E0E5569C7A80BCFE7C2D2528C9(/*hidden argument*/NULL);
		NullCheck(L_4);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_4, _stringLiteral343F1EB8B84724E244591A9C2D3BEA692FFCE3F0, L_5, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		// commonTags[TagKeys.ProductName] = Application.productName;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_6 = L_4;
		String_t* L_7;
		L_7 = Application_get_productName_m712E2BD951F92F0D8E992E45C8508F0B5B045E83(/*hidden argument*/NULL);
		NullCheck(L_6);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_6, _stringLiteralC15B993D6B8D2B9BD7784FABEF615F72066DB53C, L_7, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		// commonTags[TagKeys.CloudProjectId] = cloudProjectId.GetCloudProjectId();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_8 = L_6;
		RuntimeObject* L_9 = ___cloudProjectId0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Configuration.Internal.ICloudProjectId::GetCloudProjectId() */, ICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_8);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_8, _stringLiteral0BA7E3B11F9D5595D8DA92EFABA9403825DEF0DB, L_10, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		// commonTags[TagKeys.EnvironmentName] = environments.Current;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_11 = L_8;
		RuntimeObject* L_12 = ___environments1;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Environments.Internal.IEnvironments::get_Current() */, IEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_11);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_11, _stringLiteral617DBC0E88F9FD64E6BA155A3D52F887B665BD74, L_13, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		// commonTags[TagKeys.ApplicationGenuine] = Application.genuineCheckAvailable
		//     ? Application.genuine.ToString(CultureInfo.InvariantCulture)
		//     : "unavailable";
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_14 = L_11;
		bool L_15;
		L_15 = Application_get_genuineCheckAvailable_mB2F50490ED4F6F035BE3312E457C1566D3A5E8B2(/*hidden argument*/NULL);
		G_B1_0 = _stringLiteral8D1DED8A499AFE312E9F9007B113A945D953937C;
		G_B1_1 = L_14;
		G_B1_2 = L_14;
		if (L_15)
		{
			G_B2_0 = _stringLiteral8D1DED8A499AFE312E9F9007B113A945D953937C;
			G_B2_1 = L_14;
			G_B2_2 = L_14;
			goto IL_006c;
		}
	}
	{
		G_B3_0 = _stringLiteral25A6C8E3033AB7B31F1A36176973EBF46D6AA102;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_007e;
	}

IL_006c:
	{
		bool L_16;
		L_16 = Application_get_genuine_m97BCEF4D5E4692AFF566CBD0936BBC7FEC21C419(/*hidden argument*/NULL);
		V_0 = L_16;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_17;
		L_17 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_18;
		L_18 = Boolean_ToString_m6AF340BBFF7B2ABB5987CE80AE6335EE96BC71E9((bool*)(&V_0), L_17, /*hidden argument*/NULL);
		G_B3_0 = L_18;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_007e:
	{
		NullCheck(G_B3_2);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		// commonTags[TagKeys.InternetReachability] = Application.internetReachability.ToString();
		int32_t L_19;
		L_19 = Application_get_internetReachability_m039C30126BD989614BF2A4A3F33129177A95C61C(/*hidden argument*/NULL);
		V_1 = L_19;
		RuntimeObject * L_20 = Box(NetworkReachability_t8F15310A11943C1C3752844598A796FB8EE2BFBC_il2cpp_TypeInfo_var, (&V_1));
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		V_1 = *(int32_t*)UnBox(L_20);
		NullCheck(G_B3_3);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(G_B3_3, _stringLiteralE19245005C2942CFC2763E0A415F5F5582F12C1F, L_21, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler::SendCachedPayload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsHandler_SendCachedPayload_mEB4170A2A079D8A46CDD355A18FC98AE448AF54E (DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mF5BAD5A096500EC74F25D943B318D37A7E9B2772_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheExtensions_IsEmpty_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m3C957849FC68E3DB5C14B366B5A4AD8B74CFAD24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedPayload_1__ctor_m35D57431F42F984330DB9E2393FBDB552C248C1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsHandler_OnSendAsyncCompleted_m1E5728BE6B16E3C83F8B0F43E629C4B425FB288F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICachePersister_1_t2B5DA838D04E99AD675CD3A748B6B63E0B28AB04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m83EB82C5AF4DF1FEC3C82C1D33F805246C2A2836_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m96DD29242C4F14B1DA6AC3146CE13E2786EE7590_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5DA432D36F1D12C1681B80D1EB14144383682219_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetrySender_SendAsync_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m0A9A17FC07F11A9D92AA82351AC18B6E7DE98CF3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E * V_0 = NULL;
	DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * G_B4_0 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * G_B3_0 = NULL;
	{
		// if (Cache.IsEmpty())
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_0;
		L_0 = TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_inline(__this, /*hidden argument*/TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_RuntimeMethod_var);
		bool L_1;
		L_1 = CacheExtensions_IsEmpty_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m3C957849FC68E3DB5C14B366B5A4AD8B74CFAD24(L_0, /*hidden argument*/CacheExtensions_IsEmpty_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m3C957849FC68E3DB5C14B366B5A4AD8B74CFAD24_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// var sendAsync = m_Sender.SendAsync(Cache.Payload);
		TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * L_2 = ((TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD *)__this)->get_m_Sender_2();
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_3;
		L_3 = TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_inline(__this, /*hidden argument*/TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_RuntimeMethod_var);
		NullCheck(L_3);
		DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863  L_4 = L_3->get_Payload_1();
		NullCheck(L_2);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
		L_5 = TelemetrySender_SendAsync_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m0A9A17FC07F11A9D92AA82351AC18B6E7DE98CF3(L_2, L_4, /*hidden argument*/TelemetrySender_SendAsync_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m0A9A17FC07F11A9D92AA82351AC18B6E7DE98CF3_RuntimeMethod_var);
		// var localState = new SendState
		// {
		//     Self = this,
		//     Payload = new CachedPayload<DiagnosticsPayload>
		//     {
		//         TimeOfOccurenceTicks = Cache.TimeOfOccurenceTicks,
		//         Payload = new DiagnosticsPayload
		//         {
		//             Diagnostics = new List<Diagnostic>(Cache.Payload.Diagnostics),
		//             CommonTags = new Dictionary<string, string>(Cache.Payload.CommonTags),
		//             DiagnosticsCommonTags = new Dictionary<string, string>(Cache.Payload.DiagnosticsCommonTags),
		//         },
		//     },
		// };
		SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E * L_6 = (SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E *)il2cpp_codegen_object_new(SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E_il2cpp_TypeInfo_var);
		SendState__ctor_m2D59753171C2D08FB84F12EED9EF6363D99A020E(L_6, /*hidden argument*/NULL);
		SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E * L_7 = L_6;
		NullCheck(L_7);
		L_7->set_Self_0(__this);
		SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E * L_8 = L_7;
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_9 = (CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A *)il2cpp_codegen_object_new(CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A_il2cpp_TypeInfo_var);
		CachedPayload_1__ctor_m35D57431F42F984330DB9E2393FBDB552C248C1E(L_9, /*hidden argument*/CachedPayload_1__ctor_m35D57431F42F984330DB9E2393FBDB552C248C1E_RuntimeMethod_var);
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_10 = L_9;
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_11;
		L_11 = TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_inline(__this, /*hidden argument*/TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_RuntimeMethod_var);
		NullCheck(L_11);
		int64_t L_12 = L_11->get_TimeOfOccurenceTicks_0();
		NullCheck(L_10);
		L_10->set_TimeOfOccurenceTicks_0(L_12);
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_13 = L_10;
		il2cpp_codegen_initobj((&V_1), sizeof(DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 ));
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_14;
		L_14 = TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_inline(__this, /*hidden argument*/TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_RuntimeMethod_var);
		NullCheck(L_14);
		DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 * L_15 = L_14->get_address_of_Payload_1();
		List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * L_16 = L_15->get_Diagnostics_0();
		List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * L_17 = (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 *)il2cpp_codegen_object_new(List_1_t5DA432D36F1D12C1681B80D1EB14144383682219_il2cpp_TypeInfo_var);
		List_1__ctor_m96DD29242C4F14B1DA6AC3146CE13E2786EE7590(L_17, L_16, /*hidden argument*/List_1__ctor_m96DD29242C4F14B1DA6AC3146CE13E2786EE7590_RuntimeMethod_var);
		(&V_1)->set_Diagnostics_0(L_17);
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_18;
		L_18 = TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_inline(__this, /*hidden argument*/TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_RuntimeMethod_var);
		NullCheck(L_18);
		DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 * L_19 = L_18->get_address_of_Payload_1();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_20 = L_19->get_CommonTags_1();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_21 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9(L_21, L_20, /*hidden argument*/Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9_RuntimeMethod_var);
		(&V_1)->set_CommonTags_1(L_21);
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_22;
		L_22 = TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_inline(__this, /*hidden argument*/TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_RuntimeMethod_var);
		NullCheck(L_22);
		DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 * L_23 = L_22->get_address_of_Payload_1();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_24 = L_23->get_DiagnosticsCommonTags_2();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_25 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9(L_25, L_24, /*hidden argument*/Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9_RuntimeMethod_var);
		(&V_1)->set_DiagnosticsCommonTags_2(L_25);
		DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863  L_26 = V_1;
		NullCheck(L_13);
		L_13->set_Payload_1(L_26);
		NullCheck(L_8);
		L_8->set_Payload_1(L_13);
		V_0 = L_8;
		// Cache.TimeOfOccurenceTicks = 0;
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_27;
		L_27 = TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_inline(__this, /*hidden argument*/TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_RuntimeMethod_var);
		NullCheck(L_27);
		L_27->set_TimeOfOccurenceTicks_0(((int64_t)((int64_t)0)));
		// Cache.Payload.Diagnostics.Clear();
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_28;
		L_28 = TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_inline(__this, /*hidden argument*/TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_RuntimeMethod_var);
		NullCheck(L_28);
		DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 * L_29 = L_28->get_address_of_Payload_1();
		List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * L_30 = L_29->get_Diagnostics_0();
		NullCheck(L_30);
		List_1_Clear_m83EB82C5AF4DF1FEC3C82C1D33F805246C2A2836(L_30, /*hidden argument*/List_1_Clear_m83EB82C5AF4DF1FEC3C82C1D33F805246C2A2836_RuntimeMethod_var);
		// if (m_CachePersister.CanPersist)
		RuntimeObject* L_31 = ((TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD *)__this)->get_m_CachePersister_1();
		NullCheck(L_31);
		bool L_32;
		L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.Services.Core.Telemetry.Internal.ICachePersister`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>::get_CanPersist() */, ICachePersister_1_t2B5DA838D04E99AD675CD3A748B6B63E0B28AB04_il2cpp_TypeInfo_var, L_31);
		G_B3_0 = L_5;
		if (!L_32)
		{
			G_B4_0 = L_5;
			goto IL_00ea;
		}
	}
	{
		// m_CachePersister.Delete();
		RuntimeObject* L_33 = ((TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD *)__this)->get_m_CachePersister_1();
		NullCheck(L_33);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Unity.Services.Core.Telemetry.Internal.ICachePersister`1<Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload>::Delete() */, ICachePersister_1_t2B5DA838D04E99AD675CD3A748B6B63E0B28AB04_il2cpp_TypeInfo_var, L_33);
		G_B4_0 = G_B3_0;
	}

IL_00ea:
	{
		// sendAsync.ContinueWith(OnSendAsyncCompleted, localState, TaskContinuationOptions.ExecuteSynchronously);
		Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * L_34 = (Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 *)il2cpp_codegen_object_new(Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4_il2cpp_TypeInfo_var);
		Action_2__ctor_mF5BAD5A096500EC74F25D943B318D37A7E9B2772(L_34, NULL, (intptr_t)((intptr_t)DiagnosticsHandler_OnSendAsyncCompleted_m1E5728BE6B16E3C83F8B0F43E629C4B425FB288F_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mF5BAD5A096500EC74F25D943B318D37A7E9B2772_RuntimeMethod_var);
		SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E * L_35 = V_0;
		NullCheck(G_B4_0);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_36;
		L_36 = Task_ContinueWith_mDE539398374581D979DB702253F1F3C10AE24E2B(G_B4_0, L_34, L_35, ((int32_t)524288), /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload
IL2CPP_EXTERN_C void DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_marshal_pinvoke(const DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863& unmarshaled, DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Diagnostics_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Diagnostics' of type 'DiagnosticsPayload'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Diagnostics_0Exception, NULL);
}
IL2CPP_EXTERN_C void DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_marshal_pinvoke_back(const DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_marshaled_pinvoke& marshaled, DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863& unmarshaled)
{
	Exception_t* ___Diagnostics_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Diagnostics' of type 'DiagnosticsPayload'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Diagnostics_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload
IL2CPP_EXTERN_C void DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_marshal_pinvoke_cleanup(DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload
IL2CPP_EXTERN_C void DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_marshal_com(const DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863& unmarshaled, DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_marshaled_com& marshaled)
{
	Exception_t* ___Diagnostics_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Diagnostics' of type 'DiagnosticsPayload'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Diagnostics_0Exception, NULL);
}
IL2CPP_EXTERN_C void DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_marshal_com_back(const DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_marshaled_com& marshaled, DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863& unmarshaled)
{
	Exception_t* ___Diagnostics_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Diagnostics' of type 'DiagnosticsPayload'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Diagnostics_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload
IL2CPP_EXTERN_C void DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_marshal_com_cleanup(DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_marshaled_com& marshaled)
{
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload::Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.get_CommonTags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags_m9A322F41FCB2FFE6C4BB1734669869E136825A99 (DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 * __this, const RuntimeMethod* method)
{
	{
		// Dictionary<string, string> ITelemetryPayload.CommonTags => CommonTags;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_CommonTags_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags_m9A322F41FCB2FFE6C4BB1734669869E136825A99_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 * _thisAdjusted = reinterpret_cast<DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 *>(__this + _offset);
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * _returnValue;
	_returnValue = DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags_m9A322F41FCB2FFE6C4BB1734669869E136825A99_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload::Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_Count_m6A4DBC50C973E4912BEA1FAC32F90B8D33F3B854 (DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC4E34F94D45D3903017D537DF9B4FAC0ED6490BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * G_B2_0 = NULL;
	List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * G_B1_0 = NULL;
	{
		// int ITelemetryPayload.Count => Diagnostics?.Count ?? 0;
		List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * L_0 = __this->get_Diagnostics_0();
		List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return 0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = List_1_get_Count_mC4E34F94D45D3903017D537DF9B4FAC0ED6490BC_inline(G_B2_0, /*hidden argument*/List_1_get_Count_mC4E34F94D45D3903017D537DF9B4FAC0ED6490BC_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_Count_m6A4DBC50C973E4912BEA1FAC32F90B8D33F3B854_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 * _thisAdjusted = reinterpret_cast<DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_Count_m6A4DBC50C973E4912BEA1FAC32F90B8D33F3B854(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsPayload::Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.Add(Unity.Services.Core.Telemetry.Internal.ITelemetryEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add_m639E8AF30440C2692140AF5DB9B8FABF9E8D4367 (DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 * __this, RuntimeObject* ___telemetryEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF7516AB0BEE97FFD4FD59456778F2AD4692B4CDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA5929D0369712599805200E150E0F1C98250F052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5DA432D36F1D12C1681B80D1EB14144383682219_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!(telemetryEvent is Diagnostic diagnostic))
		RuntimeObject* L_0 = ___telemetryEvent0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2_il2cpp_TypeInfo_var)))
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_1 = ___telemetryEvent0;
		V_0 = ((*(Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2 *)((Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2 *)UnBox(L_1, Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2_il2cpp_TypeInfo_var))));
		goto IL_001c;
	}

IL_0011:
	{
		// throw new ArgumentException("This payload accepts only Diagnostic events.");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral92E679ED3523A4085D0D6AE912EAE820BE235580)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add_m639E8AF30440C2692140AF5DB9B8FABF9E8D4367_RuntimeMethod_var)));
	}

IL_001c:
	{
		// if (Diagnostics is null)
		List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * L_3 = __this->get_Diagnostics_0();
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		// Diagnostics = new List<Diagnostic>(1);
		List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * L_4 = (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 *)il2cpp_codegen_object_new(List_1_t5DA432D36F1D12C1681B80D1EB14144383682219_il2cpp_TypeInfo_var);
		List_1__ctor_mA5929D0369712599805200E150E0F1C98250F052(L_4, 1, /*hidden argument*/List_1__ctor_mA5929D0369712599805200E150E0F1C98250F052_RuntimeMethod_var);
		__this->set_Diagnostics_0(L_4);
	}

IL_0030:
	{
		// Diagnostics.Add(diagnostic);
		List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * L_5 = __this->get_Diagnostics_0();
		Diagnostic_t5F783E2A9558C1CD3CA7604ED7E43688526C0BE2  L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_mF7516AB0BEE97FFD4FD59456778F2AD4692B4CDB(L_5, L_6, /*hidden argument*/List_1_Add_mF7516AB0BEE97FFD4FD59456778F2AD4692B4CDB_RuntimeMethod_var);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add_m639E8AF30440C2692140AF5DB9B8FABF9E8D4367_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___telemetryEvent0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 * _thisAdjusted = reinterpret_cast<DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 *>(__this + _offset);
	DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add_m639E8AF30440C2692140AF5DB9B8FABF9E8D4367(_thisAdjusted, ___telemetryEvent0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Telemetry.Internal.DisabledDiagnostics::Unity.Services.Core.Telemetry.Internal.IDiagnostics.SendDiagnostic(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisabledDiagnostics_Unity_Services_Core_Telemetry_Internal_IDiagnostics_SendDiagnostic_m4B5C410E6947D874DB0A1F9FC3F6C08CF5A7F016 (DisabledDiagnostics_t27E5329A61EC82CD8672ED82E6960DA1A570481D * __this, String_t* ___name0, String_t* ___message1, RuntimeObject* ___tags2, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.DisabledDiagnostics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisabledDiagnostics__ctor_m0023B64C119B874BAD623EBD0A87C386833561CF (DisabledDiagnostics_t27E5329A61EC82CD8672ED82E6960DA1A570481D * __this, const RuntimeMethod* method)
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
// Unity.Services.Core.Telemetry.Internal.IDiagnostics Unity.Services.Core.Telemetry.Internal.DisabledDiagnosticsFactory::Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory.Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DisabledDiagnosticsFactory_Unity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_Create_mBD323C974C1E725B610C40C09D25EE6CC309AEF0 (DisabledDiagnosticsFactory_t3AE17E796B5A67BA640A7E091AA1D8CCC8F1A3D3 * __this, String_t* ___packageName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisabledDiagnostics_t27E5329A61EC82CD8672ED82E6960DA1A570481D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IDiagnostics IDiagnosticsFactory.Create(string packageName) => new DisabledDiagnostics();
		DisabledDiagnostics_t27E5329A61EC82CD8672ED82E6960DA1A570481D * L_0 = (DisabledDiagnostics_t27E5329A61EC82CD8672ED82E6960DA1A570481D *)il2cpp_codegen_object_new(DisabledDiagnostics_t27E5329A61EC82CD8672ED82E6960DA1A570481D_il2cpp_TypeInfo_var);
		DisabledDiagnostics__ctor_m0023B64C119B874BAD623EBD0A87C386833561CF(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.DisabledDiagnosticsFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisabledDiagnosticsFactory__ctor_m98F5E115DCBA52AFB7190F2E419DF085FA5A6356 (DisabledDiagnosticsFactory_t3AE17E796B5A67BA640A7E091AA1D8CCC8F1A3D3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_0, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		__this->set_U3CUnity_Services_Core_Telemetry_Internal_IDiagnosticsFactory_CommonTagsU3Ek__BackingField_0(L_0);
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
// System.Void Unity.Services.Core.Telemetry.Internal.DisabledMetrics::Unity.Services.Core.Telemetry.Internal.IMetrics.SendHistogramMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisabledMetrics_Unity_Services_Core_Telemetry_Internal_IMetrics_SendHistogramMetric_m4A9FDC484D1093C39AE8ECF702A65C734E8080CD (DisabledMetrics_tF0F8EBCE70B7C34D51D8E5E6A19D1714580EAA13 * __this, String_t* ___name0, double ___time1, RuntimeObject* ___tags2, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.DisabledMetrics::Unity.Services.Core.Telemetry.Internal.IMetrics.SendSumMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisabledMetrics_Unity_Services_Core_Telemetry_Internal_IMetrics_SendSumMetric_mCB7C1223424FEBC572144E00612F4A6B65C3865C (DisabledMetrics_tF0F8EBCE70B7C34D51D8E5E6A19D1714580EAA13 * __this, String_t* ___name0, double ___value1, RuntimeObject* ___tags2, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.DisabledMetrics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisabledMetrics__ctor_m536610D43ED9B7342E43750017CD5D09383B12B1 (DisabledMetrics_tF0F8EBCE70B7C34D51D8E5E6A19D1714580EAA13 * __this, const RuntimeMethod* method)
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
// Unity.Services.Core.Telemetry.Internal.IMetrics Unity.Services.Core.Telemetry.Internal.DisabledMetricsFactory::Unity.Services.Core.Telemetry.Internal.IMetricsFactory.Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DisabledMetricsFactory_Unity_Services_Core_Telemetry_Internal_IMetricsFactory_Create_m23161E0C28A2813AEDE0BC228FFC27D9A90207AC (DisabledMetricsFactory_t4AC0F22034937C56A8FB5A67EC19D086CC246FB0 * __this, String_t* ___packageName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisabledMetrics_tF0F8EBCE70B7C34D51D8E5E6A19D1714580EAA13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IMetrics IMetricsFactory.Create(string packageName) => new DisabledMetrics();
		DisabledMetrics_tF0F8EBCE70B7C34D51D8E5E6A19D1714580EAA13 * L_0 = (DisabledMetrics_tF0F8EBCE70B7C34D51D8E5E6A19D1714580EAA13 *)il2cpp_codegen_object_new(DisabledMetrics_tF0F8EBCE70B7C34D51D8E5E6A19D1714580EAA13_il2cpp_TypeInfo_var);
		DisabledMetrics__ctor_m536610D43ED9B7342E43750017CD5D09383B12B1(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.DisabledMetricsFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisabledMetricsFactory__ctor_mBF0702F244DF6D3905E27E2360B91F3027052395 (DisabledMetricsFactory_t4AC0F22034937C56A8FB5A67EC19D086CC246FB0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_0, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		__this->set_U3CUnity_Services_Core_Telemetry_Internal_IMetricsFactory_CommonTagsU3Ek__BackingField_0(L_0);
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
// System.Int32 Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy::get_MaxTryCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExponentialBackOffRetryPolicy_get_MaxTryCount_m6101EA53ACF9BE54AC7C54F1DB399F32656349D7 (ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * __this, const RuntimeMethod* method)
{
	{
		// get => m_MaxTryCount;
		int32_t L_0 = __this->get_m_MaxTryCount_0();
		return L_0;
	}
}
// System.Single Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy::get_BaseDelaySeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ExponentialBackOffRetryPolicy_get_BaseDelaySeconds_m70788C0F0E02C71BC00F2D49481958E677C90022 (ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * __this, const RuntimeMethod* method)
{
	{
		// get => m_BaseDelaySeconds;
		float L_0 = __this->get_m_BaseDelaySeconds_1();
		return L_0;
	}
}
// System.Boolean Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy::CanRetry(Unity.Services.Core.Telemetry.Internal.WebRequest,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExponentialBackOffRetryPolicy_CanRetry_mBC5BB61132BEEA70DE85DC5D241DBA231FFB7CCB (ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * __this, WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D  ___webRequest0, int32_t ___sendCount1, const RuntimeMethod* method)
{
	{
		// return sendCount < MaxTryCount
		//     && IsTransientError(webRequest);
		int32_t L_0 = ___sendCount1;
		int32_t L_1;
		L_1 = ExponentialBackOffRetryPolicy_get_MaxTryCount_m6101EA53ACF9BE54AC7C54F1DB399F32656349D7_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D  L_2 = ___webRequest0;
		bool L_3;
		L_3 = ExponentialBackOffRetryPolicy_IsTransientError_m7071198D3AD96882AC5807F068BF82C24A8C1F6D(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0010:
	{
		return (bool)0;
	}
}
// System.Boolean Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy::IsTransientError(Unity.Services.Core.Telemetry.Internal.WebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExponentialBackOffRetryPolicy_IsTransientError_m7071198D3AD96882AC5807F068BF82C24A8C1F6D (WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D  ___webRequest0, const RuntimeMethod* method)
{
	{
		// return webRequest.Result == WebRequestResult.ConnectionError
		//     || webRequest.Result == WebRequestResult.ProtocolError && IsServerErrorCode(webRequest.ResponseCode);
		WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D  L_0 = ___webRequest0;
		int32_t L_1 = L_0.get_Result_0();
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0020;
		}
	}
	{
		WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D  L_2 = ___webRequest0;
		int32_t L_3 = L_2.get_Result_0();
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_001e;
		}
	}
	{
		WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D  L_4 = ___webRequest0;
		int64_t L_5 = L_4.get_ResponseCode_3();
		bool L_6;
		L_6 = ExponentialBackOffRetryPolicy_U3CIsTransientErrorU3Eg__IsServerErrorCodeU7C9_0_m75BA8C5B3E2F9EDEDAC390BBA6DA0456F7B34956(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_001e:
	{
		return (bool)0;
	}

IL_0020:
	{
		return (bool)1;
	}
}
// System.Single Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy::GetDelayBeforeSendingSeconds(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ExponentialBackOffRetryPolicy_GetDelayBeforeSendingSeconds_m4195C58DD071FFBDB9C7170C35F79C52197A18AA (ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * __this, int32_t ___sendCount0, const RuntimeMethod* method)
{
	{
		// if (sendCount <= 0)
		int32_t L_0 = ___sendCount0;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		// return BaseDelaySeconds;
		float L_1;
		L_1 = ExponentialBackOffRetryPolicy_get_BaseDelaySeconds_m70788C0F0E02C71BC00F2D49481958E677C90022_inline(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_000b:
	{
		// return Mathf.Pow(BaseDelaySeconds, sendCount);
		float L_2;
		L_2 = ExponentialBackOffRetryPolicy_get_BaseDelaySeconds_m70788C0F0E02C71BC00F2D49481958E677C90022_inline(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___sendCount0;
		float L_4;
		L_4 = powf(L_2, ((float)((float)L_3)));
		return L_4;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExponentialBackOffRetryPolicy__ctor_m05CD4D215EDD77E62B874F7F85BE4E98E774AC14 (ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * __this, const RuntimeMethod* method)
{
	{
		// int m_MaxTryCount = 10;
		__this->set_m_MaxTryCount_0(((int32_t)10));
		// float m_BaseDelaySeconds = 2;
		__this->set_m_BaseDelaySeconds_1((2.0f));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy::<IsTransientError>g__IsServerErrorCode|9_0(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExponentialBackOffRetryPolicy_U3CIsTransientErrorU3Eg__IsServerErrorCodeU7C9_0_m75BA8C5B3E2F9EDEDAC390BBA6DA0456F7B34956 (int64_t ___responseCode0, const RuntimeMethod* method)
{
	{
		// return responseCode >= 500
		//     && responseCode < 600;
		int64_t L_0 = ___responseCode0;
		if ((((int64_t)L_0) < ((int64_t)((int64_t)((int64_t)((int32_t)500))))))
		{
			goto IL_0013;
		}
	}
	{
		int64_t L_1 = ___responseCode0;
		return (bool)((((int64_t)L_1) < ((int64_t)((int64_t)((int64_t)((int32_t)600)))))? 1 : 0);
	}

IL_0013:
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
// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.FactoryUtils::CreatePackageTags(Unity.Services.Core.Configuration.Internal.IProjectConfiguration,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FactoryUtils_CreatePackageTags_mD3215ED8D60E9ABB1E75E7E386EB154215D3548E (RuntimeObject* ___projectConfig0, String_t* ___packageName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C11F35652FEF935B5238B8E510E25D3B44E30B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D004E384A2A96BC8F24287F0F45615FB0FC7C91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA56563187CE402C2D214D1D438FAEFE383069121);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var packageVersion = projectConfig.GetString(
		//     string.Format(PackageVersionKeyFormat, packageName), string.Empty);
		RuntimeObject* L_0 = ___projectConfig0;
		String_t* L_1 = ___packageName1;
		String_t* L_2;
		L_2 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral2D004E384A2A96BC8F24287F0F45615FB0FC7C91, L_1, /*hidden argument*/NULL);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_0);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(2 /* System.String Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetString(System.String,System.String) */, IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var, L_0, L_2, L_3);
		V_0 = L_4;
		// if (string.IsNullOrEmpty(packageVersion))
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
		// return new Dictionary<string, string>
		// {
		//     [TagKeys.PackageName] = packageName,
		//     [TagKeys.PackageVersion] = packageVersion,
		// };
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_7 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_7, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_8 = L_7;
		String_t* L_9 = ___packageName1;
		NullCheck(L_8);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_8, _stringLiteralA56563187CE402C2D214D1D438FAEFE383069121, L_9, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_10 = L_8;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_10, _stringLiteral2C11F35652FEF935B5238B8E510E25D3B44E30B6, L_11, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		return L_10;
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
// System.Boolean Unity.Services.Core.Telemetry.Internal.FileCachePersister::IsAvailableFor(UnityEngine.RuntimePlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileCachePersister_IsAvailableFor_m29386F2809E20AA426D9432BB4701C0EDB706EEF (int32_t ___platform0, const RuntimeMethod* method)
{
	{
		// return !string.IsNullOrEmpty(GetPersistentDataPathFor(platform));
		int32_t L_0 = ___platform0;
		String_t* L_1;
		L_1 = FileCachePersister_GetPersistentDataPathFor_mEDE6204BB85622E2FCA1BF634B720D5BBB00ACD6(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Unity.Services.Core.Telemetry.Internal.FileCachePersister::GetPersistentDataPathFor(UnityEngine.RuntimePlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileCachePersister_GetPersistentDataPathFor_mEDE6204BB85622E2FCA1BF634B720D5BBB00ACD6 (int32_t ___platform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (platform == RuntimePlatform.Switch)
		int32_t L_0 = ___platform0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_000b;
		}
	}
	{
		// return string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_1;
	}

IL_000b:
	{
		// return Application.persistentDataPath;
		String_t* L_2;
		L_2 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.FileCachePersister::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileCachePersister__ctor_m5D2938B35380A2DE9E48EB855F1CD944C353CBF7 (FileCachePersister_tDF13401D17534AF99A9129316F81890DEB4DA4BC * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Unity.Services.Core.Telemetry.Internal.Metric
IL2CPP_EXTERN_C void Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD_marshal_pinvoke(const Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD& unmarshaled, Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Tags_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Tags' of type 'Metric'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Tags_3Exception, NULL);
}
IL2CPP_EXTERN_C void Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD_marshal_pinvoke_back(const Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD_marshaled_pinvoke& marshaled, Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD& unmarshaled)
{
	Exception_t* ___Tags_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Tags' of type 'Metric'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Tags_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Telemetry.Internal.Metric
IL2CPP_EXTERN_C void Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD_marshal_pinvoke_cleanup(Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Services.Core.Telemetry.Internal.Metric
IL2CPP_EXTERN_C void Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD_marshal_com(const Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD& unmarshaled, Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD_marshaled_com& marshaled)
{
	Exception_t* ___Tags_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Tags' of type 'Metric'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Tags_3Exception, NULL);
}
IL2CPP_EXTERN_C void Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD_marshal_com_back(const Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD_marshaled_com& marshaled, Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD& unmarshaled)
{
	Exception_t* ___Tags_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Tags' of type 'Metric'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Tags_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Telemetry.Internal.Metric
IL2CPP_EXTERN_C void Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD_marshal_com_cleanup(Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD_marshaled_com& marshaled)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Core.Telemetry.Internal.MetricsHandler Unity.Services.Core.Telemetry.Internal.Metrics::get_Handler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * Metrics_get_Handler_mAF3E6B486B9338FD23ECDB10D1F09FD2C0198432 (Metrics_t6ECAC6AD63039C6F5E3AB6AFFEB9A41159776764 * __this, const RuntimeMethod* method)
{
	{
		// internal MetricsHandler Handler { get; }
		MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * L_0 = __this->get_U3CHandlerU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.Metrics::get_PackageTags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Metrics_get_PackageTags_mE5692757668C3A30E78AC2A52AA661AA76CFFD8C (Metrics_t6ECAC6AD63039C6F5E3AB6AFFEB9A41159776764 * __this, const RuntimeMethod* method)
{
	{
		// internal IDictionary<string, string> PackageTags { get; }
		RuntimeObject* L_0 = __this->get_U3CPackageTagsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.Metrics::.ctor(Unity.Services.Core.Telemetry.Internal.MetricsHandler,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metrics__ctor_m839F7DF34351EF188EC4DD62A06B190BF276D818 (Metrics_t6ECAC6AD63039C6F5E3AB6AFFEB9A41159776764 * __this, MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * ___handler0, RuntimeObject* ___packageTags1, const RuntimeMethod* method)
{
	{
		// public Metrics(MetricsHandler handler, IDictionary<string, string> packageTags)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Handler = handler;
		MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * L_0 = ___handler0;
		__this->set_U3CHandlerU3Ek__BackingField_0(L_0);
		// PackageTags = packageTags;
		RuntimeObject* L_1 = ___packageTags1;
		__this->set_U3CPackageTagsU3Ek__BackingField_1(L_1);
		// }
		return;
	}
}
// Unity.Services.Core.Telemetry.Internal.Metric Unity.Services.Core.Telemetry.Internal.Metrics::CreateMetric(System.String,System.Double,Unity.Services.Core.Telemetry.Internal.MetricType,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD  Metrics_CreateMetric_m91FB92106AFCAF3E440C2978B44E867AB4AAA239 (Metrics_t6ECAC6AD63039C6F5E3AB6AFFEB9A41159776764 * __this, String_t* ___name0, double ___value1, int32_t ___type2, RuntimeObject* ___tags3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_MergeAllowOverride_TisIDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_TisString_t_TisString_t_m441EB26E8827E32CFB42A5A5E1FC4955955F6351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD * G_B2_0 = NULL;
	Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD * G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD * G_B3_1 = NULL;
	{
		// var metric = new Metric
		// {
		//     Name = name,
		//     Value = value,
		//     Type = type,
		//     Tags = tags is null ? PackageTags : tags.MergeAllowOverride(PackageTags),
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD ));
		String_t* L_0 = ___name0;
		(&V_0)->set_Name_0(L_0);
		double L_1 = ___value1;
		(&V_0)->set_Value_1(L_1);
		int32_t L_2 = ___type2;
		(&V_0)->set_Type_2(L_2);
		RuntimeObject* L_3 = ___tags3;
		G_B1_0 = (&V_0);
		if (!L_3)
		{
			G_B2_0 = (&V_0);
			goto IL_0035;
		}
	}
	{
		RuntimeObject* L_4 = ___tags3;
		RuntimeObject* L_5;
		L_5 = Metrics_get_PackageTags_mE5692757668C3A30E78AC2A52AA661AA76CFFD8C_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_6;
		L_6 = DictionaryExtensions_MergeAllowOverride_TisIDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_TisString_t_TisString_t_m441EB26E8827E32CFB42A5A5E1FC4955955F6351(L_4, L_5, /*hidden argument*/DictionaryExtensions_MergeAllowOverride_TisIDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_TisString_t_TisString_t_m441EB26E8827E32CFB42A5A5E1FC4955955F6351_RuntimeMethod_var);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_0035:
	{
		RuntimeObject* L_7;
		L_7 = Metrics_get_PackageTags_mE5692757668C3A30E78AC2A52AA661AA76CFFD8C_inline(__this, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->set_Tags_3(G_B3_0);
		Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD  L_8 = V_0;
		// return metric;
		return L_8;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.Metrics::Unity.Services.Core.Telemetry.Internal.IMetrics.SendHistogramMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metrics_Unity_Services_Core_Telemetry_Internal_IMetrics_SendHistogramMetric_m9EFFF061E7FA52E1170946AB25C76B59C205ADA8 (Metrics_t6ECAC6AD63039C6F5E3AB6AFFEB9A41159776764 * __this, String_t* ___name0, double ___time1, RuntimeObject* ___tags2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetryHandler_2_Register_mDF6ED28D7C2C6FB663B70B7C4ACE2C9C5CCAF6F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var metric = CreateMetric(name, time, MetricType.Histogram, tags);
		String_t* L_0 = ___name0;
		double L_1 = ___time1;
		RuntimeObject* L_2 = ___tags2;
		Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD  L_3;
		L_3 = Metrics_CreateMetric_m91FB92106AFCAF3E440C2978B44E867AB4AAA239(__this, L_0, L_1, 2, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// Handler.Register(metric);
		MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * L_4;
		L_4 = Metrics_get_Handler_mAF3E6B486B9338FD23ECDB10D1F09FD2C0198432_inline(__this, /*hidden argument*/NULL);
		Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD  L_5 = V_0;
		NullCheck(L_4);
		TelemetryHandler_2_Register_mDF6ED28D7C2C6FB663B70B7C4ACE2C9C5CCAF6F0(L_4, L_5, /*hidden argument*/TelemetryHandler_2_Register_mDF6ED28D7C2C6FB663B70B7C4ACE2C9C5CCAF6F0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.Metrics::Unity.Services.Core.Telemetry.Internal.IMetrics.SendSumMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metrics_Unity_Services_Core_Telemetry_Internal_IMetrics_SendSumMetric_m9F1A92C0F6D306747C9DA93D17D49443284D289E (Metrics_t6ECAC6AD63039C6F5E3AB6AFFEB9A41159776764 * __this, String_t* ___name0, double ___value1, RuntimeObject* ___tags2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetryHandler_2_Register_mDF6ED28D7C2C6FB663B70B7C4ACE2C9C5CCAF6F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var metric = CreateMetric(name, value, MetricType.Sum, tags);
		String_t* L_0 = ___name0;
		double L_1 = ___value1;
		RuntimeObject* L_2 = ___tags2;
		Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD  L_3;
		L_3 = Metrics_CreateMetric_m91FB92106AFCAF3E440C2978B44E867AB4AAA239(__this, L_0, L_1, 1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// Handler.Register(metric);
		MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * L_4;
		L_4 = Metrics_get_Handler_mAF3E6B486B9338FD23ECDB10D1F09FD2C0198432_inline(__this, /*hidden argument*/NULL);
		Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD  L_5 = V_0;
		NullCheck(L_4);
		TelemetryHandler_2_Register_mDF6ED28D7C2C6FB663B70B7C4ACE2C9C5CCAF6F0(L_4, L_5, /*hidden argument*/TelemetryHandler_2_Register_mDF6ED28D7C2C6FB663B70B7C4ACE2C9C5CCAF6F0_RuntimeMethod_var);
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
// Unity.Services.Core.Telemetry.Internal.MetricsHandler Unity.Services.Core.Telemetry.Internal.MetricsFactory::get_Handler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * MetricsFactory_get_Handler_mA9E730A2CCF7B37C8249546FBB4F846F97A02602 (MetricsFactory_tD507E89F251BBFFF3E762FCE0C8B8280C79B1DF1 * __this, const RuntimeMethod* method)
{
	{
		// internal MetricsHandler Handler { get; }
		MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * L_0 = __this->get_U3CHandlerU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.MetricsFactory::.ctor(Unity.Services.Core.Telemetry.Internal.MetricsHandler,Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricsFactory__ctor_mB6689743B76FCDB3986053C6CB2C3431725C61EB (MetricsFactory_tD507E89F251BBFFF3E762FCE0C8B8280C79B1DF1 * __this, MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * ___handler0, RuntimeObject* ___projectConfig1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_MergeAllowOverride_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_TisString_t_TisString_t_m76A96D51EF6EA68D4E64E435FADF7D38AC8D311E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MetricsFactory(MetricsHandler handler, IProjectConfiguration projectConfig)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Handler = handler;
		MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * L_0 = ___handler0;
		__this->set_U3CHandlerU3Ek__BackingField_2(L_0);
		// m_ProjectConfig = projectConfig;
		RuntimeObject* L_1 = ___projectConfig1;
		__this->set_m_ProjectConfig_0(L_1);
		// CommonTags = new Dictionary<string, string>(handler.Cache.Payload.CommonTags)
		//     .MergeAllowOverride(handler.Cache.Payload.MetricsCommonTags);
		MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * L_2 = ___handler0;
		NullCheck(L_2);
		CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * L_3;
		L_3 = TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_inline(L_2, /*hidden argument*/TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_RuntimeMethod_var);
		NullCheck(L_3);
		MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 * L_4 = L_3->get_address_of_Payload_1();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_5 = L_4->get_CommonTags_1();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_6 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9(L_6, L_5, /*hidden argument*/Dictionary_2__ctor_m3A3DE48426936CEB09FE89B327E6D0A4B6A888C9_RuntimeMethod_var);
		MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * L_7 = ___handler0;
		NullCheck(L_7);
		CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * L_8;
		L_8 = TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_inline(L_7, /*hidden argument*/TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_RuntimeMethod_var);
		NullCheck(L_8);
		MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 * L_9 = L_8->get_address_of_Payload_1();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_10 = L_9->get_MetricsCommonTags_2();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_11;
		L_11 = DictionaryExtensions_MergeAllowOverride_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_TisString_t_TisString_t_m76A96D51EF6EA68D4E64E435FADF7D38AC8D311E(L_6, L_10, /*hidden argument*/DictionaryExtensions_MergeAllowOverride_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_TisString_t_TisString_t_m76A96D51EF6EA68D4E64E435FADF7D38AC8D311E_RuntimeMethod_var);
		__this->set_U3CCommonTagsU3Ek__BackingField_1(L_11);
		// }
		return;
	}
}
// Unity.Services.Core.Telemetry.Internal.IMetrics Unity.Services.Core.Telemetry.Internal.MetricsFactory::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsFactory_Create_mE921E42509576507F7B5D382CFD5D6661CEE8633 (MetricsFactory_tD507E89F251BBFFF3E762FCE0C8B8280C79B1DF1 * __this, String_t* ___packageName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metrics_t6ECAC6AD63039C6F5E3AB6AFFEB9A41159776764_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (string.IsNullOrEmpty(packageName))
		String_t* L_0 = ___packageName0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentNullException(nameof(packageName));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3B77922C3A2E8F89E4C7359003D66665B608BA30)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MetricsFactory_Create_mE921E42509576507F7B5D382CFD5D6661CEE8633_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var packageTags = FactoryUtils.CreatePackageTags(m_ProjectConfig, packageName);
		RuntimeObject* L_3 = __this->get_m_ProjectConfig_0();
		String_t* L_4 = ___packageName0;
		RuntimeObject* L_5;
		L_5 = FactoryUtils_CreatePackageTags_mD3215ED8D60E9ABB1E75E7E386EB154215D3548E(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// var metrics = new Metrics(Handler, packageTags);
		MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * L_6;
		L_6 = MetricsFactory_get_Handler_mA9E730A2CCF7B37C8249546FBB4F846F97A02602_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_7 = V_0;
		Metrics_t6ECAC6AD63039C6F5E3AB6AFFEB9A41159776764 * L_8 = (Metrics_t6ECAC6AD63039C6F5E3AB6AFFEB9A41159776764 *)il2cpp_codegen_object_new(Metrics_t6ECAC6AD63039C6F5E3AB6AFFEB9A41159776764_il2cpp_TypeInfo_var);
		Metrics__ctor_m839F7DF34351EF188EC4DD62A06B190BF276D818(L_8, L_6, L_7, /*hidden argument*/NULL);
		// return metrics;
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
// System.Void Unity.Services.Core.Telemetry.Internal.MetricsHandler::.ctor(Unity.Services.Core.Telemetry.Internal.TelemetryConfig,Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.MetricsPayload>,Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Telemetry.Internal.ICachePersister`1<Unity.Services.Core.Telemetry.Internal.MetricsPayload>,Unity.Services.Core.Telemetry.Internal.TelemetrySender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricsHandler__ctor_m8E2AFD1459BAA0D7E0DDDD4D9C7D22B75AF11BF9 (MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * __this, TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * ___config0, CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * ___cache1, RuntimeObject* ___scheduler2, RuntimeObject* ___cachePersister3, TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * ___sender4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AotHelper_EnsureType_TisStringEnumConverter_tE53DF2A99F7AF815FC7B5600F1E580C1AA649556_m88DE7AAB1148746E03A3501EB782FB49688EA42D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AotHelper_tD029F18A2EE9E104E9F9654EDD28818DF8D0E830_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetryHandler_2__ctor_m7594D711F3F43DB0F376BDBAA5BBF64A8DFAF7C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(config, cache, scheduler, cachePersister, sender)
		TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * L_0 = ___config0;
		CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * L_1 = ___cache1;
		RuntimeObject* L_2 = ___scheduler2;
		RuntimeObject* L_3 = ___cachePersister3;
		TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * L_4 = ___sender4;
		TelemetryHandler_2__ctor_m7594D711F3F43DB0F376BDBAA5BBF64A8DFAF7C8(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/TelemetryHandler_2__ctor_m7594D711F3F43DB0F376BDBAA5BBF64A8DFAF7C8_RuntimeMethod_var);
		// AotHelper.EnsureType<StringEnumConverter>();
		IL2CPP_RUNTIME_CLASS_INIT(AotHelper_tD029F18A2EE9E104E9F9654EDD28818DF8D0E830_il2cpp_TypeInfo_var);
		AotHelper_EnsureType_TisStringEnumConverter_tE53DF2A99F7AF815FC7B5600F1E580C1AA649556_m88DE7AAB1148746E03A3501EB782FB49688EA42D(/*hidden argument*/AotHelper_EnsureType_TisStringEnumConverter_tE53DF2A99F7AF815FC7B5600F1E580C1AA649556_m88DE7AAB1148746E03A3501EB782FB49688EA42D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.MetricsHandler::SendPersistedCache(Unity.Services.Core.Telemetry.Internal.CachedPayload`1<Unity.Services.Core.Telemetry.Internal.MetricsPayload>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricsHandler_SendPersistedCache_m0EA14301F9242E55BDD75018A751F47EBB8918E1 (MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * __this, CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * ___persistedCache0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICachePersister_1_t0D065A3A15334F2937118381EEB91732555A94ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetrySender_SendAsync_TisMetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_mB918AE49663DF24311221FD5D6D826A5EAFA28B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t001FFEB184E0584DA956B66FF667ABC0D3FA16E8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * L_0 = ___persistedCache0;
		(&V_0)->set_persistedCache_0(L_0);
		(&V_0)->set_U3CU3E4__this_1(__this);
		// if (!AreMetricsOutdated())
		bool L_1;
		L_1 = MetricsHandler_U3CSendPersistedCacheU3Eg__AreMetricsOutdatedU7C1_0_mA181D05894D14A9A418B889D0AF3D575C1C28A9A(__this, (U3CU3Ec__DisplayClass1_0_t001FFEB184E0584DA956B66FF667ABC0D3FA16E8 *)(&V_0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		// m_Sender.SendAsync(persistedCache.Payload);
		TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * L_2 = ((TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 *)__this)->get_m_Sender_2();
		U3CU3Ec__DisplayClass1_0_t001FFEB184E0584DA956B66FF667ABC0D3FA16E8  L_3 = V_0;
		CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * L_4 = L_3.get_persistedCache_0();
		NullCheck(L_4);
		MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19  L_5 = L_4->get_Payload_1();
		NullCheck(L_2);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
		L_6 = TelemetrySender_SendAsync_TisMetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_mB918AE49663DF24311221FD5D6D826A5EAFA28B4(L_2, L_5, /*hidden argument*/TelemetrySender_SendAsync_TisMetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_mB918AE49663DF24311221FD5D6D826A5EAFA28B4_RuntimeMethod_var);
	}

IL_0031:
	{
		// m_CachePersister.Delete();
		RuntimeObject* L_7 = ((TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 *)__this)->get_m_CachePersister_1();
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Unity.Services.Core.Telemetry.Internal.ICachePersister`1<Unity.Services.Core.Telemetry.Internal.MetricsPayload>::Delete() */, ICachePersister_1_t0D065A3A15334F2937118381EEB91732555A94ED_il2cpp_TypeInfo_var, L_7);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.MetricsHandler::FetchSpecificCommonTags(Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricsHandler_FetchSpecificCommonTags_m761746B883509302635B82E307021051382E3765 (MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * __this, RuntimeObject* ___cloudProjectId0, RuntimeObject* ___environments1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Cache.Payload.MetricsCommonTags.Clear();
		CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * L_0;
		L_0 = TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_inline(__this, /*hidden argument*/TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_RuntimeMethod_var);
		NullCheck(L_0);
		MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 * L_1 = L_0->get_address_of_Payload_1();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_2 = L_1->get_MetricsCommonTags_2();
		NullCheck(L_2);
		Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A(L_2, /*hidden argument*/Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.MetricsHandler::SendCachedPayload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricsHandler_SendCachedPayload_mE7DE42C74D54251B5107381402B7B82B7230AFC3 (MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICachePersister_1_t0D065A3A15334F2937118381EEB91732555A94ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mA52F909D3E2C9ACAD96DB6E0D2E9A3221B3F09D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE3AABCF8B688AB84FABF2C239D960127E28FBB2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetrySender_SendAsync_TisMetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_mB918AE49663DF24311221FD5D6D826A5EAFA28B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Cache.Payload.Metrics.Count <= 0)
		CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * L_0;
		L_0 = TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_inline(__this, /*hidden argument*/TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_RuntimeMethod_var);
		NullCheck(L_0);
		MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 * L_1 = L_0->get_address_of_Payload_1();
		List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * L_2 = L_1->get_Metrics_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mE3AABCF8B688AB84FABF2C239D960127E28FBB2D_inline(L_2, /*hidden argument*/List_1_get_Count_mE3AABCF8B688AB84FABF2C239D960127E28FBB2D_RuntimeMethod_var);
		if ((((int32_t)L_3) > ((int32_t)0)))
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
		// m_Sender.SendAsync(Cache.Payload);
		TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * L_4 = ((TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 *)__this)->get_m_Sender_2();
		CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * L_5;
		L_5 = TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_inline(__this, /*hidden argument*/TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_RuntimeMethod_var);
		NullCheck(L_5);
		MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19  L_6 = L_5->get_Payload_1();
		NullCheck(L_4);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
		L_7 = TelemetrySender_SendAsync_TisMetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_mB918AE49663DF24311221FD5D6D826A5EAFA28B4(L_4, L_6, /*hidden argument*/TelemetrySender_SendAsync_TisMetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_mB918AE49663DF24311221FD5D6D826A5EAFA28B4_RuntimeMethod_var);
		// Cache.Payload.Metrics.Clear();
		CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * L_8;
		L_8 = TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_inline(__this, /*hidden argument*/TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_RuntimeMethod_var);
		NullCheck(L_8);
		MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 * L_9 = L_8->get_address_of_Payload_1();
		List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * L_10 = L_9->get_Metrics_0();
		NullCheck(L_10);
		List_1_Clear_mA52F909D3E2C9ACAD96DB6E0D2E9A3221B3F09D9(L_10, /*hidden argument*/List_1_Clear_mA52F909D3E2C9ACAD96DB6E0D2E9A3221B3F09D9_RuntimeMethod_var);
		// Cache.TimeOfOccurenceTicks = 0;
		CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * L_11;
		L_11 = TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_inline(__this, /*hidden argument*/TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->set_TimeOfOccurenceTicks_0(((int64_t)((int64_t)0)));
		// if (m_CachePersister.CanPersist)
		RuntimeObject* L_12 = ((TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 *)__this)->get_m_CachePersister_1();
		NullCheck(L_12);
		bool L_13;
		L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.Services.Core.Telemetry.Internal.ICachePersister`1<Unity.Services.Core.Telemetry.Internal.MetricsPayload>::get_CanPersist() */, ICachePersister_1_t0D065A3A15334F2937118381EEB91732555A94ED_il2cpp_TypeInfo_var, L_12);
		if (!L_13)
		{
			goto IL_006a;
		}
	}
	{
		// m_CachePersister.Delete();
		RuntimeObject* L_14 = ((TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 *)__this)->get_m_CachePersister_1();
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Unity.Services.Core.Telemetry.Internal.ICachePersister`1<Unity.Services.Core.Telemetry.Internal.MetricsPayload>::Delete() */, ICachePersister_1_t0D065A3A15334F2937118381EEB91732555A94ED_il2cpp_TypeInfo_var, L_14);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Boolean Unity.Services.Core.Telemetry.Internal.MetricsHandler::<SendPersistedCache>g__AreMetricsOutdated|1_0(Unity.Services.Core.Telemetry.Internal.MetricsHandler/<>c__DisplayClass1_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricsHandler_U3CSendPersistedCacheU3Eg__AreMetricsOutdatedU7C1_0_mA181D05894D14A9A418B889D0AF3D575C1C28A9A (MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * __this, U3CU3Ec__DisplayClass1_0_t001FFEB184E0584DA956B66FF667ABC0D3FA16E8 * p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetryHandler_2_get_Config_m2E26D63E35F736C441D337EA7FBB99D93A7878DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var differenceFromUtcNow = DateTime.UtcNow - new DateTime(persistedCache.TimeOfOccurenceTicks);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		L_0 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		U3CU3Ec__DisplayClass1_0_t001FFEB184E0584DA956B66FF667ABC0D3FA16E8 * L_1 = p0;
		CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * L_2 = L_1->get_persistedCache_0();
		NullCheck(L_2);
		int64_t L_3 = L_2->get_TimeOfOccurenceTicks_0();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_4;
		memset((&L_4), 0, sizeof(L_4));
		DateTime__ctor_m14D7C60472AE477F824F8BEE8830C5F5D4FCA16A((&L_4), L_3, /*hidden argument*/NULL);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_5;
		L_5 = DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2(L_0, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// return differenceFromUtcNow.TotalSeconds > Config.PayloadExpirationSeconds;
		double L_6;
		L_6 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * L_7;
		L_7 = TelemetryHandler_2_get_Config_m2E26D63E35F736C441D337EA7FBB99D93A7878DD_inline(__this, /*hidden argument*/TelemetryHandler_2_get_Config_m2E26D63E35F736C441D337EA7FBB99D93A7878DD_RuntimeMethod_var);
		NullCheck(L_7);
		double L_8 = L_7->get_PayloadExpirationSeconds_2();
		return (bool)((((double)L_6) > ((double)L_8))? 1 : 0);
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
// Conversion methods for marshalling of: Unity.Services.Core.Telemetry.Internal.MetricsPayload
IL2CPP_EXTERN_C void MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_marshal_pinvoke(const MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19& unmarshaled, MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Metrics_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Metrics' of type 'MetricsPayload'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Metrics_0Exception, NULL);
}
IL2CPP_EXTERN_C void MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_marshal_pinvoke_back(const MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_marshaled_pinvoke& marshaled, MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19& unmarshaled)
{
	Exception_t* ___Metrics_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Metrics' of type 'MetricsPayload'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Metrics_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Telemetry.Internal.MetricsPayload
IL2CPP_EXTERN_C void MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_marshal_pinvoke_cleanup(MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Services.Core.Telemetry.Internal.MetricsPayload
IL2CPP_EXTERN_C void MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_marshal_com(const MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19& unmarshaled, MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_marshaled_com& marshaled)
{
	Exception_t* ___Metrics_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Metrics' of type 'MetricsPayload'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Metrics_0Exception, NULL);
}
IL2CPP_EXTERN_C void MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_marshal_com_back(const MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_marshaled_com& marshaled, MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19& unmarshaled)
{
	Exception_t* ___Metrics_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Metrics' of type 'MetricsPayload'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Metrics_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Telemetry.Internal.MetricsPayload
IL2CPP_EXTERN_C void MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_marshal_com_cleanup(MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_marshaled_com& marshaled)
{
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Core.Telemetry.Internal.MetricsPayload::Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.get_CommonTags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags_m09CDC380DE374675706B6BCAF1D7DCA4F4CB2043 (MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 * __this, const RuntimeMethod* method)
{
	{
		// Dictionary<string, string> ITelemetryPayload.CommonTags => CommonTags;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_CommonTags_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags_m09CDC380DE374675706B6BCAF1D7DCA4F4CB2043_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 * _thisAdjusted = reinterpret_cast<MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 *>(__this + _offset);
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * _returnValue;
	_returnValue = MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags_m09CDC380DE374675706B6BCAF1D7DCA4F4CB2043_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Services.Core.Telemetry.Internal.MetricsPayload::Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_Count_m072E80CC3B3D4C221BA9B6AE15EAC16D389B2C4D (MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE3AABCF8B688AB84FABF2C239D960127E28FBB2D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * G_B2_0 = NULL;
	List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * G_B1_0 = NULL;
	{
		// int ITelemetryPayload.Count => Metrics?.Count ?? 0;
		List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * L_0 = __this->get_Metrics_0();
		List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return 0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = List_1_get_Count_mE3AABCF8B688AB84FABF2C239D960127E28FBB2D_inline(G_B2_0, /*hidden argument*/List_1_get_Count_mE3AABCF8B688AB84FABF2C239D960127E28FBB2D_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_Count_m072E80CC3B3D4C221BA9B6AE15EAC16D389B2C4D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 * _thisAdjusted = reinterpret_cast<MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_Count_m072E80CC3B3D4C221BA9B6AE15EAC16D389B2C4D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Services.Core.Telemetry.Internal.MetricsPayload::Unity.Services.Core.Telemetry.Internal.ITelemetryPayload.Add(Unity.Services.Core.Telemetry.Internal.ITelemetryEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add_m47C6DBA28798422C1FB05C799CD04A8822D70481 (MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 * __this, RuntimeObject* ___telemetryEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF52274977DB2F80CE0E3B2686A88F93A9F123F17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m914565735F215A98066C412DE2C40916BD385FD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!(telemetryEvent is Metric metric))
		RuntimeObject* L_0 = ___telemetryEvent0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD_il2cpp_TypeInfo_var)))
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_1 = ___telemetryEvent0;
		V_0 = ((*(Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD *)((Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD *)UnBox(L_1, Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD_il2cpp_TypeInfo_var))));
		goto IL_001c;
	}

IL_0011:
	{
		// throw new ArgumentException("This payload accepts only Metric events.");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral823AF51D12FCD183C3A2AABB30CAFA6C05DC54B6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add_m47C6DBA28798422C1FB05C799CD04A8822D70481_RuntimeMethod_var)));
	}

IL_001c:
	{
		// if (Metrics is null)
		List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * L_3 = __this->get_Metrics_0();
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		// Metrics = new List<Metric>(1);
		List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * L_4 = (List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 *)il2cpp_codegen_object_new(List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875_il2cpp_TypeInfo_var);
		List_1__ctor_m914565735F215A98066C412DE2C40916BD385FD0(L_4, 1, /*hidden argument*/List_1__ctor_m914565735F215A98066C412DE2C40916BD385FD0_RuntimeMethod_var);
		__this->set_Metrics_0(L_4);
	}

IL_0030:
	{
		// Metrics.Add(metric);
		List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * L_5 = __this->get_Metrics_0();
		Metric_t5418FD22DF925152E555EF4E6EC40446332D2BFD  L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_mF52274977DB2F80CE0E3B2686A88F93A9F123F17(L_5, L_6, /*hidden argument*/List_1_Add_mF52274977DB2F80CE0E3B2686A88F93A9F123F17_RuntimeMethod_var);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add_m47C6DBA28798422C1FB05C799CD04A8822D70481_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___telemetryEvent0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 * _thisAdjusted = reinterpret_cast<MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 *>(__this + _offset);
	MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_Add_m47C6DBA28798422C1FB05C799CD04A8822D70481(_thisAdjusted, ___telemetryEvent0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Telemetry.Internal.TelemetryConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelemetryConfig__ctor_mB44120EA43D09FD1749F10662EA9554AEBB98567 (TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * __this, const RuntimeMethod* method)
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
// System.String Unity.Services.Core.Telemetry.Internal.TelemetryHandler::FormatOperatingSystemInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TelemetryHandler_FormatOperatingSystemInfo_mBE16D630006ABCEA6FA0E67842D42C674EA4C7AA (String_t* ___rawOsInfo0, const RuntimeMethod* method)
{
	{
		// return rawOsInfo;
		String_t* L_0 = ___rawOsInfo0;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.TelemetryHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelemetryHandler__ctor_m095109AD64B69A1B0C4FB59A52AA0F8E39FF5041 (TelemetryHandler_t8F0CC3A9415D4ACE40E25ED9F990ECD36F6A216F * __this, const RuntimeMethod* method)
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
// System.String Unity.Services.Core.Telemetry.Internal.TelemetrySender::get_TargetUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TelemetrySender_get_TargetUrl_m74B01582AF1424F2EC351DD9D1FEB2CB5405E510 (TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * __this, const RuntimeMethod* method)
{
	{
		// public string TargetUrl { get; }
		String_t* L_0 = __this->get_U3CTargetUrlU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.TelemetrySender::.ctor(System.String,System.String,Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Telemetry.Internal.ExponentialBackOffRetryPolicy,Unity.Services.Core.Telemetry.Internal.IUnityWebRequestSender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelemetrySender__ctor_mFBABC9EAEB34BC9E7A43888DB11742C900348938 (TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * __this, String_t* ___targetUrl0, String_t* ___servicePath1, RuntimeObject* ___scheduler2, ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * ___retryPolicy3, RuntimeObject* ___requestSender4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TelemetrySender(
		//     [NotNull] string targetUrl, [NotNull] string servicePath,
		//     [NotNull] IActionScheduler scheduler, [NotNull] ExponentialBackOffRetryPolicy retryPolicy,
		//     [NotNull] IUnityWebRequestSender requestSender)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// TargetUrl = $"{targetUrl}/{servicePath}";
		String_t* L_0 = ___targetUrl0;
		String_t* L_1 = ___servicePath1;
		String_t* L_2;
		L_2 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_0, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_1, /*hidden argument*/NULL);
		__this->set_U3CTargetUrlU3Ek__BackingField_0(L_2);
		// m_RetryPolicy = retryPolicy;
		ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * L_3 = ___retryPolicy3;
		__this->set_m_RetryPolicy_1(L_3);
		// m_Scheduler = scheduler;
		RuntimeObject* L_4 = ___scheduler2;
		__this->set_m_Scheduler_2(L_4);
		// m_RequestSender = requestSender;
		RuntimeObject* L_5 = ___requestSender4;
		__this->set_m_RequestSender_3(L_5);
		// }
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest Unity.Services.Core.Telemetry.Internal.TelemetrySender::CreateRequest(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * TelemetrySender_CreateRequest_m82792B99AA67AF4D7D9FE40778D0C5046DCD7134 (TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___serializedPayload0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var request = new UnityWebRequest(TargetUrl, UnityWebRequest.kHttpVerbPOST)
		// {
		//     uploadHandler = new UploadHandlerRaw(serializedPayload)
		//     {
		//         contentType = UnityWebRequestUtils.JsonContentType,
		//     },
		//     downloadHandler = new DownloadHandlerBuffer()
		// };
		String_t* L_0;
		L_0 = TelemetrySender_get_TargetUrl_m74B01582AF1424F2EC351DD9D1FEB2CB5405E510_inline(__this, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975(L_1, L_0, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_2 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___serializedPayload0;
		UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * L_4 = (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *)il2cpp_codegen_object_new(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9(L_4, L_3, /*hidden argument*/NULL);
		UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * L_5 = L_4;
		NullCheck(L_5);
		UploadHandler_set_contentType_mAECD24AB554541300BD126E01C65329F0A29A328(L_5, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA(L_2, L_5, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6 = L_2;
		DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_7 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2(L_6, L_7, /*hidden argument*/NULL);
		// request.SetRequestHeader("Content-Type", UnityWebRequestUtils.JsonContentType);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8 = L_6;
		NullCheck(L_8);
		UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_8, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, /*hidden argument*/NULL);
		// return request;
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
// Unity.Services.Core.Telemetry.Internal.IMetricsFactory Unity.Services.Core.Telemetry.Internal.TelemetryUtils::CreateMetricsFactory(Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Configuration.Internal.IProjectConfiguration,Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TelemetryUtils_CreateMetricsFactory_m521C5190A1AC572B6A662805F88F1018044DCAD9 (RuntimeObject* ___scheduler0, RuntimeObject* ___projectConfiguration1, RuntimeObject* ___cloudProjectId2, RuntimeObject* ___environments3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedPayload_1__ctor_mC11E2A4EC35C9CBA21AA4DE267B4BE8E37EE0FFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisabledMetricsFactory_t4AC0F22034937C56A8FB5A67EC19D086CC246FB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5BAB264E522362F7F3E437C0F9BD90DA0C406187_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsFactory_tD507E89F251BBFFF3E762FCE0C8B8280C79B1DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetryHandler_2_Initialize_m192185702069F62A93421AA9AA1763AC8923ECBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetryUtils_CreateCachePersister_TisMetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_m2BD780D6A0F8A924BCC811DD8A94A83E19A1AA0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestSender_tBE2E7D88776F300B0F34024BBA8C0FA4B77EDEFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE871287248FF7EDAEE587BCFE45EB79F4C06B0D);
		s_Il2CppMethodInitialized = true;
	}
	TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * V_0 = NULL;
	CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * V_3 = NULL;
	UnityWebRequestSender_tBE2E7D88776F300B0F34024BBA8C0FA4B77EDEFA * V_4 = NULL;
	TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * V_5 = NULL;
	MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (IsTelemetryDisabled(projectConfiguration))
		RuntimeObject* L_0 = ___projectConfiguration1;
		bool L_1;
		L_1 = TelemetryUtils_IsTelemetryDisabled_m0B6A8C6F61672C595DDEB14D4B7837FAA5D5C452(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return new DisabledMetricsFactory();
		DisabledMetricsFactory_t4AC0F22034937C56A8FB5A67EC19D086CC246FB0 * L_2 = (DisabledMetricsFactory_t4AC0F22034937C56A8FB5A67EC19D086CC246FB0 *)il2cpp_codegen_object_new(DisabledMetricsFactory_t4AC0F22034937C56A8FB5A67EC19D086CC246FB0_il2cpp_TypeInfo_var);
		DisabledMetricsFactory__ctor_mBF0702F244DF6D3905E27E2360B91F3027052395(L_2, /*hidden argument*/NULL);
		return L_2;
	}

IL_000e:
	{
		// var config = CreateTelemetryConfig(projectConfiguration);
		RuntimeObject* L_3 = ___projectConfiguration1;
		TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * L_4;
		L_4 = TelemetryUtils_CreateTelemetryConfig_m9A1AB532C9ED2F93A46AC64C8D3E2CFFA845C648(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// var cache = new CachedPayload<MetricsPayload>
		// {
		//     Payload = new MetricsPayload
		//     {
		//         Metrics = new List<Metric>(),
		//         CommonTags = new Dictionary<string, string>(),
		//         MetricsCommonTags = new Dictionary<string, string>(),
		//     },
		// };
		CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * L_5 = (CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 *)il2cpp_codegen_object_new(CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9_il2cpp_TypeInfo_var);
		CachedPayload_1__ctor_mC11E2A4EC35C9CBA21AA4DE267B4BE8E37EE0FFC(L_5, /*hidden argument*/CachedPayload_1__ctor_mC11E2A4EC35C9CBA21AA4DE267B4BE8E37EE0FFC_RuntimeMethod_var);
		CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * L_6 = L_5;
		il2cpp_codegen_initobj((&V_6), sizeof(MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 ));
		List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * L_7 = (List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 *)il2cpp_codegen_object_new(List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875_il2cpp_TypeInfo_var);
		List_1__ctor_m5BAB264E522362F7F3E437C0F9BD90DA0C406187(L_7, /*hidden argument*/List_1__ctor_m5BAB264E522362F7F3E437C0F9BD90DA0C406187_RuntimeMethod_var);
		(&V_6)->set_Metrics_0(L_7);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_8 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_8, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		(&V_6)->set_CommonTags_1(L_8);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_9 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_9, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		(&V_6)->set_MetricsCommonTags_2(L_9);
		MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19  L_10 = V_6;
		NullCheck(L_6);
		L_6->set_Payload_1(L_10);
		V_1 = L_6;
		// var cachePersister = CreateCachePersister<MetricsPayload>("UnityServicesCachedMetrics", Application.platform);
		int32_t L_11;
		L_11 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		RuntimeObject* L_12;
		L_12 = TelemetryUtils_CreateCachePersister_TisMetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_m2BD780D6A0F8A924BCC811DD8A94A83E19A1AA0C(_stringLiteralCE871287248FF7EDAEE587BCFE45EB79F4C06B0D, L_11, /*hidden argument*/TelemetryUtils_CreateCachePersister_TisMetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19_m2BD780D6A0F8A924BCC811DD8A94A83E19A1AA0C_RuntimeMethod_var);
		V_2 = L_12;
		// var retryPolicy = new ExponentialBackOffRetryPolicy();
		ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * L_13 = (ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 *)il2cpp_codegen_object_new(ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416_il2cpp_TypeInfo_var);
		ExponentialBackOffRetryPolicy__ctor_m05CD4D215EDD77E62B874F7F85BE4E98E774AC14(L_13, /*hidden argument*/NULL);
		V_3 = L_13;
		// var requestSender = new UnityWebRequestSender();
		UnityWebRequestSender_tBE2E7D88776F300B0F34024BBA8C0FA4B77EDEFA * L_14 = (UnityWebRequestSender_tBE2E7D88776F300B0F34024BBA8C0FA4B77EDEFA *)il2cpp_codegen_object_new(UnityWebRequestSender_tBE2E7D88776F300B0F34024BBA8C0FA4B77EDEFA_il2cpp_TypeInfo_var);
		UnityWebRequestSender__ctor_mA11216EAB62A1338EEC354F377AA0D0F6207EE29(L_14, /*hidden argument*/NULL);
		V_4 = L_14;
		// var metricsSender = new TelemetrySender(
		//     config.TargetUrl, config.ServicePath, scheduler, retryPolicy, requestSender);
		TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16 = L_15->get_TargetUrl_0();
		TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = L_17->get_ServicePath_1();
		RuntimeObject* L_19 = ___scheduler0;
		ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * L_20 = V_3;
		UnityWebRequestSender_tBE2E7D88776F300B0F34024BBA8C0FA4B77EDEFA * L_21 = V_4;
		TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * L_22 = (TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 *)il2cpp_codegen_object_new(TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911_il2cpp_TypeInfo_var);
		TelemetrySender__ctor_mFBABC9EAEB34BC9E7A43888DB11742C900348938(L_22, L_16, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		V_5 = L_22;
		// var handler = new MetricsHandler(config, cache, scheduler, cachePersister, metricsSender);
		TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * L_23 = V_0;
		CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * L_24 = V_1;
		RuntimeObject* L_25 = ___scheduler0;
		RuntimeObject* L_26 = V_2;
		TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * L_27 = V_5;
		MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * L_28 = (MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 *)il2cpp_codegen_object_new(MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231_il2cpp_TypeInfo_var);
		MetricsHandler__ctor_m8E2AFD1459BAA0D7E0DDDD4D9C7D22B75AF11BF9(L_28, L_23, L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
		// handler.Initialize(cloudProjectId, environments);
		MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * L_29 = L_28;
		RuntimeObject* L_30 = ___cloudProjectId2;
		RuntimeObject* L_31 = ___environments3;
		NullCheck(L_29);
		TelemetryHandler_2_Initialize_m192185702069F62A93421AA9AA1763AC8923ECBA(L_29, L_30, L_31, /*hidden argument*/TelemetryHandler_2_Initialize_m192185702069F62A93421AA9AA1763AC8923ECBA_RuntimeMethod_var);
		// return new MetricsFactory(handler, projectConfiguration);
		RuntimeObject* L_32 = ___projectConfiguration1;
		MetricsFactory_tD507E89F251BBFFF3E762FCE0C8B8280C79B1DF1 * L_33 = (MetricsFactory_tD507E89F251BBFFF3E762FCE0C8B8280C79B1DF1 *)il2cpp_codegen_object_new(MetricsFactory_tD507E89F251BBFFF3E762FCE0C8B8280C79B1DF1_il2cpp_TypeInfo_var);
		MetricsFactory__ctor_mB6689743B76FCDB3986053C6CB2C3431725C61EB(L_33, L_29, L_32, /*hidden argument*/NULL);
		return L_33;
	}
}
// Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory Unity.Services.Core.Telemetry.Internal.TelemetryUtils::CreateDiagnosticsFactory(Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Configuration.Internal.IProjectConfiguration,Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TelemetryUtils_CreateDiagnosticsFactory_m6DD7BFC1BEAE34DACEEB0CA937E69FB7D1EE2E5D (RuntimeObject* ___scheduler0, RuntimeObject* ___projectConfiguration1, RuntimeObject* ___cloudProjectId2, RuntimeObject* ___environments3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedPayload_1__ctor_m35D57431F42F984330DB9E2393FBDB552C248C1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsFactory_t035E06152439A7D806A2770BA3029E9C4AE88931_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisabledDiagnosticsFactory_t3AE17E796B5A67BA640A7E091AA1D8CCC8F1A3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4CC06DBC64F6D87FDEBC50A10169CE6F0CE2470C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5DA432D36F1D12C1681B80D1EB14144383682219_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetryHandler_2_Initialize_m09C5741F2A2E19A3B3FF6F4261805C0062CAA5CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetryUtils_CreateCachePersister_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m7D63490F889496FF7CBFDE112BC077F5270FE95C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestSender_tBE2E7D88776F300B0F34024BBA8C0FA4B77EDEFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F227E0CD8E768A9E3A64A7320B1DAD5F9A5EE81);
		s_Il2CppMethodInitialized = true;
	}
	TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * V_0 = NULL;
	CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * V_3 = NULL;
	UnityWebRequestSender_tBE2E7D88776F300B0F34024BBA8C0FA4B77EDEFA * V_4 = NULL;
	TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * V_5 = NULL;
	DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (IsTelemetryDisabled(projectConfiguration))
		RuntimeObject* L_0 = ___projectConfiguration1;
		bool L_1;
		L_1 = TelemetryUtils_IsTelemetryDisabled_m0B6A8C6F61672C595DDEB14D4B7837FAA5D5C452(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return new DisabledDiagnosticsFactory();
		DisabledDiagnosticsFactory_t3AE17E796B5A67BA640A7E091AA1D8CCC8F1A3D3 * L_2 = (DisabledDiagnosticsFactory_t3AE17E796B5A67BA640A7E091AA1D8CCC8F1A3D3 *)il2cpp_codegen_object_new(DisabledDiagnosticsFactory_t3AE17E796B5A67BA640A7E091AA1D8CCC8F1A3D3_il2cpp_TypeInfo_var);
		DisabledDiagnosticsFactory__ctor_m98F5E115DCBA52AFB7190F2E419DF085FA5A6356(L_2, /*hidden argument*/NULL);
		return L_2;
	}

IL_000e:
	{
		// var config = CreateTelemetryConfig(projectConfiguration);
		RuntimeObject* L_3 = ___projectConfiguration1;
		TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * L_4;
		L_4 = TelemetryUtils_CreateTelemetryConfig_m9A1AB532C9ED2F93A46AC64C8D3E2CFFA845C648(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// var cache = new CachedPayload<DiagnosticsPayload>
		// {
		//     Payload = new DiagnosticsPayload
		//     {
		//         Diagnostics = new List<Diagnostic>(),
		//         CommonTags = new Dictionary<string, string>(),
		//         DiagnosticsCommonTags = new Dictionary<string, string>(),
		//     },
		// };
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_5 = (CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A *)il2cpp_codegen_object_new(CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A_il2cpp_TypeInfo_var);
		CachedPayload_1__ctor_m35D57431F42F984330DB9E2393FBDB552C248C1E(L_5, /*hidden argument*/CachedPayload_1__ctor_m35D57431F42F984330DB9E2393FBDB552C248C1E_RuntimeMethod_var);
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_6 = L_5;
		il2cpp_codegen_initobj((&V_6), sizeof(DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 ));
		List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * L_7 = (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 *)il2cpp_codegen_object_new(List_1_t5DA432D36F1D12C1681B80D1EB14144383682219_il2cpp_TypeInfo_var);
		List_1__ctor_m4CC06DBC64F6D87FDEBC50A10169CE6F0CE2470C(L_7, /*hidden argument*/List_1__ctor_m4CC06DBC64F6D87FDEBC50A10169CE6F0CE2470C_RuntimeMethod_var);
		(&V_6)->set_Diagnostics_0(L_7);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_8 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_8, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		(&V_6)->set_CommonTags_1(L_8);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_9 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_9, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		(&V_6)->set_DiagnosticsCommonTags_2(L_9);
		DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863  L_10 = V_6;
		NullCheck(L_6);
		L_6->set_Payload_1(L_10);
		V_1 = L_6;
		// var cachePersister = CreateCachePersister<DiagnosticsPayload>("UnityServicesCachedDiagnostics", Application.platform);
		int32_t L_11;
		L_11 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		RuntimeObject* L_12;
		L_12 = TelemetryUtils_CreateCachePersister_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m7D63490F889496FF7CBFDE112BC077F5270FE95C(_stringLiteral8F227E0CD8E768A9E3A64A7320B1DAD5F9A5EE81, L_11, /*hidden argument*/TelemetryUtils_CreateCachePersister_TisDiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863_m7D63490F889496FF7CBFDE112BC077F5270FE95C_RuntimeMethod_var);
		V_2 = L_12;
		// var retryPolicy = new ExponentialBackOffRetryPolicy();
		ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * L_13 = (ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 *)il2cpp_codegen_object_new(ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416_il2cpp_TypeInfo_var);
		ExponentialBackOffRetryPolicy__ctor_m05CD4D215EDD77E62B874F7F85BE4E98E774AC14(L_13, /*hidden argument*/NULL);
		V_3 = L_13;
		// var requestSender = new UnityWebRequestSender();
		UnityWebRequestSender_tBE2E7D88776F300B0F34024BBA8C0FA4B77EDEFA * L_14 = (UnityWebRequestSender_tBE2E7D88776F300B0F34024BBA8C0FA4B77EDEFA *)il2cpp_codegen_object_new(UnityWebRequestSender_tBE2E7D88776F300B0F34024BBA8C0FA4B77EDEFA_il2cpp_TypeInfo_var);
		UnityWebRequestSender__ctor_mA11216EAB62A1338EEC354F377AA0D0F6207EE29(L_14, /*hidden argument*/NULL);
		V_4 = L_14;
		// var metricsSender = new TelemetrySender(
		//     config.TargetUrl, config.ServicePath, scheduler, retryPolicy, requestSender);
		TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16 = L_15->get_TargetUrl_0();
		TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = L_17->get_ServicePath_1();
		RuntimeObject* L_19 = ___scheduler0;
		ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * L_20 = V_3;
		UnityWebRequestSender_tBE2E7D88776F300B0F34024BBA8C0FA4B77EDEFA * L_21 = V_4;
		TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * L_22 = (TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 *)il2cpp_codegen_object_new(TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911_il2cpp_TypeInfo_var);
		TelemetrySender__ctor_mFBABC9EAEB34BC9E7A43888DB11742C900348938(L_22, L_16, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		V_5 = L_22;
		// var handler = new DiagnosticsHandler(
		//     config, cache, scheduler, cachePersister, metricsSender);
		TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * L_23 = V_0;
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_24 = V_1;
		RuntimeObject* L_25 = ___scheduler0;
		RuntimeObject* L_26 = V_2;
		TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * L_27 = V_5;
		DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * L_28 = (DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 *)il2cpp_codegen_object_new(DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710_il2cpp_TypeInfo_var);
		DiagnosticsHandler__ctor_m1FD38166806FF3D1435FFDE86764436D4B087AEC(L_28, L_23, L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
		// handler.Initialize(cloudProjectId, environments);
		DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * L_29 = L_28;
		RuntimeObject* L_30 = ___cloudProjectId2;
		RuntimeObject* L_31 = ___environments3;
		NullCheck(L_29);
		TelemetryHandler_2_Initialize_m09C5741F2A2E19A3B3FF6F4261805C0062CAA5CE(L_29, L_30, L_31, /*hidden argument*/TelemetryHandler_2_Initialize_m09C5741F2A2E19A3B3FF6F4261805C0062CAA5CE_RuntimeMethod_var);
		// return new DiagnosticsFactory(handler, projectConfiguration);
		RuntimeObject* L_32 = ___projectConfiguration1;
		DiagnosticsFactory_t035E06152439A7D806A2770BA3029E9C4AE88931 * L_33 = (DiagnosticsFactory_t035E06152439A7D806A2770BA3029E9C4AE88931 *)il2cpp_codegen_object_new(DiagnosticsFactory_t035E06152439A7D806A2770BA3029E9C4AE88931_il2cpp_TypeInfo_var);
		DiagnosticsFactory__ctor_m94E13A224764049FB392BF9BF0EC1139D0630DBC(L_33, L_29, L_32, /*hidden argument*/NULL);
		return L_33;
	}
}
// System.Boolean Unity.Services.Core.Telemetry.Internal.TelemetryUtils::IsTelemetryDisabled(Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TelemetryUtils_IsTelemetryDisabled_m0B6A8C6F61672C595DDEB14D4B7837FAA5D5C452 (RuntimeObject* ___projectConfiguration0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9392DA9B947060CA08274EAE942417D75A7CA0D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => projectConfiguration.GetBool(TelemetryDisabledKey);
		RuntimeObject* L_0 = ___projectConfiguration0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker2< bool, String_t*, bool >::Invoke(0 /* System.Boolean Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetBool(System.String,System.Boolean) */, IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var, L_0, _stringLiteralA9392DA9B947060CA08274EAE942417D75A7CA0D, (bool)0);
		return L_1;
	}
}
// Unity.Services.Core.Telemetry.Internal.TelemetryConfig Unity.Services.Core.Telemetry.Internal.TelemetryUtils::CreateTelemetryConfig(Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * TelemetryUtils_CreateTelemetryConfig_m9A1AB532C9ED2F93A46AC64C8D3E2CFFA845C648 (RuntimeObject* ___projectConfiguration0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01C466FBD86FBB7A01FEE5B4420364EB13779331);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F484DF1DE5CC5067AC2EE918EB63F569DC0CC1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D5478220D856D71CDF1A603AC386C9BA7C0865C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71D28320423B0978CBA625BE0E4846EC97389105);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B9C8571450A4F167BFFD8C1D0899412FD5DD5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D3C19E3A647A2449C174675979309A559260621);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD370FE1ACCF063EBBC76335CFD838026A2B964C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC0C33C027C86616F69526EFB6E3328D3A142734);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var config = new TelemetryConfig
		// {
		//     TargetUrl = projectConfiguration.GetString(TelemetryConfigKeys.TargetUrl, defaultTargetUrl),
		//     ServicePath = projectConfiguration.GetString(TelemetryConfigKeys.ServicePath, defaultServicePath),
		//     PayloadExpirationSeconds = projectConfiguration.GetInt(TelemetryConfigKeys.PayloadExpirationSeconds, defaultPayloadExpirationSeconds),
		//     PayloadSendingMaxIntervalSeconds = projectConfiguration.GetInt(TelemetryConfigKeys.PayloadSendingMaxIntervalSeconds, defaultPayloadSendingMaxIntervalSeconds),
		//     SafetyPersistenceIntervalSeconds = projectConfiguration.GetInt(TelemetryConfigKeys.SafetyPersistenceIntervalSeconds, defaultSafetyPersistenceIntervalSeconds),
		//     MaxMetricCountPerPayload = Math.Min(TelemetryConfig.MaxMetricCountPerPayloadLimit, projectConfiguration.GetInt(TelemetryConfigKeys.MaxMetricCountPerPayload, TelemetryConfig.MaxMetricCountPerPayloadLimit)),
		// };
		TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * L_0 = (TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D *)il2cpp_codegen_object_new(TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D_il2cpp_TypeInfo_var);
		TelemetryConfig__ctor_mB44120EA43D09FD1749F10662EA9554AEBB98567(L_0, /*hidden argument*/NULL);
		TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * L_1 = L_0;
		RuntimeObject* L_2 = ___projectConfiguration0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(2 /* System.String Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetString(System.String,System.String) */, IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var, L_2, _stringLiteral9D3C19E3A647A2449C174675979309A559260621, _stringLiteral01C466FBD86FBB7A01FEE5B4420364EB13779331);
		NullCheck(L_1);
		L_1->set_TargetUrl_0(L_3);
		TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * L_4 = L_1;
		RuntimeObject* L_5 = ___projectConfiguration0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(2 /* System.String Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetString(System.String,System.String) */, IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var, L_5, _stringLiteral71D28320423B0978CBA625BE0E4846EC97389105, _stringLiteral7B9C8571450A4F167BFFD8C1D0899412FD5DD5F7);
		NullCheck(L_4);
		L_4->set_ServicePath_1(L_6);
		TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * L_7 = L_4;
		RuntimeObject* L_8 = ___projectConfiguration0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker2< int32_t, String_t*, int32_t >::Invoke(1 /* System.Int32 Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetInt(System.String,System.Int32) */, IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var, L_8, _stringLiteral4D5478220D856D71CDF1A603AC386C9BA7C0865C, ((int32_t)3600));
		NullCheck(L_7);
		L_7->set_PayloadExpirationSeconds_2(((double)((double)L_9)));
		TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * L_10 = L_7;
		RuntimeObject* L_11 = ___projectConfiguration0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker2< int32_t, String_t*, int32_t >::Invoke(1 /* System.Int32 Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetInt(System.String,System.Int32) */, IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var, L_11, _stringLiteral3F484DF1DE5CC5067AC2EE918EB63F569DC0CC1E, ((int32_t)600));
		NullCheck(L_10);
		L_10->set_PayloadSendingMaxIntervalSeconds_3(((double)((double)L_12)));
		TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * L_13 = L_10;
		RuntimeObject* L_14 = ___projectConfiguration0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker2< int32_t, String_t*, int32_t >::Invoke(1 /* System.Int32 Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetInt(System.String,System.Int32) */, IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var, L_14, _stringLiteralD370FE1ACCF063EBBC76335CFD838026A2B964C0, ((int32_t)300));
		NullCheck(L_13);
		L_13->set_SafetyPersistenceIntervalSeconds_4(((double)((double)L_15)));
		TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * L_16 = L_13;
		RuntimeObject* L_17 = ___projectConfiguration0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, String_t*, int32_t >::Invoke(1 /* System.Int32 Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetInt(System.String,System.Int32) */, IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var, L_17, _stringLiteralEC0C33C027C86616F69526EFB6E3328D3A142734, ((int32_t)295));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(((int32_t)295), L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->set_MaxMetricCountPerPayload_5(L_19);
		// return config;
		return L_16;
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
// System.Void Unity.Services.Core.Telemetry.Internal.UnityWebRequestSender::SendRequest(UnityEngine.Networking.UnityWebRequest,System.Action`1<Unity.Services.Core.Telemetry.Internal.WebRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestSender_SendRequest_mD334A87894648E7B6DDAF653BB7787674105AD42 (UnityWebRequestSender_tBE2E7D88776F300B0F34024BBA8C0FA4B77EDEFA * __this, UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___request0, Action_1_tF53DB2CD9E161979EF52137A49BBBC58D2C3E49F * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CSendRequestU3Eg__OnSendingRequestCompletedU7C0_mF694A2BB93842E397B6F619271C1C1A76FF67CDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_t14CAA4D1C0D0D7E7918A9CAD8B056600BE729DCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t14CAA4D1C0D0D7E7918A9CAD8B056600BE729DCC * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t14CAA4D1C0D0D7E7918A9CAD8B056600BE729DCC * L_0 = (U3CU3Ec__DisplayClass0_0_t14CAA4D1C0D0D7E7918A9CAD8B056600BE729DCC *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t14CAA4D1C0D0D7E7918A9CAD8B056600BE729DCC_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass0_0__ctor_m1293CAEAF4397E61E8E4C3E889ED9F0F9A5F381A(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_t14CAA4D1C0D0D7E7918A9CAD8B056600BE729DCC * L_1 = V_0;
		Action_1_tF53DB2CD9E161979EF52137A49BBBC58D2C3E49F * L_2 = ___callback1;
		NullCheck(L_1);
		L_1->set_callback_0(L_2);
		// var sendingOperation = request.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_3 = ___request0;
		NullCheck(L_3);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_4;
		L_4 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_3, /*hidden argument*/NULL);
		// sendingOperation.completed += OnSendingRequestCompleted;
		U3CU3Ec__DisplayClass0_0_t14CAA4D1C0D0D7E7918A9CAD8B056600BE729DCC * L_5 = V_0;
		Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * L_6 = (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 *)il2cpp_codegen_object_new(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var);
		Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass0_0_U3CSendRequestU3Eg__OnSendingRequestCompletedU7C0_mF694A2BB93842E397B6F619271C1C1A76FF67CDC_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var);
		NullCheck(L_4);
		AsyncOperation_add_completed_m44D28A82BB10C85AED56A43BB666850D2E9E59E8(L_4, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.Services.Core.Telemetry.Internal.WebRequest Unity.Services.Core.Telemetry.Internal.UnityWebRequestSender::Simplify(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D  UnityWebRequestSender_Simplify_m2E626DF31F20FAF4CABD327178C2601EDE8ADEC8 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___webRequest0, const RuntimeMethod* method)
{
	WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// var simplifiedRequest = new WebRequest
		// {
		//     ResponseCode = webRequest.responseCode,
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D ));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = ___webRequest0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753(L_0, /*hidden argument*/NULL);
		(&V_1)->set_ResponseCode_3(L_1);
		WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D  L_2 = V_1;
		V_0 = L_2;
		// if (webRequest.HasSucceeded())
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_3 = ___webRequest0;
		bool L_4;
		L_4 = UnityWebRequestUtils_HasSucceeded_m187B4E129C0225BE9215C8684B3D588E7A195B71(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// simplifiedRequest.Result = WebRequestResult.Success;
		(&V_0)->set_Result_0(0);
		// }
		goto IL_0075;
	}

IL_0029:
	{
		// switch (webRequest.result)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_5 = ___webRequest0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)3)))
		{
			goto IL_0044;
		}
	}
	{
		goto IL_004e;
	}

IL_003a:
	{
		// simplifiedRequest.Result = WebRequestResult.ConnectionError;
		(&V_0)->set_Result_0(1);
		// break;
		goto IL_0056;
	}

IL_0044:
	{
		// simplifiedRequest.Result = WebRequestResult.ProtocolError;
		(&V_0)->set_Result_0(2);
		// break;
		goto IL_0056;
	}

IL_004e:
	{
		// simplifiedRequest.Result = WebRequestResult.UnknownError;
		(&V_0)->set_Result_0(3);
	}

IL_0056:
	{
		// simplifiedRequest.ErrorMessage = webRequest.error;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = ___webRequest0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_9, /*hidden argument*/NULL);
		(&V_0)->set_ErrorMessage_1(L_10);
		// simplifiedRequest.ErrorBody = webRequest.downloadHandler.text;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11 = ___webRequest0;
		NullCheck(L_11);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_12;
		L_12 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_12, /*hidden argument*/NULL);
		(&V_0)->set_ErrorBody_2(L_13);
	}

IL_0075:
	{
		// return simplifiedRequest;
		WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D  L_14 = V_0;
		return L_14;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.UnityWebRequestSender::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestSender__ctor_mA11216EAB62A1338EEC354F377AA0D0F6207EE29 (UnityWebRequestSender_tBE2E7D88776F300B0F34024BBA8C0FA4B77EDEFA * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Unity.Services.Core.Telemetry.Internal.WebRequest
IL2CPP_EXTERN_C void WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D_marshal_pinvoke(const WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D& unmarshaled, WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D_marshaled_pinvoke& marshaled)
{
	marshaled.___Result_0 = unmarshaled.get_Result_0();
	marshaled.___ErrorMessage_1 = il2cpp_codegen_marshal_string(unmarshaled.get_ErrorMessage_1());
	marshaled.___ErrorBody_2 = il2cpp_codegen_marshal_string(unmarshaled.get_ErrorBody_2());
	marshaled.___ResponseCode_3 = unmarshaled.get_ResponseCode_3();
}
IL2CPP_EXTERN_C void WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D_marshal_pinvoke_back(const WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D_marshaled_pinvoke& marshaled, WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D& unmarshaled)
{
	int32_t unmarshaled_Result_temp_0 = 0;
	unmarshaled_Result_temp_0 = marshaled.___Result_0;
	unmarshaled.set_Result_0(unmarshaled_Result_temp_0);
	unmarshaled.set_ErrorMessage_1(il2cpp_codegen_marshal_string_result(marshaled.___ErrorMessage_1));
	unmarshaled.set_ErrorBody_2(il2cpp_codegen_marshal_string_result(marshaled.___ErrorBody_2));
	int64_t unmarshaled_ResponseCode_temp_3 = 0;
	unmarshaled_ResponseCode_temp_3 = marshaled.___ResponseCode_3;
	unmarshaled.set_ResponseCode_3(unmarshaled_ResponseCode_temp_3);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Telemetry.Internal.WebRequest
IL2CPP_EXTERN_C void WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D_marshal_pinvoke_cleanup(WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___ErrorMessage_1);
	marshaled.___ErrorMessage_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___ErrorBody_2);
	marshaled.___ErrorBody_2 = NULL;
}
// Conversion methods for marshalling of: Unity.Services.Core.Telemetry.Internal.WebRequest
IL2CPP_EXTERN_C void WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D_marshal_com(const WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D& unmarshaled, WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D_marshaled_com& marshaled)
{
	marshaled.___Result_0 = unmarshaled.get_Result_0();
	marshaled.___ErrorMessage_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_ErrorMessage_1());
	marshaled.___ErrorBody_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_ErrorBody_2());
	marshaled.___ResponseCode_3 = unmarshaled.get_ResponseCode_3();
}
IL2CPP_EXTERN_C void WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D_marshal_com_back(const WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D_marshaled_com& marshaled, WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D& unmarshaled)
{
	int32_t unmarshaled_Result_temp_0 = 0;
	unmarshaled_Result_temp_0 = marshaled.___Result_0;
	unmarshaled.set_Result_0(unmarshaled_Result_temp_0);
	unmarshaled.set_ErrorMessage_1(il2cpp_codegen_marshal_bstring_result(marshaled.___ErrorMessage_1));
	unmarshaled.set_ErrorBody_2(il2cpp_codegen_marshal_bstring_result(marshaled.___ErrorBody_2));
	int64_t unmarshaled_ResponseCode_temp_3 = 0;
	unmarshaled_ResponseCode_temp_3 = marshaled.___ResponseCode_3;
	unmarshaled.set_ResponseCode_3(unmarshaled_ResponseCode_temp_3);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Telemetry.Internal.WebRequest
IL2CPP_EXTERN_C void WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D_marshal_com_cleanup(WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___ErrorMessage_1);
	marshaled.___ErrorMessage_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___ErrorBody_2);
	marshaled.___ErrorBody_2 = NULL;
}
// System.Boolean Unity.Services.Core.Telemetry.Internal.WebRequest::get_IsSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRequest_get_IsSuccess_m051188E93FCE554B69A490AFFF3EEDD3D28AA726 (WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D * __this, const RuntimeMethod* method)
{
	{
		// public bool IsSuccess => Result == WebRequestResult.Success;
		int32_t L_0 = __this->get_Result_0();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool WebRequest_get_IsSuccess_m051188E93FCE554B69A490AFFF3EEDD3D28AA726_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D * _thisAdjusted = reinterpret_cast<WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D *>(__this + _offset);
	bool _returnValue;
	_returnValue = WebRequest_get_IsSuccess_m051188E93FCE554B69A490AFFF3EEDD3D28AA726(_thisAdjusted, method);
	return _returnValue;
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
// System.Void Unity.Services.Core.Telemetry.Internal.DiagnosticsHandler/SendState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendState__ctor_m2D59753171C2D08FB84F12EED9EF6363D99A020E (SendState_tF1E7E144FEBA889420BFC614A2CA85CB5E73102E * __this, const RuntimeMethod* method)
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
// System.Void Unity.Services.Core.Telemetry.Internal.UnityWebRequestSender/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m1293CAEAF4397E61E8E4C3E889ED9F0F9A5F381A (U3CU3Ec__DisplayClass0_0_t14CAA4D1C0D0D7E7918A9CAD8B056600BE729DCC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Telemetry.Internal.UnityWebRequestSender/<>c__DisplayClass0_0::<SendRequest>g__OnSendingRequestCompleted|0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CSendRequestU3Eg__OnSendingRequestCompletedU7C0_mF694A2BB93842E397B6F619271C1C1A76FF67CDC (U3CU3Ec__DisplayClass0_0_t14CAA4D1C0D0D7E7918A9CAD8B056600BE729DCC * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___operation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m8C0419007C7C4F2A4B97AEFDE54E8F61FEC16BE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_0 = NULL;
	WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// using (var webRequest = ((UnityWebRequestAsyncOperation)operation).webRequest)
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_0 = ___operation0;
		NullCheck(((UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 *)CastclassClass((RuntimeObject*)L_0, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_il2cpp_TypeInfo_var)));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1;
		L_1 = UnityWebRequestAsyncOperation_get_webRequest_m3D57A3FA8CF2214D219CA25026558E212E893151_inline(((UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 *)CastclassClass((RuntimeObject*)L_0, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			// if (callback is null)
			Action_1_tF53DB2CD9E161979EF52137A49BBBC58D2C3E49F * L_2 = __this->get_callback_0();
			if (L_2)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			// return;
			IL2CPP_LEAVE(0x35, FINALLY_002b);
		}

IL_0016:
		{
			// var simplifiedRequest = Simplify(webRequest);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_3 = V_0;
			WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D  L_4;
			L_4 = UnityWebRequestSender_Simplify_m2E626DF31F20FAF4CABD327178C2601EDE8ADEC8(L_3, /*hidden argument*/NULL);
			V_1 = L_4;
			// callback(simplifiedRequest);
			Action_1_tF53DB2CD9E161979EF52137A49BBBC58D2C3E49F * L_5 = __this->get_callback_0();
			WebRequest_tB4F9FDE6660C3D5E352F03F247BC0D254444E55D  L_6 = V_1;
			NullCheck(L_5);
			Action_1_Invoke_m8C0419007C7C4F2A4B97AEFDE54E8F61FEC16BE9(L_5, L_6, /*hidden argument*/Action_1_Invoke_m8C0419007C7C4F2A4B97AEFDE54E8F61FEC16BE9_RuntimeMethod_var);
			// }
			IL2CPP_LEAVE(0x35, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		{
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7 = V_0;
			if (!L_7)
			{
				goto IL_0034;
			}
		}

IL_002e:
		{
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_8);
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(43)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x35, IL_0035)
	}

IL_0035:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Diagnostics_get_PackageTags_mC970F45FF13D9C8728B2516E7F49CD2E94E064D1_inline (Diagnostics_t77D54D438A6C2AA9042730FB90BEF3357DEB0728 * __this, const RuntimeMethod* method)
{
	{
		// internal IDictionary<string, string> PackageTags { get; }
		RuntimeObject* L_0 = __this->get_U3CPackageTagsU3Ek__BackingField_1();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * Diagnostics_get_Handler_mA93DC705972AD769F706BD98F8F0901734D607A3_inline (Diagnostics_t77D54D438A6C2AA9042730FB90BEF3357DEB0728 * __this, const RuntimeMethod* method)
{
	{
		// internal DiagnosticsHandler Handler { get; }
		DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * L_0 = __this->get_U3CHandlerU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * DiagnosticsFactory_get_Handler_m89453A3F3D5FA717F4A39BB919636EB16F7FA23A_inline (DiagnosticsFactory_t035E06152439A7D806A2770BA3029E9C4AE88931 * __this, const RuntimeMethod* method)
{
	{
		// internal DiagnosticsHandler Handler { get; }
		DiagnosticsHandler_tC280B2DEFC188EB81BA0B0A1810B96FA03163710 * L_0 = __this->get_U3CHandlerU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * DiagnosticsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags_m9A322F41FCB2FFE6C4BB1734669869E136825A99_inline (DiagnosticsPayload_t593A898A844B59F63F5ACA12B6147482B2359863 * __this, const RuntimeMethod* method)
{
	{
		// Dictionary<string, string> ITelemetryPayload.CommonTags => CommonTags;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_CommonTags_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ExponentialBackOffRetryPolicy_get_MaxTryCount_m6101EA53ACF9BE54AC7C54F1DB399F32656349D7_inline (ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * __this, const RuntimeMethod* method)
{
	{
		// get => m_MaxTryCount;
		int32_t L_0 = __this->get_m_MaxTryCount_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ExponentialBackOffRetryPolicy_get_BaseDelaySeconds_m70788C0F0E02C71BC00F2D49481958E677C90022_inline (ExponentialBackOffRetryPolicy_tA28C74DAA9E2276A7D7BEB5E1EB056C066BCE416 * __this, const RuntimeMethod* method)
{
	{
		// get => m_BaseDelaySeconds;
		float L_0 = __this->get_m_BaseDelaySeconds_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Metrics_get_PackageTags_mE5692757668C3A30E78AC2A52AA661AA76CFFD8C_inline (Metrics_t6ECAC6AD63039C6F5E3AB6AFFEB9A41159776764 * __this, const RuntimeMethod* method)
{
	{
		// internal IDictionary<string, string> PackageTags { get; }
		RuntimeObject* L_0 = __this->get_U3CPackageTagsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * Metrics_get_Handler_mAF3E6B486B9338FD23ECDB10D1F09FD2C0198432_inline (Metrics_t6ECAC6AD63039C6F5E3AB6AFFEB9A41159776764 * __this, const RuntimeMethod* method)
{
	{
		// internal MetricsHandler Handler { get; }
		MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * L_0 = __this->get_U3CHandlerU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * MetricsFactory_get_Handler_mA9E730A2CCF7B37C8249546FBB4F846F97A02602_inline (MetricsFactory_tD507E89F251BBFFF3E762FCE0C8B8280C79B1DF1 * __this, const RuntimeMethod* method)
{
	{
		// internal MetricsHandler Handler { get; }
		MetricsHandler_t2B5815446622053C0B99672BF1A847750AEE3231 * L_0 = __this->get_U3CHandlerU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * MetricsPayload_Unity_Services_Core_Telemetry_Internal_ITelemetryPayload_get_CommonTags_m09CDC380DE374675706B6BCAF1D7DCA4F4CB2043_inline (MetricsPayload_t255346F63B5EFCD2A7788D90FC7448732506CF19 * __this, const RuntimeMethod* method)
{
	{
		// Dictionary<string, string> ITelemetryPayload.CommonTags => CommonTags;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_CommonTags_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TelemetrySender_get_TargetUrl_m74B01582AF1424F2EC351DD9D1FEB2CB5405E510_inline (TelemetrySender_tEABC9A479CCDBB131DA395F0D1876C5C160BD911 * __this, const RuntimeMethod* method)
{
	{
		// public string TargetUrl { get; }
		String_t* L_0 = __this->get_U3CTargetUrlU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequestAsyncOperation_get_webRequest_m3D57A3FA8CF2214D219CA25026558E212E893151_inline (UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * __this, const RuntimeMethod* method)
{
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = __this->get_U3CwebRequestU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC4E34F94D45D3903017D537DF9B4FAC0ED6490BC_gshared_inline (List_1_t5DA432D36F1D12C1681B80D1EB14144383682219 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * TelemetryHandler_2_get_Cache_m984450EA87121EAB505E32D58108BDA9E9AFCBB0_gshared_inline (TelemetryHandler_2_t7A192D5900085A9AEFEC10238F13D680030540CD * __this, const RuntimeMethod* method)
{
	{
		// public CachedPayload<TPayload> Cache { get; }
		CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A * L_0 = (CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A *)__this->get_U3CCacheU3Ek__BackingField_6();
		return (CachedPayload_1_t1F83F9BCF2BD8A4B5F895938C7A8ADC64270171A *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * TelemetryHandler_2_get_Cache_m8184C23290A5BBEDF14DE0B55C726BC7CCE9C6F3_gshared_inline (TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 * __this, const RuntimeMethod* method)
{
	{
		// public CachedPayload<TPayload> Cache { get; }
		CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 * L_0 = (CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 *)__this->get_U3CCacheU3Ek__BackingField_6();
		return (CachedPayload_1_t691B97AA195D4AAF8EF88953968B65643AE883F9 *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE3AABCF8B688AB84FABF2C239D960127E28FBB2D_gshared_inline (List_1_t0823ACF3AF118B2696FE375B5F8DB2390022A875 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * TelemetryHandler_2_get_Config_m2E26D63E35F736C441D337EA7FBB99D93A7878DD_gshared_inline (TelemetryHandler_2_tC14DEC3ABBD0B730D0BDA57BA271E9B65C5FCA34 * __this, const RuntimeMethod* method)
{
	{
		// public TelemetryConfig Config { get; }
		TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D * L_0 = (TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D *)__this->get_U3CConfigU3Ek__BackingField_5();
		return (TelemetryConfig_t03319F0F8440F000343444536C6169A65A9D906D *)L_0;
	}
}
