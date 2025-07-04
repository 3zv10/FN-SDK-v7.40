﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Twinblast

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Twinblast.GCN_Twinblast_C
// 0x0000 (0x0080 - 0x0080)
class UGCN_Twinblast_C final : public UFortGameplayCueNotify_Simple
{
public:
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Twinblast_C">();
	}
	static class UGCN_Twinblast_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Twinblast_C>();
	}
};
static_assert(alignof(UGCN_Twinblast_C) == 0x000008, "Wrong alignment on UGCN_Twinblast_C");
static_assert(sizeof(UGCN_Twinblast_C) == 0x000080, "Wrong size on UGCN_Twinblast_C");

}

