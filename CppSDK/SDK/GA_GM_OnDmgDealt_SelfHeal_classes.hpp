﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_GM_OnDmgDealt_SelfHeal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_GM_OnDmgDealtBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_GM_OnDmgDealt_SelfHeal.GA_GM_OnDmgDealt_SelfHeal_C
// 0x0030 (0x0970 - 0x0940)
class UGA_GM_OnDmgDealt_SelfHeal_C : public UGA_GM_OnDmgDealtBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_GM_OnDmgDealt_SelfHeal_C;        // 0x0940(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 HealGEClass;                                       // 0x0948(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HealMagnitudeName;                                 // 0x0950(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HealMaxHealthMultiplier;                           // 0x0958(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinHealAmt;                                        // 0x095C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HealDmgDealtMultiplier;                            // 0x0960(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HealStdHealthMultiplier;                           // 0x0964(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HealAmountCalc;                                    // 0x0968(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FlatHealAmount;                                    // 0x096C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal(int32 EntryPoint);
	void DoOnDmgDealtBehavior(const struct FGameplayEventData& EventData);
	void CalculateHealMagnitude(float BaseMagnitude, class UAbilitySystemComponent* AbilitySystem, float PawnLevel, float* FinalMagnitude);

	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_GM_OnDmgDealt_SelfHeal_C">();
	}
	static class UGA_GM_OnDmgDealt_SelfHeal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_GM_OnDmgDealt_SelfHeal_C>();
	}
};
static_assert(alignof(UGA_GM_OnDmgDealt_SelfHeal_C) == 0x000008, "Wrong alignment on UGA_GM_OnDmgDealt_SelfHeal_C");
static_assert(sizeof(UGA_GM_OnDmgDealt_SelfHeal_C) == 0x000970, "Wrong size on UGA_GM_OnDmgDealt_SelfHeal_C");
static_assert(offsetof(UGA_GM_OnDmgDealt_SelfHeal_C, UberGraphFrame_GA_GM_OnDmgDealt_SelfHeal_C) == 0x000940, "Member 'UGA_GM_OnDmgDealt_SelfHeal_C::UberGraphFrame_GA_GM_OnDmgDealt_SelfHeal_C' has a wrong offset!");
static_assert(offsetof(UGA_GM_OnDmgDealt_SelfHeal_C, HealGEClass) == 0x000948, "Member 'UGA_GM_OnDmgDealt_SelfHeal_C::HealGEClass' has a wrong offset!");
static_assert(offsetof(UGA_GM_OnDmgDealt_SelfHeal_C, HealMagnitudeName) == 0x000950, "Member 'UGA_GM_OnDmgDealt_SelfHeal_C::HealMagnitudeName' has a wrong offset!");
static_assert(offsetof(UGA_GM_OnDmgDealt_SelfHeal_C, HealMaxHealthMultiplier) == 0x000958, "Member 'UGA_GM_OnDmgDealt_SelfHeal_C::HealMaxHealthMultiplier' has a wrong offset!");
static_assert(offsetof(UGA_GM_OnDmgDealt_SelfHeal_C, MinHealAmt) == 0x00095C, "Member 'UGA_GM_OnDmgDealt_SelfHeal_C::MinHealAmt' has a wrong offset!");
static_assert(offsetof(UGA_GM_OnDmgDealt_SelfHeal_C, HealDmgDealtMultiplier) == 0x000960, "Member 'UGA_GM_OnDmgDealt_SelfHeal_C::HealDmgDealtMultiplier' has a wrong offset!");
static_assert(offsetof(UGA_GM_OnDmgDealt_SelfHeal_C, HealStdHealthMultiplier) == 0x000964, "Member 'UGA_GM_OnDmgDealt_SelfHeal_C::HealStdHealthMultiplier' has a wrong offset!");
static_assert(offsetof(UGA_GM_OnDmgDealt_SelfHeal_C, HealAmountCalc) == 0x000968, "Member 'UGA_GM_OnDmgDealt_SelfHeal_C::HealAmountCalc' has a wrong offset!");
static_assert(offsetof(UGA_GM_OnDmgDealt_SelfHeal_C, FlatHealAmount) == 0x00096C, "Member 'UGA_GM_OnDmgDealt_SelfHeal_C::FlatHealAmount' has a wrong offset!");

}

