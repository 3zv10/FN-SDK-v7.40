﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GamepadInfoSelectorPanel_v3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C
// 0x00C8 (0x0410 - 0x0348)
class UGamepadInfoSelectorPanel_v3_C final : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                          CommonBorder_Reset;                                // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRadioButtonGroup_C*                FortRadioButtonGroup_Configs;                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRadioButtonGroup_C*                FortRadioButtonGroup_Platforms;                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlock*                     FortRichTextBlock_Reset1;                          // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlock*                     FortRichTextBlock_Reset2;                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindWidget_Reset;                               // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuHeader_C*                   OptionsMenuHeader_Configs;                         // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuHeader_C*                   OptionsMenuHeader_Platforms;                       // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ResetButton;                                       // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Platforms;                             // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    Back;                                              // 0x03A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	UMulticastDelegateProperty_                   GamepadInfoSelectorBack;                           // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                    Apply;                                             // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	UMulticastDelegateProperty_                   GamepadInfoSelectorApply;                          // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                    Reset;                                             // 0x03E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	UMulticastDelegateProperty_                   GamepadInfoSelectorReset;                          // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   GamepadInfoSelectorFocus;                          // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_GamepadInfoSelectorPanel_v3(int32 EntryPoint);
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnActivated();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnDeactivated();
	void HandleBack(bool* PassThrough);
	void HandleApply(bool* PassThrough);
	void HandleReset(bool* PassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GamepadInfoSelectorPanel_v3_C">();
	}
	static class UGamepadInfoSelectorPanel_v3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGamepadInfoSelectorPanel_v3_C>();
	}
};
static_assert(alignof(UGamepadInfoSelectorPanel_v3_C) == 0x000008, "Wrong alignment on UGamepadInfoSelectorPanel_v3_C");
static_assert(sizeof(UGamepadInfoSelectorPanel_v3_C) == 0x000410, "Wrong size on UGamepadInfoSelectorPanel_v3_C");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, UberGraphFrame) == 0x000348, "Member 'UGamepadInfoSelectorPanel_v3_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, CommonBorder_Reset) == 0x000350, "Member 'UGamepadInfoSelectorPanel_v3_C::CommonBorder_Reset' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, FortRadioButtonGroup_Configs) == 0x000358, "Member 'UGamepadInfoSelectorPanel_v3_C::FortRadioButtonGroup_Configs' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, FortRadioButtonGroup_Platforms) == 0x000360, "Member 'UGamepadInfoSelectorPanel_v3_C::FortRadioButtonGroup_Platforms' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, FortRichTextBlock_Reset1) == 0x000368, "Member 'UGamepadInfoSelectorPanel_v3_C::FortRichTextBlock_Reset1' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, FortRichTextBlock_Reset2) == 0x000370, "Member 'UGamepadInfoSelectorPanel_v3_C::FortRichTextBlock_Reset2' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, KeybindWidget_Reset) == 0x000378, "Member 'UGamepadInfoSelectorPanel_v3_C::KeybindWidget_Reset' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, OptionsMenuHeader_Configs) == 0x000380, "Member 'UGamepadInfoSelectorPanel_v3_C::OptionsMenuHeader_Configs' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, OptionsMenuHeader_Platforms) == 0x000388, "Member 'UGamepadInfoSelectorPanel_v3_C::OptionsMenuHeader_Platforms' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, ResetButton) == 0x000390, "Member 'UGamepadInfoSelectorPanel_v3_C::ResetButton' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, VerticalBox_Platforms) == 0x000398, "Member 'UGamepadInfoSelectorPanel_v3_C::VerticalBox_Platforms' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, Back) == 0x0003A0, "Member 'UGamepadInfoSelectorPanel_v3_C::Back' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, GamepadInfoSelectorBack) == 0x0003B0, "Member 'UGamepadInfoSelectorPanel_v3_C::GamepadInfoSelectorBack' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, Apply) == 0x0003C0, "Member 'UGamepadInfoSelectorPanel_v3_C::Apply' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, GamepadInfoSelectorApply) == 0x0003D0, "Member 'UGamepadInfoSelectorPanel_v3_C::GamepadInfoSelectorApply' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, Reset) == 0x0003E0, "Member 'UGamepadInfoSelectorPanel_v3_C::Reset' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, GamepadInfoSelectorReset) == 0x0003F0, "Member 'UGamepadInfoSelectorPanel_v3_C::GamepadInfoSelectorReset' has a wrong offset!");
static_assert(offsetof(UGamepadInfoSelectorPanel_v3_C, GamepadInfoSelectorFocus) == 0x000400, "Member 'UGamepadInfoSelectorPanel_v3_C::GamepadInfoSelectorFocus' has a wrong offset!");

}

