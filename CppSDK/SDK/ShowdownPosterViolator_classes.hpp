﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShowdownPosterViolator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShowdownPosterViolator.ShowdownPosterViolator_C
// 0x0030 (0x05E8 - 0x05B8)
class UShowdownPosterViolator_C final : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonWidgetSwitcher*                  EventStateSwitcher;                                // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          FutureEventViolator;                               // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          LiveEventViolator;                                 // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULiveViolator_C*                        LiveViolator;                                      // 0x05D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          NoViolator;                                        // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ShowdownPosterViolator(int32 EntryPoint);
	void RefreshDataBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownPosterViolator_C">();
	}
	static class UShowdownPosterViolator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownPosterViolator_C>();
	}
};
static_assert(alignof(UShowdownPosterViolator_C) == 0x000008, "Wrong alignment on UShowdownPosterViolator_C");
static_assert(sizeof(UShowdownPosterViolator_C) == 0x0005E8, "Wrong size on UShowdownPosterViolator_C");
static_assert(offsetof(UShowdownPosterViolator_C, UberGraphFrame) == 0x0005B8, "Member 'UShowdownPosterViolator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShowdownPosterViolator_C, EventStateSwitcher) == 0x0005C0, "Member 'UShowdownPosterViolator_C::EventStateSwitcher' has a wrong offset!");
static_assert(offsetof(UShowdownPosterViolator_C, FutureEventViolator) == 0x0005C8, "Member 'UShowdownPosterViolator_C::FutureEventViolator' has a wrong offset!");
static_assert(offsetof(UShowdownPosterViolator_C, LiveEventViolator) == 0x0005D0, "Member 'UShowdownPosterViolator_C::LiveEventViolator' has a wrong offset!");
static_assert(offsetof(UShowdownPosterViolator_C, LiveViolator) == 0x0005D8, "Member 'UShowdownPosterViolator_C::LiveViolator' has a wrong offset!");
static_assert(offsetof(UShowdownPosterViolator_C, NoViolator) == 0x0005E0, "Member 'UShowdownPosterViolator_C::NoViolator' has a wrong offset!");

}

