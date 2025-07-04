﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Frontend_Lobby_Layout2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Frontend_Lobby_Layout2.Frontend_Lobby_Layout2_C
// 0x0018 (0x0360 - 0x0348)
class AFrontend_Lobby_Layout2_C final : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   CurrentBackgroundLevelName;                        // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NewBackgroundLevelName;                            // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Frontend_Lobby_Layout2(int32 EntryPoint);
	void OnBackgroundChanged();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Frontend_Lobby_Layout2_C">();
	}
	static class AFrontend_Lobby_Layout2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontend_Lobby_Layout2_C>();
	}
};
static_assert(alignof(AFrontend_Lobby_Layout2_C) == 0x000008, "Wrong alignment on AFrontend_Lobby_Layout2_C");
static_assert(sizeof(AFrontend_Lobby_Layout2_C) == 0x000360, "Wrong size on AFrontend_Lobby_Layout2_C");
static_assert(offsetof(AFrontend_Lobby_Layout2_C, UberGraphFrame) == 0x000348, "Member 'AFrontend_Lobby_Layout2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Layout2_C, CurrentBackgroundLevelName) == 0x000350, "Member 'AFrontend_Lobby_Layout2_C::CurrentBackgroundLevelName' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Layout2_C, NewBackgroundLevelName) == 0x000358, "Member 'AFrontend_Lobby_Layout2_C::NewBackgroundLevelName' has a wrong offset!");

}

