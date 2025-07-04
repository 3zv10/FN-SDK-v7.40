﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_GM_Vortex_Activate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C
// 0x0028 (0x03C8 - 0x03A0)
class AGCN_GM_Vortex_Activate_C final : public AGameplayCueNotify_Actor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_F918BF534BE0AED903D63EA6410E0D12; // 0x03B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_F918BF534BE0AED903D63EA6410E0D12; // 0x03B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B5[0x3];                                      // 0x03B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             VortexActivateSound;                               // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCN_GM_Vortex_Activate(int32 EntryPoint);
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void UserConstructionScript();
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_GM_Vortex_Activate_C">();
	}
	static class AGCN_GM_Vortex_Activate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_GM_Vortex_Activate_C>();
	}
};
static_assert(alignof(AGCN_GM_Vortex_Activate_C) == 0x000008, "Wrong alignment on AGCN_GM_Vortex_Activate_C");
static_assert(sizeof(AGCN_GM_Vortex_Activate_C) == 0x0003C8, "Wrong size on AGCN_GM_Vortex_Activate_C");
static_assert(offsetof(AGCN_GM_Vortex_Activate_C, UberGraphFrame) == 0x0003A0, "Member 'AGCN_GM_Vortex_Activate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_GM_Vortex_Activate_C, DefaultSceneRoot) == 0x0003A8, "Member 'AGCN_GM_Vortex_Activate_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AGCN_GM_Vortex_Activate_C, Timeline_0_NewTrack_0_F918BF534BE0AED903D63EA6410E0D12) == 0x0003B0, "Member 'AGCN_GM_Vortex_Activate_C::Timeline_0_NewTrack_0_F918BF534BE0AED903D63EA6410E0D12' has a wrong offset!");
static_assert(offsetof(AGCN_GM_Vortex_Activate_C, Timeline_0__Direction_F918BF534BE0AED903D63EA6410E0D12) == 0x0003B4, "Member 'AGCN_GM_Vortex_Activate_C::Timeline_0__Direction_F918BF534BE0AED903D63EA6410E0D12' has a wrong offset!");
static_assert(offsetof(AGCN_GM_Vortex_Activate_C, Timeline_0) == 0x0003B8, "Member 'AGCN_GM_Vortex_Activate_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AGCN_GM_Vortex_Activate_C, VortexActivateSound) == 0x0003C0, "Member 'AGCN_GM_Vortex_Activate_C::VortexActivateSound' has a wrong offset!");

}

