﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_SurfaceChange_Vehicle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_SurfaceChange_Vehicle.GAB_SurfaceChange_Vehicle_C
// 0x0038 (0x0970 - 0x0938)
class UGAB_SurfaceChange_Vehicle_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0938(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Debug;                                             // 0x0940(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_941[0x7];                                      // 0x0941(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         RemovalDelay;                                      // 0x0948(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_SurfaceChange_Ice;                              // 0x0968(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_SurfaceChange_Vehicle(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void RemoveGameplayEffects();
	void HotfixableGEApplication(const struct FScalableFloat& Input, class UClass* GameplayEffectAppliedOnTrue, class UClass* GameplayEffectAppliedOnFalse);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_SurfaceChange_Vehicle_C">();
	}
	static class UGAB_SurfaceChange_Vehicle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_SurfaceChange_Vehicle_C>();
	}
};
static_assert(alignof(UGAB_SurfaceChange_Vehicle_C) == 0x000008, "Wrong alignment on UGAB_SurfaceChange_Vehicle_C");
static_assert(sizeof(UGAB_SurfaceChange_Vehicle_C) == 0x000970, "Wrong size on UGAB_SurfaceChange_Vehicle_C");
static_assert(offsetof(UGAB_SurfaceChange_Vehicle_C, UberGraphFrame) == 0x000938, "Member 'UGAB_SurfaceChange_Vehicle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_Vehicle_C, Debug) == 0x000940, "Member 'UGAB_SurfaceChange_Vehicle_C::Debug' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_Vehicle_C, RemovalDelay) == 0x000948, "Member 'UGAB_SurfaceChange_Vehicle_C::RemovalDelay' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_Vehicle_C, GE_SurfaceChange_Ice) == 0x000968, "Member 'UGAB_SurfaceChange_Vehicle_C::GE_SurfaceChange_Ice' has a wrong offset!");

}

