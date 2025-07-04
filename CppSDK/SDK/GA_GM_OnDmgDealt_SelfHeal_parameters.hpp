﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_GM_OnDmgDealt_SelfHeal

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GA_GM_OnDmgDealt_SelfHeal.GA_GM_OnDmgDealt_SelfHeal_C.ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal
// 0x0100 (0x0100 - 0x0000)
struct GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                            K2Node_DynamicCast_AsFort_AIPawn;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetDifficultyLevel_ReturnValue;           // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0020(0x00A8)()
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x00C8(0x0010)()
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CalculateHealMagnitude_FinalMagnitude;    // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E5[0x3];                                       // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectSpecHandle              CallFunc_AssignSetByCallerMagnitude_ReturnValue;   // 0x00E8(0x0010)()
	struct FActiveGameplayEffectHandle            CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue; // 0x00F8(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal) == 0x000008, "Wrong alignment on GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal");
static_assert(sizeof(GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal) == 0x000100, "Wrong size on GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal, EntryPoint) == 0x000000, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal, K2Node_DynamicCast_AsFort_AIPawn) == 0x000010, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal::K2Node_DynamicCast_AsFort_AIPawn' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal, CallFunc_GetDifficultyLevel_ReturnValue) == 0x00001C, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal::CallFunc_GetDifficultyLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal, K2Node_Event_EventData) == 0x000020, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal, CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue) == 0x0000C8, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal::CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x0000D8, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal, CallFunc_CalculateHealMagnitude_FinalMagnitude) == 0x0000E0, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal::CallFunc_CalculateHealMagnitude_FinalMagnitude' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000E4, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal, CallFunc_AssignSetByCallerMagnitude_ReturnValue) == 0x0000E8, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal::CallFunc_AssignSetByCallerMagnitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal, CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue) == 0x0000F8, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal::CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue' has a wrong offset!");

// Function GA_GM_OnDmgDealt_SelfHeal.GA_GM_OnDmgDealt_SelfHeal_C.DoOnDmgDealtBehavior
// 0x00A8 (0x00A8 - 0x0000)
struct GA_GM_OnDmgDealt_SelfHeal_C_DoOnDmgDealtBehavior final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_GM_OnDmgDealt_SelfHeal_C_DoOnDmgDealtBehavior) == 0x000008, "Wrong alignment on GA_GM_OnDmgDealt_SelfHeal_C_DoOnDmgDealtBehavior");
static_assert(sizeof(GA_GM_OnDmgDealt_SelfHeal_C_DoOnDmgDealtBehavior) == 0x0000A8, "Wrong size on GA_GM_OnDmgDealt_SelfHeal_C_DoOnDmgDealtBehavior");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_DoOnDmgDealtBehavior, EventData) == 0x000000, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_DoOnDmgDealtBehavior::EventData' has a wrong offset!");

// Function GA_GM_OnDmgDealt_SelfHeal.GA_GM_OnDmgDealt_SelfHeal_C.CalculateHealMagnitude
// 0x0058 (0x0058 - 0x0000)
struct GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude final
{
public:
	float                                         BaseMagnitude;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                AbilitySystem;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PawnLevel;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FinalMagnitude;                                    // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         m_PawnLevel;                                       // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue1;          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute; // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue; // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue2;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult;          // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33[0x1];                                       // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue3;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue1;         // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue1;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue1;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FMax_ReturnValue;                         // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue2;         // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue2;              // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude) == 0x000008, "Wrong alignment on GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude");
static_assert(sizeof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude) == 0x000058, "Wrong size on GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, BaseMagnitude) == 0x000000, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::BaseMagnitude' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, AbilitySystem) == 0x000008, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::AbilitySystem' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, PawnLevel) == 0x000010, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::PawnLevel' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, FinalMagnitude) == 0x000014, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::FinalMagnitude' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, m_PawnLevel) == 0x000018, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::m_PawnLevel' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00001C, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000020, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, CallFunc_Greater_FloatFloat_ReturnValue1) == 0x000024, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::CallFunc_Greater_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute) == 0x000025, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue) == 0x000028, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, CallFunc_Add_FloatFloat_ReturnValue) == 0x00002C, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, CallFunc_Greater_FloatFloat_ReturnValue2) == 0x000030, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::CallFunc_Greater_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, CallFunc_BooleanAND_ReturnValue) == 0x000031, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, CallFunc_EvaluateCurveTableRow_OutResult) == 0x000032, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::CallFunc_EvaluateCurveTableRow_OutResult' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, CallFunc_EvaluateCurveTableRow_OutXY) == 0x000034, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, CallFunc_Greater_FloatFloat_ReturnValue3) == 0x000038, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::CallFunc_Greater_FloatFloat_ReturnValue3' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, CallFunc_Multiply_FloatFloat_ReturnValue1) == 0x00003C, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::CallFunc_Multiply_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, CallFunc_BooleanAND_ReturnValue1) == 0x000040, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::CallFunc_BooleanAND_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, CallFunc_Add_FloatFloat_ReturnValue1) == 0x000044, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::CallFunc_Add_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, K2Node_SwitchEnum_CmpSuccess) == 0x000048, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, CallFunc_FMax_ReturnValue) == 0x00004C, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, CallFunc_Multiply_FloatFloat_ReturnValue2) == 0x000050, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::CallFunc_Multiply_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude, CallFunc_Add_FloatFloat_ReturnValue2) == 0x000054, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude::CallFunc_Add_FloatFloat_ReturnValue2' has a wrong offset!");

// Function GA_GM_OnDmgDealt_SelfHeal.GA_GM_OnDmgDealt_SelfHeal_C.K2_ShouldAbilityRespondToEvent
// 0x0100 (0x0100 - 0x0000)
struct GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayEventData                     Payload;                                           // 0x0040(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          ReturnValue;                                       // 0x00E8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute; // 0x00EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue; // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute1; // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x3];                                       // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue1; // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue1;                  // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue2;                  // 0x00FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent) == 0x000008, "Wrong alignment on GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent");
static_assert(sizeof(GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent) == 0x000100, "Wrong size on GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent, ActorInfo) == 0x000000, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent, Payload) == 0x000040, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent::Payload' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent, ReturnValue) == 0x0000E8, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000E9, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent, CallFunc_IsValid_ReturnValue) == 0x0000EA, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent, CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute) == 0x0000EB, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent::CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent, CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue) == 0x0000EC, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent::CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent, CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute1) == 0x0000F0, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent::CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute1' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent, CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue1) == 0x0000F4, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent::CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent, CallFunc_BooleanAND_ReturnValue) == 0x0000F8, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent, CallFunc_Less_FloatFloat_ReturnValue) == 0x0000F9, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent, CallFunc_BooleanAND_ReturnValue1) == 0x0000FA, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent::CallFunc_BooleanAND_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent, CallFunc_BooleanAND_ReturnValue2) == 0x0000FB, "Member 'GA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent::CallFunc_BooleanAND_ReturnValue2' has a wrong offset!");

}

