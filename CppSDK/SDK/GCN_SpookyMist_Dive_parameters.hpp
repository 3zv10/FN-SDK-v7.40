﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_SpookyMist_Dive

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_SpookyMist_Dive.GCN_SpookyMist_Dive_C.OnActive
// 0x00C8 (0x00C8 - 0x0000)
struct GCN_SpookyMist_Dive_C_OnActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCN_SpookyMist_Dive_C_OnActive) == 0x000008, "Wrong alignment on GCN_SpookyMist_Dive_C_OnActive");
static_assert(sizeof(GCN_SpookyMist_Dive_C_OnActive) == 0x0000C8, "Wrong size on GCN_SpookyMist_Dive_C_OnActive");
static_assert(offsetof(GCN_SpookyMist_Dive_C_OnActive, MyTarget) == 0x000000, "Member 'GCN_SpookyMist_Dive_C_OnActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_SpookyMist_Dive_C_OnActive, Parameters) == 0x000008, "Member 'GCN_SpookyMist_Dive_C_OnActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_SpookyMist_Dive_C_OnActive, ReturnValue) == 0x0000C0, "Member 'GCN_SpookyMist_Dive_C_OnActive::ReturnValue' has a wrong offset!");

// Function GCN_SpookyMist_Dive.GCN_SpookyMist_Dive_C.OnStartParticleSystemSpawned
// 0x00D0 (0x00D0 - 0x0000)
struct GCN_SpookyMist_Dive_C_OnStartParticleSystemSpawned final
{
public:
	class UParticleSystemComponent*               SpawnedParticleSysComponent;                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_SpookyMist_Dive_C_OnStartParticleSystemSpawned) == 0x000008, "Wrong alignment on GCN_SpookyMist_Dive_C_OnStartParticleSystemSpawned");
static_assert(sizeof(GCN_SpookyMist_Dive_C_OnStartParticleSystemSpawned) == 0x0000D0, "Wrong size on GCN_SpookyMist_Dive_C_OnStartParticleSystemSpawned");
static_assert(offsetof(GCN_SpookyMist_Dive_C_OnStartParticleSystemSpawned, SpawnedParticleSysComponent) == 0x000000, "Member 'GCN_SpookyMist_Dive_C_OnStartParticleSystemSpawned::SpawnedParticleSysComponent' has a wrong offset!");
static_assert(offsetof(GCN_SpookyMist_Dive_C_OnStartParticleSystemSpawned, Parameters) == 0x000008, "Member 'GCN_SpookyMist_Dive_C_OnStartParticleSystemSpawned::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_SpookyMist_Dive_C_OnStartParticleSystemSpawned, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0000C0, "Member 'GCN_SpookyMist_Dive_C_OnStartParticleSystemSpawned::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");

}

