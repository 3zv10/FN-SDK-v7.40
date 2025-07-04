﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_NotIdling

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_NotIdling.GAB_NotIdling_C
// 0x0008 (0x0940 - 0x0938)
class UGAB_NotIdling_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0938(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GAB_NotIdling(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_NotIdling_C">();
	}
	static class UGAB_NotIdling_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_NotIdling_C>();
	}
};
static_assert(alignof(UGAB_NotIdling_C) == 0x000008, "Wrong alignment on UGAB_NotIdling_C");
static_assert(sizeof(UGAB_NotIdling_C) == 0x000940, "Wrong size on UGAB_NotIdling_C");
static_assert(offsetof(UGAB_NotIdling_C, UberGraphFrame) == 0x000938, "Member 'UGAB_NotIdling_C::UberGraphFrame' has a wrong offset!");

}

