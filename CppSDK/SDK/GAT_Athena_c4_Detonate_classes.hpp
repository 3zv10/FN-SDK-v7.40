﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_Athena_c4_Detonate

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "GAT_TriggeredAbility_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C
// 0x0088 (0x09D8 - 0x0950)
class UGAT_Athena_c4_Detonate_C final : public UGAT_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAT_Athena_c4_Detonate_C;           // 0x0950(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0958(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayForChainExplode;                              // 0x0960(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayBetweenExplodes;                              // 0x0964(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           TrackGroupTag;                                     // 0x0968(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayAbilityMontageInfo        MontageNoAmmo;                                     // 0x0970(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortWorldItemDefinition*               C4ItemDef;                                         // 0x09C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasTargetC4ToExplode;                              // 0x09D0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GAT_Athena_c4_Detonate(int32 EntryPoint);
	void K2_ActivateAbility();
	void Triggered_1CF0B54948FD6A9E1DB2B5BC49A0C635(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_1CF0B54948FD6A9E1DB2B5BC49A0C635(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_1CF0B54948FD6A9E1DB2B5BC49A0C635(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnRep_NumberOfBombsOut();
	void Update_Used_Explosive_Stat();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_Athena_c4_Detonate_C">();
	}
	static class UGAT_Athena_c4_Detonate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_Athena_c4_Detonate_C>();
	}
};
static_assert(alignof(UGAT_Athena_c4_Detonate_C) == 0x000008, "Wrong alignment on UGAT_Athena_c4_Detonate_C");
static_assert(sizeof(UGAT_Athena_c4_Detonate_C) == 0x0009D8, "Wrong size on UGAT_Athena_c4_Detonate_C");
static_assert(offsetof(UGAT_Athena_c4_Detonate_C, UberGraphFrame_GAT_Athena_c4_Detonate_C) == 0x000950, "Member 'UGAT_Athena_c4_Detonate_C::UberGraphFrame_GAT_Athena_c4_Detonate_C' has a wrong offset!");
static_assert(offsetof(UGAT_Athena_c4_Detonate_C, PlayerPawn) == 0x000958, "Member 'UGAT_Athena_c4_Detonate_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGAT_Athena_c4_Detonate_C, DelayForChainExplode) == 0x000960, "Member 'UGAT_Athena_c4_Detonate_C::DelayForChainExplode' has a wrong offset!");
static_assert(offsetof(UGAT_Athena_c4_Detonate_C, DelayBetweenExplodes) == 0x000964, "Member 'UGAT_Athena_c4_Detonate_C::DelayBetweenExplodes' has a wrong offset!");
static_assert(offsetof(UGAT_Athena_c4_Detonate_C, TrackGroupTag) == 0x000968, "Member 'UGAT_Athena_c4_Detonate_C::TrackGroupTag' has a wrong offset!");
static_assert(offsetof(UGAT_Athena_c4_Detonate_C, MontageNoAmmo) == 0x000970, "Member 'UGAT_Athena_c4_Detonate_C::MontageNoAmmo' has a wrong offset!");
static_assert(offsetof(UGAT_Athena_c4_Detonate_C, C4ItemDef) == 0x0009C8, "Member 'UGAT_Athena_c4_Detonate_C::C4ItemDef' has a wrong offset!");
static_assert(offsetof(UGAT_Athena_c4_Detonate_C, HasTargetC4ToExplode) == 0x0009D0, "Member 'UGAT_Athena_c4_Detonate_C::HasTargetC4ToExplode' has a wrong offset!");

}

