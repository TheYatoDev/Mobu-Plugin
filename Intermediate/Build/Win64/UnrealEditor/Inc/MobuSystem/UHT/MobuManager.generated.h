// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/MobuManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOBUSYSTEM_MobuManager_generated_h
#error "MobuManager.generated.h already included, missing '#pragma once' in MobuManager.h"
#endif
#define MOBUSYSTEM_MobuManager_generated_h

#define FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Core_MobuManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMobuManager(); \
	friend struct Z_Construct_UClass_AMobuManager_Statics; \
public: \
	DECLARE_CLASS(AMobuManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MobuSystem"), NO_API) \
	DECLARE_SERIALIZER(AMobuManager)


#define FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Core_MobuManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMobuManager(AMobuManager&&); \
	AMobuManager(const AMobuManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMobuManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMobuManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMobuManager) \
	NO_API virtual ~AMobuManager();


#define FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Core_MobuManager_h_11_PROLOG
#define FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Core_MobuManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Core_MobuManager_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Core_MobuManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOBUSYSTEM_API UClass* StaticClass<class AMobuManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Core_MobuManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
