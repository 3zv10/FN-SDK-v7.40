﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_CommandoActiveAbility

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "GAT_ActiveAbility_Hero_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C
// 0x00C0 (0x0A38 - 0x0978)
class UGAT_CommandoActiveAbility_C : public UGAT_ActiveAbility_Hero_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAT_CommandoActiveAbility_C;        // 0x0978(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                     Event_Data;                                        // 0x0980(0x00A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPawn*                              CommandoPlayerPawn;                                // 0x0A28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          isAutoCommitted;                                   // 0x0A30(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          isStaminaLockedOut;                                // 0x0A31(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GAT_CommandoActiveAbility(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_CommandoActiveAbility_C">();
	}
	static class UGAT_CommandoActiveAbility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_CommandoActiveAbility_C>();
	}
};
static_assert(alignof(UGAT_CommandoActiveAbility_C) == 0x000008, "Wrong alignment on UGAT_CommandoActiveAbility_C");
static_assert(sizeof(UGAT_CommandoActiveAbility_C) == 0x000A38, "Wrong size on UGAT_CommandoActiveAbility_C");
static_assert(offsetof(UGAT_CommandoActiveAbility_C, UberGraphFrame_GAT_CommandoActiveAbility_C) == 0x000978, "Member 'UGAT_CommandoActiveAbility_C::UberGraphFrame_GAT_CommandoActiveAbility_C' has a wrong offset!");
static_assert(offsetof(UGAT_CommandoActiveAbility_C, Event_Data) == 0x000980, "Member 'UGAT_CommandoActiveAbility_C::Event_Data' has a wrong offset!");
static_assert(offsetof(UGAT_CommandoActiveAbility_C, CommandoPlayerPawn) == 0x000A28, "Member 'UGAT_CommandoActiveAbility_C::CommandoPlayerPawn' has a wrong offset!");
static_assert(offsetof(UGAT_CommandoActiveAbility_C, isAutoCommitted) == 0x000A30, "Member 'UGAT_CommandoActiveAbility_C::isAutoCommitted' has a wrong offset!");
static_assert(offsetof(UGAT_CommandoActiveAbility_C, isStaminaLockedOut) == 0x000A31, "Member 'UGAT_CommandoActiveAbility_C::isStaminaLockedOut' has a wrong offset!");

}

