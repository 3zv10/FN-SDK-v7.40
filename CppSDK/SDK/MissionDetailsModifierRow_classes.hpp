﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionDetailsModifierRow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MissionDetailsModifierRow.MissionDetailsModifierRow_C
// 0x00B8 (0x02E8 - 0x0230)
class UMissionDetailsModifierRow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x0238(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonLazyImage*                       ImageModifier;                                     // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxIcon;                                       // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextModifierDescription;                           // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextModifierName;                                  // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 NameTextStyle;                                     // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                 DescriptionTextStyle;                              // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   Name_0;                                            // 0x0270(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          ShowName;                                          // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_289[0x7];                                      // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Description;                                       // 0x0290(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          ShowDescription;                                   // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Icon;                                              // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bUseSmallIcon;                                     // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              IconAssetID;                                       // 0x02C0(0x0028)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MissionDetailsModifierRow(int32 EntryPoint);
	void Construct();
	void Update();
	void PlayIntroAnimation();
	void Show_Label(bool ShowLabel);
	void UpdateName();
	void UpdateDescription();
	void UpdateIcon();
	void SetName(const class FText& In_Name);
	void SetShowName(bool In_Show);
	void SetNameTextStyle(class UClass* In_Style);
	void UpdateShowName();
	void UpdateNameTextStyle();
	void SetDescription(const class FText& In_Description);
	void SetShowDescription(bool In_Show);
	void UpdateShowDescription();
	void SetDescriptionTextStyle(class UClass* In_Style);
	void UpdateDescriptionTextStyle();
	void SetUseSmallIcon(bool In_Use);
	void SetIcon(class UTexture2D* In_Icon);
	void SetIconAsset(TSoftObjectPtr<class UTexture2D> In_Icon);
	void SetData(const class FText& In_Name, bool In_Show_Name, class UClass* In_Name_Text_Style, const class FText& In_Description, bool In_Show_Description, class UClass* In_Desc_Text_Style, class UTexture2D* In_Icon, bool In_Use_Small_Icon, TSoftObjectPtr<class UTexture2D> In_Icon_Asset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionDetailsModifierRow_C">();
	}
	static class UMissionDetailsModifierRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionDetailsModifierRow_C>();
	}
};
static_assert(alignof(UMissionDetailsModifierRow_C) == 0x000008, "Wrong alignment on UMissionDetailsModifierRow_C");
static_assert(sizeof(UMissionDetailsModifierRow_C) == 0x0002E8, "Wrong size on UMissionDetailsModifierRow_C");
static_assert(offsetof(UMissionDetailsModifierRow_C, UberGraphFrame) == 0x000230, "Member 'UMissionDetailsModifierRow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMissionDetailsModifierRow_C, Intro) == 0x000238, "Member 'UMissionDetailsModifierRow_C::Intro' has a wrong offset!");
static_assert(offsetof(UMissionDetailsModifierRow_C, ImageModifier) == 0x000240, "Member 'UMissionDetailsModifierRow_C::ImageModifier' has a wrong offset!");
static_assert(offsetof(UMissionDetailsModifierRow_C, SizeBoxIcon) == 0x000248, "Member 'UMissionDetailsModifierRow_C::SizeBoxIcon' has a wrong offset!");
static_assert(offsetof(UMissionDetailsModifierRow_C, TextModifierDescription) == 0x000250, "Member 'UMissionDetailsModifierRow_C::TextModifierDescription' has a wrong offset!");
static_assert(offsetof(UMissionDetailsModifierRow_C, TextModifierName) == 0x000258, "Member 'UMissionDetailsModifierRow_C::TextModifierName' has a wrong offset!");
static_assert(offsetof(UMissionDetailsModifierRow_C, NameTextStyle) == 0x000260, "Member 'UMissionDetailsModifierRow_C::NameTextStyle' has a wrong offset!");
static_assert(offsetof(UMissionDetailsModifierRow_C, DescriptionTextStyle) == 0x000268, "Member 'UMissionDetailsModifierRow_C::DescriptionTextStyle' has a wrong offset!");
static_assert(offsetof(UMissionDetailsModifierRow_C, Name_0) == 0x000270, "Member 'UMissionDetailsModifierRow_C::Name_0' has a wrong offset!");
static_assert(offsetof(UMissionDetailsModifierRow_C, ShowName) == 0x000288, "Member 'UMissionDetailsModifierRow_C::ShowName' has a wrong offset!");
static_assert(offsetof(UMissionDetailsModifierRow_C, Description) == 0x000290, "Member 'UMissionDetailsModifierRow_C::Description' has a wrong offset!");
static_assert(offsetof(UMissionDetailsModifierRow_C, ShowDescription) == 0x0002A8, "Member 'UMissionDetailsModifierRow_C::ShowDescription' has a wrong offset!");
static_assert(offsetof(UMissionDetailsModifierRow_C, Icon) == 0x0002B0, "Member 'UMissionDetailsModifierRow_C::Icon' has a wrong offset!");
static_assert(offsetof(UMissionDetailsModifierRow_C, bUseSmallIcon) == 0x0002B8, "Member 'UMissionDetailsModifierRow_C::bUseSmallIcon' has a wrong offset!");
static_assert(offsetof(UMissionDetailsModifierRow_C, IconAssetID) == 0x0002C0, "Member 'UMissionDetailsModifierRow_C::IconAssetID' has a wrong offset!");

}

