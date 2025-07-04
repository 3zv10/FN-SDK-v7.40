﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemReceivedTomatoHeadStyleChallenge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ItemReceivedHeaderSubWidgetBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemReceivedTomatoHeadStyleChallenge.ItemReceivedTomatoHeadStyleChallenge_C
// 0x0030 (0x0298 - 0x0268)
class UItemReceivedTomatoHeadStyleChallenge_C final : public UItemReceivedHeaderSubWidgetBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_ItemReceivedTomatoHeadStyleChallenge_C; // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       BattlepassUpgraded;                                // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_0;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PizzaToppings;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SubHeader;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Is_BattlePass;                                     // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ItemReceivedTomatoHeadStyleChallenge(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemReceivedTomatoHeadStyleChallenge_C">();
	}
	static class UItemReceivedTomatoHeadStyleChallenge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemReceivedTomatoHeadStyleChallenge_C>();
	}
};
static_assert(alignof(UItemReceivedTomatoHeadStyleChallenge_C) == 0x000008, "Wrong alignment on UItemReceivedTomatoHeadStyleChallenge_C");
static_assert(sizeof(UItemReceivedTomatoHeadStyleChallenge_C) == 0x000298, "Wrong size on UItemReceivedTomatoHeadStyleChallenge_C");
static_assert(offsetof(UItemReceivedTomatoHeadStyleChallenge_C, UberGraphFrame_ItemReceivedTomatoHeadStyleChallenge_C) == 0x000268, "Member 'UItemReceivedTomatoHeadStyleChallenge_C::UberGraphFrame_ItemReceivedTomatoHeadStyleChallenge_C' has a wrong offset!");
static_assert(offsetof(UItemReceivedTomatoHeadStyleChallenge_C, BattlepassUpgraded) == 0x000270, "Member 'UItemReceivedTomatoHeadStyleChallenge_C::BattlepassUpgraded' has a wrong offset!");
static_assert(offsetof(UItemReceivedTomatoHeadStyleChallenge_C, CommonTextBlock_0) == 0x000278, "Member 'UItemReceivedTomatoHeadStyleChallenge_C::CommonTextBlock_0' has a wrong offset!");
static_assert(offsetof(UItemReceivedTomatoHeadStyleChallenge_C, PizzaToppings) == 0x000280, "Member 'UItemReceivedTomatoHeadStyleChallenge_C::PizzaToppings' has a wrong offset!");
static_assert(offsetof(UItemReceivedTomatoHeadStyleChallenge_C, SubHeader) == 0x000288, "Member 'UItemReceivedTomatoHeadStyleChallenge_C::SubHeader' has a wrong offset!");
static_assert(offsetof(UItemReceivedTomatoHeadStyleChallenge_C, Is_BattlePass) == 0x000290, "Member 'UItemReceivedTomatoHeadStyleChallenge_C::Is_BattlePass' has a wrong offset!");

}

