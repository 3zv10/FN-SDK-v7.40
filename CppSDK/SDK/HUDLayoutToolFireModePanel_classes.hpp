﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUDLayoutToolFireModePanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C
// 0x00F0 (0x0450 - 0x0360)
class UHUDLayoutToolFireModePanel_C final : public UHUDLayoutToolFireModePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ScreenTutorial;                                    // 0x0368(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnOpen;                                            // 0x0370(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         ThreeDTouchBox;                                    // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortCheckbox_C*                        ThreeDTouchCheckbox;                               // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         AutofireBox;                                       // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortCheckbox_C*                        AutofireCheckbox;                                  // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          ClickBlocker;                                      // 0x0398(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_0;                            // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      CustomButton;                                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               CustomOverlay;                                     // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         DedicatedButtonBox;                                // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortCheckbox_C*                        DedicatedButtonCheckbox;                           // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      DismissDialogue;                                   // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFireModeSelectTile_C*                  FireMode_AutoFire;                                 // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFireModeSelectTile_C*                  FireMode_FireButton;                               // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFireModeSelectTile_C*                  FireMode_ForceTouch;                               // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFireModeSelectTile_C*                  FireMode_TapToShoot;                               // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ModeButtonSwitcher;                                // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               PresetOverlay;                                     // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      PresetsButton;                                     // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PreviewDescriptionText;                            // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SelectionTypeSwitcher;                             // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TapAnywhereBox;                                    // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortCheckbox_C*                        TapAnywhereCheckbox;                               // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextDescription;                                   // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      TutorialConfirm;                                   // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFireModeSelectTile_C*>          FireOptionTiles;                                   // 0x0438(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFireModeSelectTile_C*                  CurSelectedTile;                                   // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HUDLayoutToolFireModePanel(int32 EntryPoint);
	void OnFire_Mode_Changed(EFireModeType NewFireMode);
	void BndEvt__PresetsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CustomButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__TutorialConfirm_K2Node_ComponentBoundEvent_185_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetOpenState(bool bNewOpenState);
	void NewTileSelected(class UFireModeSelectTile_C* Tile);
	void HandleTileButtonFocused(class UFireModeSelectTile_C* Tile);
	void PlayCurFocusedTileMovie(class UFireModeSelectTile_C* CurFocusedTile);
	void InitializeSelection();
	void HandleCurSelectedTile(class UFireModeSelectTile_C* Tile);
	void InitButtonBindings(TArray<class UHUDLayoutToolFireModeButton*>& ArrayOfFireModeButtons);
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetCustomModeVisibilities();
	void SetCustomFireMode();

	void IsInCustomMode(bool* IsCustom) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUDLayoutToolFireModePanel_C">();
	}
	static class UHUDLayoutToolFireModePanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUDLayoutToolFireModePanel_C>();
	}
};
static_assert(alignof(UHUDLayoutToolFireModePanel_C) == 0x000008, "Wrong alignment on UHUDLayoutToolFireModePanel_C");
static_assert(sizeof(UHUDLayoutToolFireModePanel_C) == 0x000450, "Wrong size on UHUDLayoutToolFireModePanel_C");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, UberGraphFrame) == 0x000360, "Member 'UHUDLayoutToolFireModePanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, ScreenTutorial) == 0x000368, "Member 'UHUDLayoutToolFireModePanel_C::ScreenTutorial' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, OnOpen) == 0x000370, "Member 'UHUDLayoutToolFireModePanel_C::OnOpen' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, ThreeDTouchBox) == 0x000378, "Member 'UHUDLayoutToolFireModePanel_C::ThreeDTouchBox' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, ThreeDTouchCheckbox) == 0x000380, "Member 'UHUDLayoutToolFireModePanel_C::ThreeDTouchCheckbox' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, AutofireBox) == 0x000388, "Member 'UHUDLayoutToolFireModePanel_C::AutofireBox' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, AutofireCheckbox) == 0x000390, "Member 'UHUDLayoutToolFireModePanel_C::AutofireCheckbox' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, ClickBlocker) == 0x000398, "Member 'UHUDLayoutToolFireModePanel_C::ClickBlocker' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, CommonWidgetSwitcher_0) == 0x0003A0, "Member 'UHUDLayoutToolFireModePanel_C::CommonWidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, CustomButton) == 0x0003A8, "Member 'UHUDLayoutToolFireModePanel_C::CustomButton' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, CustomOverlay) == 0x0003B0, "Member 'UHUDLayoutToolFireModePanel_C::CustomOverlay' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, DedicatedButtonBox) == 0x0003B8, "Member 'UHUDLayoutToolFireModePanel_C::DedicatedButtonBox' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, DedicatedButtonCheckbox) == 0x0003C0, "Member 'UHUDLayoutToolFireModePanel_C::DedicatedButtonCheckbox' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, DismissDialogue) == 0x0003C8, "Member 'UHUDLayoutToolFireModePanel_C::DismissDialogue' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, FireMode_AutoFire) == 0x0003D0, "Member 'UHUDLayoutToolFireModePanel_C::FireMode_AutoFire' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, FireMode_FireButton) == 0x0003D8, "Member 'UHUDLayoutToolFireModePanel_C::FireMode_FireButton' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, FireMode_ForceTouch) == 0x0003E0, "Member 'UHUDLayoutToolFireModePanel_C::FireMode_ForceTouch' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, FireMode_TapToShoot) == 0x0003E8, "Member 'UHUDLayoutToolFireModePanel_C::FireMode_TapToShoot' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, ModeButtonSwitcher) == 0x0003F0, "Member 'UHUDLayoutToolFireModePanel_C::ModeButtonSwitcher' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, PresetOverlay) == 0x0003F8, "Member 'UHUDLayoutToolFireModePanel_C::PresetOverlay' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, PresetsButton) == 0x000400, "Member 'UHUDLayoutToolFireModePanel_C::PresetsButton' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, PreviewDescriptionText) == 0x000408, "Member 'UHUDLayoutToolFireModePanel_C::PreviewDescriptionText' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, SelectionTypeSwitcher) == 0x000410, "Member 'UHUDLayoutToolFireModePanel_C::SelectionTypeSwitcher' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, TapAnywhereBox) == 0x000418, "Member 'UHUDLayoutToolFireModePanel_C::TapAnywhereBox' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, TapAnywhereCheckbox) == 0x000420, "Member 'UHUDLayoutToolFireModePanel_C::TapAnywhereCheckbox' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, TextDescription) == 0x000428, "Member 'UHUDLayoutToolFireModePanel_C::TextDescription' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, TutorialConfirm) == 0x000430, "Member 'UHUDLayoutToolFireModePanel_C::TutorialConfirm' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, FireOptionTiles) == 0x000438, "Member 'UHUDLayoutToolFireModePanel_C::FireOptionTiles' has a wrong offset!");
static_assert(offsetof(UHUDLayoutToolFireModePanel_C, CurSelectedTile) == 0x000448, "Member 'UHUDLayoutToolFireModePanel_C::CurSelectedTile' has a wrong offset!");

}

