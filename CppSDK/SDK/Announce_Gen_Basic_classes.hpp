﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announce_Gen_Basic

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Announce_Gen_Basic.Announce_Gen_Basic_C
// 0x0008 (0x0490 - 0x0488)
class AAnnounce_Gen_Basic_C final : public AFortClientAnnouncement_Basic
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Announce_Gen_Basic_C">();
	}
	static class AAnnounce_Gen_Basic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAnnounce_Gen_Basic_C>();
	}
};
static_assert(alignof(AAnnounce_Gen_Basic_C) == 0x000008, "Wrong alignment on AAnnounce_Gen_Basic_C");
static_assert(sizeof(AAnnounce_Gen_Basic_C) == 0x000490, "Wrong size on AAnnounce_Gen_Basic_C");
static_assert(offsetof(AAnnounce_Gen_Basic_C, DefaultSceneRoot) == 0x000488, "Member 'AAnnounce_Gen_Basic_C::DefaultSceneRoot' has a wrong offset!");

}

