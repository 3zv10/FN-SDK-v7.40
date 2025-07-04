﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_GM_OnDeath_AllieDmgBuff

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_GM_OnDeath_AllieDmgBuff.GCNL_GM_OnDeath_AllieDmgBuff_C
// 0x0088 (0x0908 - 0x0880)
class AGCNL_GM_OnDeath_AllieDmgBuff_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               HandTrail_R;                                       // 0x0888(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               HandTrail_L;                                       // 0x0890(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Body_Mist;                                         // 0x0898(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               BodyMistFX;                                        // 0x08A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Hand_Trail_L;                                      // 0x08A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               HandTrailR;                                        // 0x08B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FLinearColor>        Enrage_Map;                                        // 0x08B8(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GCNL_GM_OnDeath_AllieDmgBuff(int32 EntryPoint);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void UserConstructionScript();
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_GM_OnDeath_AllieDmgBuff_C">();
	}
	static class AGCNL_GM_OnDeath_AllieDmgBuff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_GM_OnDeath_AllieDmgBuff_C>();
	}
};
static_assert(alignof(AGCNL_GM_OnDeath_AllieDmgBuff_C) == 0x000008, "Wrong alignment on AGCNL_GM_OnDeath_AllieDmgBuff_C");
static_assert(sizeof(AGCNL_GM_OnDeath_AllieDmgBuff_C) == 0x000908, "Wrong size on AGCNL_GM_OnDeath_AllieDmgBuff_C");
static_assert(offsetof(AGCNL_GM_OnDeath_AllieDmgBuff_C, UberGraphFrame) == 0x000880, "Member 'AGCNL_GM_OnDeath_AllieDmgBuff_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_GM_OnDeath_AllieDmgBuff_C, HandTrail_R) == 0x000888, "Member 'AGCNL_GM_OnDeath_AllieDmgBuff_C::HandTrail_R' has a wrong offset!");
static_assert(offsetof(AGCNL_GM_OnDeath_AllieDmgBuff_C, HandTrail_L) == 0x000890, "Member 'AGCNL_GM_OnDeath_AllieDmgBuff_C::HandTrail_L' has a wrong offset!");
static_assert(offsetof(AGCNL_GM_OnDeath_AllieDmgBuff_C, Body_Mist) == 0x000898, "Member 'AGCNL_GM_OnDeath_AllieDmgBuff_C::Body_Mist' has a wrong offset!");
static_assert(offsetof(AGCNL_GM_OnDeath_AllieDmgBuff_C, BodyMistFX) == 0x0008A0, "Member 'AGCNL_GM_OnDeath_AllieDmgBuff_C::BodyMistFX' has a wrong offset!");
static_assert(offsetof(AGCNL_GM_OnDeath_AllieDmgBuff_C, Hand_Trail_L) == 0x0008A8, "Member 'AGCNL_GM_OnDeath_AllieDmgBuff_C::Hand_Trail_L' has a wrong offset!");
static_assert(offsetof(AGCNL_GM_OnDeath_AllieDmgBuff_C, HandTrailR) == 0x0008B0, "Member 'AGCNL_GM_OnDeath_AllieDmgBuff_C::HandTrailR' has a wrong offset!");
static_assert(offsetof(AGCNL_GM_OnDeath_AllieDmgBuff_C, Enrage_Map) == 0x0008B8, "Member 'AGCNL_GM_OnDeath_AllieDmgBuff_C::Enrage_Map' has a wrong offset!");

}

