﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCL_Athena_Blade_Aura

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCL_Athena_Blade_Aura.GCL_Athena_Blade_Aura_C.ExecuteUbergraph_GCL_Athena_Blade_Aura
// 0x0270 (0x0270 - 0x0000)
struct GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable1;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget1;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters1;                          // 0x0020(0x00B8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents1;                  // 0x00D8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents1;                     // 0x00E8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x3];                                      // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable1;                   // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0118(0x00B8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;                   // 0x01D0(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;                      // 0x01E0(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           K2Node_Event_BurstCameraShakeInstance;             // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;                   // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0200(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena1;          // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_219[0x7];                                      // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;                           // 0x0220(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_Array_Get_Item1;                          // 0x0228(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue1;                 // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23A[0x2];                                      // 0x023A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x023C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x024C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x025C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura) == 0x000008, "Wrong alignment on GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura");
static_assert(sizeof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura) == 0x000270, "Wrong size on GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, EntryPoint) == 0x000000, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, Temp_int_Array_Index_Variable) == 0x000004, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, Temp_int_Array_Index_Variable1) == 0x000010, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::Temp_int_Array_Index_Variable1' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, K2Node_Event_MyTarget1) == 0x000018, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::K2Node_Event_MyTarget1' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, K2Node_Event_Parameters1) == 0x000020, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::K2Node_Event_Parameters1' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, K2Node_Event_ParticleComponents1) == 0x0000D8, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::K2Node_Event_ParticleComponents1' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, K2Node_Event_AudioComponents1) == 0x0000E8, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::K2Node_Event_AudioComponents1' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x0000F8, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, Temp_int_Loop_Counter_Variable1) == 0x000104, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::Temp_int_Loop_Counter_Variable1' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, CallFunc_Add_IntInt_ReturnValue1) == 0x000108, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::CallFunc_Add_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, K2Node_Event_MyTarget) == 0x000110, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, K2Node_Event_Parameters) == 0x000118, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, K2Node_Event_ParticleComponents) == 0x0001D0, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, K2Node_Event_AudioComponents) == 0x0001E0, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, K2Node_Event_BurstCameraShakeInstance) == 0x0001F0, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, K2Node_Event_BurstDecalInstance) == 0x0001F8, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, K2Node_CreateDelegate_OutputDelegate) == 0x000200, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, K2Node_DynamicCast_AsPlayer_Pawn_Athena1) == 0x000210, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::K2Node_DynamicCast_AsPlayer_Pawn_Athena1' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, K2Node_DynamicCast_bSuccess1) == 0x000218, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, CallFunc_Array_Get_Item) == 0x000220, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, CallFunc_Array_Get_Item1) == 0x000228, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::CallFunc_Array_Get_Item1' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, CallFunc_Array_Length_ReturnValue) == 0x000230, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, CallFunc_Array_Length_ReturnValue1) == 0x000234, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::CallFunc_Array_Length_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, CallFunc_Less_IntInt_ReturnValue) == 0x000238, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, CallFunc_Less_IntInt_ReturnValue1) == 0x000239, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::CallFunc_Less_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, K2Node_CreateDelegate_OutputDelegate1) == 0x00023C, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, K2Node_CreateDelegate_OutputDelegate2) == 0x00024C, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura, K2Node_CreateDelegate_OutputDelegate3) == 0x00025C, "Member 'GCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");

// Function GCL_Athena_Blade_Aura.GCL_Athena_Blade_Aura_C.OnRemoval
// 0x00F0 (0x00F0 - 0x0000)
struct GCL_Athena_Blade_Aura_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           BurstCameraShakeInstance;                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCL_Athena_Blade_Aura_C_OnRemoval) == 0x000008, "Wrong alignment on GCL_Athena_Blade_Aura_C_OnRemoval");
static_assert(sizeof(GCL_Athena_Blade_Aura_C_OnRemoval) == 0x0000F0, "Wrong size on GCL_Athena_Blade_Aura_C_OnRemoval");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCL_Athena_Blade_Aura_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_OnRemoval, Parameters) == 0x000008, "Member 'GCL_Athena_Blade_Aura_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_OnRemoval, ParticleComponents) == 0x0000C0, "Member 'GCL_Athena_Blade_Aura_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_OnRemoval, AudioComponents) == 0x0000D0, "Member 'GCL_Athena_Blade_Aura_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_OnRemoval, BurstCameraShakeInstance) == 0x0000E0, "Member 'GCL_Athena_Blade_Aura_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_OnRemoval, BurstDecalInstance) == 0x0000E8, "Member 'GCL_Athena_Blade_Aura_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

// Function GCL_Athena_Blade_Aura.GCL_Athena_Blade_Aura_C.OnLoopingStart
// 0x00E0 (0x00E0 - 0x0000)
struct GCL_Athena_Blade_Aura_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(GCL_Athena_Blade_Aura_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCL_Athena_Blade_Aura_C_OnLoopingStart");
static_assert(sizeof(GCL_Athena_Blade_Aura_C_OnLoopingStart) == 0x0000E0, "Wrong size on GCL_Athena_Blade_Aura_C_OnLoopingStart");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCL_Athena_Blade_Aura_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCL_Athena_Blade_Aura_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_OnLoopingStart, ParticleComponents) == 0x0000C0, "Member 'GCL_Athena_Blade_Aura_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCL_Athena_Blade_Aura_C_OnLoopingStart, AudioComponents) == 0x0000D0, "Member 'GCL_Athena_Blade_Aura_C_OnLoopingStart::AudioComponents' has a wrong offset!");

}

