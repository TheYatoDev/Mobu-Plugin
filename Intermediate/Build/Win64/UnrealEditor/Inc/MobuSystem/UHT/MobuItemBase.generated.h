// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item/MobuItemBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef MOBUSYSTEM_MobuItemBase_generated_h
#error "MobuItemBase.generated.h already included, missing '#pragma once' in MobuItemBase.h"
#endif
#define MOBUSYSTEM_MobuItemBase_generated_h

#define FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Item_MobuItemBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInteractionTextAttach); \
	DECLARE_FUNCTION(execGetInteractionText);


#define FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Item_MobuItemBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMobuItemBase(); \
	friend struct Z_Construct_UClass_AMobuItemBase_Statics; \
public: \
	DECLARE_CLASS(AMobuItemBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MobuSystem"), NO_API) \
	DECLARE_SERIALIZER(AMobuItemBase) \
	virtual UObject* _getUObject() const override { return const_cast<AMobuItemBase*>(this); }


#define FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Item_MobuItemBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMobuItemBase(AMobuItemBase&&); \
	AMobuItemBase(const AMobuItemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMobuItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMobuItemBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AMobuItemBase) \
	NO_API virtual ~AMobuItemBase();


#define FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Item_MobuItemBase_h_12_PROLOG
#define FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Item_MobuItemBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Item_MobuItemBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Item_MobuItemBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Item_MobuItemBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOBUSYSTEM_API UClass* StaticClass<class AMobuItemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Item_MobuItemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
