﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_GenericTriggeredAbility

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C.ExecuteUbergraph_GAT_GenericTriggeredAbility
// 0x01D8 (0x01D8 - 0x0000)
struct GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0008(0x0040)(ContainsInstancedReference)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0058(0x00A8)()
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x0100(0x0020)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x0120(0x0010)(ZeroConstructor, ReferenceParm)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0130(0x00A8)(ConstParm)
};
static_assert(alignof(GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility) == 0x000008, "Wrong alignment on GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility");
static_assert(sizeof(GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility) == 0x0001D8, "Wrong size on GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility");
static_assert(offsetof(GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility, EntryPoint) == 0x000000, "Member 'GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility, CallFunc_K2_CommitAbility_ReturnValue) == 0x000004, "Member 'GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility, CallFunc_GetActorInfo_ReturnValue) == 0x000008, "Member 'GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000048, "Member 'GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility, K2Node_MakeStruct_GameplayEventData) == 0x000058, "Member 'GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000100, "Member 'GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000120, "Member 'GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility, K2Node_Event_EventData) == 0x000130, "Member 'GAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility::K2Node_Event_EventData' has a wrong offset!");

// Function GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GAT_GenericTriggeredAbility_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData_0;                                       // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GAT_GenericTriggeredAbility_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAT_GenericTriggeredAbility_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAT_GenericTriggeredAbility_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GAT_GenericTriggeredAbility_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAT_GenericTriggeredAbility_C_K2_ActivateAbilityFromEvent, EventData_0) == 0x000000, "Member 'GAT_GenericTriggeredAbility_C_K2_ActivateAbilityFromEvent::EventData_0' has a wrong offset!");

}

