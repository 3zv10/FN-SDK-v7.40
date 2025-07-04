﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyQuestWidget

#include "Basic.hpp"

#include "DailyQuestWidget_classes.hpp"
#include "DailyQuestWidget_parameters.hpp"


namespace SDK
{

// Function DailyQuestWidget.DailyQuestWidget_C.SetQuestItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*                   Quest_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyQuestWidget_C::SetQuestItem(class UFortQuestItem* Quest_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyQuestWidget_C", "SetQuestItem");

	Params::DailyQuestWidget_C_SetQuestItem Parms{};

	Parms.Quest_0 = Quest_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DailyQuestWidget.DailyQuestWidget_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestWidget_C::UpdateProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyQuestWidget_C", "UpdateProgress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DailyQuestWidget.DailyQuestWidget_C.Completed State
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestWidget_C::Completed_State()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyQuestWidget_C", "Completed State");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DailyQuestWidget.DailyQuestWidget_C.Collect Anim
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestWidget_C::Collect_Anim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyQuestWidget_C", "Collect Anim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DailyQuestWidget.DailyQuestWidget_C.Entrance Anim
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestWidget_C::Entrance_Anim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyQuestWidget_C", "Entrance Anim");

	UObject::ProcessEvent(Func, nullptr);
}

}

