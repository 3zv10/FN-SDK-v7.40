﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCL_TNT_Fuse_Cook

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C
// 0x00C0 (0x0940 - 0x0880)
class AGCL_TNT_Fuse_Cook_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Fuse_Stage_2_Timeline_Death_Warning_025671D240409D37FB3E82944DD6495A; // 0x0888(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Fuse_Stage_2_Timeline__Direction_025671D240409D37FB3E82944DD6495A; // 0x088C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88D[0x3];                                      // 0x088D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Fuse_Stage_2_Timeline;                             // 0x0890(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fuse_Stage_1_Timeline_Death_Warning_5DCFD1EA4B7DF5BB34E90FA720FC0410; // 0x0898(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Fuse_Stage_1_Timeline__Direction_5DCFD1EA4B7DF5BB34E90FA720FC0410; // 0x089C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89D[0x3];                                      // 0x089D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Fuse_Stage_1_Timeline;                             // 0x08A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fuse_Movement_Material_Flash_342C86774E23CFA43C72E4B95A4B745E; // 0x08A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fuse_Movement_Lerp_Control_342C86774E23CFA43C72E4B95A4B745E; // 0x08AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Fuse_Movement__Direction_342C86774E23CFA43C72E4B95A4B745E; // 0x08B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B1[0x7];                                      // 0x08B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Fuse_Movement;                                     // 0x08B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FuseDuration;                                      // 0x08C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FuseElapsedTime;                                   // 0x08C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               DeathFX;                                           // 0x08C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_TNT_Athena_C*                        TNTBundle;                                         // 0x08D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Looping_Particle;                                  // 0x08D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Looping_Audio;                                     // 0x08E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PSys_Opacity;                                      // 0x08E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PSys_Color;                                        // 0x08EC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Psys_Size;                                         // 0x08F8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PSysSplineLoca;                                    // 0x0904(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               PSysSplineRot;                                     // 0x0910(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91C[0x4];                                      // 0x091C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        DeathAudio;                                        // 0x0920(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fuse_Change__;                                     // 0x0928(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fuse_2nd_Stage_Duration;                           // 0x092C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Emissive_Color;                                    // 0x0930(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCL_TNT_Fuse_Cook(int32 EntryPoint);
	void Control_Stage_2_Fuse_Particles();
	void Control_Stage_1_Fuse_Particles();
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void Fuse_Stage_2_Timeline__UpdateFunc();
	void Fuse_Stage_2_Timeline__FinishedFunc();
	void Fuse_Stage_1_Timeline__UpdateFunc();
	void Fuse_Stage_1_Timeline__FinishedFunc();
	void Fuse_Movement__UpdateFunc();
	void Fuse_Movement__FinishedFunc();
	void UserConstructionScript();
	void Spline_Setup(float Alpha, struct FVector* Spline_Location);
	void WarningSetup(float Warning, float* Opacity, struct FVector* Color, struct FVector* Size);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCL_TNT_Fuse_Cook_C">();
	}
	static class AGCL_TNT_Fuse_Cook_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCL_TNT_Fuse_Cook_C>();
	}
};
static_assert(alignof(AGCL_TNT_Fuse_Cook_C) == 0x000008, "Wrong alignment on AGCL_TNT_Fuse_Cook_C");
static_assert(sizeof(AGCL_TNT_Fuse_Cook_C) == 0x000940, "Wrong size on AGCL_TNT_Fuse_Cook_C");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, UberGraphFrame) == 0x000880, "Member 'AGCL_TNT_Fuse_Cook_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, Fuse_Stage_2_Timeline_Death_Warning_025671D240409D37FB3E82944DD6495A) == 0x000888, "Member 'AGCL_TNT_Fuse_Cook_C::Fuse_Stage_2_Timeline_Death_Warning_025671D240409D37FB3E82944DD6495A' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, Fuse_Stage_2_Timeline__Direction_025671D240409D37FB3E82944DD6495A) == 0x00088C, "Member 'AGCL_TNT_Fuse_Cook_C::Fuse_Stage_2_Timeline__Direction_025671D240409D37FB3E82944DD6495A' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, Fuse_Stage_2_Timeline) == 0x000890, "Member 'AGCL_TNT_Fuse_Cook_C::Fuse_Stage_2_Timeline' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, Fuse_Stage_1_Timeline_Death_Warning_5DCFD1EA4B7DF5BB34E90FA720FC0410) == 0x000898, "Member 'AGCL_TNT_Fuse_Cook_C::Fuse_Stage_1_Timeline_Death_Warning_5DCFD1EA4B7DF5BB34E90FA720FC0410' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, Fuse_Stage_1_Timeline__Direction_5DCFD1EA4B7DF5BB34E90FA720FC0410) == 0x00089C, "Member 'AGCL_TNT_Fuse_Cook_C::Fuse_Stage_1_Timeline__Direction_5DCFD1EA4B7DF5BB34E90FA720FC0410' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, Fuse_Stage_1_Timeline) == 0x0008A0, "Member 'AGCL_TNT_Fuse_Cook_C::Fuse_Stage_1_Timeline' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, Fuse_Movement_Material_Flash_342C86774E23CFA43C72E4B95A4B745E) == 0x0008A8, "Member 'AGCL_TNT_Fuse_Cook_C::Fuse_Movement_Material_Flash_342C86774E23CFA43C72E4B95A4B745E' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, Fuse_Movement_Lerp_Control_342C86774E23CFA43C72E4B95A4B745E) == 0x0008AC, "Member 'AGCL_TNT_Fuse_Cook_C::Fuse_Movement_Lerp_Control_342C86774E23CFA43C72E4B95A4B745E' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, Fuse_Movement__Direction_342C86774E23CFA43C72E4B95A4B745E) == 0x0008B0, "Member 'AGCL_TNT_Fuse_Cook_C::Fuse_Movement__Direction_342C86774E23CFA43C72E4B95A4B745E' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, Fuse_Movement) == 0x0008B8, "Member 'AGCL_TNT_Fuse_Cook_C::Fuse_Movement' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, FuseDuration) == 0x0008C0, "Member 'AGCL_TNT_Fuse_Cook_C::FuseDuration' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, FuseElapsedTime) == 0x0008C4, "Member 'AGCL_TNT_Fuse_Cook_C::FuseElapsedTime' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, DeathFX) == 0x0008C8, "Member 'AGCL_TNT_Fuse_Cook_C::DeathFX' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, TNTBundle) == 0x0008D0, "Member 'AGCL_TNT_Fuse_Cook_C::TNTBundle' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, Looping_Particle) == 0x0008D8, "Member 'AGCL_TNT_Fuse_Cook_C::Looping_Particle' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, Looping_Audio) == 0x0008E0, "Member 'AGCL_TNT_Fuse_Cook_C::Looping_Audio' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, PSys_Opacity) == 0x0008E8, "Member 'AGCL_TNT_Fuse_Cook_C::PSys_Opacity' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, PSys_Color) == 0x0008EC, "Member 'AGCL_TNT_Fuse_Cook_C::PSys_Color' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, Psys_Size) == 0x0008F8, "Member 'AGCL_TNT_Fuse_Cook_C::Psys_Size' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, PSysSplineLoca) == 0x000904, "Member 'AGCL_TNT_Fuse_Cook_C::PSysSplineLoca' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, PSysSplineRot) == 0x000910, "Member 'AGCL_TNT_Fuse_Cook_C::PSysSplineRot' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, DeathAudio) == 0x000920, "Member 'AGCL_TNT_Fuse_Cook_C::DeathAudio' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, Fuse_Change__) == 0x000928, "Member 'AGCL_TNT_Fuse_Cook_C::Fuse_Change__' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, Fuse_2nd_Stage_Duration) == 0x00092C, "Member 'AGCL_TNT_Fuse_Cook_C::Fuse_2nd_Stage_Duration' has a wrong offset!");
static_assert(offsetof(AGCL_TNT_Fuse_Cook_C, Emissive_Color) == 0x000930, "Member 'AGCL_TNT_Fuse_Cook_C::Emissive_Color' has a wrong offset!");

}

