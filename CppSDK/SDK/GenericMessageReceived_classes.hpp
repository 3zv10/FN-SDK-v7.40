﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GenericMessageReceived

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GenericMessageReceived.GenericMessageReceived_C
// 0x0030 (0x0390 - 0x0360)
class UGenericMessageReceived_C final : public UFortMessageReceivedScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x0368(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       Body;                                              // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       CommonLazyImage_0;                                 // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Header;                                            // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ShowNextButton;                                    // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GenericMessageReceived(int32 EntryPoint);
	void BndEvt__ShowNextButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GenericMessageReceived_C">();
	}
	static class UGenericMessageReceived_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGenericMessageReceived_C>();
	}
};
static_assert(alignof(UGenericMessageReceived_C) == 0x000008, "Wrong alignment on UGenericMessageReceived_C");
static_assert(sizeof(UGenericMessageReceived_C) == 0x000390, "Wrong size on UGenericMessageReceived_C");
static_assert(offsetof(UGenericMessageReceived_C, UberGraphFrame) == 0x000360, "Member 'UGenericMessageReceived_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGenericMessageReceived_C, Intro) == 0x000368, "Member 'UGenericMessageReceived_C::Intro' has a wrong offset!");
static_assert(offsetof(UGenericMessageReceived_C, Body) == 0x000370, "Member 'UGenericMessageReceived_C::Body' has a wrong offset!");
static_assert(offsetof(UGenericMessageReceived_C, CommonLazyImage_0) == 0x000378, "Member 'UGenericMessageReceived_C::CommonLazyImage_0' has a wrong offset!");
static_assert(offsetof(UGenericMessageReceived_C, Header) == 0x000380, "Member 'UGenericMessageReceived_C::Header' has a wrong offset!");
static_assert(offsetof(UGenericMessageReceived_C, ShowNextButton) == 0x000388, "Member 'UGenericMessageReceived_C::ShowNextButton' has a wrong offset!");

}

