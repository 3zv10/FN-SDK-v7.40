﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspectEvolutionChoiceEntry

#include "Basic.hpp"


namespace SDK::Params
{

// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.ExecuteUbergraph_ItemInspectEvolutionChoiceEntry
// 0x0004 (0x0004 - 0x0000)
struct ItemInspectEvolutionChoiceEntry_C_ExecuteUbergraph_ItemInspectEvolutionChoiceEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemInspectEvolutionChoiceEntry_C_ExecuteUbergraph_ItemInspectEvolutionChoiceEntry) == 0x000004, "Wrong alignment on ItemInspectEvolutionChoiceEntry_C_ExecuteUbergraph_ItemInspectEvolutionChoiceEntry");
static_assert(sizeof(ItemInspectEvolutionChoiceEntry_C_ExecuteUbergraph_ItemInspectEvolutionChoiceEntry) == 0x000004, "Wrong size on ItemInspectEvolutionChoiceEntry_C_ExecuteUbergraph_ItemInspectEvolutionChoiceEntry");
static_assert(offsetof(ItemInspectEvolutionChoiceEntry_C_ExecuteUbergraph_ItemInspectEvolutionChoiceEntry, EntryPoint) == 0x000000, "Member 'ItemInspectEvolutionChoiceEntry_C_ExecuteUbergraph_ItemInspectEvolutionChoiceEntry::EntryPoint' has a wrong offset!");

// Function ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.SetItemToRepresent
// 0x0028 (0x0028 - 0x0000)
struct ItemInspectEvolutionChoiceEntry_C_SetItemToRepresent final
{
public:
	class UFortItem*                              Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RecipeIndex;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnabledChoice;                                     // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   DisableReasonText;                                 // 0x0010(0x0018)(Edit, BlueprintVisible)
};
static_assert(alignof(ItemInspectEvolutionChoiceEntry_C_SetItemToRepresent) == 0x000008, "Wrong alignment on ItemInspectEvolutionChoiceEntry_C_SetItemToRepresent");
static_assert(sizeof(ItemInspectEvolutionChoiceEntry_C_SetItemToRepresent) == 0x000028, "Wrong size on ItemInspectEvolutionChoiceEntry_C_SetItemToRepresent");
static_assert(offsetof(ItemInspectEvolutionChoiceEntry_C_SetItemToRepresent, Item) == 0x000000, "Member 'ItemInspectEvolutionChoiceEntry_C_SetItemToRepresent::Item' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionChoiceEntry_C_SetItemToRepresent, RecipeIndex) == 0x000008, "Member 'ItemInspectEvolutionChoiceEntry_C_SetItemToRepresent::RecipeIndex' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionChoiceEntry_C_SetItemToRepresent, EnabledChoice) == 0x00000C, "Member 'ItemInspectEvolutionChoiceEntry_C_SetItemToRepresent::EnabledChoice' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolutionChoiceEntry_C_SetItemToRepresent, DisableReasonText) == 0x000010, "Member 'ItemInspectEvolutionChoiceEntry_C_SetItemToRepresent::DisableReasonText' has a wrong offset!");

}

