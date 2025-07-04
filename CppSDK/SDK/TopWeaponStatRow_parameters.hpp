﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TopWeaponStatRow

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function TopWeaponStatRow.TopWeaponStatRow_C.ExecuteUbergraph_TopWeaponStatRow
// 0x0004 (0x0004 - 0x0000)
struct TopWeaponStatRow_C_ExecuteUbergraph_TopWeaponStatRow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TopWeaponStatRow_C_ExecuteUbergraph_TopWeaponStatRow) == 0x000004, "Wrong alignment on TopWeaponStatRow_C_ExecuteUbergraph_TopWeaponStatRow");
static_assert(sizeof(TopWeaponStatRow_C_ExecuteUbergraph_TopWeaponStatRow) == 0x000004, "Wrong size on TopWeaponStatRow_C_ExecuteUbergraph_TopWeaponStatRow");
static_assert(offsetof(TopWeaponStatRow_C_ExecuteUbergraph_TopWeaponStatRow, EntryPoint) == 0x000000, "Member 'TopWeaponStatRow_C_ExecuteUbergraph_TopWeaponStatRow::EntryPoint' has a wrong offset!");

// Function TopWeaponStatRow.TopWeaponStatRow_C.Update
// 0x0130 (0x0130 - 0x0000)
struct TopWeaponStatRow_C_Update final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F[0x1];                                        // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTopWeaponStatRowEntry_C*>       K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ZeroConstructor, ReferenceParm)
	class UTopWeaponStatRowEntry_C*               CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaBaseStatView*                    CallFunc_GetBaseStatView_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaMatchStatView*                   K2Node_DynamicCast_AsAthena_Match_Stat_View;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAthenaWeaponStatView*>          CallFunc_GetSortedWeaponViews_ReturnValue;         // 0x0040(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaWeaponStatView*                  CallFunc_Array_Get_Item1;                          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue1;                 // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortUIStatStyle                       CallFunc_GetStatStyle_ReturnValue;                 // 0x0068(0x00C0)(ConstParm)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TopWeaponStatRow_C_Update) == 0x000008, "Wrong alignment on TopWeaponStatRow_C_Update");
static_assert(sizeof(TopWeaponStatRow_C_Update) == 0x000130, "Wrong size on TopWeaponStatRow_C_Update");
static_assert(offsetof(TopWeaponStatRow_C_Update, Temp_int_Array_Index_Variable) == 0x000000, "Member 'TopWeaponStatRow_C_Update::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRow_C_Update, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'TopWeaponStatRow_C_Update::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRow_C_Update, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'TopWeaponStatRow_C_Update::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRow_C_Update, Temp_byte_Variable) == 0x00000C, "Member 'TopWeaponStatRow_C_Update::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRow_C_Update, Temp_byte_Variable1) == 0x00000D, "Member 'TopWeaponStatRow_C_Update::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRow_C_Update, Temp_bool_Variable) == 0x00000E, "Member 'TopWeaponStatRow_C_Update::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRow_C_Update, K2Node_MakeArray_Array) == 0x000010, "Member 'TopWeaponStatRow_C_Update::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRow_C_Update, CallFunc_Array_Get_Item) == 0x000020, "Member 'TopWeaponStatRow_C_Update::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRow_C_Update, CallFunc_GetBaseStatView_ReturnValue) == 0x000028, "Member 'TopWeaponStatRow_C_Update::CallFunc_GetBaseStatView_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRow_C_Update, K2Node_DynamicCast_AsAthena_Match_Stat_View) == 0x000030, "Member 'TopWeaponStatRow_C_Update::K2Node_DynamicCast_AsAthena_Match_Stat_View' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRow_C_Update, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'TopWeaponStatRow_C_Update::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRow_C_Update, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'TopWeaponStatRow_C_Update::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRow_C_Update, CallFunc_GetSortedWeaponViews_ReturnValue) == 0x000040, "Member 'TopWeaponStatRow_C_Update::CallFunc_GetSortedWeaponViews_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRow_C_Update, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'TopWeaponStatRow_C_Update::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRow_C_Update, CallFunc_Array_Get_Item1) == 0x000058, "Member 'TopWeaponStatRow_C_Update::CallFunc_Array_Get_Item1' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRow_C_Update, CallFunc_Array_Length_ReturnValue1) == 0x000060, "Member 'TopWeaponStatRow_C_Update::CallFunc_Array_Length_ReturnValue1' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRow_C_Update, CallFunc_Less_IntInt_ReturnValue1) == 0x000064, "Member 'TopWeaponStatRow_C_Update::CallFunc_Less_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRow_C_Update, CallFunc_GetStatStyle_ReturnValue) == 0x000068, "Member 'TopWeaponStatRow_C_Update::CallFunc_GetStatStyle_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRow_C_Update, K2Node_Select_Default) == 0x000128, "Member 'TopWeaponStatRow_C_Update::K2Node_Select_Default' has a wrong offset!");

}

