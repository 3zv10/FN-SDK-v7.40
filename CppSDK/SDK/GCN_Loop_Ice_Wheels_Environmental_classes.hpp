﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Loop_Ice_Wheels_Environmental

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C
// 0x0060 (0x08E0 - 0x0880)
class AGCN_Loop_Ice_Wheels_Environmental_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UParticleSystemComponent*>       LoopingEmitters;                                   // 0x0888(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortCollisionAudioComponent*           CollisionAudioComp;                                // 0x0898(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAudioComponent*>                SpawnedAudioComps;                                 // 0x08A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AFortAthenaSKVehicle*                   TargetVehicle;                                     // 0x08B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShoppingCart;                                      // 0x08B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B9[0x7];                                      // 0x08B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           GolfSockets;                                       // 0x08C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FName>                           ShoppingSockets;                                   // 0x08D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GCN_Loop_Ice_Wheels_Environmental(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void UserConstructionScript();
	void SpawnEmittersAttachedToWheels(TArray<class FName>& Sockets, class USceneComponent* AttachToComponent, bool ShoppingCart_0, class UParticleSystem* EmitterTemplate, TArray<class UParticleSystemComponent*>* SpawnedEmitters1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Loop_Ice_Wheels_Environmental_C">();
	}
	static class AGCN_Loop_Ice_Wheels_Environmental_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Loop_Ice_Wheels_Environmental_C>();
	}
};
static_assert(alignof(AGCN_Loop_Ice_Wheels_Environmental_C) == 0x000008, "Wrong alignment on AGCN_Loop_Ice_Wheels_Environmental_C");
static_assert(sizeof(AGCN_Loop_Ice_Wheels_Environmental_C) == 0x0008E0, "Wrong size on AGCN_Loop_Ice_Wheels_Environmental_C");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_Environmental_C, UberGraphFrame) == 0x000880, "Member 'AGCN_Loop_Ice_Wheels_Environmental_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_Environmental_C, LoopingEmitters) == 0x000888, "Member 'AGCN_Loop_Ice_Wheels_Environmental_C::LoopingEmitters' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_Environmental_C, CollisionAudioComp) == 0x000898, "Member 'AGCN_Loop_Ice_Wheels_Environmental_C::CollisionAudioComp' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_Environmental_C, SpawnedAudioComps) == 0x0008A0, "Member 'AGCN_Loop_Ice_Wheels_Environmental_C::SpawnedAudioComps' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_Environmental_C, TargetVehicle) == 0x0008B0, "Member 'AGCN_Loop_Ice_Wheels_Environmental_C::TargetVehicle' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_Environmental_C, ShoppingCart) == 0x0008B8, "Member 'AGCN_Loop_Ice_Wheels_Environmental_C::ShoppingCart' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_Environmental_C, GolfSockets) == 0x0008C0, "Member 'AGCN_Loop_Ice_Wheels_Environmental_C::GolfSockets' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Wheels_Environmental_C, ShoppingSockets) == 0x0008D0, "Member 'AGCN_Loop_Ice_Wheels_Environmental_C::ShoppingSockets' has a wrong offset!");

}

