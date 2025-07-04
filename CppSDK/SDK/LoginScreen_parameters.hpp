﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoginScreen

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen
// 0x0090 (0x0090 - 0x0000)
struct LoginScreen_C_ExecuteUbergraph_LoginScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFort_Entry_Music_Controller_BP_C*> CallFunc_GetAllActorsOfClass_OutActors;         // 0x0010(0x0010)(ZeroConstructor, ReferenceParm)
	class AFort_Entry_Music_Controller_BP_C*      CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortUIState                                  K2Node_Event_PreviousUIState;                      // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E[0x2];                                       // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Event_Widget;                               // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FContentPushState                      K2Node_Event_State;                                // 0x0040(0x0003)(NoDestructor)
	uint8                                         Pad_43[0x5];                                       // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue1;                  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_SafePopFlowStack_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetGameVersion_ReturnValue;               // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
};
static_assert(alignof(LoginScreen_C_ExecuteUbergraph_LoginScreen) == 0x000008, "Wrong alignment on LoginScreen_C_ExecuteUbergraph_LoginScreen");
static_assert(sizeof(LoginScreen_C_ExecuteUbergraph_LoginScreen) == 0x000090, "Wrong size on LoginScreen_C_ExecuteUbergraph_LoginScreen");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, EntryPoint) == 0x000000, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, Temp_int_Array_Index_Variable) == 0x000008, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_GetAllActorsOfClass_OutActors) == 0x000010, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_Array_Get_Item) == 0x000020, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, K2Node_Event_PreviousUIState) == 0x00002D, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::K2Node_Event_PreviousUIState' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_GetContext_ReturnValue) == 0x000030, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, K2Node_Event_Widget) == 0x000038, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::K2Node_Event_Widget' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, K2Node_Event_State) == 0x000040, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::K2Node_Event_State' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_GetContext_ReturnValue1) == 0x000048, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, K2Node_ComponentBoundEvent_Button) == 0x000050, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_SafePopFlowStack_ReturnValue) == 0x000058, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_SafePopFlowStack_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000060, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_GetGameVersion_ReturnValue) == 0x000068, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_GetGameVersion_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function LoginScreen.LoginScreen_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct LoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on LoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(LoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on LoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(LoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'LoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function LoginScreen.LoginScreen_C.PushContentWidgetInternal
// 0x0010 (0x0010 - 0x0000)
struct LoginScreen_C_PushContentWidgetInternal final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FContentPushState                      State;                                             // 0x0008(0x0003)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(LoginScreen_C_PushContentWidgetInternal) == 0x000008, "Wrong alignment on LoginScreen_C_PushContentWidgetInternal");
static_assert(sizeof(LoginScreen_C_PushContentWidgetInternal) == 0x000010, "Wrong size on LoginScreen_C_PushContentWidgetInternal");
static_assert(offsetof(LoginScreen_C_PushContentWidgetInternal, Widget) == 0x000000, "Member 'LoginScreen_C_PushContentWidgetInternal::Widget' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_PushContentWidgetInternal, State) == 0x000008, "Member 'LoginScreen_C_PushContentWidgetInternal::State' has a wrong offset!");

// Function LoginScreen.LoginScreen_C.OnEnterState
// 0x0001 (0x0001 - 0x0000)
struct LoginScreen_C_OnEnterState final
{
public:
	EFortUIState                                  PreviousUIState;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoginScreen_C_OnEnterState) == 0x000001, "Wrong alignment on LoginScreen_C_OnEnterState");
static_assert(sizeof(LoginScreen_C_OnEnterState) == 0x000001, "Wrong size on LoginScreen_C_OnEnterState");
static_assert(offsetof(LoginScreen_C_OnEnterState, PreviousUIState) == 0x000000, "Member 'LoginScreen_C_OnEnterState::PreviousUIState' has a wrong offset!");

// Function LoginScreen.LoginScreen_C.PopContentWidgetInternal
// 0x0018 (0x0018 - 0x0000)
struct LoginScreen_C_PopContentWidgetInternal final
{
public:
	struct FContentPushState                      State;                                             // 0x0000(0x0003)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_SafePopFlowStack_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoginScreen_C_PopContentWidgetInternal) == 0x000008, "Wrong alignment on LoginScreen_C_PopContentWidgetInternal");
static_assert(sizeof(LoginScreen_C_PopContentWidgetInternal) == 0x000018, "Wrong size on LoginScreen_C_PopContentWidgetInternal");
static_assert(offsetof(LoginScreen_C_PopContentWidgetInternal, State) == 0x000000, "Member 'LoginScreen_C_PopContentWidgetInternal::State' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_PopContentWidgetInternal, ReturnValue) == 0x000008, "Member 'LoginScreen_C_PopContentWidgetInternal::ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_PopContentWidgetInternal, CallFunc_SafePopFlowStack_ReturnValue) == 0x000010, "Member 'LoginScreen_C_PopContentWidgetInternal::CallFunc_SafePopFlowStack_ReturnValue' has a wrong offset!");

}

