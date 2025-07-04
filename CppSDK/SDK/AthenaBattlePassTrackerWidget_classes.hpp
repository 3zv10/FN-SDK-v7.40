﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaBattlePassTrackerWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaBattlePassTrackerWidget.AthenaBattlePassTrackerWidget_C
// 0x0040 (0x02B0 - 0x0270)
class UAthenaBattlePassTrackerWidget_C final : public UFortAccountWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaSeasonBPTrackerSimpleWidget_C*   AthenaSeasonBPTrackerSimpleWidget;                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BattlePassImage;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       BattlePassName;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PassImageGlow;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TierText;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          TrackerCB;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          UpsellCB;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaBattlePassTrackerWidget(int32 EntryPoint);
	void OnAccountInfoChanged(const struct FFortPublicAccountInfo& Result);
	void UpdateUpsellInfo();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaBattlePassTrackerWidget_C">();
	}
	static class UAthenaBattlePassTrackerWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaBattlePassTrackerWidget_C>();
	}
};
static_assert(alignof(UAthenaBattlePassTrackerWidget_C) == 0x000008, "Wrong alignment on UAthenaBattlePassTrackerWidget_C");
static_assert(sizeof(UAthenaBattlePassTrackerWidget_C) == 0x0002B0, "Wrong size on UAthenaBattlePassTrackerWidget_C");
static_assert(offsetof(UAthenaBattlePassTrackerWidget_C, UberGraphFrame) == 0x000270, "Member 'UAthenaBattlePassTrackerWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaBattlePassTrackerWidget_C, AthenaSeasonBPTrackerSimpleWidget) == 0x000278, "Member 'UAthenaBattlePassTrackerWidget_C::AthenaSeasonBPTrackerSimpleWidget' has a wrong offset!");
static_assert(offsetof(UAthenaBattlePassTrackerWidget_C, BattlePassImage) == 0x000280, "Member 'UAthenaBattlePassTrackerWidget_C::BattlePassImage' has a wrong offset!");
static_assert(offsetof(UAthenaBattlePassTrackerWidget_C, BattlePassName) == 0x000288, "Member 'UAthenaBattlePassTrackerWidget_C::BattlePassName' has a wrong offset!");
static_assert(offsetof(UAthenaBattlePassTrackerWidget_C, PassImageGlow) == 0x000290, "Member 'UAthenaBattlePassTrackerWidget_C::PassImageGlow' has a wrong offset!");
static_assert(offsetof(UAthenaBattlePassTrackerWidget_C, TierText) == 0x000298, "Member 'UAthenaBattlePassTrackerWidget_C::TierText' has a wrong offset!");
static_assert(offsetof(UAthenaBattlePassTrackerWidget_C, TrackerCB) == 0x0002A0, "Member 'UAthenaBattlePassTrackerWidget_C::TrackerCB' has a wrong offset!");
static_assert(offsetof(UAthenaBattlePassTrackerWidget_C, UpsellCB) == 0x0002A8, "Member 'UAthenaBattlePassTrackerWidget_C::UpsellCB' has a wrong offset!");

}

