﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaReplayBrowserRow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaReplayBrowserRow.AthenaReplayBrowserRow_C
// 0x0120 (0x0C60 - 0x0B40)
class UAthenaReplayBrowserRow_C final : public UAthenaReplayBrowserEntryWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B40(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                          CommonBorder_1;                                    // 0x0B48(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Date;                                              // 0x0B50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Kills;                                             // 0x0B58(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Length;                                            // 0x0B60(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Mode;                                              // 0x0B68(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Name_0;                                            // 0x0B70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProAmImage;                                        // 0x0B78(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Rank;                                              // 0x0B80(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               RowHeightSB;                                       // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Size;                                              // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Version;                                           // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Views;                                             // 0x0BA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 SavedReplayBrush;                                  // 0x0BA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CorruptedReplayBrush;                              // 0x0BB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 UnsavedReplayBrush;                                // 0x0BB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 FeaturedReplayBrush;                               // 0x0BC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAthenaReplayBrowserRowData            DummyRowData;                                      // 0x0BC8(0x0090)(Edit, BlueprintVisible)
	float                                         NormalRowHeight;                                   // 0x0C58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FeaturedRowHeight;                                 // 0x0C5C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaReplayBrowserRow(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void OnReplayBrowserEntryDataSet();
	void Refresh();
	class FText FormatLengthText(float Seconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaReplayBrowserRow_C">();
	}
	static class UAthenaReplayBrowserRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaReplayBrowserRow_C>();
	}
};
static_assert(alignof(UAthenaReplayBrowserRow_C) == 0x000008, "Wrong alignment on UAthenaReplayBrowserRow_C");
static_assert(sizeof(UAthenaReplayBrowserRow_C) == 0x000C60, "Wrong size on UAthenaReplayBrowserRow_C");
static_assert(offsetof(UAthenaReplayBrowserRow_C, UberGraphFrame) == 0x000B40, "Member 'UAthenaReplayBrowserRow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRow_C, CommonBorder_1) == 0x000B48, "Member 'UAthenaReplayBrowserRow_C::CommonBorder_1' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRow_C, Date) == 0x000B50, "Member 'UAthenaReplayBrowserRow_C::Date' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRow_C, Kills) == 0x000B58, "Member 'UAthenaReplayBrowserRow_C::Kills' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRow_C, Length) == 0x000B60, "Member 'UAthenaReplayBrowserRow_C::Length' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRow_C, Mode) == 0x000B68, "Member 'UAthenaReplayBrowserRow_C::Mode' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRow_C, Name_0) == 0x000B70, "Member 'UAthenaReplayBrowserRow_C::Name_0' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRow_C, ProAmImage) == 0x000B78, "Member 'UAthenaReplayBrowserRow_C::ProAmImage' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRow_C, Rank) == 0x000B80, "Member 'UAthenaReplayBrowserRow_C::Rank' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRow_C, RowHeightSB) == 0x000B88, "Member 'UAthenaReplayBrowserRow_C::RowHeightSB' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRow_C, Size) == 0x000B90, "Member 'UAthenaReplayBrowserRow_C::Size' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRow_C, Version) == 0x000B98, "Member 'UAthenaReplayBrowserRow_C::Version' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRow_C, Views) == 0x000BA0, "Member 'UAthenaReplayBrowserRow_C::Views' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRow_C, SavedReplayBrush) == 0x000BA8, "Member 'UAthenaReplayBrowserRow_C::SavedReplayBrush' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRow_C, CorruptedReplayBrush) == 0x000BB0, "Member 'UAthenaReplayBrowserRow_C::CorruptedReplayBrush' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRow_C, UnsavedReplayBrush) == 0x000BB8, "Member 'UAthenaReplayBrowserRow_C::UnsavedReplayBrush' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRow_C, FeaturedReplayBrush) == 0x000BC0, "Member 'UAthenaReplayBrowserRow_C::FeaturedReplayBrush' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRow_C, DummyRowData) == 0x000BC8, "Member 'UAthenaReplayBrowserRow_C::DummyRowData' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRow_C, NormalRowHeight) == 0x000C58, "Member 'UAthenaReplayBrowserRow_C::NormalRowHeight' has a wrong offset!");
static_assert(offsetof(UAthenaReplayBrowserRow_C, FeaturedRowHeight) == 0x000C5C, "Member 'UAthenaReplayBrowserRow_C::FeaturedRowHeight' has a wrong offset!");

}

