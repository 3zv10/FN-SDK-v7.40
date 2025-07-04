﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Perk_Twinblast_Explosion

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GC_Perk_Twinblast_Explosion.GC_Perk_Twinblast_Explosion_C.OnExecute
// 0x00D0 (0x00D0 - 0x0000)
struct GC_Perk_Twinblast_Explosion_C_OnExecute final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_OnExecute_ReturnValue;                    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_Perk_Twinblast_Explosion_C_OnExecute) == 0x000008, "Wrong alignment on GC_Perk_Twinblast_Explosion_C_OnExecute");
static_assert(sizeof(GC_Perk_Twinblast_Explosion_C_OnExecute) == 0x0000D0, "Wrong size on GC_Perk_Twinblast_Explosion_C_OnExecute");
static_assert(offsetof(GC_Perk_Twinblast_Explosion_C_OnExecute, MyTarget) == 0x000000, "Member 'GC_Perk_Twinblast_Explosion_C_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_Perk_Twinblast_Explosion_C_OnExecute, Parameters) == 0x000008, "Member 'GC_Perk_Twinblast_Explosion_C_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(GC_Perk_Twinblast_Explosion_C_OnExecute, ReturnValue) == 0x0000C0, "Member 'GC_Perk_Twinblast_Explosion_C_OnExecute::ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Perk_Twinblast_Explosion_C_OnExecute, CallFunc_OnExecute_ReturnValue) == 0x0000C1, "Member 'GC_Perk_Twinblast_Explosion_C_OnExecute::CallFunc_OnExecute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Perk_Twinblast_Explosion_C_OnExecute, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x0000C8, "Member 'GC_Perk_Twinblast_Explosion_C_OnExecute::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");

}

