﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Athena_TowerGrenade

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ECardinalDirection_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Athena_TowerGrenade.B_Prj_Athena_TowerGrenade_C
// 0x0348 (0x0AE0 - 0x0798)
class AB_Prj_Athena_TowerGrenade_C final : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0798(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x07A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x07B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                BaseDestination;                                   // 0x07B8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C4[0x4];                                      // 0x07C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         BGAClasses_0;                                      // 0x07C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                        BGALocations_0;                                    // 0x07D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                       BGARotations_0;                                    // 0x07E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                        P_BuildBuilding;                                   // 0x07F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_CloseSound;                                    // 0x0800(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_DistantSound;                                  // 0x0808(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GridExplosionOffset;                               // 0x0810(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GridSizeXY;                                        // 0x081C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GridSizeZ;                                         // 0x0820(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GridYOffset;                                       // 0x0824(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GridZOffset;                                       // 0x0828(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECardinalDirection                            CardinalDirection;                                 // 0x082C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82D[0x3];                                      // 0x082D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<ECardinalDirection, float>               OrientationYawOffsets;                             // 0x0830(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<ECardinalDirection, struct FVector>      OrientationLocationOffsets;                        // 0x0880(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                        ClearedCells_0;                                    // 0x08D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                LastBounceLocation;                                // 0x08E0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinBounceDistance;                                 // 0x08EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastBounceTime;                                    // 0x08F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinTimeBetweenBounces;                             // 0x08F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             BounceSound;                                       // 0x08F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BuildDelay;                                        // 0x0900(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_904[0x4];                                      // 0x0904(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         BGAClasses_1;                                      // 0x0908(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                         BGAClasses_2;                                      // 0x0918(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                         BGAClasses_3;                                      // 0x0928(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                        ClearedCells_1;                                    // 0x0938(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                        ClearedCells_2;                                    // 0x0948(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                        ClearedCells_3;                                    // 0x0958(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                       BGARotations_1;                                    // 0x0968(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                       BGARotations_2;                                    // 0x0978(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                       BGARotations_3;                                    // 0x0988(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                        BGALocations_1;                                    // 0x0998(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                        BGALocations_2;                                    // 0x09A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                        BGALocations_3;                                    // 0x09B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                        BGALocations_Underground;                          // 0x09C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                         BGAClasses_Underground;                            // 0x09D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                       BGARotations_Underground;                          // 0x09E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                        ClearedCells_Underground;                          // 0x09F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                         BGAClasses_Tires;                                  // 0x0A08(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                        BGALocations_Tires;                                // 0x0A18(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                       BGARotations_Tires;                                // 0x0A28(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<ECardinalDirection, struct FVector>      OrientationDoortraceOffsets;                       // 0x0A38(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                DoorTraceOffsetHigh;                               // 0x0A88(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DoorTraceOffsetLow;                                // 0x0A94(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          b_HitTerrain;                                      // 0x0AA0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AA1[0x7];                                      // 0x0AA1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             InAirLoopSound;                                    // 0x0AA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        InAirLoopComponent;                                // 0x0AB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BounceTimeout;                                     // 0x0AB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDebug;                                           // 0x0ABC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_ABD[0x3];                                      // 0x0ABD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         ActorsToDestroy;                                   // 0x0AC0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         ActorsToIgnore;                                    // 0x0AD0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_B_Prj_Athena_TowerGrenade(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void Delete_another_actor();
	void Handle_Bounce(const struct FVector& Hit_Location);
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults);
	void OnStop(const struct FHitResult& Hit);
	void UserConstructionScript();
	void SetBaseDestination(const struct FHitResult& Hit);
	void CreateBaseSection(const struct FVector& ReferenceLocation, const TArray<class UClass*>& BGAClassArray, TArray<struct FVector>& BGALocationArray, TArray<struct FRotator>& BGARotationArray);
	void DestroyActorsInGridCell(const struct FVector& CellLocation, bool DestroyFloorsQuickly);
	void ClearAndBuild(TArray<struct FVector>& ClearedGridCells, const TArray<class UClass*>& BGAClassArray, TArray<struct FVector>& BGALocationArray, TArray<struct FRotator>& BGARotationArray, bool DestroyFloorsQuickly);
	void SpawnTires(const struct FVector& ReferenceLocation);
	void HandleProps(TArray<class AActor*>& Array);
	void CalculateCardinalDirection();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Athena_TowerGrenade_C">();
	}
	static class AB_Prj_Athena_TowerGrenade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Athena_TowerGrenade_C>();
	}
};
static_assert(alignof(AB_Prj_Athena_TowerGrenade_C) == 0x000008, "Wrong alignment on AB_Prj_Athena_TowerGrenade_C");
static_assert(sizeof(AB_Prj_Athena_TowerGrenade_C) == 0x000AE0, "Wrong size on AB_Prj_Athena_TowerGrenade_C");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, UberGraphFrame) == 0x000798, "Member 'AB_Prj_Athena_TowerGrenade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, ParticleSystem) == 0x0007A0, "Member 'AB_Prj_Athena_TowerGrenade_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, Mesh) == 0x0007A8, "Member 'AB_Prj_Athena_TowerGrenade_C::Mesh' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, RotatingMovement) == 0x0007B0, "Member 'AB_Prj_Athena_TowerGrenade_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BaseDestination) == 0x0007B8, "Member 'AB_Prj_Athena_TowerGrenade_C::BaseDestination' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BGAClasses_0) == 0x0007C8, "Member 'AB_Prj_Athena_TowerGrenade_C::BGAClasses_0' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BGALocations_0) == 0x0007D8, "Member 'AB_Prj_Athena_TowerGrenade_C::BGALocations_0' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BGARotations_0) == 0x0007E8, "Member 'AB_Prj_Athena_TowerGrenade_C::BGARotations_0' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, P_BuildBuilding) == 0x0007F8, "Member 'AB_Prj_Athena_TowerGrenade_C::P_BuildBuilding' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, Cue_CloseSound) == 0x000800, "Member 'AB_Prj_Athena_TowerGrenade_C::Cue_CloseSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, Cue_DistantSound) == 0x000808, "Member 'AB_Prj_Athena_TowerGrenade_C::Cue_DistantSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, GridExplosionOffset) == 0x000810, "Member 'AB_Prj_Athena_TowerGrenade_C::GridExplosionOffset' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, GridSizeXY) == 0x00081C, "Member 'AB_Prj_Athena_TowerGrenade_C::GridSizeXY' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, GridSizeZ) == 0x000820, "Member 'AB_Prj_Athena_TowerGrenade_C::GridSizeZ' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, GridYOffset) == 0x000824, "Member 'AB_Prj_Athena_TowerGrenade_C::GridYOffset' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, GridZOffset) == 0x000828, "Member 'AB_Prj_Athena_TowerGrenade_C::GridZOffset' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, CardinalDirection) == 0x00082C, "Member 'AB_Prj_Athena_TowerGrenade_C::CardinalDirection' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, OrientationYawOffsets) == 0x000830, "Member 'AB_Prj_Athena_TowerGrenade_C::OrientationYawOffsets' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, OrientationLocationOffsets) == 0x000880, "Member 'AB_Prj_Athena_TowerGrenade_C::OrientationLocationOffsets' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, ClearedCells_0) == 0x0008D0, "Member 'AB_Prj_Athena_TowerGrenade_C::ClearedCells_0' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, LastBounceLocation) == 0x0008E0, "Member 'AB_Prj_Athena_TowerGrenade_C::LastBounceLocation' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, MinBounceDistance) == 0x0008EC, "Member 'AB_Prj_Athena_TowerGrenade_C::MinBounceDistance' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, LastBounceTime) == 0x0008F0, "Member 'AB_Prj_Athena_TowerGrenade_C::LastBounceTime' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, MinTimeBetweenBounces) == 0x0008F4, "Member 'AB_Prj_Athena_TowerGrenade_C::MinTimeBetweenBounces' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BounceSound) == 0x0008F8, "Member 'AB_Prj_Athena_TowerGrenade_C::BounceSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BuildDelay) == 0x000900, "Member 'AB_Prj_Athena_TowerGrenade_C::BuildDelay' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BGAClasses_1) == 0x000908, "Member 'AB_Prj_Athena_TowerGrenade_C::BGAClasses_1' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BGAClasses_2) == 0x000918, "Member 'AB_Prj_Athena_TowerGrenade_C::BGAClasses_2' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BGAClasses_3) == 0x000928, "Member 'AB_Prj_Athena_TowerGrenade_C::BGAClasses_3' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, ClearedCells_1) == 0x000938, "Member 'AB_Prj_Athena_TowerGrenade_C::ClearedCells_1' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, ClearedCells_2) == 0x000948, "Member 'AB_Prj_Athena_TowerGrenade_C::ClearedCells_2' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, ClearedCells_3) == 0x000958, "Member 'AB_Prj_Athena_TowerGrenade_C::ClearedCells_3' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BGARotations_1) == 0x000968, "Member 'AB_Prj_Athena_TowerGrenade_C::BGARotations_1' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BGARotations_2) == 0x000978, "Member 'AB_Prj_Athena_TowerGrenade_C::BGARotations_2' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BGARotations_3) == 0x000988, "Member 'AB_Prj_Athena_TowerGrenade_C::BGARotations_3' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BGALocations_1) == 0x000998, "Member 'AB_Prj_Athena_TowerGrenade_C::BGALocations_1' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BGALocations_2) == 0x0009A8, "Member 'AB_Prj_Athena_TowerGrenade_C::BGALocations_2' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BGALocations_3) == 0x0009B8, "Member 'AB_Prj_Athena_TowerGrenade_C::BGALocations_3' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BGALocations_Underground) == 0x0009C8, "Member 'AB_Prj_Athena_TowerGrenade_C::BGALocations_Underground' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BGAClasses_Underground) == 0x0009D8, "Member 'AB_Prj_Athena_TowerGrenade_C::BGAClasses_Underground' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BGARotations_Underground) == 0x0009E8, "Member 'AB_Prj_Athena_TowerGrenade_C::BGARotations_Underground' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, ClearedCells_Underground) == 0x0009F8, "Member 'AB_Prj_Athena_TowerGrenade_C::ClearedCells_Underground' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BGAClasses_Tires) == 0x000A08, "Member 'AB_Prj_Athena_TowerGrenade_C::BGAClasses_Tires' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BGALocations_Tires) == 0x000A18, "Member 'AB_Prj_Athena_TowerGrenade_C::BGALocations_Tires' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BGARotations_Tires) == 0x000A28, "Member 'AB_Prj_Athena_TowerGrenade_C::BGARotations_Tires' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, OrientationDoortraceOffsets) == 0x000A38, "Member 'AB_Prj_Athena_TowerGrenade_C::OrientationDoortraceOffsets' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, DoorTraceOffsetHigh) == 0x000A88, "Member 'AB_Prj_Athena_TowerGrenade_C::DoorTraceOffsetHigh' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, DoorTraceOffsetLow) == 0x000A94, "Member 'AB_Prj_Athena_TowerGrenade_C::DoorTraceOffsetLow' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, b_HitTerrain) == 0x000AA0, "Member 'AB_Prj_Athena_TowerGrenade_C::b_HitTerrain' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, InAirLoopSound) == 0x000AA8, "Member 'AB_Prj_Athena_TowerGrenade_C::InAirLoopSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, InAirLoopComponent) == 0x000AB0, "Member 'AB_Prj_Athena_TowerGrenade_C::InAirLoopComponent' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, BounceTimeout) == 0x000AB8, "Member 'AB_Prj_Athena_TowerGrenade_C::BounceTimeout' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, IsDebug) == 0x000ABC, "Member 'AB_Prj_Athena_TowerGrenade_C::IsDebug' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, ActorsToDestroy) == 0x000AC0, "Member 'AB_Prj_Athena_TowerGrenade_C::ActorsToDestroy' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_TowerGrenade_C, ActorsToIgnore) == 0x000AD0, "Member 'AB_Prj_Athena_TowerGrenade_C::ActorsToIgnore' has a wrong offset!");

}

