﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trap_Floor_Spikes

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Trap_Floor_Spikes.Trap_Floor_Spikes_C
// 0x00B8 (0x0E30 - 0x0D78)
class ATrap_Floor_Spikes_C final : public ABuildingTrapFloor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Spike_Mesh;                                        // 0x0D80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Trigger;                                           // 0x0D88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0D90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         ResetSpikes_LERP_FCB6779D4DCA9F66ECE8A7B3FDDF9459; // 0x0D98(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ResetSpikes__Direction_FCB6779D4DCA9F66ECE8A7B3FDDF9459; // 0x0D9C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9D[0x3];                                      // 0x0D9D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ResetSpikes;                                       // 0x0DA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Retract_LERP_0B9D97AE4B5C790D47D67889C6EAE1CD;     // 0x0DA8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Retract__Direction_0B9D97AE4B5C790D47D67889C6EAE1CD; // 0x0DAC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DAD[0x3];                                      // 0x0DAD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Retract;                                           // 0x0DB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fire_LERP_31BA074043AA09D9C415BAAA81B9DCBF;        // 0x0DB8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Fire__Direction_31BA074043AA09D9C415BAAA81B9DCBF;  // 0x0DBC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DBD[0x3];                                      // 0x0DBD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Fire;                                              // 0x0DC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Place_Trap_Sound;                                  // 0x0DC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Active_Sound;                                 // 0x0DD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Reload_Sound;                                      // 0x0DD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Explode_Sound;                                // 0x0DE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Fire_Sound;                                   // 0x0DE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpikeRestingScale;                                 // 0x0DF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpikeActiveScale;                                  // 0x0DF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpikeHoldOnFireLength;                             // 0x0DF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DFC[0x4];                                      // 0x0DFC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               SpikesMID;                                         // 0x0E00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SweepExponent;                                     // 0x0E08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SweepColor;                                        // 0x0E0C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SweepSpeed;                                        // 0x0E1C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     FriendlyTrapMaterial;                              // 0x0E20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     NormalSpikeMaterial;                               // 0x0E28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Trap_Floor_Spikes(int32 EntryPoint);
	void OnInitTeam();
	void OnWorldReady();
	void OnOutOfDurability();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void OnFinishedBuilding();
	void OnPlaced();
	void OnReloadEnd();
	void ResetSpikes__UpdateFunc();
	void ResetSpikes__FinishedFunc();
	void Retract__Sounds__EventFunc();
	void Retract__UpdateFunc();
	void Retract__FinishedFunc();
	void Fire__UpdateFunc();
	void Fire__FinishedFunc();
	void UserConstructionScript();
	void SetSpikePosition(float NewSpikePosition);
	void MaterialSweepOnSpikes(float SweepSpeed_0, const struct FLinearColor& SweepColor_0, float SweepExponent_0);
	void _ChangeToFriendlyMaterial();
	void ChangeToNormalMaterial();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Trap_Floor_Spikes_C">();
	}
	static class ATrap_Floor_Spikes_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATrap_Floor_Spikes_C>();
	}
};
static_assert(alignof(ATrap_Floor_Spikes_C) == 0x000008, "Wrong alignment on ATrap_Floor_Spikes_C");
static_assert(sizeof(ATrap_Floor_Spikes_C) == 0x000E30, "Wrong size on ATrap_Floor_Spikes_C");
static_assert(offsetof(ATrap_Floor_Spikes_C, UberGraphFrame) == 0x000D78, "Member 'ATrap_Floor_Spikes_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, Spike_Mesh) == 0x000D80, "Member 'ATrap_Floor_Spikes_C::Spike_Mesh' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, Trigger) == 0x000D88, "Member 'ATrap_Floor_Spikes_C::Trigger' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, Root) == 0x000D90, "Member 'ATrap_Floor_Spikes_C::Root' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, ResetSpikes_LERP_FCB6779D4DCA9F66ECE8A7B3FDDF9459) == 0x000D98, "Member 'ATrap_Floor_Spikes_C::ResetSpikes_LERP_FCB6779D4DCA9F66ECE8A7B3FDDF9459' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, ResetSpikes__Direction_FCB6779D4DCA9F66ECE8A7B3FDDF9459) == 0x000D9C, "Member 'ATrap_Floor_Spikes_C::ResetSpikes__Direction_FCB6779D4DCA9F66ECE8A7B3FDDF9459' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, ResetSpikes) == 0x000DA0, "Member 'ATrap_Floor_Spikes_C::ResetSpikes' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, Retract_LERP_0B9D97AE4B5C790D47D67889C6EAE1CD) == 0x000DA8, "Member 'ATrap_Floor_Spikes_C::Retract_LERP_0B9D97AE4B5C790D47D67889C6EAE1CD' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, Retract__Direction_0B9D97AE4B5C790D47D67889C6EAE1CD) == 0x000DAC, "Member 'ATrap_Floor_Spikes_C::Retract__Direction_0B9D97AE4B5C790D47D67889C6EAE1CD' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, Retract) == 0x000DB0, "Member 'ATrap_Floor_Spikes_C::Retract' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, Fire_LERP_31BA074043AA09D9C415BAAA81B9DCBF) == 0x000DB8, "Member 'ATrap_Floor_Spikes_C::Fire_LERP_31BA074043AA09D9C415BAAA81B9DCBF' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, Fire__Direction_31BA074043AA09D9C415BAAA81B9DCBF) == 0x000DBC, "Member 'ATrap_Floor_Spikes_C::Fire__Direction_31BA074043AA09D9C415BAAA81B9DCBF' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, Fire) == 0x000DC0, "Member 'ATrap_Floor_Spikes_C::Fire' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, Place_Trap_Sound) == 0x000DC8, "Member 'ATrap_Floor_Spikes_C::Place_Trap_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, Trap_Active_Sound) == 0x000DD0, "Member 'ATrap_Floor_Spikes_C::Trap_Active_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, Reload_Sound) == 0x000DD8, "Member 'ATrap_Floor_Spikes_C::Reload_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, Trap_Explode_Sound) == 0x000DE0, "Member 'ATrap_Floor_Spikes_C::Trap_Explode_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, Trap_Fire_Sound) == 0x000DE8, "Member 'ATrap_Floor_Spikes_C::Trap_Fire_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, SpikeRestingScale) == 0x000DF0, "Member 'ATrap_Floor_Spikes_C::SpikeRestingScale' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, SpikeActiveScale) == 0x000DF4, "Member 'ATrap_Floor_Spikes_C::SpikeActiveScale' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, SpikeHoldOnFireLength) == 0x000DF8, "Member 'ATrap_Floor_Spikes_C::SpikeHoldOnFireLength' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, SpikesMID) == 0x000E00, "Member 'ATrap_Floor_Spikes_C::SpikesMID' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, SweepExponent) == 0x000E08, "Member 'ATrap_Floor_Spikes_C::SweepExponent' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, SweepColor) == 0x000E0C, "Member 'ATrap_Floor_Spikes_C::SweepColor' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, SweepSpeed) == 0x000E1C, "Member 'ATrap_Floor_Spikes_C::SweepSpeed' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, FriendlyTrapMaterial) == 0x000E20, "Member 'ATrap_Floor_Spikes_C::FriendlyTrapMaterial' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Spikes_C, NormalSpikeMaterial) == 0x000E28, "Member 'ATrap_Floor_Spikes_C::NormalSpikeMaterial' has a wrong offset!");

}

