﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Outlander_Phaseshift_PhaseSiphon_Dash

#include "Basic.hpp"

#include "GC_Outlander_Phaseshift_PhaseSiphon_Dash_classes.hpp"
#include "GC_Outlander_Phaseshift_PhaseSiphon_Dash_parameters.hpp"


namespace SDK
{

// Function GC_Outlander_Phaseshift_PhaseSiphon_Dash.GC_Outlander_Phaseshift_PhaseSiphon_Dash_C.ExecuteUbergraph_GC_Outlander_Phaseshift_PhaseSiphon_Dash
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_Outlander_Phaseshift_PhaseSiphon_Dash_C::ExecuteUbergraph_GC_Outlander_Phaseshift_PhaseSiphon_Dash(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Outlander_Phaseshift_PhaseSiphon_Dash_C", "ExecuteUbergraph_GC_Outlander_Phaseshift_PhaseSiphon_Dash");

	Params::GC_Outlander_Phaseshift_PhaseSiphon_Dash_C_ExecuteUbergraph_GC_Outlander_Phaseshift_PhaseSiphon_Dash Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Outlander_Phaseshift_PhaseSiphon_Dash.GC_Outlander_Phaseshift_PhaseSiphon_Dash_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGC_Outlander_Phaseshift_PhaseSiphon_Dash_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Outlander_Phaseshift_PhaseSiphon_Dash_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GC_Outlander_Phaseshift_PhaseSiphon_Dash.GC_Outlander_Phaseshift_PhaseSiphon_Dash_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_Outlander_Phaseshift_PhaseSiphon_Dash_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Outlander_Phaseshift_PhaseSiphon_Dash_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

