﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreativeGameOptionMutatorKnobs

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CreativeGameOptionMutatorKnobs.CreativeGameOptionMutatorKnobs_C
// 0x0098 (0x0508 - 0x0470)
class UCreativeGameOptionMutatorKnobs_C final : public UFortMatchmakingKnobsModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0470(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Out_0;                                             // 0x0478(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       NewAnimation_1;                                    // 0x0480(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out;                                               // 0x0488(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0490(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_2;                                    // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_0;                                 // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ConfirmSelectionShine;                             // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_3;                                   // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          ModalContent;                                      // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                         DebugOptions;                                      // 0x04C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UObject*>                        ListItems;                                         // 0x04D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                   OnAccept;                                          // 0x04E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnCancel;                                          // 0x04F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_CreativeGameOptionMutatorKnobs(int32 EntryPoint);
	void BndEvt__OptionsList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
	void HandleNoOptionsLoaded();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void AnimateIn();
	void HandleCancelClicked();
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Close();
	void OnInputModeChanged(bool bUsingGamepad);
	void Construct();
	void OnActivated();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CreativeGameOptionMutatorKnobs_C">();
	}
	static class UCreativeGameOptionMutatorKnobs_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeGameOptionMutatorKnobs_C>();
	}
};
static_assert(alignof(UCreativeGameOptionMutatorKnobs_C) == 0x000008, "Wrong alignment on UCreativeGameOptionMutatorKnobs_C");
static_assert(sizeof(UCreativeGameOptionMutatorKnobs_C) == 0x000508, "Wrong size on UCreativeGameOptionMutatorKnobs_C");
static_assert(offsetof(UCreativeGameOptionMutatorKnobs_C, UberGraphFrame) == 0x000470, "Member 'UCreativeGameOptionMutatorKnobs_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCreativeGameOptionMutatorKnobs_C, Out_0) == 0x000478, "Member 'UCreativeGameOptionMutatorKnobs_C::Out_0' has a wrong offset!");
static_assert(offsetof(UCreativeGameOptionMutatorKnobs_C, NewAnimation_1) == 0x000480, "Member 'UCreativeGameOptionMutatorKnobs_C::NewAnimation_1' has a wrong offset!");
static_assert(offsetof(UCreativeGameOptionMutatorKnobs_C, Out) == 0x000488, "Member 'UCreativeGameOptionMutatorKnobs_C::Out' has a wrong offset!");
static_assert(offsetof(UCreativeGameOptionMutatorKnobs_C, In) == 0x000490, "Member 'UCreativeGameOptionMutatorKnobs_C::In' has a wrong offset!");
static_assert(offsetof(UCreativeGameOptionMutatorKnobs_C, CommonBorder_2) == 0x000498, "Member 'UCreativeGameOptionMutatorKnobs_C::CommonBorder_2' has a wrong offset!");
static_assert(offsetof(UCreativeGameOptionMutatorKnobs_C, CommonTextBlock_0) == 0x0004A0, "Member 'UCreativeGameOptionMutatorKnobs_C::CommonTextBlock_0' has a wrong offset!");
static_assert(offsetof(UCreativeGameOptionMutatorKnobs_C, ConfirmSelectionShine) == 0x0004A8, "Member 'UCreativeGameOptionMutatorKnobs_C::ConfirmSelectionShine' has a wrong offset!");
static_assert(offsetof(UCreativeGameOptionMutatorKnobs_C, HorizontalBox_3) == 0x0004B0, "Member 'UCreativeGameOptionMutatorKnobs_C::HorizontalBox_3' has a wrong offset!");
static_assert(offsetof(UCreativeGameOptionMutatorKnobs_C, ModalContent) == 0x0004B8, "Member 'UCreativeGameOptionMutatorKnobs_C::ModalContent' has a wrong offset!");
static_assert(offsetof(UCreativeGameOptionMutatorKnobs_C, WidgetSwitcher_0) == 0x0004C0, "Member 'UCreativeGameOptionMutatorKnobs_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UCreativeGameOptionMutatorKnobs_C, DebugOptions) == 0x0004C8, "Member 'UCreativeGameOptionMutatorKnobs_C::DebugOptions' has a wrong offset!");
static_assert(offsetof(UCreativeGameOptionMutatorKnobs_C, ListItems) == 0x0004D8, "Member 'UCreativeGameOptionMutatorKnobs_C::ListItems' has a wrong offset!");
static_assert(offsetof(UCreativeGameOptionMutatorKnobs_C, OnAccept) == 0x0004E8, "Member 'UCreativeGameOptionMutatorKnobs_C::OnAccept' has a wrong offset!");
static_assert(offsetof(UCreativeGameOptionMutatorKnobs_C, OnCancel) == 0x0004F8, "Member 'UCreativeGameOptionMutatorKnobs_C::OnCancel' has a wrong offset!");

}

