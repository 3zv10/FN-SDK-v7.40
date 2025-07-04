﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STW_PlayerCameraModeBase

#include "Basic.hpp"

#include "STW_PlayerCameraModeMelee_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass STW_PlayerCameraModeBase.STW_PlayerCameraModeBase_C
// 0x0000 (0x0C50 - 0x0C50)
class USTW_PlayerCameraModeBase_C final : public USTW_PlayerCameraModeMelee_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"STW_PlayerCameraModeBase_C">();
	}
	static class USTW_PlayerCameraModeBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USTW_PlayerCameraModeBase_C>();
	}
};
static_assert(alignof(USTW_PlayerCameraModeBase_C) == 0x000010, "Wrong alignment on USTW_PlayerCameraModeBase_C");
static_assert(sizeof(USTW_PlayerCameraModeBase_C) == 0x000C50, "Wrong size on USTW_PlayerCameraModeBase_C");

}

