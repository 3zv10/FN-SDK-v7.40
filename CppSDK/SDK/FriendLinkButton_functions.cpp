﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FriendLinkButton

#include "Basic.hpp"

#include "FriendLinkButton_classes.hpp"
#include "FriendLinkButton_parameters.hpp"


namespace SDK
{

// Function FriendLinkButton.FriendLinkButton_C.ExecuteUbergraph_FriendLinkButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFriendLinkButton_C::ExecuteUbergraph_FriendLinkButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FriendLinkButton_C", "ExecuteUbergraph_FriendLinkButton");

	Params::FriendLinkButton_C_ExecuteUbergraph_FriendLinkButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FriendLinkButton.FriendLinkButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFriendLinkButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FriendLinkButton_C", "PreConstruct");

	Params::FriendLinkButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FriendLinkButton.FriendLinkButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UFriendLinkButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FriendLinkButton_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FriendLinkButton.FriendLinkButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFriendLinkButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FriendLinkButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

