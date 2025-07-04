﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatsModeItemDetailsHostPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StatsModeItemDetailsHostPanel.StatsModeItemDetailsHostPanel_C
// 0x0028 (0x02F0 - 0x02C8)
class UStatsModeItemDetailsHostPanel_C final : public UFortItemManagementItemDetailsPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UItemDetailsHeader_C*                   HeaderWidget;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemAttributesDetailWidget_C*          ItemAttributesDetailWidget;                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MarkedForMulchingBackgroundImage;                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeImage*                    MarkedForMulchingIndicatorImage;                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StatsModeItemDetailsHostPanel(int32 EntryPoint);
	void HandleHasItemMarkedForMulchingChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatsModeItemDetailsHostPanel_C">();
	}
	static class UStatsModeItemDetailsHostPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatsModeItemDetailsHostPanel_C>();
	}
};
static_assert(alignof(UStatsModeItemDetailsHostPanel_C) == 0x000008, "Wrong alignment on UStatsModeItemDetailsHostPanel_C");
static_assert(sizeof(UStatsModeItemDetailsHostPanel_C) == 0x0002F0, "Wrong size on UStatsModeItemDetailsHostPanel_C");
static_assert(offsetof(UStatsModeItemDetailsHostPanel_C, UberGraphFrame) == 0x0002C8, "Member 'UStatsModeItemDetailsHostPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStatsModeItemDetailsHostPanel_C, HeaderWidget) == 0x0002D0, "Member 'UStatsModeItemDetailsHostPanel_C::HeaderWidget' has a wrong offset!");
static_assert(offsetof(UStatsModeItemDetailsHostPanel_C, ItemAttributesDetailWidget) == 0x0002D8, "Member 'UStatsModeItemDetailsHostPanel_C::ItemAttributesDetailWidget' has a wrong offset!");
static_assert(offsetof(UStatsModeItemDetailsHostPanel_C, MarkedForMulchingBackgroundImage) == 0x0002E0, "Member 'UStatsModeItemDetailsHostPanel_C::MarkedForMulchingBackgroundImage' has a wrong offset!");
static_assert(offsetof(UStatsModeItemDetailsHostPanel_C, MarkedForMulchingIndicatorImage) == 0x0002E8, "Member 'UStatsModeItemDetailsHostPanel_C::MarkedForMulchingIndicatorImage' has a wrong offset!");

}

