﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_RefinedRift_Teleport

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_RefinedRift_Teleport.GCN_RefinedRift_Teleport_C
// 0x0000 (0x01A0 - 0x01A0)
class UGCN_RefinedRift_Teleport_C final : public UFortGameplayCueNotify_Burst
{
public:
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;
	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, const struct FGameplayCueParameters& Parameters) const;
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_RefinedRift_Teleport_C">();
	}
	static class UGCN_RefinedRift_Teleport_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_RefinedRift_Teleport_C>();
	}
};
static_assert(alignof(UGCN_RefinedRift_Teleport_C) == 0x000008, "Wrong alignment on UGCN_RefinedRift_Teleport_C");
static_assert(sizeof(UGCN_RefinedRift_Teleport_C) == 0x0001A0, "Wrong size on UGCN_RefinedRift_Teleport_C");

}

