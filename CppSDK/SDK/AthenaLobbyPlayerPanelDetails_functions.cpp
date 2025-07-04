﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLobbyPlayerPanelDetails

#include "Basic.hpp"

#include "AthenaLobbyPlayerPanelDetails_classes.hpp"
#include "AthenaLobbyPlayerPanelDetails_parameters.hpp"


namespace SDK
{

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.ExecuteUbergraph_AthenaLobbyPlayerPanelDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelDetails_C::ExecuteUbergraph_AthenaLobbyPlayerPanelDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "ExecuteUbergraph_AthenaLobbyPlayerPanelDetails");

	Params::AthenaLobbyPlayerPanelDetails_C_ExecuteUbergraph_AthenaLobbyPlayerPanelDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanelDetails_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "PreConstruct");

	Params::AthenaLobbyPlayerPanelDetails_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanelDetails_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshPlayerName
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanelDetails_C::RefreshPlayerName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "RefreshPlayerName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshPendingInvite
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanelDetails_C::RefreshPendingInvite()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "RefreshPendingInvite");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.IsInvitationPending
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   bIsInvitationPending                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanelDetails_C::IsInvitationPending(bool* bIsInvitationPending)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "IsInvitationPending");

	Params::AthenaLobbyPlayerPanelDetails_C_IsInvitationPending Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsInvitationPending != nullptr)
		*bIsInvitationPending = Parms.bIsInvitationPending;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanelDetails_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnPartyInvitesCountChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InvitesCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelDetails_C::OnPartyInvitesCountChanged(int32 InvitesCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "OnPartyInvitesCountChanged");

	Params::AthenaLobbyPlayerPanelDetails_C_OnPartyInvitesCountChanged Parms{};

	Parms.InvitesCount = InvitesCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnActiveFriendsCountUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ActiveFriendsCount                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelDetails_C::OnActiveFriendsCountUpdated(int32 ActiveFriendsCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "OnActiveFriendsCountUpdated");

	Params::AthenaLobbyPlayerPanelDetails_C_OnActiveFriendsCountUpdated Parms{};

	Parms.ActiveFriendsCount = ActiveFriendsCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanelDetails_C::InitializeContextEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "InitializeContextEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.SetTeamMemberInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FFortTeamMemberInfo&       TeamMemberInfo_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelDetails_C::SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "SetTeamMemberInfo");

	Params::AthenaLobbyPlayerPanelDetails_C_SetTeamMemberInfo Parms{};

	Parms.TeamMemberInfo_0 = std::move(TeamMemberInfo_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshBanner
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanelDetails_C::RefreshBanner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "RefreshBanner");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshBattlePass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanelDetails_C::RefreshBattlePass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "RefreshBattlePass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnTeamMemberStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FFortTeamMemberInfo&       ChangedTeamMemberInfo                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanelDetails_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& ChangedTeamMemberInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyPlayerPanelDetails_C", "OnTeamMemberStateChanged");

	Params::AthenaLobbyPlayerPanelDetails_C_OnTeamMemberStateChanged Parms{};

	Parms.ChangedTeamMemberInfo = std::move(ChangedTeamMemberInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

