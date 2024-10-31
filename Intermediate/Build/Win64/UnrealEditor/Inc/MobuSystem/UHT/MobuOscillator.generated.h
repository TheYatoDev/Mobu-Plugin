// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Component/MobuOscillator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOBUSYSTEM_MobuOscillator_generated_h
#error "MobuOscillator.generated.h already included, missing '#pragma once' in MobuOscillator.h"
#endif
#define MOBUSYSTEM_MobuOscillator_generated_h

#define FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Component_MobuOscillator_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTransformedCos); \
	DECLARE_FUNCTION(execTransformedSin);


#define FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Component_MobuOscillator_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMobuOscillator(); \
	friend struct Z_Construct_UClass_UMobuOscillator_Statics; \
public: \
	DECLARE_CLASS(UMobuOscillator, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MobuSystem"), NO_API) \
	DECLARE_SERIALIZER(UMobuOscillator)


#define FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Component_MobuOscillator_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMobuOscillator(UMobuOscillator&&); \
	UMobuOscillator(const UMobuOscillator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMobuOscillator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMobuOscillator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMobuOscillator) \
	NO_API virtual ~UMobuOscillator();


#define FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Component_MobuOscillator_h_10_PROLOG
#define FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Component_MobuOscillator_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Component_MobuOscillator_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Component_MobuOscillator_h_13_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Component_MobuOscillator_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOBUSYSTEM_API UClass* StaticClass<class UMobuOscillator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Component_MobuOscillator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
