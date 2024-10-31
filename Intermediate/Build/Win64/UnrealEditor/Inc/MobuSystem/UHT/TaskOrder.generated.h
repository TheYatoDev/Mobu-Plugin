// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/TaskOrder.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOBUSYSTEM_TaskOrder_generated_h
#error "TaskOrder.generated.h already included, missing '#pragma once' in TaskOrder.h"
#endif
#define MOBUSYSTEM_TaskOrder_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Data_TaskOrder_h


#define FOREACH_ENUM_ETASKORDER(op) \
	op(ETaskOrder::Sequential) \
	op(ETaskOrder::Random) \
	op(ETaskOrder::Custom) 

enum class ETaskOrder : uint8;
template<> struct TIsUEnumClass<ETaskOrder> { enum { Value = true }; };
template<> MOBUSYSTEM_API UEnum* StaticEnum<ETaskOrder>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
