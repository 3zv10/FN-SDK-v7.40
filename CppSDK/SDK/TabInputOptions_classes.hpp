﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabInputOptions

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TabInputOptions.TabInputOptions_C
// 0x0058 (0x0308 - 0x02B0)
class UTabInputOptions_C final : public UFortInputOptions
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                          OverlayBorder;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Currently_Selected_Input;                          // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Currently_Primary;                              // 0x02C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C5[0x3];                                      // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   Enable_Overlay;                                    // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   Disable_Overlay;                                   // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Using_Gamepad;                                     // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   Gamepad_Changed;                                   // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UOptionsMenuInputDisplayOnly_C*         DisplayObject;                                     // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TabInputOptions(int32 EntryPoint);
	void HandleChangeBinding(const struct FKey& NewKey);
	void Construct();
	void UpdateOptionsTab();
	void Input_Clicked(int32 Number_in_List, bool Is_Primary_Button);
	void ClearAndConstructKeybindList();
	void UnbindClicked(int32 Number_in_List, class UOptionsMenuInput_C* Widget);
	void HandleUsingGamepadChanged(ECommonInputType NewInputType);
	void BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void CenterOnTab();
	void DialogResult_018CEC524FAF598D4D7A358441037217(EFortDialogResult Result, class FName ResultName);
	void Overlay_Key_Pressed(const struct FKey& NewKey);
	void Set_Input_Enabled(bool Enabled);
	void SetupDisplayOption(int32 InputIndex, class UOptionsMenuInputDisplayOnly_C** ReturnObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TabInputOptions_C">();
	}
	static class UTabInputOptions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTabInputOptions_C>();
	}
};
static_assert(alignof(UTabInputOptions_C) == 0x000008, "Wrong alignment on UTabInputOptions_C");
static_assert(sizeof(UTabInputOptions_C) == 0x000308, "Wrong size on UTabInputOptions_C");
static_assert(offsetof(UTabInputOptions_C, UberGraphFrame) == 0x0002B0, "Member 'UTabInputOptions_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, OverlayBorder) == 0x0002B8, "Member 'UTabInputOptions_C::OverlayBorder' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, Currently_Selected_Input) == 0x0002C0, "Member 'UTabInputOptions_C::Currently_Selected_Input' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, Is_Currently_Primary) == 0x0002C4, "Member 'UTabInputOptions_C::Is_Currently_Primary' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, Enable_Overlay) == 0x0002C8, "Member 'UTabInputOptions_C::Enable_Overlay' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, Disable_Overlay) == 0x0002D8, "Member 'UTabInputOptions_C::Disable_Overlay' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, Using_Gamepad) == 0x0002E8, "Member 'UTabInputOptions_C::Using_Gamepad' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, Gamepad_Changed) == 0x0002F0, "Member 'UTabInputOptions_C::Gamepad_Changed' has a wrong offset!");
static_assert(offsetof(UTabInputOptions_C, DisplayObject) == 0x000300, "Member 'UTabInputOptions_C::DisplayObject' has a wrong offset!");

}

