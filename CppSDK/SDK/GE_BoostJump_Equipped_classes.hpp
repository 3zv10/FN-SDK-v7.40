﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_BoostJump_Equipped

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_BoostJump_Equipped.GE_BoostJump_Equipped_C
// 0x0000 (0x05F0 - 0x05F0)
class UGE_BoostJump_Equipped_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_BoostJump_Equipped_C">();
	}
	static class UGE_BoostJump_Equipped_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_BoostJump_Equipped_C>();
	}
};
static_assert(alignof(UGE_BoostJump_Equipped_C) == 0x000008, "Wrong alignment on UGE_BoostJump_Equipped_C");
static_assert(sizeof(UGE_BoostJump_Equipped_C) == 0x0005F0, "Wrong size on UGE_BoostJump_Equipped_C");

}

