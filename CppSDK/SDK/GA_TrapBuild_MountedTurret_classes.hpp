﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TrapBuild_MountedTurret

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_TrapBuild_MountedTurret.GA_TrapBuild_MountedTurret_C
// 0x0008 (0x0940 - 0x0938)
class UGA_TrapBuild_MountedTurret_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0938(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_TrapBuild_MountedTurret(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TrapBuild_MountedTurret_C">();
	}
	static class UGA_TrapBuild_MountedTurret_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TrapBuild_MountedTurret_C>();
	}
};
static_assert(alignof(UGA_TrapBuild_MountedTurret_C) == 0x000008, "Wrong alignment on UGA_TrapBuild_MountedTurret_C");
static_assert(sizeof(UGA_TrapBuild_MountedTurret_C) == 0x000940, "Wrong size on UGA_TrapBuild_MountedTurret_C");
static_assert(offsetof(UGA_TrapBuild_MountedTurret_C, UberGraphFrame) == 0x000938, "Member 'UGA_TrapBuild_MountedTurret_C::UberGraphFrame' has a wrong offset!");

}

