﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BGA_BotTurret_Parent

#include "Basic.hpp"

#include "B_BGA_BotTurret_Parent_classes.hpp"
#include "B_BGA_BotTurret_Parent_parameters.hpp"


namespace SDK
{

// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.ExecuteUbergraph_B_BGA_BotTurret_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_BotTurret_Parent_C::ExecuteUbergraph_B_BGA_BotTurret_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "ExecuteUbergraph_B_BGA_BotTurret_Parent");

	Params::B_BGA_BotTurret_Parent_C_ExecuteUbergraph_B_BGA_BotTurret_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BindOnDestroyed
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_BotTurret_Parent_C::BindOnDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "BindOnDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_BotTurret_Parent_C::Destroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "Destroyed");

	Params::B_BGA_BotTurret_Parent_C_Destroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.Ready
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_BotTurret_Parent_C::Ready()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "Ready");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.SetTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*                      Target_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_BotTurret_Parent_C::SetTarget(class AFortAIPawn* Target_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "SetTarget");

	Params::B_BGA_BotTurret_Parent_C_SetTarget Parms{};

	Parms.Target_0 = Target_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.PassBotInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   WarmupTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BotDuration                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FireRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Radius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RadiusDefault                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ExplosionUpgrade                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_BGA_BotTurret_Parent_C::PassBotInfo(float WarmupTime, float BotDuration, float FireRate, float Radius, float RadiusDefault, bool ExplosionUpgrade)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "PassBotInfo");

	Params::B_BGA_BotTurret_Parent_C_PassBotInfo Parms{};

	Parms.WarmupTime = WarmupTime;
	Parms.BotDuration = BotDuration;
	Parms.FireRate = FireRate;
	Parms.Radius = Radius;
	Parms.RadiusDefault = RadiusDefault;
	Parms.ExplosionUpgrade = ExplosionUpgrade;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_BGA_BotTurret_Parent_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.SetGunSpawnRotFromSocket
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             SocketName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   InVect                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_BotTurret_Parent_C::SetGunSpawnRotFromSocket(class FName SocketName, const struct FVector& InVect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "SetGunSpawnRotFromSocket");

	Params::B_BGA_BotTurret_Parent_C_SetGunSpawnRotFromSocket Parms{};

	Parms.SocketName = SocketName;
	Parms.InVect = std::move(InVect);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.LeftOrRightGunFired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   A                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_BotTurret_Parent_C::LeftOrRightGunFired(int32 A)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "LeftOrRightGunFired");

	Params::B_BGA_BotTurret_Parent_C_LeftOrRightGunFired Parms{};

	Parms.A = A;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.OnRep_BotData
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_BotTurret_Parent_C::OnRep_BotData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "OnRep_BotData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.GetPlayerPawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPlayerPawn**                 AsFort_Player_Pawn                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_BotTurret_Parent_C::GetPlayerPawn(class AFortPlayerPawn** AsFort_Player_Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "GetPlayerPawn");

	Params::B_BGA_BotTurret_Parent_C_GetPlayerPawn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AsFort_Player_Pawn != nullptr)
		*AsFort_Player_Pawn = Parms.AsFort_Player_Pawn;
}

}

