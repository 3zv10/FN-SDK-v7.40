﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineStatusButton

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function OnlineStatusButton.OnlineStatusButton_C.ExecuteUbergraph_OnlineStatusButton
// 0x00D8 (0x00D8 - 0x0000)
struct OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELocalUserOnlineStatus                        Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable1;                               // 0x0020(0x0018)()
	class FText                                   Temp_text_Variable2;                               // 0x0038(0x0018)()
	class FText                                   Temp_text_Variable3;                               // 0x0050(0x0018)()
	class FText                                   Temp_text_Variable4;                               // 0x0068(0x0018)()
	class FText                                   Temp_text_Variable5;                               // 0x0080(0x0018)()
	ELocalUserOnlineStatus                        Temp_byte_Variable1;                               // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A[0x6];                                       // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x00A0(0x0018)()
	struct FLinearColor                           K2Node_Select1_Default;                            // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue1;               // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton) == 0x000008, "Wrong alignment on OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton");
static_assert(sizeof(OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton) == 0x0000D8, "Wrong size on OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton");
static_assert(offsetof(OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton, EntryPoint) == 0x000000, "Member 'OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton, Temp_byte_Variable) == 0x000004, "Member 'OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton, Temp_text_Variable) == 0x000008, "Member 'OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton, Temp_text_Variable1) == 0x000020, "Member 'OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton::Temp_text_Variable1' has a wrong offset!");
static_assert(offsetof(OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton, Temp_text_Variable2) == 0x000038, "Member 'OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton::Temp_text_Variable2' has a wrong offset!");
static_assert(offsetof(OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton, Temp_text_Variable3) == 0x000050, "Member 'OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton::Temp_text_Variable3' has a wrong offset!");
static_assert(offsetof(OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton, Temp_text_Variable4) == 0x000068, "Member 'OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton::Temp_text_Variable4' has a wrong offset!");
static_assert(offsetof(OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton, Temp_text_Variable5) == 0x000080, "Member 'OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton::Temp_text_Variable5' has a wrong offset!");
static_assert(offsetof(OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton, Temp_byte_Variable1) == 0x000098, "Member 'OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton, K2Node_Event_IsDesignTime) == 0x000099, "Member 'OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton, K2Node_Select_Default) == 0x0000A0, "Member 'OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton, K2Node_Select1_Default) == 0x0000B8, "Member 'OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton::K2Node_Select1_Default' has a wrong offset!");
static_assert(offsetof(OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton, CallFunc_PlayAnimation_ReturnValue) == 0x0000C8, "Member 'OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton, CallFunc_PlayAnimation_ReturnValue1) == 0x0000D0, "Member 'OnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton::CallFunc_PlayAnimation_ReturnValue1' has a wrong offset!");

// Function OnlineStatusButton.OnlineStatusButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct OnlineStatusButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OnlineStatusButton_C_PreConstruct) == 0x000001, "Wrong alignment on OnlineStatusButton_C_PreConstruct");
static_assert(sizeof(OnlineStatusButton_C_PreConstruct) == 0x000001, "Wrong size on OnlineStatusButton_C_PreConstruct");
static_assert(offsetof(OnlineStatusButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'OnlineStatusButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

