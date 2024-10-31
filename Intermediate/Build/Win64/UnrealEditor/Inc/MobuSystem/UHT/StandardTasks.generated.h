// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/StandardTasks.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOBUSYSTEM_StandardTasks_generated_h
#error "StandardTasks.generated.h already included, missing '#pragma once' in StandardTasks.h"
#endif
#define MOBUSYSTEM_StandardTasks_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Data_StandardTasks_h


#define FOREACH_ENUM_ESTANDARDTASKS(op) \
	op(EStandardTasks::Home) \
	op(EStandardTasks::Bounds) \
	op(EStandardTasks::Waypoint) \
	op(EStandardTasks::Path) 

enum class EStandardTasks : uint8;
template<> struct TIsUEnumClass<EStandardTasks> { enum { Value = true }; };
template<> MOBUSYSTEM_API UEnum* StaticEnum<EStandardTasks>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
