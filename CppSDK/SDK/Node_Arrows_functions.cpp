﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Node_Arrows

#include "Basic.hpp"

#include "Node_Arrows_classes.hpp"
#include "Node_Arrows_parameters.hpp"


namespace SDK
{

// Function Node_Arrows.Node_Arrows_C.ExecuteUbergraph_Node_Arrows
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNode_Arrows_C::ExecuteUbergraph_Node_Arrows(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Node_Arrows_C", "ExecuteUbergraph_Node_Arrows");

	Params::Node_Arrows_C_ExecuteUbergraph_Node_Arrows Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Node_Arrows.Node_Arrows_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNode_Arrows_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Node_Arrows_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Node_Arrows.Node_Arrows_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNode_Arrows_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Node_Arrows_C", "PreConstruct");

	Params::Node_Arrows_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Node_Arrows.Node_Arrows_C.ApplyOverideColor
// (Public, BlueprintCallable, BlueprintEvent)

void UNode_Arrows_C::ApplyOverideColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Node_Arrows_C", "ApplyOverideColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Node_Arrows.Node_Arrows_C.OverideColorOnBrush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           InBrush                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNode_Arrows_C::OverideColorOnBrush(class UImage* InBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Node_Arrows_C", "OverideColorOnBrush");

	Params::Node_Arrows_C_OverideColorOnBrush Parms{};

	Parms.InBrush = InBrush;

	UObject::ProcessEvent(Func, &Parms);
}

}

