﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavigationSystem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum NavigationSystem.ERuntimeGenerationType
// NumValues: 0x0005
enum class ERuntimeGenerationType : uint8
{
	Static                                   = 0,
	DynamicModifiersOnly                     = 1,
	Dynamic                                  = 2,
	LegacyGeneration                         = 3,
	ERuntimeGenerationType_MAX               = 4,
};

// Enum NavigationSystem.ENavCostDisplay
// NumValues: 0x0004
enum class ENavCostDisplay : uint8
{
	TotalCost                                = 0,
	HeuristicOnly                            = 1,
	RealCostOnly                             = 2,
	ENavCostDisplay_MAX                      = 3,
};

// Enum NavigationSystem.ERecastPartitioning
// NumValues: 0x0004
enum class ERecastPartitioning : uint8
{
	Monotone                                 = 0,
	Watershed                                = 1,
	ChunkyMonotone                           = 2,
	ERecastPartitioning_MAX                  = 3,
};

// ScriptStruct NavigationSystem.NavCollisionBox
// 0x0018 (0x0018 - 0x0000)
struct FNavCollisionBox final
{
public:
	struct FVector                                Offset;                                            // 0x0000(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Extent;                                            // 0x000C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNavCollisionBox) == 0x000004, "Wrong alignment on FNavCollisionBox");
static_assert(sizeof(FNavCollisionBox) == 0x000018, "Wrong size on FNavCollisionBox");
static_assert(offsetof(FNavCollisionBox, Offset) == 0x000000, "Member 'FNavCollisionBox::Offset' has a wrong offset!");
static_assert(offsetof(FNavCollisionBox, Extent) == 0x00000C, "Member 'FNavCollisionBox::Extent' has a wrong offset!");

// ScriptStruct NavigationSystem.NavGraphNode
// 0x0018 (0x0018 - 0x0000)
struct FNavGraphNode final
{
public:
	class UObject*                                Owner;                                             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x10];                                       // 0x0008(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNavGraphNode) == 0x000008, "Wrong alignment on FNavGraphNode");
static_assert(sizeof(FNavGraphNode) == 0x000018, "Wrong size on FNavGraphNode");
static_assert(offsetof(FNavGraphNode, Owner) == 0x000000, "Member 'FNavGraphNode::Owner' has a wrong offset!");

// ScriptStruct NavigationSystem.NavCollisionCylinder
// 0x0014 (0x0014 - 0x0000)
struct FNavCollisionCylinder final
{
public:
	struct FVector                                Offset;                                            // 0x0000(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Radius;                                            // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Height;                                            // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNavCollisionCylinder) == 0x000004, "Wrong alignment on FNavCollisionCylinder");
static_assert(sizeof(FNavCollisionCylinder) == 0x000014, "Wrong size on FNavCollisionCylinder");
static_assert(offsetof(FNavCollisionCylinder, Offset) == 0x000000, "Member 'FNavCollisionCylinder::Offset' has a wrong offset!");
static_assert(offsetof(FNavCollisionCylinder, Radius) == 0x00000C, "Member 'FNavCollisionCylinder::Radius' has a wrong offset!");
static_assert(offsetof(FNavCollisionCylinder, Height) == 0x000010, "Member 'FNavCollisionCylinder::Height' has a wrong offset!");

// ScriptStruct NavigationSystem.NavigationFilterArea
// 0x0018 (0x0018 - 0x0000)
struct FNavigationFilterArea final
{
public:
	TSubclassOf<class UNavArea>                   AreaClass;                                         // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TravelCostOverride;                                // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EnteringCostOverride;                              // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bIsExcluded : 1;                                   // 0x0010(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverrideTravelCost : 1;                           // 0x0010(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverrideEnteringCost : 1;                         // 0x0010(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNavigationFilterArea) == 0x000008, "Wrong alignment on FNavigationFilterArea");
static_assert(sizeof(FNavigationFilterArea) == 0x000018, "Wrong size on FNavigationFilterArea");
static_assert(offsetof(FNavigationFilterArea, AreaClass) == 0x000000, "Member 'FNavigationFilterArea::AreaClass' has a wrong offset!");
static_assert(offsetof(FNavigationFilterArea, TravelCostOverride) == 0x000008, "Member 'FNavigationFilterArea::TravelCostOverride' has a wrong offset!");
static_assert(offsetof(FNavigationFilterArea, EnteringCostOverride) == 0x00000C, "Member 'FNavigationFilterArea::EnteringCostOverride' has a wrong offset!");

// ScriptStruct NavigationSystem.SupportedAreaData
// 0x0020 (0x0020 - 0x0000)
struct FSupportedAreaData final
{
public:
	class FString                                 AreaClassName;                                     // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AreaID;                                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 AreaClass;                                         // 0x0018(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSupportedAreaData) == 0x000008, "Wrong alignment on FSupportedAreaData");
static_assert(sizeof(FSupportedAreaData) == 0x000020, "Wrong size on FSupportedAreaData");
static_assert(offsetof(FSupportedAreaData, AreaClassName) == 0x000000, "Member 'FSupportedAreaData::AreaClassName' has a wrong offset!");
static_assert(offsetof(FSupportedAreaData, AreaID) == 0x000010, "Member 'FSupportedAreaData::AreaID' has a wrong offset!");
static_assert(offsetof(FSupportedAreaData, AreaClass) == 0x000018, "Member 'FSupportedAreaData::AreaClass' has a wrong offset!");

// ScriptStruct NavigationSystem.NavGraphEdge
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FNavGraphEdge final
{
public:
	uint8                                         Pad_0[0x18];                                       // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNavGraphEdge) == 0x000008, "Wrong alignment on FNavGraphEdge");
static_assert(sizeof(FNavGraphEdge) == 0x000018, "Wrong size on FNavGraphEdge");

// ScriptStruct NavigationSystem.NavigationFilterFlags
// 0x0004 (0x0004 - 0x0000)
struct alignas(0x04) FNavigationFilterFlags final
{
public:
	uint8                                         bNavFlag0 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag1 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag2 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag3 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag4 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag5 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag6 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag7 : 1;                                     // 0x0000(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag8 : 1;                                     // 0x0001(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag9 : 1;                                     // 0x0001(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag10 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag11 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag12 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag13 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag14 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNavFlag15 : 1;                                    // 0x0001(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNavigationFilterFlags) == 0x000004, "Wrong alignment on FNavigationFilterFlags");
static_assert(sizeof(FNavigationFilterFlags) == 0x000004, "Wrong size on FNavigationFilterFlags");

}

