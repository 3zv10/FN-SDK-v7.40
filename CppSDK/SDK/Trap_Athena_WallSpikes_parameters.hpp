﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trap_Athena_WallSpikes

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C.ExecuteUbergraph_Trap_Athena_WallSpikes
// 0x0014 (0x0014 - 0x0000)
struct Trap_Athena_WallSpikes_C_ExecuteUbergraph_Trap_Athena_WallSpikes final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_NewSpikePosition;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trap_Athena_WallSpikes_C_ExecuteUbergraph_Trap_Athena_WallSpikes) == 0x000004, "Wrong alignment on Trap_Athena_WallSpikes_C_ExecuteUbergraph_Trap_Athena_WallSpikes");
static_assert(sizeof(Trap_Athena_WallSpikes_C_ExecuteUbergraph_Trap_Athena_WallSpikes) == 0x000014, "Wrong size on Trap_Athena_WallSpikes_C_ExecuteUbergraph_Trap_Athena_WallSpikes");
static_assert(offsetof(Trap_Athena_WallSpikes_C_ExecuteUbergraph_Trap_Athena_WallSpikes, EntryPoint) == 0x000000, "Member 'Trap_Athena_WallSpikes_C_ExecuteUbergraph_Trap_Athena_WallSpikes::EntryPoint' has a wrong offset!");
static_assert(offsetof(Trap_Athena_WallSpikes_C_ExecuteUbergraph_Trap_Athena_WallSpikes, K2Node_Event_NewSpikePosition) == 0x000004, "Member 'Trap_Athena_WallSpikes_C_ExecuteUbergraph_Trap_Athena_WallSpikes::K2Node_Event_NewSpikePosition' has a wrong offset!");
static_assert(offsetof(Trap_Athena_WallSpikes_C_ExecuteUbergraph_Trap_Athena_WallSpikes, CallFunc_MakeVector_ReturnValue) == 0x000008, "Member 'Trap_Athena_WallSpikes_C_ExecuteUbergraph_Trap_Athena_WallSpikes::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

// Function Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C.SetSpikePosition
// 0x0004 (0x0004 - 0x0000)
struct Trap_Athena_WallSpikes_C_SetSpikePosition final
{
public:
	float                                         NewSpikePosition;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trap_Athena_WallSpikes_C_SetSpikePosition) == 0x000004, "Wrong alignment on Trap_Athena_WallSpikes_C_SetSpikePosition");
static_assert(sizeof(Trap_Athena_WallSpikes_C_SetSpikePosition) == 0x000004, "Wrong size on Trap_Athena_WallSpikes_C_SetSpikePosition");
static_assert(offsetof(Trap_Athena_WallSpikes_C_SetSpikePosition, NewSpikePosition) == 0x000000, "Member 'Trap_Athena_WallSpikes_C_SetSpikePosition::NewSpikePosition' has a wrong offset!");

}

