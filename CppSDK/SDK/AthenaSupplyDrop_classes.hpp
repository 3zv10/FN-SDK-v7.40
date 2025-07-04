﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSupplyDrop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AthenaSupplyDrop.AthenaSupplyDrop_C
// 0x0178 (0x09E0 - 0x0868)
class AAthenaSupplyDrop_C final : public AFortAthenaSupplyDrop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0868(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        FallingAudio;                                      // 0x0870(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ReticlePSC;                                        // 0x0878(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CrateCollision;                                    // 0x0880(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor;                                        // 0x0888(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        FlareAudio;                                        // 0x0890(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               FlarePSC;                                          // 0x0898(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        ReticleAudio;                                      // 0x08A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CrateStaticMesh;                                   // 0x08A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x08B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              MyInteractingPawn;                                 // 0x08B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LootTableName;                                     // 0x08C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LootSpawnOffset;                                   // 0x08C8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D4[0x4];                                      // 0x08D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Sound_Looted;                                      // 0x08D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_Destroyed;                                   // 0x08E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_Landing;                                     // 0x08E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Opened;                                            // 0x08F0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          BalloonPopped;                                     // 0x08F1(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_8F2[0x6];                                      // 0x08F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        LandingFX;                                         // 0x08F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        DestroyedFX;                                       // 0x0900(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        LootedFX;                                          // 0x0908(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FallSpeed;                                         // 0x0910(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReticleUpdateInterval;                             // 0x0914(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InitialFallDelay;                                  // 0x0918(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91C[0x4];                                      // 0x091C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCurveTableRowHandle                   CurveTable_FallTime;                               // 0x0920(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        FallTrailFX;                                       // 0x0930(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_Appear;                                      // 0x0938(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_ReticleAppear;                               // 0x0940(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_AlmostLanded;                                // 0x0948(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LandingLocation;                                   // 0x0950(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          AutoOpen;                                          // 0x095C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95D[0x3];                                      // 0x095D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCurveTableRowHandle                   MinSpeed;                                          // 0x0960(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                   MaxSpeed;                                          // 0x0970(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         FallHeight;                                        // 0x0980(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DescentOffsetMin;                                  // 0x0984(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DescentOffsetMax;                                  // 0x0988(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FallDirection;                                     // 0x098C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GroundLocation;                                    // 0x0998(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DescentYOffsetMin;                                 // 0x09A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DescentYOffsetMax;                                 // 0x09A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bGroundLocationInitialized;                        // 0x09AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bOverrideRotation;                                 // 0x09AD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AE[0x2];                                      // 0x09AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               OverrideRotation;                                  // 0x09B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BC[0x4];                                      // 0x09BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           NewVar_0;                                          // 0x09C0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          BlingDrop;                                         // 0x09C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C9[0x3];                                      // 0x09C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   LootTableNameToUse;                                // 0x09CC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D4[0x4];                                      // 0x09D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 VehicleType;                                       // 0x09D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaSupplyDrop(int32 EntryPoint);
	void OnLanding();
	void StopFallAudioTimeline();
	void BeginFallAudioTimeline();
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void Multicast_ApplyGravityForFall();
	void OnLandingLocationChanged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void SpawnLoot();
	void Setup_Bind_To_Building_Actor(class UObject* Object);
	void OnRep_Opened();
	void OpenSupplyDrop();
	void UpdateReticleLocation();
	void BalloonDestroyed();
	void OnRep_BalloonPopped();
	void InitFall();
	void PlayLandingFX();
	void InitFallHeightAndSpeed();
	void DisableFlare();
	void AlmostLanded();
	void OnRep_LandingLocation();
	void ForceSetLocationOnLanding();
	void HandleProjectileMovementStop(const struct FHitResult& ImpactResult);
	void OnSetCustomDepthStencilValue(const TArray<class UPrimitiveComponent*>& PrimComponents, bool bUseCustomDepth, int32 StencilValue, bool* bOutConsume);
	void Analytics(const TArray<struct FFortItemEntry>& ItemsToSpawn);
	void SpawnVehicle();

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn) const;
	void GetLootSpawnLocation(struct FVector* LootSpawnLocation) const;
	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaSupplyDrop_C">();
	}
	static class AAthenaSupplyDrop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthenaSupplyDrop_C>();
	}
};
static_assert(alignof(AAthenaSupplyDrop_C) == 0x000008, "Wrong alignment on AAthenaSupplyDrop_C");
static_assert(sizeof(AAthenaSupplyDrop_C) == 0x0009E0, "Wrong size on AAthenaSupplyDrop_C");
static_assert(offsetof(AAthenaSupplyDrop_C, UberGraphFrame) == 0x000868, "Member 'AAthenaSupplyDrop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, FallingAudio) == 0x000870, "Member 'AAthenaSupplyDrop_C::FallingAudio' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, ReticlePSC) == 0x000878, "Member 'AAthenaSupplyDrop_C::ReticlePSC' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, CrateCollision) == 0x000880, "Member 'AAthenaSupplyDrop_C::CrateCollision' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, ChildActor) == 0x000888, "Member 'AAthenaSupplyDrop_C::ChildActor' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, FlareAudio) == 0x000890, "Member 'AAthenaSupplyDrop_C::FlareAudio' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, FlarePSC) == 0x000898, "Member 'AAthenaSupplyDrop_C::FlarePSC' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, ReticleAudio) == 0x0008A0, "Member 'AAthenaSupplyDrop_C::ReticleAudio' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, CrateStaticMesh) == 0x0008A8, "Member 'AAthenaSupplyDrop_C::CrateStaticMesh' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, ProjectileMovement) == 0x0008B0, "Member 'AAthenaSupplyDrop_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, MyInteractingPawn) == 0x0008B8, "Member 'AAthenaSupplyDrop_C::MyInteractingPawn' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, LootTableName) == 0x0008C0, "Member 'AAthenaSupplyDrop_C::LootTableName' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, LootSpawnOffset) == 0x0008C8, "Member 'AAthenaSupplyDrop_C::LootSpawnOffset' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, Sound_Looted) == 0x0008D8, "Member 'AAthenaSupplyDrop_C::Sound_Looted' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, Sound_Destroyed) == 0x0008E0, "Member 'AAthenaSupplyDrop_C::Sound_Destroyed' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, Sound_Landing) == 0x0008E8, "Member 'AAthenaSupplyDrop_C::Sound_Landing' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, Opened) == 0x0008F0, "Member 'AAthenaSupplyDrop_C::Opened' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, BalloonPopped) == 0x0008F1, "Member 'AAthenaSupplyDrop_C::BalloonPopped' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, LandingFX) == 0x0008F8, "Member 'AAthenaSupplyDrop_C::LandingFX' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, DestroyedFX) == 0x000900, "Member 'AAthenaSupplyDrop_C::DestroyedFX' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, LootedFX) == 0x000908, "Member 'AAthenaSupplyDrop_C::LootedFX' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, FallSpeed) == 0x000910, "Member 'AAthenaSupplyDrop_C::FallSpeed' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, ReticleUpdateInterval) == 0x000914, "Member 'AAthenaSupplyDrop_C::ReticleUpdateInterval' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, InitialFallDelay) == 0x000918, "Member 'AAthenaSupplyDrop_C::InitialFallDelay' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, CurveTable_FallTime) == 0x000920, "Member 'AAthenaSupplyDrop_C::CurveTable_FallTime' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, FallTrailFX) == 0x000930, "Member 'AAthenaSupplyDrop_C::FallTrailFX' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, Sound_Appear) == 0x000938, "Member 'AAthenaSupplyDrop_C::Sound_Appear' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, Sound_ReticleAppear) == 0x000940, "Member 'AAthenaSupplyDrop_C::Sound_ReticleAppear' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, Sound_AlmostLanded) == 0x000948, "Member 'AAthenaSupplyDrop_C::Sound_AlmostLanded' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, LandingLocation) == 0x000950, "Member 'AAthenaSupplyDrop_C::LandingLocation' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, AutoOpen) == 0x00095C, "Member 'AAthenaSupplyDrop_C::AutoOpen' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, MinSpeed) == 0x000960, "Member 'AAthenaSupplyDrop_C::MinSpeed' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, MaxSpeed) == 0x000970, "Member 'AAthenaSupplyDrop_C::MaxSpeed' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, FallHeight) == 0x000980, "Member 'AAthenaSupplyDrop_C::FallHeight' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, DescentOffsetMin) == 0x000984, "Member 'AAthenaSupplyDrop_C::DescentOffsetMin' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, DescentOffsetMax) == 0x000988, "Member 'AAthenaSupplyDrop_C::DescentOffsetMax' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, FallDirection) == 0x00098C, "Member 'AAthenaSupplyDrop_C::FallDirection' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, GroundLocation) == 0x000998, "Member 'AAthenaSupplyDrop_C::GroundLocation' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, DescentYOffsetMin) == 0x0009A4, "Member 'AAthenaSupplyDrop_C::DescentYOffsetMin' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, DescentYOffsetMax) == 0x0009A8, "Member 'AAthenaSupplyDrop_C::DescentYOffsetMax' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, bGroundLocationInitialized) == 0x0009AC, "Member 'AAthenaSupplyDrop_C::bGroundLocationInitialized' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, bOverrideRotation) == 0x0009AD, "Member 'AAthenaSupplyDrop_C::bOverrideRotation' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, OverrideRotation) == 0x0009B0, "Member 'AAthenaSupplyDrop_C::OverrideRotation' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, NewVar_0) == 0x0009C0, "Member 'AAthenaSupplyDrop_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, BlingDrop) == 0x0009C8, "Member 'AAthenaSupplyDrop_C::BlingDrop' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, LootTableNameToUse) == 0x0009CC, "Member 'AAthenaSupplyDrop_C::LootTableNameToUse' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDrop_C, VehicleType) == 0x0009D8, "Member 'AAthenaSupplyDrop_C::VehicleType' has a wrong offset!");

}

