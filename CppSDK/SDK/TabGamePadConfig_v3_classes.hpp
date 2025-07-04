﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabGamePadConfig_v3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "InputCore_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TabGamePadConfig_v3.TabGamePadConfig_v3_C
// 0x00F8 (0x03A8 - 0x02B0)
class UTabGamePadConfig_v3_C final : public UFortGamepadInputOptions
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGamepadInfoSelectorPanel_v3_C*         GamepadInfoSelectorPanel_v3;                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGamepadMappingInfo_v3_C*               GamepadMappingInfo_v3;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   GamepadMappingInfoChanged;                         // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FString>                         InputPresets;                                      // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                           InputPresetNames_NoCustom;                         // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         PresetMappingIndex;                                // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PlatformMappingIndex;                              // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CustomInputTemplatePresetIndex;                    // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_304[0x4];                                      // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGamepadKeyTextButton_C*                DisplayObject;                                     // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortInputActionGroup                         CurrentInputActionGroup;                           // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_311[0x3];                                      // 0x0311(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CustomResetToDefaultConfig;                        // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   CustomKeySelection;                                // 0x0318(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                   CustomActionSelection;                             // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CustomInputActionGroupSelectionIndex;              // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CustomActionSelectionIndex;                        // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   Key_None;                                          // 0x0340(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                 RadioButtonClass;                                  // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 RadioButtonStyle;                                  // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortOptionsMenuInputData*>      InputDataForActionsPanel;                          // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                   TabGamePadConfigBack;                              // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   TabGamePadConfigApply;                             // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   TabGamePadActionsThatNeedBinds;                    // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_TabGamePadConfig_v3(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void DeadZoneMoveSettingValueChanged_Bind(float Value);
	void DeadZoneLookSettingValueChanged_Bind(float Value);
	void OnTabActivated_Bind();
	void OnTabDeactivated_Bind();
	void HandleUsingGamepadChanged(ECommonInputType NewInputType);
	void Construct();
	void ModesTabSelected_Bind(class FName TabId);
	void CustomClearButton_Bind();
	void CustomClosedUsingBack_Bind();
	void CustomActionSelected_Bind(int32 SelectedIndex, class FName ActionName);
	void CustomKeySelected_Bind(const struct FKey& Key);
	void CustomDoResetToDefault();
	void UpdateOptionsTab();
	void CenterOnTab();
	void GamepadPlatformConfigChanged(class UCommonButton* AssociatedButton, int32 ButtonIndex);
	void Gamepad_Config_Changed(class UCommonButton* AssociatedButton, int32 ButtonIndex);
	void DialogResult_7D7E06D747FFEF9849D3CAA2D3D91717(EFortDialogResult Result, class FName ResultName);
	void DialogResult_017CD690454514A07B4DE5BE109AEC6E(EFortDialogResult Result, class FName ResultName);
	void InitializeData();
	void PreConstructData();
	void UpdateData();
	void GetCurrentPlatformIndex(int32* PlatformIndex);
	void HandleGamepadMappingInfoChange();
	bool IsConsole();
	bool IsCustomConfig(int32 PresetIndex);
	void SetupDisplayObject(class FName ActionName, const struct FKey& Key, class UGamepadKeyTextButton_C** DisplayObject_0);
	void SelectSameItemInActionsList();
	void CloseCustomActionsPanel(bool FocusLastButton);
	TArray<struct FConfirmationDialogAction> CreateCustomResetToDefaultList();
	void ChangeCustomTabListVisibilityForInputType(ECommonInputType Selection);
	void HandleGamepadInfoSelectorBack();
	void HandleGamepadInfoSelectorApply();
	void ChangeCustomResetVisibilityForInputType(ECommonInputType InputType);
	void ChangeCustomClearVisibilityForInputType(ECommonInputType InputType);
	void NavigateToSelectedConfig();
	void HandleGamepadInfoSelectorFocus();
	void AreWeOkayWithThisChange(class FName ActionName, const struct FKey& Key, bool* IsOkay);
	void GamepadInfoSelectorNavRight();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TabGamePadConfig_v3_C">();
	}
	static class UTabGamePadConfig_v3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTabGamePadConfig_v3_C>();
	}
};
static_assert(alignof(UTabGamePadConfig_v3_C) == 0x000008, "Wrong alignment on UTabGamePadConfig_v3_C");
static_assert(sizeof(UTabGamePadConfig_v3_C) == 0x0003A8, "Wrong size on UTabGamePadConfig_v3_C");
static_assert(offsetof(UTabGamePadConfig_v3_C, UberGraphFrame) == 0x0002B0, "Member 'UTabGamePadConfig_v3_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, GamepadInfoSelectorPanel_v3) == 0x0002B8, "Member 'UTabGamePadConfig_v3_C::GamepadInfoSelectorPanel_v3' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, GamepadMappingInfo_v3) == 0x0002C0, "Member 'UTabGamePadConfig_v3_C::GamepadMappingInfo_v3' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, GamepadMappingInfoChanged) == 0x0002C8, "Member 'UTabGamePadConfig_v3_C::GamepadMappingInfoChanged' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, InputPresets) == 0x0002D8, "Member 'UTabGamePadConfig_v3_C::InputPresets' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, InputPresetNames_NoCustom) == 0x0002E8, "Member 'UTabGamePadConfig_v3_C::InputPresetNames_NoCustom' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, PresetMappingIndex) == 0x0002F8, "Member 'UTabGamePadConfig_v3_C::PresetMappingIndex' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, PlatformMappingIndex) == 0x0002FC, "Member 'UTabGamePadConfig_v3_C::PlatformMappingIndex' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, CustomInputTemplatePresetIndex) == 0x000300, "Member 'UTabGamePadConfig_v3_C::CustomInputTemplatePresetIndex' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, DisplayObject) == 0x000308, "Member 'UTabGamePadConfig_v3_C::DisplayObject' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, CurrentInputActionGroup) == 0x000310, "Member 'UTabGamePadConfig_v3_C::CurrentInputActionGroup' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, CustomResetToDefaultConfig) == 0x000314, "Member 'UTabGamePadConfig_v3_C::CustomResetToDefaultConfig' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, CustomKeySelection) == 0x000318, "Member 'UTabGamePadConfig_v3_C::CustomKeySelection' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, CustomActionSelection) == 0x000330, "Member 'UTabGamePadConfig_v3_C::CustomActionSelection' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, CustomInputActionGroupSelectionIndex) == 0x000338, "Member 'UTabGamePadConfig_v3_C::CustomInputActionGroupSelectionIndex' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, CustomActionSelectionIndex) == 0x00033C, "Member 'UTabGamePadConfig_v3_C::CustomActionSelectionIndex' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, Key_None) == 0x000340, "Member 'UTabGamePadConfig_v3_C::Key_None' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, RadioButtonClass) == 0x000358, "Member 'UTabGamePadConfig_v3_C::RadioButtonClass' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, RadioButtonStyle) == 0x000360, "Member 'UTabGamePadConfig_v3_C::RadioButtonStyle' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, InputDataForActionsPanel) == 0x000368, "Member 'UTabGamePadConfig_v3_C::InputDataForActionsPanel' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, TabGamePadConfigBack) == 0x000378, "Member 'UTabGamePadConfig_v3_C::TabGamePadConfigBack' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, TabGamePadConfigApply) == 0x000388, "Member 'UTabGamePadConfig_v3_C::TabGamePadConfigApply' has a wrong offset!");
static_assert(offsetof(UTabGamePadConfig_v3_C, TabGamePadActionsThatNeedBinds) == 0x000398, "Member 'UTabGamePadConfig_v3_C::TabGamePadActionsThatNeedBinds' has a wrong offset!");

}

