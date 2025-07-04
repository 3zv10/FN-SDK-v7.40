﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Athena_Balloons

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_Athena_Balloons.BGA_Athena_Balloons_C
// 0x0090 (0x0810 - 0x0780)
class ABGA_Athena_Balloons_C final : public ABuildingGameplayActorBalloon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0780(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Audio;                                             // 0x0788(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponentBudgeted*         Balloon_SKBudgeted;                                // 0x0790(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Balloon_Pop;                                     // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               BalloonMID;                                        // 0x07A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   Balloon_Color_Choices;                             // 0x07B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         Balloon_Color_Selection;                           // 0x07C0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_7C4[0x4];                                      // 0x07C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTexture*>                       StencilArray;                                      // 0x07C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         BalloonStencilSelection;                           // 0x07D8(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_7DC[0x4];                                      // 0x07DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 IntArray;                                          // 0x07E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          isReleased;                                        // 0x07F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F1[0x7];                                      // 0x07F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             BalloonPopCue;                                     // 0x07F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           SpawnMontage;                                      // 0x0800(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             BalloonIndestruct_Sound;                           // 0x0808(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BGA_Athena_Balloons(int32 EntryPoint);
	void PlayTeamBalloonImpactSound();
	void BroadcastBalloonShotEvent(class AActor* Shooter);
	void PlayPopFX(const struct FHitResult& HitEvent);
	void OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void PopAtMaxHeight();
	void ReceiveBeginPlay();
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void Released();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_Athena_Balloons_C">();
	}
	static class ABGA_Athena_Balloons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_Athena_Balloons_C>();
	}
};
static_assert(alignof(ABGA_Athena_Balloons_C) == 0x000008, "Wrong alignment on ABGA_Athena_Balloons_C");
static_assert(sizeof(ABGA_Athena_Balloons_C) == 0x000810, "Wrong size on ABGA_Athena_Balloons_C");
static_assert(offsetof(ABGA_Athena_Balloons_C, UberGraphFrame) == 0x000780, "Member 'ABGA_Athena_Balloons_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Balloons_C, Audio) == 0x000788, "Member 'ABGA_Athena_Balloons_C::Audio' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Balloons_C, Balloon_SKBudgeted) == 0x000790, "Member 'ABGA_Athena_Balloons_C::Balloon_SKBudgeted' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Balloons_C, P_Balloon_Pop) == 0x000798, "Member 'ABGA_Athena_Balloons_C::P_Balloon_Pop' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Balloons_C, ProjectileMovement) == 0x0007A0, "Member 'ABGA_Athena_Balloons_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Balloons_C, BalloonMID) == 0x0007A8, "Member 'ABGA_Athena_Balloons_C::BalloonMID' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Balloons_C, Balloon_Color_Choices) == 0x0007B0, "Member 'ABGA_Athena_Balloons_C::Balloon_Color_Choices' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Balloons_C, Balloon_Color_Selection) == 0x0007C0, "Member 'ABGA_Athena_Balloons_C::Balloon_Color_Selection' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Balloons_C, StencilArray) == 0x0007C8, "Member 'ABGA_Athena_Balloons_C::StencilArray' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Balloons_C, BalloonStencilSelection) == 0x0007D8, "Member 'ABGA_Athena_Balloons_C::BalloonStencilSelection' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Balloons_C, IntArray) == 0x0007E0, "Member 'ABGA_Athena_Balloons_C::IntArray' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Balloons_C, isReleased) == 0x0007F0, "Member 'ABGA_Athena_Balloons_C::isReleased' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Balloons_C, BalloonPopCue) == 0x0007F8, "Member 'ABGA_Athena_Balloons_C::BalloonPopCue' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Balloons_C, SpawnMontage) == 0x000800, "Member 'ABGA_Athena_Balloons_C::SpawnMontage' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_Balloons_C, BalloonIndestruct_Sound) == 0x000808, "Member 'ABGA_Athena_Balloons_C::BalloonIndestruct_Sound' has a wrong offset!");

}

