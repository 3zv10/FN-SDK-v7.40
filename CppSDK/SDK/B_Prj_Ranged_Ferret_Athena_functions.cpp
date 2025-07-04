﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Ranged_Ferret_Athena

#include "Basic.hpp"

#include "B_Prj_Ranged_Ferret_Athena_classes.hpp"
#include "B_Prj_Ranged_Ferret_Athena_parameters.hpp"


namespace SDK
{

// Function B_Prj_Ranged_Ferret_Athena.B_Prj_Ranged_Ferret_Athena_C.ExecuteUbergraph_B_Prj_Ranged_Ferret_Athena
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Ranged_Ferret_Athena_C::ExecuteUbergraph_B_Prj_Ranged_Ferret_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_Ferret_Athena_C", "ExecuteUbergraph_B_Prj_Ranged_Ferret_Athena");

	Params::B_Prj_Ranged_Ferret_Athena_C_ExecuteUbergraph_B_Prj_Ranged_Ferret_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Ranged_Ferret_Athena.B_Prj_Ranged_Ferret_Athena_C.CustomExploded
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Ranged_Ferret_Athena_C::CustomExploded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_Ferret_Athena_C", "CustomExploded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Ranged_Ferret_Athena.B_Prj_Ranged_Ferret_Athena_C.OnTouched
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    bIsOverlap                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Prj_Ranged_Ferret_Athena_C::OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& HitResult, bool bIsOverlap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_Ferret_Athena_C", "OnTouched");

	Params::B_Prj_Ranged_Ferret_Athena_C_OnTouched Parms{};

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.HitResult = std::move(HitResult);
	Parms.bIsOverlap = bIsOverlap;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Ranged_Ferret_Athena.B_Prj_Ranged_Ferret_Athena_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_Prj_Ranged_Ferret_Athena_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_Ferret_Athena_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Ranged_Ferret_Athena.B_Prj_Ranged_Ferret_Athena_C.OnExploded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const TArray<class AActor*>&            HitActors                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// const TArray<struct FHitResult>&        HitResults                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)

void AB_Prj_Ranged_Ferret_Athena_C::OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_Ferret_Athena_C", "OnExploded");

	Params::B_Prj_Ranged_Ferret_Athena_C_OnExploded Parms{};

	Parms.HitActors = std::move(HitActors);
	Parms.HitResults = std::move(HitResults);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Ranged_Ferret_Athena.B_Prj_Ranged_Ferret_Athena_C.FuseTimerMax
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Ranged_Ferret_Athena_C::FuseTimerMax()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_Ferret_Athena_C", "FuseTimerMax");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Ranged_Ferret_Athena.B_Prj_Ranged_Ferret_Athena_C.OnStop
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FHitResult&                Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_Ranged_Ferret_Athena_C::OnStop(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_Ferret_Athena_C", "OnStop");

	Params::B_Prj_Ranged_Ferret_Athena_C_OnStop Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Ranged_Ferret_Athena.B_Prj_Ranged_Ferret_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Ranged_Ferret_Athena_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_Ferret_Athena_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Ranged_Ferret_Athena.B_Prj_Ranged_Ferret_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Ranged_Ferret_Athena_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_Ferret_Athena_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

