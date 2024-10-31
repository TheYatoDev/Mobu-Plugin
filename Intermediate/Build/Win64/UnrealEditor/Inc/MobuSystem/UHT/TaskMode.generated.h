// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/TaskMode.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOBUSYSTEM_TaskMode_generated_h
#error "TaskMode.generated.h already included, missing '#pragma once' in TaskMode.h"
#endif
#define MOBUSYSTEM_TaskMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Data_TaskMode_h


#define FOREACH_ENUM_ETASKMODE(op) \
	op(ETaskMode::POI) \
	op(ETaskMode::StandardTask) \
	op(ETaskMode::Location) \
	op(ETaskMode::CustomTask) 

enum class ETaskMode : uint8;
template<> struct TIsUEnumClass<ETaskMode> { enum { Value = true }; };
template<> MOBUSYSTEM_API UEnum* StaticEnum<ETaskMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
