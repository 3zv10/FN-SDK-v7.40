﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNS_GM_OnDisplayEmoji

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCNS_GM_OnDisplayEmoji.GCNS_GM_OnDisplayEmoji_C.OnStartParticleSystemSpawned
// 0x01B0 (0x01B0 - 0x0000)
struct GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned final
{
public:
	class UParticleSystemComponent*               SpawnedParticleSysComponent;                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaEmojiItemDefinition*             K2Node_DynamicCast_AsAthena_Emoji_Item_Definition; // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x3];                                       // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x00E8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_BreakVector_X;                            // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Random_360_VectorInRange_Random_Vector_Result_; // 0x0180(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X1;                           // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y1;                           // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z1;                           // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue1;              // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue2;              // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue1;                  // 0x01A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned) == 0x000008, "Wrong alignment on GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned");
static_assert(sizeof(GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned) == 0x0001B0, "Wrong size on GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned");
static_assert(offsetof(GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned, SpawnedParticleSysComponent) == 0x000000, "Member 'GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned::SpawnedParticleSysComponent' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned, Parameters) == 0x000008, "Member 'GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned::Parameters' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned, CallFunc_MakeVector_ReturnValue) == 0x0000C0, "Member 'GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_AsAthena_Emoji_Item_Definition) == 0x0000D0, "Member 'GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_AsAthena_Emoji_Item_Definition' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned, CallFunc_Add_VectorVector_ReturnValue) == 0x0000DC, "Member 'GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x0000E8, "Member 'GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakVector_X) == 0x000170, "Member 'GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakVector_Y) == 0x000174, "Member 'GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakVector_Z) == 0x000178, "Member 'GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned, CallFunc_Add_FloatFloat_ReturnValue) == 0x00017C, "Member 'GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned, CallFunc_Random_360_VectorInRange_Random_Vector_Result_) == 0x000180, "Member 'GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned::CallFunc_Random_360_VectorInRange_Random_Vector_Result_' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakVector_X1) == 0x00018C, "Member 'GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakVector_X1' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakVector_Y1) == 0x000190, "Member 'GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakVector_Y1' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakVector_Z1) == 0x000194, "Member 'GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakVector_Z1' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned, CallFunc_Add_FloatFloat_ReturnValue1) == 0x000198, "Member 'GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned::CallFunc_Add_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned, CallFunc_Add_FloatFloat_ReturnValue2) == 0x00019C, "Member 'GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned::CallFunc_Add_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned, CallFunc_MakeVector_ReturnValue1) == 0x0001A0, "Member 'GCNS_GM_OnDisplayEmoji_C_OnStartParticleSystemSpawned::CallFunc_MakeVector_ReturnValue1' has a wrong offset!");

}

