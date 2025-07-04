﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HelpPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HelpPanel.HelpPanel_C
// 0x0068 (0x03B0 - 0x0348)
class UHelpPanel_C final : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                      CloseButton;                                       // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHelpEntryBodyWidget_C*                 HelpEntryBodyWidget;                               // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             HelpEntryScrollBox;                                // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HelpIcon;                                          // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTreeView*                        HelpTreeView;                                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextHeader;                                        // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFortHelpItem*>                  TopLevelHelpItems;                                 // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FText                                   Header_Display_Text;                               // 0x0398(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_HelpPanel(int32 EntryPoint);
	void OnContextHelpChanged();
	void Construct();
	void Destruct();
	void BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void OnActivated();
	void BndEvt__SocialTreeView_K2Node_ComponentBoundEvent_256_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected);
	void BndEvt__IconTextButton_1_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BindDelegates();
	void HandleTopHelpListChanged(TArray<class UFortHelpItem*>& InHelpItems, bool bExpandAll);
	void UpdateDetails(class UFortHelpItem* SelectedHelpItem);
	TArray<class UObject*> HelpTreeView_GetChildrenForCategory(class UObject* Item);
	void UnbindDelegates();
	void SetSelectedItemByID(class FName SelectedItemID);
	void Setup_Header();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HelpPanel_C">();
	}
	static class UHelpPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHelpPanel_C>();
	}
};
static_assert(alignof(UHelpPanel_C) == 0x000008, "Wrong alignment on UHelpPanel_C");
static_assert(sizeof(UHelpPanel_C) == 0x0003B0, "Wrong size on UHelpPanel_C");
static_assert(offsetof(UHelpPanel_C, UberGraphFrame) == 0x000348, "Member 'UHelpPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHelpPanel_C, CloseButton) == 0x000350, "Member 'UHelpPanel_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UHelpPanel_C, HelpEntryBodyWidget) == 0x000358, "Member 'UHelpPanel_C::HelpEntryBodyWidget' has a wrong offset!");
static_assert(offsetof(UHelpPanel_C, HelpEntryScrollBox) == 0x000360, "Member 'UHelpPanel_C::HelpEntryScrollBox' has a wrong offset!");
static_assert(offsetof(UHelpPanel_C, HelpIcon) == 0x000368, "Member 'UHelpPanel_C::HelpIcon' has a wrong offset!");
static_assert(offsetof(UHelpPanel_C, HelpTreeView) == 0x000370, "Member 'UHelpPanel_C::HelpTreeView' has a wrong offset!");
static_assert(offsetof(UHelpPanel_C, Lightbox) == 0x000378, "Member 'UHelpPanel_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UHelpPanel_C, TextHeader) == 0x000380, "Member 'UHelpPanel_C::TextHeader' has a wrong offset!");
static_assert(offsetof(UHelpPanel_C, TopLevelHelpItems) == 0x000388, "Member 'UHelpPanel_C::TopLevelHelpItems' has a wrong offset!");
static_assert(offsetof(UHelpPanel_C, Header_Display_Text) == 0x000398, "Member 'UHelpPanel_C::Header_Display_Text' has a wrong offset!");

}

