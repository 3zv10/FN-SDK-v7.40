﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Assault_InfantryRifle_Athena

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function B_Assault_InfantryRifle_Athena.B_Assault_InfantryRifle_Athena_C.ExecuteUbergraph_B_Assault_InfantryRifle_Athena
// 0x0090 (0x0090 - 0x0000)
struct B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName EventName, float EmitterTime, int32 ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, class FName BoneName, class UPhysicalMaterial* PhysMat)> K2Node_CreateDelegate_OutputDelegate; // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_EventName;                      // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_EmitterTime;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ParticleTime;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Location;                       // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Velocity;                       // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Direction;                      // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Normal;                         // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_BoneName;                       // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      K2Node_CustomEvent_PhysMat;                        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLocalMagazineAmmoCount_ReturnValue;    // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bPersistentFire;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bSecondaryFire;                       // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortReloadFXState                            K2Node_Event_ReloadStage;                          // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena) == 0x000008, "Wrong alignment on B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena");
static_assert(sizeof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena) == 0x000090, "Wrong size on B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, EntryPoint) == 0x000000, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, CallFunc_IsDedicatedServer_ReturnValue) == 0x000005, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000018, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, Temp_bool_IsClosed_Variable) == 0x000020, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, K2Node_CustomEvent_EventName) == 0x000024, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::K2Node_CustomEvent_EventName' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, K2Node_CustomEvent_EmitterTime) == 0x00002C, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::K2Node_CustomEvent_EmitterTime' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, K2Node_CustomEvent_ParticleTime) == 0x000030, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::K2Node_CustomEvent_ParticleTime' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, K2Node_CustomEvent_Location) == 0x000034, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::K2Node_CustomEvent_Location' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, K2Node_CustomEvent_Velocity) == 0x000040, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::K2Node_CustomEvent_Velocity' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, K2Node_CustomEvent_Direction) == 0x00004C, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::K2Node_CustomEvent_Direction' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, K2Node_CustomEvent_Normal) == 0x000058, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::K2Node_CustomEvent_Normal' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, K2Node_CustomEvent_BoneName) == 0x000064, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::K2Node_CustomEvent_BoneName' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, K2Node_CustomEvent_PhysMat) == 0x000070, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::K2Node_CustomEvent_PhysMat' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000078, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, CallFunc_Not_PreBool_ReturnValue) == 0x000080, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, CallFunc_GetLocalMagazineAmmoCount_ReturnValue) == 0x000084, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::CallFunc_GetLocalMagazineAmmoCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, K2Node_Event_bPersistentFire) == 0x000088, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::K2Node_Event_bPersistentFire' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, K2Node_Event_bSecondaryFire) == 0x000089, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::K2Node_Event_bSecondaryFire' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, CallFunc_Greater_IntInt_ReturnValue) == 0x00008A, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00008B, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena, K2Node_Event_ReloadStage) == 0x00008C, "Member 'B_Assault_InfantryRifle_Athena_C_ExecuteUbergraph_B_Assault_InfantryRifle_Athena::K2Node_Event_ReloadStage' has a wrong offset!");

// Function B_Assault_InfantryRifle_Athena.B_Assault_InfantryRifle_Athena_C.OnPlayReloadFX
// 0x0001 (0x0001 - 0x0000)
struct B_Assault_InfantryRifle_Athena_C_OnPlayReloadFX final
{
public:
	EFortReloadFXState                            ReloadStage;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Assault_InfantryRifle_Athena_C_OnPlayReloadFX) == 0x000001, "Wrong alignment on B_Assault_InfantryRifle_Athena_C_OnPlayReloadFX");
static_assert(sizeof(B_Assault_InfantryRifle_Athena_C_OnPlayReloadFX) == 0x000001, "Wrong size on B_Assault_InfantryRifle_Athena_C_OnPlayReloadFX");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_OnPlayReloadFX, ReloadStage) == 0x000000, "Member 'B_Assault_InfantryRifle_Athena_C_OnPlayReloadFX::ReloadStage' has a wrong offset!");

// Function B_Assault_InfantryRifle_Athena.B_Assault_InfantryRifle_Athena_C.OnPlayWeaponFireFX
// 0x0002 (0x0002 - 0x0000)
struct B_Assault_InfantryRifle_Athena_C_OnPlayWeaponFireFX final
{
public:
	bool                                          bPersistentFire;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bSecondaryFire;                                    // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_Assault_InfantryRifle_Athena_C_OnPlayWeaponFireFX) == 0x000001, "Wrong alignment on B_Assault_InfantryRifle_Athena_C_OnPlayWeaponFireFX");
static_assert(sizeof(B_Assault_InfantryRifle_Athena_C_OnPlayWeaponFireFX) == 0x000002, "Wrong size on B_Assault_InfantryRifle_Athena_C_OnPlayWeaponFireFX");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_OnPlayWeaponFireFX, bPersistentFire) == 0x000000, "Member 'B_Assault_InfantryRifle_Athena_C_OnPlayWeaponFireFX::bPersistentFire' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_OnPlayWeaponFireFX, bSecondaryFire) == 0x000001, "Member 'B_Assault_InfantryRifle_Athena_C_OnPlayWeaponFireFX::bSecondaryFire' has a wrong offset!");

// Function B_Assault_InfantryRifle_Athena.B_Assault_InfantryRifle_Athena_C.Collide
// 0x0050 (0x0050 - 0x0000)
struct B_Assault_InfantryRifle_Athena_C_Collide final
{
public:
	class FName                                   EventName;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EmitterTime;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ParticleTime;                                      // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Velocity;                                          // 0x001C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Direction;                                         // 0x0028(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Normal;                                            // 0x0034(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BoneName;                                          // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      PhysMat;                                           // 0x0048(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Assault_InfantryRifle_Athena_C_Collide) == 0x000008, "Wrong alignment on B_Assault_InfantryRifle_Athena_C_Collide");
static_assert(sizeof(B_Assault_InfantryRifle_Athena_C_Collide) == 0x000050, "Wrong size on B_Assault_InfantryRifle_Athena_C_Collide");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_Collide, EventName) == 0x000000, "Member 'B_Assault_InfantryRifle_Athena_C_Collide::EventName' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_Collide, EmitterTime) == 0x000008, "Member 'B_Assault_InfantryRifle_Athena_C_Collide::EmitterTime' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_Collide, ParticleTime) == 0x00000C, "Member 'B_Assault_InfantryRifle_Athena_C_Collide::ParticleTime' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_Collide, Location) == 0x000010, "Member 'B_Assault_InfantryRifle_Athena_C_Collide::Location' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_Collide, Velocity) == 0x00001C, "Member 'B_Assault_InfantryRifle_Athena_C_Collide::Velocity' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_Collide, Direction) == 0x000028, "Member 'B_Assault_InfantryRifle_Athena_C_Collide::Direction' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_Collide, Normal) == 0x000034, "Member 'B_Assault_InfantryRifle_Athena_C_Collide::Normal' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_Collide, BoneName) == 0x000040, "Member 'B_Assault_InfantryRifle_Athena_C_Collide::BoneName' has a wrong offset!");
static_assert(offsetof(B_Assault_InfantryRifle_Athena_C_Collide, PhysMat) == 0x000048, "Member 'B_Assault_InfantryRifle_Athena_C_Collide::PhysMat' has a wrong offset!");

}

