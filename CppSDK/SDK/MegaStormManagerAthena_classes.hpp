﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MegaStormManagerAthena

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MegaStormManagerAthena.MegaStormManagerAthena_C
// 0x0008 (0x0370 - 0x0368)
class AMegaStormManagerAthena_C final : public AMegaStormManager
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MegaStormManagerAthena_C">();
	}
	static class AMegaStormManagerAthena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMegaStormManagerAthena_C>();
	}
};
static_assert(alignof(AMegaStormManagerAthena_C) == 0x000008, "Wrong alignment on AMegaStormManagerAthena_C");
static_assert(sizeof(AMegaStormManagerAthena_C) == 0x000370, "Wrong size on AMegaStormManagerAthena_C");
static_assert(offsetof(AMegaStormManagerAthena_C, DefaultSceneRoot) == 0x000368, "Member 'AMegaStormManagerAthena_C::DefaultSceneRoot' has a wrong offset!");

}

