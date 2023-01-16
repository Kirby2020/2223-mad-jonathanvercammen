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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int64,Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>
struct Dictionary_2_t1F100AE9A628A2AC06659E38AEB481514599EDFA;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>>
struct Func_2_t8B0FC24E0A5C7C4C70E388A860972761AA4AA49A;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.ProjectConfiguration>>
struct Func_2_tFF546E62E63CD94FE7706BDCF31625AEA5CC1ADC;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>>
struct Func_2_tB2A45BDF375D6CEC1A2B6D3427E10423DEBE5A89;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72;
// System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct IDictionary_2_t9F846AC4D29920A3D4F6186A400798308B1B137B;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct IReadOnlyDictionary_2_t716F45354D8FE57925A2F26675770D906A746745;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct KeyCollection_t772892AF3BE19FC8C91BB7C87F66708E2B9B936B;
// Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation>
struct MinimumBinaryHeap_1_t07F8274BC6F3D2010AF30B915A00419B8E4E30F8;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>
struct TaskFactory_1_tEC1B7D7644A3EE3B96C40293B0FEB34665EFBCDC;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Core.Configuration.ProjectConfiguration>
struct TaskFactory_1_tF02A2E2EF83EAC947A70576DD5BAD4F529134833;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct TaskFactory_1_t9312EBAF258211D129B0A1E9E78AEA2E399B4AA0;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB;
// System.Threading.Tasks.Task`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>
struct Task_1_t766FB5BC182A614627D42726961515C6EC84A7EB;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.ProjectConfiguration>
struct Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970;
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct ValueCollection_t6D59100C1892FF652FC6F96A7023A3C54CA4AB02;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>[]
struct EntryU5BU5D_t8CB050746E70241DE17861AEDF0482915EC61F96;
// Unity.Services.Core.Configuration.ConfigurationEntry[]
struct ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Unity.Services.Core.Scheduler.Internal.ActionScheduler
struct ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F;
// Unity.Services.Core.Configuration.CloudProjectId
struct CloudProjectId_t8E2E58D767B7ABA77BEE1AA58804E5315DD10BD5;
// Unity.Services.Core.Configuration.ConfigurationEntry
struct ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// Unity.Services.Core.Internal.CoreDiagnostics
struct CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1;
// Unity.Services.Core.Internal.CoreMetrics
struct CoreMetrics_t0FED4B1619F67FDF1EA6F4C0397621CE1A003A86;
// Unity.Services.Core.Registration.CorePackageInitializer
struct CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509;
// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D;
// Unity.Services.Core.Environments.Internal.Environments
struct Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8;
// System.Exception
struct Exception_t;
// Unity.Services.Core.Scheduler.Internal.IActionScheduler
struct IActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// Unity.Services.Core.Configuration.Internal.ICloudProjectId
struct ICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3;
// Unity.Services.Core.Internal.IComponentRegistry
struct IComponentRegistry_t865A92B9368E04957931C2131EE80EC43115A7AC;
// Unity.Services.Core.Configuration.IConfigurationLoader
struct IConfigurationLoader_t982DEACE8EE9A49F9A433FBFA20A248E7B79E6F9;
// Unity.Services.Core.Telemetry.Internal.IDiagnostics
struct IDiagnostics_tBC063F5A4F1E9A39FCC4CA5F319D99C0BF2DBB92;
// Unity.Services.Core.Telemetry.Internal.IDiagnosticsComponentProvider
struct IDiagnosticsComponentProvider_tC66280FAEDAD54BA2CFAF3110B80B8B2BED8F75F;
// Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory
struct IDiagnosticsFactory_tF98D72E5A724DFEBC2D6F913DFAC54AA9B0FB925;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Unity.Services.Core.Environments.Internal.IEnvironments
struct IEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED;
// Unity.Services.Core.Device.Internal.IInstallationId
struct IInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863;
// Unity.Services.Core.Telemetry.Internal.IMetrics
struct IMetrics_tE17233689864CACE2185FCC53E928D858144B3E0;
// Unity.Services.Core.Telemetry.Internal.IMetricsFactory
struct IMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B;
// Unity.Services.Core.Internal.IPackageRegistry
struct IPackageRegistry_tC4E727967447DA452A70876AA8278363D5AEF4FE;
// Unity.Services.Core.Configuration.Internal.IProjectConfiguration
struct IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4;
// Unity.Services.Core.Scheduler.Internal.ITimeProvider
struct ITimeProvider_tD3F52102D2FB6E49D5BEB3F3F2C192DACD5599FE;
// Unity.Services.Core.IUnityServices
struct IUnityServices_t70D6D5FD5C1D34A32F1406FED0CD46FE7C429668;
// Unity.Services.Core.Threading.Internal.IUnityThreadUtils
struct IUnityThreadUtils_tBE7008D9FB34742ED07B210BDE6D7323242E0184;
// Unity.Services.Core.Device.IUserIdentifierProvider
struct IUserIdentifierProvider_t40461661E5FE07A813535047577423A33D6BE3A2;
// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268;
// Unity.Services.Core.Device.InstallationId
struct InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A;
// Unity.Services.Core.Configuration.ProjectConfiguration
struct ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
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
// System.Type
struct Type_t;
// Unity.Services.Core.UnityProjectNotLinkedException
struct UnityProjectNotLinkedException_tED48C6E2C4C6EFA63FF04C62373A0576754F5F41;
// Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal
struct UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CloudProjectId_t8E2E58D767B7ABA77BEE1AA58804E5315DD10BD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreMetrics_t0FED4B1619F67FDF1EA6F4C0397621CE1A003A86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConfigurationLoader_t982DEACE8EE9A49F9A433FBFA20A248E7B79E6F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDiagnosticsFactory_tF98D72E5A724DFEBC2D6F913DFAC54AA9B0FB925_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityServices_t70D6D5FD5C1D34A32F1406FED0CD46FE7C429668_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityProjectNotLinkedException_tED48C6E2C4C6EFA63FF04C62373A0576754F5F41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral1B3211DBE32867758EEF2D80E75AAE41597EA87C;
IL2CPP_EXTERN_C String_t* _stringLiteral5FFDD3A1E056986C5C4BF9E6444211A5564EEB6F;
IL2CPP_EXTERN_C String_t* _stringLiteral72A108E053F65E47DD8EFDC2C7EB71B5E7879550;
IL2CPP_EXTERN_C String_t* _stringLiteral84570E14F5CB57CA92CBBE945CEA229B6709C395;
IL2CPP_EXTERN_C String_t* _stringLiteralB9EFC4E3BFC701CF3C9A03ED0C0CFA12327C22B8;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0_m4845974DD3BB142DD88DA30FAC1C43DB7712F480_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91_m353462D728C090B5D4DE2F11D0923B3FBA2178E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA_m1B1D3FBD46022897D163F50A6C12BB215702C00B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637_mE383CDF97E7A4B36A27017BFA333D70422C1E4F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m4F7B791295F539A76BEBFA847C3F92E50F687068_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m86223E02937F1121450BC612BFF7F83FEF2CDC40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m89E946627D100E2FB4035599C40DA130BAB3F97F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m6703ECD56D68EBBA4EAA53CE4939BD69329F3BEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mE4BF6DEA7B8FEC712C70899EF6EE058748C3C9CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m01A9A9B52C92A94DC0452D1A40FA43369DE5CC2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mB05E78DC3861C92C8FDE19ECB8A91FD9FE8643FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m13775651404DF63FC11AE1A12A73BD02B9D5F0FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mC233711FA07BF6E99A5EEAB691ED4F81DE206955_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA_mF4713E912F6C8FE48AE638C6D7A2B61BBE42E592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0_mEA404BBD30E0C3EC56F2B5E527E86087A97FECA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91_mE94D1A6CD91085F5024256B206471D342365AC0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637_m1D39F4CC11861A0265DAAD4E5D1802DF72AC41EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m314E168DEA287E26E8DB822BE40015F2C9B8796E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m6BCA2201160B4615D4685D49220FA4C5A095E19D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mCB63CB31B1603243888A985C348A8E14CECF91D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605_TisU3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC_m3801EA809296C1267C45600AEEA65B4F991F3BC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A_m5776A712307CC1BD8971F53DB3BD76D6956F4AF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC_m3A5C777F2A59BF1AF9F9FA17017272533C601840_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A_mFE0D0D3CB390A37A9C91A1B11685637213B06BD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_m0173ECD7581D6A19347FF30FC4904C4B9423F1E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_m76D2E595D87EBED1FE73CBF606B5410FEA404519_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIDiagnosticsFactory_tF98D72E5A724DFEBC2D6F913DFAC54AA9B0FB925_m732D9F1C0C731E7F77AA57503D24C2C824B124A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_mCBD558F9206C52CF394E4FBA97F4D58CD0DC90F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863_mE82C349E67B8E7D3DFE3DA51A57E426B777073C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_m42C9281EE05852AF26F1B6588EB6A183C1E21319_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_m3A9515DC93CE2237B18EA784248D1CBB38A4E736_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIUnityThreadUtils_tBE7008D9FB34742ED07B210BDE6D7323242E0184_m31E5A91C781CD9540C71E2731BC77AAD659D907B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterPackage_TisCorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509_m033CA8EDAE172CF6A681F4FE826DAE721C1E1221_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_m0E38D5762147E12F8154F8A183F7174171825283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_m57BC8E6FBF190F2E36A4100700916552A22BF1D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIDiagnosticsFactory_tF98D72E5A724DFEBC2D6F913DFAC54AA9B0FB925_m174669867C0F1942642A5CD5109A39C8CEE2FD03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_m90548EA5C344424AA6AC9C528A818CAA9E906207_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863_m09818CDD4EB3088FA6858977564CCFA3E3A1AAFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_mD2C24941571BF9B538B930516BC02542B21F8280_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_mD24F68CA4EA3D8D1478B3062B0F80E59A8E5AD49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIUnityThreadUtils_tBE7008D9FB34742ED07B210BDE6D7323242E0184_m13AD3E6BAF8F6BCFB110A57F829BCD44CCDFECD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DictionaryExtensions_ValueEquals_TisString_t_TisRuntimeObject_m9E4EEFFE008AFB00920AF38EB43A70C773D63DD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE3D8C5059BE2B615AF01FEDA06DBED90B82F588A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m017A6EFA80A22876E2FD0C0A021182CFE0DA1DDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mA7E2D0B6607A8EE6622C60C7A04F35226EA6A81D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m1D7A8FF71FC1DAF857EA76E26E9B007F5BCF3F23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mB2B7A24E436296C969845CFFFCFE1211C47CA490_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m2AB9DBB9386479EAC3AA62471E4849C7A114370D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mC143DF70EA2F518DA4A94EB7ABB59A0803048822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeU3Ed__36_MoveNext_m2A2114D24D64F0E50E9EA8EE34C3234FE8034015_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_com;
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_pinvoke;

struct ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t49C51B521711AC6762E985EB9E3D5C227A01B824 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8CB050746E70241DE17861AEDF0482915EC61F96* ___entries_1;
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
	KeyCollection_t772892AF3BE19FC8C91BB7C87F66708E2B9B936B * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t6D59100C1892FF652FC6F96A7023A3C54CA4AB02 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B, ___entries_1)); }
	inline EntryU5BU5D_t8CB050746E70241DE17861AEDF0482915EC61F96* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8CB050746E70241DE17861AEDF0482915EC61F96** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8CB050746E70241DE17861AEDF0482915EC61F96* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B, ___keys_7)); }
	inline KeyCollection_t772892AF3BE19FC8C91BB7C87F66708E2B9B936B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t772892AF3BE19FC8C91BB7C87F66708E2B9B936B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t772892AF3BE19FC8C91BB7C87F66708E2B9B936B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B, ___values_8)); }
	inline ValueCollection_t6D59100C1892FF652FC6F96A7023A3C54CA4AB02 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t6D59100C1892FF652FC6F96A7023A3C54CA4AB02 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t6D59100C1892FF652FC6F96A7023A3C54CA4AB02 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Unity.Services.Core.Configuration.CloudProjectId
struct CloudProjectId_t8E2E58D767B7ABA77BEE1AA58804E5315DD10BD5  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Core.Configuration.ConfigurationEntry
struct ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6  : public RuntimeObject
{
public:
	// System.String Unity.Services.Core.Configuration.ConfigurationEntry::m_Value
	String_t* ___m_Value_0;
	// System.Boolean Unity.Services.Core.Configuration.ConfigurationEntry::m_IsReadOnly
	bool ___m_IsReadOnly_1;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6, ___m_Value_0)); }
	inline String_t* get_m_Value_0() const { return ___m_Value_0; }
	inline String_t** get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(String_t* value)
	{
		___m_Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Value_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsReadOnly_1() { return static_cast<int32_t>(offsetof(ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6, ___m_IsReadOnly_1)); }
	inline bool get_m_IsReadOnly_1() const { return ___m_IsReadOnly_1; }
	inline bool* get_address_of_m_IsReadOnly_1() { return &___m_IsReadOnly_1; }
	inline void set_m_IsReadOnly_1(bool value)
	{
		___m_IsReadOnly_1 = value;
	}
};


// Unity.Services.Core.Configuration.ConfigurationUtils
struct ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782  : public RuntimeObject
{
public:

public:
};

struct ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_StaticFields
{
public:
	// System.String Unity.Services.Core.Configuration.ConfigurationUtils::<RuntimeConfigFullPath>k__BackingField
	String_t* ___U3CRuntimeConfigFullPathU3Ek__BackingField_0;
	// Unity.Services.Core.Configuration.IConfigurationLoader Unity.Services.Core.Configuration.ConfigurationUtils::<ConfigurationLoader>k__BackingField
	RuntimeObject* ___U3CConfigurationLoaderU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CRuntimeConfigFullPathU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_StaticFields, ___U3CRuntimeConfigFullPathU3Ek__BackingField_0)); }
	inline String_t* get_U3CRuntimeConfigFullPathU3Ek__BackingField_0() const { return ___U3CRuntimeConfigFullPathU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CRuntimeConfigFullPathU3Ek__BackingField_0() { return &___U3CRuntimeConfigFullPathU3Ek__BackingField_0; }
	inline void set_U3CRuntimeConfigFullPathU3Ek__BackingField_0(String_t* value)
	{
		___U3CRuntimeConfigFullPathU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRuntimeConfigFullPathU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConfigurationLoaderU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_StaticFields, ___U3CConfigurationLoaderU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CConfigurationLoaderU3Ek__BackingField_1() const { return ___U3CConfigurationLoaderU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CConfigurationLoaderU3Ek__BackingField_1() { return &___U3CConfigurationLoaderU3Ek__BackingField_1; }
	inline void set_U3CConfigurationLoaderU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CConfigurationLoaderU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationLoaderU3Ek__BackingField_1), (void*)value);
	}
};


// Unity.Services.Core.Internal.CoreDiagnostics
struct CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Core.Internal.CoreDiagnostics::<CoreTags>k__BackingField
	RuntimeObject* ___U3CCoreTagsU3Ek__BackingField_0;
	// Unity.Services.Core.Telemetry.Internal.IDiagnosticsComponentProvider Unity.Services.Core.Internal.CoreDiagnostics::<DiagnosticsComponentProvider>k__BackingField
	RuntimeObject* ___U3CDiagnosticsComponentProviderU3Ek__BackingField_2;
	// Unity.Services.Core.Telemetry.Internal.IDiagnostics Unity.Services.Core.Internal.CoreDiagnostics::<Diagnostics>k__BackingField
	RuntimeObject* ___U3CDiagnosticsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CCoreTagsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1, ___U3CCoreTagsU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CCoreTagsU3Ek__BackingField_0() const { return ___U3CCoreTagsU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CCoreTagsU3Ek__BackingField_0() { return &___U3CCoreTagsU3Ek__BackingField_0; }
	inline void set_U3CCoreTagsU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CCoreTagsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCoreTagsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDiagnosticsComponentProviderU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1, ___U3CDiagnosticsComponentProviderU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CDiagnosticsComponentProviderU3Ek__BackingField_2() const { return ___U3CDiagnosticsComponentProviderU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CDiagnosticsComponentProviderU3Ek__BackingField_2() { return &___U3CDiagnosticsComponentProviderU3Ek__BackingField_2; }
	inline void set_U3CDiagnosticsComponentProviderU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CDiagnosticsComponentProviderU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDiagnosticsComponentProviderU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDiagnosticsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1, ___U3CDiagnosticsU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CDiagnosticsU3Ek__BackingField_3() const { return ___U3CDiagnosticsU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CDiagnosticsU3Ek__BackingField_3() { return &___U3CDiagnosticsU3Ek__BackingField_3; }
	inline void set_U3CDiagnosticsU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CDiagnosticsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDiagnosticsU3Ek__BackingField_3), (void*)value);
	}
};

struct CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1_StaticFields
{
public:
	// Unity.Services.Core.Internal.CoreDiagnostics Unity.Services.Core.Internal.CoreDiagnostics::<Instance>k__BackingField
	CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1 * ___U3CInstanceU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1_StaticFields, ___U3CInstanceU3Ek__BackingField_1)); }
	inline CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1 * get_U3CInstanceU3Ek__BackingField_1() const { return ___U3CInstanceU3Ek__BackingField_1; }
	inline CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1 ** get_address_of_U3CInstanceU3Ek__BackingField_1() { return &___U3CInstanceU3Ek__BackingField_1; }
	inline void set_U3CInstanceU3Ek__BackingField_1(CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1 * value)
	{
		___U3CInstanceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_1), (void*)value);
	}
};


// Unity.Services.Core.Internal.CoreMetrics
struct CoreMetrics_t0FED4B1619F67FDF1EA6F4C0397621CE1A003A86  : public RuntimeObject
{
public:
	// Unity.Services.Core.Telemetry.Internal.IMetrics Unity.Services.Core.Internal.CoreMetrics::<Metrics>k__BackingField
	RuntimeObject* ___U3CMetricsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMetricsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CoreMetrics_t0FED4B1619F67FDF1EA6F4C0397621CE1A003A86, ___U3CMetricsU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CMetricsU3Ek__BackingField_1() const { return ___U3CMetricsU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CMetricsU3Ek__BackingField_1() { return &___U3CMetricsU3Ek__BackingField_1; }
	inline void set_U3CMetricsU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CMetricsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMetricsU3Ek__BackingField_1), (void*)value);
	}
};

struct CoreMetrics_t0FED4B1619F67FDF1EA6F4C0397621CE1A003A86_StaticFields
{
public:
	// Unity.Services.Core.Internal.CoreMetrics Unity.Services.Core.Internal.CoreMetrics::<Instance>k__BackingField
	CoreMetrics_t0FED4B1619F67FDF1EA6F4C0397621CE1A003A86 * ___U3CInstanceU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CoreMetrics_t0FED4B1619F67FDF1EA6F4C0397621CE1A003A86_StaticFields, ___U3CInstanceU3Ek__BackingField_0)); }
	inline CoreMetrics_t0FED4B1619F67FDF1EA6F4C0397621CE1A003A86 * get_U3CInstanceU3Ek__BackingField_0() const { return ___U3CInstanceU3Ek__BackingField_0; }
	inline CoreMetrics_t0FED4B1619F67FDF1EA6F4C0397621CE1A003A86 ** get_address_of_U3CInstanceU3Ek__BackingField_0() { return &___U3CInstanceU3Ek__BackingField_0; }
	inline void set_U3CInstanceU3Ek__BackingField_0(CoreMetrics_t0FED4B1619F67FDF1EA6F4C0397621CE1A003A86 * value)
	{
		___U3CInstanceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_0), (void*)value);
	}
};


// Unity.Services.Core.Registration.CorePackageInitializer
struct CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509  : public RuntimeObject
{
public:
	// Unity.Services.Core.Scheduler.Internal.ActionScheduler Unity.Services.Core.Registration.CorePackageInitializer::<ActionScheduler>k__BackingField
	ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * ___U3CActionSchedulerU3Ek__BackingField_0;
	// Unity.Services.Core.Device.InstallationId Unity.Services.Core.Registration.CorePackageInitializer::<InstallationId>k__BackingField
	InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * ___U3CInstallationIdU3Ek__BackingField_1;
	// Unity.Services.Core.Configuration.ProjectConfiguration Unity.Services.Core.Registration.CorePackageInitializer::<ProjectConfig>k__BackingField
	ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * ___U3CProjectConfigU3Ek__BackingField_2;
	// Unity.Services.Core.Environments.Internal.Environments Unity.Services.Core.Registration.CorePackageInitializer::<Environments>k__BackingField
	Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * ___U3CEnvironmentsU3Ek__BackingField_3;
	// Unity.Services.Core.Configuration.Internal.ICloudProjectId Unity.Services.Core.Registration.CorePackageInitializer::<CloudProjectId>k__BackingField
	RuntimeObject* ___U3CCloudProjectIdU3Ek__BackingField_4;
	// Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory Unity.Services.Core.Registration.CorePackageInitializer::<DiagnosticsFactory>k__BackingField
	RuntimeObject* ___U3CDiagnosticsFactoryU3Ek__BackingField_5;
	// Unity.Services.Core.Telemetry.Internal.IMetricsFactory Unity.Services.Core.Registration.CorePackageInitializer::<MetricsFactory>k__BackingField
	RuntimeObject* ___U3CMetricsFactoryU3Ek__BackingField_6;
	// Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal Unity.Services.Core.Registration.CorePackageInitializer::<UnityThreadUtils>k__BackingField
	UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597 * ___U3CUnityThreadUtilsU3Ek__BackingField_7;
	// Unity.Services.Core.InitializationOptions Unity.Services.Core.Registration.CorePackageInitializer::m_CurrentInitializationOptions
	InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * ___m_CurrentInitializationOptions_8;

public:
	inline static int32_t get_offset_of_U3CActionSchedulerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509, ___U3CActionSchedulerU3Ek__BackingField_0)); }
	inline ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * get_U3CActionSchedulerU3Ek__BackingField_0() const { return ___U3CActionSchedulerU3Ek__BackingField_0; }
	inline ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F ** get_address_of_U3CActionSchedulerU3Ek__BackingField_0() { return &___U3CActionSchedulerU3Ek__BackingField_0; }
	inline void set_U3CActionSchedulerU3Ek__BackingField_0(ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * value)
	{
		___U3CActionSchedulerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActionSchedulerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInstallationIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509, ___U3CInstallationIdU3Ek__BackingField_1)); }
	inline InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * get_U3CInstallationIdU3Ek__BackingField_1() const { return ___U3CInstallationIdU3Ek__BackingField_1; }
	inline InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A ** get_address_of_U3CInstallationIdU3Ek__BackingField_1() { return &___U3CInstallationIdU3Ek__BackingField_1; }
	inline void set_U3CInstallationIdU3Ek__BackingField_1(InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * value)
	{
		___U3CInstallationIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstallationIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProjectConfigU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509, ___U3CProjectConfigU3Ek__BackingField_2)); }
	inline ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * get_U3CProjectConfigU3Ek__BackingField_2() const { return ___U3CProjectConfigU3Ek__BackingField_2; }
	inline ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 ** get_address_of_U3CProjectConfigU3Ek__BackingField_2() { return &___U3CProjectConfigU3Ek__BackingField_2; }
	inline void set_U3CProjectConfigU3Ek__BackingField_2(ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * value)
	{
		___U3CProjectConfigU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProjectConfigU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnvironmentsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509, ___U3CEnvironmentsU3Ek__BackingField_3)); }
	inline Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * get_U3CEnvironmentsU3Ek__BackingField_3() const { return ___U3CEnvironmentsU3Ek__BackingField_3; }
	inline Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 ** get_address_of_U3CEnvironmentsU3Ek__BackingField_3() { return &___U3CEnvironmentsU3Ek__BackingField_3; }
	inline void set_U3CEnvironmentsU3Ek__BackingField_3(Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * value)
	{
		___U3CEnvironmentsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEnvironmentsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCloudProjectIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509, ___U3CCloudProjectIdU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CCloudProjectIdU3Ek__BackingField_4() const { return ___U3CCloudProjectIdU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CCloudProjectIdU3Ek__BackingField_4() { return &___U3CCloudProjectIdU3Ek__BackingField_4; }
	inline void set_U3CCloudProjectIdU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CCloudProjectIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCloudProjectIdU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDiagnosticsFactoryU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509, ___U3CDiagnosticsFactoryU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CDiagnosticsFactoryU3Ek__BackingField_5() const { return ___U3CDiagnosticsFactoryU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CDiagnosticsFactoryU3Ek__BackingField_5() { return &___U3CDiagnosticsFactoryU3Ek__BackingField_5; }
	inline void set_U3CDiagnosticsFactoryU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CDiagnosticsFactoryU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDiagnosticsFactoryU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMetricsFactoryU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509, ___U3CMetricsFactoryU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CMetricsFactoryU3Ek__BackingField_6() const { return ___U3CMetricsFactoryU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CMetricsFactoryU3Ek__BackingField_6() { return &___U3CMetricsFactoryU3Ek__BackingField_6; }
	inline void set_U3CMetricsFactoryU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CMetricsFactoryU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMetricsFactoryU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUnityThreadUtilsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509, ___U3CUnityThreadUtilsU3Ek__BackingField_7)); }
	inline UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597 * get_U3CUnityThreadUtilsU3Ek__BackingField_7() const { return ___U3CUnityThreadUtilsU3Ek__BackingField_7; }
	inline UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597 ** get_address_of_U3CUnityThreadUtilsU3Ek__BackingField_7() { return &___U3CUnityThreadUtilsU3Ek__BackingField_7; }
	inline void set_U3CUnityThreadUtilsU3Ek__BackingField_7(UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597 * value)
	{
		___U3CUnityThreadUtilsU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnityThreadUtilsU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInitializationOptions_8() { return static_cast<int32_t>(offsetof(CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509, ___m_CurrentInitializationOptions_8)); }
	inline InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * get_m_CurrentInitializationOptions_8() const { return ___m_CurrentInitializationOptions_8; }
	inline InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 ** get_address_of_m_CurrentInitializationOptions_8() { return &___m_CurrentInitializationOptions_8; }
	inline void set_m_CurrentInitializationOptions_8(InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * value)
	{
		___m_CurrentInitializationOptions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInitializationOptions_8), (void*)value);
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


// Unity.Services.Core.Environments.Internal.Environments
struct Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8  : public RuntimeObject
{
public:
	// System.String Unity.Services.Core.Environments.Internal.Environments::<Current>k__BackingField
	String_t* ___U3CCurrentU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8, ___U3CCurrentU3Ek__BackingField_0)); }
	inline String_t* get_U3CCurrentU3Ek__BackingField_0() const { return ___U3CCurrentU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CCurrentU3Ek__BackingField_0() { return &___U3CCurrentU3Ek__BackingField_0; }
	inline void set_U3CCurrentU3Ek__BackingField_0(String_t* value)
	{
		___U3CCurrentU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentU3Ek__BackingField_0), (void*)value);
	}
};


// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Unity.Services.Core.InitializationOptions::<Values>k__BackingField
	RuntimeObject* ___U3CValuesU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CValuesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268, ___U3CValuesU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CValuesU3Ek__BackingField_0() const { return ___U3CValuesU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CValuesU3Ek__BackingField_0() { return &___U3CValuesU3Ek__BackingField_0; }
	inline void set_U3CValuesU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CValuesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValuesU3Ek__BackingField_0), (void*)value);
	}
};


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


// Unity.Services.Core.Configuration.ProjectConfiguration
struct ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05  : public RuntimeObject
{
public:
	// System.String Unity.Services.Core.Configuration.ProjectConfiguration::m_JsonCache
	String_t* ___m_JsonCache_0;
	// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry> Unity.Services.Core.Configuration.ProjectConfiguration::m_ConfigValues
	RuntimeObject* ___m_ConfigValues_1;

public:
	inline static int32_t get_offset_of_m_JsonCache_0() { return static_cast<int32_t>(offsetof(ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05, ___m_JsonCache_0)); }
	inline String_t* get_m_JsonCache_0() const { return ___m_JsonCache_0; }
	inline String_t** get_address_of_m_JsonCache_0() { return &___m_JsonCache_0; }
	inline void set_m_JsonCache_0(String_t* value)
	{
		___m_JsonCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_JsonCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConfigValues_1() { return static_cast<int32_t>(offsetof(ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05, ___m_ConfigValues_1)); }
	inline RuntimeObject* get_m_ConfigValues_1() const { return ___m_ConfigValues_1; }
	inline RuntimeObject** get_address_of_m_ConfigValues_1() { return &___m_ConfigValues_1; }
	inline void set_m_ConfigValues_1(RuntimeObject* value)
	{
		___m_ConfigValues_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConfigValues_1), (void*)value);
	}
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


// Unity.Services.Core.UnityServices
struct UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2  : public RuntimeObject
{
public:

public:
};

struct UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_StaticFields
{
public:
	// Unity.Services.Core.IUnityServices Unity.Services.Core.UnityServices::<Instance>k__BackingField
	RuntimeObject* ___U3CInstanceU3Ek__BackingField_0;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> Unity.Services.Core.UnityServices::<InstantiationCompletion>k__BackingField
	TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * ___U3CInstantiationCompletionU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_StaticFields, ___U3CInstanceU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CInstanceU3Ek__BackingField_0() const { return ___U3CInstanceU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CInstanceU3Ek__BackingField_0() { return &___U3CInstanceU3Ek__BackingField_0; }
	inline void set_U3CInstanceU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CInstanceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInstantiationCompletionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_StaticFields, ___U3CInstantiationCompletionU3Ek__BackingField_1)); }
	inline TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * get_U3CInstantiationCompletionU3Ek__BackingField_1() const { return ___U3CInstantiationCompletionU3Ek__BackingField_1; }
	inline TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 ** get_address_of_U3CInstantiationCompletionU3Ek__BackingField_1() { return &___U3CInstantiationCompletionU3Ek__BackingField_1; }
	inline void set_U3CInstantiationCompletionU3Ek__BackingField_1(TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * value)
	{
		___U3CInstantiationCompletionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstantiationCompletionU3Ek__BackingField_1), (void*)value);
	}
};


// Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal
struct UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597  : public RuntimeObject
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


// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.ProjectConfiguration>
struct TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605, ___m_task_0)); }
	inline Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51, ___m_task_0)); }
	inline Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
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


// Unity.Services.Core.Configuration.SerializableProjectConfiguration
struct SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B 
{
public:
	// System.String[] Unity.Services.Core.Configuration.SerializableProjectConfiguration::Keys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___Keys_0;
	// Unity.Services.Core.Configuration.ConfigurationEntry[] Unity.Services.Core.Configuration.SerializableProjectConfiguration::Values
	ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* ___Values_1;

public:
	inline static int32_t get_offset_of_Keys_0() { return static_cast<int32_t>(offsetof(SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B, ___Keys_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_Keys_0() const { return ___Keys_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_Keys_0() { return &___Keys_0; }
	inline void set_Keys_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___Keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Keys_0), (void*)value);
	}

	inline static int32_t get_offset_of_Values_1() { return static_cast<int32_t>(offsetof(SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B, ___Values_1)); }
	inline ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* get_Values_1() const { return ___Values_1; }
	inline ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8** get_address_of_Values_1() { return &___Values_1; }
	inline void set_Values_1(ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* value)
	{
		___Values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Values_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Services.Core.Configuration.SerializableProjectConfiguration
struct SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshaled_pinvoke
{
	char** ___Keys_0;
	ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* ___Values_1;
};
// Native definition for COM marshalling of Unity.Services.Core.Configuration.SerializableProjectConfiguration
struct SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshaled_com
{
	Il2CppChar** ___Keys_0;
	ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* ___Values_1;
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


// Unity.Services.Core.Registration.CorePackageInitializer/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4 
{
public:
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Registration.CorePackageInitializer/<>c__DisplayClass36_0::registry
	CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * ___registry_0;
	// Unity.Services.Core.Registration.CorePackageInitializer Unity.Services.Core.Registration.CorePackageInitializer/<>c__DisplayClass36_0::<>4__this
	CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_registry_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4, ___registry_0)); }
	inline CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * get_registry_0() const { return ___registry_0; }
	inline CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D ** get_address_of_registry_0() { return &___registry_0; }
	inline void set_registry_0(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * value)
	{
		___registry_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registry_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4, ___U3CU3E4__this_1)); }
	inline CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>
struct AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t766FB5BC182A614627D42726961515C6EC84A7EB * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634, ___m_task_2)); }
	inline Task_1_t766FB5BC182A614627D42726961515C6EC84A7EB * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t766FB5BC182A614627D42726961515C6EC84A7EB ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t766FB5BC182A614627D42726961515C6EC84A7EB * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t766FB5BC182A614627D42726961515C6EC84A7EB * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t766FB5BC182A614627D42726961515C6EC84A7EB * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t766FB5BC182A614627D42726961515C6EC84A7EB ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t766FB5BC182A614627D42726961515C6EC84A7EB * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_task_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>
struct AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902, ___m_task_2)); }
	inline Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B, ___m_task_2)); }
	inline Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>
struct AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F, ___m_task_2)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
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

// UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C 
{
public:
	// System.Type UnityEngine.LowLevel.PlayerLoopSystem::type
	Type_t * ___type_0;
	// UnityEngine.LowLevel.PlayerLoopSystem[] UnityEngine.LowLevel.PlayerLoopSystem::subSystemList
	PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* ___subSystemList_1;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction UnityEngine.LowLevel.PlayerLoopSystem::updateDelegate
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___updateDelegate_2;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::updateFunction
	intptr_t ___updateFunction_3;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::loopConditionFunction
	intptr_t ___loopConditionFunction_4;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_subSystemList_1() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___subSystemList_1)); }
	inline PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* get_subSystemList_1() const { return ___subSystemList_1; }
	inline PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17** get_address_of_subSystemList_1() { return &___subSystemList_1; }
	inline void set_subSystemList_1(PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* value)
	{
		___subSystemList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subSystemList_1), (void*)value);
	}

	inline static int32_t get_offset_of_updateDelegate_2() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___updateDelegate_2)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_updateDelegate_2() const { return ___updateDelegate_2; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_updateDelegate_2() { return &___updateDelegate_2; }
	inline void set_updateDelegate_2(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___updateDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_updateFunction_3() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___updateFunction_3)); }
	inline intptr_t get_updateFunction_3() const { return ___updateFunction_3; }
	inline intptr_t* get_address_of_updateFunction_3() { return &___updateFunction_3; }
	inline void set_updateFunction_3(intptr_t value)
	{
		___updateFunction_3 = value;
	}

	inline static int32_t get_offset_of_loopConditionFunction_4() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___loopConditionFunction_4)); }
	inline intptr_t get_loopConditionFunction_4() const { return ___loopConditionFunction_4; }
	inline intptr_t* get_address_of_loopConditionFunction_4() { return &___loopConditionFunction_4; }
	inline void set_loopConditionFunction_4(intptr_t value)
	{
		___loopConditionFunction_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_pinvoke
{
	Type_t * ___type_0;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_pinvoke* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
// Native definition for COM marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_com
{
	Type_t * ___type_0;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_com* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
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


// System.Threading.Tasks.Task`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>
struct Task_1_t766FB5BC182A614627D42726961515C6EC84A7EB  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t766FB5BC182A614627D42726961515C6EC84A7EB, ___m_result_40)); }
	inline RuntimeObject* get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t766FB5BC182A614627D42726961515C6EC84A7EB_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tEC1B7D7644A3EE3B96C40293B0FEB34665EFBCDC * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t8B0FC24E0A5C7C4C70E388A860972761AA4AA49A * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t766FB5BC182A614627D42726961515C6EC84A7EB_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tEC1B7D7644A3EE3B96C40293B0FEB34665EFBCDC * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tEC1B7D7644A3EE3B96C40293B0FEB34665EFBCDC ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tEC1B7D7644A3EE3B96C40293B0FEB34665EFBCDC * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t766FB5BC182A614627D42726961515C6EC84A7EB_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t8B0FC24E0A5C7C4C70E388A860972761AA4AA49A * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t8B0FC24E0A5C7C4C70E388A860972761AA4AA49A ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t8B0FC24E0A5C7C4C70E388A860972761AA4AA49A * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.ProjectConfiguration>
struct Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970, ___m_result_40)); }
	inline ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * get_m_result_40() const { return ___m_result_40; }
	inline ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tF02A2E2EF83EAC947A70576DD5BAD4F529134833 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tFF546E62E63CD94FE7706BDCF31625AEA5CC1ADC * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tF02A2E2EF83EAC947A70576DD5BAD4F529134833 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tF02A2E2EF83EAC947A70576DD5BAD4F529134833 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tF02A2E2EF83EAC947A70576DD5BAD4F529134833 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tFF546E62E63CD94FE7706BDCF31625AEA5CC1ADC * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tFF546E62E63CD94FE7706BDCF31625AEA5CC1ADC ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tFF546E62E63CD94FE7706BDCF31625AEA5CC1ADC * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7, ___m_result_40)); }
	inline SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  get_m_result_40() const { return ___m_result_40; }
	inline SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___Keys_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___Values_1), (void*)NULL);
		#endif
	}
};

struct Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9312EBAF258211D129B0A1E9E78AEA2E399B4AA0 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tB2A45BDF375D6CEC1A2B6D3427E10423DEBE5A89 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t9312EBAF258211D129B0A1E9E78AEA2E399B4AA0 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t9312EBAF258211D129B0A1E9E78AEA2E399B4AA0 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t9312EBAF258211D129B0A1E9E78AEA2E399B4AA0 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tB2A45BDF375D6CEC1A2B6D3427E10423DEBE5A89 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tB2A45BDF375D6CEC1A2B6D3427E10423DEBE5A89 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tB2A45BDF375D6CEC1A2B6D3427E10423DEBE5A89 * value)
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


// Unity.Services.Core.Scheduler.Internal.ActionScheduler
struct ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F  : public RuntimeObject
{
public:
	// Unity.Services.Core.Scheduler.Internal.ITimeProvider Unity.Services.Core.Scheduler.Internal.ActionScheduler::m_TimeProvider
	RuntimeObject* ___m_TimeProvider_0;
	// Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<Unity.Services.Core.Scheduler.Internal.ScheduledInvocation> Unity.Services.Core.Scheduler.Internal.ActionScheduler::m_ScheduledActions
	MinimumBinaryHeap_1_t07F8274BC6F3D2010AF30B915A00419B8E4E30F8 * ___m_ScheduledActions_1;
	// System.Collections.Generic.Dictionary`2<System.Int64,Unity.Services.Core.Scheduler.Internal.ScheduledInvocation> Unity.Services.Core.Scheduler.Internal.ActionScheduler::m_IdScheduledInvocationMap
	Dictionary_2_t1F100AE9A628A2AC06659E38AEB481514599EDFA * ___m_IdScheduledInvocationMap_2;
	// UnityEngine.LowLevel.PlayerLoopSystem Unity.Services.Core.Scheduler.Internal.ActionScheduler::SchedulerLoopSystem
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  ___SchedulerLoopSystem_3;
	// System.Int64 Unity.Services.Core.Scheduler.Internal.ActionScheduler::m_NextId
	int64_t ___m_NextId_4;

public:
	inline static int32_t get_offset_of_m_TimeProvider_0() { return static_cast<int32_t>(offsetof(ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F, ___m_TimeProvider_0)); }
	inline RuntimeObject* get_m_TimeProvider_0() const { return ___m_TimeProvider_0; }
	inline RuntimeObject** get_address_of_m_TimeProvider_0() { return &___m_TimeProvider_0; }
	inline void set_m_TimeProvider_0(RuntimeObject* value)
	{
		___m_TimeProvider_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TimeProvider_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScheduledActions_1() { return static_cast<int32_t>(offsetof(ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F, ___m_ScheduledActions_1)); }
	inline MinimumBinaryHeap_1_t07F8274BC6F3D2010AF30B915A00419B8E4E30F8 * get_m_ScheduledActions_1() const { return ___m_ScheduledActions_1; }
	inline MinimumBinaryHeap_1_t07F8274BC6F3D2010AF30B915A00419B8E4E30F8 ** get_address_of_m_ScheduledActions_1() { return &___m_ScheduledActions_1; }
	inline void set_m_ScheduledActions_1(MinimumBinaryHeap_1_t07F8274BC6F3D2010AF30B915A00419B8E4E30F8 * value)
	{
		___m_ScheduledActions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScheduledActions_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_IdScheduledInvocationMap_2() { return static_cast<int32_t>(offsetof(ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F, ___m_IdScheduledInvocationMap_2)); }
	inline Dictionary_2_t1F100AE9A628A2AC06659E38AEB481514599EDFA * get_m_IdScheduledInvocationMap_2() const { return ___m_IdScheduledInvocationMap_2; }
	inline Dictionary_2_t1F100AE9A628A2AC06659E38AEB481514599EDFA ** get_address_of_m_IdScheduledInvocationMap_2() { return &___m_IdScheduledInvocationMap_2; }
	inline void set_m_IdScheduledInvocationMap_2(Dictionary_2_t1F100AE9A628A2AC06659E38AEB481514599EDFA * value)
	{
		___m_IdScheduledInvocationMap_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_IdScheduledInvocationMap_2), (void*)value);
	}

	inline static int32_t get_offset_of_SchedulerLoopSystem_3() { return static_cast<int32_t>(offsetof(ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F, ___SchedulerLoopSystem_3)); }
	inline PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  get_SchedulerLoopSystem_3() const { return ___SchedulerLoopSystem_3; }
	inline PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * get_address_of_SchedulerLoopSystem_3() { return &___SchedulerLoopSystem_3; }
	inline void set_SchedulerLoopSystem_3(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  value)
	{
		___SchedulerLoopSystem_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___SchedulerLoopSystem_3))->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___SchedulerLoopSystem_3))->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___SchedulerLoopSystem_3))->___updateDelegate_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_NextId_4() { return static_cast<int32_t>(offsetof(ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F, ___m_NextId_4)); }
	inline int64_t get_m_NextId_4() const { return ___m_NextId_4; }
	inline int64_t* get_address_of_m_NextId_4() { return &___m_NextId_4; }
	inline void set_m_NextId_4(int64_t value)
	{
		___m_NextId_4 = value;
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

// Unity.Services.Core.ServicesInitializationException
struct ServicesInitializationException_tB29CA123886F164D3642AC2F2EFEEA32AE80A0C1  : public Exception_t
{
public:

public:
};


// Unity.Services.Core.Registration.CorePackageInitializer/<CreateDiagnosticsComponents>d__49
struct U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA 
{
public:
	// System.Int32 Unity.Services.Core.Registration.CorePackageInitializer/<CreateDiagnosticsComponents>d__49::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory> Unity.Services.Core.Registration.CorePackageInitializer/<CreateDiagnosticsComponents>d__49::<>t__builder
	AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634  ___U3CU3Et__builder_1;
	// Unity.Services.Core.Registration.CorePackageInitializer Unity.Services.Core.Registration.CorePackageInitializer/<CreateDiagnosticsComponents>d__49::<>4__this
	CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Unity.Services.Core.Registration.CorePackageInitializer/<CreateDiagnosticsComponents>d__49::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA, ___U3CU3E4__this_2)); }
	inline CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__42
struct U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0 
{
public:
	// System.Int32 Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__42::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__42::<>t__builder
	AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902  ___U3CU3Et__builder_1;
	// Unity.Services.Core.InitializationOptions Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__42::options
	InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * ___options_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__42::<>u__1
	TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_options_2() { return static_cast<int32_t>(offsetof(U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0, ___options_2)); }
	inline InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * get_options_2() const { return ___options_2; }
	inline InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 ** get_address_of_options_2() { return &___options_2; }
	inline void set_options_2(InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * value)
	{
		___options_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___options_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__43
struct U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91 
{
public:
	// System.Int32 Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__43::<>t__builder
	AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  ___U3CU3Et__builder_1;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__43::<>u__1
	TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  ___U3CU3Eu__1_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_2() { return static_cast<int32_t>(offsetof(U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91, ___U3CU3Eu__1_2)); }
	inline TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  get_U3CU3Eu__1_2() const { return ___U3CU3Eu__1_2; }
	inline TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * get_address_of_U3CU3Eu__1_2() { return &___U3CU3Eu__1_2; }
	inline void set_U3CU3Eu__1_2(TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  value)
	{
		___U3CU3Eu__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_2))->___m_task_0), (void*)NULL);
	}
};


// Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedProjectConfigurationAsync>d__51
struct U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637 
{
public:
	// System.Int32 Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedProjectConfigurationAsync>d__51::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedProjectConfigurationAsync>d__51::<>t__builder
	AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  ___U3CU3Et__builder_1;
	// Unity.Services.Core.Registration.CorePackageInitializer Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedProjectConfigurationAsync>d__51::<>4__this
	CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedProjectConfigurationAsync>d__51::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637, ___U3CU3E4__this_2)); }
	inline CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Unity.Services.Core.UnityProjectNotLinkedException
struct UnityProjectNotLinkedException_tED48C6E2C4C6EFA63FF04C62373A0576754F5F41  : public ServicesInitializationException_tB29CA123886F164D3642AC2F2EFEEA32AE80A0C1
{
public:

public:
};


// Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__36
struct U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A 
{
public:
	// System.Int32 Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__36::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__36::registry
	CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * ___registry_2;
	// Unity.Services.Core.Registration.CorePackageInitializer Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__36::<>4__this
	CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * ___U3CU3E4__this_3;
	// Unity.Services.Core.Registration.CorePackageInitializer/<>c__DisplayClass36_0 Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__36::<>8__1
	U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4  ___U3CU3E8__1_4;
	// System.Diagnostics.Stopwatch Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__36::<stopwatch>5__2
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___U3CstopwatchU3E5__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__36::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_registry_2() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A, ___registry_2)); }
	inline CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * get_registry_2() const { return ___registry_2; }
	inline CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D ** get_address_of_registry_2() { return &___registry_2; }
	inline void set_registry_2(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * value)
	{
		___registry_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registry_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A, ___U3CU3E4__this_3)); }
	inline CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E8__1_4() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A, ___U3CU3E8__1_4)); }
	inline U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4  get_U3CU3E8__1_4() const { return ___U3CU3E8__1_4; }
	inline U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4 * get_address_of_U3CU3E8__1_4() { return &___U3CU3E8__1_4; }
	inline void set_U3CU3E8__1_4(U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4  value)
	{
		___U3CU3E8__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E8__1_4))->___registry_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E8__1_4))->___U3CU3E4__this_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CstopwatchU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A, ___U3CstopwatchU3E5__2_5)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_U3CstopwatchU3E5__2_5() const { return ___U3CstopwatchU3E5__2_5; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_U3CstopwatchU3E5__2_5() { return &___U3CstopwatchU3E5__2_5; }
	inline void set_U3CstopwatchU3E5__2_5(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___U3CstopwatchU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstopwatchU3E5__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}
};


// Unity.Services.Core.Registration.CorePackageInitializer/<InitializeProjectConfigAsync>d__41
struct U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC 
{
public:
	// System.Int32 Unity.Services.Core.Registration.CorePackageInitializer/<InitializeProjectConfigAsync>d__41::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Core.Registration.CorePackageInitializer/<InitializeProjectConfigAsync>d__41::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Unity.Services.Core.Registration.CorePackageInitializer Unity.Services.Core.Registration.CorePackageInitializer/<InitializeProjectConfigAsync>d__41::<>4__this
	CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * ___U3CU3E4__this_2;
	// Unity.Services.Core.InitializationOptions Unity.Services.Core.Registration.CorePackageInitializer/<InitializeProjectConfigAsync>d__41::options
	InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * ___options_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.ProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer/<InitializeProjectConfigAsync>d__41::<>u__1
	TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC, ___U3CU3E4__this_2)); }
	inline CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_options_3() { return static_cast<int32_t>(offsetof(U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC, ___options_3)); }
	inline InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * get_options_3() const { return ___options_3; }
	inline InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 ** get_address_of_options_3() { return &___options_3; }
	inline void set_options_3(InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * value)
	{
		___options_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___options_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Unity.Services.Core.Configuration.ConfigurationEntry[]
struct ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * m_Items[1];

public:
	inline ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistry_RegisterPackage_TisRuntimeObject_m01248EDCB97C401EB2D7EEEC3EC471D8E5A4DF19_gshared (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject * ___package0, const RuntimeMethod* method);
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_ProvidesComponent_TisRuntimeObject_mFF019F101DC670F4855A0ACBCCDCAE0817385F6A_gshared (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__36>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A_mFE0D0D3CB390A37A9C91A1B11685637213B06BD4_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A * ___stateMachine0, const RuntimeMethod* method);
// System.Boolean Unity.Services.Core.Internal.DictionaryExtensions::ValueEquals<System.Object,System.Object>(System.Collections.Generic.IDictionary`2<!!0,!!1>,System.Collections.Generic.IDictionary`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryExtensions_ValueEquals_TisRuntimeObject_TisRuntimeObject_m03A992AFE75F2E8F639C4E65A4EE00F38886BFF8_gshared (RuntimeObject* ___x0, RuntimeObject* ___y1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Core.Registration.CorePackageInitializer/<InitializeProjectConfigAsync>d__41>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC_m3A5C777F2A59BF1AF9F9FA17017272533C601840_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC * ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020  AsyncTaskMethodBuilder_1_Create_m9A01E4B2FB83D8B9A71740D85F771F9A2E0DBAC9_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__42>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0_m40BB29DA53F08BA1E6E3F31CD751DD5BC4D187ED_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0 * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Start<Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__43>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91_mE94D1A6CD91085F5024256B206471D342365AC0F_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91 * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Unity.Services.Core.Registration.CorePackageInitializer/<CreateDiagnosticsComponents>d__49>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA_m03D6F8A11E4B69BCEBD5358C3DCBB34943290443_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedProjectConfigurationAsync>d__51>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637_m63AA98EB9E6C9A736C55AF0ABBA6F687CD08E8DE_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637 * ___stateMachine0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m0412E2BE82AB42ABBC2EEC663FDF2862BFE91E20_gshared (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject * ___component0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Core.Registration.CorePackageInitializer/<CreateDiagnosticsComponents>d__49>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA_mE11790EAA90A19CA5DD060F7925805C6F63CFC4E_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  Task_1_GetAwaiter_m2AB9DBB9386479EAC3AA62471E4849C7A114370D_gshared (Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mB2B7A24E436296C969845CFFFCFE1211C47CA490_gshared (TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>,Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__42>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0_m78FC318F8B7FD2A453076DA068DD92BFBFE29FD0_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * ___awaiter0, U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  TaskAwaiter_1_GetResult_mA7E2D0B6607A8EE6622C60C7A04F35226EA6A81D_gshared (TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>,Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__43>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91_m353462D728C090B5D4DE2F11D0923B3FBA2178E7_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * ___awaiter0, U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedProjectConfigurationAsync>d__51>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637_m097FD4B07CD91592B5B4C8CC82BAD00211D79F45_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__36>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A_m5776A712307CC1BD8971F53DB3BD76D6956F4AF1_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A * ___stateMachine1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Core.Registration.CorePackageInitializer/<InitializeProjectConfigAsync>d__41>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC_mE13EF77B093E67F8347A82C883BCBDB53FDBC24E_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);

// System.Void Unity.Services.Core.Registration.CorePackageInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer__ctor_m6FD7E4A9C9A9480A2A83B8C1B78469BD73560321 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method);
// Unity.Services.Core.Internal.CoreDiagnostics Unity.Services.Core.Internal.CoreDiagnostics::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1 * CoreDiagnostics_get_Instance_m5FADE3B31BC7B6B28C464704229B52FC7585DD49_inline (const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreDiagnostics::set_DiagnosticsComponentProvider(Unity.Services.Core.Telemetry.Internal.IDiagnosticsComponentProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreDiagnostics_set_DiagnosticsComponentProvider_m72853C4682C3703A7E87A086642E0FC5AC4161ED_inline (CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * CoreRegistry_get_Instance_m4D1C714218A28598060C670E87B7B59834A53510_inline (const RuntimeMethod* method);
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage<Unity.Services.Core.Registration.CorePackageInitializer>(!!0)
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistry_RegisterPackage_TisCorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509_m033CA8EDAE172CF6A681F4FE826DAE721C1E1221 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * ___package0, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 *, const RuntimeMethod*))CoreRegistry_RegisterPackage_TisRuntimeObject_m01248EDCB97C401EB2D7EEEC3EC471D8E5A4DF19_gshared)(__this, ___package0, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Core.Device.Internal.IInstallationId>()
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_ProvidesComponent_TisIInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863_mE82C349E67B8E7D3DFE3DA51A57E426B777073C1 (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mFF019F101DC670F4855A0ACBCCDCAE0817385F6A_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Core.Configuration.Internal.ICloudProjectId>()
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_ProvidesComponent_TisICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_m76D2E595D87EBED1FE73CBF606B5410FEA404519 (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mFF019F101DC670F4855A0ACBCCDCAE0817385F6A_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Core.Scheduler.Internal.IActionScheduler>()
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_ProvidesComponent_TisIActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_m0173ECD7581D6A19347FF30FC4904C4B9423F1E2 (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mFF019F101DC670F4855A0ACBCCDCAE0817385F6A_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Core.Environments.Internal.IEnvironments>()
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_ProvidesComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_mCBD558F9206C52CF394E4FBA97F4D58CD0DC90F5 (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mFF019F101DC670F4855A0ACBCCDCAE0817385F6A_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>()
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_ProvidesComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_m3A9515DC93CE2237B18EA784248D1CBB38A4E736 (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mFF019F101DC670F4855A0ACBCCDCAE0817385F6A_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Core.Telemetry.Internal.IMetricsFactory>()
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_ProvidesComponent_TisIMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_m42C9281EE05852AF26F1B6588EB6A183C1E21319 (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mFF019F101DC670F4855A0ACBCCDCAE0817385F6A_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>()
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_ProvidesComponent_TisIDiagnosticsFactory_tF98D72E5A724DFEBC2D6F913DFAC54AA9B0FB925_m732D9F1C0C731E7F77AA57503D24C2C824B124A8 (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mFF019F101DC670F4855A0ACBCCDCAE0817385F6A_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Core.Threading.Internal.IUnityThreadUtils>()
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_ProvidesComponent_TisIUnityThreadUtils_tBE7008D9FB34742ED07B210BDE6D7323242E0184_m31E5A91C781CD9540C71E2731BC77AAD659D907B (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mFF019F101DC670F4855A0ACBCCDCAE0817385F6A_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__36>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A_mFE0D0D3CB390A37A9C91A1B11685637213B06BD4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A_mFE0D0D3CB390A37A9C91A1B11685637213B06BD4_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Unity.Services.Core.InitializationOptions::get_Values()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InitializationOptions_get_Values_m7DCAFF9B9A7F5729B15CB4E3D2E128AD6328CC36_inline (InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * __this, const RuntimeMethod* method);
// Unity.Services.Core.IUnityServices Unity.Services.Core.UnityServices::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnityServices_get_Instance_m11D20930B5F8F7422CAE8104CF76AB99E8C9A1FC_inline (const RuntimeMethod* method);
// System.Boolean Unity.Services.Core.Internal.DictionaryExtensions::ValueEquals<System.String,System.Object>(System.Collections.Generic.IDictionary`2<!!0,!!1>,System.Collections.Generic.IDictionary`2<!!0,!!1>)
inline bool DictionaryExtensions_ValueEquals_TisString_t_TisRuntimeObject_m9E4EEFFE008AFB00920AF38EB43A70C773D63DD7 (RuntimeObject* ___x0, RuntimeObject* ___y1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))DictionaryExtensions_ValueEquals_TisRuntimeObject_TisRuntimeObject_m03A992AFE75F2E8F639C4E65A4EE00F38886BFF8_gshared)(___x0, ___y1, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::set_ProjectConfig(Unity.Services.Core.Configuration.ProjectConfiguration)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorePackageInitializer_set_ProjectConfig_mCD4190FAA401FBF5E71C9D4E8FD13D3738BF1B7C_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::set_Environments(Unity.Services.Core.Environments.Internal.Environments)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorePackageInitializer_set_Environments_mA823A9F2E7CEE7646985B374AA77F2CBF874DD88_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::set_DiagnosticsFactory(Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorePackageInitializer_set_DiagnosticsFactory_m18F48EBF3101844A2962BCCDA584EFC27CA7340A_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::set_MetricsFactory(Unity.Services.Core.Telemetry.Internal.IMetricsFactory)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorePackageInitializer_set_MetricsFactory_m7DC7C60AF556679EBE4C281A74A99902B50A5112_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// Unity.Services.Core.Device.InstallationId Unity.Services.Core.Registration.CorePackageInitializer::get_InstallationId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * CorePackageInitializer_get_InstallationId_m5059CE2D1A59301B9AC44CC759316855689B3833_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Device.InstallationId::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId__ctor_m639C8440CCFB01C47A91C4836EE10633AFACCB18 (InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Device.InstallationId::CreateIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId_CreateIdentifier_mBD7DDA32FAA6D3BC0DE7D6D214BE7E5DF5771069 (InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::set_InstallationId(Unity.Services.Core.Device.InstallationId)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorePackageInitializer_set_InstallationId_mFE19D1446597D946D90A7346E31A9F3EABC0733D_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * ___value0, const RuntimeMethod* method);
// Unity.Services.Core.Scheduler.Internal.ActionScheduler Unity.Services.Core.Registration.CorePackageInitializer::get_ActionScheduler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * CorePackageInitializer_get_ActionScheduler_m4758B38AE54D269CE99429370DF7137BA2480246_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionScheduler__ctor_mC8BA8182CF542DD52F483013A225109AE31C3C69 (ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::JoinPlayerLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionScheduler_JoinPlayerLoopSystem_m9B613FA4B93AFD4C9C32AF4B691DC8B7C1178F85 (ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::set_ActionScheduler(Unity.Services.Core.Scheduler.Internal.ActionScheduler)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorePackageInitializer_set_ActionScheduler_m78AD45D13678079223AFBB53777BFEF7293CE89E_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Core.Registration.CorePackageInitializer/<InitializeProjectConfigAsync>d__41>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC_m3A5C777F2A59BF1AF9F9FA17017272533C601840 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC_m3A5C777F2A59BF1AF9F9FA17017272533C601840_gshared)(__this, ___stateMachine0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>::Create()
inline AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902  AsyncTaskMethodBuilder_1_Create_m4F7B791295F539A76BEBFA847C3F92E50F687068 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m9A01E4B2FB83D8B9A71740D85F771F9A2E0DBAC9_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>::Start<Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__42>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0_mEA404BBD30E0C3EC56F2B5E527E86087A97FECA9 (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * __this, U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *, U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0_m40BB29DA53F08BA1E6E3F31CD751DD5BC4D187ED_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>::get_Task()
inline Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * AsyncTaskMethodBuilder_1_get_Task_m314E168DEA287E26E8DB822BE40015F2C9B8796E (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * (*) (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Create()
inline AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Start<Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__43>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91_mE94D1A6CD91085F5024256B206471D342365AC0F (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91_mE94D1A6CD91085F5024256B206471D342365AC0F_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::get_Task()
inline Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9 (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9_gshared)(__this, method);
}
// Unity.Services.Core.Environments.Internal.Environments Unity.Services.Core.Registration.CorePackageInitializer::get_Environments()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * CorePackageInitializer_get_Environments_m4F23E5BF06513D5166C56A2C3D8940340347E183_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Environments.Internal.Environments::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Environments__ctor_m4F4F1D14D9A5DEBB9515765DE741DCA3687A7E32 (Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Environments.Internal.Environments::set_Current(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Environments_set_Current_m2B00B2071BC0C9CFBE4FF9BA3EF09134226EFC0A_inline (Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * __this, String_t* ___value0, const RuntimeMethod* method);
// Unity.Services.Core.Configuration.Internal.ICloudProjectId Unity.Services.Core.Registration.CorePackageInitializer::get_CloudProjectId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CorePackageInitializer_get_CloudProjectId_mA332178748DF23B577F3E134DC49381C143CAE04_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Configuration.CloudProjectId::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudProjectId__ctor_m78F6E314F7DD32F391CEE187C9812C61FC6FDFB8 (CloudProjectId_t8E2E58D767B7ABA77BEE1AA58804E5315DD10BD5 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::set_CloudProjectId(Unity.Services.Core.Configuration.Internal.ICloudProjectId)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorePackageInitializer_set_CloudProjectId_mE130EA97525A9E516B6D436B4AE845161C884896_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory Unity.Services.Core.Registration.CorePackageInitializer::get_DiagnosticsFactory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CorePackageInitializer_get_DiagnosticsFactory_mF83FABF14E704D010FBC51A2058C3ACB04D460D4_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method);
// Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory Unity.Services.Core.Telemetry.Internal.TelemetryUtils::CreateDiagnosticsFactory(Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Configuration.Internal.IProjectConfiguration,Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TelemetryUtils_CreateDiagnosticsFactory_m6DD7BFC1BEAE34DACEEB0CA937E69FB7D1EE2E5D (RuntimeObject* ___scheduler0, RuntimeObject* ___projectConfiguration1, RuntimeObject* ___cloudProjectId2, RuntimeObject* ___environments3, const RuntimeMethod* method);
// Unity.Services.Core.Telemetry.Internal.IMetricsFactory Unity.Services.Core.Registration.CorePackageInitializer::get_MetricsFactory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CorePackageInitializer_get_MetricsFactory_mA68F4292AC0765327ED53741A7B5879D77376F8C_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method);
// Unity.Services.Core.Telemetry.Internal.IMetricsFactory Unity.Services.Core.Telemetry.Internal.TelemetryUtils::CreateMetricsFactory(Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Configuration.Internal.IProjectConfiguration,Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TelemetryUtils_CreateMetricsFactory_m521C5190A1AC572B6A662805F88F1018044DCAD9 (RuntimeObject* ___scheduler0, RuntimeObject* ___projectConfiguration1, RuntimeObject* ___cloudProjectId2, RuntimeObject* ___environments3, const RuntimeMethod* method);
// Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal Unity.Services.Core.Registration.CorePackageInitializer::get_UnityThreadUtils()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597 * CorePackageInitializer_get_UnityThreadUtils_mFCB9401F9A8AC81376915CB92C7DA23773178E94_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThreadUtilsInternal__ctor_m216CC23D034239A75D09B887B3823F536E611067 (UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::set_UnityThreadUtils(Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorePackageInitializer_set_UnityThreadUtils_m42214246BD985C5E2E4A7241BE3A03CC4CE8EA51_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597 * ___value0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>::Create()
inline AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634  AsyncTaskMethodBuilder_1_Create_m86223E02937F1121450BC612BFF7F83FEF2CDC40 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m9A01E4B2FB83D8B9A71740D85F771F9A2E0DBAC9_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>::Start<Unity.Services.Core.Registration.CorePackageInitializer/<CreateDiagnosticsComponents>d__49>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA_mF4713E912F6C8FE48AE638C6D7A2B61BBE42E592 (AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 * __this, U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 *, U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA_m03D6F8A11E4B69BCEBD5358C3DCBB34943290443_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>::get_Task()
inline Task_1_t766FB5BC182A614627D42726961515C6EC84A7EB * AsyncTaskMethodBuilder_1_get_Task_m6BCA2201160B4615D4685D49220FA4C5A095E19D (AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t766FB5BC182A614627D42726961515C6EC84A7EB * (*) (AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Create()
inline AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  AsyncTaskMethodBuilder_1_Create_m89E946627D100E2FB4035599C40DA130BAB3F97F (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m9A01E4B2FB83D8B9A71740D85F771F9A2E0DBAC9_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Start<Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedProjectConfigurationAsync>d__51>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637_m1D39F4CC11861A0265DAAD4E5D1802DF72AC41EB (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637_m63AA98EB9E6C9A736C55AF0ABBA6F687CD08E8DE_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::get_Task()
inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * AsyncTaskMethodBuilder_1_get_Task_mCB63CB31B1603243888A985C348A8E14CECF91D1 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Core.Device.Internal.IInstallationId>(!!0)
inline void CoreRegistry_RegisterServiceComponent_TisIInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863_m09818CDD4EB3088FA6858977564CCFA3E3A1AAFC (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m0412E2BE82AB42ABBC2EEC663FDF2862BFE91E20_gshared)(__this, ___component0, method);
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Core.Scheduler.Internal.IActionScheduler>(!!0)
inline void CoreRegistry_RegisterServiceComponent_TisIActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_m0E38D5762147E12F8154F8A183F7174171825283 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m0412E2BE82AB42ABBC2EEC663FDF2862BFE91E20_gshared)(__this, ___component0, method);
}
// Unity.Services.Core.Configuration.ProjectConfiguration Unity.Services.Core.Registration.CorePackageInitializer::get_ProjectConfig()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * CorePackageInitializer_get_ProjectConfig_m1D6F9A307B95B3841474662814A0EFB0E5074C54_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>(!!0)
inline void CoreRegistry_RegisterServiceComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_mD24F68CA4EA3D8D1478B3062B0F80E59A8E5AD49 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m0412E2BE82AB42ABBC2EEC663FDF2862BFE91E20_gshared)(__this, ___component0, method);
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Core.Environments.Internal.IEnvironments>(!!0)
inline void CoreRegistry_RegisterServiceComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_m90548EA5C344424AA6AC9C528A818CAA9E906207 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m0412E2BE82AB42ABBC2EEC663FDF2862BFE91E20_gshared)(__this, ___component0, method);
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Core.Configuration.Internal.ICloudProjectId>(!!0)
inline void CoreRegistry_RegisterServiceComponent_TisICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_m57BC8E6FBF190F2E36A4100700916552A22BF1D8 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m0412E2BE82AB42ABBC2EEC663FDF2862BFE91E20_gshared)(__this, ___component0, method);
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>(!!0)
inline void CoreRegistry_RegisterServiceComponent_TisIDiagnosticsFactory_tF98D72E5A724DFEBC2D6F913DFAC54AA9B0FB925_m174669867C0F1942642A5CD5109A39C8CEE2FD03 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m0412E2BE82AB42ABBC2EEC663FDF2862BFE91E20_gshared)(__this, ___component0, method);
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Core.Telemetry.Internal.IMetricsFactory>(!!0)
inline void CoreRegistry_RegisterServiceComponent_TisIMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_mD2C24941571BF9B538B930516BC02542B21F8280 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m0412E2BE82AB42ABBC2EEC663FDF2862BFE91E20_gshared)(__this, ___component0, method);
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Core.Threading.Internal.IUnityThreadUtils>(!!0)
inline void CoreRegistry_RegisterServiceComponent_TisIUnityThreadUtils_tBE7008D9FB34742ED07B210BDE6D7323242E0184_m13AD3E6BAF8F6BCFB110A57F829BCD44CCDFECD4 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m0412E2BE82AB42ABBC2EEC663FDF2862BFE91E20_gshared)(__this, ___component0, method);
}
// System.Boolean Unity.Services.Core.Registration.CorePackageInitializer::HaveInitOptionsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CorePackageInitializer_HaveInitOptionsChanged_m072121668148BF472F3F754D53AB487A0A6662E9 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::FreeOptionsDependantComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_FreeOptionsDependantComponents_m12C03EB40829FA386D63705B08341C651268622F (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::InitializeActionScheduler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_InitializeActionScheduler_m87491450D79BF92EED2D3A86C1FBBCB358B0E1A4 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task Unity.Services.Core.Registration.CorePackageInitializer::InitializeProjectConfigAsync(Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * CorePackageInitializer_InitializeProjectConfigAsync_m7A0AF91B28AC503A93A5D0D5A2523228E079D136 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * ___options0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Core.Registration.CorePackageInitializer/<CreateDiagnosticsComponents>d__49>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA_m1B1D3FBD46022897D163F50A6C12BB215702C00B (AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA_mE11790EAA90A19CA5DD060F7925805C6F63CFC4E_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::InitializeEnvironments(Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_InitializeEnvironments_m1D92F66DC59BC39861D0BCD7AA14C3D5572F38ED (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, RuntimeObject* ___projectConfiguration0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::InitializeCloudProjectId(Unity.Services.Core.Configuration.Internal.ICloudProjectId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_InitializeCloudProjectId_mCB61546B08DAC3D6DDC3B3C66078E6F544549910 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, RuntimeObject* ___cloudProjectId0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::InitializeDiagnostics(Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Configuration.Internal.IProjectConfiguration,Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_InitializeDiagnostics_mAADE187ADB889EAA69D7DB5DA923A2A5B0815545 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, RuntimeObject* ___scheduler0, RuntimeObject* ___projectConfiguration1, RuntimeObject* ___cloudProjectId2, RuntimeObject* ___environments3, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m6703ECD56D68EBBA4EAA53CE4939BD69329F3BEB (AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mB05E78DC3861C92C8FDE19ECB8A91FD9FE8643FD (AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<CreateDiagnosticsComponents>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateDiagnosticsComponentsU3Ed__49_MoveNext_mBABA321ABAFD6AC90AF5371D934210E1B59A1C04 (U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mC233711FA07BF6E99A5EEAB691ED4F81DE206955 (AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<CreateDiagnosticsComponents>d__49::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateDiagnosticsComponentsU3Ed__49_SetStateMachine_m655D8A07DBD4CAF276A66AE367206426FF7513A5 (U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer::GetSerializedConfigOrEmptyAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * CorePackageInitializer_GetSerializedConfigOrEmptyAsync_mB1590D8A5D759EF7CDC74CF0FB60CC2CAFB61DD5 (const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::GetAwaiter()
inline TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  Task_1_GetAwaiter_m2AB9DBB9386479EAC3AA62471E4849C7A114370D (Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  (*) (Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 *, const RuntimeMethod*))Task_1_GetAwaiter_m2AB9DBB9386479EAC3AA62471E4849C7A114370D_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mB2B7A24E436296C969845CFFFCFE1211C47CA490 (TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mB2B7A24E436296C969845CFFFCFE1211C47CA490_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>,Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__42>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0_m4845974DD3BB142DD88DA30FAC1C43DB7712F480 (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * __this, TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * ___awaiter0, U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *, TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 *, U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0_m78FC318F8B7FD2A453076DA068DD92BFBFE29FD0_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::GetResult()
inline SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  TaskAwaiter_1_GetResult_mA7E2D0B6607A8EE6622C60C7A04F35226EA6A81D (TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * __this, const RuntimeMethod* method)
{
	return ((  SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  (*) (TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA7E2D0B6607A8EE6622C60C7A04F35226EA6A81D_gshared)(__this, method);
}
// Unity.Services.Core.Configuration.SerializableProjectConfiguration Unity.Services.Core.Configuration.SerializableProjectConfiguration::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  SerializableProjectConfiguration_get_Empty_m82FCFB758A9B72A0A875F64C007D32B9BE207BDA (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mE3D8C5059BE2B615AF01FEDA06DBED90B82F588A (Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared)(__this, ___capacity0, method);
}
// System.Void Unity.Services.Core.Configuration.ConfigurationCollectionHelper::FillWith(System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,Unity.Services.Core.Configuration.SerializableProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationCollectionHelper_FillWith_m5108DA7E7876453FEE4E030AD578C513313446CB (RuntimeObject* ___self0, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  ___config1, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Configuration.ConfigurationCollectionHelper::FillWith(System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationCollectionHelper_FillWith_m36219B38089B98238B7FB691ABF4754AB31CA170 (RuntimeObject* ___self0, InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * ___options1, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Configuration.ProjectConfiguration::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectConfiguration__ctor_mBB5C171248A27521B6D6554F718A5F3726D43FD5 (ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * __this, RuntimeObject* ___configValues0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mE4BF6DEA7B8FEC712C70899EF6EE058748C3C9CF (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m01A9A9B52C92A94DC0452D1A40FA43369DE5CC2C (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * __this, ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *, ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__42::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateProjectConfigurationAsyncU3Ed__42_MoveNext_mA475C1D5B7FB335AC21BFD3ECA208FF6443583AB (U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m13775651404DF63FC11AE1A12A73BD02B9D5F0FE (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__42::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateProjectConfigurationAsyncU3Ed__42_SetStateMachine_mD67355C2A1302356EB9DCCBCDAC954C76B96CF08 (U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// Unity.Services.Core.Configuration.IConfigurationLoader Unity.Services.Core.Configuration.ConfigurationUtils::get_ConfigurationLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConfigurationUtils_get_ConfigurationLoader_m43E1A55F93B27A5203B0E706C204FDB315E15A91_inline (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>,Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__43>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91_m353462D728C090B5D4DE2F11D0923B3FBA2178E7 (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * ___awaiter0, U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 *, U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91_m353462D728C090B5D4DE2F11D0923B3FBA2178E7_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreLogger::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_LogError_m83F82BBCC1AA3D9B4D8DEC69C0C3F0FB6546CCB4 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259 (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59 (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B , const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59_gshared)(__this, ___result0, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_MoveNext_m9EA9677159F079F7EF38EC1258EEBB0D827B3AA3 (U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF_gshared)(__this, ___stateMachine0, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__43::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_SetStateMachine_m70A42749475EA0C953F4A7E2D6D2B3C65A3EACD3 (U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedProjectConfigurationAsync>d__51>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637_mE383CDF97E7A4B36A27017BFA333D70422C1E4F5 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637_m097FD4B07CD91592B5B4C8CC82BAD00211D79F45_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.String Unity.Services.Core.Configuration.ProjectConfiguration::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProjectConfiguration_ToJson_m62245E46D1F69725650608FD1ED7020A680A534B (ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, String_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedProjectConfigurationAsync>d__51::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSerializedProjectConfigurationAsyncU3Ed__51_MoveNext_m736AC0D78CCC9AB7799D8B7C6EC2E61E15829215 (U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedProjectConfigurationAsync>d__51::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSerializedProjectConfigurationAsyncU3Ed__51_SetStateMachine_mE02C00F537BCFCCA42748E286046C5AE8181D3A0 (U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::InitializeInstallationId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_InitializeInstallationId_m6210CB8113D6EAEC95C67EACEFE17DD12E68D69D (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__36>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A_m5776A712307CC1BD8971F53DB3BD76D6956F4AF1 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A_m5776A712307CC1BD8971F53DB3BD76D6956F4AF1_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.UnityProjectNotLinkedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityProjectNotLinkedException__ctor_mB6BA37284E3E8A8072E47D33DC55639AA1358839 (UnityProjectNotLinkedException_tED48C6E2C4C6EFA63FF04C62373A0576754F5F41 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreDiagnostics::SendCorePackageInitDiagnostics(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreDiagnostics_SendCorePackageInitDiagnostics_m0063670A7739D05648CFEE12DC77BF463BC8CD18 (CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreDiagnostics::set_Diagnostics(Unity.Services.Core.Telemetry.Internal.IDiagnostics)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreDiagnostics_set_Diagnostics_m9B13432D99E18654995F83F275BD7C174519B666_inline (CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreDiagnostics::SetProjectConfiguration(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreDiagnostics_SetProjectConfiguration_mA06CB0D0F46075B3528B519C0788E39067322980 (CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1 * __this, String_t* ___serializedProjectConfig0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::InitializeMetrics(Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Configuration.Internal.IProjectConfiguration,Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_InitializeMetrics_mD1DE2A3960B9341DADC21C3EE63D62FC3C6C282F (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, RuntimeObject* ___scheduler0, RuntimeObject* ___projectConfiguration1, RuntimeObject* ___cloudProjectId2, RuntimeObject* ___environments3, const RuntimeMethod* method);
// Unity.Services.Core.Internal.CoreMetrics Unity.Services.Core.Internal.CoreMetrics::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreMetrics_t0FED4B1619F67FDF1EA6F4C0397621CE1A003A86 * CoreMetrics_get_Instance_m2661D3F4CAAD92AE1D06FC20732A3EF2EB4127FB_inline (const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreMetrics::set_Metrics(Unity.Services.Core.Telemetry.Internal.IMetrics)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreMetrics_set_Metrics_mB8FB2FB1C78AF34B5D3B4B1D1B81B7610B01B5A5_inline (CoreMetrics_t0FED4B1619F67FDF1EA6F4C0397621CE1A003A86 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::InitializeUnityThreadUtils()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_InitializeUnityThreadUtils_m61D8E258F509692B23FACA5DC4D9DBAE5533AF8B (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::<Initialize>g__RegisterProvidedComponents|36_0(Unity.Services.Core.Registration.CorePackageInitializer/<>c__DisplayClass36_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_U3CInitializeU3Eg__RegisterProvidedComponentsU7C36_0_mF5B3268EE5FB64FA7CA8F6D719810C7DFDEC660D (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4 * p0, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreMetrics::SendCorePackageInitTimeMetric(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreMetrics_SendCorePackageInitTimeMetric_mD253E7A4D3F8FA91A35C3BBB1F0BECA6B2F38F74 (CoreMetrics_t0FED4B1619F67FDF1EA6F4C0397621CE1A003A86 * __this, double ___initTimeSeconds0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__36_MoveNext_m2A2114D24D64F0E50E9EA8EE34C3234FE8034015 (U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__36::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__36_SetStateMachine_m85EAA67A1B51607981069F3DA4BE54529D6C39E9 (U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.ProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer::GenerateProjectConfigurationAsync(Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * CorePackageInitializer_GenerateProjectConfigurationAsync_mF7DFC238E2245114C5615E652D55DE5FF2FFB551 (InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * ___options0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.ProjectConfiguration>::GetAwaiter()
inline TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605  Task_1_GetAwaiter_mC143DF70EA2F518DA4A94EB7ABB59A0803048822 (Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605  (*) (Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.ProjectConfiguration>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m1D7A8FF71FC1DAF857EA76E26E9B007F5BCF3F23 (TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.ProjectConfiguration>,Unity.Services.Core.Registration.CorePackageInitializer/<InitializeProjectConfigAsync>d__41>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605_TisU3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC_m3801EA809296C1267C45600AEEA65B4F991F3BC6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 * ___awaiter0, U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 *, U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC_mE13EF77B093E67F8347A82C883BCBDB53FDBC24E_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.ProjectConfiguration>::GetResult()
inline ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * TaskAwaiter_1_GetResult_m017A6EFA80A22876E2FD0C0A021182CFE0DA1DDE (TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 * __this, const RuntimeMethod* method)
{
	return ((  ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * (*) (TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void Unity.Services.Core.InitializationOptions::.ctor(Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationOptions__ctor_m6C51779CA7C6FABAC13ACBB5DEA7B1BD27C7C2A8 (InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * __this, InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * ___source0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<InitializeProjectConfigAsync>d__41::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeProjectConfigAsyncU3Ed__41_MoveNext_m5069E4A81B616F28D2132F3508FBEB4D6A7FD156 (U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<InitializeProjectConfigAsync>d__41::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeProjectConfigAsyncU3Ed__41_SetStateMachine_m8EBF038E14F81176BA4A90399506E32C263FCE1B (U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
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
// Unity.Services.Core.Scheduler.Internal.ActionScheduler Unity.Services.Core.Registration.CorePackageInitializer::get_ActionScheduler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * CorePackageInitializer_get_ActionScheduler_m4758B38AE54D269CE99429370DF7137BA2480246 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	{
		// internal ActionScheduler ActionScheduler { get; private set; }
		ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * L_0 = __this->get_U3CActionSchedulerU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::set_ActionScheduler(Unity.Services.Core.Scheduler.Internal.ActionScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_set_ActionScheduler_m78AD45D13678079223AFBB53777BFEF7293CE89E (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * ___value0, const RuntimeMethod* method)
{
	{
		// internal ActionScheduler ActionScheduler { get; private set; }
		ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * L_0 = ___value0;
		__this->set_U3CActionSchedulerU3Ek__BackingField_0(L_0);
		return;
	}
}
// Unity.Services.Core.Device.InstallationId Unity.Services.Core.Registration.CorePackageInitializer::get_InstallationId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * CorePackageInitializer_get_InstallationId_m5059CE2D1A59301B9AC44CC759316855689B3833 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	{
		// internal InstallationId InstallationId { get; private set; }
		InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * L_0 = __this->get_U3CInstallationIdU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::set_InstallationId(Unity.Services.Core.Device.InstallationId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_set_InstallationId_mFE19D1446597D946D90A7346E31A9F3EABC0733D (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * ___value0, const RuntimeMethod* method)
{
	{
		// internal InstallationId InstallationId { get; private set; }
		InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * L_0 = ___value0;
		__this->set_U3CInstallationIdU3Ek__BackingField_1(L_0);
		return;
	}
}
// Unity.Services.Core.Configuration.ProjectConfiguration Unity.Services.Core.Registration.CorePackageInitializer::get_ProjectConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * CorePackageInitializer_get_ProjectConfig_m1D6F9A307B95B3841474662814A0EFB0E5074C54 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	{
		// internal ProjectConfiguration ProjectConfig { get; private set; }
		ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_0 = __this->get_U3CProjectConfigU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::set_ProjectConfig(Unity.Services.Core.Configuration.ProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_set_ProjectConfig_mCD4190FAA401FBF5E71C9D4E8FD13D3738BF1B7C (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * ___value0, const RuntimeMethod* method)
{
	{
		// internal ProjectConfiguration ProjectConfig { get; private set; }
		ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_0 = ___value0;
		__this->set_U3CProjectConfigU3Ek__BackingField_2(L_0);
		return;
	}
}
// Unity.Services.Core.Environments.Internal.Environments Unity.Services.Core.Registration.CorePackageInitializer::get_Environments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * CorePackageInitializer_get_Environments_m4F23E5BF06513D5166C56A2C3D8940340347E183 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	{
		// internal Environments.Internal.Environments Environments { get; private set; }
		Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * L_0 = __this->get_U3CEnvironmentsU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::set_Environments(Unity.Services.Core.Environments.Internal.Environments)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_set_Environments_mA823A9F2E7CEE7646985B374AA77F2CBF874DD88 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * ___value0, const RuntimeMethod* method)
{
	{
		// internal Environments.Internal.Environments Environments { get; private set; }
		Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * L_0 = ___value0;
		__this->set_U3CEnvironmentsU3Ek__BackingField_3(L_0);
		return;
	}
}
// Unity.Services.Core.Configuration.Internal.ICloudProjectId Unity.Services.Core.Registration.CorePackageInitializer::get_CloudProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CorePackageInitializer_get_CloudProjectId_mA332178748DF23B577F3E134DC49381C143CAE04 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	{
		// internal ICloudProjectId CloudProjectId { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CCloudProjectIdU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::set_CloudProjectId(Unity.Services.Core.Configuration.Internal.ICloudProjectId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_set_CloudProjectId_mE130EA97525A9E516B6D436B4AE845161C884896 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// internal ICloudProjectId CloudProjectId { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CCloudProjectIdU3Ek__BackingField_4(L_0);
		return;
	}
}
// Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory Unity.Services.Core.Registration.CorePackageInitializer::get_DiagnosticsFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CorePackageInitializer_get_DiagnosticsFactory_mF83FABF14E704D010FBC51A2058C3ACB04D460D4 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	{
		// internal IDiagnosticsFactory DiagnosticsFactory { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CDiagnosticsFactoryU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::set_DiagnosticsFactory(Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_set_DiagnosticsFactory_m18F48EBF3101844A2962BCCDA584EFC27CA7340A (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// internal IDiagnosticsFactory DiagnosticsFactory { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CDiagnosticsFactoryU3Ek__BackingField_5(L_0);
		return;
	}
}
// Unity.Services.Core.Telemetry.Internal.IMetricsFactory Unity.Services.Core.Registration.CorePackageInitializer::get_MetricsFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CorePackageInitializer_get_MetricsFactory_mA68F4292AC0765327ED53741A7B5879D77376F8C (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	{
		// internal IMetricsFactory MetricsFactory { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CMetricsFactoryU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::set_MetricsFactory(Unity.Services.Core.Telemetry.Internal.IMetricsFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_set_MetricsFactory_m7DC7C60AF556679EBE4C281A74A99902B50A5112 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// internal IMetricsFactory MetricsFactory { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CMetricsFactoryU3Ek__BackingField_6(L_0);
		return;
	}
}
// Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal Unity.Services.Core.Registration.CorePackageInitializer::get_UnityThreadUtils()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597 * CorePackageInitializer_get_UnityThreadUtils_mFCB9401F9A8AC81376915CB92C7DA23773178E94 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	{
		// internal UnityThreadUtilsInternal UnityThreadUtils { get; private set; }
		UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597 * L_0 = __this->get_U3CUnityThreadUtilsU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::set_UnityThreadUtils(Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_set_UnityThreadUtils_m42214246BD985C5E2E4A7241BE3A03CC4CE8EA51 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597 * ___value0, const RuntimeMethod* method)
{
	{
		// internal UnityThreadUtilsInternal UnityThreadUtils { get; private set; }
		UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597 * L_0 = ___value0;
		__this->set_U3CUnityThreadUtilsU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_Register_mCFD2E04BF259466377AF85D3E55E3B90FD9BFF0E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_m0173ECD7581D6A19347FF30FC4904C4B9423F1E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_m76D2E595D87EBED1FE73CBF606B5410FEA404519_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIDiagnosticsFactory_tF98D72E5A724DFEBC2D6F913DFAC54AA9B0FB925_m732D9F1C0C731E7F77AA57503D24C2C824B124A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_mCBD558F9206C52CF394E4FBA97F4D58CD0DC90F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863_mE82C349E67B8E7D3DFE3DA51A57E426B777073C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_m42C9281EE05852AF26F1B6588EB6A183C1E21319_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_m3A9515DC93CE2237B18EA784248D1CBB38A4E736_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIUnityThreadUtils_tBE7008D9FB34742ED07B210BDE6D7323242E0184_m31E5A91C781CD9540C71E2731BC77AAD659D907B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterPackage_TisCorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509_m033CA8EDAE172CF6A681F4FE826DAE721C1E1221_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * V_0 = NULL;
	CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var corePackageInitializer = new CorePackageInitializer();
		CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_0 = (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 *)il2cpp_codegen_object_new(CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509_il2cpp_TypeInfo_var);
		CorePackageInitializer__ctor_m6FD7E4A9C9A9480A2A83B8C1B78469BD73560321(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// CoreDiagnostics.Instance.DiagnosticsComponentProvider = corePackageInitializer;
		CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1 * L_1;
		L_1 = CoreDiagnostics_get_Instance_m5FADE3B31BC7B6B28C464704229B52FC7585DD49_inline(/*hidden argument*/NULL);
		CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_2 = V_0;
		NullCheck(L_1);
		CoreDiagnostics_set_DiagnosticsComponentProvider_m72853C4682C3703A7E87A086642E0FC5AC4161ED_inline(L_1, L_2, /*hidden argument*/NULL);
		// CoreRegistry.Instance.RegisterPackage(corePackageInitializer)
		//     .ProvidesComponent<IInstallationId>()
		//     .ProvidesComponent<ICloudProjectId>()
		//     .ProvidesComponent<IActionScheduler>()
		//     .ProvidesComponent<IEnvironments>()
		//     .ProvidesComponent<IProjectConfiguration>()
		//     .ProvidesComponent<IMetricsFactory>()
		//     .ProvidesComponent<IDiagnosticsFactory>()
		//     .ProvidesComponent<IUnityThreadUtils>();
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_3;
		L_3 = CoreRegistry_get_Instance_m4D1C714218A28598060C670E87B7B59834A53510_inline(/*hidden argument*/NULL);
		CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_4 = V_0;
		NullCheck(L_3);
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_5;
		L_5 = CoreRegistry_RegisterPackage_TisCorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509_m033CA8EDAE172CF6A681F4FE826DAE721C1E1221(L_3, L_4, /*hidden argument*/CoreRegistry_RegisterPackage_TisCorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509_m033CA8EDAE172CF6A681F4FE826DAE721C1E1221_RuntimeMethod_var);
		V_1 = L_5;
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_6;
		L_6 = CoreRegistration_ProvidesComponent_TisIInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863_mE82C349E67B8E7D3DFE3DA51A57E426B777073C1((CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *)(&V_1), /*hidden argument*/CoreRegistration_ProvidesComponent_TisIInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863_mE82C349E67B8E7D3DFE3DA51A57E426B777073C1_RuntimeMethod_var);
		V_1 = L_6;
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_7;
		L_7 = CoreRegistration_ProvidesComponent_TisICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_m76D2E595D87EBED1FE73CBF606B5410FEA404519((CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *)(&V_1), /*hidden argument*/CoreRegistration_ProvidesComponent_TisICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_m76D2E595D87EBED1FE73CBF606B5410FEA404519_RuntimeMethod_var);
		V_1 = L_7;
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_8;
		L_8 = CoreRegistration_ProvidesComponent_TisIActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_m0173ECD7581D6A19347FF30FC4904C4B9423F1E2((CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *)(&V_1), /*hidden argument*/CoreRegistration_ProvidesComponent_TisIActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_m0173ECD7581D6A19347FF30FC4904C4B9423F1E2_RuntimeMethod_var);
		V_1 = L_8;
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_9;
		L_9 = CoreRegistration_ProvidesComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_mCBD558F9206C52CF394E4FBA97F4D58CD0DC90F5((CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *)(&V_1), /*hidden argument*/CoreRegistration_ProvidesComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_mCBD558F9206C52CF394E4FBA97F4D58CD0DC90F5_RuntimeMethod_var);
		V_1 = L_9;
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_10;
		L_10 = CoreRegistration_ProvidesComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_m3A9515DC93CE2237B18EA784248D1CBB38A4E736((CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *)(&V_1), /*hidden argument*/CoreRegistration_ProvidesComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_m3A9515DC93CE2237B18EA784248D1CBB38A4E736_RuntimeMethod_var);
		V_1 = L_10;
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_11;
		L_11 = CoreRegistration_ProvidesComponent_TisIMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_m42C9281EE05852AF26F1B6588EB6A183C1E21319((CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *)(&V_1), /*hidden argument*/CoreRegistration_ProvidesComponent_TisIMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_m42C9281EE05852AF26F1B6588EB6A183C1E21319_RuntimeMethod_var);
		V_1 = L_11;
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_12;
		L_12 = CoreRegistration_ProvidesComponent_TisIDiagnosticsFactory_tF98D72E5A724DFEBC2D6F913DFAC54AA9B0FB925_m732D9F1C0C731E7F77AA57503D24C2C824B124A8((CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *)(&V_1), /*hidden argument*/CoreRegistration_ProvidesComponent_TisIDiagnosticsFactory_tF98D72E5A724DFEBC2D6F913DFAC54AA9B0FB925_m732D9F1C0C731E7F77AA57503D24C2C824B124A8_RuntimeMethod_var);
		V_1 = L_12;
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_13;
		L_13 = CoreRegistration_ProvidesComponent_TisIUnityThreadUtils_tBE7008D9FB34742ED07B210BDE6D7323242E0184_m31E5A91C781CD9540C71E2731BC77AAD659D907B((CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *)(&V_1), /*hidden argument*/CoreRegistration_ProvidesComponent_TisIUnityThreadUtils_tBE7008D9FB34742ED07B210BDE6D7323242E0184_m31E5A91C781CD9540C71E2731BC77AAD659D907B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.Core.Registration.CorePackageInitializer::Initialize(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * CorePackageInitializer_Initialize_m13969C0F1B23D9473BD32E68CA16B7F39AA180C6 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * ___registry0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A_mFE0D0D3CB390A37A9C91A1B11685637213B06BD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_0 = ___registry0;
		(&V_0)->set_registry_2(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_1;
		L_1 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A  L_2 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A_mFE0D0D3CB390A37A9C91A1B11685637213B06BD4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A_mFE0D0D3CB390A37A9C91A1B11685637213B06BD4_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean Unity.Services.Core.Registration.CorePackageInitializer::HaveInitOptionsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CorePackageInitializer_HaveInitOptionsChanged_m072121668148BF472F3F754D53AB487A0A6662E9 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_ValueEquals_TisString_t_TisRuntimeObject_m9E4EEFFE008AFB00920AF38EB43A70C773D63DD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityServices_t70D6D5FD5C1D34A32F1406FED0CD46FE7C429668_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return !(m_CurrentInitializationOptions is null)
		//     && !m_CurrentInitializationOptions.Values.ValueEquals(UnityServices.Instance.Options.Values);
		InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * L_0 = __this->get_m_CurrentInitializationOptions_8();
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * L_1 = __this->get_m_CurrentInitializationOptions_8();
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InitializationOptions_get_Values_m7DCAFF9B9A7F5729B15CB4E3D2E128AD6328CC36_inline(L_1, /*hidden argument*/NULL);
		RuntimeObject* L_3;
		L_3 = UnityServices_get_Instance_m11D20930B5F8F7422CAE8104CF76AB99E8C9A1FC_inline(/*hidden argument*/NULL);
		NullCheck(L_3);
		InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * L_4;
		L_4 = InterfaceFuncInvoker0< InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * >::Invoke(1 /* Unity.Services.Core.InitializationOptions Unity.Services.Core.IUnityServices::get_Options() */, IUnityServices_t70D6D5FD5C1D34A32F1406FED0CD46FE7C429668_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InitializationOptions_get_Values_m7DCAFF9B9A7F5729B15CB4E3D2E128AD6328CC36_inline(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = DictionaryExtensions_ValueEquals_TisString_t_TisRuntimeObject_m9E4EEFFE008AFB00920AF38EB43A70C773D63DD7(L_2, L_5, /*hidden argument*/DictionaryExtensions_ValueEquals_TisString_t_TisRuntimeObject_m9E4EEFFE008AFB00920AF38EB43A70C773D63DD7_RuntimeMethod_var);
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::FreeOptionsDependantComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_FreeOptionsDependantComponents_m12C03EB40829FA386D63705B08341C651268622F (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	{
		// ProjectConfig = null;
		CorePackageInitializer_set_ProjectConfig_mCD4190FAA401FBF5E71C9D4E8FD13D3738BF1B7C_inline(__this, (ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 *)NULL, /*hidden argument*/NULL);
		// Environments = null;
		CorePackageInitializer_set_Environments_mA823A9F2E7CEE7646985B374AA77F2CBF874DD88_inline(__this, (Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 *)NULL, /*hidden argument*/NULL);
		// DiagnosticsFactory = null;
		CorePackageInitializer_set_DiagnosticsFactory_m18F48EBF3101844A2962BCCDA584EFC27CA7340A_inline(__this, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		// MetricsFactory = null;
		CorePackageInitializer_set_MetricsFactory_m7DC7C60AF556679EBE4C281A74A99902B50A5112_inline(__this, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::InitializeInstallationId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_InitializeInstallationId_m6210CB8113D6EAEC95C67EACEFE17DD12E68D69D (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * V_0 = NULL;
	{
		// if (!(InstallationId is null))
		InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * L_0;
		L_0 = CorePackageInitializer_get_InstallationId_m5059CE2D1A59301B9AC44CC759316855689B3833_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var installationId = new InstallationId();
		InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * L_1 = (InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A *)il2cpp_codegen_object_new(InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A_il2cpp_TypeInfo_var);
		InstallationId__ctor_m639C8440CCFB01C47A91C4836EE10633AFACCB18(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		// installationId.CreateIdentifier();
		InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * L_2 = V_0;
		NullCheck(L_2);
		InstallationId_CreateIdentifier_mBD7DDA32FAA6D3BC0DE7D6D214BE7E5DF5771069(L_2, /*hidden argument*/NULL);
		// InstallationId = installationId;
		InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * L_3 = V_0;
		CorePackageInitializer_set_InstallationId_mFE19D1446597D946D90A7346E31A9F3EABC0733D_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::InitializeActionScheduler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_InitializeActionScheduler_m87491450D79BF92EED2D3A86C1FBBCB358B0E1A4 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * V_0 = NULL;
	{
		// if (!(ActionScheduler is null))
		ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * L_0;
		L_0 = CorePackageInitializer_get_ActionScheduler_m4758B38AE54D269CE99429370DF7137BA2480246_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var actionScheduler = new ActionScheduler();
		ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * L_1 = (ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F *)il2cpp_codegen_object_new(ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F_il2cpp_TypeInfo_var);
		ActionScheduler__ctor_mC8BA8182CF542DD52F483013A225109AE31C3C69(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		// actionScheduler.JoinPlayerLoopSystem();
		ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * L_2 = V_0;
		NullCheck(L_2);
		ActionScheduler_JoinPlayerLoopSystem_m9B613FA4B93AFD4C9C32AF4B691DC8B7C1178F85(L_2, /*hidden argument*/NULL);
		// ActionScheduler = actionScheduler;
		ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * L_3 = V_0;
		CorePackageInitializer_set_ActionScheduler_m78AD45D13678079223AFBB53777BFEF7293CE89E_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.Core.Registration.CorePackageInitializer::InitializeProjectConfigAsync(Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * CorePackageInitializer_InitializeProjectConfigAsync_m7A0AF91B28AC503A93A5D0D5A2523228E079D136 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC_m3A5C777F2A59BF1AF9F9FA17017272533C601840_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * L_0 = ___options0;
		(&V_0)->set_options_3(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_1;
		L_1 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC  L_2 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncTaskMethodBuilder_Start_TisU3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC_m3A5C777F2A59BF1AF9F9FA17017272533C601840((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC_m3A5C777F2A59BF1AF9F9FA17017272533C601840_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.ProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer::GenerateProjectConfigurationAsync(Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * CorePackageInitializer_GenerateProjectConfigurationAsync_mF7DFC238E2245114C5615E652D55DE5FF2FFB551 (InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m4F7B791295F539A76BEBFA847C3F92E50F687068_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0_mEA404BBD30E0C3EC56F2B5E527E86087A97FECA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m314E168DEA287E26E8DB822BE40015F2C9B8796E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * L_0 = ___options0;
		(&V_0)->set_options_2(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902  L_1;
		L_1 = AsyncTaskMethodBuilder_1_Create_m4F7B791295F539A76BEBFA847C3F92E50F687068(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m4F7B791295F539A76BEBFA847C3F92E50F687068_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0  L_2 = V_0;
		AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncTaskMethodBuilder_1_Start_TisU3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0_mEA404BBD30E0C3EC56F2B5E527E86087A97FECA9((AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *)(&V_1), (U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0_mEA404BBD30E0C3EC56F2B5E527E86087A97FECA9_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_m314E168DEA287E26E8DB822BE40015F2C9B8796E((AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *)L_4, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m314E168DEA287E26E8DB822BE40015F2C9B8796E_RuntimeMethod_var);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer::GetSerializedConfigOrEmptyAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * CorePackageInitializer_GetSerializedConfigOrEmptyAsync_mB1590D8A5D759EF7CDC74CF0FB60CC2CAFB61DD5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91_mE94D1A6CD91085F5024256B206471D342365AC0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91  L_1 = V_0;
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91_mE94D1A6CD91085F5024256B206471D342365AC0F((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)(&V_1), (U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91_mE94D1A6CD91085F5024256B206471D342365AC0F_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)L_3, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::InitializeEnvironments(Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_InitializeEnvironments_m1D92F66DC59BC39861D0BCD7AA14C3D5572F38ED (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, RuntimeObject* ___projectConfiguration0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B3211DBE32867758EEF2D80E75AAE41597EA87C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84570E14F5CB57CA92CBBE945CEA229B6709C395);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (!(Environments is null))
		Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * L_0;
		L_0 = CorePackageInitializer_get_Environments_m4F23E5BF06513D5166C56A2C3D8940340347E183_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var currentEnvironment = projectConfiguration.GetString(
		//     EnvironmentsOptionsExtensions.EnvironmentNameKey, "production");
		RuntimeObject* L_1 = ___projectConfiguration0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(2 /* System.String Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetString(System.String,System.String) */, IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var, L_1, _stringLiteral84570E14F5CB57CA92CBBE945CEA229B6709C395, _stringLiteral1B3211DBE32867758EEF2D80E75AAE41597EA87C);
		V_0 = L_2;
		// Environments = new Environments.Internal.Environments
		// {
		//     Current = currentEnvironment,
		// };
		Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * L_3 = (Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 *)il2cpp_codegen_object_new(Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8_il2cpp_TypeInfo_var);
		Environments__ctor_m4F4F1D14D9A5DEBB9515765DE741DCA3687A7E32(L_3, /*hidden argument*/NULL);
		Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * L_4 = L_3;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		Environments_set_Current_m2B00B2071BC0C9CFBE4FF9BA3EF09134226EFC0A_inline(L_4, L_5, /*hidden argument*/NULL);
		CorePackageInitializer_set_Environments_mA823A9F2E7CEE7646985B374AA77F2CBF874DD88_inline(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::InitializeCloudProjectId(Unity.Services.Core.Configuration.Internal.ICloudProjectId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_InitializeCloudProjectId_mCB61546B08DAC3D6DDC3B3C66078E6F544549910 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, RuntimeObject* ___cloudProjectId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudProjectId_t8E2E58D767B7ABA77BEE1AA58804E5315DD10BD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B4_0 = NULL;
	CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * G_B4_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * G_B3_1 = NULL;
	{
		// if (!(CloudProjectId is null))
		RuntimeObject* L_0;
		L_0 = CorePackageInitializer_get_CloudProjectId_mA332178748DF23B577F3E134DC49381C143CAE04_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// CloudProjectId = cloudProjectId ?? new CloudProjectId();
		RuntimeObject* L_1 = ___cloudProjectId0;
		RuntimeObject* L_2 = L_1;
		G_B3_0 = L_2;
		G_B3_1 = __this;
		if (L_2)
		{
			G_B4_0 = L_2;
			G_B4_1 = __this;
			goto IL_0014;
		}
	}
	{
		CloudProjectId_t8E2E58D767B7ABA77BEE1AA58804E5315DD10BD5 * L_3 = (CloudProjectId_t8E2E58D767B7ABA77BEE1AA58804E5315DD10BD5 *)il2cpp_codegen_object_new(CloudProjectId_t8E2E58D767B7ABA77BEE1AA58804E5315DD10BD5_il2cpp_TypeInfo_var);
		CloudProjectId__ctor_m78F6E314F7DD32F391CEE187C9812C61FC6FDFB8(L_3, /*hidden argument*/NULL);
		G_B4_0 = ((RuntimeObject*)(L_3));
		G_B4_1 = G_B3_1;
	}

IL_0014:
	{
		NullCheck(G_B4_1);
		CorePackageInitializer_set_CloudProjectId_mE130EA97525A9E516B6D436B4AE845161C884896_inline(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::InitializeDiagnostics(Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Configuration.Internal.IProjectConfiguration,Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_InitializeDiagnostics_mAADE187ADB889EAA69D7DB5DA923A2A5B0815545 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, RuntimeObject* ___scheduler0, RuntimeObject* ___projectConfiguration1, RuntimeObject* ___cloudProjectId2, RuntimeObject* ___environments3, const RuntimeMethod* method)
{
	{
		// if (!(DiagnosticsFactory is null))
		RuntimeObject* L_0;
		L_0 = CorePackageInitializer_get_DiagnosticsFactory_mF83FABF14E704D010FBC51A2058C3ACB04D460D4_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// DiagnosticsFactory = TelemetryUtils.CreateDiagnosticsFactory(
		//     scheduler, projectConfiguration, cloudProjectId, environments);
		RuntimeObject* L_1 = ___scheduler0;
		RuntimeObject* L_2 = ___projectConfiguration1;
		RuntimeObject* L_3 = ___cloudProjectId2;
		RuntimeObject* L_4 = ___environments3;
		RuntimeObject* L_5;
		L_5 = TelemetryUtils_CreateDiagnosticsFactory_m6DD7BFC1BEAE34DACEEB0CA937E69FB7D1EE2E5D(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		CorePackageInitializer_set_DiagnosticsFactory_m18F48EBF3101844A2962BCCDA584EFC27CA7340A_inline(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::InitializeMetrics(Unity.Services.Core.Scheduler.Internal.IActionScheduler,Unity.Services.Core.Configuration.Internal.IProjectConfiguration,Unity.Services.Core.Configuration.Internal.ICloudProjectId,Unity.Services.Core.Environments.Internal.IEnvironments)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_InitializeMetrics_mD1DE2A3960B9341DADC21C3EE63D62FC3C6C282F (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, RuntimeObject* ___scheduler0, RuntimeObject* ___projectConfiguration1, RuntimeObject* ___cloudProjectId2, RuntimeObject* ___environments3, const RuntimeMethod* method)
{
	{
		// if (!(MetricsFactory is null))
		RuntimeObject* L_0;
		L_0 = CorePackageInitializer_get_MetricsFactory_mA68F4292AC0765327ED53741A7B5879D77376F8C_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// MetricsFactory = TelemetryUtils.CreateMetricsFactory(
		//     scheduler, projectConfiguration, cloudProjectId, environments);
		RuntimeObject* L_1 = ___scheduler0;
		RuntimeObject* L_2 = ___projectConfiguration1;
		RuntimeObject* L_3 = ___cloudProjectId2;
		RuntimeObject* L_4 = ___environments3;
		RuntimeObject* L_5;
		L_5 = TelemetryUtils_CreateMetricsFactory_m521C5190A1AC572B6A662805F88F1018044DCAD9(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		CorePackageInitializer_set_MetricsFactory_m7DC7C60AF556679EBE4C281A74A99902B50A5112_inline(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::InitializeUnityThreadUtils()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_InitializeUnityThreadUtils_m61D8E258F509692B23FACA5DC4D9DBAE5533AF8B (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(UnityThreadUtils is null))
		UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597 * L_0;
		L_0 = CorePackageInitializer_get_UnityThreadUtils_mFCB9401F9A8AC81376915CB92C7DA23773178E94_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// UnityThreadUtils = new UnityThreadUtilsInternal();
		UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597 * L_1 = (UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597 *)il2cpp_codegen_object_new(UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597_il2cpp_TypeInfo_var);
		UnityThreadUtilsInternal__ctor_m216CC23D034239A75D09B887B3823F536E611067(L_1, /*hidden argument*/NULL);
		CorePackageInitializer_set_UnityThreadUtils_m42214246BD985C5E2E4A7241BE3A03CC4CE8EA51_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory> Unity.Services.Core.Registration.CorePackageInitializer::CreateDiagnosticsComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t766FB5BC182A614627D42726961515C6EC84A7EB * CorePackageInitializer_CreateDiagnosticsComponents_m698DE6BC64D7969F8DCA14AE6A1DA98112913EB2 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m86223E02937F1121450BC612BFF7F83FEF2CDC40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA_mF4713E912F6C8FE48AE638C6D7A2B61BBE42E592_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m6BCA2201160B4615D4685D49220FA4C5A095E19D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634  L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m86223E02937F1121450BC612BFF7F83FEF2CDC40(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m86223E02937F1121450BC612BFF7F83FEF2CDC40_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA  L_1 = V_0;
		AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_1_Start_TisU3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA_mF4713E912F6C8FE48AE638C6D7A2B61BBE42E592((AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 *)(&V_1), (U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA_mF4713E912F6C8FE48AE638C6D7A2B61BBE42E592_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t766FB5BC182A614627D42726961515C6EC84A7EB * L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m6BCA2201160B4615D4685D49220FA4C5A095E19D((AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 *)L_3, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m6BCA2201160B4615D4685D49220FA4C5A095E19D_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.String> Unity.Services.Core.Registration.CorePackageInitializer::GetSerializedProjectConfigurationAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * CorePackageInitializer_GetSerializedProjectConfigurationAsync_m478880F9CD2DB17C6CC7B597B4DDB33E2CE1697B (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m89E946627D100E2FB4035599C40DA130BAB3F97F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637_m1D39F4CC11861A0265DAAD4E5D1802DF72AC41EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mCB63CB31B1603243888A985C348A8E14CECF91D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m89E946627D100E2FB4035599C40DA130BAB3F97F(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m89E946627D100E2FB4035599C40DA130BAB3F97F_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637  L_1 = V_0;
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637_m1D39F4CC11861A0265DAAD4E5D1802DF72AC41EB((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)(&V_1), (U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637_m1D39F4CC11861A0265DAAD4E5D1802DF72AC41EB_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_mCB63CB31B1603243888A985C348A8E14CECF91D1((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_3, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_mCB63CB31B1603243888A985C348A8E14CECF91D1_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer__ctor_m6FD7E4A9C9A9480A2A83B8C1B78469BD73560321 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::<Initialize>g__RegisterProvidedComponents|36_0(Unity.Services.Core.Registration.CorePackageInitializer/<>c__DisplayClass36_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_U3CInitializeU3Eg__RegisterProvidedComponentsU7C36_0_mF5B3268EE5FB64FA7CA8F6D719810C7DFDEC660D (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4 * p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_m0E38D5762147E12F8154F8A183F7174171825283_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_m57BC8E6FBF190F2E36A4100700916552A22BF1D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIDiagnosticsFactory_tF98D72E5A724DFEBC2D6F913DFAC54AA9B0FB925_m174669867C0F1942642A5CD5109A39C8CEE2FD03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_m90548EA5C344424AA6AC9C528A818CAA9E906207_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863_m09818CDD4EB3088FA6858977564CCFA3E3A1AAFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_mD2C24941571BF9B538B930516BC02542B21F8280_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_mD24F68CA4EA3D8D1478B3062B0F80E59A8E5AD49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIUnityThreadUtils_tBE7008D9FB34742ED07B210BDE6D7323242E0184_m13AD3E6BAF8F6BCFB110A57F829BCD44CCDFECD4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// registry.RegisterServiceComponent<IInstallationId>(InstallationId);
		U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4 * L_0 = p0;
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_1 = L_0->get_registry_0();
		InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * L_2;
		L_2 = CorePackageInitializer_get_InstallationId_m5059CE2D1A59301B9AC44CC759316855689B3833_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		CoreRegistry_RegisterServiceComponent_TisIInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863_m09818CDD4EB3088FA6858977564CCFA3E3A1AAFC(L_1, L_2, /*hidden argument*/CoreRegistry_RegisterServiceComponent_TisIInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863_m09818CDD4EB3088FA6858977564CCFA3E3A1AAFC_RuntimeMethod_var);
		// registry.RegisterServiceComponent<IActionScheduler>(ActionScheduler);
		U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4 * L_3 = p0;
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_4 = L_3->get_registry_0();
		ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * L_5;
		L_5 = CorePackageInitializer_get_ActionScheduler_m4758B38AE54D269CE99429370DF7137BA2480246_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		CoreRegistry_RegisterServiceComponent_TisIActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_m0E38D5762147E12F8154F8A183F7174171825283(L_4, L_5, /*hidden argument*/CoreRegistry_RegisterServiceComponent_TisIActionScheduler_t5E4E8C3520DB63FBD4F23988AC097AFB70B086DB_m0E38D5762147E12F8154F8A183F7174171825283_RuntimeMethod_var);
		// registry.RegisterServiceComponent<IProjectConfiguration>(ProjectConfig);
		U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4 * L_6 = p0;
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_7 = L_6->get_registry_0();
		ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_8;
		L_8 = CorePackageInitializer_get_ProjectConfig_m1D6F9A307B95B3841474662814A0EFB0E5074C54_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		CoreRegistry_RegisterServiceComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_mD24F68CA4EA3D8D1478B3062B0F80E59A8E5AD49(L_7, L_8, /*hidden argument*/CoreRegistry_RegisterServiceComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_mD24F68CA4EA3D8D1478B3062B0F80E59A8E5AD49_RuntimeMethod_var);
		// registry.RegisterServiceComponent<IEnvironments>(Environments);
		U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4 * L_9 = p0;
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_10 = L_9->get_registry_0();
		Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * L_11;
		L_11 = CorePackageInitializer_get_Environments_m4F23E5BF06513D5166C56A2C3D8940340347E183_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		CoreRegistry_RegisterServiceComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_m90548EA5C344424AA6AC9C528A818CAA9E906207(L_10, L_11, /*hidden argument*/CoreRegistry_RegisterServiceComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_m90548EA5C344424AA6AC9C528A818CAA9E906207_RuntimeMethod_var);
		// registry.RegisterServiceComponent<ICloudProjectId>(CloudProjectId);
		U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4 * L_12 = p0;
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_13 = L_12->get_registry_0();
		RuntimeObject* L_14;
		L_14 = CorePackageInitializer_get_CloudProjectId_mA332178748DF23B577F3E134DC49381C143CAE04_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		CoreRegistry_RegisterServiceComponent_TisICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_m57BC8E6FBF190F2E36A4100700916552A22BF1D8(L_13, L_14, /*hidden argument*/CoreRegistry_RegisterServiceComponent_TisICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_m57BC8E6FBF190F2E36A4100700916552A22BF1D8_RuntimeMethod_var);
		// registry.RegisterServiceComponent<IDiagnosticsFactory>(DiagnosticsFactory);
		U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4 * L_15 = p0;
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_16 = L_15->get_registry_0();
		RuntimeObject* L_17;
		L_17 = CorePackageInitializer_get_DiagnosticsFactory_mF83FABF14E704D010FBC51A2058C3ACB04D460D4_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		CoreRegistry_RegisterServiceComponent_TisIDiagnosticsFactory_tF98D72E5A724DFEBC2D6F913DFAC54AA9B0FB925_m174669867C0F1942642A5CD5109A39C8CEE2FD03(L_16, L_17, /*hidden argument*/CoreRegistry_RegisterServiceComponent_TisIDiagnosticsFactory_tF98D72E5A724DFEBC2D6F913DFAC54AA9B0FB925_m174669867C0F1942642A5CD5109A39C8CEE2FD03_RuntimeMethod_var);
		// registry.RegisterServiceComponent<IMetricsFactory>(MetricsFactory);
		U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4 * L_18 = p0;
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_19 = L_18->get_registry_0();
		RuntimeObject* L_20;
		L_20 = CorePackageInitializer_get_MetricsFactory_mA68F4292AC0765327ED53741A7B5879D77376F8C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		CoreRegistry_RegisterServiceComponent_TisIMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_mD2C24941571BF9B538B930516BC02542B21F8280(L_19, L_20, /*hidden argument*/CoreRegistry_RegisterServiceComponent_TisIMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_mD2C24941571BF9B538B930516BC02542B21F8280_RuntimeMethod_var);
		// registry.RegisterServiceComponent<IUnityThreadUtils>(UnityThreadUtils);
		U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4 * L_21 = p0;
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_22 = L_21->get_registry_0();
		UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597 * L_23;
		L_23 = CorePackageInitializer_get_UnityThreadUtils_mFCB9401F9A8AC81376915CB92C7DA23773178E94_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		CoreRegistry_RegisterServiceComponent_TisIUnityThreadUtils_tBE7008D9FB34742ED07B210BDE6D7323242E0184_m13AD3E6BAF8F6BCFB110A57F829BCD44CCDFECD4(L_22, L_23, /*hidden argument*/CoreRegistry_RegisterServiceComponent_TisIUnityThreadUtils_tBE7008D9FB34742ED07B210BDE6D7323242E0184_m13AD3E6BAF8F6BCFB110A57F829BCD44CCDFECD4_RuntimeMethod_var);
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
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<CreateDiagnosticsComponents>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateDiagnosticsComponentsU3Ed__49_MoveNext_mBABA321ABAFD6AC90AF5371D934210E1B59A1C04 (U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA_m1B1D3FBD46022897D163F50A6C12BB215702C00B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB05E78DC3861C92C8FDE19ECB8A91FD9FE8643FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityServices_t70D6D5FD5C1D34A32F1406FED0CD46FE7C429668_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0067;
			}
		}

IL_0011:
		{
			// if (HaveInitOptionsChanged())
			CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_3 = V_1;
			NullCheck(L_3);
			bool L_4;
			L_4 = CorePackageInitializer_HaveInitOptionsChanged_m072121668148BF472F3F754D53AB487A0A6662E9(L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_001f;
			}
		}

IL_0019:
		{
			// FreeOptionsDependantComponents();
			CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_5 = V_1;
			NullCheck(L_5);
			CorePackageInitializer_FreeOptionsDependantComponents_m12C03EB40829FA386D63705B08341C651268622F(L_5, /*hidden argument*/NULL);
		}

IL_001f:
		{
			// InitializeActionScheduler();
			CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_6 = V_1;
			NullCheck(L_6);
			CorePackageInitializer_InitializeActionScheduler_m87491450D79BF92EED2D3A86C1FBBCB358B0E1A4(L_6, /*hidden argument*/NULL);
			// await InitializeProjectConfigAsync(UnityServices.Instance.Options);
			CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_7 = V_1;
			RuntimeObject* L_8;
			L_8 = UnityServices_get_Instance_m11D20930B5F8F7422CAE8104CF76AB99E8C9A1FC_inline(/*hidden argument*/NULL);
			NullCheck(L_8);
			InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * L_9;
			L_9 = InterfaceFuncInvoker0< InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * >::Invoke(1 /* Unity.Services.Core.InitializationOptions Unity.Services.Core.IUnityServices::get_Options() */, IUnityServices_t70D6D5FD5C1D34A32F1406FED0CD46FE7C429668_il2cpp_TypeInfo_var, L_8);
			NullCheck(L_7);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_10;
			L_10 = CorePackageInitializer_InitializeProjectConfigAsync_m7A0AF91B28AC503A93A5D0D5A2523228E079D136(L_7, L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11;
			L_11 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_10, /*hidden argument*/NULL);
			V_3 = L_11;
			bool L_12;
			L_12 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_0083;
			}
		}

IL_0044:
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_14 = V_3;
			__this->set_U3CU3Eu__1_3(L_14);
			AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 * L_15 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA_m1B1D3FBD46022897D163F50A6C12BB215702C00B((AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 *)L_15, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA_m1B1D3FBD46022897D163F50A6C12BB215702C00B_RuntimeMethod_var);
			goto IL_00f1;
		}

IL_0067:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_16 = __this->get_U3CU3Eu__1_3();
			V_3 = L_16;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_17 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->set_U3CU3E1__state_0(L_18);
		}

IL_0083:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
			// InitializeEnvironments(ProjectConfig);
			CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_19 = V_1;
			CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_20 = V_1;
			NullCheck(L_20);
			ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_21;
			L_21 = CorePackageInitializer_get_ProjectConfig_m1D6F9A307B95B3841474662814A0EFB0E5074C54_inline(L_20, /*hidden argument*/NULL);
			NullCheck(L_19);
			CorePackageInitializer_InitializeEnvironments_m1D92F66DC59BC39861D0BCD7AA14C3D5572F38ED(L_19, L_21, /*hidden argument*/NULL);
			// InitializeCloudProjectId();
			CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_22 = V_1;
			NullCheck(L_22);
			CorePackageInitializer_InitializeCloudProjectId_mCB61546B08DAC3D6DDC3B3C66078E6F544549910(L_22, (RuntimeObject*)NULL, /*hidden argument*/NULL);
			// InitializeDiagnostics(ActionScheduler, ProjectConfig, CloudProjectId, Environments);
			CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_23 = V_1;
			CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_24 = V_1;
			NullCheck(L_24);
			ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * L_25;
			L_25 = CorePackageInitializer_get_ActionScheduler_m4758B38AE54D269CE99429370DF7137BA2480246_inline(L_24, /*hidden argument*/NULL);
			CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_26 = V_1;
			NullCheck(L_26);
			ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_27;
			L_27 = CorePackageInitializer_get_ProjectConfig_m1D6F9A307B95B3841474662814A0EFB0E5074C54_inline(L_26, /*hidden argument*/NULL);
			CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_28 = V_1;
			NullCheck(L_28);
			RuntimeObject* L_29;
			L_29 = CorePackageInitializer_get_CloudProjectId_mA332178748DF23B577F3E134DC49381C143CAE04_inline(L_28, /*hidden argument*/NULL);
			CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_30 = V_1;
			NullCheck(L_30);
			Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * L_31;
			L_31 = CorePackageInitializer_get_Environments_m4F23E5BF06513D5166C56A2C3D8940340347E183_inline(L_30, /*hidden argument*/NULL);
			NullCheck(L_23);
			CorePackageInitializer_InitializeDiagnostics_mAADE187ADB889EAA69D7DB5DA923A2A5B0815545(L_23, L_25, L_27, L_29, L_31, /*hidden argument*/NULL);
			// return DiagnosticsFactory;
			CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_32 = V_1;
			NullCheck(L_32);
			RuntimeObject* L_33;
			L_33 = CorePackageInitializer_get_DiagnosticsFactory_mF83FABF14E704D010FBC51A2058C3ACB04D460D4_inline(L_32, /*hidden argument*/NULL);
			V_2 = L_33;
			goto IL_00dd;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c4;
		}
		throw e;
	}

CATCH_00c4:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 * L_34 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_35 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m6703ECD56D68EBBA4EAA53CE4939BD69329F3BEB((AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 *)L_34, L_35, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m6703ECD56D68EBBA4EAA53CE4939BD69329F3BEB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f1;
	} // end catch (depth: 1)

IL_00dd:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 * L_36 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_37 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mB05E78DC3861C92C8FDE19ECB8A91FD9FE8643FD((AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 *)L_36, L_37, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mB05E78DC3861C92C8FDE19ECB8A91FD9FE8643FD_RuntimeMethod_var);
	}

IL_00f1:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCreateDiagnosticsComponentsU3Ed__49_MoveNext_mBABA321ABAFD6AC90AF5371D934210E1B59A1C04_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA * _thisAdjusted = reinterpret_cast<U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA *>(__this + _offset);
	U3CCreateDiagnosticsComponentsU3Ed__49_MoveNext_mBABA321ABAFD6AC90AF5371D934210E1B59A1C04(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<CreateDiagnosticsComponents>d__49::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateDiagnosticsComponentsU3Ed__49_SetStateMachine_m655D8A07DBD4CAF276A66AE367206426FF7513A5 (U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mC233711FA07BF6E99A5EEAB691ED4F81DE206955_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mC233711FA07BF6E99A5EEAB691ED4F81DE206955((AsyncTaskMethodBuilder_1_t31ABEE203339FA74D71EA92E0F23C891A7359634 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mC233711FA07BF6E99A5EEAB691ED4F81DE206955_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCreateDiagnosticsComponentsU3Ed__49_SetStateMachine_m655D8A07DBD4CAF276A66AE367206426FF7513A5_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA * _thisAdjusted = reinterpret_cast<U3CCreateDiagnosticsComponentsU3Ed__49_tC5F690A9260C7A02F9CE42ABE32301A2F2683AFA *>(__this + _offset);
	U3CCreateDiagnosticsComponentsU3Ed__49_SetStateMachine_m655D8A07DBD4CAF276A66AE367206426FF7513A5(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__42::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateProjectConfigurationAsyncU3Ed__42_MoveNext_mA475C1D5B7FB335AC21BFD3ECA208FF6443583AB (U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0_m4845974DD3BB142DD88DA30FAC1C43DB7712F480_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m01A9A9B52C92A94DC0452D1A40FA43369DE5CC2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE3D8C5059BE2B615AF01FEDA06DBED90B82F588A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mA7E2D0B6607A8EE6622C60C7A04F35226EA6A81D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mB2B7A24E436296C969845CFFFCFE1211C47CA490_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2AB9DBB9386479EAC3AA62471E4849C7A114370D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * V_1 = NULL;
	SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0041;
			}
		}

IL_000a:
		{
			// var serializedConfig = await GetSerializedConfigOrEmptyAsync();
			Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * L_2;
			L_2 = CorePackageInitializer_GetSerializedConfigOrEmptyAsync_mB1590D8A5D759EF7CDC74CF0FB60CC2CAFB61DD5(/*hidden argument*/NULL);
			NullCheck(L_2);
			TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  L_3;
			L_3 = Task_1_GetAwaiter_m2AB9DBB9386479EAC3AA62471E4849C7A114370D(L_2, /*hidden argument*/Task_1_GetAwaiter_m2AB9DBB9386479EAC3AA62471E4849C7A114370D_RuntimeMethod_var);
			V_3 = L_3;
			bool L_4;
			L_4 = TaskAwaiter_1_get_IsCompleted_mB2B7A24E436296C969845CFFFCFE1211C47CA490((TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mB2B7A24E436296C969845CFFFCFE1211C47CA490_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_005d;
			}
		}

IL_001e:
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			__this->set_U3CU3E1__state_0(L_5);
			TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  L_6 = V_3;
			__this->set_U3CU3Eu__1_3(L_6);
			AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * L_7 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0_m4845974DD3BB142DD88DA30FAC1C43DB7712F480((AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *)L_7, (TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 *)(&V_3), (U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0_m4845974DD3BB142DD88DA30FAC1C43DB7712F480_RuntimeMethod_var);
			goto IL_00d0;
		}

IL_0041:
		{
			TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  L_8 = __this->get_U3CU3Eu__1_3();
			V_3 = L_8;
			TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * L_9 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_9, sizeof(TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 ));
			int32_t L_10 = (-1);
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
		}

IL_005d:
		{
			SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_11;
			L_11 = TaskAwaiter_1_GetResult_mA7E2D0B6607A8EE6622C60C7A04F35226EA6A81D((TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_mA7E2D0B6607A8EE6622C60C7A04F35226EA6A81D_RuntimeMethod_var);
			V_2 = L_11;
			// if (serializedConfig.Keys is null
			//     || serializedConfig.Values is null)
			SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_12 = V_2;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12.get_Keys_0();
			if (!L_13)
			{
				goto IL_0075;
			}
		}

IL_006d:
		{
			SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_14 = V_2;
			ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* L_15 = L_14.get_Values_1();
			if (L_15)
			{
				goto IL_007b;
			}
		}

IL_0075:
		{
			// serializedConfig = SerializableProjectConfiguration.Empty;
			SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_16;
			L_16 = SerializableProjectConfiguration_get_Empty_m82FCFB758A9B72A0A875F64C007D32B9BE207BDA(/*hidden argument*/NULL);
			V_2 = L_16;
		}

IL_007b:
		{
			// var configValues = new Dictionary<string, ConfigurationEntry>(serializedConfig.Keys.Length);
			SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_17 = V_2;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_17.get_Keys_0();
			NullCheck(L_18);
			Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B * L_19 = (Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B *)il2cpp_codegen_object_new(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_mE3D8C5059BE2B615AF01FEDA06DBED90B82F588A(L_19, ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))), /*hidden argument*/Dictionary_2__ctor_mE3D8C5059BE2B615AF01FEDA06DBED90B82F588A_RuntimeMethod_var);
			// configValues.FillWith(serializedConfig);
			Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B * L_20 = L_19;
			SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_21 = V_2;
			ConfigurationCollectionHelper_FillWith_m5108DA7E7876453FEE4E030AD578C513313446CB(L_20, L_21, /*hidden argument*/NULL);
			// configValues.FillWith(options);
			Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B * L_22 = L_20;
			InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * L_23 = __this->get_options_2();
			ConfigurationCollectionHelper_FillWith_m36219B38089B98238B7FB691ABF4754AB31CA170(L_22, L_23, /*hidden argument*/NULL);
			// return new ProjectConfiguration(configValues);
			ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_24 = (ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 *)il2cpp_codegen_object_new(ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05_il2cpp_TypeInfo_var);
			ProjectConfiguration__ctor_mBB5C171248A27521B6D6554F718A5F3726D43FD5(L_24, L_22, /*hidden argument*/NULL);
			V_1 = L_24;
			goto IL_00bc;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a3;
		}
		throw e;
	}

CATCH_00a3:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * L_25 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_26 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mE4BF6DEA7B8FEC712C70899EF6EE058748C3C9CF((AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *)L_25, L_26, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mE4BF6DEA7B8FEC712C70899EF6EE058748C3C9CF_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d0;
	} // end catch (depth: 1)

IL_00bc:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * L_27 = __this->get_address_of_U3CU3Et__builder_1();
		ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_28 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m01A9A9B52C92A94DC0452D1A40FA43369DE5CC2C((AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *)L_27, L_28, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m01A9A9B52C92A94DC0452D1A40FA43369DE5CC2C_RuntimeMethod_var);
	}

IL_00d0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGenerateProjectConfigurationAsyncU3Ed__42_MoveNext_mA475C1D5B7FB335AC21BFD3ECA208FF6443583AB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0 * _thisAdjusted = reinterpret_cast<U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0 *>(__this + _offset);
	U3CGenerateProjectConfigurationAsyncU3Ed__42_MoveNext_mA475C1D5B7FB335AC21BFD3ECA208FF6443583AB(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__42::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateProjectConfigurationAsyncU3Ed__42_SetStateMachine_mD67355C2A1302356EB9DCCBCDAC954C76B96CF08 (U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m13775651404DF63FC11AE1A12A73BD02B9D5F0FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m13775651404DF63FC11AE1A12A73BD02B9D5F0FE((AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m13775651404DF63FC11AE1A12A73BD02B9D5F0FE_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGenerateProjectConfigurationAsyncU3Ed__42_SetStateMachine_mD67355C2A1302356EB9DCCBCDAC954C76B96CF08_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0 * _thisAdjusted = reinterpret_cast<U3CGenerateProjectConfigurationAsyncU3Ed__42_t5EBE99AD58B4AC59A69C6FBA7352EAE78BF11EF0 *>(__this + _offset);
	U3CGenerateProjectConfigurationAsyncU3Ed__42_SetStateMachine_mD67355C2A1302356EB9DCCBCDAC954C76B96CF08(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_MoveNext_m9EA9677159F079F7EF38EC1258EEBB0D827B3AA3 (U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91_m353462D728C090B5D4DE2F11D0923B3FBA2178E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConfigurationLoader_t982DEACE8EE9A49F9A433FBFA20A248E7B79E6F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mA7E2D0B6607A8EE6622C60C7A04F35226EA6A81D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mB2B7A24E436296C969845CFFFCFE1211C47CA490_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2AB9DBB9386479EAC3AA62471E4849C7A114370D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
		}

IL_000a:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0046;
				}
			}

IL_000d:
			{
				// var config = await ConfigurationUtils.ConfigurationLoader.GetConfigAsync();
				IL2CPP_RUNTIME_CLASS_INIT(ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var);
				RuntimeObject* L_3;
				L_3 = ConfigurationUtils_get_ConfigurationLoader_m43E1A55F93B27A5203B0E706C204FDB315E15A91_inline(/*hidden argument*/NULL);
				NullCheck(L_3);
				Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * L_4;
				L_4 = InterfaceFuncInvoker0< Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * >::Invoke(0 /* System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Configuration.IConfigurationLoader::GetConfigAsync() */, IConfigurationLoader_t982DEACE8EE9A49F9A433FBFA20A248E7B79E6F9_il2cpp_TypeInfo_var, L_3);
				NullCheck(L_4);
				TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  L_5;
				L_5 = Task_1_GetAwaiter_m2AB9DBB9386479EAC3AA62471E4849C7A114370D(L_4, /*hidden argument*/Task_1_GetAwaiter_m2AB9DBB9386479EAC3AA62471E4849C7A114370D_RuntimeMethod_var);
				V_2 = L_5;
				bool L_6;
				L_6 = TaskAwaiter_1_get_IsCompleted_mB2B7A24E436296C969845CFFFCFE1211C47CA490((TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mB2B7A24E436296C969845CFFFCFE1211C47CA490_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0062;
				}
			}

IL_0026:
			{
				int32_t L_7 = 0;
				V_0 = L_7;
				__this->set_U3CU3E1__state_0(L_7);
				TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  L_8 = V_2;
				__this->set_U3CU3Eu__1_2(L_8);
				AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * L_9 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91_m353462D728C090B5D4DE2F11D0923B3FBA2178E7((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)L_9, (TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 *)(&V_2), (U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91_m353462D728C090B5D4DE2F11D0923B3FBA2178E7_RuntimeMethod_var);
				goto IL_00c2;
			}

IL_0046:
			{
				TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  L_10 = __this->get_U3CU3Eu__1_2();
				V_2 = L_10;
				TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * L_11 = __this->get_address_of_U3CU3Eu__1_2();
				il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 ));
				int32_t L_12 = (-1);
				V_0 = L_12;
				__this->set_U3CU3E1__state_0(L_12);
			}

IL_0062:
			{
				SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_13;
				L_13 = TaskAwaiter_1_GetResult_mA7E2D0B6607A8EE6622C60C7A04F35226EA6A81D((TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_mA7E2D0B6607A8EE6622C60C7A04F35226EA6A81D_RuntimeMethod_var);
				// return config;
				V_1 = L_13;
				goto IL_00ae;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_006c;
			}
			throw e;
		}

CATCH_006c:
		{ // begin catch(System.Exception)
			// catch (Exception e)
			V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// CoreLogger.LogError(
			//     "En error occured while trying to get the project configuration for services." +
			//     $"\n{e.Message}" +
			//     $"\n{e.StackTrace}");
			Exception_t * L_14 = V_3;
			NullCheck(L_14);
			String_t* L_15;
			L_15 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_14);
			Exception_t * L_16 = V_3;
			NullCheck(L_16);
			String_t* L_17;
			L_17 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Exception::get_StackTrace() */, L_16);
			String_t* L_18;
			L_18 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral72A108E053F65E47DD8EFDC2C7EB71B5E7879550)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD)), L_17, /*hidden argument*/NULL);
			CoreLogger_LogError_m83F82BBCC1AA3D9B4D8DEC69C0C3F0FB6546CCB4(L_18, /*hidden argument*/NULL);
			// return SerializableProjectConfiguration.Empty;
			SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_19;
			L_19 = SerializableProjectConfiguration_get_Empty_m82FCFB758A9B72A0A875F64C007D32B9BE207BDA(/*hidden argument*/NULL);
			V_1 = L_19;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00ae;
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0095;
		}
		throw e;
	}

CATCH_0095:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_21 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)L_20, L_21, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c2;
	} // end catch (depth: 1)

IL_00ae:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * L_22 = __this->get_address_of_U3CU3Et__builder_1();
		SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_23 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)L_22, L_23, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59_RuntimeMethod_var);
	}

IL_00c2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_MoveNext_m9EA9677159F079F7EF38EC1258EEBB0D827B3AA3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91 * _thisAdjusted = reinterpret_cast<U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91 *>(__this + _offset);
	U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_MoveNext_m9EA9677159F079F7EF38EC1258EEBB0D827B3AA3(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__43::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_SetStateMachine_m70A42749475EA0C953F4A7E2D6D2B3C65A3EACD3 (U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_SetStateMachine_m70A42749475EA0C953F4A7E2D6D2B3C65A3EACD3_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91 * _thisAdjusted = reinterpret_cast<U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_tE00E3F5455066CE4EF7A25C5AE64C8174CB66E91 *>(__this + _offset);
	U3CGetSerializedConfigOrEmptyAsyncU3Ed__43_SetStateMachine_m70A42749475EA0C953F4A7E2D6D2B3C65A3EACD3(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedProjectConfigurationAsync>d__51::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSerializedProjectConfigurationAsyncU3Ed__51_MoveNext_m736AC0D78CCC9AB7799D8B7C6EC2E61E15829215 (U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637_mE383CDF97E7A4B36A27017BFA333D70422C1E4F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityServices_t70D6D5FD5C1D34A32F1406FED0CD46FE7C429668_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * V_1 = NULL;
	String_t* V_2 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0050;
			}
		}

IL_0011:
		{
			// await InitializeProjectConfigAsync(UnityServices.Instance.Options);
			CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_3 = V_1;
			RuntimeObject* L_4;
			L_4 = UnityServices_get_Instance_m11D20930B5F8F7422CAE8104CF76AB99E8C9A1FC_inline(/*hidden argument*/NULL);
			NullCheck(L_4);
			InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * L_5;
			L_5 = InterfaceFuncInvoker0< InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * >::Invoke(1 /* Unity.Services.Core.InitializationOptions Unity.Services.Core.IUnityServices::get_Options() */, IUnityServices_t70D6D5FD5C1D34A32F1406FED0CD46FE7C429668_il2cpp_TypeInfo_var, L_4);
			NullCheck(L_3);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
			L_6 = CorePackageInitializer_InitializeProjectConfigAsync_m7A0AF91B28AC503A93A5D0D5A2523228E079D136(L_3, L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_7;
			L_7 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_6, /*hidden argument*/NULL);
			V_3 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_006c;
			}
		}

IL_0030:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = V_3;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637_mE383CDF97E7A4B36A27017BFA333D70422C1E4F5((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_11, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637_mE383CDF97E7A4B36A27017BFA333D70422C1E4F5_RuntimeMethod_var);
			goto IL_00ae;
		}

IL_0050:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = __this->get_U3CU3Eu__1_3();
			V_3 = L_12;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_13 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_006c:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
			// return ProjectConfig.ToJson();
			CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_15 = V_1;
			NullCheck(L_15);
			ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_16;
			L_16 = CorePackageInitializer_get_ProjectConfig_m1D6F9A307B95B3841474662814A0EFB0E5074C54_inline(L_15, /*hidden argument*/NULL);
			NullCheck(L_16);
			String_t* L_17;
			L_17 = ProjectConfiguration_ToJson_m62245E46D1F69725650608FD1ED7020A680A534B(L_16, /*hidden argument*/NULL);
			V_2 = L_17;
			goto IL_009a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0081;
		}
		throw e;
	}

CATCH_0081:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_18, L_19, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ae;
	} // end catch (depth: 1)

IL_009a:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		String_t* L_21 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_20, L_21, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var);
	}

IL_00ae:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetSerializedProjectConfigurationAsyncU3Ed__51_MoveNext_m736AC0D78CCC9AB7799D8B7C6EC2E61E15829215_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637 * _thisAdjusted = reinterpret_cast<U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637 *>(__this + _offset);
	U3CGetSerializedProjectConfigurationAsyncU3Ed__51_MoveNext_m736AC0D78CCC9AB7799D8B7C6EC2E61E15829215(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedProjectConfigurationAsync>d__51::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSerializedProjectConfigurationAsyncU3Ed__51_SetStateMachine_mE02C00F537BCFCCA42748E286046C5AE8181D3A0 (U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetSerializedProjectConfigurationAsyncU3Ed__51_SetStateMachine_mE02C00F537BCFCCA42748E286046C5AE8181D3A0_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637 * _thisAdjusted = reinterpret_cast<U3CGetSerializedProjectConfigurationAsyncU3Ed__51_t5A63B931F6B322B2EB3FCD44E9C7BEB617050637 *>(__this + _offset);
	U3CGetSerializedProjectConfigurationAsyncU3Ed__51_SetStateMachine_mE02C00F537BCFCCA42748E286046C5AE8181D3A0(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__36_MoveNext_m2A2114D24D64F0E50E9EA8EE34C3234FE8034015 (U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A_m5776A712307CC1BD8971F53DB3BD76D6956F4AF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDiagnosticsFactory_tF98D72E5A724DFEBC2D6F913DFAC54AA9B0FB925_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityServices_t70D6D5FD5C1D34A32F1406FED0CD46FE7C429668_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityProjectNotLinkedException_tED48C6E2C4C6EFA63FF04C62373A0576754F5F41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FFDD3A1E056986C5C4BF9E6444211A5564EEB6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9EFC4E3BFC701CF3C9A03ED0C0CFA12327C22B8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	UnityProjectNotLinkedException_tED48C6E2C4C6EFA63FF04C62373A0576754F5F41 * V_3 = NULL;
	Exception_t * V_4 = NULL;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0049;
			}
		}

IL_0011:
		{
			U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4 * L_3 = __this->get_address_of_U3CU3E8__1_4();
			CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_4 = __this->get_registry_2();
			L_3->set_registry_0(L_4);
			U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4 * L_5 = __this->get_address_of_U3CU3E8__1_4();
			CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_6 = __this->get_U3CU3E4__this_3();
			L_5->set_U3CU3E4__this_1(L_6);
			// var stopwatch = new Stopwatch();
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_7 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
			Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_7, /*hidden argument*/NULL);
			__this->set_U3CstopwatchU3E5__2_5(L_7);
			// stopwatch.Start();
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_8 = __this->get_U3CstopwatchU3E5__2_5();
			NullCheck(L_8);
			Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_8, /*hidden argument*/NULL);
		}

IL_0049:
		{
		}

IL_004a:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_9 = V_0;
				if (!L_9)
				{
					goto IL_00a9;
				}
			}

IL_004d:
			{
				// if (HaveInitOptionsChanged())
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_10 = V_1;
				NullCheck(L_10);
				bool L_11;
				L_11 = CorePackageInitializer_HaveInitOptionsChanged_m072121668148BF472F3F754D53AB487A0A6662E9(L_10, /*hidden argument*/NULL);
				if (!L_11)
				{
					goto IL_005b;
				}
			}

IL_0055:
			{
				// FreeOptionsDependantComponents();
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_12 = V_1;
				NullCheck(L_12);
				CorePackageInitializer_FreeOptionsDependantComponents_m12C03EB40829FA386D63705B08341C651268622F(L_12, /*hidden argument*/NULL);
			}

IL_005b:
			{
				// InitializeInstallationId();
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_13 = V_1;
				NullCheck(L_13);
				CorePackageInitializer_InitializeInstallationId_m6210CB8113D6EAEC95C67EACEFE17DD12E68D69D(L_13, /*hidden argument*/NULL);
				// InitializeActionScheduler();
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_14 = V_1;
				NullCheck(L_14);
				CorePackageInitializer_InitializeActionScheduler_m87491450D79BF92EED2D3A86C1FBBCB358B0E1A4(L_14, /*hidden argument*/NULL);
				// await InitializeProjectConfigAsync(UnityServices.Instance.Options);
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_15 = V_1;
				RuntimeObject* L_16;
				L_16 = UnityServices_get_Instance_m11D20930B5F8F7422CAE8104CF76AB99E8C9A1FC_inline(/*hidden argument*/NULL);
				NullCheck(L_16);
				InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * L_17;
				L_17 = InterfaceFuncInvoker0< InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * >::Invoke(1 /* Unity.Services.Core.InitializationOptions Unity.Services.Core.IUnityServices::get_Options() */, IUnityServices_t70D6D5FD5C1D34A32F1406FED0CD46FE7C429668_il2cpp_TypeInfo_var, L_16);
				NullCheck(L_15);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_18;
				L_18 = CorePackageInitializer_InitializeProjectConfigAsync_m7A0AF91B28AC503A93A5D0D5A2523228E079D136(L_15, L_17, /*hidden argument*/NULL);
				NullCheck(L_18);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_19;
				L_19 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_18, /*hidden argument*/NULL);
				V_2 = L_19;
				bool L_20;
				L_20 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				if (L_20)
				{
					goto IL_00c5;
				}
			}

IL_0086:
			{
				int32_t L_21 = 0;
				V_0 = L_21;
				__this->set_U3CU3E1__state_0(L_21);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_22 = V_2;
				__this->set_U3CU3Eu__1_6(L_22);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_23 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A_m5776A712307CC1BD8971F53DB3BD76D6956F4AF1((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_23, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A_m5776A712307CC1BD8971F53DB3BD76D6956F4AF1_RuntimeMethod_var);
				goto IL_0238;
			}

IL_00a9:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_24 = __this->get_U3CU3Eu__1_6();
				V_2 = L_24;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_25 = __this->get_address_of_U3CU3Eu__1_6();
				il2cpp_codegen_initobj(L_25, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_26 = (-1);
				V_0 = L_26;
				__this->set_U3CU3E1__state_0(L_26);
			}

IL_00c5:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				// InitializeEnvironments(ProjectConfig);
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_27 = V_1;
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_28 = V_1;
				NullCheck(L_28);
				ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_29;
				L_29 = CorePackageInitializer_get_ProjectConfig_m1D6F9A307B95B3841474662814A0EFB0E5074C54_inline(L_28, /*hidden argument*/NULL);
				NullCheck(L_27);
				CorePackageInitializer_InitializeEnvironments_m1D92F66DC59BC39861D0BCD7AA14C3D5572F38ED(L_27, L_29, /*hidden argument*/NULL);
				// InitializeCloudProjectId();
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_30 = V_1;
				NullCheck(L_30);
				CorePackageInitializer_InitializeCloudProjectId_mCB61546B08DAC3D6DDC3B3C66078E6F544549910(L_30, (RuntimeObject*)NULL, /*hidden argument*/NULL);
				// if (string.IsNullOrEmpty(CloudProjectId.GetCloudProjectId()))
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_31 = V_1;
				NullCheck(L_31);
				RuntimeObject* L_32;
				L_32 = CorePackageInitializer_get_CloudProjectId_mA332178748DF23B577F3E134DC49381C143CAE04_inline(L_31, /*hidden argument*/NULL);
				NullCheck(L_32);
				String_t* L_33;
				L_33 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.Services.Core.Configuration.Internal.ICloudProjectId::GetCloudProjectId() */, ICloudProjectId_t9DDFDDC90AB8FB7F6411D942DE2027D6E690D1E3_il2cpp_TypeInfo_var, L_32);
				bool L_34;
				L_34 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_33, /*hidden argument*/NULL);
				if (!L_34)
				{
					goto IL_0112;
				}
			}

IL_00f1:
			{
				// var exception = new UnityProjectNotLinkedException(ProjectUnlinkMessage);
				UnityProjectNotLinkedException_tED48C6E2C4C6EFA63FF04C62373A0576754F5F41 * L_35 = (UnityProjectNotLinkedException_tED48C6E2C4C6EFA63FF04C62373A0576754F5F41 *)il2cpp_codegen_object_new(UnityProjectNotLinkedException_tED48C6E2C4C6EFA63FF04C62373A0576754F5F41_il2cpp_TypeInfo_var);
				UnityProjectNotLinkedException__ctor_mB6BA37284E3E8A8072E47D33DC55639AA1358839(L_35, _stringLiteral5FFDD3A1E056986C5C4BF9E6444211A5564EEB6F, /*hidden argument*/NULL);
				V_3 = L_35;
				// CoreDiagnostics.Instance.SendCorePackageInitDiagnostics(exception);
				CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1 * L_36;
				L_36 = CoreDiagnostics_get_Instance_m5FADE3B31BC7B6B28C464704229B52FC7585DD49_inline(/*hidden argument*/NULL);
				UnityProjectNotLinkedException_tED48C6E2C4C6EFA63FF04C62373A0576754F5F41 * L_37 = V_3;
				NullCheck(L_36);
				CoreDiagnostics_SendCorePackageInitDiagnostics_m0063670A7739D05648CFEE12DC77BF463BC8CD18(L_36, L_37, /*hidden argument*/NULL);
				// CoreLogger.LogError(exception.Message);
				UnityProjectNotLinkedException_tED48C6E2C4C6EFA63FF04C62373A0576754F5F41 * L_38 = V_3;
				NullCheck(L_38);
				String_t* L_39;
				L_39 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_38);
				CoreLogger_LogError_m83F82BBCC1AA3D9B4D8DEC69C0C3F0FB6546CCB4(L_39, /*hidden argument*/NULL);
			}

IL_0112:
			{
				// InitializeDiagnostics(ActionScheduler, ProjectConfig, CloudProjectId, Environments);
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_40 = V_1;
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_41 = V_1;
				NullCheck(L_41);
				ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * L_42;
				L_42 = CorePackageInitializer_get_ActionScheduler_m4758B38AE54D269CE99429370DF7137BA2480246_inline(L_41, /*hidden argument*/NULL);
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_43 = V_1;
				NullCheck(L_43);
				ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_44;
				L_44 = CorePackageInitializer_get_ProjectConfig_m1D6F9A307B95B3841474662814A0EFB0E5074C54_inline(L_43, /*hidden argument*/NULL);
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_45 = V_1;
				NullCheck(L_45);
				RuntimeObject* L_46;
				L_46 = CorePackageInitializer_get_CloudProjectId_mA332178748DF23B577F3E134DC49381C143CAE04_inline(L_45, /*hidden argument*/NULL);
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_47 = V_1;
				NullCheck(L_47);
				Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * L_48;
				L_48 = CorePackageInitializer_get_Environments_m4F23E5BF06513D5166C56A2C3D8940340347E183_inline(L_47, /*hidden argument*/NULL);
				NullCheck(L_40);
				CorePackageInitializer_InitializeDiagnostics_mAADE187ADB889EAA69D7DB5DA923A2A5B0815545(L_40, L_42, L_44, L_46, L_48, /*hidden argument*/NULL);
				// CoreDiagnostics.Instance.Diagnostics = DiagnosticsFactory.Create(CorePackageName);
				CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1 * L_49;
				L_49 = CoreDiagnostics_get_Instance_m5FADE3B31BC7B6B28C464704229B52FC7585DD49_inline(/*hidden argument*/NULL);
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_50 = V_1;
				NullCheck(L_50);
				RuntimeObject* L_51;
				L_51 = CorePackageInitializer_get_DiagnosticsFactory_mF83FABF14E704D010FBC51A2058C3ACB04D460D4_inline(L_50, /*hidden argument*/NULL);
				NullCheck(L_51);
				RuntimeObject* L_52;
				L_52 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* Unity.Services.Core.Telemetry.Internal.IDiagnostics Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory::Create(System.String) */, IDiagnosticsFactory_tF98D72E5A724DFEBC2D6F913DFAC54AA9B0FB925_il2cpp_TypeInfo_var, L_51, _stringLiteralB9EFC4E3BFC701CF3C9A03ED0C0CFA12327C22B8);
				NullCheck(L_49);
				CoreDiagnostics_set_Diagnostics_m9B13432D99E18654995F83F275BD7C174519B666_inline(L_49, L_52, /*hidden argument*/NULL);
				// CoreDiagnostics.Instance.SetProjectConfiguration(ProjectConfig.ToJson());
				CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1 * L_53;
				L_53 = CoreDiagnostics_get_Instance_m5FADE3B31BC7B6B28C464704229B52FC7585DD49_inline(/*hidden argument*/NULL);
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_54 = V_1;
				NullCheck(L_54);
				ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_55;
				L_55 = CorePackageInitializer_get_ProjectConfig_m1D6F9A307B95B3841474662814A0EFB0E5074C54_inline(L_54, /*hidden argument*/NULL);
				NullCheck(L_55);
				String_t* L_56;
				L_56 = ProjectConfiguration_ToJson_m62245E46D1F69725650608FD1ED7020A680A534B(L_55, /*hidden argument*/NULL);
				NullCheck(L_53);
				CoreDiagnostics_SetProjectConfiguration_mA06CB0D0F46075B3528B519C0788E39067322980(L_53, L_56, /*hidden argument*/NULL);
				// InitializeMetrics(ActionScheduler, ProjectConfig, CloudProjectId, Environments);
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_57 = V_1;
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_58 = V_1;
				NullCheck(L_58);
				ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * L_59;
				L_59 = CorePackageInitializer_get_ActionScheduler_m4758B38AE54D269CE99429370DF7137BA2480246_inline(L_58, /*hidden argument*/NULL);
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_60 = V_1;
				NullCheck(L_60);
				ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_61;
				L_61 = CorePackageInitializer_get_ProjectConfig_m1D6F9A307B95B3841474662814A0EFB0E5074C54_inline(L_60, /*hidden argument*/NULL);
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_62 = V_1;
				NullCheck(L_62);
				RuntimeObject* L_63;
				L_63 = CorePackageInitializer_get_CloudProjectId_mA332178748DF23B577F3E134DC49381C143CAE04_inline(L_62, /*hidden argument*/NULL);
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_64 = V_1;
				NullCheck(L_64);
				Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * L_65;
				L_65 = CorePackageInitializer_get_Environments_m4F23E5BF06513D5166C56A2C3D8940340347E183_inline(L_64, /*hidden argument*/NULL);
				NullCheck(L_57);
				CorePackageInitializer_InitializeMetrics_mD1DE2A3960B9341DADC21C3EE63D62FC3C6C282F(L_57, L_59, L_61, L_63, L_65, /*hidden argument*/NULL);
				// CoreMetrics.Instance.Metrics = MetricsFactory.Create(CorePackageName);
				CoreMetrics_t0FED4B1619F67FDF1EA6F4C0397621CE1A003A86 * L_66;
				L_66 = CoreMetrics_get_Instance_m2661D3F4CAAD92AE1D06FC20732A3EF2EB4127FB_inline(/*hidden argument*/NULL);
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_67 = V_1;
				NullCheck(L_67);
				RuntimeObject* L_68;
				L_68 = CorePackageInitializer_get_MetricsFactory_mA68F4292AC0765327ED53741A7B5879D77376F8C_inline(L_67, /*hidden argument*/NULL);
				NullCheck(L_68);
				RuntimeObject* L_69;
				L_69 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* Unity.Services.Core.Telemetry.Internal.IMetrics Unity.Services.Core.Telemetry.Internal.IMetricsFactory::Create(System.String) */, IMetricsFactory_t275147CDF63C7A636A7D9BF48170338B49B4A69B_il2cpp_TypeInfo_var, L_68, _stringLiteralB9EFC4E3BFC701CF3C9A03ED0C0CFA12327C22B8);
				NullCheck(L_66);
				CoreMetrics_set_Metrics_mB8FB2FB1C78AF34B5D3B4B1D1B81B7610B01B5A5_inline(L_66, L_69, /*hidden argument*/NULL);
				// InitializeUnityThreadUtils();
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_70 = V_1;
				NullCheck(L_70);
				CorePackageInitializer_InitializeUnityThreadUtils_m61D8E258F509692B23FACA5DC4D9DBAE5533AF8B(L_70, /*hidden argument*/NULL);
				// RegisterProvidedComponents();
				CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_71 = V_1;
				U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4 * L_72 = __this->get_address_of_U3CU3E8__1_4();
				NullCheck(L_71);
				CorePackageInitializer_U3CInitializeU3Eg__RegisterProvidedComponentsU7C36_0_mF5B3268EE5FB64FA7CA8F6D719810C7DFDEC660D(L_71, (U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4 *)L_72, /*hidden argument*/NULL);
				// }
				goto IL_01bb;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01ab;
			}
			throw e;
		}

CATCH_01ab:
		{ // begin catch(System.Exception)
			// catch (Exception reason)
			V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// CoreDiagnostics.Instance.SendCorePackageInitDiagnostics(reason);
			CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1 * L_73;
			L_73 = CoreDiagnostics_get_Instance_m5FADE3B31BC7B6B28C464704229B52FC7585DD49_inline(/*hidden argument*/NULL);
			Exception_t * L_74 = V_4;
			NullCheck(L_73);
			CoreDiagnostics_SendCorePackageInitDiagnostics_m0063670A7739D05648CFEE12DC77BF463BC8CD18(L_73, L_74, /*hidden argument*/NULL);
			// throw;
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInitializeU3Ed__36_MoveNext_m2A2114D24D64F0E50E9EA8EE34C3234FE8034015_RuntimeMethod_var)));
		} // end catch (depth: 2)

IL_01bb:
		{
			// stopwatch.Stop();
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_75 = __this->get_U3CstopwatchU3E5__2_5();
			NullCheck(L_75);
			Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63(L_75, /*hidden argument*/NULL);
			// CoreMetrics.Instance.SendCorePackageInitTimeMetric(stopwatch.Elapsed.TotalSeconds);
			CoreMetrics_t0FED4B1619F67FDF1EA6F4C0397621CE1A003A86 * L_76;
			L_76 = CoreMetrics_get_Instance_m2661D3F4CAAD92AE1D06FC20732A3EF2EB4127FB_inline(/*hidden argument*/NULL);
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_77 = __this->get_U3CstopwatchU3E5__2_5();
			NullCheck(L_77);
			TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_78;
			L_78 = Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6(L_77, /*hidden argument*/NULL);
			V_5 = L_78;
			double L_79;
			L_79 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_5), /*hidden argument*/NULL);
			NullCheck(L_76);
			CoreMetrics_SendCorePackageInitTimeMetric_mD253E7A4D3F8FA91A35C3BBB1F0BECA6B2F38F74(L_76, L_79, /*hidden argument*/NULL);
			goto IL_0212;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01e6;
		}
		throw e;
	}

CATCH_01e6:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4 * L_80 = __this->get_address_of_U3CU3E8__1_4();
		il2cpp_codegen_initobj(L_80, sizeof(U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4 ));
		__this->set_U3CstopwatchU3E5__2_5((Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)NULL);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_81 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_82 = V_6;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_81, L_82, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0238;
	} // end catch (depth: 1)

IL_0212:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4 * L_83 = __this->get_address_of_U3CU3E8__1_4();
		il2cpp_codegen_initobj(L_83, sizeof(U3CU3Ec__DisplayClass36_0_tEE44A46737E8AA42A5CA5E03ED8131A2784F41C4 ));
		__this->set_U3CstopwatchU3E5__2_5((Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)NULL);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_84 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_84, /*hidden argument*/NULL);
	}

IL_0238:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeU3Ed__36_MoveNext_m2A2114D24D64F0E50E9EA8EE34C3234FE8034015_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A * _thisAdjusted = reinterpret_cast<U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A *>(__this + _offset);
	U3CInitializeU3Ed__36_MoveNext_m2A2114D24D64F0E50E9EA8EE34C3234FE8034015(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__36::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__36_SetStateMachine_m85EAA67A1B51607981069F3DA4BE54529D6C39E9 (U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeU3Ed__36_SetStateMachine_m85EAA67A1B51607981069F3DA4BE54529D6C39E9_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A * _thisAdjusted = reinterpret_cast<U3CInitializeU3Ed__36_tDC22BFB7AAE8094B1D98E41CE8662A5417DBAA3A *>(__this + _offset);
	U3CInitializeU3Ed__36_SetStateMachine_m85EAA67A1B51607981069F3DA4BE54529D6C39E9(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<InitializeProjectConfigAsync>d__41::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeProjectConfigAsyncU3Ed__41_MoveNext_m5069E4A81B616F28D2132F3508FBEB4D6A7FD156 (U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605_TisU3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC_m3801EA809296C1267C45600AEEA65B4F991F3BC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m017A6EFA80A22876E2FD0C0A021182CFE0DA1DDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m1D7A8FF71FC1DAF857EA76E26E9B007F5BCF3F23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mC143DF70EA2F518DA4A94EB7ABB59A0803048822_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * V_1 = NULL;
	ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * V_2 = NULL;
	TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0058;
			}
		}

IL_0011:
		{
			// if (!(ProjectConfig is null))
			CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_3 = V_1;
			NullCheck(L_3);
			ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_4;
			L_4 = CorePackageInitializer_get_ProjectConfig_m1D6F9A307B95B3841474662814A0EFB0E5074C54_inline(L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_001e;
			}
		}

IL_0019:
		{
			// return;
			goto IL_00af;
		}

IL_001e:
		{
			// ProjectConfig = await GenerateProjectConfigurationAsync(options);
			InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * L_5 = __this->get_options_3();
			Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * L_6;
			L_6 = CorePackageInitializer_GenerateProjectConfigurationAsync_mF7DFC238E2245114C5615E652D55DE5FF2FFB551(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605  L_7;
			L_7 = Task_1_GetAwaiter_mC143DF70EA2F518DA4A94EB7ABB59A0803048822(L_6, /*hidden argument*/Task_1_GetAwaiter_mC143DF70EA2F518DA4A94EB7ABB59A0803048822_RuntimeMethod_var);
			V_3 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_1_get_IsCompleted_m1D7A8FF71FC1DAF857EA76E26E9B007F5BCF3F23((TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m1D7A8FF71FC1DAF857EA76E26E9B007F5BCF3F23_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0074;
			}
		}

IL_0038:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605  L_10 = V_3;
			__this->set_U3CU3Eu__1_4(L_10);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605_TisU3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC_m3801EA809296C1267C45600AEEA65B4F991F3BC6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_11, (TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 *)(&V_3), (U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605_TisU3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC_m3801EA809296C1267C45600AEEA65B4F991F3BC6_RuntimeMethod_var);
			goto IL_00c2;
		}

IL_0058:
		{
			TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605  L_12 = __this->get_U3CU3Eu__1_4();
			V_3 = L_12;
			TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 * L_13 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_0074:
		{
			ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_15;
			L_15 = TaskAwaiter_1_GetResult_m017A6EFA80A22876E2FD0C0A021182CFE0DA1DDE((TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m017A6EFA80A22876E2FD0C0A021182CFE0DA1DDE_RuntimeMethod_var);
			V_2 = L_15;
			CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_16 = V_1;
			ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_17 = V_2;
			NullCheck(L_16);
			CorePackageInitializer_set_ProjectConfig_mCD4190FAA401FBF5E71C9D4E8FD13D3738BF1B7C_inline(L_16, L_17, /*hidden argument*/NULL);
			// m_CurrentInitializationOptions = new InitializationOptions(options);
			CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_18 = V_1;
			InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * L_19 = __this->get_options_3();
			InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * L_20 = (InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 *)il2cpp_codegen_object_new(InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268_il2cpp_TypeInfo_var);
			InitializationOptions__ctor_m6C51779CA7C6FABAC13ACBB5DEA7B1BD27C7C2A8(L_20, L_19, /*hidden argument*/NULL);
			NullCheck(L_18);
			L_18->set_m_CurrentInitializationOptions_8(L_20);
			goto IL_00af;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0096;
		}
		throw e;
	}

CATCH_0096:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_22 = V_4;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_21, L_22, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c2;
	} // end catch (depth: 1)

IL_00af:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_23 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_23, /*hidden argument*/NULL);
	}

IL_00c2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeProjectConfigAsyncU3Ed__41_MoveNext_m5069E4A81B616F28D2132F3508FBEB4D6A7FD156_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC * _thisAdjusted = reinterpret_cast<U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC *>(__this + _offset);
	U3CInitializeProjectConfigAsyncU3Ed__41_MoveNext_m5069E4A81B616F28D2132F3508FBEB4D6A7FD156(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<InitializeProjectConfigAsync>d__41::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeProjectConfigAsyncU3Ed__41_SetStateMachine_m8EBF038E14F81176BA4A90399506E32C263FCE1B (U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeProjectConfigAsyncU3Ed__41_SetStateMachine_m8EBF038E14F81176BA4A90399506E32C263FCE1B_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC * _thisAdjusted = reinterpret_cast<U3CInitializeProjectConfigAsyncU3Ed__41_t09C027CAB3135696060CC04C531C51CCDCC209AC *>(__this + _offset);
	U3CInitializeProjectConfigAsyncU3Ed__41_SetStateMachine_m8EBF038E14F81176BA4A90399506E32C263FCE1B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1 * CoreDiagnostics_get_Instance_m5FADE3B31BC7B6B28C464704229B52FC7585DD49_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreDiagnostics Instance { get; internal set; }
		CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1 * L_0 = ((CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1_StaticFields*)il2cpp_codegen_static_fields_for(CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreDiagnostics_set_DiagnosticsComponentProvider_m72853C4682C3703A7E87A086642E0FC5AC4161ED_inline (CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// internal IDiagnosticsComponentProvider DiagnosticsComponentProvider { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CDiagnosticsComponentProviderU3Ek__BackingField_2(L_0);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InitializationOptions_get_Values_m7DCAFF9B9A7F5729B15CB4E3D2E128AD6328CC36_inline (InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * __this, const RuntimeMethod* method)
{
	{
		// internal IDictionary<string, object> Values { get; }
		RuntimeObject* L_0 = __this->get_U3CValuesU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnityServices_get_Instance_m11D20930B5F8F7422CAE8104CF76AB99E8C9A1FC_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static IUnityServices Instance { get; set; }
		RuntimeObject* L_0 = ((UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorePackageInitializer_set_ProjectConfig_mCD4190FAA401FBF5E71C9D4E8FD13D3738BF1B7C_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * ___value0, const RuntimeMethod* method)
{
	{
		// internal ProjectConfiguration ProjectConfig { get; private set; }
		ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_0 = ___value0;
		__this->set_U3CProjectConfigU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorePackageInitializer_set_Environments_mA823A9F2E7CEE7646985B374AA77F2CBF874DD88_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * ___value0, const RuntimeMethod* method)
{
	{
		// internal Environments.Internal.Environments Environments { get; private set; }
		Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * L_0 = ___value0;
		__this->set_U3CEnvironmentsU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorePackageInitializer_set_DiagnosticsFactory_m18F48EBF3101844A2962BCCDA584EFC27CA7340A_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// internal IDiagnosticsFactory DiagnosticsFactory { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CDiagnosticsFactoryU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorePackageInitializer_set_MetricsFactory_m7DC7C60AF556679EBE4C281A74A99902B50A5112_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// internal IMetricsFactory MetricsFactory { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CMetricsFactoryU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * CorePackageInitializer_get_InstallationId_m5059CE2D1A59301B9AC44CC759316855689B3833_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	{
		// internal InstallationId InstallationId { get; private set; }
		InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * L_0 = __this->get_U3CInstallationIdU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorePackageInitializer_set_InstallationId_mFE19D1446597D946D90A7346E31A9F3EABC0733D_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * ___value0, const RuntimeMethod* method)
{
	{
		// internal InstallationId InstallationId { get; private set; }
		InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * L_0 = ___value0;
		__this->set_U3CInstallationIdU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * CorePackageInitializer_get_ActionScheduler_m4758B38AE54D269CE99429370DF7137BA2480246_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	{
		// internal ActionScheduler ActionScheduler { get; private set; }
		ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * L_0 = __this->get_U3CActionSchedulerU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorePackageInitializer_set_ActionScheduler_m78AD45D13678079223AFBB53777BFEF7293CE89E_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * ___value0, const RuntimeMethod* method)
{
	{
		// internal ActionScheduler ActionScheduler { get; private set; }
		ActionScheduler_tC2DAE99BA4D3EC54427E5D3BC4DA96D6A49B640F * L_0 = ___value0;
		__this->set_U3CActionSchedulerU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * CorePackageInitializer_get_Environments_m4F23E5BF06513D5166C56A2C3D8940340347E183_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	{
		// internal Environments.Internal.Environments Environments { get; private set; }
		Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * L_0 = __this->get_U3CEnvironmentsU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Environments_set_Current_m2B00B2071BC0C9CFBE4FF9BA3EF09134226EFC0A_inline (Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Current { get; internal set; }
		String_t* L_0 = ___value0;
		__this->set_U3CCurrentU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CorePackageInitializer_get_CloudProjectId_mA332178748DF23B577F3E134DC49381C143CAE04_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	{
		// internal ICloudProjectId CloudProjectId { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CCloudProjectIdU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorePackageInitializer_set_CloudProjectId_mE130EA97525A9E516B6D436B4AE845161C884896_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// internal ICloudProjectId CloudProjectId { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CCloudProjectIdU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CorePackageInitializer_get_DiagnosticsFactory_mF83FABF14E704D010FBC51A2058C3ACB04D460D4_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	{
		// internal IDiagnosticsFactory DiagnosticsFactory { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CDiagnosticsFactoryU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CorePackageInitializer_get_MetricsFactory_mA68F4292AC0765327ED53741A7B5879D77376F8C_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	{
		// internal IMetricsFactory MetricsFactory { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CMetricsFactoryU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597 * CorePackageInitializer_get_UnityThreadUtils_mFCB9401F9A8AC81376915CB92C7DA23773178E94_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	{
		// internal UnityThreadUtilsInternal UnityThreadUtils { get; private set; }
		UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597 * L_0 = __this->get_U3CUnityThreadUtilsU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CorePackageInitializer_set_UnityThreadUtils_m42214246BD985C5E2E4A7241BE3A03CC4CE8EA51_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597 * ___value0, const RuntimeMethod* method)
{
	{
		// internal UnityThreadUtilsInternal UnityThreadUtils { get; private set; }
		UnityThreadUtilsInternal_t60319B456D13F4ED12C02C04A75763AD6CF40597 * L_0 = ___value0;
		__this->set_U3CUnityThreadUtilsU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * CorePackageInitializer_get_ProjectConfig_m1D6F9A307B95B3841474662814A0EFB0E5074C54_inline (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	{
		// internal ProjectConfiguration ProjectConfig { get; private set; }
		ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_0 = __this->get_U3CProjectConfigU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConfigurationUtils_get_ConfigurationLoader_m43E1A55F93B27A5203B0E706C204FDB315E15A91_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IConfigurationLoader ConfigurationLoader { get; internal set; }
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var))->get_U3CConfigurationLoaderU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreDiagnostics_set_Diagnostics_m9B13432D99E18654995F83F275BD7C174519B666_inline (CoreDiagnostics_t00DE5B5D5C4F181766ECEC51DBD8139CA5A056E1 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// internal IDiagnostics Diagnostics { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CDiagnosticsU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreMetrics_t0FED4B1619F67FDF1EA6F4C0397621CE1A003A86 * CoreMetrics_get_Instance_m2661D3F4CAAD92AE1D06FC20732A3EF2EB4127FB_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreMetrics_t0FED4B1619F67FDF1EA6F4C0397621CE1A003A86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreMetrics Instance { get; internal set; }
		CoreMetrics_t0FED4B1619F67FDF1EA6F4C0397621CE1A003A86 * L_0 = ((CoreMetrics_t0FED4B1619F67FDF1EA6F4C0397621CE1A003A86_StaticFields*)il2cpp_codegen_static_fields_for(CoreMetrics_t0FED4B1619F67FDF1EA6F4C0397621CE1A003A86_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreMetrics_set_Metrics_mB8FB2FB1C78AF34B5D3B4B1D1B81B7610B01B5A5_inline (CoreMetrics_t0FED4B1619F67FDF1EA6F4C0397621CE1A003A86 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// internal IMetrics Metrics { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CMetricsU3Ek__BackingField_1(L_0);
		return;
	}
}
