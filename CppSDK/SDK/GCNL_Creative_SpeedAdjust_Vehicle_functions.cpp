﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Creative_SpeedAdjust_Vehicle

#include "Basic.hpp"

#include "GCNL_Creative_SpeedAdjust_Vehicle_classes.hpp"
#include "GCNL_Creative_SpeedAdjust_Vehicle_parameters.hpp"


namespace SDK
{

// Function GCNL_Creative_SpeedAdjust_Vehicle.GCNL_Creative_SpeedAdjust_Vehicle_C.ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Vehicle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Creative_SpeedAdjust_Vehicle_C::ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Vehicle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Creative_SpeedAdjust_Vehicle_C", "ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Vehicle");

	Params::GCNL_Creative_SpeedAdjust_Vehicle_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Vehicle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Creative_SpeedAdjust_Vehicle.GCNL_Creative_SpeedAdjust_Vehicle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCNL_Creative_SpeedAdjust_Vehicle_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Creative_SpeedAdjust_Vehicle_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Creative_SpeedAdjust_Vehicle.GCNL_Creative_SpeedAdjust_Vehicle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCNL_Creative_SpeedAdjust_Vehicle_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Creative_SpeedAdjust_Vehicle_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

