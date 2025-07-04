﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BGA_FireworksMortar_Holder

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_BGA_FireworksMortar_Holder.B_BGA_FireworksMortar_Holder_C
// 0x00D8 (0x0840 - 0x0768)
class AB_BGA_FireworksMortar_Holder_C final : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0768(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Audio_Fireworks_Mortar_Launch;                     // 0x0770(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Base;                                              // 0x0778(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        BasePivot;                                         // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        FXSpawn;                                           // 0x0788(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Top;                                               // 0x0790(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         DelayBottleRockets;                                // 0x07A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxSlope;                                          // 0x07AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Impact_Loc;                                        // 0x07B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x07BC(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bResumeSimulation;                                 // 0x07C8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_7C9[0x7];                                      // 0x07C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         FoundBuildingOnDied;                               // 0x07D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class USoundBase*                             PlacementSound;                                    // 0x07E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               MeshLandRotation;                                  // 0x07E8(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         ArrowPlacementPitch;                               // 0x07F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseGroundRotOffset;                                // 0x07F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F9[0x3];                                      // 0x07F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DeathDelay;                                        // 0x07FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         YawOffset;                                         // 0x0800(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_804[0x4];                                      // 0x0804(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UForceFeedbackEffect*                   ForceFeedbackNear;                                 // 0x0808(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   ForceFeedbackFar;                                  // 0x0810(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeathHiddenDelay;                                  // 0x0818(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ApplyRotation;                                     // 0x081C(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          StartedDestroying;                                 // 0x081D(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_81E[0x2];                                      // 0x081E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           Rocket_HideParam_Names;                            // 0x0820(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         RocketCounter;                                     // 0x0830(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_834[0x4];                                      // 0x0834(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             LaunchSound;                                       // 0x0838(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_BGA_FireworksMortar_Holder(int32 EntryPoint);
	void GameplayCue_Athena_FireworksMortar_MuzzleFlash(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void Remove_Rocket();
	void HandleBinding(class AActor* Actor);
	void AttachMortar(class AActor* AttachActor, const struct FHitResult& Hit);
	void MuzzleFlash();
	void HitSaved();
	void DestroyHolder();
	void SetRotation(const struct FRotator& PlayerYaw, float YawOffset_0);
	void BaseDestroyed(class AActor* DestroyedActor);
	void BaseDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal_0, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void StartSpawningBottleRockets();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void OnRep_bResumeSimulation();
	void OnRep_StartedDestroying();
	void OnRep_ApplyRotation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_BGA_FireworksMortar_Holder_C">();
	}
	static class AB_BGA_FireworksMortar_Holder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_BGA_FireworksMortar_Holder_C>();
	}
};
static_assert(alignof(AB_BGA_FireworksMortar_Holder_C) == 0x000008, "Wrong alignment on AB_BGA_FireworksMortar_Holder_C");
static_assert(sizeof(AB_BGA_FireworksMortar_Holder_C) == 0x000840, "Wrong size on AB_BGA_FireworksMortar_Holder_C");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, UberGraphFrame) == 0x000768, "Member 'AB_BGA_FireworksMortar_Holder_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, Audio_Fireworks_Mortar_Launch) == 0x000770, "Member 'AB_BGA_FireworksMortar_Holder_C::Audio_Fireworks_Mortar_Launch' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, Base) == 0x000778, "Member 'AB_BGA_FireworksMortar_Holder_C::Base' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, BasePivot) == 0x000780, "Member 'AB_BGA_FireworksMortar_Holder_C::BasePivot' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, FXSpawn) == 0x000788, "Member 'AB_BGA_FireworksMortar_Holder_C::FXSpawn' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, Top) == 0x000790, "Member 'AB_BGA_FireworksMortar_Holder_C::Top' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, Capsule) == 0x000798, "Member 'AB_BGA_FireworksMortar_Holder_C::Capsule' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, ProjectileMovement) == 0x0007A0, "Member 'AB_BGA_FireworksMortar_Holder_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, DelayBottleRockets) == 0x0007A8, "Member 'AB_BGA_FireworksMortar_Holder_C::DelayBottleRockets' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, MaxSlope) == 0x0007AC, "Member 'AB_BGA_FireworksMortar_Holder_C::MaxSlope' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, Impact_Loc) == 0x0007B0, "Member 'AB_BGA_FireworksMortar_Holder_C::Impact_Loc' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, HitNormal) == 0x0007BC, "Member 'AB_BGA_FireworksMortar_Holder_C::HitNormal' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, bResumeSimulation) == 0x0007C8, "Member 'AB_BGA_FireworksMortar_Holder_C::bResumeSimulation' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, FoundBuildingOnDied) == 0x0007D0, "Member 'AB_BGA_FireworksMortar_Holder_C::FoundBuildingOnDied' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, PlacementSound) == 0x0007E0, "Member 'AB_BGA_FireworksMortar_Holder_C::PlacementSound' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, MeshLandRotation) == 0x0007E8, "Member 'AB_BGA_FireworksMortar_Holder_C::MeshLandRotation' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, ArrowPlacementPitch) == 0x0007F4, "Member 'AB_BGA_FireworksMortar_Holder_C::ArrowPlacementPitch' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, UseGroundRotOffset) == 0x0007F8, "Member 'AB_BGA_FireworksMortar_Holder_C::UseGroundRotOffset' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, DeathDelay) == 0x0007FC, "Member 'AB_BGA_FireworksMortar_Holder_C::DeathDelay' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, YawOffset) == 0x000800, "Member 'AB_BGA_FireworksMortar_Holder_C::YawOffset' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, ForceFeedbackNear) == 0x000808, "Member 'AB_BGA_FireworksMortar_Holder_C::ForceFeedbackNear' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, ForceFeedbackFar) == 0x000810, "Member 'AB_BGA_FireworksMortar_Holder_C::ForceFeedbackFar' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, DeathHiddenDelay) == 0x000818, "Member 'AB_BGA_FireworksMortar_Holder_C::DeathHiddenDelay' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, ApplyRotation) == 0x00081C, "Member 'AB_BGA_FireworksMortar_Holder_C::ApplyRotation' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, StartedDestroying) == 0x00081D, "Member 'AB_BGA_FireworksMortar_Holder_C::StartedDestroying' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, Rocket_HideParam_Names) == 0x000820, "Member 'AB_BGA_FireworksMortar_Holder_C::Rocket_HideParam_Names' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, RocketCounter) == 0x000830, "Member 'AB_BGA_FireworksMortar_Holder_C::RocketCounter' has a wrong offset!");
static_assert(offsetof(AB_BGA_FireworksMortar_Holder_C, LaunchSound) == 0x000838, "Member 'AB_BGA_FireworksMortar_Holder_C::LaunchSound' has a wrong offset!");

}

