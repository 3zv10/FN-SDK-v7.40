﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Proj_BoomBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Proj_BoomBox.B_Proj_BoomBox_C
// 0x0090 (0x0828 - 0x0798)
class AB_Proj_BoomBox_C final : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0798(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_BoomBox_InHand;                                 // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        AudioMusic;                                        // 0x07A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TimeUntilMusicStarts;                              // 0x07B0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BeatTime;                                          // 0x07B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         FoundBuildingOnDied;                               // 0x07B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          bResumeSimulation;                                 // 0x07C8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_7C9[0x7];                                      // 0x07C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             SpawnDaBeat;                                       // 0x07D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinDistanceToKnock;                                // 0x07D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxLaunchPower;                                    // 0x07DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        BeatAudioComponent;                                // 0x07E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        NearbyBoomboxLocations;                            // 0x07E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         BeatMultiplierForStart;                            // 0x07F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BeatsPerLoop;                                      // 0x07FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentBeatInTheLoop;                              // 0x0800(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_804[0x4];                                      // 0x0804(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABGA_Athena_BoomBox_C*                  SpawnedBGA;                                        // 0x0808(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinLaunchPower;                                    // 0x0810(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Duration;                                          // 0x0814(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldBounceVehicles;                              // 0x0818(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShouldCameraShake;                                 // 0x0819(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81A[0x2];                                      // 0x081A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InnerRadius;                                       // 0x081C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OuterRadius;                                       // 0x0820(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          b_DroppingTheBeat;                                 // 0x0824(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

public:
	void ExecuteUbergraph_B_Proj_BoomBox(int32 EntryPoint);
	void SpawnBGA();
	void OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ObjectDiedEvent(class AActor* DestroyedActor);
	void BaseDiedEvent(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void ExplodeOnTheBeat();
	void DropTheBeat();
	void OnStop(const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void OnRep_bResumeSimulation();
	void OnRep_b_DroppingTheBeat();
	bool WillBounceOffTarget(const struct FHitResult& Hit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Proj_BoomBox_C">();
	}
	static class AB_Proj_BoomBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Proj_BoomBox_C>();
	}
};
static_assert(alignof(AB_Proj_BoomBox_C) == 0x000008, "Wrong alignment on AB_Proj_BoomBox_C");
static_assert(sizeof(AB_Proj_BoomBox_C) == 0x000828, "Wrong size on AB_Proj_BoomBox_C");
static_assert(offsetof(AB_Proj_BoomBox_C, UberGraphFrame) == 0x000798, "Member 'AB_Proj_BoomBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, SM_BoomBox_InHand) == 0x0007A0, "Member 'AB_Proj_BoomBox_C::SM_BoomBox_InHand' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, AudioMusic) == 0x0007A8, "Member 'AB_Proj_BoomBox_C::AudioMusic' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, TimeUntilMusicStarts) == 0x0007B0, "Member 'AB_Proj_BoomBox_C::TimeUntilMusicStarts' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, BeatTime) == 0x0007B4, "Member 'AB_Proj_BoomBox_C::BeatTime' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, FoundBuildingOnDied) == 0x0007B8, "Member 'AB_Proj_BoomBox_C::FoundBuildingOnDied' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, bResumeSimulation) == 0x0007C8, "Member 'AB_Proj_BoomBox_C::bResumeSimulation' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, SpawnDaBeat) == 0x0007D0, "Member 'AB_Proj_BoomBox_C::SpawnDaBeat' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, MinDistanceToKnock) == 0x0007D8, "Member 'AB_Proj_BoomBox_C::MinDistanceToKnock' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, MaxLaunchPower) == 0x0007DC, "Member 'AB_Proj_BoomBox_C::MaxLaunchPower' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, BeatAudioComponent) == 0x0007E0, "Member 'AB_Proj_BoomBox_C::BeatAudioComponent' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, NearbyBoomboxLocations) == 0x0007E8, "Member 'AB_Proj_BoomBox_C::NearbyBoomboxLocations' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, BeatMultiplierForStart) == 0x0007F8, "Member 'AB_Proj_BoomBox_C::BeatMultiplierForStart' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, BeatsPerLoop) == 0x0007FC, "Member 'AB_Proj_BoomBox_C::BeatsPerLoop' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, CurrentBeatInTheLoop) == 0x000800, "Member 'AB_Proj_BoomBox_C::CurrentBeatInTheLoop' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, SpawnedBGA) == 0x000808, "Member 'AB_Proj_BoomBox_C::SpawnedBGA' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, MinLaunchPower) == 0x000810, "Member 'AB_Proj_BoomBox_C::MinLaunchPower' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, Duration) == 0x000814, "Member 'AB_Proj_BoomBox_C::Duration' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, ShouldBounceVehicles) == 0x000818, "Member 'AB_Proj_BoomBox_C::ShouldBounceVehicles' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, ShouldCameraShake) == 0x000819, "Member 'AB_Proj_BoomBox_C::ShouldCameraShake' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, InnerRadius) == 0x00081C, "Member 'AB_Proj_BoomBox_C::InnerRadius' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, OuterRadius) == 0x000820, "Member 'AB_Proj_BoomBox_C::OuterRadius' has a wrong offset!");
static_assert(offsetof(AB_Proj_BoomBox_C, b_DroppingTheBeat) == 0x000824, "Member 'AB_Proj_BoomBox_C::b_DroppingTheBeat' has a wrong offset!");

}

