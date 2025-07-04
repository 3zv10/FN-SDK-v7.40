﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_HuskDigger_TunnelMove

#include "Basic.hpp"

#include "GCN_HuskDigger_TunnelMove_classes.hpp"
#include "GCN_HuskDigger_TunnelMove_parameters.hpp"


namespace SDK
{

// Function GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C.ExecuteUbergraph_GCN_HuskDigger_TunnelMove
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_HuskDigger_TunnelMove_C::ExecuteUbergraph_GCN_HuskDigger_TunnelMove(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_HuskDigger_TunnelMove_C", "ExecuteUbergraph_GCN_HuskDigger_TunnelMove");

	Params::GCN_HuskDigger_TunnelMove_C_ExecuteUbergraph_GCN_HuskDigger_TunnelMove Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C.Trail
// (BlueprintCallable, BlueprintEvent)

void AGCN_HuskDigger_TunnelMove_C::Trail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_HuskDigger_TunnelMove_C", "Trail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGameplayCueEvent                       EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCN_HuskDigger_TunnelMove_C::K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_HuskDigger_TunnelMove_C", "K2_HandleGameplayCue");

	Params::GCN_HuskDigger_TunnelMove_C_K2_HandleGameplayCue Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_HuskDigger_TunnelMove_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_HuskDigger_TunnelMove_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

