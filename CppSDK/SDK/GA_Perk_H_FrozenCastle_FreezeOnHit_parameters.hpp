﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Perk_H_FrozenCastle_FreezeOnHit

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Perk_H_FrozenCastle_FreezeOnHit.GA_Perk_H_FrozenCastle_FreezeOnHit_C.ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit
// 0x0128 (0x0128 - 0x0000)
struct GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x0008(0x0010)()
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0018(0x00A8)(ConstParm)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasTag_ReturnValue;                       // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C5[0x3];                                       // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetValueAtLevel_ReturnValue1;             // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasTag_ReturnValue1;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectSpecHandle              CallFunc_AssignTagSetByCallerMagnitude_ReturnValue; // 0x00D8(0x0010)()
	struct FGameplayEffectSpecHandle              CallFunc_AssignTagSetByCallerMagnitude_ReturnValue1; // 0x00E8(0x0010)()
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x00F8(0x0020)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue; // 0x0118(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit) == 0x000008, "Wrong alignment on GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit");
static_assert(sizeof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit) == 0x000128, "Wrong size on GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit");
static_assert(offsetof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit, EntryPoint) == 0x000000, "Member 'GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit, CallFunc_GetValueAtLevel_ReturnValue) == 0x000004, "Member 'GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit, CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue) == 0x000008, "Member 'GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit::CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit, K2Node_Event_EventData) == 0x000018, "Member 'GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000C0, "Member 'GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit, CallFunc_HasTag_ReturnValue) == 0x0000C4, "Member 'GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit::CallFunc_HasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit, CallFunc_GetValueAtLevel_ReturnValue1) == 0x0000C8, "Member 'GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit::CallFunc_GetValueAtLevel_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000CC, "Member 'GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit, CallFunc_HasTag_ReturnValue1) == 0x0000D0, "Member 'GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit::CallFunc_HasTag_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit, CallFunc_AssignTagSetByCallerMagnitude_ReturnValue) == 0x0000D8, "Member 'GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit::CallFunc_AssignTagSetByCallerMagnitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit, CallFunc_AssignTagSetByCallerMagnitude_ReturnValue1) == 0x0000E8, "Member 'GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit::CallFunc_AssignTagSetByCallerMagnitude_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x0000F8, "Member 'GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit, CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue) == 0x000118, "Member 'GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit::CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue' has a wrong offset!");

// Function GA_Perk_H_FrozenCastle_FreezeOnHit.GA_Perk_H_FrozenCastle_FreezeOnHit_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData_0;                                       // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ActivateAbilityFromEvent, EventData_0) == 0x000000, "Member 'GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ActivateAbilityFromEvent::EventData_0' has a wrong offset!");

// Function GA_Perk_H_FrozenCastle_FreezeOnHit.GA_Perk_H_FrozenCastle_FreezeOnHit_C.K2_ShouldAbilityRespondToEvent
// 0x0100 (0x0100 - 0x0000)
struct GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayEventData                     Payload;                                           // 0x0040(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          ReturnValue;                                       // 0x00E8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnyTags_ReturnValue;                   // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnyTags_ReturnValue1;                  // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EB[0x5];                                       // 0x00EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent) == 0x000008, "Wrong alignment on GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent");
static_assert(sizeof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent) == 0x000100, "Wrong size on GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent");
static_assert(offsetof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent, ActorInfo) == 0x000000, "Member 'GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent, Payload) == 0x000040, "Member 'GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent::Payload' has a wrong offset!");
static_assert(offsetof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent, ReturnValue) == 0x0000E8, "Member 'GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent, CallFunc_HasAnyTags_ReturnValue) == 0x0000E9, "Member 'GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent::CallFunc_HasAnyTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent, CallFunc_HasAnyTags_ReturnValue1) == 0x0000EA, "Member 'GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent::CallFunc_HasAnyTags_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent, K2Node_DynamicCast_AsFort_Pawn) == 0x0000F0, "Member 'GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

