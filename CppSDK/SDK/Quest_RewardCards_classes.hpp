﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Quest_RewardCards

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Quest-RewardCards.Quest-RewardCards_C
// 0x0148 (0x0390 - 0x0248)
class UQuest_RewardCards_C final : public UFortQuestMapCosmeticListWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro_FourReward;                                  // 0x0250(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro_ThreeReward;                                 // 0x0258(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro_TwoReward;                                   // 0x0260(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro_OneReward;                                   // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Bounce_FourReward;                                 // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Bounce_ThreeReward;                                // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Bounce_TwoReward;                                  // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Bounce_OneReward;                                  // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ChoiceReward_QuestionMark;                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_0;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuest_RewardCard_Widget_C*             RewardCardWidget1a;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuest_RewardCard_Widget_C*             RewardCardWidget2a;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuest_RewardCard_Widget_C*             RewardCardWidget2b;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuest_RewardCard_Widget_C*             RewardCardWidget3a;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuest_RewardCard_Widget_C*             RewardCardWidget3b;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuest_RewardCard_Widget_C*             RewardCardWidget3c;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuest_RewardCard_Widget_C*             RewardCardWidget4a;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuest_RewardCard_Widget_C*             RewardCardWidget4b;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuest_RewardCard_Widget_C*             RewardCardWidget4c;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuest_RewardCard_Widget_C*             RewardCardWidget4d;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RewardFlare_01;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RewardFlare_02;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RewardFlare_03;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RewardFlare_04;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           OneCard_Rarity;                                    // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_Flare_01;                                      // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_Flare_02;                                      // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_Fare_03;                                       // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_Flare_04;                                      // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GlowColor_Overide;                                 // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_341[0x3];                                      // 0x0341(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Explicit_GlowColor;                                // 0x0344(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ChoiceReward_Overide;                              // 0x0354(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_355[0x3];                                      // 0x0355(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             ChoiceMaterialArray;                               // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         Widget_Index;                                      // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36C[0x4];                                      // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemDefinition*                    Card_Slot_01;                                      // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    Card_Slot_02;                                      // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    Card_Slot_03;                                      // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    Card_Slot_04;                                      // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_RewardCards(int32 EntryPoint);
	void UpdateCosmeticListDisplay();
	void Construct();
	void HandleIntroComplete();
	void WidgetSetUp();
	void PopulateCards(TArray<class UFortItemDefinition*>& inItemDefinitions);
	void PlayBounceLoop();
	void PlayIntro();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Quest-RewardCards_C">();
	}
	static class UQuest_RewardCards_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_RewardCards_C>();
	}
};
static_assert(alignof(UQuest_RewardCards_C) == 0x000008, "Wrong alignment on UQuest_RewardCards_C");
static_assert(sizeof(UQuest_RewardCards_C) == 0x000390, "Wrong size on UQuest_RewardCards_C");
static_assert(offsetof(UQuest_RewardCards_C, UberGraphFrame) == 0x000248, "Member 'UQuest_RewardCards_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, Intro_FourReward) == 0x000250, "Member 'UQuest_RewardCards_C::Intro_FourReward' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, Intro_ThreeReward) == 0x000258, "Member 'UQuest_RewardCards_C::Intro_ThreeReward' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, Intro_TwoReward) == 0x000260, "Member 'UQuest_RewardCards_C::Intro_TwoReward' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, Intro_OneReward) == 0x000268, "Member 'UQuest_RewardCards_C::Intro_OneReward' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, Bounce_FourReward) == 0x000270, "Member 'UQuest_RewardCards_C::Bounce_FourReward' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, Bounce_ThreeReward) == 0x000278, "Member 'UQuest_RewardCards_C::Bounce_ThreeReward' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, Bounce_TwoReward) == 0x000280, "Member 'UQuest_RewardCards_C::Bounce_TwoReward' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, Bounce_OneReward) == 0x000288, "Member 'UQuest_RewardCards_C::Bounce_OneReward' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, ChoiceReward_QuestionMark) == 0x000290, "Member 'UQuest_RewardCards_C::ChoiceReward_QuestionMark' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, CommonWidgetSwitcher_0) == 0x000298, "Member 'UQuest_RewardCards_C::CommonWidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, RewardCardWidget1a) == 0x0002A0, "Member 'UQuest_RewardCards_C::RewardCardWidget1a' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, RewardCardWidget2a) == 0x0002A8, "Member 'UQuest_RewardCards_C::RewardCardWidget2a' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, RewardCardWidget2b) == 0x0002B0, "Member 'UQuest_RewardCards_C::RewardCardWidget2b' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, RewardCardWidget3a) == 0x0002B8, "Member 'UQuest_RewardCards_C::RewardCardWidget3a' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, RewardCardWidget3b) == 0x0002C0, "Member 'UQuest_RewardCards_C::RewardCardWidget3b' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, RewardCardWidget3c) == 0x0002C8, "Member 'UQuest_RewardCards_C::RewardCardWidget3c' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, RewardCardWidget4a) == 0x0002D0, "Member 'UQuest_RewardCards_C::RewardCardWidget4a' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, RewardCardWidget4b) == 0x0002D8, "Member 'UQuest_RewardCards_C::RewardCardWidget4b' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, RewardCardWidget4c) == 0x0002E0, "Member 'UQuest_RewardCards_C::RewardCardWidget4c' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, RewardCardWidget4d) == 0x0002E8, "Member 'UQuest_RewardCards_C::RewardCardWidget4d' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, RewardFlare_01) == 0x0002F0, "Member 'UQuest_RewardCards_C::RewardFlare_01' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, RewardFlare_02) == 0x0002F8, "Member 'UQuest_RewardCards_C::RewardFlare_02' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, RewardFlare_03) == 0x000300, "Member 'UQuest_RewardCards_C::RewardFlare_03' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, RewardFlare_04) == 0x000308, "Member 'UQuest_RewardCards_C::RewardFlare_04' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, OneCard_Rarity) == 0x000310, "Member 'UQuest_RewardCards_C::OneCard_Rarity' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, MID_Flare_01) == 0x000320, "Member 'UQuest_RewardCards_C::MID_Flare_01' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, MID_Flare_02) == 0x000328, "Member 'UQuest_RewardCards_C::MID_Flare_02' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, MID_Fare_03) == 0x000330, "Member 'UQuest_RewardCards_C::MID_Fare_03' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, MID_Flare_04) == 0x000338, "Member 'UQuest_RewardCards_C::MID_Flare_04' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, GlowColor_Overide) == 0x000340, "Member 'UQuest_RewardCards_C::GlowColor_Overide' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, Explicit_GlowColor) == 0x000344, "Member 'UQuest_RewardCards_C::Explicit_GlowColor' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, ChoiceReward_Overide) == 0x000354, "Member 'UQuest_RewardCards_C::ChoiceReward_Overide' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, ChoiceMaterialArray) == 0x000358, "Member 'UQuest_RewardCards_C::ChoiceMaterialArray' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, Widget_Index) == 0x000368, "Member 'UQuest_RewardCards_C::Widget_Index' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, Card_Slot_01) == 0x000370, "Member 'UQuest_RewardCards_C::Card_Slot_01' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, Card_Slot_02) == 0x000378, "Member 'UQuest_RewardCards_C::Card_Slot_02' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, Card_Slot_03) == 0x000380, "Member 'UQuest_RewardCards_C::Card_Slot_03' has a wrong offset!");
static_assert(offsetof(UQuest_RewardCards_C, Card_Slot_04) == 0x000388, "Member 'UQuest_RewardCards_C::Card_Slot_04' has a wrong offset!");

}

