﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CornField_Rectangle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CornField_Rectangle.CornField_Rectangle_C
// 0x0038 (0x0C68 - 0x0C30)
class ACornField_Rectangle_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_Hay_Destruction_CornField;                       // 0x0C38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          OverlapBox;                                        // 0x0C40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_CornField_GC;                                   // 0x0C48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldWobble;                                      // 0x0C50(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C51[0x3];                                      // 0x0C51(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                PlayerVelocity;                                    // 0x0C54(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Mid;                                               // 0x0C60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CornField_Rectangle(int32 EntryPoint);
	void MaterialWobble(class AActor* Player);
	void ReceiveBeginPlay();
	void BndEvt__OverlapBox_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__OverlapBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CornField_Rectangle_C">();
	}
	static class ACornField_Rectangle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACornField_Rectangle_C>();
	}
};
static_assert(alignof(ACornField_Rectangle_C) == 0x000008, "Wrong alignment on ACornField_Rectangle_C");
static_assert(sizeof(ACornField_Rectangle_C) == 0x000C68, "Wrong size on ACornField_Rectangle_C");
static_assert(offsetof(ACornField_Rectangle_C, UberGraphFrame) == 0x000C30, "Member 'ACornField_Rectangle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACornField_Rectangle_C, P_Hay_Destruction_CornField) == 0x000C38, "Member 'ACornField_Rectangle_C::P_Hay_Destruction_CornField' has a wrong offset!");
static_assert(offsetof(ACornField_Rectangle_C, OverlapBox) == 0x000C40, "Member 'ACornField_Rectangle_C::OverlapBox' has a wrong offset!");
static_assert(offsetof(ACornField_Rectangle_C, GE_CornField_GC) == 0x000C48, "Member 'ACornField_Rectangle_C::GE_CornField_GC' has a wrong offset!");
static_assert(offsetof(ACornField_Rectangle_C, ShouldWobble) == 0x000C50, "Member 'ACornField_Rectangle_C::ShouldWobble' has a wrong offset!");
static_assert(offsetof(ACornField_Rectangle_C, PlayerVelocity) == 0x000C54, "Member 'ACornField_Rectangle_C::PlayerVelocity' has a wrong offset!");
static_assert(offsetof(ACornField_Rectangle_C, Mid) == 0x000C60, "Member 'ACornField_Rectangle_C::Mid' has a wrong offset!");

}

