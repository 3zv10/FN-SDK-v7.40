﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_FireworksMortar_Rocket

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function B_Prj_FireworksMortar_Rocket.B_Prj_FireworksMortar_Rocket_C.ExecuteUbergraph_B_Prj_FireworksMortar_Rocket
// 0x0188 (0x0188 - 0x0000)
struct B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_Event_HitActors;                            // 0x0008(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                     K2Node_Event_HitResults;                           // 0x0018(0x0010)(ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0028(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CE[0x2];                                       // 0x00CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x00FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x013C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0148(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_154[0x4];                                      // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue1;         // 0x0160(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EFortTeamAffiliation>                  K2Node_MakeArray_Array;                            // 0x0170(0x0010)(ZeroConstructor, ReferenceParm)
	uint8                                         CallFunc_GetActorTeam_ReturnValue;                 // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket) == 0x000008, "Wrong alignment on B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket");
static_assert(sizeof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket) == 0x000188, "Wrong size on B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, EntryPoint) == 0x000000, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, K2Node_Event_HitActors) == 0x000008, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::K2Node_Event_HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, K2Node_Event_HitResults) == 0x000018, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::K2Node_Event_HitResults' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, K2Node_Event_Hit) == 0x000028, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_RandomFloatInRange_ReturnValue) == 0x0000B0, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_SpawnSoundAttached_ReturnValue) == 0x0000B8, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000C0, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_BreakHitResult_bBlockingHit) == 0x0000CC, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000CD, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_BreakHitResult_Time) == 0x0000D0, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_BreakHitResult_Distance) == 0x0000D4, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_BreakHitResult_Location) == 0x0000D8, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_BreakHitResult_ImpactPoint) == 0x0000E4, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_BreakHitResult_Normal) == 0x0000F0, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_BreakHitResult_ImpactNormal) == 0x0000FC, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_BreakHitResult_PhysMat) == 0x000108, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_BreakHitResult_HitActor) == 0x000110, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_BreakHitResult_HitComponent) == 0x000118, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_BreakHitResult_HitBoneName) == 0x000120, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_BreakHitResult_HitItem) == 0x000128, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_BreakHitResult_FaceIndex) == 0x00012C, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_BreakHitResult_TraceStart) == 0x000130, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_BreakHitResult_TraceEnd) == 0x00013C, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000148, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000158, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_K2_GetActorLocation_ReturnValue1) == 0x000160, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_K2_GetActorLocation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, K2Node_MakeArray_Array) == 0x000170, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket, CallFunc_GetActorTeam_ReturnValue) == 0x000180, "Member 'B_Prj_FireworksMortar_Rocket_C_ExecuteUbergraph_B_Prj_FireworksMortar_Rocket::CallFunc_GetActorTeam_ReturnValue' has a wrong offset!");

// Function B_Prj_FireworksMortar_Rocket.B_Prj_FireworksMortar_Rocket_C.OnExploded
// 0x0020 (0x0020 - 0x0000)
struct B_Prj_FireworksMortar_Rocket_C_OnExploded final
{
public:
	TArray<class AActor*>                         HitActors;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                     HitResults;                                        // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(B_Prj_FireworksMortar_Rocket_C_OnExploded) == 0x000008, "Wrong alignment on B_Prj_FireworksMortar_Rocket_C_OnExploded");
static_assert(sizeof(B_Prj_FireworksMortar_Rocket_C_OnExploded) == 0x000020, "Wrong size on B_Prj_FireworksMortar_Rocket_C_OnExploded");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_OnExploded, HitActors) == 0x000000, "Member 'B_Prj_FireworksMortar_Rocket_C_OnExploded::HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_OnExploded, HitResults) == 0x000010, "Member 'B_Prj_FireworksMortar_Rocket_C_OnExploded::HitResults' has a wrong offset!");

// Function B_Prj_FireworksMortar_Rocket.B_Prj_FireworksMortar_Rocket_C.OnBounce
// 0x0088 (0x0088 - 0x0000)
struct B_Prj_FireworksMortar_Rocket_C_OnBounce final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(B_Prj_FireworksMortar_Rocket_C_OnBounce) == 0x000004, "Wrong alignment on B_Prj_FireworksMortar_Rocket_C_OnBounce");
static_assert(sizeof(B_Prj_FireworksMortar_Rocket_C_OnBounce) == 0x000088, "Wrong size on B_Prj_FireworksMortar_Rocket_C_OnBounce");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_OnBounce, Hit) == 0x000000, "Member 'B_Prj_FireworksMortar_Rocket_C_OnBounce::Hit' has a wrong offset!");

// Function B_Prj_FireworksMortar_Rocket.B_Prj_FireworksMortar_Rocket_C.UserConstructionScript
// 0x0038 (0x0038 - 0x0000)
struct B_Prj_FireworksMortar_Rocket_C_UserConstructionScript final
{
public:
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentScale_ReturnValue;         // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Prj_FireworksMortar_Rocket_C_UserConstructionScript) == 0x000008, "Wrong alignment on B_Prj_FireworksMortar_Rocket_C_UserConstructionScript");
static_assert(sizeof(B_Prj_FireworksMortar_Rocket_C_UserConstructionScript) == 0x000038, "Wrong size on B_Prj_FireworksMortar_Rocket_C_UserConstructionScript");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_UserConstructionScript, CallFunc_RandomInteger_ReturnValue) == 0x000000, "Member 'B_Prj_FireworksMortar_Rocket_C_UserConstructionScript::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_UserConstructionScript, CallFunc_RandomFloatInRange_ReturnValue) == 0x000004, "Member 'B_Prj_FireworksMortar_Rocket_C_UserConstructionScript::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_UserConstructionScript, CallFunc_Lerp_ReturnValue) == 0x000008, "Member 'B_Prj_FireworksMortar_Rocket_C_UserConstructionScript::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_UserConstructionScript, CallFunc_MakeVector_ReturnValue) == 0x00000C, "Member 'B_Prj_FireworksMortar_Rocket_C_UserConstructionScript::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_UserConstructionScript, CallFunc_K2_GetComponentScale_ReturnValue) == 0x000018, "Member 'B_Prj_FireworksMortar_Rocket_C_UserConstructionScript::CallFunc_K2_GetComponentScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_UserConstructionScript, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000024, "Member 'B_Prj_FireworksMortar_Rocket_C_UserConstructionScript::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_FireworksMortar_Rocket_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000030, "Member 'B_Prj_FireworksMortar_Rocket_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}

