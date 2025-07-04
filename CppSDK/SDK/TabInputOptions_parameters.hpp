﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabInputOptions

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function TabInputOptions.TabInputOptions_C.ExecuteUbergraph_TabInputOptions
// 0x0148 (0x0148 - 0x0000)
struct TabInputOptions_C_ExecuteUbergraph_TabInputOptions final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortDialogResult                             Temp_byte_Variable;                                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F[0x1];                                        // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UOptionsMenuInputDisplayOnly_C*         CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_ComponentBoundEvent_Widget;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetItemAt_ReturnValue;                    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOptionsMenuInput_C*                    K2Node_DynamicCast_AsOptions_Menu_Input;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetListWidget_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOptionsMenuInput_C*                    K2Node_DynamicCast_AsOptions_Menu_Input1;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECommonInputType                              K2Node_Event_NewInputType;                         // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0050(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortDialogResult                             K2Node_CustomEvent_Result;                         // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x2];                                       // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_ResultName;                     // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue1;                 // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EFortDialogResult Result, class FName ResultName)> K2Node_CreateDelegate_OutputDelegate; // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue2;                 // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;                   // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A[0x6];                                       // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Number_in_List, bool Is_Primary_Button)> K2Node_CreateDelegate_OutputDelegate1; // 0x00A8(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_Number_in_List1;                // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOptionsMenuInput_C*                    K2Node_CustomEvent_Widget;                         // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   K2Node_MakeStruct_Key;                             // 0x00C8(0x0018)(HasGetValueTypeHash)
	TDelegate<void(int32 Number_in_List, class UOptionsMenuInput_C* Widget)> K2Node_CreateDelegate_OutputDelegate2; // 0x00E0(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x3];                                       // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Number_In_List;                 // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Is_Primary_Button;              // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FB[0x5];                                       // 0x00FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_CustomEvent_NewKey;                         // 0x0100(0x0018)(HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x3];                                      // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortActionBeingUnbound                CallFunc_GetActionBeingUnbound_ReturnValue;        // 0x011C(0x000C)(NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOptionsMenuInputDisplayOnly_C*         CallFunc_SetupDisplayOption_ReturnObject;          // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_ShowConfirmation_NUI*  CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue; // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable4;                               // 0x0142(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x0143(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select1_Default;                            // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions) == 0x000008, "Wrong alignment on TabInputOptions_C_ExecuteUbergraph_TabInputOptions");
static_assert(sizeof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions) == 0x000148, "Wrong size on TabInputOptions_C_ExecuteUbergraph_TabInputOptions");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, EntryPoint) == 0x000000, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::EntryPoint' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, Temp_name_Variable) == 0x000004, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, Temp_byte_Variable) == 0x00000D, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000E, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, CallFunc_Create_ReturnValue) == 0x000010, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, K2Node_ComponentBoundEvent_Widget) == 0x000018, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::K2Node_ComponentBoundEvent_Widget' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, CallFunc_GetItemAt_ReturnValue) == 0x000020, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::CallFunc_GetItemAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, K2Node_DynamicCast_AsOptions_Menu_Input) == 0x000028, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::K2Node_DynamicCast_AsOptions_Menu_Input' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, CallFunc_GetListWidget_ReturnValue) == 0x000038, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::CallFunc_GetListWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, K2Node_DynamicCast_AsOptions_Menu_Input1) == 0x000040, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::K2Node_DynamicCast_AsOptions_Menu_Input1' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, K2Node_DynamicCast_bSuccess1) == 0x000048, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, K2Node_Event_NewInputType) == 0x000049, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::K2Node_Event_NewInputType' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, CallFunc_MakeLiteralText_ReturnValue) == 0x000050, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, CallFunc_EqualEqual_ByteByte_ReturnValue1) == 0x000068, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::CallFunc_EqualEqual_ByteByte_ReturnValue1' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, K2Node_CustomEvent_Result) == 0x000069, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, K2Node_CustomEvent_ResultName) == 0x00006C, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::K2Node_CustomEvent_ResultName' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, CallFunc_Not_PreBool_ReturnValue1) == 0x000074, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::CallFunc_Not_PreBool_ReturnValue1' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, K2Node_CreateDelegate_OutputDelegate) == 0x000078, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, CallFunc_Not_PreBool_ReturnValue2) == 0x000088, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::CallFunc_Not_PreBool_ReturnValue2' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, CallFunc_GetContext_ReturnValue) == 0x000090, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, CallFunc_GetCurrentInputType_ReturnValue) == 0x000098, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, CallFunc_EqualEqual_ByteByte_ReturnValue2) == 0x000099, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::CallFunc_EqualEqual_ByteByte_ReturnValue2' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, CallFunc_GetUINavigationManager_ReturnValue) == 0x0000A0, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, K2Node_CreateDelegate_OutputDelegate1) == 0x0000A8, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, K2Node_CustomEvent_Number_in_List1) == 0x0000B8, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::K2Node_CustomEvent_Number_in_List1' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, K2Node_CustomEvent_Widget) == 0x0000C0, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::K2Node_CustomEvent_Widget' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, K2Node_MakeStruct_Key) == 0x0000C8, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::K2Node_MakeStruct_Key' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, K2Node_CreateDelegate_OutputDelegate2) == 0x0000E0, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, Temp_byte_Variable1) == 0x0000F0, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, K2Node_CustomEvent_Number_In_List) == 0x0000F4, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::K2Node_CustomEvent_Number_In_List' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, K2Node_CustomEvent_Is_Primary_Button) == 0x0000F8, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::K2Node_CustomEvent_Is_Primary_Button' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, Temp_byte_Variable2) == 0x0000F9, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, Temp_bool_Variable) == 0x0000FA, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, K2Node_CustomEvent_NewKey) == 0x000100, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::K2Node_CustomEvent_NewKey' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, Temp_byte_Variable3) == 0x000118, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, CallFunc_GetActionBeingUnbound_ReturnValue) == 0x00011C, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::CallFunc_GetActionBeingUnbound_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, K2Node_Select_Default) == 0x000128, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, CallFunc_SetupDisplayOption_ReturnObject) == 0x000130, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::CallFunc_SetupDisplayOption_ReturnObject' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue) == 0x000138, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, CallFunc_NotEqual_NameName_ReturnValue) == 0x000140, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, CallFunc_IsValid_ReturnValue) == 0x000141, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, Temp_byte_Variable4) == 0x000142, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, Temp_bool_Variable1) == 0x000143, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_ExecuteUbergraph_TabInputOptions, K2Node_Select1_Default) == 0x000144, "Member 'TabInputOptions_C_ExecuteUbergraph_TabInputOptions::K2Node_Select1_Default' has a wrong offset!");

// Function TabInputOptions.TabInputOptions_C.HandleChangeBinding
// 0x0018 (0x0018 - 0x0000)
struct TabInputOptions_C_HandleChangeBinding final
{
public:
	struct FKey                                   NewKey;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(TabInputOptions_C_HandleChangeBinding) == 0x000008, "Wrong alignment on TabInputOptions_C_HandleChangeBinding");
static_assert(sizeof(TabInputOptions_C_HandleChangeBinding) == 0x000018, "Wrong size on TabInputOptions_C_HandleChangeBinding");
static_assert(offsetof(TabInputOptions_C_HandleChangeBinding, NewKey) == 0x000000, "Member 'TabInputOptions_C_HandleChangeBinding::NewKey' has a wrong offset!");

// Function TabInputOptions.TabInputOptions_C.Input Clicked
// 0x0008 (0x0008 - 0x0000)
struct TabInputOptions_C_Input_Clicked final
{
public:
	int32                                         Number_in_List;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Primary_Button;                                 // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TabInputOptions_C_Input_Clicked) == 0x000004, "Wrong alignment on TabInputOptions_C_Input_Clicked");
static_assert(sizeof(TabInputOptions_C_Input_Clicked) == 0x000008, "Wrong size on TabInputOptions_C_Input_Clicked");
static_assert(offsetof(TabInputOptions_C_Input_Clicked, Number_in_List) == 0x000000, "Member 'TabInputOptions_C_Input_Clicked::Number_in_List' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_Input_Clicked, Is_Primary_Button) == 0x000004, "Member 'TabInputOptions_C_Input_Clicked::Is_Primary_Button' has a wrong offset!");

// Function TabInputOptions.TabInputOptions_C.UnbindClicked
// 0x0010 (0x0010 - 0x0000)
struct TabInputOptions_C_UnbindClicked final
{
public:
	int32                                         Number_in_List;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOptionsMenuInput_C*                    Widget;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TabInputOptions_C_UnbindClicked) == 0x000008, "Wrong alignment on TabInputOptions_C_UnbindClicked");
static_assert(sizeof(TabInputOptions_C_UnbindClicked) == 0x000010, "Wrong size on TabInputOptions_C_UnbindClicked");
static_assert(offsetof(TabInputOptions_C_UnbindClicked, Number_in_List) == 0x000000, "Member 'TabInputOptions_C_UnbindClicked::Number_in_List' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_UnbindClicked, Widget) == 0x000008, "Member 'TabInputOptions_C_UnbindClicked::Widget' has a wrong offset!");

// Function TabInputOptions.TabInputOptions_C.HandleUsingGamepadChanged
// 0x0001 (0x0001 - 0x0000)
struct TabInputOptions_C_HandleUsingGamepadChanged final
{
public:
	ECommonInputType                              NewInputType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TabInputOptions_C_HandleUsingGamepadChanged) == 0x000001, "Wrong alignment on TabInputOptions_C_HandleUsingGamepadChanged");
static_assert(sizeof(TabInputOptions_C_HandleUsingGamepadChanged) == 0x000001, "Wrong size on TabInputOptions_C_HandleUsingGamepadChanged");
static_assert(offsetof(TabInputOptions_C_HandleUsingGamepadChanged, NewInputType) == 0x000000, "Member 'TabInputOptions_C_HandleUsingGamepadChanged::NewInputType' has a wrong offset!");

// Function TabInputOptions.TabInputOptions_C.BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct TabInputOptions_C_BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature final
{
public:
	class UUserWidget*                            Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TabInputOptions_C_BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature) == 0x000008, "Wrong alignment on TabInputOptions_C_BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature");
static_assert(sizeof(TabInputOptions_C_BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature) == 0x000008, "Wrong size on TabInputOptions_C_BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature");
static_assert(offsetof(TabInputOptions_C_BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature, Widget) == 0x000000, "Member 'TabInputOptions_C_BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature::Widget' has a wrong offset!");

// Function TabInputOptions.TabInputOptions_C.DialogResult_018CEC524FAF598D4D7A358441037217
// 0x000C (0x000C - 0x0000)
struct TabInputOptions_C_DialogResult_018CEC524FAF598D4D7A358441037217 final
{
public:
	EFortDialogResult                             Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ResultName;                                        // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TabInputOptions_C_DialogResult_018CEC524FAF598D4D7A358441037217) == 0x000004, "Wrong alignment on TabInputOptions_C_DialogResult_018CEC524FAF598D4D7A358441037217");
static_assert(sizeof(TabInputOptions_C_DialogResult_018CEC524FAF598D4D7A358441037217) == 0x00000C, "Wrong size on TabInputOptions_C_DialogResult_018CEC524FAF598D4D7A358441037217");
static_assert(offsetof(TabInputOptions_C_DialogResult_018CEC524FAF598D4D7A358441037217, Result) == 0x000000, "Member 'TabInputOptions_C_DialogResult_018CEC524FAF598D4D7A358441037217::Result' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_DialogResult_018CEC524FAF598D4D7A358441037217, ResultName) == 0x000004, "Member 'TabInputOptions_C_DialogResult_018CEC524FAF598D4D7A358441037217::ResultName' has a wrong offset!");

// Function TabInputOptions.TabInputOptions_C.Overlay Key Pressed
// 0x0020 (0x0020 - 0x0000)
struct TabInputOptions_C_Overlay_Key_Pressed final
{
public:
	struct FKey                                   NewKey;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue1;           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue2;           // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue1;                   // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TabInputOptions_C_Overlay_Key_Pressed) == 0x000008, "Wrong alignment on TabInputOptions_C_Overlay_Key_Pressed");
static_assert(sizeof(TabInputOptions_C_Overlay_Key_Pressed) == 0x000020, "Wrong size on TabInputOptions_C_Overlay_Key_Pressed");
static_assert(offsetof(TabInputOptions_C_Overlay_Key_Pressed, NewKey) == 0x000000, "Member 'TabInputOptions_C_Overlay_Key_Pressed::NewKey' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_Overlay_Key_Pressed, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000018, "Member 'TabInputOptions_C_Overlay_Key_Pressed::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_Overlay_Key_Pressed, CallFunc_EqualEqual_KeyKey_ReturnValue1) == 0x000019, "Member 'TabInputOptions_C_Overlay_Key_Pressed::CallFunc_EqualEqual_KeyKey_ReturnValue1' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_Overlay_Key_Pressed, CallFunc_EqualEqual_KeyKey_ReturnValue2) == 0x00001A, "Member 'TabInputOptions_C_Overlay_Key_Pressed::CallFunc_EqualEqual_KeyKey_ReturnValue2' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_Overlay_Key_Pressed, CallFunc_BooleanOR_ReturnValue) == 0x00001B, "Member 'TabInputOptions_C_Overlay_Key_Pressed::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_Overlay_Key_Pressed, CallFunc_BooleanOR_ReturnValue1) == 0x00001C, "Member 'TabInputOptions_C_Overlay_Key_Pressed::CallFunc_BooleanOR_ReturnValue1' has a wrong offset!");

// Function TabInputOptions.TabInputOptions_C.Set Input Enabled
// 0x0038 (0x0038 - 0x0000)
struct TabInputOptions_C_Set_Input_Enabled final
{
public:
	bool                                          Enabled;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetItemAt_ReturnValue;                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumItems_ReturnValue;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetListWidget_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOptionsMenuInput_C*                    K2Node_DynamicCast_AsOptions_Menu_Input;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TabInputOptions_C_Set_Input_Enabled) == 0x000008, "Wrong alignment on TabInputOptions_C_Set_Input_Enabled");
static_assert(sizeof(TabInputOptions_C_Set_Input_Enabled) == 0x000038, "Wrong size on TabInputOptions_C_Set_Input_Enabled");
static_assert(offsetof(TabInputOptions_C_Set_Input_Enabled, Enabled) == 0x000000, "Member 'TabInputOptions_C_Set_Input_Enabled::Enabled' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_Set_Input_Enabled, Temp_int_Variable) == 0x000004, "Member 'TabInputOptions_C_Set_Input_Enabled::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_Set_Input_Enabled, CallFunc_GetItemAt_ReturnValue) == 0x000008, "Member 'TabInputOptions_C_Set_Input_Enabled::CallFunc_GetItemAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_Set_Input_Enabled, CallFunc_GetNumItems_ReturnValue) == 0x000010, "Member 'TabInputOptions_C_Set_Input_Enabled::CallFunc_GetNumItems_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_Set_Input_Enabled, CallFunc_GetListWidget_ReturnValue) == 0x000018, "Member 'TabInputOptions_C_Set_Input_Enabled::CallFunc_GetListWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_Set_Input_Enabled, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'TabInputOptions_C_Set_Input_Enabled::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_Set_Input_Enabled, K2Node_DynamicCast_AsOptions_Menu_Input) == 0x000028, "Member 'TabInputOptions_C_Set_Input_Enabled::K2Node_DynamicCast_AsOptions_Menu_Input' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_Set_Input_Enabled, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'TabInputOptions_C_Set_Input_Enabled::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_Set_Input_Enabled, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'TabInputOptions_C_Set_Input_Enabled::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function TabInputOptions.TabInputOptions_C.SetupDisplayOption
// 0x0038 (0x0038 - 0x0000)
struct TabInputOptions_C_SetupDisplayOption final
{
public:
	int32                                         InputIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOptionsMenuInputDisplayOnly_C*         ReturnObject;                                      // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                        CallFunc_GetListItems_ReturnValue;                 // 0x0010(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class UObject*                                CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortOptionsMenuInputData*              K2Node_DynamicCast_AsFort_Options_Menu_Input_Data; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TabInputOptions_C_SetupDisplayOption) == 0x000008, "Wrong alignment on TabInputOptions_C_SetupDisplayOption");
static_assert(sizeof(TabInputOptions_C_SetupDisplayOption) == 0x000038, "Wrong size on TabInputOptions_C_SetupDisplayOption");
static_assert(offsetof(TabInputOptions_C_SetupDisplayOption, InputIndex) == 0x000000, "Member 'TabInputOptions_C_SetupDisplayOption::InputIndex' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_SetupDisplayOption, ReturnObject) == 0x000008, "Member 'TabInputOptions_C_SetupDisplayOption::ReturnObject' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_SetupDisplayOption, CallFunc_GetListItems_ReturnValue) == 0x000010, "Member 'TabInputOptions_C_SetupDisplayOption::CallFunc_GetListItems_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_SetupDisplayOption, CallFunc_Array_Get_Item) == 0x000020, "Member 'TabInputOptions_C_SetupDisplayOption::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_SetupDisplayOption, K2Node_DynamicCast_AsFort_Options_Menu_Input_Data) == 0x000028, "Member 'TabInputOptions_C_SetupDisplayOption::K2Node_DynamicCast_AsFort_Options_Menu_Input_Data' has a wrong offset!");
static_assert(offsetof(TabInputOptions_C_SetupDisplayOption, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'TabInputOptions_C_SetupDisplayOption::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

