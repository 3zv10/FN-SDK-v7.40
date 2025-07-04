﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Scoreboard_UI_Row

#include "Basic.hpp"

#include "Scoreboard_UI_Row_classes.hpp"
#include "Scoreboard_UI_Row_parameters.hpp"


namespace SDK
{

// Function Scoreboard_UI_Row.Scoreboard_UI_Row_C.ExecuteUbergraph_Scoreboard_UI_Row
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreboard_UI_Row_C::ExecuteUbergraph_Scoreboard_UI_Row(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scoreboard_UI_Row_C", "ExecuteUbergraph_Scoreboard_UI_Row");

	Params::Scoreboard_UI_Row_C_ExecuteUbergraph_Scoreboard_UI_Row Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Scoreboard_UI_Row.Scoreboard_UI_Row_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UScoreboard_UI_Row_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scoreboard_UI_Row_C", "PreConstruct");

	Params::Scoreboard_UI_Row_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Scoreboard_UI_Row.Scoreboard_UI_Row_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScoreboard_UI_Row_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scoreboard_UI_Row_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Scoreboard_UI_Row.Scoreboard_UI_Row_C.ProvideData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>&                    InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UScoreboard_UI_Row_C::ProvideData(TArray<class FText>& InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scoreboard_UI_Row_C", "ProvideData");

	Params::Scoreboard_UI_Row_C_ProvideData Parms{};

	Parms.InData = std::move(InData);

	UObject::ProcessEvent(Func, &Parms);

	InData = std::move(Parms.InData);
}

}

