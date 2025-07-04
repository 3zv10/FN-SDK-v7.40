﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Outlander_GroundWave_Explosion

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_Outlander_GroundWave_Explosion.GCN_Outlander_GroundWave_Explosion_C.OnExecute
// 0x01F0 (0x01F0 - 0x0000)
struct GCN_Outlander_GroundWave_Explosion_C_OnExecute final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D5[0x3];                                       // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OnExecute_ReturnValue;                    // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x3];                                       // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Temp_struct_Variable;                              // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Temp_struct_Variable1;                             // 0x00FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Temp_struct_Variable2;                             // 0x0108(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Temp_struct_Variable3;                             // 0x0114(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable1;                              // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable2;                              // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue;             // 0x0128(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable3;                              // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0138(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable1;                                // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue1;            // 0x0148(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue1;       // 0x0158(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0164(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0170(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_17D[0x3];                                      // 0x017D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue1;            // 0x0180(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue1;               // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Select_Default;                             // 0x0198(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable2;                                // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue2;       // 0x01A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue2;            // 0x01B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select1_Default;                            // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x01C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D4[0x4];                                      // 0x01D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        CallFunc_SpawnDecalAtLocation_ReturnValue;         // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Outlander_GroundWave_Explosion_C_OnExecute) == 0x000008, "Wrong alignment on GCN_Outlander_GroundWave_Explosion_C_OnExecute");
static_assert(sizeof(GCN_Outlander_GroundWave_Explosion_C_OnExecute) == 0x0001F0, "Wrong size on GCN_Outlander_GroundWave_Explosion_C_OnExecute");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, MyTarget) == 0x000000, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, Parameters) == 0x000008, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, ReturnValue) == 0x0000C0, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, Temp_float_Variable) == 0x0000C4, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_MakeRotFromX_ReturnValue) == 0x0000C8, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000D4, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_BreakRotator_Roll) == 0x0000D8, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_BreakRotator_Pitch) == 0x0000DC, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_BreakRotator_Yaw) == 0x0000E0, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000E4, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_OnExecute_ReturnValue) == 0x0000E8, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_OnExecute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, Temp_int_Variable) == 0x0000EC, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, Temp_struct_Variable) == 0x0000F0, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, Temp_struct_Variable1) == 0x0000FC, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, Temp_struct_Variable2) == 0x000108, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, Temp_struct_Variable3) == 0x000114, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::Temp_struct_Variable3' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, Temp_float_Variable1) == 0x000120, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::Temp_float_Variable1' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, Temp_float_Variable2) == 0x000124, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::Temp_float_Variable2' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_RandomUnitVector_ReturnValue) == 0x000128, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_RandomUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, Temp_float_Variable3) == 0x000134, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::Temp_float_Variable3' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000138, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, Temp_int_Variable1) == 0x000144, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::Temp_int_Variable1' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_RandomUnitVector_ReturnValue1) == 0x000148, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_RandomUnitVector_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000154, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_Multiply_VectorVector_ReturnValue1) == 0x000158, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_Multiply_VectorVector_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000164, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_Add_VectorVector_ReturnValue) == 0x000170, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00017C, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_Add_VectorVector_ReturnValue1) == 0x000180, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_Add_VectorVector_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_Add_IntInt_ReturnValue) == 0x00018C, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_RandomInteger_ReturnValue) == 0x000190, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_RandomInteger_ReturnValue1) == 0x000194, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_RandomInteger_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, K2Node_Select_Default) == 0x000198, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, Temp_int_Variable2) == 0x0001A4, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::Temp_int_Variable2' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_Multiply_VectorVector_ReturnValue2) == 0x0001A8, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_Multiply_VectorVector_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_Add_VectorVector_ReturnValue2) == 0x0001B4, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_Add_VectorVector_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, K2Node_Select1_Default) == 0x0001C0, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::K2Node_Select1_Default' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_Add_FloatFloat_ReturnValue) == 0x0001C4, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_MakeRotator_ReturnValue) == 0x0001C8, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x0001D8, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_SpawnDecalAtLocation_ReturnValue) == 0x0001E0, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_SpawnDecalAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Outlander_GroundWave_Explosion_C_OnExecute, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x0001E8, "Member 'GCN_Outlander_GroundWave_Explosion_C_OnExecute::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");

}

