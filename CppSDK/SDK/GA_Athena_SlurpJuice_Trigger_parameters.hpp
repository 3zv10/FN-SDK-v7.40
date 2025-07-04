﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_SlurpJuice_Trigger

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_SlurpJuice_Trigger.GA_Athena_SlurpJuice_Trigger_C.ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger
// 0x0228 (0x0228 - 0x0000)
struct GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData1;                    // 0x0008(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag1;                // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate; // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0040(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1; // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0078(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable1;                             // 0x0080(0x0020)()
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x00A0(0x0040)(ContainsInstancedReference)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x00F0(0x0020)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x0110(0x0010)(ZeroConstructor, ReferenceParm)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData2;                    // 0x0120(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag2;                // 0x0140(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue1;            // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14A[0x6];                                      // 0x014A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_MakeStruct_GameplayCueParameters;           // 0x0158(0x00B8)(ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_212[0x2];                                      // 0x0212(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate2; // 0x0214(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0224(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger) == 0x000008, "Wrong alignment on GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger");
static_assert(sizeof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger) == 0x000228, "Wrong size on GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, EntryPoint) == 0x000000, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, K2Node_CustomEvent_TargetData1) == 0x000008, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::K2Node_CustomEvent_TargetData1' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, K2Node_CustomEvent_ApplicationTag1) == 0x000028, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::K2Node_CustomEvent_ApplicationTag1' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, K2Node_CustomEvent_TargetData) == 0x000040, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, K2Node_CustomEvent_ApplicationTag) == 0x000060, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, K2Node_CreateDelegate_OutputDelegate1) == 0x000068, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, Temp_struct_Variable) == 0x000078, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, Temp_struct_Variable1) == 0x000080, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, CallFunc_GetActorInfo_ReturnValue) == 0x0000A0, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0000E0, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x0000F0, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000110, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, K2Node_CustomEvent_TargetData2) == 0x000120, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::K2Node_CustomEvent_TargetData2' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, K2Node_CustomEvent_ApplicationTag2) == 0x000140, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::K2Node_CustomEvent_ApplicationTag2' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, CallFunc_K2_CommitAbility_ReturnValue) == 0x000148, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, CallFunc_K2_CommitAbility_ReturnValue1) == 0x000149, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::CallFunc_K2_CommitAbility_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue) == 0x000150, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, K2Node_MakeStruct_GameplayCueParameters) == 0x000158, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::K2Node_MakeStruct_GameplayCueParameters' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, CallFunc_IsValid_ReturnValue) == 0x000210, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, CallFunc_IsValid_ReturnValue1) == 0x000211, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, K2Node_CreateDelegate_OutputDelegate2) == 0x000214, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger, K2Node_Event_bWasCancelled) == 0x000224, "Member 'GA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger::K2Node_Event_bWasCancelled' has a wrong offset!");

// Function GA_Athena_SlurpJuice_Trigger.GA_Athena_SlurpJuice_Trigger_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Athena_SlurpJuice_Trigger_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_SlurpJuice_Trigger_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Athena_SlurpJuice_Trigger_C_K2_OnEndAbility");
static_assert(sizeof(GA_Athena_SlurpJuice_Trigger_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Athena_SlurpJuice_Trigger_C_K2_OnEndAbility");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Athena_SlurpJuice_Trigger_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Athena_SlurpJuice_Trigger.GA_Athena_SlurpJuice_Trigger_C.Cancelled_3F4229A2402812AB9F486AB1B9767783
// 0x0028 (0x0028 - 0x0000)
struct GA_Athena_SlurpJuice_Trigger_C_Cancelled_3F4229A2402812AB9F486AB1B9767783 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_SlurpJuice_Trigger_C_Cancelled_3F4229A2402812AB9F486AB1B9767783) == 0x000008, "Wrong alignment on GA_Athena_SlurpJuice_Trigger_C_Cancelled_3F4229A2402812AB9F486AB1B9767783");
static_assert(sizeof(GA_Athena_SlurpJuice_Trigger_C_Cancelled_3F4229A2402812AB9F486AB1B9767783) == 0x000028, "Wrong size on GA_Athena_SlurpJuice_Trigger_C_Cancelled_3F4229A2402812AB9F486AB1B9767783");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_Cancelled_3F4229A2402812AB9F486AB1B9767783, TargetData) == 0x000000, "Member 'GA_Athena_SlurpJuice_Trigger_C_Cancelled_3F4229A2402812AB9F486AB1B9767783::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_Cancelled_3F4229A2402812AB9F486AB1B9767783, ApplicationTag) == 0x000020, "Member 'GA_Athena_SlurpJuice_Trigger_C_Cancelled_3F4229A2402812AB9F486AB1B9767783::ApplicationTag' has a wrong offset!");

// Function GA_Athena_SlurpJuice_Trigger.GA_Athena_SlurpJuice_Trigger_C.Completed_3F4229A2402812AB9F486AB1B9767783
// 0x0028 (0x0028 - 0x0000)
struct GA_Athena_SlurpJuice_Trigger_C_Completed_3F4229A2402812AB9F486AB1B9767783 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_SlurpJuice_Trigger_C_Completed_3F4229A2402812AB9F486AB1B9767783) == 0x000008, "Wrong alignment on GA_Athena_SlurpJuice_Trigger_C_Completed_3F4229A2402812AB9F486AB1B9767783");
static_assert(sizeof(GA_Athena_SlurpJuice_Trigger_C_Completed_3F4229A2402812AB9F486AB1B9767783) == 0x000028, "Wrong size on GA_Athena_SlurpJuice_Trigger_C_Completed_3F4229A2402812AB9F486AB1B9767783");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_Completed_3F4229A2402812AB9F486AB1B9767783, TargetData) == 0x000000, "Member 'GA_Athena_SlurpJuice_Trigger_C_Completed_3F4229A2402812AB9F486AB1B9767783::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_Completed_3F4229A2402812AB9F486AB1B9767783, ApplicationTag) == 0x000020, "Member 'GA_Athena_SlurpJuice_Trigger_C_Completed_3F4229A2402812AB9F486AB1B9767783::ApplicationTag' has a wrong offset!");

// Function GA_Athena_SlurpJuice_Trigger.GA_Athena_SlurpJuice_Trigger_C.Triggered_3F4229A2402812AB9F486AB1B9767783
// 0x0028 (0x0028 - 0x0000)
struct GA_Athena_SlurpJuice_Trigger_C_Triggered_3F4229A2402812AB9F486AB1B9767783 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_SlurpJuice_Trigger_C_Triggered_3F4229A2402812AB9F486AB1B9767783) == 0x000008, "Wrong alignment on GA_Athena_SlurpJuice_Trigger_C_Triggered_3F4229A2402812AB9F486AB1B9767783");
static_assert(sizeof(GA_Athena_SlurpJuice_Trigger_C_Triggered_3F4229A2402812AB9F486AB1B9767783) == 0x000028, "Wrong size on GA_Athena_SlurpJuice_Trigger_C_Triggered_3F4229A2402812AB9F486AB1B9767783");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_Triggered_3F4229A2402812AB9F486AB1B9767783, TargetData) == 0x000000, "Member 'GA_Athena_SlurpJuice_Trigger_C_Triggered_3F4229A2402812AB9F486AB1B9767783::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_SlurpJuice_Trigger_C_Triggered_3F4229A2402812AB9F486AB1B9767783, ApplicationTag) == 0x000020, "Member 'GA_Athena_SlurpJuice_Trigger_C_Triggered_3F4229A2402812AB9F486AB1B9767783::ApplicationTag' has a wrong offset!");

}

