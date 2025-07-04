﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroLoadoutPerksDetailWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C
// 0x00B0 (0x0330 - 0x0280)
class UHeroLoadoutPerksDetailWidget_C final : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                          Border_Warning;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommanderPerkBorder;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHeroLoadoutPerkDetailRow_C*            CommanderPerkDetailRow;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_CommanderPerk;                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_LeaderPerk;                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_StandardPerk;                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorderFlavortext_01;                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorderFlavortext_02;                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorderFlavortext_03;                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CrewLeaderPerkBorder;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       LazyImage_Warning;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHeroLoadoutPerkDetailRow_C*            LeaderPerkDetailRow;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          NormalPerkBorder;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               RootVisibilityBox;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHeroLoadoutPerkDetailRow_C*            StandardPerkDetailRow;                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Warning;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortCampaignHeroLoadoutItem*           LoadoutContext;                                    // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SlotNameContext;                                   // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHeroLoadout_Tooltip;                             // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_HeroLoadoutPerksDetailWidget(int32 EntryPoint);
	void Construct();
	void HandlePostDifferentItemToDetailSet();
	void SetLoadoutSlotContext(class UFortCampaignHeroLoadoutItem* HeroLoadout, class FName SlotName);
	void ClearLoadoutSlotContext();
	void HandleDifferentLoadoutSlotContextSet();
	void UpdateRootVisibility();
	void UpdateHeroLoadoutSlotWarning();
	void UpdateCommanderSlotPerkVisibility();
	void ShouldShowWarning(const class UFortHero* SlottedHero, bool* Result);
	void GetWarningText(class UFortHero* Hero, class FText* Result);
	void IsValidHeroSlot(bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HeroLoadoutPerksDetailWidget_C">();
	}
	static class UHeroLoadoutPerksDetailWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHeroLoadoutPerksDetailWidget_C>();
	}
};
static_assert(alignof(UHeroLoadoutPerksDetailWidget_C) == 0x000008, "Wrong alignment on UHeroLoadoutPerksDetailWidget_C");
static_assert(sizeof(UHeroLoadoutPerksDetailWidget_C) == 0x000330, "Wrong size on UHeroLoadoutPerksDetailWidget_C");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, UberGraphFrame) == 0x000280, "Member 'UHeroLoadoutPerksDetailWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, Border_Warning) == 0x000288, "Member 'UHeroLoadoutPerksDetailWidget_C::Border_Warning' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, CommanderPerkBorder) == 0x000290, "Member 'UHeroLoadoutPerksDetailWidget_C::CommanderPerkBorder' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, CommanderPerkDetailRow) == 0x000298, "Member 'UHeroLoadoutPerksDetailWidget_C::CommanderPerkDetailRow' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, CommonBorder_CommanderPerk) == 0x0002A0, "Member 'UHeroLoadoutPerksDetailWidget_C::CommonBorder_CommanderPerk' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, CommonBorder_LeaderPerk) == 0x0002A8, "Member 'UHeroLoadoutPerksDetailWidget_C::CommonBorder_LeaderPerk' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, CommonBorder_StandardPerk) == 0x0002B0, "Member 'UHeroLoadoutPerksDetailWidget_C::CommonBorder_StandardPerk' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, CommonBorderFlavortext_01) == 0x0002B8, "Member 'UHeroLoadoutPerksDetailWidget_C::CommonBorderFlavortext_01' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, CommonBorderFlavortext_02) == 0x0002C0, "Member 'UHeroLoadoutPerksDetailWidget_C::CommonBorderFlavortext_02' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, CommonBorderFlavortext_03) == 0x0002C8, "Member 'UHeroLoadoutPerksDetailWidget_C::CommonBorderFlavortext_03' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, CrewLeaderPerkBorder) == 0x0002D0, "Member 'UHeroLoadoutPerksDetailWidget_C::CrewLeaderPerkBorder' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, Image_0) == 0x0002D8, "Member 'UHeroLoadoutPerksDetailWidget_C::Image_0' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, Image_1) == 0x0002E0, "Member 'UHeroLoadoutPerksDetailWidget_C::Image_1' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, LazyImage_Warning) == 0x0002E8, "Member 'UHeroLoadoutPerksDetailWidget_C::LazyImage_Warning' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, LeaderPerkDetailRow) == 0x0002F0, "Member 'UHeroLoadoutPerksDetailWidget_C::LeaderPerkDetailRow' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, NormalPerkBorder) == 0x0002F8, "Member 'UHeroLoadoutPerksDetailWidget_C::NormalPerkBorder' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, RootVisibilityBox) == 0x000300, "Member 'UHeroLoadoutPerksDetailWidget_C::RootVisibilityBox' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, StandardPerkDetailRow) == 0x000308, "Member 'UHeroLoadoutPerksDetailWidget_C::StandardPerkDetailRow' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, Text_Warning) == 0x000310, "Member 'UHeroLoadoutPerksDetailWidget_C::Text_Warning' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, LoadoutContext) == 0x000318, "Member 'UHeroLoadoutPerksDetailWidget_C::LoadoutContext' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, SlotNameContext) == 0x000320, "Member 'UHeroLoadoutPerksDetailWidget_C::SlotNameContext' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutPerksDetailWidget_C, IsHeroLoadout_Tooltip) == 0x000328, "Member 'UHeroLoadoutPerksDetailWidget_C::IsHeroLoadout_Tooltip' has a wrong offset!");

}

