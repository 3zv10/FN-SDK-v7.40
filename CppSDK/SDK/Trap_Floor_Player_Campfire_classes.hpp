﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trap_Floor_Player_Campfire

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C
// 0x0170 (0x0EE8 - 0x0D78)
class ATrap_Floor_Player_Campfire_C final : public ABuildingTrapFloor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_Smoke;                                           // 0x0D80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wood;                                              // 0x0D88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CampfirePit;                                       // 0x0D90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Master;                                            // 0x0D98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Athena_Campfire_Doused;                          // 0x0DA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x0DA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Athena_Campfire;                                 // 0x0DB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        PlacementSoundLocation;                            // 0x0DB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ProximityTraceOrigin;                              // 0x0DC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         DarkenLogs_Lerp_2F1CB1BF43762B3942D07DA06E56DCA6;  // 0x0DC8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            DarkenLogs__Direction_2F1CB1BF43762B3942D07DA06E56DCA6; // 0x0DCC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DCD[0x3];                                      // 0x0DCD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     DarkenLogs;                                        // 0x0DD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeDoused_Fade_87602AFE48A3F8C64AA9BD9884FBF57E;  // 0x0DD8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FadeDoused__Direction_87602AFE48A3F8C64AA9BD9884FBF57E; // 0x0DDC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DDD[0x3];                                      // 0x0DDD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FadeDoused;                                        // 0x0DE0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Placed_Sound;                                 // 0x0DE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Active_Sound;                                 // 0x0DF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Fire_Sound;                                   // 0x0DF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Reload_Sound;                                 // 0x0E00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Explode_Sound;                                // 0x0E08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x0E10(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_E11[0x3];                                      // 0x0E11(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumTicks;                                          // 0x0E14(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxTicks;                                          // 0x0E18(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AOE_Radius;                                        // 0x0E1C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      OverlapObjectTypes;                                // 0x0E20(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                AOE_BoxExtents;                                    // 0x0E30(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AOE_FireDamageBoxExtents;                          // 0x0E3C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CampfireDousedSound;                               // 0x0E48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             WoodRemovalSound;                                  // 0x0E50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WoodRemovalFX;                                     // 0x0E58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         Row_MaxHeals;                                      // 0x0E60(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_DousedDuration;                                // 0x0E80(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_TickInterval;                                  // 0x0EA0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_ShouldStack;                                   // 0x0EC0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Play_Rate;                                         // 0x0EE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Trap_Floor_Player_Campfire(int32 EntryPoint);
	void CharLogs();
	void DousedTime();
	void TriggerLaunchEffects(class AFortPlayerPawnAthena* Pawn);
	void OnOutOfDurability();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Traps_ReloadBegin(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void OnFinishedBuilding();
	void OnPlaced();
	void OnReloadEnd();
	void DarkenLogs__UpdateFunc();
	void DarkenLogs__FinishedFunc();
	void FadeDoused__UpdateFunc();
	void FadeDoused__FinishedFunc();
	void UserConstructionScript();
	void OnRep_IsActive();
	void HealTicks();
	void InitCampfireEffects();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Trap_Floor_Player_Campfire_C">();
	}
	static class ATrap_Floor_Player_Campfire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATrap_Floor_Player_Campfire_C>();
	}
};
static_assert(alignof(ATrap_Floor_Player_Campfire_C) == 0x000008, "Wrong alignment on ATrap_Floor_Player_Campfire_C");
static_assert(sizeof(ATrap_Floor_Player_Campfire_C) == 0x000EE8, "Wrong size on ATrap_Floor_Player_Campfire_C");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, UberGraphFrame) == 0x000D78, "Member 'ATrap_Floor_Player_Campfire_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, P_Smoke) == 0x000D80, "Member 'ATrap_Floor_Player_Campfire_C::P_Smoke' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, Wood) == 0x000D88, "Member 'ATrap_Floor_Player_Campfire_C::Wood' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, CampfirePit) == 0x000D90, "Member 'ATrap_Floor_Player_Campfire_C::CampfirePit' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, Master) == 0x000D98, "Member 'ATrap_Floor_Player_Campfire_C::Master' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, P_Athena_Campfire_Doused) == 0x000DA0, "Member 'ATrap_Floor_Player_Campfire_C::P_Athena_Campfire_Doused' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, Audio) == 0x000DA8, "Member 'ATrap_Floor_Player_Campfire_C::Audio' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, P_Athena_Campfire) == 0x000DB0, "Member 'ATrap_Floor_Player_Campfire_C::P_Athena_Campfire' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, PlacementSoundLocation) == 0x000DB8, "Member 'ATrap_Floor_Player_Campfire_C::PlacementSoundLocation' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, ProximityTraceOrigin) == 0x000DC0, "Member 'ATrap_Floor_Player_Campfire_C::ProximityTraceOrigin' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, DarkenLogs_Lerp_2F1CB1BF43762B3942D07DA06E56DCA6) == 0x000DC8, "Member 'ATrap_Floor_Player_Campfire_C::DarkenLogs_Lerp_2F1CB1BF43762B3942D07DA06E56DCA6' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, DarkenLogs__Direction_2F1CB1BF43762B3942D07DA06E56DCA6) == 0x000DCC, "Member 'ATrap_Floor_Player_Campfire_C::DarkenLogs__Direction_2F1CB1BF43762B3942D07DA06E56DCA6' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, DarkenLogs) == 0x000DD0, "Member 'ATrap_Floor_Player_Campfire_C::DarkenLogs' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, FadeDoused_Fade_87602AFE48A3F8C64AA9BD9884FBF57E) == 0x000DD8, "Member 'ATrap_Floor_Player_Campfire_C::FadeDoused_Fade_87602AFE48A3F8C64AA9BD9884FBF57E' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, FadeDoused__Direction_87602AFE48A3F8C64AA9BD9884FBF57E) == 0x000DDC, "Member 'ATrap_Floor_Player_Campfire_C::FadeDoused__Direction_87602AFE48A3F8C64AA9BD9884FBF57E' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, FadeDoused) == 0x000DE0, "Member 'ATrap_Floor_Player_Campfire_C::FadeDoused' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, Trap_Placed_Sound) == 0x000DE8, "Member 'ATrap_Floor_Player_Campfire_C::Trap_Placed_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, Trap_Active_Sound) == 0x000DF0, "Member 'ATrap_Floor_Player_Campfire_C::Trap_Active_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, Trap_Fire_Sound) == 0x000DF8, "Member 'ATrap_Floor_Player_Campfire_C::Trap_Fire_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, Trap_Reload_Sound) == 0x000E00, "Member 'ATrap_Floor_Player_Campfire_C::Trap_Reload_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, Trap_Explode_Sound) == 0x000E08, "Member 'ATrap_Floor_Player_Campfire_C::Trap_Explode_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, IsActive) == 0x000E10, "Member 'ATrap_Floor_Player_Campfire_C::IsActive' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, NumTicks) == 0x000E14, "Member 'ATrap_Floor_Player_Campfire_C::NumTicks' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, MaxTicks) == 0x000E18, "Member 'ATrap_Floor_Player_Campfire_C::MaxTicks' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, AOE_Radius) == 0x000E1C, "Member 'ATrap_Floor_Player_Campfire_C::AOE_Radius' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, OverlapObjectTypes) == 0x000E20, "Member 'ATrap_Floor_Player_Campfire_C::OverlapObjectTypes' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, AOE_BoxExtents) == 0x000E30, "Member 'ATrap_Floor_Player_Campfire_C::AOE_BoxExtents' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, AOE_FireDamageBoxExtents) == 0x000E3C, "Member 'ATrap_Floor_Player_Campfire_C::AOE_FireDamageBoxExtents' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, CampfireDousedSound) == 0x000E48, "Member 'ATrap_Floor_Player_Campfire_C::CampfireDousedSound' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, WoodRemovalSound) == 0x000E50, "Member 'ATrap_Floor_Player_Campfire_C::WoodRemovalSound' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, WoodRemovalFX) == 0x000E58, "Member 'ATrap_Floor_Player_Campfire_C::WoodRemovalFX' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, Row_MaxHeals) == 0x000E60, "Member 'ATrap_Floor_Player_Campfire_C::Row_MaxHeals' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, Row_DousedDuration) == 0x000E80, "Member 'ATrap_Floor_Player_Campfire_C::Row_DousedDuration' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, Row_TickInterval) == 0x000EA0, "Member 'ATrap_Floor_Player_Campfire_C::Row_TickInterval' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, Row_ShouldStack) == 0x000EC0, "Member 'ATrap_Floor_Player_Campfire_C::Row_ShouldStack' has a wrong offset!");
static_assert(offsetof(ATrap_Floor_Player_Campfire_C, Play_Rate) == 0x000EE0, "Member 'ATrap_Floor_Player_Campfire_C::Play_Rate' has a wrong offset!");

}

