// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/MobuNPCState.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOBUSYSTEM_MobuNPCState_generated_h
#error "MobuNPCState.generated.h already included, missing '#pragma once' in MobuNPCState.h"
#endif
#define MOBUSYSTEM_MobuNPCState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Data_MobuNPCState_h


#define FOREACH_ENUM_EMOBUNPCSTATE(op) \
	op(EMobuNPCState::Travel) \
	op(EMobuNPCState::Station) \
	op(EMobuNPCState::Interrupt) \
	op(EMobuNPCState::RoamPOI) \
	op(EMobuNPCState::Bounds) \
	op(EMobuNPCState::Waypoint) \
	op(EMobuNPCState::Path) 

enum class EMobuNPCState : uint8;
template<> struct TIsUEnumClass<EMobuNPCState> { enum { Value = true }; };
template<> MOBUSYSTEM_API UEnum* StaticEnum<EMobuNPCState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
