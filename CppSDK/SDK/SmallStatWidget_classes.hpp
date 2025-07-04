﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SmallStatWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SmallStatWidget.SmallStatWidget_C
// 0x0018 (0x0260 - 0x0248)
class USmallStatWidget_C final : public UAthenaProfileStatWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 StatImage;                                         // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                StatValue;                                         // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SmallStatWidget(int32 EntryPoint);
	void OnStatChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SmallStatWidget_C">();
	}
	static class USmallStatWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmallStatWidget_C>();
	}
};
static_assert(alignof(USmallStatWidget_C) == 0x000008, "Wrong alignment on USmallStatWidget_C");
static_assert(sizeof(USmallStatWidget_C) == 0x000260, "Wrong size on USmallStatWidget_C");
static_assert(offsetof(USmallStatWidget_C, UberGraphFrame) == 0x000248, "Member 'USmallStatWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USmallStatWidget_C, StatImage) == 0x000250, "Member 'USmallStatWidget_C::StatImage' has a wrong offset!");
static_assert(offsetof(USmallStatWidget_C, StatValue) == 0x000258, "Member 'USmallStatWidget_C::StatValue' has a wrong offset!");

}

