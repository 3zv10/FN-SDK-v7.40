﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PacketHandler

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct PacketHandler.NetAnalyticsDataConfig
// 0x000C (0x000C - 0x0000)
struct FNetAnalyticsDataConfig final
{
public:
	class FName                                   DataName;                                          // 0x0000(0x0008)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnabled;                                          // 0x0008(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNetAnalyticsDataConfig) == 0x000004, "Wrong alignment on FNetAnalyticsDataConfig");
static_assert(sizeof(FNetAnalyticsDataConfig) == 0x00000C, "Wrong size on FNetAnalyticsDataConfig");
static_assert(offsetof(FNetAnalyticsDataConfig, DataName) == 0x000000, "Member 'FNetAnalyticsDataConfig::DataName' has a wrong offset!");
static_assert(offsetof(FNetAnalyticsDataConfig, bEnabled) == 0x000008, "Member 'FNetAnalyticsDataConfig::bEnabled' has a wrong offset!");

}

