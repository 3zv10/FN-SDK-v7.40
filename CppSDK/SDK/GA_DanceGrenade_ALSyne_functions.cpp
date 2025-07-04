﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DanceGrenade_ALSyne

#include "Basic.hpp"

#include "GA_DanceGrenade_ALSyne_classes.hpp"
#include "GA_DanceGrenade_ALSyne_parameters.hpp"


namespace SDK
{

// Function GA_DanceGrenade_ALSyne.GA_DanceGrenade_ALSyne_C.ExecuteUbergraph_GA_DanceGrenade_ALSyne
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DanceGrenade_ALSyne_C::ExecuteUbergraph_GA_DanceGrenade_ALSyne(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DanceGrenade_ALSyne_C", "ExecuteUbergraph_GA_DanceGrenade_ALSyne");

	Params::GA_DanceGrenade_ALSyne_C_ExecuteUbergraph_GA_DanceGrenade_ALSyne Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_DanceGrenade_ALSyne.GA_DanceGrenade_ALSyne_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_DanceGrenade_ALSyne_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DanceGrenade_ALSyne_C", "K2_OnEndAbility");

	Params::GA_DanceGrenade_ALSyne_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_DanceGrenade_ALSyne.GA_DanceGrenade_ALSyne_C.InvalidHandle_B5171FC24972C9187F9F1CA732D2527C
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayEffectRemovalInfo&GameplayEffectRemovalInfo                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_DanceGrenade_ALSyne_C::InvalidHandle_B5171FC24972C9187F9F1CA732D2527C(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DanceGrenade_ALSyne_C", "InvalidHandle_B5171FC24972C9187F9F1CA732D2527C");

	Params::GA_DanceGrenade_ALSyne_C_InvalidHandle_B5171FC24972C9187F9F1CA732D2527C Parms{};

	Parms.GameplayEffectRemovalInfo = std::move(GameplayEffectRemovalInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_DanceGrenade_ALSyne.GA_DanceGrenade_ALSyne_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_DanceGrenade_ALSyne_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DanceGrenade_ALSyne_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_DanceGrenade_ALSyne.GA_DanceGrenade_ALSyne_C.OnRemoved_B5171FC24972C9187F9F1CA732D2527C
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayEffectRemovalInfo&GameplayEffectRemovalInfo                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_DanceGrenade_ALSyne_C::OnRemoved_B5171FC24972C9187F9F1CA732D2527C(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DanceGrenade_ALSyne_C", "OnRemoved_B5171FC24972C9187F9F1CA732D2527C");

	Params::GA_DanceGrenade_ALSyne_C_OnRemoved_B5171FC24972C9187F9F1CA732D2527C Parms{};

	Parms.GameplayEffectRemovalInfo = std::move(GameplayEffectRemovalInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

