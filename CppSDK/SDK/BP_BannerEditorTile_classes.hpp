﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BannerEditorTile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_BannerEditorTile.BP_BannerEditorTile_C
// 0x0050 (0x0B90 - 0x0B40)
class UBP_BannerEditorTile_C final : public UFortPlayerProfileBannerEditorTile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B40(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ColorImage;                                        // 0x0B48(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_0;                            // 0x0B50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconImage;                                         // 0x0B58(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                       IconLoadGuard;                                     // 0x0B60(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BannerEditBorder;                            // 0x0B68(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                   NormalBangWrapper;                                 // 0x0B70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               ColorMid;                                          // 0x0B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   BannerTileBangUpdated;                             // 0x0B80(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BP_BannerEditorTile(int32 EntryPoint);
	void BP_OnHovered();
	void BP_OnSelected();
	void HandleBannerIconLoadGuardFinished(class UObject* Object);
	void Construct();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void Update_Bang_State();
	void Mark_Item_As_Seen();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BannerEditorTile_C">();
	}
	static class UBP_BannerEditorTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BannerEditorTile_C>();
	}
};
static_assert(alignof(UBP_BannerEditorTile_C) == 0x000008, "Wrong alignment on UBP_BannerEditorTile_C");
static_assert(sizeof(UBP_BannerEditorTile_C) == 0x000B90, "Wrong size on UBP_BannerEditorTile_C");
static_assert(offsetof(UBP_BannerEditorTile_C, UberGraphFrame) == 0x000B40, "Member 'UBP_BannerEditorTile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, ColorImage) == 0x000B48, "Member 'UBP_BannerEditorTile_C::ColorImage' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, CommonWidgetSwitcher_0) == 0x000B50, "Member 'UBP_BannerEditorTile_C::CommonWidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, IconImage) == 0x000B58, "Member 'UBP_BannerEditorTile_C::IconImage' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, IconLoadGuard) == 0x000B60, "Member 'UBP_BannerEditorTile_C::IconLoadGuard' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, Image_BannerEditBorder) == 0x000B68, "Member 'UBP_BannerEditorTile_C::Image_BannerEditBorder' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, NormalBangWrapper) == 0x000B70, "Member 'UBP_BannerEditorTile_C::NormalBangWrapper' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, ColorMid) == 0x000B78, "Member 'UBP_BannerEditorTile_C::ColorMid' has a wrong offset!");
static_assert(offsetof(UBP_BannerEditorTile_C, BannerTileBangUpdated) == 0x000B80, "Member 'UBP_BannerEditorTile_C::BannerTileBangUpdated' has a wrong offset!");

}

