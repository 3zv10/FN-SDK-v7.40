﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Football_score

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Football_score.GCN_Football_Score_C
// 0x0000 (0x01A0 - 0x01A0)
class UGCN_Football_Score_C final : public UFortGameplayCueNotify_Burst
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Football_Score_C">();
	}
	static class UGCN_Football_Score_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Football_Score_C>();
	}
};
static_assert(alignof(UGCN_Football_Score_C) == 0x000008, "Wrong alignment on UGCN_Football_Score_C");
static_assert(sizeof(UGCN_Football_Score_C) == 0x0001A0, "Wrong size on UGCN_Football_Score_C");

}

