﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LargeStatWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LargeStatWidget.LargeStatWidget_C
// 0x0028 (0x0270 - 0x0248)
class ULargeStatWidget_C final : public UAthenaProfileStatWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       StatEntryNumber;                                   // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StatImage;                                         // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       StatName;                                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                StatValue;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LargeStatWidget(int32 EntryPoint);
	void OnStatChanged();
	void SetStatEntryNumber(int32 StatEntryNumber_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LargeStatWidget_C">();
	}
	static class ULargeStatWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULargeStatWidget_C>();
	}
};
static_assert(alignof(ULargeStatWidget_C) == 0x000008, "Wrong alignment on ULargeStatWidget_C");
static_assert(sizeof(ULargeStatWidget_C) == 0x000270, "Wrong size on ULargeStatWidget_C");
static_assert(offsetof(ULargeStatWidget_C, UberGraphFrame) == 0x000248, "Member 'ULargeStatWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULargeStatWidget_C, StatEntryNumber) == 0x000250, "Member 'ULargeStatWidget_C::StatEntryNumber' has a wrong offset!");
static_assert(offsetof(ULargeStatWidget_C, StatImage) == 0x000258, "Member 'ULargeStatWidget_C::StatImage' has a wrong offset!");
static_assert(offsetof(ULargeStatWidget_C, StatName) == 0x000260, "Member 'ULargeStatWidget_C::StatName' has a wrong offset!");
static_assert(offsetof(ULargeStatWidget_C, StatValue) == 0x000268, "Member 'ULargeStatWidget_C::StatValue' has a wrong offset!");

}

