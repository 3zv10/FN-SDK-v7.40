﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_ShockGrenade_RemoveFX

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_ShockGrenade_RemoveFX.GA_Athena_ShockGrenade_RemoveFX_C
// 0x0020 (0x0958 - 0x0938)
class UGA_Athena_ShockGrenade_RemoveFX_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0938(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0940(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Looping_GC;                                        // 0x0948(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Player_Landing_GC;                                 // 0x0950(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_ShockGrenade_RemoveFX(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnChange_4AD3DFC14DFECA79ED54A7B53F3A9E7E(EMovementMode NewMovementMode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_ShockGrenade_RemoveFX_C">();
	}
	static class UGA_Athena_ShockGrenade_RemoveFX_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_ShockGrenade_RemoveFX_C>();
	}
};
static_assert(alignof(UGA_Athena_ShockGrenade_RemoveFX_C) == 0x000008, "Wrong alignment on UGA_Athena_ShockGrenade_RemoveFX_C");
static_assert(sizeof(UGA_Athena_ShockGrenade_RemoveFX_C) == 0x000958, "Wrong size on UGA_Athena_ShockGrenade_RemoveFX_C");
static_assert(offsetof(UGA_Athena_ShockGrenade_RemoveFX_C, UberGraphFrame) == 0x000938, "Member 'UGA_Athena_ShockGrenade_RemoveFX_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ShockGrenade_RemoveFX_C, PlayerPawn) == 0x000940, "Member 'UGA_Athena_ShockGrenade_RemoveFX_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ShockGrenade_RemoveFX_C, Looping_GC) == 0x000948, "Member 'UGA_Athena_ShockGrenade_RemoveFX_C::Looping_GC' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ShockGrenade_RemoveFX_C, Player_Landing_GC) == 0x000950, "Member 'UGA_Athena_ShockGrenade_RemoveFX_C::Player_Landing_GC' has a wrong offset!");

}

