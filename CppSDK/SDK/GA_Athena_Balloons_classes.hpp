﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Balloons

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Balloons.GA_Athena_Balloons_C
// 0x0068 (0x09A0 - 0x0938)
class UGA_Athena_Balloons_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0938(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0940(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    UseBushObjectiveStat;                              // 0x0948(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FName                                   MontageSection;                                    // 0x0958(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   MontageSection_Air;                                // 0x0960(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   MontageSection_Ground;                             // 0x0968(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           AnimMontage;                                       // 0x0970(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           AirMontage_Female;                                 // 0x0978(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           GroundMontage_Female;                              // 0x0980(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           GroundMontage;                                     // 0x0988(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           AirMontage;                                        // 0x0990(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BalloonCount;                                      // 0x0998(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_Balloons(int32 EntryPoint);
	void K2_ActivateAbility();
	void Triggered_14BE630A4C51463A82B313856F071374(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_14BE630A4C51463A82B313856F071374(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_14BE630A4C51463A82B313856F071374(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Balloons_C">();
	}
	static class UGA_Athena_Balloons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Balloons_C>();
	}
};
static_assert(alignof(UGA_Athena_Balloons_C) == 0x000008, "Wrong alignment on UGA_Athena_Balloons_C");
static_assert(sizeof(UGA_Athena_Balloons_C) == 0x0009A0, "Wrong size on UGA_Athena_Balloons_C");
static_assert(offsetof(UGA_Athena_Balloons_C, UberGraphFrame) == 0x000938, "Member 'UGA_Athena_Balloons_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Balloons_C, PlayerPawn) == 0x000940, "Member 'UGA_Athena_Balloons_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Balloons_C, UseBushObjectiveStat) == 0x000948, "Member 'UGA_Athena_Balloons_C::UseBushObjectiveStat' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Balloons_C, MontageSection) == 0x000958, "Member 'UGA_Athena_Balloons_C::MontageSection' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Balloons_C, MontageSection_Air) == 0x000960, "Member 'UGA_Athena_Balloons_C::MontageSection_Air' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Balloons_C, MontageSection_Ground) == 0x000968, "Member 'UGA_Athena_Balloons_C::MontageSection_Ground' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Balloons_C, AnimMontage) == 0x000970, "Member 'UGA_Athena_Balloons_C::AnimMontage' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Balloons_C, AirMontage_Female) == 0x000978, "Member 'UGA_Athena_Balloons_C::AirMontage_Female' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Balloons_C, GroundMontage_Female) == 0x000980, "Member 'UGA_Athena_Balloons_C::GroundMontage_Female' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Balloons_C, GroundMontage) == 0x000988, "Member 'UGA_Athena_Balloons_C::GroundMontage' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Balloons_C, AirMontage) == 0x000990, "Member 'UGA_Athena_Balloons_C::AirMontage' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Balloons_C, BalloonCount) == 0x000998, "Member 'UGA_Athena_Balloons_C::BalloonCount' has a wrong offset!");

}

