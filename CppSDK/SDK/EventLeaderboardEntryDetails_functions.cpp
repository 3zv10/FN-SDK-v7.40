﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventLeaderboardEntryDetails

#include "Basic.hpp"

#include "EventLeaderboardEntryDetails_classes.hpp"
#include "EventLeaderboardEntryDetails_parameters.hpp"


namespace SDK
{

// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.ExecuteUbergraph_EventLeaderboardEntryDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardEntryDetails_C::ExecuteUbergraph_EventLeaderboardEntryDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "ExecuteUbergraph_EventLeaderboardEntryDetails");

	Params::EventLeaderboardEntryDetails_C_ExecuteUbergraph_EventLeaderboardEntryDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.EventIntro
// (BlueprintCallable, BlueprintEvent)

void UEventLeaderboardEntryDetails_C::EventIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "EventIntro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FFortTournamentDisplayInfo&TournamentDisplayInfo                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UEventLeaderboardEntryDetails_C::EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "EventColorize");

	Params::EventLeaderboardEntryDetails_C_EventColorize Parms{};

	Parms.TournamentDisplayInfo = std::move(TournamentDisplayInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEventLeaderboardEntryDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.ShowDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortEventLeaderboardEntryData*   EntryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardEntryDetails_C::ShowDetails(class UFortEventLeaderboardEntryData* EntryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntryDetails_C", "ShowDetails");

	Params::EventLeaderboardEntryDetails_C_ShowDetails Parms{};

	Parms.EntryData = EntryData;

	UObject::ProcessEvent(Func, &Parms);
}

}

