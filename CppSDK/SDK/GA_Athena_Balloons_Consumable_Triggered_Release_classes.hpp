﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Balloons_Consumable_Triggered_Release

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Balloons_Consumable_Triggered_Release.GA_Athena_Balloons_Consumable_Triggered_Release_C
// 0x0008 (0x0940 - 0x0938)
class UGA_Athena_Balloons_Consumable_Triggered_Release_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0938(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Athena_Balloons_Consumable_Triggered_Release(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Balloons_Consumable_Triggered_Release_C">();
	}
	static class UGA_Athena_Balloons_Consumable_Triggered_Release_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Balloons_Consumable_Triggered_Release_C>();
	}
};
static_assert(alignof(UGA_Athena_Balloons_Consumable_Triggered_Release_C) == 0x000008, "Wrong alignment on UGA_Athena_Balloons_Consumable_Triggered_Release_C");
static_assert(sizeof(UGA_Athena_Balloons_Consumable_Triggered_Release_C) == 0x000940, "Wrong size on UGA_Athena_Balloons_Consumable_Triggered_Release_C");
static_assert(offsetof(UGA_Athena_Balloons_Consumable_Triggered_Release_C, UberGraphFrame) == 0x000938, "Member 'UGA_Athena_Balloons_Consumable_Triggered_Release_C::UberGraphFrame' has a wrong offset!");

}

