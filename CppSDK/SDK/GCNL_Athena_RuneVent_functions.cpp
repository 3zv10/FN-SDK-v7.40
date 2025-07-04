﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Athena_RuneVent

#include "Basic.hpp"

#include "GCNL_Athena_RuneVent_classes.hpp"
#include "GCNL_Athena_RuneVent_parameters.hpp"


namespace SDK
{

// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.ExecuteUbergraph_GCNL_Athena_RuneVent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_RuneVent_C::ExecuteUbergraph_GCNL_Athena_RuneVent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_RuneVent_C", "ExecuteUbergraph_GCNL_Athena_RuneVent");

	Params::GCNL_Athena_RuneVent_C_ExecuteUbergraph_GCNL_Athena_RuneVent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.PlayExpirationSound
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Athena_RuneVent_C::PlayExpirationSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_RuneVent_C", "PlayExpirationSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.ClearExpireTell
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Athena_RuneVent_C::ClearExpireTell()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_RuneVent_C", "ClearExpireTell");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.ExpireTell
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Athena_RuneVent_C::ExpireTell()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_RuneVent_C", "ExpireTell");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCNL_Athena_RuneVent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_RuneVent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_RuneVent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_RuneVent_C", "ReceiveTick");

	Params::GCNL_Athena_RuneVent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGameplayCueEvent                       EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCNL_Athena_RuneVent_C::K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_RuneVent_C", "K2_HandleGameplayCue");

	Params::GCNL_Athena_RuneVent_C_K2_HandleGameplayCue Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCNL_Athena_RuneVent_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_RuneVent_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.WhileActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCNL_Athena_RuneVent_C::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_RuneVent_C", "WhileActive");

	Params::GCNL_Athena_RuneVent_C_WhileActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.Activated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           PlayerPawn_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_RuneVent_C::Activated(class AActor* PlayerPawn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_RuneVent_C", "Activated");

	Params::GCNL_Athena_RuneVent_C_Activated Parms{};

	Parms.PlayerPawn_0 = PlayerPawn_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCNL_Athena_RuneVent_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_RuneVent_C", "OnRemove");

	Params::GCNL_Athena_RuneVent_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

