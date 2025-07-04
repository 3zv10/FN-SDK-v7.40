﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_EnvCampFire

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C
// 0x00A8 (0x09E0 - 0x0938)
class UGA_Athena_EnvCampFire_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0938(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         TimeBetweenHeals;                                  // 0x0940(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_944[0x4];                                      // 0x0944(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Timer_ApplyHeal;                                   // 0x0948(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxHeals;                                          // 0x0950(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentHeals;                                      // 0x0954(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_958[0x8];                                      // 0x0958(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CustomTargeting;                                   // 0x0960(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         TargetingHeightOffset;                             // 0x0990(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_994[0x4];                                      // 0x0994(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         Row_MaxHeals;                                      // 0x0998(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_TimeBetweenHeals;                              // 0x09B8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Athena_EnvCampFire(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ApplyHeal();
	void K2_OnEndAbility(bool bWasCancelled);
	void Targeted_EDAB937443020D47385625B06E892DF0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_EDAB937443020D47385625B06E892DF0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void SetCustomTargetingTrans();
	void SetBalanceValues();

	struct FTransform GetCustomAbilitySourceTransform() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_EnvCampFire_C">();
	}
	static class UGA_Athena_EnvCampFire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_EnvCampFire_C>();
	}
};
static_assert(alignof(UGA_Athena_EnvCampFire_C) == 0x000010, "Wrong alignment on UGA_Athena_EnvCampFire_C");
static_assert(sizeof(UGA_Athena_EnvCampFire_C) == 0x0009E0, "Wrong size on UGA_Athena_EnvCampFire_C");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, UberGraphFrame) == 0x000938, "Member 'UGA_Athena_EnvCampFire_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, TimeBetweenHeals) == 0x000940, "Member 'UGA_Athena_EnvCampFire_C::TimeBetweenHeals' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, Timer_ApplyHeal) == 0x000948, "Member 'UGA_Athena_EnvCampFire_C::Timer_ApplyHeal' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, MaxHeals) == 0x000950, "Member 'UGA_Athena_EnvCampFire_C::MaxHeals' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, CurrentHeals) == 0x000954, "Member 'UGA_Athena_EnvCampFire_C::CurrentHeals' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, CustomTargeting) == 0x000960, "Member 'UGA_Athena_EnvCampFire_C::CustomTargeting' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, TargetingHeightOffset) == 0x000990, "Member 'UGA_Athena_EnvCampFire_C::TargetingHeightOffset' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, Row_MaxHeals) == 0x000998, "Member 'UGA_Athena_EnvCampFire_C::Row_MaxHeals' has a wrong offset!");
static_assert(offsetof(UGA_Athena_EnvCampFire_C, Row_TimeBetweenHeals) == 0x0009B8, "Member 'UGA_Athena_EnvCampFire_C::Row_TimeBetweenHeals' has a wrong offset!");

}

