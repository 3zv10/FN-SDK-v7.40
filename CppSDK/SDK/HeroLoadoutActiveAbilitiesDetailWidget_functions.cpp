﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroLoadoutActiveAbilitiesDetailWidget

#include "Basic.hpp"

#include "HeroLoadoutActiveAbilitiesDetailWidget_classes.hpp"
#include "HeroLoadoutActiveAbilitiesDetailWidget_parameters.hpp"


namespace SDK
{

// Function HeroLoadoutActiveAbilitiesDetailWidget.HeroLoadoutActiveAbilitiesDetailWidget_C.ExecuteUbergraph_HeroLoadoutActiveAbilitiesDetailWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutActiveAbilitiesDetailWidget_C::ExecuteUbergraph_HeroLoadoutActiveAbilitiesDetailWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutActiveAbilitiesDetailWidget_C", "ExecuteUbergraph_HeroLoadoutActiveAbilitiesDetailWidget");

	Params::HeroLoadoutActiveAbilitiesDetailWidget_C_ExecuteUbergraph_HeroLoadoutActiveAbilitiesDetailWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroLoadoutActiveAbilitiesDetailWidget.HeroLoadoutActiveAbilitiesDetailWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHeroLoadoutActiveAbilitiesDetailWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutActiveAbilitiesDetailWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroLoadoutActiveAbilitiesDetailWidget.HeroLoadoutActiveAbilitiesDetailWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroLoadoutActiveAbilitiesDetailWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutActiveAbilitiesDetailWidget_C", "PreConstruct");

	Params::HeroLoadoutActiveAbilitiesDetailWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroLoadoutActiveAbilitiesDetailWidget.HeroLoadoutActiveAbilitiesDetailWidget_C.HandleItemToDetailChangedBP
// (Event, Protected, BlueprintEvent)

void UHeroLoadoutActiveAbilitiesDetailWidget_C::HandleItemToDetailChangedBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutActiveAbilitiesDetailWidget_C", "HandleItemToDetailChangedBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroLoadoutActiveAbilitiesDetailWidget.HeroLoadoutActiveAbilitiesDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UHeroLoadoutActiveAbilitiesDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutActiveAbilitiesDetailWidget_C", "HandlePostDifferentItemToDetailSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroLoadoutActiveAbilitiesDetailWidget.HeroLoadoutActiveAbilitiesDetailWidget_C.UpdateFromItem
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutActiveAbilitiesDetailWidget_C::UpdateFromItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutActiveAbilitiesDetailWidget_C", "UpdateFromItem");

	UObject::ProcessEvent(Func, nullptr);
}

}

