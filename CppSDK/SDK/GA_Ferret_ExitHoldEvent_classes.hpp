﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Ferret_ExitHoldEvent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C
// 0x0018 (0x0950 - 0x0938)
class UGA_Ferret_ExitHoldEvent_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0938(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0940(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TriggerDuration;                                   // 0x0948(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Ferret_ExitHoldEvent(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void EventReceived_209BF560404B83EBEAA8DD8090C443AC(const struct FGameplayEventData& Payload);
	void EventReceived_7AE1D485464AEC7EB429C3877D33AF69(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Ferret_ExitHoldEvent_C">();
	}
	static class UGA_Ferret_ExitHoldEvent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Ferret_ExitHoldEvent_C>();
	}
};
static_assert(alignof(UGA_Ferret_ExitHoldEvent_C) == 0x000008, "Wrong alignment on UGA_Ferret_ExitHoldEvent_C");
static_assert(sizeof(UGA_Ferret_ExitHoldEvent_C) == 0x000950, "Wrong size on UGA_Ferret_ExitHoldEvent_C");
static_assert(offsetof(UGA_Ferret_ExitHoldEvent_C, UberGraphFrame) == 0x000938, "Member 'UGA_Ferret_ExitHoldEvent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Ferret_ExitHoldEvent_C, PlayerPawn) == 0x000940, "Member 'UGA_Ferret_ExitHoldEvent_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Ferret_ExitHoldEvent_C, TriggerDuration) == 0x000948, "Member 'UGA_Ferret_ExitHoldEvent_C::TriggerDuration' has a wrong offset!");

}

