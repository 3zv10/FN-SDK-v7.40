﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Tunneler_TeleportNPC_TunnelSegment

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCN_Tunneler_TeleportNPC_TunnelSegment.GCN_Tunneler_TeleportNPC_TunnelSegment_C.ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment
// 0x0220 (0x0220 - 0x0000)
struct GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameplayCueEvent                             K2Node_Event_EventType;                            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0018(0x00B8)(ConstParm, ContainsInstancedReference)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x00D0(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	float                                         CallFunc_BreakVector_X;                            // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_BoxTraceSingle_OutHit;                    // 0x0110(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BoxTraceSingle_ReturnValue;               // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x019A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19B[0x1];                                      // 0x019B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D4[0x4];                                      // 0x01D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0200(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x020C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0218(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment) == 0x000008, "Wrong alignment on GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment");
static_assert(sizeof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment) == 0x000220, "Wrong size on GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, EntryPoint) == 0x000000, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, K2Node_Event_MyTarget) == 0x000008, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, K2Node_Event_EventType) == 0x000010, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::K2Node_Event_EventType' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, K2Node_Event_Parameters) == 0x000018, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, Temp_object_Variable) == 0x0000D0, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_BreakVector_X) == 0x0000E0, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_BreakVector_Y) == 0x0000E4, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_BreakVector_Z) == 0x0000E8, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_MakeVector_ReturnValue) == 0x0000EC, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_Add_VectorVector_ReturnValue) == 0x0000F8, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000104, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_BoxTraceSingle_OutHit) == 0x000110, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_BoxTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_BoxTraceSingle_ReturnValue) == 0x000198, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_BoxTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_BreakHitResult_bBlockingHit) == 0x000199, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_BreakHitResult_bInitialOverlap) == 0x00019A, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_BreakHitResult_Time) == 0x00019C, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_BreakHitResult_Distance) == 0x0001A0, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_BreakHitResult_Location) == 0x0001A4, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_BreakHitResult_ImpactPoint) == 0x0001B0, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_BreakHitResult_Normal) == 0x0001BC, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_BreakHitResult_ImpactNormal) == 0x0001C8, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_BreakHitResult_PhysMat) == 0x0001D8, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_BreakHitResult_HitActor) == 0x0001E0, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_BreakHitResult_HitComponent) == 0x0001E8, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_BreakHitResult_HitBoneName) == 0x0001F0, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_BreakHitResult_HitItem) == 0x0001F8, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_BreakHitResult_FaceIndex) == 0x0001FC, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_BreakHitResult_TraceStart) == 0x000200, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_BreakHitResult_TraceEnd) == 0x00020C, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000218, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");

// Function GCN_Tunneler_TeleportNPC_TunnelSegment.GCN_Tunneler_TeleportNPC_TunnelSegment_C.K2_HandleGameplayCue
// 0x00C8 (0x00C8 - 0x0000)
struct GCN_Tunneler_TeleportNPC_TunnelSegment_C_K2_HandleGameplayCue final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameplayCueEvent                             EventType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 Parameters;                                        // 0x0010(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_K2_HandleGameplayCue) == 0x000008, "Wrong alignment on GCN_Tunneler_TeleportNPC_TunnelSegment_C_K2_HandleGameplayCue");
static_assert(sizeof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_K2_HandleGameplayCue) == 0x0000C8, "Wrong size on GCN_Tunneler_TeleportNPC_TunnelSegment_C_K2_HandleGameplayCue");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_K2_HandleGameplayCue, MyTarget) == 0x000000, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_K2_HandleGameplayCue::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_K2_HandleGameplayCue, EventType) == 0x000008, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_K2_HandleGameplayCue::EventType' has a wrong offset!");
static_assert(offsetof(GCN_Tunneler_TeleportNPC_TunnelSegment_C_K2_HandleGameplayCue, Parameters) == 0x000010, "Member 'GCN_Tunneler_TeleportNPC_TunnelSegment_C_K2_HandleGameplayCue::Parameters' has a wrong offset!");

}

