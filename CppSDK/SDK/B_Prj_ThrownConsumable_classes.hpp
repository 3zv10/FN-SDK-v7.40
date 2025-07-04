﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_ThrownConsumable

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Prj_ThrownConsumable_Parent_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C
// 0x0078 (0x0828 - 0x07B0)
class AB_Prj_ThrownConsumable_C : public AB_Prj_ThrownConsumable_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Prj_ThrownConsumable_C;           // 0x07B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortCollisionAudioComponent*           FortCollisionAudio;                                // 0x07C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Fuse_Particle;                                     // 0x07C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x07D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        GrenadeFuse_AudioComponent;                        // 0x07D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        P_Explosion;                                       // 0x07E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExplosionRadius;                                   // 0x07E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EC[0x4];                                      // 0x07EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UForceFeedbackEffect*                   ExplosionForceFeedbackNear;                        // 0x07F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   ExplosionForceFeedbackFar;                         // 0x07F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ExplosionCameraShake;                              // 0x0800(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_GrenadeFuseSound;                              // 0x0808(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_CloseSound;                                    // 0x0810(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_DistantSound;                                  // 0x0818(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_Bounce;                                        // 0x0820(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Prj_ThrownConsumable(int32 EntryPoint);
	void ResetSimulatedComponents();
	void OnStop(const struct FHitResult& Hit);
	void OnBounce(const struct FHitResult& Hit);
	void OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_ThrownConsumable_C">();
	}
	static class AB_Prj_ThrownConsumable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_ThrownConsumable_C>();
	}
};
static_assert(alignof(AB_Prj_ThrownConsumable_C) == 0x000008, "Wrong alignment on AB_Prj_ThrownConsumable_C");
static_assert(sizeof(AB_Prj_ThrownConsumable_C) == 0x000828, "Wrong size on AB_Prj_ThrownConsumable_C");
static_assert(offsetof(AB_Prj_ThrownConsumable_C, UberGraphFrame_B_Prj_ThrownConsumable_C) == 0x0007B0, "Member 'AB_Prj_ThrownConsumable_C::UberGraphFrame_B_Prj_ThrownConsumable_C' has a wrong offset!");
static_assert(offsetof(AB_Prj_ThrownConsumable_C, RotatingMovement) == 0x0007B8, "Member 'AB_Prj_ThrownConsumable_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(AB_Prj_ThrownConsumable_C, FortCollisionAudio) == 0x0007C0, "Member 'AB_Prj_ThrownConsumable_C::FortCollisionAudio' has a wrong offset!");
static_assert(offsetof(AB_Prj_ThrownConsumable_C, Fuse_Particle) == 0x0007C8, "Member 'AB_Prj_ThrownConsumable_C::Fuse_Particle' has a wrong offset!");
static_assert(offsetof(AB_Prj_ThrownConsumable_C, Mesh) == 0x0007D0, "Member 'AB_Prj_ThrownConsumable_C::Mesh' has a wrong offset!");
static_assert(offsetof(AB_Prj_ThrownConsumable_C, GrenadeFuse_AudioComponent) == 0x0007D8, "Member 'AB_Prj_ThrownConsumable_C::GrenadeFuse_AudioComponent' has a wrong offset!");
static_assert(offsetof(AB_Prj_ThrownConsumable_C, P_Explosion) == 0x0007E0, "Member 'AB_Prj_ThrownConsumable_C::P_Explosion' has a wrong offset!");
static_assert(offsetof(AB_Prj_ThrownConsumable_C, ExplosionRadius) == 0x0007E8, "Member 'AB_Prj_ThrownConsumable_C::ExplosionRadius' has a wrong offset!");
static_assert(offsetof(AB_Prj_ThrownConsumable_C, ExplosionForceFeedbackNear) == 0x0007F0, "Member 'AB_Prj_ThrownConsumable_C::ExplosionForceFeedbackNear' has a wrong offset!");
static_assert(offsetof(AB_Prj_ThrownConsumable_C, ExplosionForceFeedbackFar) == 0x0007F8, "Member 'AB_Prj_ThrownConsumable_C::ExplosionForceFeedbackFar' has a wrong offset!");
static_assert(offsetof(AB_Prj_ThrownConsumable_C, ExplosionCameraShake) == 0x000800, "Member 'AB_Prj_ThrownConsumable_C::ExplosionCameraShake' has a wrong offset!");
static_assert(offsetof(AB_Prj_ThrownConsumable_C, Cue_GrenadeFuseSound) == 0x000808, "Member 'AB_Prj_ThrownConsumable_C::Cue_GrenadeFuseSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_ThrownConsumable_C, Cue_CloseSound) == 0x000810, "Member 'AB_Prj_ThrownConsumable_C::Cue_CloseSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_ThrownConsumable_C, Cue_DistantSound) == 0x000818, "Member 'AB_Prj_ThrownConsumable_C::Cue_DistantSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_ThrownConsumable_C, Cue_Bounce) == 0x000820, "Member 'AB_Prj_ThrownConsumable_C::Cue_Bounce' has a wrong offset!");

}

