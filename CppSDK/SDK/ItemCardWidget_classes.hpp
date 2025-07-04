﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemCardWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemCardWidget.ItemCardWidget_C
// 0x0060 (0x0B90 - 0x0B30)
class UItemCardWidget_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Show;                                              // 0x0B38(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                 FortMultiSizeItemCard_0;                           // 0x0B40(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnHoveredEvent;                                    // 0x0B48(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FFortReceivedItemLootInfo              ItemReceivedInfo_BP;                               // 0x0B58(0x0028)(Edit, BlueprintVisible, ExposeOnSpawn)
	class USoundBase*                             SoundOnItemCardShow;                               // 0x0B80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         cscs;                                              // 0x0B88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemCardWidget(int32 EntryPoint);
	void BP_OnHovered();
	void Construct();
	void OnCentered();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void PlayShow(int32 idx);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemCardWidget_C">();
	}
	static class UItemCardWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemCardWidget_C>();
	}
};
static_assert(alignof(UItemCardWidget_C) == 0x000008, "Wrong alignment on UItemCardWidget_C");
static_assert(sizeof(UItemCardWidget_C) == 0x000B90, "Wrong size on UItemCardWidget_C");
static_assert(offsetof(UItemCardWidget_C, UberGraphFrame) == 0x000B30, "Member 'UItemCardWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemCardWidget_C, Show) == 0x000B38, "Member 'UItemCardWidget_C::Show' has a wrong offset!");
static_assert(offsetof(UItemCardWidget_C, FortMultiSizeItemCard_0) == 0x000B40, "Member 'UItemCardWidget_C::FortMultiSizeItemCard_0' has a wrong offset!");
static_assert(offsetof(UItemCardWidget_C, OnHoveredEvent) == 0x000B48, "Member 'UItemCardWidget_C::OnHoveredEvent' has a wrong offset!");
static_assert(offsetof(UItemCardWidget_C, ItemReceivedInfo_BP) == 0x000B58, "Member 'UItemCardWidget_C::ItemReceivedInfo_BP' has a wrong offset!");
static_assert(offsetof(UItemCardWidget_C, SoundOnItemCardShow) == 0x000B80, "Member 'UItemCardWidget_C::SoundOnItemCardShow' has a wrong offset!");
static_assert(offsetof(UItemCardWidget_C, cscs) == 0x000B88, "Member 'UItemCardWidget_C::cscs' has a wrong offset!");

}

