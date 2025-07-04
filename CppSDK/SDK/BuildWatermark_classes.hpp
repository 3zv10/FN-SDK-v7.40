﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BuildWatermark

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BuildWatermark.BuildWatermark_C
// 0x0020 (0x0288 - 0x0268)
class UBuildWatermark_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             BuildText;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_CalendarOffset;                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextMcpVersion;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BuildWatermark(int32 EntryPoint);
	void HandlePlayerStateChanged(const struct FFortTeamMemberInfo& PlayerInfo);
	void Destruct();
	void HandlePartyJoined();
	void Construct();
	void Update_Watermark();
	void SetTextCollapseIfDefault(class UTextBlock* Text_Widget, const class FString& InputText, const class FString& DefaultText);
	void UpdateCalenderOffset();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BuildWatermark_C">();
	}
	static class UBuildWatermark_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuildWatermark_C>();
	}
};
static_assert(alignof(UBuildWatermark_C) == 0x000008, "Wrong alignment on UBuildWatermark_C");
static_assert(sizeof(UBuildWatermark_C) == 0x000288, "Wrong size on UBuildWatermark_C");
static_assert(offsetof(UBuildWatermark_C, UberGraphFrame) == 0x000268, "Member 'UBuildWatermark_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBuildWatermark_C, BuildText) == 0x000270, "Member 'UBuildWatermark_C::BuildText' has a wrong offset!");
static_assert(offsetof(UBuildWatermark_C, Text_CalendarOffset) == 0x000278, "Member 'UBuildWatermark_C::Text_CalendarOffset' has a wrong offset!");
static_assert(offsetof(UBuildWatermark_C, TextMcpVersion) == 0x000280, "Member 'UBuildWatermark_C::TextMcpVersion' has a wrong offset!");

}

