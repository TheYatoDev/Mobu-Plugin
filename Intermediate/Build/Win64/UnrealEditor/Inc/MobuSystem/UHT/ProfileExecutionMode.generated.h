// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/ProfileExecutionMode.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOBUSYSTEM_ProfileExecutionMode_generated_h
#error "ProfileExecutionMode.generated.h already included, missing '#pragma once' in ProfileExecutionMode.h"
#endif
#define MOBUSYSTEM_ProfileExecutionMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_ProfileExecutionMode_h


#define FOREACH_ENUM_EPROFILEEXECUTIONMODE(op) \
	op(EProfileExecutionMode::RepeatIndefinitely) \
	op(EProfileExecutionMode::ReturnHome) \
	op(EProfileExecutionMode::LoopLastTaskIndefinitely) 

enum class EProfileExecutionMode : uint8;
template<> struct TIsUEnumClass<EProfileExecutionMode> { enum { Value = true }; };
template<> MOBUSYSTEM_API UEnum* StaticEnum<EProfileExecutionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
