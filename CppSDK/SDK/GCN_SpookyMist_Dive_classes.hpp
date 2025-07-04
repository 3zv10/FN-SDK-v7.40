﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_SpookyMist_Dive

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_SpookyMist_Dive.GCN_SpookyMist_Dive_C
// 0x0000 (0x01A0 - 0x01A0)
class UGCN_SpookyMist_Dive_C final : public UFortGameplayCueNotify_Burst
{
public:
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;
	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_SpookyMist_Dive_C">();
	}
	static class UGCN_SpookyMist_Dive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_SpookyMist_Dive_C>();
	}
};
static_assert(alignof(UGCN_SpookyMist_Dive_C) == 0x000008, "Wrong alignment on UGCN_SpookyMist_Dive_C");
static_assert(sizeof(UGCN_SpookyMist_Dive_C) == 0x0001A0, "Wrong size on UGCN_SpookyMist_Dive_C");

}

