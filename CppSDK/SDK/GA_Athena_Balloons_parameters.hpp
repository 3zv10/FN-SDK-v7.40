﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Balloons

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_Balloons.GA_Athena_Balloons_C.ExecuteUbergraph_GA_Athena_Balloons
// 0x01C8 (0x01C8 - 0x0000)
struct GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0008(0x0040)(ContainsInstancedReference)
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate; // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0068(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0088(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x0090(0x0020)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x00B0(0x0010)(ZeroConstructor, ReferenceParm)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x00C0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable1;                             // 0x00C8(0x0020)()
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData1;                    // 0x00E8(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag1;                // 0x0108(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDBNO_ReturnValue;                       // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_132[0x2];                                      // 0x0132(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1; // 0x0134(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData2;                    // 0x0148(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag2;                // 0x0168(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate2; // 0x0170(0x0010)(ZeroConstructor, NoDestructor)
	class AFortWeapon*                            CallFunc_GetCurrentSourceWeapon_ReturnValue;       // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_UtilityItem_Balloons_Athena_C*       K2Node_DynamicCast_AsB_Utility_Item_Balloons_Athena; // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue;        // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFalling_ReturnValue;                    // 0x01A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGender_IsMale;                         // 0x01A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGender_IsFemale;                       // 0x01A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x01A7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_UtilityItem_Balloons_Athena_C*       K2Node_DynamicCast_AsB_Utility_Item_Balloons_Athena1; // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess3;                      // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B9[0x3];                                      // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x01BC(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue1;            // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons) == 0x000008, "Wrong alignment on GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons");
static_assert(sizeof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons) == 0x0001C8, "Wrong size on GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, EntryPoint) == 0x000000, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, CallFunc_GetActorInfo_ReturnValue) == 0x000008, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000058, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, K2Node_CustomEvent_TargetData) == 0x000068, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, K2Node_CustomEvent_ApplicationTag) == 0x000088, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000090, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x0000B0, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, Temp_struct_Variable) == 0x0000C0, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, Temp_struct_Variable1) == 0x0000C8, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, K2Node_CustomEvent_TargetData1) == 0x0000E8, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::K2Node_CustomEvent_TargetData1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, K2Node_CustomEvent_ApplicationTag1) == 0x000108, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::K2Node_CustomEvent_ApplicationTag1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, CallFunc_IsValid_ReturnValue) == 0x000110, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, CallFunc_GetController_ReturnValue) == 0x000118, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, CallFunc_IsDBNO_ReturnValue) == 0x000120, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::CallFunc_IsDBNO_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000128, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, K2Node_DynamicCast_bSuccess1) == 0x000130, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, CallFunc_K2_CommitAbility_ReturnValue) == 0x000131, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, K2Node_CreateDelegate_OutputDelegate1) == 0x000134, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, K2Node_CustomEvent_TargetData2) == 0x000148, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::K2Node_CustomEvent_TargetData2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, K2Node_CustomEvent_ApplicationTag2) == 0x000168, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::K2Node_CustomEvent_ApplicationTag2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, K2Node_CreateDelegate_OutputDelegate2) == 0x000170, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, CallFunc_GetCurrentSourceWeapon_ReturnValue) == 0x000180, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::CallFunc_GetCurrentSourceWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, K2Node_DynamicCast_AsB_Utility_Item_Balloons_Athena) == 0x000188, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::K2Node_DynamicCast_AsB_Utility_Item_Balloons_Athena' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, K2Node_DynamicCast_bSuccess2) == 0x000190, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, CallFunc_PlayMontageWaitTarget_ReturnValue) == 0x000198, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::CallFunc_PlayMontageWaitTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, CallFunc_GetValidValue_ReturnValue) == 0x0001A0, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001A1, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, CallFunc_IsValid_ReturnValue1) == 0x0001A2, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, CallFunc_IsFalling_ReturnValue) == 0x0001A3, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, CallFunc_BooleanOR_ReturnValue) == 0x0001A4, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, CallFunc_GetGender_IsMale) == 0x0001A5, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::CallFunc_GetGender_IsMale' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, CallFunc_GetGender_IsFemale) == 0x0001A6, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::CallFunc_GetGender_IsFemale' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0001A7, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, CallFunc_BooleanAND_ReturnValue) == 0x0001A8, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, K2Node_DynamicCast_AsB_Utility_Item_Balloons_Athena1) == 0x0001B0, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::K2Node_DynamicCast_AsB_Utility_Item_Balloons_Athena1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, K2Node_DynamicCast_bSuccess3) == 0x0001B8, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::K2Node_DynamicCast_bSuccess3' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x0001BC, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons, CallFunc_K2_CommitAbility_ReturnValue1) == 0x0001C4, "Member 'GA_Athena_Balloons_C_ExecuteUbergraph_GA_Athena_Balloons::CallFunc_K2_CommitAbility_ReturnValue1' has a wrong offset!");

// Function GA_Athena_Balloons.GA_Athena_Balloons_C.Triggered_14BE630A4C51463A82B313856F071374
// 0x0028 (0x0028 - 0x0000)
struct GA_Athena_Balloons_C_Triggered_14BE630A4C51463A82B313856F071374 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_Balloons_C_Triggered_14BE630A4C51463A82B313856F071374) == 0x000008, "Wrong alignment on GA_Athena_Balloons_C_Triggered_14BE630A4C51463A82B313856F071374");
static_assert(sizeof(GA_Athena_Balloons_C_Triggered_14BE630A4C51463A82B313856F071374) == 0x000028, "Wrong size on GA_Athena_Balloons_C_Triggered_14BE630A4C51463A82B313856F071374");
static_assert(offsetof(GA_Athena_Balloons_C_Triggered_14BE630A4C51463A82B313856F071374, TargetData) == 0x000000, "Member 'GA_Athena_Balloons_C_Triggered_14BE630A4C51463A82B313856F071374::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_Triggered_14BE630A4C51463A82B313856F071374, ApplicationTag) == 0x000020, "Member 'GA_Athena_Balloons_C_Triggered_14BE630A4C51463A82B313856F071374::ApplicationTag' has a wrong offset!");

// Function GA_Athena_Balloons.GA_Athena_Balloons_C.Cancelled_14BE630A4C51463A82B313856F071374
// 0x0028 (0x0028 - 0x0000)
struct GA_Athena_Balloons_C_Cancelled_14BE630A4C51463A82B313856F071374 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_Balloons_C_Cancelled_14BE630A4C51463A82B313856F071374) == 0x000008, "Wrong alignment on GA_Athena_Balloons_C_Cancelled_14BE630A4C51463A82B313856F071374");
static_assert(sizeof(GA_Athena_Balloons_C_Cancelled_14BE630A4C51463A82B313856F071374) == 0x000028, "Wrong size on GA_Athena_Balloons_C_Cancelled_14BE630A4C51463A82B313856F071374");
static_assert(offsetof(GA_Athena_Balloons_C_Cancelled_14BE630A4C51463A82B313856F071374, TargetData) == 0x000000, "Member 'GA_Athena_Balloons_C_Cancelled_14BE630A4C51463A82B313856F071374::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_Cancelled_14BE630A4C51463A82B313856F071374, ApplicationTag) == 0x000020, "Member 'GA_Athena_Balloons_C_Cancelled_14BE630A4C51463A82B313856F071374::ApplicationTag' has a wrong offset!");

// Function GA_Athena_Balloons.GA_Athena_Balloons_C.Completed_14BE630A4C51463A82B313856F071374
// 0x0028 (0x0028 - 0x0000)
struct GA_Athena_Balloons_C_Completed_14BE630A4C51463A82B313856F071374 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_Balloons_C_Completed_14BE630A4C51463A82B313856F071374) == 0x000008, "Wrong alignment on GA_Athena_Balloons_C_Completed_14BE630A4C51463A82B313856F071374");
static_assert(sizeof(GA_Athena_Balloons_C_Completed_14BE630A4C51463A82B313856F071374) == 0x000028, "Wrong size on GA_Athena_Balloons_C_Completed_14BE630A4C51463A82B313856F071374");
static_assert(offsetof(GA_Athena_Balloons_C_Completed_14BE630A4C51463A82B313856F071374, TargetData) == 0x000000, "Member 'GA_Athena_Balloons_C_Completed_14BE630A4C51463A82B313856F071374::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_Completed_14BE630A4C51463A82B313856F071374, ApplicationTag) == 0x000020, "Member 'GA_Athena_Balloons_C_Completed_14BE630A4C51463A82B313856F071374::ApplicationTag' has a wrong offset!");

// Function GA_Athena_Balloons.GA_Athena_Balloons_C.K2_CanActivateAbility
// 0x0098 (0x0098 - 0x0000)
struct GA_Athena_Balloons_C_K2_CanActivateAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayTagContainer                  RelevantTags;                                      // 0x0040(0x0020)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxStacks;                                         // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanActivate;                                       // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumActiveBalloons_ReturnValue;         // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult;          // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;              // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_Balloons_C_K2_CanActivateAbility) == 0x000008, "Wrong alignment on GA_Athena_Balloons_C_K2_CanActivateAbility");
static_assert(sizeof(GA_Athena_Balloons_C_K2_CanActivateAbility) == 0x000098, "Wrong size on GA_Athena_Balloons_C_K2_CanActivateAbility");
static_assert(offsetof(GA_Athena_Balloons_C_K2_CanActivateAbility, ActorInfo) == 0x000000, "Member 'GA_Athena_Balloons_C_K2_CanActivateAbility::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_K2_CanActivateAbility, RelevantTags) == 0x000040, "Member 'GA_Athena_Balloons_C_K2_CanActivateAbility::RelevantTags' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_K2_CanActivateAbility, ReturnValue) == 0x000060, "Member 'GA_Athena_Balloons_C_K2_CanActivateAbility::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_K2_CanActivateAbility, MaxStacks) == 0x000064, "Member 'GA_Athena_Balloons_C_K2_CanActivateAbility::MaxStacks' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_K2_CanActivateAbility, CanActivate) == 0x000068, "Member 'GA_Athena_Balloons_C_K2_CanActivateAbility::CanActivate' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_K2_CanActivateAbility, CallFunc_IsValid_ReturnValue) == 0x000069, "Member 'GA_Athena_Balloons_C_K2_CanActivateAbility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_K2_CanActivateAbility, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x000070, "Member 'GA_Athena_Balloons_C_K2_CanActivateAbility::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'GA_Athena_Balloons_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_K2_CanActivateAbility, CallFunc_GetNumActiveBalloons_ReturnValue) == 0x00007C, "Member 'GA_Athena_Balloons_C_K2_CanActivateAbility::CallFunc_GetNumActiveBalloons_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_K2_CanActivateAbility, CallFunc_EvaluateCurveTableRow_OutResult) == 0x000080, "Member 'GA_Athena_Balloons_C_K2_CanActivateAbility::CallFunc_EvaluateCurveTableRow_OutResult' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_K2_CanActivateAbility, CallFunc_EvaluateCurveTableRow_OutXY) == 0x000084, "Member 'GA_Athena_Balloons_C_K2_CanActivateAbility::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_K2_CanActivateAbility, CallFunc_Less_IntInt_ReturnValue) == 0x000088, "Member 'GA_Athena_Balloons_C_K2_CanActivateAbility::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_K2_CanActivateAbility, CallFunc_FTrunc_ReturnValue) == 0x00008C, "Member 'GA_Athena_Balloons_C_K2_CanActivateAbility::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Balloons_C_K2_CanActivateAbility, K2Node_SwitchEnum_CmpSuccess) == 0x000090, "Member 'GA_Athena_Balloons_C_K2_CanActivateAbility::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

