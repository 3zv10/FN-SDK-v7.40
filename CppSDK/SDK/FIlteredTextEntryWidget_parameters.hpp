﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FIlteredTextEntryWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.ExecuteUbergraph_FilteredTextEntryWidget
// 0x0018 (0x0018 - 0x0000)
struct FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsBadText;                           // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget");
static_assert(sizeof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget) == 0x000018, "Wrong size on FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, EntryPoint) == 0x000000, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, Temp_bool_Variable) == 0x000004, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, Temp_byte_Variable) == 0x000005, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, Temp_byte_Variable1) == 0x000006, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_Event_bIsBadText) == 0x000007, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_Event_bIsBadText' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_Select_Default) == 0x000010, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_Select_Default' has a wrong offset!");

// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnDirtyTextAttempted
// 0x0001 (0x0001 - 0x0000)
struct FilteredTextEntryWidget_C_OnDirtyTextAttempted final
{
public:
	bool                                          bIsBadText;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FilteredTextEntryWidget_C_OnDirtyTextAttempted) == 0x000001, "Wrong alignment on FilteredTextEntryWidget_C_OnDirtyTextAttempted");
static_assert(sizeof(FilteredTextEntryWidget_C_OnDirtyTextAttempted) == 0x000001, "Wrong size on FilteredTextEntryWidget_C_OnDirtyTextAttempted");
static_assert(offsetof(FilteredTextEntryWidget_C_OnDirtyTextAttempted, bIsBadText) == 0x000000, "Member 'FilteredTextEntryWidget_C_OnDirtyTextAttempted::bIsBadText' has a wrong offset!");

// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnFocusReceived
// 0x01B8 (0x01B8 - 0x0000)
struct FilteredTextEntryWidget_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0100(0x00B8)()
};
static_assert(alignof(FilteredTextEntryWidget_C_OnFocusReceived) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_OnFocusReceived");
static_assert(sizeof(FilteredTextEntryWidget_C_OnFocusReceived) == 0x0001B8, "Wrong size on FilteredTextEntryWidget_C_OnFocusReceived");
static_assert(offsetof(FilteredTextEntryWidget_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'FilteredTextEntryWidget_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'FilteredTextEntryWidget_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'FilteredTextEntryWidget_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_OnFocusReceived, CallFunc_GetUINavigationManager_ReturnValue) == 0x0000F8, "Member 'FilteredTextEntryWidget_C_OnFocusReceived::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x000100, "Member 'FilteredTextEntryWidget_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");

}

