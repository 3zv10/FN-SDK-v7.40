﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProfileStatsWeaponsSubScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C
// 0x0030 (0x0350 - 0x0320)
class UProfileStatsWeaponsSubScreen_C final : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPieChartStatWidget_C*                  PieChartStatWidget;                                // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaProfileStatBox*                  ProfileStatBox;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonListView*                        WeaponList;                                        // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    BackAction;                                        // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_ProfileStatsWeaponsSubScreen(int32 EntryPoint);
	void HandleStatViewChanged(class UAthenaBaseStatView* StatView);
	void Construct();
	void HandleBack(bool* PassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProfileStatsWeaponsSubScreen_C">();
	}
	static class UProfileStatsWeaponsSubScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProfileStatsWeaponsSubScreen_C>();
	}
};
static_assert(alignof(UProfileStatsWeaponsSubScreen_C) == 0x000008, "Wrong alignment on UProfileStatsWeaponsSubScreen_C");
static_assert(sizeof(UProfileStatsWeaponsSubScreen_C) == 0x000350, "Wrong size on UProfileStatsWeaponsSubScreen_C");
static_assert(offsetof(UProfileStatsWeaponsSubScreen_C, UberGraphFrame) == 0x000320, "Member 'UProfileStatsWeaponsSubScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProfileStatsWeaponsSubScreen_C, PieChartStatWidget) == 0x000328, "Member 'UProfileStatsWeaponsSubScreen_C::PieChartStatWidget' has a wrong offset!");
static_assert(offsetof(UProfileStatsWeaponsSubScreen_C, ProfileStatBox) == 0x000330, "Member 'UProfileStatsWeaponsSubScreen_C::ProfileStatBox' has a wrong offset!");
static_assert(offsetof(UProfileStatsWeaponsSubScreen_C, WeaponList) == 0x000338, "Member 'UProfileStatsWeaponsSubScreen_C::WeaponList' has a wrong offset!");
static_assert(offsetof(UProfileStatsWeaponsSubScreen_C, BackAction) == 0x000340, "Member 'UProfileStatsWeaponsSubScreen_C::BackAction' has a wrong offset!");

}

