﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionVoteNotification

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MissionVoteNotification.MissionVoteNotification_C
// 0x0008 (0x00B0 - 0x00A8)
class UMissionVoteNotification_C final : public UFortMissionVoteUINotification
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_MissionVoteNotification(int32 EntryPoint);
	void OnActionTaken();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionVoteNotification_C">();
	}
	static class UMissionVoteNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionVoteNotification_C>();
	}
};
static_assert(alignof(UMissionVoteNotification_C) == 0x000008, "Wrong alignment on UMissionVoteNotification_C");
static_assert(sizeof(UMissionVoteNotification_C) == 0x0000B0, "Wrong size on UMissionVoteNotification_C");
static_assert(offsetof(UMissionVoteNotification_C, UberGraphFrame) == 0x0000A8, "Member 'UMissionVoteNotification_C::UberGraphFrame' has a wrong offset!");

}

