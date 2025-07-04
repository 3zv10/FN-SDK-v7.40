﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_RiftPortal_Item_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C
// 0x0330 (0x0AE0 - 0x07B0)
class ABGA_RiftPortal_Item_Athena_C final : public AFortAthenaRiftPortal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                  RiftPostProcess;                                   // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       PostProcessRadius;                                 // 0x07C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_RiftClosingUp;                                   // 0x07C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Rift_Idle_Loop;                                  // 0x07D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      OverlapCapsule;                                    // 0x07D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x07E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Rift;                                           // 0x07E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio_Looping;                                     // 0x07F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         FragmentMovement_Glow_9A68D88241DDB9CCA0BC82888C4EC266; // 0x07F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FragmentMovement_Open_9A68D88241DDB9CCA0BC82888C4EC266; // 0x07FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FragmentMovement__Direction_9A68D88241DDB9CCA0BC82888C4EC266; // 0x0800(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_801[0x7];                                      // 0x0801(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FragmentMovement;                                  // 0x0808(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Audio_RiftDestroyed_PitchCurve_00EF53CD47287903FB5B01AC2A7BE7C6; // 0x0810(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Audio_RiftDestroyed__Direction_00EF53CD47287903FB5B01AC2A7BE7C6; // 0x0814(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_815[0x3];                                      // 0x0815(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Audio_RiftDestroyed;                               // 0x0818(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         VectorScale_Open_1424CF6C4426FFF7BA2A64817506E111; // 0x0820(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            VectorScale__Direction_1424CF6C4426FFF7BA2A64817506E111; // 0x0824(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_825[0x3];                                      // 0x0825(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     VectorScale;                                       // 0x0828(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        DeathEffects;                                      // 0x0830(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             EnteredRift;                                       // 0x0838(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             RiftDestroyed;                                     // 0x0840(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0848(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TeleportLocation;                                  // 0x0850(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85C[0x4];                                      // 0x085C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        EnterRift;                                         // 0x0860(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaVehicle*                     Vehicle;                                           // 0x0868(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PortalOpen;                                        // 0x0870(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_871[0x7];                                      // 0x0871(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           FallingAnimation;                                  // 0x0878(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         TeleportHeight;                                    // 0x0880(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         ActiveDuration;                                    // 0x08A0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Hangtime;                                          // 0x08C0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         TeleportDelay;                                     // 0x08E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E4[0x4];                                      // 0x08E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AFortPlayerPawn*>                PassengerArray;                                    // 0x08E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UParticleSystem*                        CrackExitRift;                                     // 0x08F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             PlayerExitSkyCrack;                                // 0x0900(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ActorOriginalLocation;                             // 0x0908(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxSpawnHeightMultiplier;                          // 0x0914(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*               QuestItem;                                         // 0x0918(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ObjectiveBackendName;                              // 0x0920(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    ObjStat;                                           // 0x0928(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UFortQuestItemDefinition*               RiftPortalLocationsQuest;                          // 0x0938(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    ObjStatLoc_1;                                      // 0x0940(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_2;                                      // 0x0950(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_3;                                      // 0x0960(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_4;                                      // 0x0970(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_5;                                      // 0x0980(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_6;                                      // 0x0990(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_7;                                      // 0x09A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_8;                                      // 0x09B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_9;                                      // 0x09C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_10;                                     // 0x09D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_11;                                     // 0x09E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_12;                                     // 0x09F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_13;                                     // 0x0A00(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_14;                                     // 0x0A10(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_15;                                     // 0x0A20(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_16;                                     // 0x0A30(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_17;                                     // 0x0A40(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_18;                                     // 0x0A50(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_19;                                     // 0x0A60(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_20;                                     // 0x0A70(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_21;                                     // 0x0A80(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_22;                                     // 0x0A90(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_23;                                     // 0x0AA0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ObjStatLoc_24;                                     // 0x0AB0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          CreativeMode;                                      // 0x0AC0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AC1[0x7];                                      // 0x0AC1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 OverlapActor;                                      // 0x0AC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RiftLocationNum;                                   // 0x0AD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ActorRotation;                                     // 0x0AD4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BGA_RiftPortal_Item_Athena(int32 EntryPoint);
	void VehicleInteractionFailed(class AFortPlayerPawnAthena* FortPlayerPawnAthena);
	void PlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags);
	void NotifyTeleportedVehicle(class AFortAthenaVehicle* Vehicle_0);
	void VehicleTeleportEvent();
	void OverlappingOnBeginPlay(class AActor* Actor);
	void PlayCosmeticFX();
	void PlayTeleportFX(const struct FVector& PlayerLocation);
	void ReceiveBeginPlay();
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void DestroyRift();
	void FragmentMovement__UpdateFunc();
	void FragmentMovement__FinishedFunc();
	void VectorScale__UpdateFunc();
	void VectorScale__FinishedFunc();
	void Audio_RiftDestroyed__UpdateFunc();
	void Audio_RiftDestroyed__FinishedFunc();
	void UserConstructionScript();
	void PlayExpandOrCollapseAudio(bool Expand);
	void OnRep_TeleportLocation();
	void OnRep_Vehicle();
	void OnRep_PlayerPawn();
	void CheckForRiftLocUpdate(class AController* InController);
	void UseRiftQuestUpdate(class AController* InController);
	void Is_Flying(bool* NewParam);
	void EjectFromTurret(class AFortPlayerPawn* PlayerPawn_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_RiftPortal_Item_Athena_C">();
	}
	static class ABGA_RiftPortal_Item_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_RiftPortal_Item_Athena_C>();
	}
};
static_assert(alignof(ABGA_RiftPortal_Item_Athena_C) == 0x000008, "Wrong alignment on ABGA_RiftPortal_Item_Athena_C");
static_assert(sizeof(ABGA_RiftPortal_Item_Athena_C) == 0x000AE0, "Wrong size on ABGA_RiftPortal_Item_Athena_C");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, UberGraphFrame) == 0x0007B0, "Member 'ABGA_RiftPortal_Item_Athena_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, RiftPostProcess) == 0x0007B8, "Member 'ABGA_RiftPortal_Item_Athena_C::RiftPostProcess' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, PostProcessRadius) == 0x0007C0, "Member 'ABGA_RiftPortal_Item_Athena_C::PostProcessRadius' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, P_RiftClosingUp) == 0x0007C8, "Member 'ABGA_RiftPortal_Item_Athena_C::P_RiftClosingUp' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, P_Rift_Idle_Loop) == 0x0007D0, "Member 'ABGA_RiftPortal_Item_Athena_C::P_Rift_Idle_Loop' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, OverlapCapsule) == 0x0007D8, "Member 'ABGA_RiftPortal_Item_Athena_C::OverlapCapsule' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, Capsule) == 0x0007E0, "Member 'ABGA_RiftPortal_Item_Athena_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, SM_Rift) == 0x0007E8, "Member 'ABGA_RiftPortal_Item_Athena_C::SM_Rift' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, Audio_Looping) == 0x0007F0, "Member 'ABGA_RiftPortal_Item_Athena_C::Audio_Looping' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, FragmentMovement_Glow_9A68D88241DDB9CCA0BC82888C4EC266) == 0x0007F8, "Member 'ABGA_RiftPortal_Item_Athena_C::FragmentMovement_Glow_9A68D88241DDB9CCA0BC82888C4EC266' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, FragmentMovement_Open_9A68D88241DDB9CCA0BC82888C4EC266) == 0x0007FC, "Member 'ABGA_RiftPortal_Item_Athena_C::FragmentMovement_Open_9A68D88241DDB9CCA0BC82888C4EC266' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, FragmentMovement__Direction_9A68D88241DDB9CCA0BC82888C4EC266) == 0x000800, "Member 'ABGA_RiftPortal_Item_Athena_C::FragmentMovement__Direction_9A68D88241DDB9CCA0BC82888C4EC266' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, FragmentMovement) == 0x000808, "Member 'ABGA_RiftPortal_Item_Athena_C::FragmentMovement' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, Audio_RiftDestroyed_PitchCurve_00EF53CD47287903FB5B01AC2A7BE7C6) == 0x000810, "Member 'ABGA_RiftPortal_Item_Athena_C::Audio_RiftDestroyed_PitchCurve_00EF53CD47287903FB5B01AC2A7BE7C6' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, Audio_RiftDestroyed__Direction_00EF53CD47287903FB5B01AC2A7BE7C6) == 0x000814, "Member 'ABGA_RiftPortal_Item_Athena_C::Audio_RiftDestroyed__Direction_00EF53CD47287903FB5B01AC2A7BE7C6' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, Audio_RiftDestroyed) == 0x000818, "Member 'ABGA_RiftPortal_Item_Athena_C::Audio_RiftDestroyed' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, VectorScale_Open_1424CF6C4426FFF7BA2A64817506E111) == 0x000820, "Member 'ABGA_RiftPortal_Item_Athena_C::VectorScale_Open_1424CF6C4426FFF7BA2A64817506E111' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, VectorScale__Direction_1424CF6C4426FFF7BA2A64817506E111) == 0x000824, "Member 'ABGA_RiftPortal_Item_Athena_C::VectorScale__Direction_1424CF6C4426FFF7BA2A64817506E111' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, VectorScale) == 0x000828, "Member 'ABGA_RiftPortal_Item_Athena_C::VectorScale' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, DeathEffects) == 0x000830, "Member 'ABGA_RiftPortal_Item_Athena_C::DeathEffects' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, EnteredRift) == 0x000838, "Member 'ABGA_RiftPortal_Item_Athena_C::EnteredRift' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, RiftDestroyed) == 0x000840, "Member 'ABGA_RiftPortal_Item_Athena_C::RiftDestroyed' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, PlayerPawn) == 0x000848, "Member 'ABGA_RiftPortal_Item_Athena_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, TeleportLocation) == 0x000850, "Member 'ABGA_RiftPortal_Item_Athena_C::TeleportLocation' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, EnterRift) == 0x000860, "Member 'ABGA_RiftPortal_Item_Athena_C::EnterRift' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, Vehicle) == 0x000868, "Member 'ABGA_RiftPortal_Item_Athena_C::Vehicle' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, PortalOpen) == 0x000870, "Member 'ABGA_RiftPortal_Item_Athena_C::PortalOpen' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, FallingAnimation) == 0x000878, "Member 'ABGA_RiftPortal_Item_Athena_C::FallingAnimation' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, TeleportHeight) == 0x000880, "Member 'ABGA_RiftPortal_Item_Athena_C::TeleportHeight' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ActiveDuration) == 0x0008A0, "Member 'ABGA_RiftPortal_Item_Athena_C::ActiveDuration' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, Hangtime) == 0x0008C0, "Member 'ABGA_RiftPortal_Item_Athena_C::Hangtime' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, TeleportDelay) == 0x0008E0, "Member 'ABGA_RiftPortal_Item_Athena_C::TeleportDelay' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, PassengerArray) == 0x0008E8, "Member 'ABGA_RiftPortal_Item_Athena_C::PassengerArray' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, CrackExitRift) == 0x0008F8, "Member 'ABGA_RiftPortal_Item_Athena_C::CrackExitRift' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, PlayerExitSkyCrack) == 0x000900, "Member 'ABGA_RiftPortal_Item_Athena_C::PlayerExitSkyCrack' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ActorOriginalLocation) == 0x000908, "Member 'ABGA_RiftPortal_Item_Athena_C::ActorOriginalLocation' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, MaxSpawnHeightMultiplier) == 0x000914, "Member 'ABGA_RiftPortal_Item_Athena_C::MaxSpawnHeightMultiplier' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, QuestItem) == 0x000918, "Member 'ABGA_RiftPortal_Item_Athena_C::QuestItem' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjectiveBackendName) == 0x000920, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjectiveBackendName' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStat) == 0x000928, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStat' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, RiftPortalLocationsQuest) == 0x000938, "Member 'ABGA_RiftPortal_Item_Athena_C::RiftPortalLocationsQuest' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_1) == 0x000940, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_1' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_2) == 0x000950, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_2' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_3) == 0x000960, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_3' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_4) == 0x000970, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_4' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_5) == 0x000980, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_5' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_6) == 0x000990, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_6' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_7) == 0x0009A0, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_7' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_8) == 0x0009B0, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_8' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_9) == 0x0009C0, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_9' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_10) == 0x0009D0, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_10' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_11) == 0x0009E0, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_11' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_12) == 0x0009F0, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_12' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_13) == 0x000A00, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_13' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_14) == 0x000A10, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_14' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_15) == 0x000A20, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_15' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_16) == 0x000A30, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_16' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_17) == 0x000A40, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_17' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_18) == 0x000A50, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_18' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_19) == 0x000A60, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_19' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_20) == 0x000A70, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_20' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_21) == 0x000A80, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_21' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_22) == 0x000A90, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_22' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_23) == 0x000AA0, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_23' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ObjStatLoc_24) == 0x000AB0, "Member 'ABGA_RiftPortal_Item_Athena_C::ObjStatLoc_24' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, CreativeMode) == 0x000AC0, "Member 'ABGA_RiftPortal_Item_Athena_C::CreativeMode' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, OverlapActor) == 0x000AC8, "Member 'ABGA_RiftPortal_Item_Athena_C::OverlapActor' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, RiftLocationNum) == 0x000AD0, "Member 'ABGA_RiftPortal_Item_Athena_C::RiftLocationNum' has a wrong offset!");
static_assert(offsetof(ABGA_RiftPortal_Item_Athena_C, ActorRotation) == 0x000AD4, "Member 'ABGA_RiftPortal_Item_Athena_C::ActorRotation' has a wrong offset!");

}

