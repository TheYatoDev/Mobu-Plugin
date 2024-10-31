// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/StationType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOBUSYSTEM_StationType_generated_h
#error "StationType.generated.h already included, missing '#pragma once' in StationType.h"
#endif
#define MOBUSYSTEM_StationType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Data_StationType_h


#define FOREACH_ENUM_ESTATIONTYPE(op) \
	op(EStationType::Regular) \
	op(EStationType::Linked) \
	op(EStationType::Sequence) 

enum class EStationType : uint8;
template<> struct TIsUEnumClass<EStationType> { enum { Value = true }; };
template<> MOBUSYSTEM_API UEnum* StaticEnum<EStationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
