#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Unity.Services.Core.Device.InstallationId::.ctor()
extern void InstallationId__ctor_m639C8440CCFB01C47A91C4836EE10633AFACCB18 (void);
// 0x00000002 System.Void Unity.Services.Core.Device.InstallationId::CreateIdentifier()
extern void InstallationId_CreateIdentifier_mBD7DDA32FAA6D3BC0DE7D6D214BE7E5DF5771069 (void);
// 0x00000003 System.String Unity.Services.Core.Device.InstallationId::ReadIdentifierFromFile()
extern void InstallationId_ReadIdentifierFromFile_m0E4A4EA2FBD807E88D989A6D69231773B0EAB7B0 (void);
// 0x00000004 System.Void Unity.Services.Core.Device.InstallationId::WriteIdentifierToFile(System.String)
extern void InstallationId_WriteIdentifierToFile_mD644147932CFE2BEB56BCB3C110C4A5471549DC4 (void);
// 0x00000005 System.String Unity.Services.Core.Device.InstallationId::GenerateGuid()
extern void InstallationId_GenerateGuid_mB93F33EAAB95478CF5E5AFB4493908269BCF3DCE (void);
// 0x00000006 System.String Unity.Services.Core.Device.IUserIdentifierProvider::get_UserId()
// 0x00000007 System.Void Unity.Services.Core.Device.IUserIdentifierProvider::set_UserId(System.String)
// 0x00000008 System.String Unity.Services.Core.Device.NSUserDefaults::GetString(System.String)
extern void NSUserDefaults_GetString_mEB87AF0587165433A76CFB068B1FFFD2204E45A8 (void);
// 0x00000009 System.Void Unity.Services.Core.Device.NSUserDefaults::SetString(System.String,System.String)
extern void NSUserDefaults_SetString_mD5CF4B504516767863122F21EF03995619DE3F6D (void);
// 0x0000000A System.String Unity.Services.Core.Device.NSUserDefaults::UserDefaultsGetString(System.String)
extern void NSUserDefaults_UserDefaultsGetString_m6E8766AEC2BAFF800C20B9B3AA4449905F7CA803 (void);
// 0x0000000B System.Void Unity.Services.Core.Device.NSUserDefaults::UserDefaultsSetString(System.String,System.String)
extern void NSUserDefaults_UserDefaultsSetString_mFAF50B47113ACACE3213FF44593B55C58E45240A (void);
// 0x0000000C System.String Unity.Services.Core.Device.UnityAdsIdentifier::get_UserId()
extern void UnityAdsIdentifier_get_UserId_mB4CA93E5B3C306B5323B2730F077A00DAAAE7827 (void);
// 0x0000000D System.Void Unity.Services.Core.Device.UnityAdsIdentifier::set_UserId(System.String)
extern void UnityAdsIdentifier_set_UserId_mF5FAD79AE249C73084639759654110E6CF94B1D4 (void);
// 0x0000000E System.String Unity.Services.Core.Device.UnityAdsIdentifier::get_IdentifierForInstallIos()
extern void UnityAdsIdentifier_get_IdentifierForInstallIos_mB822301EF18C8FE6E34685785B198D32A4A5FE6F (void);
// 0x0000000F System.Void Unity.Services.Core.Device.UnityAdsIdentifier::set_IdentifierForInstallIos(System.String)
extern void UnityAdsIdentifier_set_IdentifierForInstallIos_m541ABFA6883FA10A8E8507320AB3D63C8B3D72B6 (void);
// 0x00000010 System.Void Unity.Services.Core.Device.UnityAdsIdentifier::.ctor()
extern void UnityAdsIdentifier__ctor_m3765D3DA8A4A60CC29D6F8CD6ECA1447899E8F39 (void);
// 0x00000011 System.String Unity.Services.Core.Device.UnityAnalyticsIdentifier::get_UserId()
extern void UnityAnalyticsIdentifier_get_UserId_m7FEBB7DFC791C97211BDDFEF5036C268317B5C91 (void);
// 0x00000012 System.Void Unity.Services.Core.Device.UnityAnalyticsIdentifier::set_UserId(System.String)
extern void UnityAnalyticsIdentifier_set_UserId_m53C45D08B507983BAB45AC0B3E8229922FCEB1AE (void);
// 0x00000013 System.Void Unity.Services.Core.Device.UnityAnalyticsIdentifier::.ctor()
extern void UnityAnalyticsIdentifier__ctor_m3CE328162A0FE019519DEBFE90AFC0AC4BB95032 (void);
static Il2CppMethodPointer s_methodPointers[19] = 
{
	InstallationId__ctor_m639C8440CCFB01C47A91C4836EE10633AFACCB18,
	InstallationId_CreateIdentifier_mBD7DDA32FAA6D3BC0DE7D6D214BE7E5DF5771069,
	InstallationId_ReadIdentifierFromFile_m0E4A4EA2FBD807E88D989A6D69231773B0EAB7B0,
	InstallationId_WriteIdentifierToFile_mD644147932CFE2BEB56BCB3C110C4A5471549DC4,
	InstallationId_GenerateGuid_mB93F33EAAB95478CF5E5AFB4493908269BCF3DCE,
	NULL,
	NULL,
	NSUserDefaults_GetString_mEB87AF0587165433A76CFB068B1FFFD2204E45A8,
	NSUserDefaults_SetString_mD5CF4B504516767863122F21EF03995619DE3F6D,
	NSUserDefaults_UserDefaultsGetString_m6E8766AEC2BAFF800C20B9B3AA4449905F7CA803,
	NSUserDefaults_UserDefaultsSetString_mFAF50B47113ACACE3213FF44593B55C58E45240A,
	UnityAdsIdentifier_get_UserId_mB4CA93E5B3C306B5323B2730F077A00DAAAE7827,
	UnityAdsIdentifier_set_UserId_mF5FAD79AE249C73084639759654110E6CF94B1D4,
	UnityAdsIdentifier_get_IdentifierForInstallIos_mB822301EF18C8FE6E34685785B198D32A4A5FE6F,
	UnityAdsIdentifier_set_IdentifierForInstallIos_m541ABFA6883FA10A8E8507320AB3D63C8B3D72B6,
	UnityAdsIdentifier__ctor_m3765D3DA8A4A60CC29D6F8CD6ECA1447899E8F39,
	UnityAnalyticsIdentifier_get_UserId_m7FEBB7DFC791C97211BDDFEF5036C268317B5C91,
	UnityAnalyticsIdentifier_set_UserId_m53C45D08B507983BAB45AC0B3E8229922FCEB1AE,
	UnityAnalyticsIdentifier__ctor_m3CE328162A0FE019519DEBFE90AFC0AC4BB95032,
};
static const int32_t s_InvokerIndices[19] = 
{
	4666,
	4666,
	7116,
	7012,
	7116,
	4573,
	3720,
	6823,
	6464,
	6823,
	6464,
	4573,
	3720,
	7116,
	7012,
	4666,
	4573,
	3720,
	4666,
};
extern const CustomAttributesCacheGenerator g_Unity_Services_Core_Device_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Services_Core_Device_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Services_Core_Device_CodeGenModule = 
{
	"Unity.Services.Core.Device.dll",
	19,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_Unity_Services_Core_Device_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
