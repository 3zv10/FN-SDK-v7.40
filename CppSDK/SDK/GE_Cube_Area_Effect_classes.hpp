﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Cube_Area_Effect

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Cube_Area_Effect.GE_Cube_Area_Effect_C
// 0x0000 (0x05F0 - 0x05F0)
class UGE_Cube_Area_Effect_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Cube_Area_Effect_C">();
	}
	static class UGE_Cube_Area_Effect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Cube_Area_Effect_C>();
	}
};
static_assert(alignof(UGE_Cube_Area_Effect_C) == 0x000008, "Wrong alignment on UGE_Cube_Area_Effect_C");
static_assert(sizeof(UGE_Cube_Area_Effect_C) == 0x0005F0, "Wrong size on UGE_Cube_Area_Effect_C");

}

