﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_Stream_2W_SBend_3L_a

#include "Basic.hpp"

#include "_WaterMeshBlueprintMaster_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass S_Stream_2W_SBend_3L_a.S_Stream_2W_SBend_3L_a_C
// 0x0000 (0x03F8 - 0x03F8)
class AS_Stream_2W_SBend_3L_a_C final : public A_WaterMeshBlueprintMaster_C
{
public:
	bool                                          ShowTestMesh_0;                                    // 0x03F3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"S_Stream_2W_SBend_3L_a_C">();
	}
	static class AS_Stream_2W_SBend_3L_a_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AS_Stream_2W_SBend_3L_a_C>();
	}
};
static_assert(alignof(AS_Stream_2W_SBend_3L_a_C) == 0x000008, "Wrong alignment on AS_Stream_2W_SBend_3L_a_C");
static_assert(sizeof(AS_Stream_2W_SBend_3L_a_C) == 0x0003F8, "Wrong size on AS_Stream_2W_SBend_3L_a_C");
static_assert(offsetof(AS_Stream_2W_SBend_3L_a_C, ShowTestMesh_0) == 0x0003F3, "Member 'AS_Stream_2W_SBend_3L_a_C::ShowTestMesh_0' has a wrong offset!");

}

