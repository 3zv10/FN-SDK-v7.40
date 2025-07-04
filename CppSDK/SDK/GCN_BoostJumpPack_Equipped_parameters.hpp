﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_BoostJumpPack_Equipped

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C.WhileActive
// 0x00F0 (0x00F0 - 0x0000)
struct GCN_BoostJumpPack_Equipped_C_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerPawn_Athena_C*                   PlayerPawn;                                        // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshForPartType_ReturnValue;   // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFuelPercent_Fuel_Percent;              // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCN_BoostJumpPack_Equipped_C_WhileActive) == 0x000008, "Wrong alignment on GCN_BoostJumpPack_Equipped_C_WhileActive");
static_assert(sizeof(GCN_BoostJumpPack_Equipped_C_WhileActive) == 0x0000F0, "Wrong size on GCN_BoostJumpPack_Equipped_C_WhileActive");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_WhileActive, MyTarget) == 0x000000, "Member 'GCN_BoostJumpPack_Equipped_C_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_WhileActive, Parameters) == 0x000008, "Member 'GCN_BoostJumpPack_Equipped_C_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_WhileActive, ReturnValue) == 0x0000C0, "Member 'GCN_BoostJumpPack_Equipped_C_WhileActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_WhileActive, PlayerPawn) == 0x0000C8, "Member 'GCN_BoostJumpPack_Equipped_C_WhileActive::PlayerPawn' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_WhileActive, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x0000D0, "Member 'GCN_BoostJumpPack_Equipped_C_WhileActive::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_WhileActive, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'GCN_BoostJumpPack_Equipped_C_WhileActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_WhileActive, CallFunc_GetSkeletalMeshForPartType_ReturnValue) == 0x0000E0, "Member 'GCN_BoostJumpPack_Equipped_C_WhileActive::CallFunc_GetSkeletalMeshForPartType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_WhileActive, CallFunc_GetFuelPercent_Fuel_Percent) == 0x0000E8, "Member 'GCN_BoostJumpPack_Equipped_C_WhileActive::CallFunc_GetFuelPercent_Fuel_Percent' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_WhileActive, CallFunc_IsValid_ReturnValue) == 0x0000EC, "Member 'GCN_BoostJumpPack_Equipped_C_WhileActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C.GetFuelPercent
// 0x0018 (0x0018 - 0x0000)
struct GCN_BoostJumpPack_Equipped_C_GetFuelPercent final
{
public:
	class APlayerPawn_Athena_C*                   PlayerPawn;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fuel_Percent;                                      // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFuel_ReturnValue;                      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxFuel_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_BoostJumpPack_Equipped_C_GetFuelPercent) == 0x000008, "Wrong alignment on GCN_BoostJumpPack_Equipped_C_GetFuelPercent");
static_assert(sizeof(GCN_BoostJumpPack_Equipped_C_GetFuelPercent) == 0x000018, "Wrong size on GCN_BoostJumpPack_Equipped_C_GetFuelPercent");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuelPercent, PlayerPawn) == 0x000000, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuelPercent::PlayerPawn' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuelPercent, Fuel_Percent) == 0x000008, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuelPercent::Fuel_Percent' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuelPercent, CallFunc_GetFuel_ReturnValue) == 0x00000C, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuelPercent::CallFunc_GetFuel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuelPercent, CallFunc_GetMaxFuel_ReturnValue) == 0x000010, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuelPercent::CallFunc_GetMaxFuel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuelPercent, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000014, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuelPercent::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");

// Function GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C.GetFuel
// 0x0040 (0x0040 - 0x0000)
struct GCN_BoostJumpPack_Equipped_C_GetFuel final
{
public:
	class APlayerPawn_Athena_C*                   PlayerPawn;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAttribute                     Attribute;                                         // 0x0010(0x0020)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                         CallFunc_GetSimulatedAttributeValue_ReturnValue;   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttribute_ReturnValue;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCN_BoostJumpPack_Equipped_C_GetFuel) == 0x000008, "Wrong alignment on GCN_BoostJumpPack_Equipped_C_GetFuel");
static_assert(sizeof(GCN_BoostJumpPack_Equipped_C_GetFuel) == 0x000040, "Wrong size on GCN_BoostJumpPack_Equipped_C_GetFuel");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuel, PlayerPawn) == 0x000000, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuel::PlayerPawn' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuel, ReturnValue) == 0x000008, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuel::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuel, Attribute) == 0x000010, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuel::Attribute' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuel, CallFunc_GetSimulatedAttributeValue_ReturnValue) == 0x000030, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuel::CallFunc_GetSimulatedAttributeValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuel, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x000034, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuel::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuel, CallFunc_GetFloatAttribute_ReturnValue) == 0x000038, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuel::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetFuel, CallFunc_IsValid_ReturnValue) == 0x00003C, "Member 'GCN_BoostJumpPack_Equipped_C_GetFuel::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C.GetMaxFuel
// 0x0040 (0x0040 - 0x0000)
struct GCN_BoostJumpPack_Equipped_C_GetMaxFuel final
{
public:
	class APlayerPawn_Athena_C*                   PlayerPawn;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAttribute                     Attribute;                                         // 0x0010(0x0020)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetSimulatedAttributeValue_ReturnValue;   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttribute_ReturnValue;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_BoostJumpPack_Equipped_C_GetMaxFuel) == 0x000008, "Wrong alignment on GCN_BoostJumpPack_Equipped_C_GetMaxFuel");
static_assert(sizeof(GCN_BoostJumpPack_Equipped_C_GetMaxFuel) == 0x000040, "Wrong size on GCN_BoostJumpPack_Equipped_C_GetMaxFuel");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetMaxFuel, PlayerPawn) == 0x000000, "Member 'GCN_BoostJumpPack_Equipped_C_GetMaxFuel::PlayerPawn' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetMaxFuel, ReturnValue) == 0x000008, "Member 'GCN_BoostJumpPack_Equipped_C_GetMaxFuel::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetMaxFuel, Attribute) == 0x000010, "Member 'GCN_BoostJumpPack_Equipped_C_GetMaxFuel::Attribute' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetMaxFuel, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'GCN_BoostJumpPack_Equipped_C_GetMaxFuel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetMaxFuel, CallFunc_GetSimulatedAttributeValue_ReturnValue) == 0x000034, "Member 'GCN_BoostJumpPack_Equipped_C_GetMaxFuel::CallFunc_GetSimulatedAttributeValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetMaxFuel, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x000038, "Member 'GCN_BoostJumpPack_Equipped_C_GetMaxFuel::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_GetMaxFuel, CallFunc_GetFloatAttribute_ReturnValue) == 0x00003C, "Member 'GCN_BoostJumpPack_Equipped_C_GetMaxFuel::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");

// Function GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C.OnExecute
// 0x00F0 (0x00F0 - 0x0000)
struct GCN_BoostJumpPack_Equipped_C_OnExecute final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerPawn_Athena_C*                   PlayerPawn;                                        // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x3];                                       // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFuelPercent_Fuel_Percent;              // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshForPartType_ReturnValue;   // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCN_BoostJumpPack_Equipped_C_OnExecute) == 0x000008, "Wrong alignment on GCN_BoostJumpPack_Equipped_C_OnExecute");
static_assert(sizeof(GCN_BoostJumpPack_Equipped_C_OnExecute) == 0x0000F0, "Wrong size on GCN_BoostJumpPack_Equipped_C_OnExecute");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_OnExecute, MyTarget) == 0x000000, "Member 'GCN_BoostJumpPack_Equipped_C_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_OnExecute, Parameters) == 0x000008, "Member 'GCN_BoostJumpPack_Equipped_C_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_OnExecute, ReturnValue) == 0x0000C0, "Member 'GCN_BoostJumpPack_Equipped_C_OnExecute::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_OnExecute, PlayerPawn) == 0x0000C8, "Member 'GCN_BoostJumpPack_Equipped_C_OnExecute::PlayerPawn' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_OnExecute, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x0000D0, "Member 'GCN_BoostJumpPack_Equipped_C_OnExecute::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_OnExecute, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'GCN_BoostJumpPack_Equipped_C_OnExecute::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_OnExecute, CallFunc_GetFuelPercent_Fuel_Percent) == 0x0000DC, "Member 'GCN_BoostJumpPack_Equipped_C_OnExecute::CallFunc_GetFuelPercent_Fuel_Percent' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_OnExecute, CallFunc_GetSkeletalMeshForPartType_ReturnValue) == 0x0000E0, "Member 'GCN_BoostJumpPack_Equipped_C_OnExecute::CallFunc_GetSkeletalMeshForPartType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_BoostJumpPack_Equipped_C_OnExecute, CallFunc_IsValid_ReturnValue) == 0x0000E8, "Member 'GCN_BoostJumpPack_Equipped_C_OnExecute::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

