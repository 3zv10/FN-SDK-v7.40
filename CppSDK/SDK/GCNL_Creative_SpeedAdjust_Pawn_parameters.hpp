﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Creative_SpeedAdjust_Pawn

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCNL_Creative_SpeedAdjust_Pawn.GCNL_Creative_SpeedAdjust_Pawn_C.ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn
// 0x02B0 (0x02B0 - 0x0000)
struct GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable1;                               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters1;                          // 0x0018(0x00B8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents1;                  // 0x00D0(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents1;                     // 0x00E0(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           K2Node_Event_BurstCameraShakeInstance1;            // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            K2Node_Event_BurstDecalInstance1;                  // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0108(0x00B8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;                   // 0x01C0(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;                      // 0x01D0(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           K2Node_Event_BurstCameraShakeInstance;             // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;                   // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue1;           // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x01F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F3[0x5];                                      // 0x01F3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_201[0x7];                                      // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn1;            // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable2;                               // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_212[0x2];                                      // 0x0212(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;                           // 0x0218(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_229[0x7];                                      // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Temp_object_Variable;                              // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Temp_object_Variable1;                             // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable3;                               // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_241[0x7];                                      // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Temp_object_Variable2;                             // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        K2Node_Select_Default;                             // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0258(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue1;              // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue2;              // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_262[0x6];                                      // 0x0262(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             K2Node_Select1_Default;                            // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             K2Node_Select2_Default;                            // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0278(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Temp_object_Variable3;                             // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue1;          // 0x0288(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        K2Node_Select3_Default;                            // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue1;        // 0x0298(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue2;        // 0x02A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue1;                   // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn) == 0x000008, "Wrong alignment on GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn");
static_assert(sizeof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn) == 0x0002B0, "Wrong size on GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, EntryPoint) == 0x000000, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, Temp_bool_Variable) == 0x000004, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, Temp_bool_Variable1) == 0x000005, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, Temp_int_Array_Index_Variable) == 0x000008, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, Temp_bool_IsClosed_Variable) == 0x00000C, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, Temp_bool_Has_Been_Initd_Variable) == 0x00000D, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, K2Node_Event_MyTarget1) == 0x000010, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::K2Node_Event_MyTarget1' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, K2Node_Event_Parameters1) == 0x000018, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::K2Node_Event_Parameters1' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, K2Node_Event_ParticleComponents1) == 0x0000D0, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::K2Node_Event_ParticleComponents1' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, K2Node_Event_AudioComponents1) == 0x0000E0, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::K2Node_Event_AudioComponents1' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, K2Node_Event_BurstCameraShakeInstance1) == 0x0000F0, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::K2Node_Event_BurstCameraShakeInstance1' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, K2Node_Event_BurstDecalInstance1) == 0x0000F8, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::K2Node_Event_BurstDecalInstance1' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, K2Node_Event_MyTarget) == 0x000100, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, K2Node_Event_Parameters) == 0x000108, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, K2Node_Event_ParticleComponents) == 0x0001C0, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, K2Node_Event_AudioComponents) == 0x0001D0, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, K2Node_Event_BurstCameraShakeInstance) == 0x0001E0, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, K2Node_Event_BurstDecalInstance) == 0x0001E8, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001F0, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, CallFunc_EqualEqual_IntInt_ReturnValue1) == 0x0001F1, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::CallFunc_EqualEqual_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, CallFunc_Greater_IntInt_ReturnValue) == 0x0001F2, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0001F8, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, K2Node_DynamicCast_bSuccess) == 0x000200, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, K2Node_DynamicCast_AsFort_Player_Pawn1) == 0x000208, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::K2Node_DynamicCast_AsFort_Player_Pawn1' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, K2Node_DynamicCast_bSuccess1) == 0x000210, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, Temp_bool_Variable2) == 0x000211, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, Temp_int_Loop_Counter_Variable) == 0x000214, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, CallFunc_Array_Get_Item) == 0x000218, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, CallFunc_Add_IntInt_ReturnValue) == 0x000220, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, CallFunc_Array_Length_ReturnValue) == 0x000224, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, CallFunc_Less_IntInt_ReturnValue) == 0x000228, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, Temp_object_Variable) == 0x000230, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, Temp_object_Variable1) == 0x000238, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::Temp_object_Variable1' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, Temp_bool_Variable3) == 0x000240, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::Temp_bool_Variable3' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, Temp_object_Variable2) == 0x000248, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::Temp_object_Variable2' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, K2Node_Select_Default) == 0x000250, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000258, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, CallFunc_Greater_IntInt_ReturnValue1) == 0x000260, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::CallFunc_Greater_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, CallFunc_Greater_IntInt_ReturnValue2) == 0x000261, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::CallFunc_Greater_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, K2Node_Select1_Default) == 0x000268, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::K2Node_Select1_Default' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, K2Node_Select2_Default) == 0x000270, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000278, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, Temp_object_Variable3) == 0x000280, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::Temp_object_Variable3' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, CallFunc_SpawnSoundAttached_ReturnValue1) == 0x000288, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::CallFunc_SpawnSoundAttached_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, K2Node_Select3_Default) == 0x000290, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::K2Node_Select3_Default' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, CallFunc_SpawnEmitterAttached_ReturnValue1) == 0x000298, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::CallFunc_SpawnEmitterAttached_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, CallFunc_SpawnEmitterAttached_ReturnValue2) == 0x0002A0, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::CallFunc_SpawnEmitterAttached_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, CallFunc_Array_Add_ReturnValue) == 0x0002A8, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn, CallFunc_Array_Add_ReturnValue1) == 0x0002AC, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Pawn::CallFunc_Array_Add_ReturnValue1' has a wrong offset!");

// Function GCNL_Creative_SpeedAdjust_Pawn.GCNL_Creative_SpeedAdjust_Pawn_C.OnApplication
// 0x00F0 (0x00F0 - 0x0000)
struct GCNL_Creative_SpeedAdjust_Pawn_C_OnApplication final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           BurstCameraShakeInstance;                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNL_Creative_SpeedAdjust_Pawn_C_OnApplication) == 0x000008, "Wrong alignment on GCNL_Creative_SpeedAdjust_Pawn_C_OnApplication");
static_assert(sizeof(GCNL_Creative_SpeedAdjust_Pawn_C_OnApplication) == 0x0000F0, "Wrong size on GCNL_Creative_SpeedAdjust_Pawn_C_OnApplication");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_OnApplication, MyTarget) == 0x000000, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_OnApplication::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_OnApplication, Parameters) == 0x000008, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_OnApplication::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_OnApplication, ParticleComponents) == 0x0000C0, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_OnApplication::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_OnApplication, AudioComponents) == 0x0000D0, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_OnApplication::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_OnApplication, BurstCameraShakeInstance) == 0x0000E0, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_OnApplication::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_OnApplication, BurstDecalInstance) == 0x0000E8, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_OnApplication::BurstDecalInstance' has a wrong offset!");

// Function GCNL_Creative_SpeedAdjust_Pawn.GCNL_Creative_SpeedAdjust_Pawn_C.OnRemoval
// 0x00F0 (0x00F0 - 0x0000)
struct GCNL_Creative_SpeedAdjust_Pawn_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           BurstCameraShakeInstance;                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNL_Creative_SpeedAdjust_Pawn_C_OnRemoval) == 0x000008, "Wrong alignment on GCNL_Creative_SpeedAdjust_Pawn_C_OnRemoval");
static_assert(sizeof(GCNL_Creative_SpeedAdjust_Pawn_C_OnRemoval) == 0x0000F0, "Wrong size on GCNL_Creative_SpeedAdjust_Pawn_C_OnRemoval");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_OnRemoval, Parameters) == 0x000008, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_OnRemoval, ParticleComponents) == 0x0000C0, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_OnRemoval, AudioComponents) == 0x0000D0, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_OnRemoval, BurstCameraShakeInstance) == 0x0000E0, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_SpeedAdjust_Pawn_C_OnRemoval, BurstDecalInstance) == 0x0000E8, "Member 'GCNL_Creative_SpeedAdjust_Pawn_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

}

