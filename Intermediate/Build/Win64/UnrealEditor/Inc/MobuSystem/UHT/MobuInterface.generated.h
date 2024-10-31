// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/MobuInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOBUSYSTEM_MobuInterface_generated_h
#error "MobuInterface.generated.h already included, missing '#pragma once' in MobuInterface.h"
#endif
#define MOBUSYSTEM_MobuInterface_generated_h

#define FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Interface_MobuInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnMobuInteractionRangeExit_Implementation() {}; \
	virtual void OnMobuInteractionRangeEnter_Implementation() {}; \
	virtual void OnMobuInteract_Implementation() {}; \
	DECLARE_FUNCTION(execOnMobuInteractionRangeExit); \
	DECLARE_FUNCTION(execOnMobuInteractionRangeEnter); \
	DECLARE_FUNCTION(execOnMobuInteract);


#define FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Interface_MobuInterface_h_13_CALLBACK_WRAPPERS
#define FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Interface_MobuInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMobuInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMobuInterface(UMobuInterface&&); \
	UMobuInterface(const UMobuInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMobuInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMobuInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMobuInterface) \
	NO_API virtual ~UMobuInterface();


#define FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Interface_MobuInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMobuInterface(); \
	friend struct Z_Construct_UClass_UMobuInterface_Statics; \
public: \
	DECLARE_CLASS(UMobuInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MobuSystem"), NO_API) \
	DECLARE_SERIALIZER(UMobuInterface)


#define FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Interface_MobuInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Interface_MobuInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Interface_MobuInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Interface_MobuInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMobuInterface() {} \
public: \
	typedef UMobuInterface UClassType; \
	typedef IMobuInterface ThisClass; \
	static void Execute_OnMobuInteract(UObject* O); \
	static void Execute_OnMobuInteractionRangeEnter(UObject* O); \
	static void Execute_OnMobuInteractionRangeExit(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Interface_MobuInterface_h_10_PROLOG
#define FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Interface_MobuInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Interface_MobuInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Interface_MobuInterface_h_13_CALLBACK_WRAPPERS \
	FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Interface_MobuInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOBUSYSTEM_API UClass* StaticClass<class UMobuInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectMania_Plugins_MobuSystem_Source_MobuSystem_Public_Interface_MobuInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
