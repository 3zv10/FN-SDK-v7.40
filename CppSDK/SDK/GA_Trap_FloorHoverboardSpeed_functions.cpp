﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Trap_FloorHoverboardSpeed

#include "Basic.hpp"

#include "GA_Trap_FloorHoverboardSpeed_classes.hpp"
#include "GA_Trap_FloorHoverboardSpeed_parameters.hpp"


namespace SDK
{

// Function GA_Trap_FloorHoverboardSpeed.GA_Trap_FloorHoverboardSpeed_C.ExecuteUbergraph_GA_Trap_FloorHoverboardSpeed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Trap_FloorHoverboardSpeed_C::ExecuteUbergraph_GA_Trap_FloorHoverboardSpeed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Trap_FloorHoverboardSpeed_C", "ExecuteUbergraph_GA_Trap_FloorHoverboardSpeed");

	Params::GA_Trap_FloorHoverboardSpeed_C_ExecuteUbergraph_GA_Trap_FloorHoverboardSpeed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Trap_FloorHoverboardSpeed.GA_Trap_FloorHoverboardSpeed_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Trap_FloorHoverboardSpeed_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Trap_FloorHoverboardSpeed_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}

