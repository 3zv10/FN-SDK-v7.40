﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_PlayerDBNO

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_PlayerDBNO.GAB_PlayerDBNO_C
// 0x0160 (0x0A98 - 0x0938)
class UGAB_PlayerDBNO_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0938(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                           DeathMontage;                                      // 0x0940(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DeathHitDirection;                                 // 0x0948(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             DeathHitResult;                                    // 0x0954(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_9DC[0x4];                                      // 0x09DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  DamageTags;                                        // 0x09E0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  GameplayStatusAfflicted;                           // 0x0A00(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_DBNOSpeed;                                      // 0x0A20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            DBNOSpeedHandle;                                   // 0x0A28(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         F_FailsafeDBNOSpeed;                               // 0x0A30(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A34[0x4];                                      // 0x0A34(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FGameplayTag, class FName>        MAP_DBNOSpeedRowNames;                             // 0x0A38(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FName                                   N_DBNOSpeedRowName;                                // 0x0A88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HolsterId;                                         // 0x0A90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_PlayerDBNO(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void Triggered_F61877974D2CED083195EF8A8CDA60C2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_F61877974D2CED083195EF8A8CDA60C2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_F61877974D2CED083195EF8A8CDA60C2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_PlayerDBNO_C">();
	}
	static class UGAB_PlayerDBNO_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_PlayerDBNO_C>();
	}
};
static_assert(alignof(UGAB_PlayerDBNO_C) == 0x000008, "Wrong alignment on UGAB_PlayerDBNO_C");
static_assert(sizeof(UGAB_PlayerDBNO_C) == 0x000A98, "Wrong size on UGAB_PlayerDBNO_C");
static_assert(offsetof(UGAB_PlayerDBNO_C, UberGraphFrame) == 0x000938, "Member 'UGAB_PlayerDBNO_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_PlayerDBNO_C, DeathMontage) == 0x000940, "Member 'UGAB_PlayerDBNO_C::DeathMontage' has a wrong offset!");
static_assert(offsetof(UGAB_PlayerDBNO_C, DeathHitDirection) == 0x000948, "Member 'UGAB_PlayerDBNO_C::DeathHitDirection' has a wrong offset!");
static_assert(offsetof(UGAB_PlayerDBNO_C, DeathHitResult) == 0x000954, "Member 'UGAB_PlayerDBNO_C::DeathHitResult' has a wrong offset!");
static_assert(offsetof(UGAB_PlayerDBNO_C, DamageTags) == 0x0009E0, "Member 'UGAB_PlayerDBNO_C::DamageTags' has a wrong offset!");
static_assert(offsetof(UGAB_PlayerDBNO_C, GameplayStatusAfflicted) == 0x000A00, "Member 'UGAB_PlayerDBNO_C::GameplayStatusAfflicted' has a wrong offset!");
static_assert(offsetof(UGAB_PlayerDBNO_C, GE_DBNOSpeed) == 0x000A20, "Member 'UGAB_PlayerDBNO_C::GE_DBNOSpeed' has a wrong offset!");
static_assert(offsetof(UGAB_PlayerDBNO_C, DBNOSpeedHandle) == 0x000A28, "Member 'UGAB_PlayerDBNO_C::DBNOSpeedHandle' has a wrong offset!");
static_assert(offsetof(UGAB_PlayerDBNO_C, F_FailsafeDBNOSpeed) == 0x000A30, "Member 'UGAB_PlayerDBNO_C::F_FailsafeDBNOSpeed' has a wrong offset!");
static_assert(offsetof(UGAB_PlayerDBNO_C, MAP_DBNOSpeedRowNames) == 0x000A38, "Member 'UGAB_PlayerDBNO_C::MAP_DBNOSpeedRowNames' has a wrong offset!");
static_assert(offsetof(UGAB_PlayerDBNO_C, N_DBNOSpeedRowName) == 0x000A88, "Member 'UGAB_PlayerDBNO_C::N_DBNOSpeedRowName' has a wrong offset!");
static_assert(offsetof(UGAB_PlayerDBNO_C, HolsterId) == 0x000A90, "Member 'UGAB_PlayerDBNO_C::HolsterId' has a wrong offset!");

}

