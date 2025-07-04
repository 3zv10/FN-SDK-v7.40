﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MinigameButtons

#include "Basic.hpp"

#include "MinigameButtonsStateConfiguration_structs.hpp"
#include "MinigameButtonsState_structs.hpp"
#include "MinigameButtonsWidgetSwitcherConfiguration_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function MinigameButtons.MinigameButtons_C.ExecuteUbergraph_MinigameButtons
// 0x00F8 (0x00F8 - 0x0000)
struct MinigameButtons_C_ExecuteUbergraph_MinigameButtons final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button6;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button7;                // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button5;                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button4;                // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button3;                // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button2;                // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button1;                // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMinigameButtonsWidgetSwitcherConfiguration K2Node_MakeStruct_MinigameButtonsWidgetSwitcherConfiguration; // 0x0058(0x0040)(ContainsInstancedReference, HasGetValueTypeHash)
	struct FMinigameButtonsWidgetSwitcherConfiguration K2Node_MakeStruct_MinigameButtonsWidgetSwitcherConfiguration1; // 0x0098(0x0040)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMinigameButtonsWidgetSwitcherConfiguration> K2Node_MakeArray_Array;               // 0x00E0(0x0010)(ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	int32                                         K2Node_Select_Default;                             // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinigameButtons_C_ExecuteUbergraph_MinigameButtons) == 0x000008, "Wrong alignment on MinigameButtons_C_ExecuteUbergraph_MinigameButtons");
static_assert(sizeof(MinigameButtons_C_ExecuteUbergraph_MinigameButtons) == 0x0000F8, "Wrong size on MinigameButtons_C_ExecuteUbergraph_MinigameButtons");
static_assert(offsetof(MinigameButtons_C_ExecuteUbergraph_MinigameButtons, EntryPoint) == 0x000000, "Member 'MinigameButtons_C_ExecuteUbergraph_MinigameButtons::EntryPoint' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_ExecuteUbergraph_MinigameButtons, Temp_bool_Variable) == 0x000004, "Member 'MinigameButtons_C_ExecuteUbergraph_MinigameButtons::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_ExecuteUbergraph_MinigameButtons, K2Node_ComponentBoundEvent_Button6) == 0x000008, "Member 'MinigameButtons_C_ExecuteUbergraph_MinigameButtons::K2Node_ComponentBoundEvent_Button6' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_ExecuteUbergraph_MinigameButtons, K2Node_CustomEvent_Index) == 0x000010, "Member 'MinigameButtons_C_ExecuteUbergraph_MinigameButtons::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_ExecuteUbergraph_MinigameButtons, K2Node_ComponentBoundEvent_Button7) == 0x000018, "Member 'MinigameButtons_C_ExecuteUbergraph_MinigameButtons::K2Node_ComponentBoundEvent_Button7' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_ExecuteUbergraph_MinigameButtons, Temp_int_Variable) == 0x000020, "Member 'MinigameButtons_C_ExecuteUbergraph_MinigameButtons::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_ExecuteUbergraph_MinigameButtons, K2Node_ComponentBoundEvent_Button5) == 0x000028, "Member 'MinigameButtons_C_ExecuteUbergraph_MinigameButtons::K2Node_ComponentBoundEvent_Button5' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_ExecuteUbergraph_MinigameButtons, K2Node_ComponentBoundEvent_Button4) == 0x000030, "Member 'MinigameButtons_C_ExecuteUbergraph_MinigameButtons::K2Node_ComponentBoundEvent_Button4' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_ExecuteUbergraph_MinigameButtons, K2Node_ComponentBoundEvent_Button3) == 0x000038, "Member 'MinigameButtons_C_ExecuteUbergraph_MinigameButtons::K2Node_ComponentBoundEvent_Button3' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_ExecuteUbergraph_MinigameButtons, K2Node_ComponentBoundEvent_Button2) == 0x000040, "Member 'MinigameButtons_C_ExecuteUbergraph_MinigameButtons::K2Node_ComponentBoundEvent_Button2' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_ExecuteUbergraph_MinigameButtons, K2Node_ComponentBoundEvent_Button1) == 0x000048, "Member 'MinigameButtons_C_ExecuteUbergraph_MinigameButtons::K2Node_ComponentBoundEvent_Button1' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_ExecuteUbergraph_MinigameButtons, K2Node_ComponentBoundEvent_Button) == 0x000050, "Member 'MinigameButtons_C_ExecuteUbergraph_MinigameButtons::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_ExecuteUbergraph_MinigameButtons, K2Node_MakeStruct_MinigameButtonsWidgetSwitcherConfiguration) == 0x000058, "Member 'MinigameButtons_C_ExecuteUbergraph_MinigameButtons::K2Node_MakeStruct_MinigameButtonsWidgetSwitcherConfiguration' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_ExecuteUbergraph_MinigameButtons, K2Node_MakeStruct_MinigameButtonsWidgetSwitcherConfiguration1) == 0x000098, "Member 'MinigameButtons_C_ExecuteUbergraph_MinigameButtons::K2Node_MakeStruct_MinigameButtonsWidgetSwitcherConfiguration1' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_ExecuteUbergraph_MinigameButtons, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0000D8, "Member 'MinigameButtons_C_ExecuteUbergraph_MinigameButtons::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_ExecuteUbergraph_MinigameButtons, K2Node_MakeArray_Array) == 0x0000E0, "Member 'MinigameButtons_C_ExecuteUbergraph_MinigameButtons::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_ExecuteUbergraph_MinigameButtons, K2Node_Select_Default) == 0x0000F0, "Member 'MinigameButtons_C_ExecuteUbergraph_MinigameButtons::K2Node_Select_Default' has a wrong offset!");

// Function MinigameButtons.MinigameButtons_C.BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function MinigameButtons.MinigameButtons_C.BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function MinigameButtons.MinigameButtons_C.BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function MinigameButtons.MinigameButtons_C.BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function MinigameButtons.MinigameButtons_C.BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'MinigameButtons_C_BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function MinigameButtons.MinigameButtons_C.BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'MinigameButtons_C_BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function MinigameButtons.MinigameButtons_C.SetWidgetSwitcherIndex
// 0x0004 (0x0004 - 0x0000)
struct MinigameButtons_C_SetWidgetSwitcherIndex final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinigameButtons_C_SetWidgetSwitcherIndex) == 0x000004, "Wrong alignment on MinigameButtons_C_SetWidgetSwitcherIndex");
static_assert(sizeof(MinigameButtons_C_SetWidgetSwitcherIndex) == 0x000004, "Wrong size on MinigameButtons_C_SetWidgetSwitcherIndex");
static_assert(offsetof(MinigameButtons_C_SetWidgetSwitcherIndex, Index_0) == 0x000000, "Member 'MinigameButtons_C_SetWidgetSwitcherIndex::Index_0' has a wrong offset!");

// Function MinigameButtons.MinigameButtons_C.BndEvt__EndGameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MinigameButtons_C_BndEvt__EndGameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinigameButtons_C_BndEvt__EndGameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on MinigameButtons_C_BndEvt__EndGameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(MinigameButtons_C_BndEvt__EndGameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on MinigameButtons_C_BndEvt__EndGameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(MinigameButtons_C_BndEvt__EndGameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'MinigameButtons_C_BndEvt__EndGameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function MinigameButtons.MinigameButtons_C.BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MinigameButtons_C_BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinigameButtons_C_BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on MinigameButtons_C_BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(MinigameButtons_C_BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on MinigameButtons_C_BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(MinigameButtons_C_BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'MinigameButtons_C_BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function MinigameButtons.MinigameButtons_C.UpdateButtons
// 0x0048 (0x0048 - 0x0000)
struct MinigameButtons_C_UpdateButtons final
{
public:
	class AFortMinigameSettingsBuilding*          Machine;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortMinigame*                          CurrentMinigame;                                   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMinigameButtonsState                         UseButtonState;                                    // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortMinigameState                            Temp_byte_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMinigameButtonsState                         Temp_byte_Variable1;                               // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMinigameButtonsState                         Temp_byte_Variable2;                               // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMinigameButtonsState                         Temp_byte_Variable3;                               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMinigameButtonsState                         Temp_byte_Variable4;                               // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EMinigameButtonsState                         Temp_byte_Variable5;                               // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*            K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EMinigameButtonsState                         Temp_byte_Variable6;                               // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B[0x5];                                       // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortMinigame*                          CallFunc_GetMinigame_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue3;                     // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReady_ReturnValue;                      // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EMinigameButtonsState                         K2Node_Select_Default;                             // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMinigameButtonsState                         K2Node_Select1_Default;                            // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinigameButtons_C_UpdateButtons) == 0x000008, "Wrong alignment on MinigameButtons_C_UpdateButtons");
static_assert(sizeof(MinigameButtons_C_UpdateButtons) == 0x000048, "Wrong size on MinigameButtons_C_UpdateButtons");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, Machine) == 0x000000, "Member 'MinigameButtons_C_UpdateButtons::Machine' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, CurrentMinigame) == 0x000008, "Member 'MinigameButtons_C_UpdateButtons::CurrentMinigame' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, UseButtonState) == 0x000010, "Member 'MinigameButtons_C_UpdateButtons::UseButtonState' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, Temp_byte_Variable) == 0x000011, "Member 'MinigameButtons_C_UpdateButtons::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, Temp_byte_Variable1) == 0x000012, "Member 'MinigameButtons_C_UpdateButtons::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, Temp_byte_Variable2) == 0x000013, "Member 'MinigameButtons_C_UpdateButtons::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, Temp_byte_Variable3) == 0x000014, "Member 'MinigameButtons_C_UpdateButtons::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, Temp_byte_Variable4) == 0x000015, "Member 'MinigameButtons_C_UpdateButtons::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, Temp_bool_Variable) == 0x000016, "Member 'MinigameButtons_C_UpdateButtons::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, Temp_byte_Variable5) == 0x000017, "Member 'MinigameButtons_C_UpdateButtons::Temp_byte_Variable5' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'MinigameButtons_C_UpdateButtons::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, K2Node_DynamicCast_AsFort_Player_Controller_Athena) == 0x000020, "Member 'MinigameButtons_C_UpdateButtons::K2Node_DynamicCast_AsFort_Player_Controller_Athena' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'MinigameButtons_C_UpdateButtons::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, Temp_byte_Variable6) == 0x000029, "Member 'MinigameButtons_C_UpdateButtons::Temp_byte_Variable6' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, CallFunc_IsValid_ReturnValue) == 0x00002A, "Member 'MinigameButtons_C_UpdateButtons::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, CallFunc_GetMinigame_ReturnValue) == 0x000030, "Member 'MinigameButtons_C_UpdateButtons::CallFunc_GetMinigame_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000038, "Member 'MinigameButtons_C_UpdateButtons::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, CallFunc_IsValid_ReturnValue1) == 0x000040, "Member 'MinigameButtons_C_UpdateButtons::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, CallFunc_IsValid_ReturnValue2) == 0x000041, "Member 'MinigameButtons_C_UpdateButtons::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, CallFunc_IsValid_ReturnValue3) == 0x000042, "Member 'MinigameButtons_C_UpdateButtons::CallFunc_IsValid_ReturnValue3' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, CallFunc_IsReady_ReturnValue) == 0x000043, "Member 'MinigameButtons_C_UpdateButtons::CallFunc_IsReady_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, CallFunc_BooleanAND_ReturnValue) == 0x000044, "Member 'MinigameButtons_C_UpdateButtons::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, K2Node_Select_Default) == 0x000045, "Member 'MinigameButtons_C_UpdateButtons::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtons, K2Node_Select1_Default) == 0x000046, "Member 'MinigameButtons_C_UpdateButtons::K2Node_Select1_Default' has a wrong offset!");

// Function MinigameButtons.MinigameButtons_C.CenterOnCurrentButton
// 0x0008 (0x0008 - 0x0000)
struct MinigameButtons_C_CenterOnCurrentButton final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinigameButtons_C_CenterOnCurrentButton) == 0x000008, "Wrong alignment on MinigameButtons_C_CenterOnCurrentButton");
static_assert(sizeof(MinigameButtons_C_CenterOnCurrentButton) == 0x000008, "Wrong size on MinigameButtons_C_CenterOnCurrentButton");
static_assert(offsetof(MinigameButtons_C_CenterOnCurrentButton, CallFunc_GetUINavigationManager_ReturnValue) == 0x000000, "Member 'MinigameButtons_C_CenterOnCurrentButton::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");

// Function MinigameButtons.MinigameButtons_C.SetButtonState
// 0x0002 (0x0002 - 0x0000)
struct MinigameButtons_C_SetButtonState final
{
public:
	EMinigameButtonsState                         Value;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MinigameButtons_C_SetButtonState) == 0x000001, "Wrong alignment on MinigameButtons_C_SetButtonState");
static_assert(sizeof(MinigameButtons_C_SetButtonState) == 0x000002, "Wrong size on MinigameButtons_C_SetButtonState");
static_assert(offsetof(MinigameButtons_C_SetButtonState, Value) == 0x000000, "Member 'MinigameButtons_C_SetButtonState::Value' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_SetButtonState, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000001, "Member 'MinigameButtons_C_SetButtonState::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function MinigameButtons.MinigameButtons_C.UpdateButtonsFromButtonState
// 0x0048 (0x0048 - 0x0000)
struct MinigameButtons_C_UpdateButtonsFromButtonState final
{
public:
	struct FMinigameButtonsStateConfiguration     ButtonConfiguration;                               // 0x0000(0x0003)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable1;                               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconTextButton_C*                      Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMinigameButtonsStateConfiguration     CallFunc_Map_Find_Value;                           // 0x0010(0x0003)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable2;                               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconTextButton_C*                      K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select1_Default;                            // 0x0020(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconTextButton_C*                      K2Node_Select2_Default;                            // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinigameButtons_C_UpdateButtonsFromButtonState) == 0x000008, "Wrong alignment on MinigameButtons_C_UpdateButtonsFromButtonState");
static_assert(sizeof(MinigameButtons_C_UpdateButtonsFromButtonState) == 0x000048, "Wrong size on MinigameButtons_C_UpdateButtonsFromButtonState");
static_assert(offsetof(MinigameButtons_C_UpdateButtonsFromButtonState, ButtonConfiguration) == 0x000000, "Member 'MinigameButtons_C_UpdateButtonsFromButtonState::ButtonConfiguration' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtonsFromButtonState, Temp_bool_Variable) == 0x000003, "Member 'MinigameButtons_C_UpdateButtonsFromButtonState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtonsFromButtonState, Temp_bool_Variable1) == 0x000004, "Member 'MinigameButtons_C_UpdateButtonsFromButtonState::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtonsFromButtonState, Temp_object_Variable) == 0x000008, "Member 'MinigameButtons_C_UpdateButtonsFromButtonState::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtonsFromButtonState, CallFunc_Map_Find_Value) == 0x000010, "Member 'MinigameButtons_C_UpdateButtonsFromButtonState::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtonsFromButtonState, CallFunc_Map_Find_ReturnValue) == 0x000013, "Member 'MinigameButtons_C_UpdateButtonsFromButtonState::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtonsFromButtonState, Temp_bool_Variable2) == 0x000014, "Member 'MinigameButtons_C_UpdateButtonsFromButtonState::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtonsFromButtonState, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000015, "Member 'MinigameButtons_C_UpdateButtonsFromButtonState::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtonsFromButtonState, K2Node_Select_Default) == 0x000018, "Member 'MinigameButtons_C_UpdateButtonsFromButtonState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtonsFromButtonState, K2Node_Select1_Default) == 0x000020, "Member 'MinigameButtons_C_UpdateButtonsFromButtonState::K2Node_Select1_Default' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtonsFromButtonState, CallFunc_EqualEqual_ByteByte_ReturnValue1) == 0x000038, "Member 'MinigameButtons_C_UpdateButtonsFromButtonState::CallFunc_EqualEqual_ByteByte_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MinigameButtons_C_UpdateButtonsFromButtonState, K2Node_Select2_Default) == 0x000040, "Member 'MinigameButtons_C_UpdateButtonsFromButtonState::K2Node_Select2_Default' has a wrong offset!");

}

