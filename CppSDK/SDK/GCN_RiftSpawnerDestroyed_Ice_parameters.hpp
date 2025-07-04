﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_RiftSpawnerDestroyed_Ice

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_RiftSpawnerDestroyed_Ice.GCN_RiftSpawnerDestroyed_Ice_C.OnBurst
// 0x00F0 (0x00F0 - 0x0000)
struct GCN_RiftSpawnerDestroyed_Ice_C_OnBurst final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           BurstCameraShakeInstance;                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_RiftSpawnerDestroyed_Ice_C_OnBurst) == 0x000008, "Wrong alignment on GCN_RiftSpawnerDestroyed_Ice_C_OnBurst");
static_assert(sizeof(GCN_RiftSpawnerDestroyed_Ice_C_OnBurst) == 0x0000F0, "Wrong size on GCN_RiftSpawnerDestroyed_Ice_C_OnBurst");
static_assert(offsetof(GCN_RiftSpawnerDestroyed_Ice_C_OnBurst, MyTarget) == 0x000000, "Member 'GCN_RiftSpawnerDestroyed_Ice_C_OnBurst::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_RiftSpawnerDestroyed_Ice_C_OnBurst, Parameters) == 0x000008, "Member 'GCN_RiftSpawnerDestroyed_Ice_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_RiftSpawnerDestroyed_Ice_C_OnBurst, ParticleComponents) == 0x0000C0, "Member 'GCN_RiftSpawnerDestroyed_Ice_C_OnBurst::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_RiftSpawnerDestroyed_Ice_C_OnBurst, AudioComponents) == 0x0000D0, "Member 'GCN_RiftSpawnerDestroyed_Ice_C_OnBurst::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_RiftSpawnerDestroyed_Ice_C_OnBurst, BurstCameraShakeInstance) == 0x0000E0, "Member 'GCN_RiftSpawnerDestroyed_Ice_C_OnBurst::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_RiftSpawnerDestroyed_Ice_C_OnBurst, BurstDecalInstance) == 0x0000E8, "Member 'GCN_RiftSpawnerDestroyed_Ice_C_OnBurst::BurstDecalInstance' has a wrong offset!");

}

