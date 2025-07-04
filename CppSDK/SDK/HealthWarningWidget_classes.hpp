﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HealthWarningWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HealthWarningWidget.HealthWarningWidget_C
// 0x0048 (0x0398 - 0x0350)
class UHealthWarningWidget_C final : public UFortHealthWarningBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FinishingAnim;                                     // 0x0358(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonLazyImage*                       CommonLazyImage_0;                                 // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   HealthWarningCompleted;                            // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           ShowTimer;                                         // 0x0380(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                IconPadding;                                       // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_HealthWarningWidget(int32 EntryPoint);
	void HandleShowTimerComplete();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HealthWarningWidget_C">();
	}
	static class UHealthWarningWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHealthWarningWidget_C>();
	}
};
static_assert(alignof(UHealthWarningWidget_C) == 0x000008, "Wrong alignment on UHealthWarningWidget_C");
static_assert(sizeof(UHealthWarningWidget_C) == 0x000398, "Wrong size on UHealthWarningWidget_C");
static_assert(offsetof(UHealthWarningWidget_C, UberGraphFrame) == 0x000350, "Member 'UHealthWarningWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHealthWarningWidget_C, FinishingAnim) == 0x000358, "Member 'UHealthWarningWidget_C::FinishingAnim' has a wrong offset!");
static_assert(offsetof(UHealthWarningWidget_C, CommonLazyImage_0) == 0x000360, "Member 'UHealthWarningWidget_C::CommonLazyImage_0' has a wrong offset!");
static_assert(offsetof(UHealthWarningWidget_C, SafeZone_0) == 0x000368, "Member 'UHealthWarningWidget_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UHealthWarningWidget_C, HealthWarningCompleted) == 0x000370, "Member 'UHealthWarningWidget_C::HealthWarningCompleted' has a wrong offset!");
static_assert(offsetof(UHealthWarningWidget_C, ShowTimer) == 0x000380, "Member 'UHealthWarningWidget_C::ShowTimer' has a wrong offset!");
static_assert(offsetof(UHealthWarningWidget_C, IconPadding) == 0x000388, "Member 'UHealthWarningWidget_C::IconPadding' has a wrong offset!");

}

