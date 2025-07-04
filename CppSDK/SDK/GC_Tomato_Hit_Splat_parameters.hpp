﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Tomato_Hit_Splat

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GC_Tomato_Hit_Splat.GC_Tomato_Hit_Splat_C.OnBurst
// 0x01A8 (0x01A8 - 0x0000)
struct GC_Tomato_Hit_Splat_C_OnBurst final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           BurstCameraShakeInstance;                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x00F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x011C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(GC_Tomato_Hit_Splat_C_OnBurst) == 0x000008, "Wrong alignment on GC_Tomato_Hit_Splat_C_OnBurst");
static_assert(sizeof(GC_Tomato_Hit_Splat_C_OnBurst) == 0x0001A8, "Wrong size on GC_Tomato_Hit_Splat_C_OnBurst");
static_assert(offsetof(GC_Tomato_Hit_Splat_C_OnBurst, MyTarget) == 0x000000, "Member 'GC_Tomato_Hit_Splat_C_OnBurst::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_Tomato_Hit_Splat_C_OnBurst, Parameters) == 0x000008, "Member 'GC_Tomato_Hit_Splat_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GC_Tomato_Hit_Splat_C_OnBurst, ParticleComponents) == 0x0000C0, "Member 'GC_Tomato_Hit_Splat_C_OnBurst::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GC_Tomato_Hit_Splat_C_OnBurst, AudioComponents) == 0x0000D0, "Member 'GC_Tomato_Hit_Splat_C_OnBurst::AudioComponents' has a wrong offset!");
static_assert(offsetof(GC_Tomato_Hit_Splat_C_OnBurst, BurstCameraShakeInstance) == 0x0000E0, "Member 'GC_Tomato_Hit_Splat_C_OnBurst::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GC_Tomato_Hit_Splat_C_OnBurst, BurstDecalInstance) == 0x0000E8, "Member 'GC_Tomato_Hit_Splat_C_OnBurst::BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GC_Tomato_Hit_Splat_C_OnBurst, CallFunc_RandomFloatInRange_ReturnValue) == 0x0000F0, "Member 'GC_Tomato_Hit_Splat_C_OnBurst::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Tomato_Hit_Splat_C_OnBurst, CallFunc_MakeRotFromX_ReturnValue) == 0x0000F4, "Member 'GC_Tomato_Hit_Splat_C_OnBurst::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Tomato_Hit_Splat_C_OnBurst, CallFunc_BreakRotator_Roll) == 0x000100, "Member 'GC_Tomato_Hit_Splat_C_OnBurst::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(GC_Tomato_Hit_Splat_C_OnBurst, CallFunc_BreakRotator_Pitch) == 0x000104, "Member 'GC_Tomato_Hit_Splat_C_OnBurst::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(GC_Tomato_Hit_Splat_C_OnBurst, CallFunc_BreakRotator_Yaw) == 0x000108, "Member 'GC_Tomato_Hit_Splat_C_OnBurst::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(GC_Tomato_Hit_Splat_C_OnBurst, CallFunc_Add_FloatFloat_ReturnValue) == 0x00010C, "Member 'GC_Tomato_Hit_Splat_C_OnBurst::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Tomato_Hit_Splat_C_OnBurst, CallFunc_MakeRotator_ReturnValue) == 0x000110, "Member 'GC_Tomato_Hit_Splat_C_OnBurst::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Tomato_Hit_Splat_C_OnBurst, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x00011C, "Member 'GC_Tomato_Hit_Splat_C_OnBurst::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");

}

