﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Deimos_Monster_Spawn_Ice

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_Deimos_Monster_Spawn_Ice.GCN_Deimos_Monster_Spawn_Ice_C.OnBurst
// 0x0108 (0x0108 - 0x0000)
struct GCN_Deimos_Monster_Spawn_Ice_C_OnBurst final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           BurstCameraShakeInstance;                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;                           // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCN_Deimos_Monster_Spawn_Ice_C_OnBurst) == 0x000008, "Wrong alignment on GCN_Deimos_Monster_Spawn_Ice_C_OnBurst");
static_assert(sizeof(GCN_Deimos_Monster_Spawn_Ice_C_OnBurst) == 0x000108, "Wrong size on GCN_Deimos_Monster_Spawn_Ice_C_OnBurst");
static_assert(offsetof(GCN_Deimos_Monster_Spawn_Ice_C_OnBurst, MyTarget) == 0x000000, "Member 'GCN_Deimos_Monster_Spawn_Ice_C_OnBurst::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Deimos_Monster_Spawn_Ice_C_OnBurst, Parameters) == 0x000008, "Member 'GCN_Deimos_Monster_Spawn_Ice_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Deimos_Monster_Spawn_Ice_C_OnBurst, ParticleComponents) == 0x0000C0, "Member 'GCN_Deimos_Monster_Spawn_Ice_C_OnBurst::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Deimos_Monster_Spawn_Ice_C_OnBurst, AudioComponents) == 0x0000D0, "Member 'GCN_Deimos_Monster_Spawn_Ice_C_OnBurst::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Deimos_Monster_Spawn_Ice_C_OnBurst, BurstCameraShakeInstance) == 0x0000E0, "Member 'GCN_Deimos_Monster_Spawn_Ice_C_OnBurst::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Deimos_Monster_Spawn_Ice_C_OnBurst, BurstDecalInstance) == 0x0000E8, "Member 'GCN_Deimos_Monster_Spawn_Ice_C_OnBurst::BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Deimos_Monster_Spawn_Ice_C_OnBurst, CallFunc_Array_Get_Item) == 0x0000F0, "Member 'GCN_Deimos_Monster_Spawn_Ice_C_OnBurst::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_Deimos_Monster_Spawn_Ice_C_OnBurst, K2Node_DynamicCast_AsFort_Pawn) == 0x0000F8, "Member 'GCN_Deimos_Monster_Spawn_Ice_C_OnBurst::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GCN_Deimos_Monster_Spawn_Ice_C_OnBurst, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'GCN_Deimos_Monster_Spawn_Ice_C_OnBurst::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Deimos_Monster_Spawn_Ice_C_OnBurst, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000101, "Member 'GCN_Deimos_Monster_Spawn_Ice_C_OnBurst::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");

// Function GCN_Deimos_Monster_Spawn_Ice.GCN_Deimos_Monster_Spawn_Ice_C.OnExecute
// 0x00C8 (0x00C8 - 0x0000)
struct GCN_Deimos_Monster_Spawn_Ice_C_OnExecute final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_OnExecute_ReturnValue;                    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCN_Deimos_Monster_Spawn_Ice_C_OnExecute) == 0x000008, "Wrong alignment on GCN_Deimos_Monster_Spawn_Ice_C_OnExecute");
static_assert(sizeof(GCN_Deimos_Monster_Spawn_Ice_C_OnExecute) == 0x0000C8, "Wrong size on GCN_Deimos_Monster_Spawn_Ice_C_OnExecute");
static_assert(offsetof(GCN_Deimos_Monster_Spawn_Ice_C_OnExecute, MyTarget) == 0x000000, "Member 'GCN_Deimos_Monster_Spawn_Ice_C_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Deimos_Monster_Spawn_Ice_C_OnExecute, Parameters) == 0x000008, "Member 'GCN_Deimos_Monster_Spawn_Ice_C_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Deimos_Monster_Spawn_Ice_C_OnExecute, ReturnValue) == 0x0000C0, "Member 'GCN_Deimos_Monster_Spawn_Ice_C_OnExecute::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Deimos_Monster_Spawn_Ice_C_OnExecute, CallFunc_OnExecute_ReturnValue) == 0x0000C1, "Member 'GCN_Deimos_Monster_Spawn_Ice_C_OnExecute::CallFunc_OnExecute_ReturnValue' has a wrong offset!");

}

