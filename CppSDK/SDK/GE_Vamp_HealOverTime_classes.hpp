﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Vamp_HealOverTime

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Vamp_HealOverTime.GE_Vamp_HealOverTime_C
// 0x0000 (0x05F0 - 0x05F0)
class UGE_Vamp_HealOverTime_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Vamp_HealOverTime_C">();
	}
	static class UGE_Vamp_HealOverTime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Vamp_HealOverTime_C>();
	}
};
static_assert(alignof(UGE_Vamp_HealOverTime_C) == 0x000008, "Wrong alignment on UGE_Vamp_HealOverTime_C");
static_assert(sizeof(UGE_Vamp_HealOverTime_C) == 0x0005F0, "Wrong size on UGE_Vamp_HealOverTime_C");

}

