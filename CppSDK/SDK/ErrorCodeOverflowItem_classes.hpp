﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ErrorCodeOverflowItem

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ErrorCodeOverflowItem.ErrorCodeOverflowItem_C
// 0x0008 (0x0238 - 0x0230)
class UErrorCodeOverflowItem_C final : public UUserWidget
{
public:
	class UTextBlock*                             TextBlock_332;                                     // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetErrorCodeDisplay(const class FString& ErrorCode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ErrorCodeOverflowItem_C">();
	}
	static class UErrorCodeOverflowItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UErrorCodeOverflowItem_C>();
	}
};
static_assert(alignof(UErrorCodeOverflowItem_C) == 0x000008, "Wrong alignment on UErrorCodeOverflowItem_C");
static_assert(sizeof(UErrorCodeOverflowItem_C) == 0x000238, "Wrong size on UErrorCodeOverflowItem_C");
static_assert(offsetof(UErrorCodeOverflowItem_C, TextBlock_332) == 0x000230, "Member 'UErrorCodeOverflowItem_C::TextBlock_332' has a wrong offset!");

}

