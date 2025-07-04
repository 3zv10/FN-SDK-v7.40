﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialConfirmationButton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SocialConfirmationButton.SocialConfirmationButton_C.ExecuteUbergraph_SocialConfirmationButton
// 0x00A0 (0x00A0 - 0x0000)
struct SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable1;                               // 0x0020(0x0018)()
	bool                                          Temp_bool_Variable1;                               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x003C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable1;                             // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x005C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue1;               // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select1_Default;                            // 0x0088(0x0018)()
};
static_assert(alignof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton) == 0x000008, "Wrong alignment on SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton");
static_assert(sizeof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton) == 0x0000A0, "Wrong size on SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, EntryPoint) == 0x000000, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, Temp_bool_Variable) == 0x000004, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, Temp_text_Variable) == 0x000008, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, Temp_text_Variable1) == 0x000020, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::Temp_text_Variable1' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, Temp_bool_Variable1) == 0x000038, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, Temp_struct_Variable) == 0x00003C, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, Temp_struct_Variable1) == 0x00004C, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, K2Node_Select_Default) == 0x00005C, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, CallFunc_PlayAnimation_ReturnValue) == 0x000070, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, CallFunc_PlayAnimation_ReturnValue1) == 0x000078, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::CallFunc_PlayAnimation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, K2Node_Event_IsDesignTime) == 0x000080, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, K2Node_Select1_Default) == 0x000088, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::K2Node_Select1_Default' has a wrong offset!");

// Function SocialConfirmationButton.SocialConfirmationButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SocialConfirmationButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SocialConfirmationButton_C_PreConstruct) == 0x000001, "Wrong alignment on SocialConfirmationButton_C_PreConstruct");
static_assert(sizeof(SocialConfirmationButton_C_PreConstruct) == 0x000001, "Wrong size on SocialConfirmationButton_C_PreConstruct");
static_assert(offsetof(SocialConfirmationButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SocialConfirmationButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

