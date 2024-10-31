// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MobuSystem/Public/Component/MobuOscillator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobuOscillator() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MOBUSYSTEM_API UClass* Z_Construct_UClass_UMobuOscillator();
MOBUSYSTEM_API UClass* Z_Construct_UClass_UMobuOscillator_NoRegister();
UPackage* Z_Construct_UPackage__Script_MobuSystem();
// End Cross Module References

// Begin Class UMobuOscillator Function TransformedCos
struct Z_Construct_UFunction_UMobuOscillator_TransformedCos_Statics
{
	struct MobuOscillator_eventTransformedCos_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/MobuOscillator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMobuOscillator_TransformedCos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobuOscillator_eventTransformedCos_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobuOscillator_TransformedCos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobuOscillator_TransformedCos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobuOscillator_TransformedCos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobuOscillator_TransformedCos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobuOscillator, nullptr, "TransformedCos", nullptr, nullptr, Z_Construct_UFunction_UMobuOscillator_TransformedCos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobuOscillator_TransformedCos_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMobuOscillator_TransformedCos_Statics::MobuOscillator_eventTransformedCos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobuOscillator_TransformedCos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMobuOscillator_TransformedCos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMobuOscillator_TransformedCos_Statics::MobuOscillator_eventTransformedCos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMobuOscillator_TransformedCos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMobuOscillator_TransformedCos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMobuOscillator::execTransformedCos)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->TransformedCos();
	P_NATIVE_END;
}
// End Class UMobuOscillator Function TransformedCos

// Begin Class UMobuOscillator Function TransformedSin
struct Z_Construct_UFunction_UMobuOscillator_TransformedSin_Statics
{
	struct MobuOscillator_eventTransformedSin_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/MobuOscillator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMobuOscillator_TransformedSin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobuOscillator_eventTransformedSin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobuOscillator_TransformedSin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobuOscillator_TransformedSin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobuOscillator_TransformedSin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobuOscillator_TransformedSin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobuOscillator, nullptr, "TransformedSin", nullptr, nullptr, Z_Construct_UFunction_UMobuOscillator_TransformedSin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobuOscillator_TransformedSin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMobuOscillator_TransformedSin_Statics::MobuOscillator_eventTransformedSin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobuOscillator_TransformedSin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMobuOscillator_TransformedSin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMobuOscillator_TransformedSin_Statics::MobuOscillator_eventTransformedSin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMobuOscillator_TransformedSin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMobuOscillator_TransformedSin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMobuOscillator::execTransformedSin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->TransformedSin();
	P_NATIVE_END;
}
// End Class UMobuOscillator Function TransformedSin

// Begin Class UMobuOscillator
void UMobuOscillator::StaticRegisterNativesUMobuOscillator()
{
	UClass* Class = UMobuOscillator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TransformedCos", &UMobuOscillator::execTransformedCos },
		{ "TransformedSin", &UMobuOscillator::execTransformedSin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMobuOscillator);
UClass* Z_Construct_UClass_UMobuOscillator_NoRegister()
{
	return UMobuOscillator::StaticClass();
}
struct Z_Construct_UClass_UMobuOscillator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ClassGroup=(Custom), meta=(BlueprintSpawnableComponent)*/" },
#endif
		{ "IncludePath", "Component/MobuOscillator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Component/MobuOscillator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ClassGroup=(Custom), meta=(BlueprintSpawnableComponent)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Sine Parameters" },
		{ "ModuleRelativePath", "Public/Component/MobuOscillator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "Sine Parameters" },
		{ "ModuleRelativePath", "Public/Component/MobuOscillator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeConstant_MetaData[] = {
		{ "Category", "Sine Parameters" },
		{ "ModuleRelativePath", "Public/Component/MobuOscillator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeConstant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMobuOscillator_TransformedCos, "TransformedCos" }, // 576452559
		{ &Z_Construct_UFunction_UMobuOscillator_TransformedSin, "TransformedSin" }, // 878211283
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMobuOscillator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMobuOscillator_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMobuOscillator, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMobuOscillator_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMobuOscillator, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMobuOscillator_Statics::NewProp_TimeConstant = { "TimeConstant", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMobuOscillator, TimeConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeConstant_MetaData), NewProp_TimeConstant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMobuOscillator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMobuOscillator_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMobuOscillator_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMobuOscillator_Statics::NewProp_TimeConstant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMobuOscillator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMobuOscillator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MobuSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMobuOscillator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMobuOscillator_Statics::ClassParams = {
	&UMobuOscillator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMobuOscillator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMobuOscillator_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMobuOscillator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMobuOscillator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMobuOscillator()
{
	if (!Z_Registration_Info_UClass_UMobuOscillator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMobuOscillator.OuterSingleton, Z_Construct_UClass_UMobuOscillator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMobuOscillator.OuterSingleton;
}
template<> MOBUSYSTEM_API UClass* StaticClass<UMobuOscillator>()
{
	return UMobuOscillator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMobuOscillator);
UMobuOscillator::~UMobuOscillator() {}
// End Class UMobuOscillator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Component_MobuOscillator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMobuOscillator, UMobuOscillator::StaticClass, TEXT("UMobuOscillator"), &Z_Registration_Info_UClass_UMobuOscillator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMobuOscillator), 2685473182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Component_MobuOscillator_h_3171394009(TEXT("/Script/MobuSystem"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Component_MobuOscillator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MobuPlugin_Plugins_MobuSystem_Source_MobuSystem_Public_Component_MobuOscillator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
