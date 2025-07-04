﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReportablePlayerReasonEntry

#include "Basic.hpp"


namespace SDK::Params
{

// Function ReportablePlayerReasonEntry.ReportablePlayerReasonEntry_C.ExecuteUbergraph_ReportablePlayerReasonEntry
// 0x0008 (0x0008 - 0x0000)
struct ReportablePlayerReasonEntry_C_ExecuteUbergraph_ReportablePlayerReasonEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bAnimateOnSelect;                     // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ReportablePlayerReasonEntry_C_ExecuteUbergraph_ReportablePlayerReasonEntry) == 0x000004, "Wrong alignment on ReportablePlayerReasonEntry_C_ExecuteUbergraph_ReportablePlayerReasonEntry");
static_assert(sizeof(ReportablePlayerReasonEntry_C_ExecuteUbergraph_ReportablePlayerReasonEntry) == 0x000008, "Wrong size on ReportablePlayerReasonEntry_C_ExecuteUbergraph_ReportablePlayerReasonEntry");
static_assert(offsetof(ReportablePlayerReasonEntry_C_ExecuteUbergraph_ReportablePlayerReasonEntry, EntryPoint) == 0x000000, "Member 'ReportablePlayerReasonEntry_C_ExecuteUbergraph_ReportablePlayerReasonEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(ReportablePlayerReasonEntry_C_ExecuteUbergraph_ReportablePlayerReasonEntry, K2Node_Event_bIsSelected) == 0x000004, "Member 'ReportablePlayerReasonEntry_C_ExecuteUbergraph_ReportablePlayerReasonEntry::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(ReportablePlayerReasonEntry_C_ExecuteUbergraph_ReportablePlayerReasonEntry, K2Node_Event_bAnimateOnSelect) == 0x000005, "Member 'ReportablePlayerReasonEntry_C_ExecuteUbergraph_ReportablePlayerReasonEntry::K2Node_Event_bAnimateOnSelect' has a wrong offset!");

// Function ReportablePlayerReasonEntry.ReportablePlayerReasonEntry_C.SetSelectionState
// 0x0002 (0x0002 - 0x0000)
struct ReportablePlayerReasonEntry_C_SetSelectionState final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bAnimateOnSelect;                                  // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ReportablePlayerReasonEntry_C_SetSelectionState) == 0x000001, "Wrong alignment on ReportablePlayerReasonEntry_C_SetSelectionState");
static_assert(sizeof(ReportablePlayerReasonEntry_C_SetSelectionState) == 0x000002, "Wrong size on ReportablePlayerReasonEntry_C_SetSelectionState");
static_assert(offsetof(ReportablePlayerReasonEntry_C_SetSelectionState, bIsSelected) == 0x000000, "Member 'ReportablePlayerReasonEntry_C_SetSelectionState::bIsSelected' has a wrong offset!");
static_assert(offsetof(ReportablePlayerReasonEntry_C_SetSelectionState, bAnimateOnSelect) == 0x000001, "Member 'ReportablePlayerReasonEntry_C_SetSelectionState::bAnimateOnSelect' has a wrong offset!");

}

