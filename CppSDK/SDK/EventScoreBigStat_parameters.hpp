﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventScoreBigStat

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function EventScoreBigStat.EventScoreBigStat_C.SetData
// 0x0248 (0x0248 - 0x0000)
struct EventScoreBigStat_C_SetData final
{
public:
	class FText                                   Label;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Value;                                             // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ValueContext;                                      // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   FormatterText;                                     // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortTournamentDisplayInfo             Tournament_Display_Info;                           // 0x0038(0x0170)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x01A8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x01C0(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_201[0x7];                                      // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0208(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0218(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue1;              // 0x0230(0x0018)()
};
static_assert(alignof(EventScoreBigStat_C_SetData) == 0x000008, "Wrong alignment on EventScoreBigStat_C_SetData");
static_assert(sizeof(EventScoreBigStat_C_SetData) == 0x000248, "Wrong size on EventScoreBigStat_C_SetData");
static_assert(offsetof(EventScoreBigStat_C_SetData, Label) == 0x000000, "Member 'EventScoreBigStat_C_SetData::Label' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, Value) == 0x000018, "Member 'EventScoreBigStat_C_SetData::Value' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, ValueContext) == 0x00001C, "Member 'EventScoreBigStat_C_SetData::ValueContext' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, FormatterText) == 0x000020, "Member 'EventScoreBigStat_C_SetData::FormatterText' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, Tournament_Display_Info) == 0x000038, "Member 'EventScoreBigStat_C_SetData::Tournament_Display_Info' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, CallFunc_Conv_IntToText_ReturnValue) == 0x0001A8, "Member 'EventScoreBigStat_C_SetData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, K2Node_MakeStruct_FormatArgumentData) == 0x0001C0, "Member 'EventScoreBigStat_C_SetData::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000200, "Member 'EventScoreBigStat_C_SetData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, K2Node_MakeArray_Array) == 0x000208, "Member 'EventScoreBigStat_C_SetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, CallFunc_Format_ReturnValue) == 0x000218, "Member 'EventScoreBigStat_C_SetData::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, CallFunc_Conv_IntToText_ReturnValue1) == 0x000230, "Member 'EventScoreBigStat_C_SetData::CallFunc_Conv_IntToText_ReturnValue1' has a wrong offset!");

}

