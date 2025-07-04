﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Snow_Ambient_Lobby

#include "Basic.hpp"

#include "BP_Snow_Ambient_Lobby_classes.hpp"
#include "BP_Snow_Ambient_Lobby_parameters.hpp"


namespace SDK
{

// Function BP_Snow_Ambient_Lobby.BP_Snow_Ambient_Lobby_C.ExecuteUbergraph_BP_Snow_Ambient_Lobby
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Snow_Ambient_Lobby_C::ExecuteUbergraph_BP_Snow_Ambient_Lobby(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Snow_Ambient_Lobby_C", "ExecuteUbergraph_BP_Snow_Ambient_Lobby");

	Params::BP_Snow_Ambient_Lobby_C_ExecuteUbergraph_BP_Snow_Ambient_Lobby Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Snow_Ambient_Lobby.BP_Snow_Ambient_Lobby_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Snow_Ambient_Lobby_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Snow_Ambient_Lobby_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Snow_Ambient_Lobby.BP_Snow_Ambient_Lobby_C.UpdateGameSettings
// (BlueprintCallable, BlueprintEvent)

void ABP_Snow_Ambient_Lobby_C::UpdateGameSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Snow_Ambient_Lobby_C", "UpdateGameSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Snow_Ambient_Lobby.BP_Snow_Ambient_Lobby_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Snow_Ambient_Lobby_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Snow_Ambient_Lobby_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

