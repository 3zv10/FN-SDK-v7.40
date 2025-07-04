﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FIlteredTextEntryWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FIlteredTextEntryWidget.FilteredTextEntryWidget_C
// 0x0018 (0x0278 - 0x0260)
class UFilteredTextEntryWidget_C final : public UFortEditableFilteredCountedTextBox
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Error;                                             // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       ErrorText;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FilteredTextEntryWidget(int32 EntryPoint);
	void OnDirtyTextAttempted(bool bIsBadText);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FilteredTextEntryWidget_C">();
	}
	static class UFilteredTextEntryWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFilteredTextEntryWidget_C>();
	}
};
static_assert(alignof(UFilteredTextEntryWidget_C) == 0x000008, "Wrong alignment on UFilteredTextEntryWidget_C");
static_assert(sizeof(UFilteredTextEntryWidget_C) == 0x000278, "Wrong size on UFilteredTextEntryWidget_C");
static_assert(offsetof(UFilteredTextEntryWidget_C, UberGraphFrame) == 0x000260, "Member 'UFilteredTextEntryWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, Error) == 0x000268, "Member 'UFilteredTextEntryWidget_C::Error' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, ErrorText) == 0x000270, "Member 'UFilteredTextEntryWidget_C::ErrorText' has a wrong offset!");

}

