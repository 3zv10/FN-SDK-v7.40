﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cube_Dest_Scripting

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Cube_Dest_Scripting.Cube_Dest_Scripting_C
// 0x0078 (0x03A8 - 0x0330)
class ACube_Dest_Scripting_C final : public AFortAthenaWater
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_Cube_Printing_540;                               // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_Athena_Water_C*                     LakeActor;                                         // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CubeSinking;                                       // 0x0350(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          LakeTurnedOn;                                      // 0x0351(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_352[0x6];                                      // 0x0352(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACUBE_C*                                CubeRef;                                           // 0x0358(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               SinkingWaterBoil;                                  // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_AmbientSplineActor_C*>       ShorelineAudioActors;                              // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABP_AmbientLakeAudioActor_C*>    LakeAudioActors;                                   // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class UAudioComponent*                        PropagateAudioLoop;                                // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LakeState;                                         // 0x0390(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LakeCenter;                                        // 0x0394(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayedPreSinkAudio;                                // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A1[0x3];                                      // 0x03A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         IsCubeSinking;                                     // 0x03A4(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Cube_Dest_Scripting(int32 EntryPoint);
	void CubeDone(int32 CurrentIndex);
	void ReceiveBeginPlay();
	void LakeTurnOn();
	void CubeSplash();
	void CubeStopSinking();
	void CubeStartSinking();
	void UserConstructionScript();
	void OnRep_CubeSinking();
	void OnRep_LakeTurnedOn();
	void CorruptRiverAudioActor(class ABP_AmbientSplineActor_C* River);
	void ConvertLakeAudioActor(class ABP_AmbientLakeAudioActor_C* Lake);
	void UpdateCorruption(float PercentComplete);
	void OnRep_LakeState();
	void OnRep_IsCubeSinking();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Cube_Dest_Scripting_C">();
	}
	static class ACube_Dest_Scripting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACube_Dest_Scripting_C>();
	}
};
static_assert(alignof(ACube_Dest_Scripting_C) == 0x000008, "Wrong alignment on ACube_Dest_Scripting_C");
static_assert(sizeof(ACube_Dest_Scripting_C) == 0x0003A8, "Wrong size on ACube_Dest_Scripting_C");
static_assert(offsetof(ACube_Dest_Scripting_C, UberGraphFrame) == 0x000330, "Member 'ACube_Dest_Scripting_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACube_Dest_Scripting_C, P_Cube_Printing_540) == 0x000338, "Member 'ACube_Dest_Scripting_C::P_Cube_Printing_540' has a wrong offset!");
static_assert(offsetof(ACube_Dest_Scripting_C, DefaultSceneRoot) == 0x000340, "Member 'ACube_Dest_Scripting_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ACube_Dest_Scripting_C, LakeActor) == 0x000348, "Member 'ACube_Dest_Scripting_C::LakeActor' has a wrong offset!");
static_assert(offsetof(ACube_Dest_Scripting_C, CubeSinking) == 0x000350, "Member 'ACube_Dest_Scripting_C::CubeSinking' has a wrong offset!");
static_assert(offsetof(ACube_Dest_Scripting_C, LakeTurnedOn) == 0x000351, "Member 'ACube_Dest_Scripting_C::LakeTurnedOn' has a wrong offset!");
static_assert(offsetof(ACube_Dest_Scripting_C, CubeRef) == 0x000358, "Member 'ACube_Dest_Scripting_C::CubeRef' has a wrong offset!");
static_assert(offsetof(ACube_Dest_Scripting_C, SinkingWaterBoil) == 0x000360, "Member 'ACube_Dest_Scripting_C::SinkingWaterBoil' has a wrong offset!");
static_assert(offsetof(ACube_Dest_Scripting_C, ShorelineAudioActors) == 0x000368, "Member 'ACube_Dest_Scripting_C::ShorelineAudioActors' has a wrong offset!");
static_assert(offsetof(ACube_Dest_Scripting_C, LakeAudioActors) == 0x000378, "Member 'ACube_Dest_Scripting_C::LakeAudioActors' has a wrong offset!");
static_assert(offsetof(ACube_Dest_Scripting_C, PropagateAudioLoop) == 0x000388, "Member 'ACube_Dest_Scripting_C::PropagateAudioLoop' has a wrong offset!");
static_assert(offsetof(ACube_Dest_Scripting_C, LakeState) == 0x000390, "Member 'ACube_Dest_Scripting_C::LakeState' has a wrong offset!");
static_assert(offsetof(ACube_Dest_Scripting_C, LakeCenter) == 0x000394, "Member 'ACube_Dest_Scripting_C::LakeCenter' has a wrong offset!");
static_assert(offsetof(ACube_Dest_Scripting_C, PlayedPreSinkAudio) == 0x0003A0, "Member 'ACube_Dest_Scripting_C::PlayedPreSinkAudio' has a wrong offset!");
static_assert(offsetof(ACube_Dest_Scripting_C, IsCubeSinking) == 0x0003A4, "Member 'ACube_Dest_Scripting_C::IsCubeSinking' has a wrong offset!");

}

