﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PrjPawn_Athena_RCRocket

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_PrjPawn_Athena_RCRocket.B_PrjPawn_Athena_RCRocket_C
// 0x0160 (0x29D0 - 0x2870)
class AB_PrjPawn_Athena_RCRocket_C final : public AFortRemoteControlledPawnAthena
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2870(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               Jet_Launch;                                        // 0x2878(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          RideBox;                                           // 0x2880(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitBox;                                            // 0x2888(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPoseableMeshComponent*                 PoseableMissileMesh;                               // 0x2890(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               BlinkingLight;                                     // 0x2898(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LoadMissile;                                       // 0x28A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Jet;                                               // 0x28A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        MissileInAirBankingAudio;                          // 0x28B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        MissileInAirAudio;                                 // 0x28B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ScaleUpRocket_ScaleRocket_AE4726BD4835EF8E9D886681DC468461; // 0x28C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ScaleUpRocket__Direction_AE4726BD4835EF8E9D886681DC468461; // 0x28CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28CD[0x3];                                     // 0x28CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ScaleUpRocket;                                     // 0x28D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDetached;                                         // 0x28D8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          bTransformed;                                      // 0x28D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_28DA[0x6];                                     // 0x28DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             ExplosionSound;                                    // 0x28E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        ExplosionPS;                                       // 0x28E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        TransformationPS;                                  // 0x28F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             TransformationSound;                               // 0x28F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Tick_Delta;                                        // 0x2900(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CurrentVector;                                     // 0x2904(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PreviousVector;                                    // 0x2910(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LevelOutRotation;                                  // 0x291C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Turn_Rate;                                         // 0x2920(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BankingAudioVolume;                                // 0x2924(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BankingAudioPitch;                                 // 0x2928(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TurnAudioModulator;                                // 0x292C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TurnAudioModulatorMax;                             // 0x2930(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LeftWing;                                          // 0x2934(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RightWing;                                         // 0x293C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TopWing;                                           // 0x2944(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BottomWing;                                        // 0x294C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2954[0x4];                                     // 0x2954(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_RCRocket_Launcher_Athena_C*          MissileLauncher;                                   // 0x2958(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           SwapToIdleAnim;                                    // 0x2960(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           ControllerAnim;                                    // 0x2968(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeOutTime;                                       // 0x2970(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayBeforeMeshSwap;                               // 0x2974(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxFuelAmount;                                     // 0x2978(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_297C[0x4];                                     // 0x297C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           FuelTimer;                                         // 0x2980(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             MissileInAirSound;                                 // 0x2988(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             MissileLowFuelSound;                               // 0x2990(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Missile_LowFuelWarning;                            // 0x2998(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ControllerRocketFX;                                // 0x29A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        ScreenSoundComponent;                              // 0x29A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayToggleRC_Vis;                                 // 0x29B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29B4[0x4];                                     // 0x29B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        HologramRocket;                                    // 0x29B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasPlayedFuelWarningSound;                        // 0x29C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_B_PrjPawn_Athena_RCRocket(int32 EntryPoint);
	void BndEvt__HitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnClientSetupRemoteControlPawn();
	void StartFuelTimer();
	void ResetWeapon();
	void Handle_Movement_Audio();
	void LevelOutMissile();
	void SetPreviousVector();
	void Multicast_HandleOnKill();
	void OnDoKill();
	void ReceiveTick(float DeltaSeconds);
	void OnTriggeredHealthThreshold(float PreviousTriggeredHealthThreshold, float CurrentTriggeredHealthThreshold);
	void ReceiveUnpossessed(class AController* OldController);
	void ReceiveBeginPlay();
	void OnCompleted_FCA2D54B4941303C809ADFA4DDC7D622(class FName NotifyName);
	void OnBlendOut_FCA2D54B4941303C809ADFA4DDC7D622(class FName NotifyName);
	void OnInterrupted_FCA2D54B4941303C809ADFA4DDC7D622(class FName NotifyName);
	void OnNotifyBegin_FCA2D54B4941303C809ADFA4DDC7D622(class FName NotifyName);
	void OnNotifyEnd_FCA2D54B4941303C809ADFA4DDC7D622(class FName NotifyName);
	void OnCompleted_1C6565004725732561E54185F8C600B6(class FName NotifyName);
	void OnBlendOut_1C6565004725732561E54185F8C600B6(class FName NotifyName);
	void OnInterrupted_1C6565004725732561E54185F8C600B6(class FName NotifyName);
	void OnNotifyBegin_1C6565004725732561E54185F8C600B6(class FName NotifyName);
	void OnNotifyEnd_1C6565004725732561E54185F8C600B6(class FName NotifyName);
	void ScaleUpRocket__UpdateFunc();
	void ScaleUpRocket__FinishedFunc();
	void UserConstructionScript();
	void OnRep_bDetached();
	void FuelLevelVisuals();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_PrjPawn_Athena_RCRocket_C">();
	}
	static class AB_PrjPawn_Athena_RCRocket_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_PrjPawn_Athena_RCRocket_C>();
	}
};
static_assert(alignof(AB_PrjPawn_Athena_RCRocket_C) == 0x000010, "Wrong alignment on AB_PrjPawn_Athena_RCRocket_C");
static_assert(sizeof(AB_PrjPawn_Athena_RCRocket_C) == 0x0029D0, "Wrong size on AB_PrjPawn_Athena_RCRocket_C");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, UberGraphFrame) == 0x002870, "Member 'AB_PrjPawn_Athena_RCRocket_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, Jet_Launch) == 0x002878, "Member 'AB_PrjPawn_Athena_RCRocket_C::Jet_Launch' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, RideBox) == 0x002880, "Member 'AB_PrjPawn_Athena_RCRocket_C::RideBox' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, HitBox) == 0x002888, "Member 'AB_PrjPawn_Athena_RCRocket_C::HitBox' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, PoseableMissileMesh) == 0x002890, "Member 'AB_PrjPawn_Athena_RCRocket_C::PoseableMissileMesh' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, BlinkingLight) == 0x002898, "Member 'AB_PrjPawn_Athena_RCRocket_C::BlinkingLight' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, LoadMissile) == 0x0028A0, "Member 'AB_PrjPawn_Athena_RCRocket_C::LoadMissile' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, Jet) == 0x0028A8, "Member 'AB_PrjPawn_Athena_RCRocket_C::Jet' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, MissileInAirBankingAudio) == 0x0028B0, "Member 'AB_PrjPawn_Athena_RCRocket_C::MissileInAirBankingAudio' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, MissileInAirAudio) == 0x0028B8, "Member 'AB_PrjPawn_Athena_RCRocket_C::MissileInAirAudio' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, ScaleUpRocket_ScaleRocket_AE4726BD4835EF8E9D886681DC468461) == 0x0028C0, "Member 'AB_PrjPawn_Athena_RCRocket_C::ScaleUpRocket_ScaleRocket_AE4726BD4835EF8E9D886681DC468461' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, ScaleUpRocket__Direction_AE4726BD4835EF8E9D886681DC468461) == 0x0028CC, "Member 'AB_PrjPawn_Athena_RCRocket_C::ScaleUpRocket__Direction_AE4726BD4835EF8E9D886681DC468461' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, ScaleUpRocket) == 0x0028D0, "Member 'AB_PrjPawn_Athena_RCRocket_C::ScaleUpRocket' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, bDetached) == 0x0028D8, "Member 'AB_PrjPawn_Athena_RCRocket_C::bDetached' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, bTransformed) == 0x0028D9, "Member 'AB_PrjPawn_Athena_RCRocket_C::bTransformed' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, ExplosionSound) == 0x0028E0, "Member 'AB_PrjPawn_Athena_RCRocket_C::ExplosionSound' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, ExplosionPS) == 0x0028E8, "Member 'AB_PrjPawn_Athena_RCRocket_C::ExplosionPS' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, TransformationPS) == 0x0028F0, "Member 'AB_PrjPawn_Athena_RCRocket_C::TransformationPS' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, TransformationSound) == 0x0028F8, "Member 'AB_PrjPawn_Athena_RCRocket_C::TransformationSound' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, Tick_Delta) == 0x002900, "Member 'AB_PrjPawn_Athena_RCRocket_C::Tick_Delta' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, CurrentVector) == 0x002904, "Member 'AB_PrjPawn_Athena_RCRocket_C::CurrentVector' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, PreviousVector) == 0x002910, "Member 'AB_PrjPawn_Athena_RCRocket_C::PreviousVector' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, LevelOutRotation) == 0x00291C, "Member 'AB_PrjPawn_Athena_RCRocket_C::LevelOutRotation' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, Turn_Rate) == 0x002920, "Member 'AB_PrjPawn_Athena_RCRocket_C::Turn_Rate' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, BankingAudioVolume) == 0x002924, "Member 'AB_PrjPawn_Athena_RCRocket_C::BankingAudioVolume' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, BankingAudioPitch) == 0x002928, "Member 'AB_PrjPawn_Athena_RCRocket_C::BankingAudioPitch' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, TurnAudioModulator) == 0x00292C, "Member 'AB_PrjPawn_Athena_RCRocket_C::TurnAudioModulator' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, TurnAudioModulatorMax) == 0x002930, "Member 'AB_PrjPawn_Athena_RCRocket_C::TurnAudioModulatorMax' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, LeftWing) == 0x002934, "Member 'AB_PrjPawn_Athena_RCRocket_C::LeftWing' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, RightWing) == 0x00293C, "Member 'AB_PrjPawn_Athena_RCRocket_C::RightWing' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, TopWing) == 0x002944, "Member 'AB_PrjPawn_Athena_RCRocket_C::TopWing' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, BottomWing) == 0x00294C, "Member 'AB_PrjPawn_Athena_RCRocket_C::BottomWing' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, MissileLauncher) == 0x002958, "Member 'AB_PrjPawn_Athena_RCRocket_C::MissileLauncher' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, SwapToIdleAnim) == 0x002960, "Member 'AB_PrjPawn_Athena_RCRocket_C::SwapToIdleAnim' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, ControllerAnim) == 0x002968, "Member 'AB_PrjPawn_Athena_RCRocket_C::ControllerAnim' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, FadeOutTime) == 0x002970, "Member 'AB_PrjPawn_Athena_RCRocket_C::FadeOutTime' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, DelayBeforeMeshSwap) == 0x002974, "Member 'AB_PrjPawn_Athena_RCRocket_C::DelayBeforeMeshSwap' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, MaxFuelAmount) == 0x002978, "Member 'AB_PrjPawn_Athena_RCRocket_C::MaxFuelAmount' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, FuelTimer) == 0x002980, "Member 'AB_PrjPawn_Athena_RCRocket_C::FuelTimer' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, MissileInAirSound) == 0x002988, "Member 'AB_PrjPawn_Athena_RCRocket_C::MissileInAirSound' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, MissileLowFuelSound) == 0x002990, "Member 'AB_PrjPawn_Athena_RCRocket_C::MissileLowFuelSound' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, Missile_LowFuelWarning) == 0x002998, "Member 'AB_PrjPawn_Athena_RCRocket_C::Missile_LowFuelWarning' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, ControllerRocketFX) == 0x0029A0, "Member 'AB_PrjPawn_Athena_RCRocket_C::ControllerRocketFX' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, ScreenSoundComponent) == 0x0029A8, "Member 'AB_PrjPawn_Athena_RCRocket_C::ScreenSoundComponent' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, DelayToggleRC_Vis) == 0x0029B0, "Member 'AB_PrjPawn_Athena_RCRocket_C::DelayToggleRC_Vis' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, HologramRocket) == 0x0029B8, "Member 'AB_PrjPawn_Athena_RCRocket_C::HologramRocket' has a wrong offset!");
static_assert(offsetof(AB_PrjPawn_Athena_RCRocket_C, bHasPlayedFuelWarningSound) == 0x0029C0, "Member 'AB_PrjPawn_Athena_RCRocket_C::bHasPlayedFuelWarningSound' has a wrong offset!");

}

