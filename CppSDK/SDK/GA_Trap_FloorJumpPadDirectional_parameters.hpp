﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Trap_FloorJumpPadDirectional

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional
// 0x0260 (0x0260 - 0x0000)
struct GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetAbilityLevel_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate; // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x0028(0x0010)()
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingTrap*                          K2Node_DynamicCast_AsBuilding_Trap;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0050(0x0030)(IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTrapLevel_ReturnValue;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDamageDelay_ReturnValue;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue; // 0x0098(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFireDelay_ReturnValue;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue1; // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingTrap*                          K2Node_DynamicCast_AsBuilding_Trap1;               // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilityTask_WaitTargetSelection*   CallFunc_WaitTargetSelection_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetDataCountFromTargetData_ReturnValue;   // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable;                              // 0x00E0(0x0020)()
	class AFortPlayerPawn*                        K2Node_CustomEvent_player;                         // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_108[0x8];                                      // 0x0108(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             K2Node_CustomEvent_TrapTransform;                  // 0x0110(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_TransformDirection_ReturnValue;           // 0x0140(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x014C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0158(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0164(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0170(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17C[0x4];                                      // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue1;        // 0x0190(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesSocketExist_ReturnValue;              // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesSocketExist_ReturnValue1;             // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19A[0x2];                                      // 0x019A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable1;                             // 0x01A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetActorsFromTargetData_ReturnValue;      // 0x01A8(0x0010)(ZeroConstructor, ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x01C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x01C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C7[0x1];                                      // 0x01C7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CC[0x4];                                      // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x01D0(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x01F0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item1;                          // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_209[0x3];                                      // 0x0209(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_211[0x3];                                      // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1; // 0x0218(0x0010)(ZeroConstructor, NoDestructor)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectContainer_ReturnValue; // 0x0228(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData1;                    // 0x0238(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag1;                // 0x0258(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional) == 0x000010, "Wrong alignment on GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional");
static_assert(sizeof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional) == 0x000260, "Wrong size on GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, EntryPoint) == 0x000000, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_MakeRotator_ReturnValue) == 0x000004, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_GetAbilityLevel_ReturnValue) == 0x000010, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_GetAbilityLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000014, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue) == 0x000028, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000038, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, K2Node_DynamicCast_AsBuilding_Trap) == 0x000040, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::K2Node_DynamicCast_AsBuilding_Trap' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, Temp_int_Loop_Counter_Variable) == 0x00004C, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_GetTransform_ReturnValue) == 0x000050, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_Add_IntInt_ReturnValue) == 0x000080, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_GetTrapLevel_ReturnValue) == 0x000084, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_GetTrapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_GetDamageDelay_ReturnValue) == 0x000088, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_GetDamageDelay_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000090, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue) == 0x000098, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_GetFireDelay_ReturnValue) == 0x0000A0, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_GetFireDelay_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, Temp_int_Array_Index_Variable) == 0x0000A4, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_K2_CommitAbility_ReturnValue) == 0x0000A8, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_GetOwningActorFromActorInfo_ReturnValue1) == 0x0000B0, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_GetOwningActorFromActorInfo_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, K2Node_DynamicCast_AsBuilding_Trap1) == 0x0000B8, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::K2Node_DynamicCast_AsBuilding_Trap1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, K2Node_DynamicCast_bSuccess1) == 0x0000C0, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_IsDedicatedServer_ReturnValue) == 0x0000C1, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_WaitTargetSelection_ReturnValue) == 0x0000C8, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_WaitTargetSelection_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_GetDataCountFromTargetData_ReturnValue) == 0x0000D0, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_GetDataCountFromTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000D4, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, Temp_struct_Variable) == 0x0000E0, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, K2Node_CustomEvent_player) == 0x000100, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::K2Node_CustomEvent_player' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, K2Node_CustomEvent_TrapTransform) == 0x000110, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::K2Node_CustomEvent_TrapTransform' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_TransformDirection_ReturnValue) == 0x000140, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_TransformDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_BreakTransform_Location) == 0x00014C, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_BreakTransform_Rotation) == 0x000158, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_BreakTransform_Scale) == 0x000164, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_Add_VectorVector_ReturnValue) == 0x000170, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000180, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000188, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_SpawnEmitterAttached_ReturnValue1) == 0x000190, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_SpawnEmitterAttached_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_DoesSocketExist_ReturnValue) == 0x000198, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_DoesSocketExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_DoesSocketExist_ReturnValue1) == 0x000199, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_DoesSocketExist_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, Temp_int_Variable) == 0x00019C, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, Temp_struct_Variable1) == 0x0001A0, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_GetActorsFromTargetData_ReturnValue) == 0x0001A8, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_GetActorsFromTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_Array_Get_Item) == 0x0001B8, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_Array_Length_ReturnValue) == 0x0001C0, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_IsValid_ReturnValue1) == 0x0001C4, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_Greater_IntInt_ReturnValue) == 0x0001C5, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0001C6, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_Add_IntInt_ReturnValue1) == 0x0001C8, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_Add_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, K2Node_CustomEvent_TargetData) == 0x0001D0, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, K2Node_CustomEvent_ApplicationTag) == 0x0001F0, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_Array_Get_Item1) == 0x0001F8, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_Array_Get_Item1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000200, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, K2Node_DynamicCast_bSuccess2) == 0x000208, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_Array_Length_ReturnValue1) == 0x00020C, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_Array_Length_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_Less_IntInt_ReturnValue) == 0x000210, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_Array_Add_ReturnValue) == 0x000214, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, K2Node_CreateDelegate_OutputDelegate1) == 0x000218, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, CallFunc_ApplyGameplayEffectContainer_ReturnValue) == 0x000228, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::CallFunc_ApplyGameplayEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, K2Node_CustomEvent_TargetData1) == 0x000238, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::K2Node_CustomEvent_TargetData1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional, K2Node_CustomEvent_ApplicationTag1) == 0x000258, "Member 'GA_Trap_FloorJumpPadDirectional_C_ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional::K2Node_CustomEvent_ApplicationTag1' has a wrong offset!");

// Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0
// 0x0028 (0x0028 - 0x0000)
struct GA_Trap_FloorJumpPadDirectional_C_Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData_0;                                      // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Trap_FloorJumpPadDirectional_C_Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0) == 0x000008, "Wrong alignment on GA_Trap_FloorJumpPadDirectional_C_Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0");
static_assert(sizeof(GA_Trap_FloorJumpPadDirectional_C_Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0) == 0x000028, "Wrong size on GA_Trap_FloorJumpPadDirectional_C_Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0, TargetData_0) == 0x000000, "Member 'GA_Trap_FloorJumpPadDirectional_C_Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0::TargetData_0' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0, ApplicationTag) == 0x000020, "Member 'GA_Trap_FloorJumpPadDirectional_C_Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0::ApplicationTag' has a wrong offset!");

// Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.PlayPlayerFX
// 0x0040 (0x0040 - 0x0000)
struct GA_Trap_FloorJumpPadDirectional_C_PlayPlayerFX final
{
public:
	class AFortPlayerPawn*                        Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             TrapTransform;                                     // 0x0010(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Trap_FloorJumpPadDirectional_C_PlayPlayerFX) == 0x000010, "Wrong alignment on GA_Trap_FloorJumpPadDirectional_C_PlayPlayerFX");
static_assert(sizeof(GA_Trap_FloorJumpPadDirectional_C_PlayPlayerFX) == 0x000040, "Wrong size on GA_Trap_FloorJumpPadDirectional_C_PlayPlayerFX");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_PlayPlayerFX, Player) == 0x000000, "Member 'GA_Trap_FloorJumpPadDirectional_C_PlayPlayerFX::Player' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_PlayPlayerFX, TrapTransform) == 0x000010, "Member 'GA_Trap_FloorJumpPadDirectional_C_PlayPlayerFX::TrapTransform' has a wrong offset!");

// Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.Targeted_9399FB2A485BD9AC6632A4B347C4BBE0
// 0x0028 (0x0028 - 0x0000)
struct GA_Trap_FloorJumpPadDirectional_C_Targeted_9399FB2A485BD9AC6632A4B347C4BBE0 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData_0;                                      // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Trap_FloorJumpPadDirectional_C_Targeted_9399FB2A485BD9AC6632A4B347C4BBE0) == 0x000008, "Wrong alignment on GA_Trap_FloorJumpPadDirectional_C_Targeted_9399FB2A485BD9AC6632A4B347C4BBE0");
static_assert(sizeof(GA_Trap_FloorJumpPadDirectional_C_Targeted_9399FB2A485BD9AC6632A4B347C4BBE0) == 0x000028, "Wrong size on GA_Trap_FloorJumpPadDirectional_C_Targeted_9399FB2A485BD9AC6632A4B347C4BBE0");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_Targeted_9399FB2A485BD9AC6632A4B347C4BBE0, TargetData_0) == 0x000000, "Member 'GA_Trap_FloorJumpPadDirectional_C_Targeted_9399FB2A485BD9AC6632A4B347C4BBE0::TargetData_0' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPadDirectional_C_Targeted_9399FB2A485BD9AC6632A4B347C4BBE0, ApplicationTag) == 0x000020, "Member 'GA_Trap_FloorJumpPadDirectional_C_Targeted_9399FB2A485BD9AC6632A4B347C4BBE0::ApplicationTag' has a wrong offset!");

}

