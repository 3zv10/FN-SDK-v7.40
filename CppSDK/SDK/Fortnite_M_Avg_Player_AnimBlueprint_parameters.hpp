﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fortnite_M_Avg_Player_AnimBlueprint

#include "Basic.hpp"


namespace SDK::Params
{

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint
// 0x0088 (0x0088 - 0x0000)
struct Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue1;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn1;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn;       // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn1;      // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess3;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerAnimInstance*                K2Node_CustomEvent_CharPart;                       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateZone*                     K2Node_DynamicCast_AsFort_Game_State_Zone;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess4;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint) == 0x000088, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, EntryPoint) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000008, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, CallFunc_TryGetPawnOwner_ReturnValue1) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::CallFunc_TryGetPawnOwner_ReturnValue1' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_AsFort_Pawn) == 0x000018, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_AsFort_Pawn1) == 0x000028, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_AsFort_Pawn1' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_bSuccess1) == 0x000030, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_AsInterface_Player_Pawn) == 0x000038, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_AsInterface_Player_Pawn' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_bSuccess2) == 0x000048, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_AsInterface_Player_Pawn1) == 0x000050, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_AsInterface_Player_Pawn1' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_bSuccess3) == 0x000060, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_bSuccess3' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, CallFunc_GetGameState_ReturnValue) == 0x000068, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_CustomEvent_CharPart) == 0x000070, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_CustomEvent_CharPart' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_AsFort_Game_State_Zone) == 0x000078, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_AsFort_Game_State_Zone' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_bSuccess4) == 0x000080, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_bSuccess4' has a wrong offset!");

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CharPartEvent
// 0x0008 (0x0008 - 0x0000)
struct Fortnite_M_Avg_Player_AnimBlueprint_C_CharPartEvent final
{
public:
	class UFortPlayerAnimInstance*                CharPart;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_CharPartEvent) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_CharPartEvent");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_CharPartEvent) == 0x000008, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_CharPartEvent");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_CharPartEvent, CharPart) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_CharPartEvent::CharPart' has a wrong offset!");

}

