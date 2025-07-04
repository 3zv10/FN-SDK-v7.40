﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_Melee_Blade_Combo_Athena

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GAB_Melee_Blade_Combo_Athena.GAB_Melee_Blade_Combo_Athena_C.ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena
// 0x0080 (0x0080 - 0x0000)
struct GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagRemoved*    CallFunc_WaitGameplayTagRemove_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue1;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput; // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A[0x2];                                       // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x006C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena) == 0x000008, "Wrong alignment on GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena");
static_assert(sizeof(GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena) == 0x000080, "Wrong size on GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena, EntryPoint) == 0x000000, "Member 'GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena, CallFunc_WaitGameplayTagAdd_ReturnValue) == 0x000008, "Member 'GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena::CallFunc_WaitGameplayTagAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena, CallFunc_WaitGameplayTagRemove_ReturnValue) == 0x000028, "Member 'GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena::CallFunc_WaitGameplayTagRemove_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena, K2Node_CreateDelegate_OutputDelegate1) == 0x000030, "Member 'GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena, CallFunc_IsValid_ReturnValue1) == 0x000040, "Member 'GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena, K2Node_Event_bWasCancelled) == 0x000041, "Member 'GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena, CallFunc_GetActivatingPawn_ReturnValue) == 0x000048, "Member 'GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena, CallFunc_WaitGameplayTagAdd_ReturnValue1) == 0x000050, "Member 'GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena::CallFunc_WaitGameplayTagAdd_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000058, "Member 'GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000068, "Member 'GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena, CallFunc_IsValid_ReturnValue2) == 0x000069, "Member 'GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena, K2Node_CreateDelegate_OutputDelegate2) == 0x00006C, "Member 'GAB_Melee_Blade_Combo_Athena_C_ExecuteUbergraph_GAB_Melee_Blade_Combo_Athena::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");

// Function GAB_Melee_Blade_Combo_Athena.GAB_Melee_Blade_Combo_Athena_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GAB_Melee_Blade_Combo_Athena_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_Melee_Blade_Combo_Athena_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GAB_Melee_Blade_Combo_Athena_C_K2_OnEndAbility");
static_assert(sizeof(GAB_Melee_Blade_Combo_Athena_C_K2_OnEndAbility) == 0x000001, "Wrong size on GAB_Melee_Blade_Combo_Athena_C_K2_OnEndAbility");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAB_Melee_Blade_Combo_Athena_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GAB_Melee_Blade_Combo_Athena.GAB_Melee_Blade_Combo_Athena_C.ForceFeedbackOnhit
// 0x0090 (0x0090 - 0x0000)
struct GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         CallFunc_GetDataCountFromTargetData_ReturnValue;   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetActorsFromTargetData_ReturnValue;      // 0x0060(0x0010)(ZeroConstructor, ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E[0x2];                                       // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit) == 0x000008, "Wrong alignment on GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit");
static_assert(sizeof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit) == 0x000090, "Wrong size on GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, TargetData) == 0x000000, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, CallFunc_GetDataCountFromTargetData_ReturnValue) == 0x000020, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::CallFunc_GetDataCountFromTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, CallFunc_Subtract_IntInt_ReturnValue) == 0x000028, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, Temp_bool_True_if_break_was_hit_Variable) == 0x000030, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, Temp_int_Array_Index_Variable) == 0x000034, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, CallFunc_Not_PreBool_ReturnValue) == 0x000038, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, CallFunc_GetActivatingPawn_ReturnValue) == 0x000040, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000048, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, Temp_int_Variable) == 0x000058, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, CallFunc_BooleanAND_ReturnValue) == 0x00005C, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, CallFunc_GetActorsFromTargetData_ReturnValue) == 0x000060, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::CallFunc_GetActorsFromTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, CallFunc_Array_Get_Item) == 0x000070, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, CallFunc_Array_Length_ReturnValue1) == 0x000078, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::CallFunc_Array_Length_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, CallFunc_IsValid_ReturnValue) == 0x00007C, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, CallFunc_Greater_IntInt_ReturnValue) == 0x00007D, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, CallFunc_Array_Add_ReturnValue) == 0x000080, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000084, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit, CallFunc_Add_IntInt_ReturnValue1) == 0x000088, "Member 'GAB_Melee_Blade_Combo_Athena_C_ForceFeedbackOnhit::CallFunc_Add_IntInt_ReturnValue1' has a wrong offset!");

}

