﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Athena_ShockGrenade

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C
// 0x0170 (0x0908 - 0x0798)
class AB_Prj_Athena_ShockGrenade_C final : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0798(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        BeepTimer;                                         // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Fuse_Particle;                                     // 0x07A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 ShockGrenadeMesh;                                  // 0x07B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        GrenadeFuse_AudioComponent;                        // 0x07C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Effect_Distance;                                   // 0x07C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        P_Explosion;                                       // 0x07D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_DistantSound;                                  // 0x07D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_CloseSound;                                    // 0x07E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_GrenadeFuseSound;                              // 0x07E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocation;                                       // 0x07F0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FC[0x4];                                      // 0x07FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              Target;                                            // 0x0800(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_BeepSound;                                     // 0x0808(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0810(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StuckVehicle;                                      // 0x081C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81D[0x3];                                      // 0x081D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AEnemyPawn_Parent_C*                    DeimosPawn;                                        // 0x0820(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      DestroyObjectTypes;                                // 0x0828(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScalableFloat                         DestroyDistance;                                   // 0x0838(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         ShouldDestroy;                                     // 0x0858(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         LaunchVelocity;                                    // 0x0878(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         ExplodeDelay;                                      // 0x0898(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         EnemiesTakeFallDamage;                             // 0x08B8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         AllPlayersTakeFallDamage;                          // 0x08D8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                             Cue_StopSound;                                     // 0x08F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ChestLootTableName;                                // 0x0900(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Prj_Athena_ShockGrenade(int32 EntryPoint);
	void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& HitResult, bool bIsOverlap);
	void LaunchDeimos();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults);
	void Stop_Rotation();
	void OnStop(const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void Handle_Pawn_Detach_RC();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Athena_ShockGrenade_C">();
	}
	static class AB_Prj_Athena_ShockGrenade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Athena_ShockGrenade_C>();
	}
};
static_assert(alignof(AB_Prj_Athena_ShockGrenade_C) == 0x000008, "Wrong alignment on AB_Prj_Athena_ShockGrenade_C");
static_assert(sizeof(AB_Prj_Athena_ShockGrenade_C) == 0x000908, "Wrong size on AB_Prj_Athena_ShockGrenade_C");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, UberGraphFrame) == 0x000798, "Member 'AB_Prj_Athena_ShockGrenade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, BeepTimer) == 0x0007A0, "Member 'AB_Prj_Athena_ShockGrenade_C::BeepTimer' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, Fuse_Particle) == 0x0007A8, "Member 'AB_Prj_Athena_ShockGrenade_C::Fuse_Particle' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, ShockGrenadeMesh) == 0x0007B0, "Member 'AB_Prj_Athena_ShockGrenade_C::ShockGrenadeMesh' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, RotatingMovement) == 0x0007B8, "Member 'AB_Prj_Athena_ShockGrenade_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, GrenadeFuse_AudioComponent) == 0x0007C0, "Member 'AB_Prj_Athena_ShockGrenade_C::GrenadeFuse_AudioComponent' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, Effect_Distance) == 0x0007C8, "Member 'AB_Prj_Athena_ShockGrenade_C::Effect_Distance' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, P_Explosion) == 0x0007D0, "Member 'AB_Prj_Athena_ShockGrenade_C::P_Explosion' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, Cue_DistantSound) == 0x0007D8, "Member 'AB_Prj_Athena_ShockGrenade_C::Cue_DistantSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, Cue_CloseSound) == 0x0007E0, "Member 'AB_Prj_Athena_ShockGrenade_C::Cue_CloseSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, Cue_GrenadeFuseSound) == 0x0007E8, "Member 'AB_Prj_Athena_ShockGrenade_C::Cue_GrenadeFuseSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, HitLocation) == 0x0007F0, "Member 'AB_Prj_Athena_ShockGrenade_C::HitLocation' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, Target) == 0x000800, "Member 'AB_Prj_Athena_ShockGrenade_C::Target' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, Cue_BeepSound) == 0x000808, "Member 'AB_Prj_Athena_ShockGrenade_C::Cue_BeepSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, HitNormal) == 0x000810, "Member 'AB_Prj_Athena_ShockGrenade_C::HitNormal' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, StuckVehicle) == 0x00081C, "Member 'AB_Prj_Athena_ShockGrenade_C::StuckVehicle' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, DeimosPawn) == 0x000820, "Member 'AB_Prj_Athena_ShockGrenade_C::DeimosPawn' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, DestroyObjectTypes) == 0x000828, "Member 'AB_Prj_Athena_ShockGrenade_C::DestroyObjectTypes' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, DestroyDistance) == 0x000838, "Member 'AB_Prj_Athena_ShockGrenade_C::DestroyDistance' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, ShouldDestroy) == 0x000858, "Member 'AB_Prj_Athena_ShockGrenade_C::ShouldDestroy' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, LaunchVelocity) == 0x000878, "Member 'AB_Prj_Athena_ShockGrenade_C::LaunchVelocity' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, ExplodeDelay) == 0x000898, "Member 'AB_Prj_Athena_ShockGrenade_C::ExplodeDelay' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, EnemiesTakeFallDamage) == 0x0008B8, "Member 'AB_Prj_Athena_ShockGrenade_C::EnemiesTakeFallDamage' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, AllPlayersTakeFallDamage) == 0x0008D8, "Member 'AB_Prj_Athena_ShockGrenade_C::AllPlayersTakeFallDamage' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, Cue_StopSound) == 0x0008F8, "Member 'AB_Prj_Athena_ShockGrenade_C::Cue_StopSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ShockGrenade_C, ChestLootTableName) == 0x000900, "Member 'AB_Prj_Athena_ShockGrenade_C::ChestLootTableName' has a wrong offset!");

}

