#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Int32 Unity.Services.Core.Scheduler.Internal.ScheduledInvocation::CompareTo(Unity.Services.Core.Scheduler.Internal.ScheduledInvocation)
extern void ScheduledInvocation_CompareTo_m88537CEABE2CF844F66AE6E3EA58BB5159E5B621 (void);
// 0x00000002 System.Void Unity.Services.Core.Scheduler.Internal.ScheduledInvocation::.ctor()
extern void ScheduledInvocation__ctor_m49922FA7BB6D7217CDCD5F95A71C6E3E1F926250 (void);
// 0x00000003 System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::.ctor()
extern void ActionScheduler__ctor_mC8BA8182CF542DD52F483013A225109AE31C3C69 (void);
// 0x00000004 System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::.ctor(Unity.Services.Core.Scheduler.Internal.ITimeProvider)
extern void ActionScheduler__ctor_m5D0DBDE8AC20F7F77699A567C5E6D69234FB30D9 (void);
// 0x00000005 System.Int64 Unity.Services.Core.Scheduler.Internal.ActionScheduler::ScheduleAction(System.Action,System.Double)
extern void ActionScheduler_ScheduleAction_m090D311F4A11AF05F2B5CDD09DBFC7F6ECB1A3B3 (void);
// 0x00000006 System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::CancelAction(System.Int64)
extern void ActionScheduler_CancelAction_m8A27A1FB387CB6C1D88FC1F4565168BDA1DC0CB0 (void);
// 0x00000007 System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::ExecuteExpiredActions()
extern void ActionScheduler_ExecuteExpiredActions_m62B1254D68CFDB79EC2B356E748023F827E6A876 (void);
// 0x00000008 System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::UpdateSubSystemList(System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>,UnityEngine.LowLevel.PlayerLoopSystem)
extern void ActionScheduler_UpdateSubSystemList_mDC291CDF8B20D68D3914E682FA9301C6F9707245 (void);
// 0x00000009 System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::JoinPlayerLoopSystem()
extern void ActionScheduler_JoinPlayerLoopSystem_m9B613FA4B93AFD4C9C32AF4B691DC8B7C1178F85 (void);
// 0x0000000A System.Int32 Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::get_Count()
// 0x0000000B T Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::get_Min()
// 0x0000000C System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::.ctor(System.Int32)
// 0x0000000D System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::Insert(T)
// 0x0000000E System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::IncreaseHeapCapacityWhenFull()
// 0x0000000F System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::Remove(T)
// 0x00000010 T Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::ExtractMin()
// 0x00000011 System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::DecreaseHeapCapacityWhenSpare()
// 0x00000012 System.Int32 Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::GetKey(T)
// 0x00000013 System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::MinHeapify(System.Int32)
// 0x00000014 System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::Swap(T&,T&)
// 0x00000015 System.Int32 Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::Parent(System.Int32)
// 0x00000016 System.Int32 Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::LeftChild(System.Int32)
// 0x00000017 System.Int32 Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::RightChild(System.Int32)
// 0x00000018 System.DateTime Unity.Services.Core.Scheduler.Internal.ITimeProvider::get_Now()
// 0x00000019 System.DateTime Unity.Services.Core.Scheduler.Internal.UtcTimeProvider::get_Now()
extern void UtcTimeProvider_get_Now_m00EAD0028FF56C5830D548E6467E53B9377666DF (void);
// 0x0000001A System.Void Unity.Services.Core.Scheduler.Internal.UtcTimeProvider::.ctor()
extern void UtcTimeProvider__ctor_m873764D6B4573888A6E0A63AC1CFF321EDC5E78E (void);
static Il2CppMethodPointer s_methodPointers[26] = 
{
	ScheduledInvocation_CompareTo_m88537CEABE2CF844F66AE6E3EA58BB5159E5B621,
	ScheduledInvocation__ctor_m49922FA7BB6D7217CDCD5F95A71C6E3E1F926250,
	ActionScheduler__ctor_mC8BA8182CF542DD52F483013A225109AE31C3C69,
	ActionScheduler__ctor_m5D0DBDE8AC20F7F77699A567C5E6D69234FB30D9,
	ActionScheduler_ScheduleAction_m090D311F4A11AF05F2B5CDD09DBFC7F6ECB1A3B3,
	ActionScheduler_CancelAction_m8A27A1FB387CB6C1D88FC1F4565168BDA1DC0CB0,
	ActionScheduler_ExecuteExpiredActions_m62B1254D68CFDB79EC2B356E748023F827E6A876,
	ActionScheduler_UpdateSubSystemList_mDC291CDF8B20D68D3914E682FA9301C6F9707245,
	ActionScheduler_JoinPlayerLoopSystem_m9B613FA4B93AFD4C9C32AF4B691DC8B7C1178F85,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	UtcTimeProvider_get_Now_m00EAD0028FF56C5830D548E6467E53B9377666DF,
	UtcTimeProvider__ctor_m873764D6B4573888A6E0A63AC1CFF321EDC5E78E,
};
static const int32_t s_InvokerIndices[26] = 
{
	2588,
	4666,
	4666,
	3720,
	1442,
	3700,
	4666,
	6465,
	4666,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4507,
	4507,
	4666,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x02000004, { 0, 15 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[15] = 
{
	{ (Il2CppRGCTXDataType)2, 7371 },
	{ (Il2CppRGCTXDataType)3, 23044 },
	{ (Il2CppRGCTXDataType)3, 23047 },
	{ (Il2CppRGCTXDataType)2, 5523 },
	{ (Il2CppRGCTXDataType)3, 23049 },
	{ (Il2CppRGCTXDataType)2, 881 },
	{ (Il2CppRGCTXDataType)2, 3691 },
	{ (Il2CppRGCTXDataType)3, 13515 },
	{ (Il2CppRGCTXDataType)3, 23050 },
	{ (Il2CppRGCTXDataType)3, 23043 },
	{ (Il2CppRGCTXDataType)3, 23042 },
	{ (Il2CppRGCTXDataType)3, 23046 },
	{ (Il2CppRGCTXDataType)3, 23041 },
	{ (Il2CppRGCTXDataType)3, 23045 },
	{ (Il2CppRGCTXDataType)3, 23048 },
};
extern const CustomAttributesCacheGenerator g_Unity_Services_Core_Scheduler_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Services_Core_Scheduler_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Services_Core_Scheduler_CodeGenModule = 
{
	"Unity.Services.Core.Scheduler.dll",
	26,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	15,
	s_rgctxValues,
	NULL,
	g_Unity_Services_Core_Scheduler_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
