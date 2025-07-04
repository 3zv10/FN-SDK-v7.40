﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventLeaderboardEventDetails

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventLeaderboardEventDetails.EventLeaderboardEventDetails_C
// 0x0020 (0x05D8 - 0x05B8)
class UEventLeaderboardEventDetails_C final : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       CommonTextBlock_0;                                 // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_EventName;                                    // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_SessionName;                                  // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EventLeaderboardEventDetails(int32 EntryPoint);
	void RefreshDataBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventLeaderboardEventDetails_C">();
	}
	static class UEventLeaderboardEventDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventLeaderboardEventDetails_C>();
	}
};
static_assert(alignof(UEventLeaderboardEventDetails_C) == 0x000008, "Wrong alignment on UEventLeaderboardEventDetails_C");
static_assert(sizeof(UEventLeaderboardEventDetails_C) == 0x0005D8, "Wrong size on UEventLeaderboardEventDetails_C");
static_assert(offsetof(UEventLeaderboardEventDetails_C, UberGraphFrame) == 0x0005B8, "Member 'UEventLeaderboardEventDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEventDetails_C, CommonTextBlock_0) == 0x0005C0, "Member 'UEventLeaderboardEventDetails_C::CommonTextBlock_0' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEventDetails_C, Text_EventName) == 0x0005C8, "Member 'UEventLeaderboardEventDetails_C::Text_EventName' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEventDetails_C, Text_SessionName) == 0x0005D0, "Member 'UEventLeaderboardEventDetails_C::Text_SessionName' has a wrong offset!");

}

