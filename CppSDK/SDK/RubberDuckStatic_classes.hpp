﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RubberDuckStatic

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RubberDuckStatic.RubberDuckStatic_C
// 0x0018 (0x0C48 - 0x0C30)
class ARubberDuckStatic_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                StartLoc;                                          // 0x0C38(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_RubberDuckStatic(int32 EntryPoint);
	void ReceiveBeginPlay();
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RubberDuckStatic_C">();
	}
	static class ARubberDuckStatic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARubberDuckStatic_C>();
	}
};
static_assert(alignof(ARubberDuckStatic_C) == 0x000008, "Wrong alignment on ARubberDuckStatic_C");
static_assert(sizeof(ARubberDuckStatic_C) == 0x000C48, "Wrong size on ARubberDuckStatic_C");
static_assert(offsetof(ARubberDuckStatic_C, UberGraphFrame) == 0x000C30, "Member 'ARubberDuckStatic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ARubberDuckStatic_C, StartLoc) == 0x000C38, "Member 'ARubberDuckStatic_C::StartLoc' has a wrong offset!");

}

