﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Melee_Edged_Sword_LeapAttack_Impact

#include "Basic.hpp"

#include "GC_Melee_Edged_Sword_LeapAttack_Impact_classes.hpp"
#include "GC_Melee_Edged_Sword_LeapAttack_Impact_parameters.hpp"


namespace SDK
{

// Function GC_Melee_Edged_Sword_LeapAttack_Impact.GC_Melee_Edged_Sword_LeapAttack_Impact_C.OnExecute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGC_Melee_Edged_Sword_LeapAttack_Impact_C::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Melee_Edged_Sword_LeapAttack_Impact_C", "OnExecute");

	Params::GC_Melee_Edged_Sword_LeapAttack_Impact_C_OnExecute Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

