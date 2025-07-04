﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_Bush

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Athena_Bush.GCN_Athena_Bush_C
// 0x0090 (0x0910 - 0x0880)
class AGCN_Athena_Bush_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   OwningPlayer_BushMesh;                             // 0x0888(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow2;                                            // 0x0890(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow1;                                            // 0x0898(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BushMesh;                                          // 0x08A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x08A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Trail_Leaves;                                      // 0x08B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         OpacityFade_OpacityFadeOut_B989988545DAA0B2E69D77AE069A4437; // 0x08B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            OpacityFade__Direction_B989988545DAA0B2E69D77AE069A4437; // 0x08BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BD[0x3];                                      // 0x08BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     OpacityFade;                                       // 0x08C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 PlayerPawn;                                        // 0x08C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_Bush;                                          // 0x08D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x08D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D9[0x7];                                      // 0x08D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MID_OwningClientBush;                              // 0x08E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                   ClientBushOpacity;                                 // 0x08E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         TargetOpacity;                                     // 0x08F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FC[0x4];                                      // 0x08FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        BushDestructionVFX;                                // 0x0900(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             BushDestructionSFX;                                // 0x0908(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCN_Athena_Bush(int32 EntryPoint);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void On_Player_Step();
	void ReceiveTick(float DeltaSeconds);
	void OpacityFade__FinishedFunc();
	void OpacityFade__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Athena_Bush_C">();
	}
	static class AGCN_Athena_Bush_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Athena_Bush_C>();
	}
};
static_assert(alignof(AGCN_Athena_Bush_C) == 0x000008, "Wrong alignment on AGCN_Athena_Bush_C");
static_assert(sizeof(AGCN_Athena_Bush_C) == 0x000910, "Wrong size on AGCN_Athena_Bush_C");
static_assert(offsetof(AGCN_Athena_Bush_C, UberGraphFrame) == 0x000880, "Member 'AGCN_Athena_Bush_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, OwningPlayer_BushMesh) == 0x000888, "Member 'AGCN_Athena_Bush_C::OwningPlayer_BushMesh' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, Arrow2) == 0x000890, "Member 'AGCN_Athena_Bush_C::Arrow2' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, Arrow1) == 0x000898, "Member 'AGCN_Athena_Bush_C::Arrow1' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, BushMesh) == 0x0008A0, "Member 'AGCN_Athena_Bush_C::BushMesh' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, Arrow) == 0x0008A8, "Member 'AGCN_Athena_Bush_C::Arrow' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, Trail_Leaves) == 0x0008B0, "Member 'AGCN_Athena_Bush_C::Trail_Leaves' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, OpacityFade_OpacityFadeOut_B989988545DAA0B2E69D77AE069A4437) == 0x0008B8, "Member 'AGCN_Athena_Bush_C::OpacityFade_OpacityFadeOut_B989988545DAA0B2E69D77AE069A4437' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, OpacityFade__Direction_B989988545DAA0B2E69D77AE069A4437) == 0x0008BC, "Member 'AGCN_Athena_Bush_C::OpacityFade__Direction_B989988545DAA0B2E69D77AE069A4437' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, OpacityFade) == 0x0008C0, "Member 'AGCN_Athena_Bush_C::OpacityFade' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, PlayerPawn) == 0x0008C8, "Member 'AGCN_Athena_Bush_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, MID_Bush) == 0x0008D0, "Member 'AGCN_Athena_Bush_C::MID_Bush' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, IsActive) == 0x0008D8, "Member 'AGCN_Athena_Bush_C::IsActive' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, MID_OwningClientBush) == 0x0008E0, "Member 'AGCN_Athena_Bush_C::MID_OwningClientBush' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, ClientBushOpacity) == 0x0008E8, "Member 'AGCN_Athena_Bush_C::ClientBushOpacity' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, TargetOpacity) == 0x0008F8, "Member 'AGCN_Athena_Bush_C::TargetOpacity' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, BushDestructionVFX) == 0x000900, "Member 'AGCN_Athena_Bush_C::BushDestructionVFX' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, BushDestructionSFX) == 0x000908, "Member 'AGCN_Athena_Bush_C::BushDestructionSFX' has a wrong offset!");

}

