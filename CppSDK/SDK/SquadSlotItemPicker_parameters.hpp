﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SquadSlotItemPicker

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function SquadSlotItemPicker.SquadSlotItemPicker_C.ExecuteUbergraph_SquadSlotItemPicker
// 0x0190 (0x0190 - 0x0000)
struct SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESquadSlotSortType                            Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable1;                               // 0x0020(0x0018)()
	class FText                                   Temp_text_Variable2;                               // 0x0038(0x0018)()
	class FText                                   Temp_text_Variable3;                               // 0x0050(0x0018)()
	ESquadSlotType                                Temp_byte_Variable1;                               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable4;                               // 0x0070(0x0018)()
	class FText                                   Temp_text_Variable5;                               // 0x0088(0x0018)()
	class FText                                   Temp_text_Variable6;                               // 0x00A0(0x0018)()
	class FText                                   Temp_text_Variable7;                               // 0x00B8(0x0018)()
	class FText                                   Temp_text_Variable8;                               // 0x00D0(0x0018)()
	class FText                                   Temp_text_Variable9;                               // 0x00E8(0x0018)()
	class FText                                   Temp_text_Variable10;                              // 0x0100(0x0018)()
	class FText                                   Temp_text_Variable11;                              // 0x0118(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue1;               // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESquadSlotSortType CurrentSortType, ESquadSlotType SquadSlotType)> K2Node_CreateDelegate_OutputDelegate; // 0x0140(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue2;               // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESquadSlotSortType                            K2Node_CustomEvent_CurrentSortType;                // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESquadSlotType                                K2Node_CustomEvent_NewParam;                       // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15A[0x6];                                      // 0x015A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0160(0x0018)()
	class FText                                   K2Node_Select1_Default;                            // 0x0178(0x0018)()
};
static_assert(alignof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker) == 0x000008, "Wrong alignment on SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker");
static_assert(sizeof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker) == 0x000190, "Wrong size on SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, EntryPoint) == 0x000000, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::EntryPoint' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_byte_Variable) == 0x000004, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable) == 0x000008, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable1) == 0x000020, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable1' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable2) == 0x000038, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable2' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable3) == 0x000050, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable3' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_byte_Variable1) == 0x000068, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable4) == 0x000070, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable4' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable5) == 0x000088, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable5' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable6) == 0x0000A0, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable6' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable7) == 0x0000B8, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable7' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable8) == 0x0000D0, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable8' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable9) == 0x0000E8, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable9' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable10) == 0x000100, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable10' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, Temp_text_Variable11) == 0x000118, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::Temp_text_Variable11' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, CallFunc_PlayAnimation_ReturnValue) == 0x000130, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, CallFunc_PlayAnimation_ReturnValue1) == 0x000138, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::CallFunc_PlayAnimation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, K2Node_CreateDelegate_OutputDelegate) == 0x000140, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, CallFunc_PlayAnimation_ReturnValue2) == 0x000150, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::CallFunc_PlayAnimation_ReturnValue2' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, K2Node_CustomEvent_CurrentSortType) == 0x000158, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::K2Node_CustomEvent_CurrentSortType' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, K2Node_CustomEvent_NewParam) == 0x000159, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::K2Node_CustomEvent_NewParam' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, K2Node_Select_Default) == 0x000160, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker, K2Node_Select1_Default) == 0x000178, "Member 'SquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker::K2Node_Select1_Default' has a wrong offset!");

// Function SquadSlotItemPicker.SquadSlotItemPicker_C.HandleSortChanged
// 0x0002 (0x0002 - 0x0000)
struct SquadSlotItemPicker_C_HandleSortChanged final
{
public:
	ESquadSlotSortType                            CurrentSortType;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESquadSlotType                                NewParam;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SquadSlotItemPicker_C_HandleSortChanged) == 0x000001, "Wrong alignment on SquadSlotItemPicker_C_HandleSortChanged");
static_assert(sizeof(SquadSlotItemPicker_C_HandleSortChanged) == 0x000002, "Wrong size on SquadSlotItemPicker_C_HandleSortChanged");
static_assert(offsetof(SquadSlotItemPicker_C_HandleSortChanged, CurrentSortType) == 0x000000, "Member 'SquadSlotItemPicker_C_HandleSortChanged::CurrentSortType' has a wrong offset!");
static_assert(offsetof(SquadSlotItemPicker_C_HandleSortChanged, NewParam) == 0x000001, "Member 'SquadSlotItemPicker_C_HandleSortChanged::NewParam' has a wrong offset!");

}

