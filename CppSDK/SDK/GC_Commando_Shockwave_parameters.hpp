﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Commando_Shockwave

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GC_Commando_Shockwave.GC_Commando_Shockwave_C.OnStartParticleSystemSpawned
// 0x0178 (0x0178 - 0x0000)
struct GC_Commando_Shockwave_C_OnStartParticleSystemSpawned final
{
public:
	class UParticleSystemComponent*               SpawnedParticleSysComponent;                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0x00CC(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x015C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue1;                  // 0x0168(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_Commando_Shockwave_C_OnStartParticleSystemSpawned) == 0x000008, "Wrong alignment on GC_Commando_Shockwave_C_OnStartParticleSystemSpawned");
static_assert(sizeof(GC_Commando_Shockwave_C_OnStartParticleSystemSpawned) == 0x000178, "Wrong size on GC_Commando_Shockwave_C_OnStartParticleSystemSpawned");
static_assert(offsetof(GC_Commando_Shockwave_C_OnStartParticleSystemSpawned, SpawnedParticleSysComponent) == 0x000000, "Member 'GC_Commando_Shockwave_C_OnStartParticleSystemSpawned::SpawnedParticleSysComponent' has a wrong offset!");
static_assert(offsetof(GC_Commando_Shockwave_C_OnStartParticleSystemSpawned, Parameters) == 0x000008, "Member 'GC_Commando_Shockwave_C_OnStartParticleSystemSpawned::Parameters' has a wrong offset!");
static_assert(offsetof(GC_Commando_Shockwave_C_OnStartParticleSystemSpawned, CallFunc_MakeRotFromX_ReturnValue) == 0x0000C0, "Member 'GC_Commando_Shockwave_C_OnStartParticleSystemSpawned::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Commando_Shockwave_C_OnStartParticleSystemSpawned, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x0000CC, "Member 'GC_Commando_Shockwave_C_OnStartParticleSystemSpawned::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GC_Commando_Shockwave_C_OnStartParticleSystemSpawned, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000154, "Member 'GC_Commando_Shockwave_C_OnStartParticleSystemSpawned::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Commando_Shockwave_C_OnStartParticleSystemSpawned, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000158, "Member 'GC_Commando_Shockwave_C_OnStartParticleSystemSpawned::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Commando_Shockwave_C_OnStartParticleSystemSpawned, CallFunc_MakeVector_ReturnValue) == 0x00015C, "Member 'GC_Commando_Shockwave_C_OnStartParticleSystemSpawned::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Commando_Shockwave_C_OnStartParticleSystemSpawned, CallFunc_MakeVector_ReturnValue1) == 0x000168, "Member 'GC_Commando_Shockwave_C_OnStartParticleSystemSpawned::CallFunc_MakeVector_ReturnValue1' has a wrong offset!");

}

