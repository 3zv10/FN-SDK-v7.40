﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_GravitySphere

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GC_GravitySphere.GC_GravitySphere_C.ExecuteUbergraph_GC_GravitySphere
// 0x00D0 (0x00D0 - 0x0000)
struct GC_GravitySphere_C_ExecuteUbergraph_GC_GravitySphere final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameplayCueEvent                             K2Node_Event_EventType;                            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0018(0x00B8)(ConstParm, ContainsInstancedReference)
};
static_assert(alignof(GC_GravitySphere_C_ExecuteUbergraph_GC_GravitySphere) == 0x000008, "Wrong alignment on GC_GravitySphere_C_ExecuteUbergraph_GC_GravitySphere");
static_assert(sizeof(GC_GravitySphere_C_ExecuteUbergraph_GC_GravitySphere) == 0x0000D0, "Wrong size on GC_GravitySphere_C_ExecuteUbergraph_GC_GravitySphere");
static_assert(offsetof(GC_GravitySphere_C_ExecuteUbergraph_GC_GravitySphere, EntryPoint) == 0x000000, "Member 'GC_GravitySphere_C_ExecuteUbergraph_GC_GravitySphere::EntryPoint' has a wrong offset!");
static_assert(offsetof(GC_GravitySphere_C_ExecuteUbergraph_GC_GravitySphere, K2Node_Event_MyTarget) == 0x000008, "Member 'GC_GravitySphere_C_ExecuteUbergraph_GC_GravitySphere::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GC_GravitySphere_C_ExecuteUbergraph_GC_GravitySphere, K2Node_Event_EventType) == 0x000010, "Member 'GC_GravitySphere_C_ExecuteUbergraph_GC_GravitySphere::K2Node_Event_EventType' has a wrong offset!");
static_assert(offsetof(GC_GravitySphere_C_ExecuteUbergraph_GC_GravitySphere, K2Node_Event_Parameters) == 0x000018, "Member 'GC_GravitySphere_C_ExecuteUbergraph_GC_GravitySphere::K2Node_Event_Parameters' has a wrong offset!");

// Function GC_GravitySphere.GC_GravitySphere_C.K2_HandleGameplayCue
// 0x00C8 (0x00C8 - 0x0000)
struct GC_GravitySphere_C_K2_HandleGameplayCue final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameplayCueEvent                             EventType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 Parameters;                                        // 0x0010(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GC_GravitySphere_C_K2_HandleGameplayCue) == 0x000008, "Wrong alignment on GC_GravitySphere_C_K2_HandleGameplayCue");
static_assert(sizeof(GC_GravitySphere_C_K2_HandleGameplayCue) == 0x0000C8, "Wrong size on GC_GravitySphere_C_K2_HandleGameplayCue");
static_assert(offsetof(GC_GravitySphere_C_K2_HandleGameplayCue, MyTarget) == 0x000000, "Member 'GC_GravitySphere_C_K2_HandleGameplayCue::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_GravitySphere_C_K2_HandleGameplayCue, EventType) == 0x000008, "Member 'GC_GravitySphere_C_K2_HandleGameplayCue::EventType' has a wrong offset!");
static_assert(offsetof(GC_GravitySphere_C_K2_HandleGameplayCue, Parameters) == 0x000010, "Member 'GC_GravitySphere_C_K2_HandleGameplayCue::Parameters' has a wrong offset!");

// Function GC_GravitySphere.GC_GravitySphere_C.OnWhileActiveParticleSystemActivate
// 0x00D0 (0x00D0 - 0x0000)
struct GC_GravitySphere_C_OnWhileActiveParticleSystemActivate final
{
public:
	class UParticleSystemComponent*               WhileActiveParticleSysComponent;                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue1;        // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GC_GravitySphere_C_OnWhileActiveParticleSystemActivate) == 0x000008, "Wrong alignment on GC_GravitySphere_C_OnWhileActiveParticleSystemActivate");
static_assert(sizeof(GC_GravitySphere_C_OnWhileActiveParticleSystemActivate) == 0x0000D0, "Wrong size on GC_GravitySphere_C_OnWhileActiveParticleSystemActivate");
static_assert(offsetof(GC_GravitySphere_C_OnWhileActiveParticleSystemActivate, WhileActiveParticleSysComponent) == 0x000000, "Member 'GC_GravitySphere_C_OnWhileActiveParticleSystemActivate::WhileActiveParticleSysComponent' has a wrong offset!");
static_assert(offsetof(GC_GravitySphere_C_OnWhileActiveParticleSystemActivate, Parameters) == 0x000008, "Member 'GC_GravitySphere_C_OnWhileActiveParticleSystemActivate::Parameters' has a wrong offset!");
static_assert(offsetof(GC_GravitySphere_C_OnWhileActiveParticleSystemActivate, K2Node_DynamicCast_AsFort_Pawn) == 0x0000C0, "Member 'GC_GravitySphere_C_OnWhileActiveParticleSystemActivate::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GC_GravitySphere_C_OnWhileActiveParticleSystemActivate, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'GC_GravitySphere_C_OnWhileActiveParticleSystemActivate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GC_GravitySphere_C_OnWhileActiveParticleSystemActivate, CallFunc_K2_AttachToComponent_ReturnValue) == 0x0000C9, "Member 'GC_GravitySphere_C_OnWhileActiveParticleSystemActivate::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_GravitySphere_C_OnWhileActiveParticleSystemActivate, CallFunc_K2_AttachToComponent_ReturnValue1) == 0x0000CA, "Member 'GC_GravitySphere_C_OnWhileActiveParticleSystemActivate::CallFunc_K2_AttachToComponent_ReturnValue1' has a wrong offset!");

// Function GC_GravitySphere.GC_GravitySphere_C.OnWhileActiveParticleSystemDeactivate
// 0x00C0 (0x00C0 - 0x0000)
struct GC_GravitySphere_C_OnWhileActiveParticleSystemDeactivate final
{
public:
	class UParticleSystemComponent*               WhileActiveParticleSysComponent;                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GC_GravitySphere_C_OnWhileActiveParticleSystemDeactivate) == 0x000008, "Wrong alignment on GC_GravitySphere_C_OnWhileActiveParticleSystemDeactivate");
static_assert(sizeof(GC_GravitySphere_C_OnWhileActiveParticleSystemDeactivate) == 0x0000C0, "Wrong size on GC_GravitySphere_C_OnWhileActiveParticleSystemDeactivate");
static_assert(offsetof(GC_GravitySphere_C_OnWhileActiveParticleSystemDeactivate, WhileActiveParticleSysComponent) == 0x000000, "Member 'GC_GravitySphere_C_OnWhileActiveParticleSystemDeactivate::WhileActiveParticleSysComponent' has a wrong offset!");
static_assert(offsetof(GC_GravitySphere_C_OnWhileActiveParticleSystemDeactivate, Parameters) == 0x000008, "Member 'GC_GravitySphere_C_OnWhileActiveParticleSystemDeactivate::Parameters' has a wrong offset!");

}

