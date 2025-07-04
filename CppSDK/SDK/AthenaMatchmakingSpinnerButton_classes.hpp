﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaMatchmakingSpinnerButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C
// 0x0078 (0x0C18 - 0x0BA0)
class UAthenaMatchmakingSpinnerButton_C final : public UFortMatchmakingKnobsSpinnerButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BA0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       In;                                                // 0x0BA8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Right;                                             // 0x0BB0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Left;                                              // 0x0BB8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_Fill;                                       // 0x0BC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleCommonButton_C*                  LeftButton;                                        // 0x0BC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               LeftButtonSize;                                    // 0x0BD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleCommonButton_C*                  RightButton;                                       // 0x0BD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               RightButtonSize;                                   // 0x0BE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SaveSpinner;                                       // 0x0BE8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                         A;                                                 // 0x0BF0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                         A_0;                                               // 0x0C00(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          DebugOnMobileOrPC;                                 // 0x0C10(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          isGamepad;                                         // 0x0C11(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C12[0x2];                                      // 0x0C12(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Mobile_Size_Override;                              // 0x0C14(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaMatchmakingSpinnerButton(int32 EntryPoint);
	void OnLoadingStateChanged(bool bCurrentlyLoading);
	void AnimateIn(int32 Index_0);
	void ClearHoverState();
	void BP_OnUnhovered();
	void BP_OnHovered();
	void AfterRightIsDone();
	void AfterleftisDone();
	void InputUpdated(ECommonInputType bNewInputType);
	void CustomEvent(bool bUsingGamepad);
	void BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SimpleCommonButton_1_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void InputModeChanged(bool Gamepad);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BP_OnClicked();
	void BP_OnDoubleClicked();
	void Set_Button_Sizes();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMatchmakingSpinnerButton_C">();
	}
	static class UAthenaMatchmakingSpinnerButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMatchmakingSpinnerButton_C>();
	}
};
static_assert(alignof(UAthenaMatchmakingSpinnerButton_C) == 0x000008, "Wrong alignment on UAthenaMatchmakingSpinnerButton_C");
static_assert(sizeof(UAthenaMatchmakingSpinnerButton_C) == 0x000C18, "Wrong size on UAthenaMatchmakingSpinnerButton_C");
static_assert(offsetof(UAthenaMatchmakingSpinnerButton_C, UberGraphFrame) == 0x000BA0, "Member 'UAthenaMatchmakingSpinnerButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingSpinnerButton_C, In) == 0x000BA8, "Member 'UAthenaMatchmakingSpinnerButton_C::In' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingSpinnerButton_C, Right) == 0x000BB0, "Member 'UAthenaMatchmakingSpinnerButton_C::Right' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingSpinnerButton_C, Left) == 0x000BB8, "Member 'UAthenaMatchmakingSpinnerButton_C::Left' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingSpinnerButton_C, Border_Fill) == 0x000BC0, "Member 'UAthenaMatchmakingSpinnerButton_C::Border_Fill' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingSpinnerButton_C, LeftButton) == 0x000BC8, "Member 'UAthenaMatchmakingSpinnerButton_C::LeftButton' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingSpinnerButton_C, LeftButtonSize) == 0x000BD0, "Member 'UAthenaMatchmakingSpinnerButton_C::LeftButtonSize' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingSpinnerButton_C, RightButton) == 0x000BD8, "Member 'UAthenaMatchmakingSpinnerButton_C::RightButton' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingSpinnerButton_C, RightButtonSize) == 0x000BE0, "Member 'UAthenaMatchmakingSpinnerButton_C::RightButtonSize' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingSpinnerButton_C, SaveSpinner) == 0x000BE8, "Member 'UAthenaMatchmakingSpinnerButton_C::SaveSpinner' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingSpinnerButton_C, A) == 0x000BF0, "Member 'UAthenaMatchmakingSpinnerButton_C::A' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingSpinnerButton_C, A_0) == 0x000C00, "Member 'UAthenaMatchmakingSpinnerButton_C::A_0' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingSpinnerButton_C, DebugOnMobileOrPC) == 0x000C10, "Member 'UAthenaMatchmakingSpinnerButton_C::DebugOnMobileOrPC' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingSpinnerButton_C, isGamepad) == 0x000C11, "Member 'UAthenaMatchmakingSpinnerButton_C::isGamepad' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingSpinnerButton_C, Mobile_Size_Override) == 0x000C14, "Member 'UAthenaMatchmakingSpinnerButton_C::Mobile_Size_Override' has a wrong offset!");

}

