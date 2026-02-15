// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExIterations.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExIterations() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExIterationsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExIterationsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIterationDataType();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExIterationDataType ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExIterationDataType;
static UEnum* EPCGExIterationDataType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExIterationDataType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExIterationDataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIterationDataType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExIterationDataType"));
	}
	return Z_Registration_Info_UEnum_EPCGExIterationDataType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExIterationDataType>()
{
	return EPCGExIterationDataType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIterationDataType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Any.DisplayName", "Any" },
		{ "Any.Name", "EPCGExIterationDataType::Any" },
		{ "Any.Tooltip", "Output dummy iteration data of type Attribute set, using an untyped pin." },
		{ "ModuleRelativePath", "Public/Misc/PCGExIterations.h" },
		{ "Params.DisplayName", "Attribute Set" },
		{ "Params.Name", "EPCGExIterationDataType::Params" },
		{ "Params.Tooltip", "Output dummy iteration data of type Attribute set." },
		{ "Points.DisplayName", "Points" },
		{ "Points.Name", "EPCGExIterationDataType::Points" },
		{ "Points.Tooltip", "Output dummy iteration data of type Points." },
		{ "Spline.DisplayName", "Spline" },
		{ "Spline.Name", "EPCGExIterationDataType::Spline" },
		{ "Spline.Tooltip", "Output dummy iteration data of type Spline." },
		{ "Texture.DisplayName", "Texture" },
		{ "Texture.Name", "EPCGExIterationDataType::Texture" },
		{ "Texture.Tooltip", "Output dummy iteration data of type Texture." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExIterationDataType::Any", (int64)EPCGExIterationDataType::Any },
		{ "EPCGExIterationDataType::Params", (int64)EPCGExIterationDataType::Params },
		{ "EPCGExIterationDataType::Points", (int64)EPCGExIterationDataType::Points },
		{ "EPCGExIterationDataType::Spline", (int64)EPCGExIterationDataType::Spline },
		{ "EPCGExIterationDataType::Texture", (int64)EPCGExIterationDataType::Texture },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIterationDataType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIterationDataType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExIterationDataType",
	"EPCGExIterationDataType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIterationDataType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIterationDataType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIterationDataType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIterationDataType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIterationDataType()
{
	if (!Z_Registration_Info_UEnum_EPCGExIterationDataType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExIterationDataType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIterationDataType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExIterationDataType.InnerSingleton;
}
// ********** End Enum EPCGExIterationDataType *****************************************************

// ********** Begin Class UPCGExIterationsSettings *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExIterationsSettings;
UClass* UPCGExIterationsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExIterationsSettings;
	if (!Z_Registration_Info_UClass_UPCGExIterationsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExIterationsSettings"),
			Z_Registration_Info_UClass_UPCGExIterationsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExIterationsSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UPCGExIterationsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExIterationsSettings_NoRegister()
{
	return UPCGExIterationsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExIterationsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExIterations.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExIterations.h" },
		{ "PCGExNodeLibraryDoc", "quality-of-life/iterations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Type of data to generate. This is useful if you build subgraphs that are meant to be used as both loops and regular subgraphs, so you can have properly typed pins. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExIterations.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of data to generate. This is useful if you build subgraphs that are meant to be used as both loops and regular subgraphs, so you can have properly typed pins." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of dataset to generate */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExIterations.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Number of dataset to generate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputUtils_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Output per-iteration params with useful values. Less optimized than the non-value version */" },
		{ "EditCondition", "Type = EPCGExIterationDataType::Params" },
		{ "ModuleRelativePath", "Public/Misc/PCGExIterations.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Output per-iteration params with useful values. Less optimized than the non-value version" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExIterationsSettings constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
	static void NewProp_bOutputUtils_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputUtils;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExIterationsSettings constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExIterationsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExIterationsSettings_Statics

// ********** Begin Class UPCGExIterationsSettings Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExIterationsSettings_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExIterationsSettings_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExIterationsSettings, Type), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIterationDataType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3865489390
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExIterationsSettings_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExIterationsSettings, Iterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Iterations_MetaData), NewProp_Iterations_MetaData) };
void Z_Construct_UClass_UPCGExIterationsSettings_Statics::NewProp_bOutputUtils_SetBit(void* Obj)
{
	((UPCGExIterationsSettings*)Obj)->bOutputUtils = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExIterationsSettings_Statics::NewProp_bOutputUtils = { "bOutputUtils", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExIterationsSettings), &Z_Construct_UClass_UPCGExIterationsSettings_Statics::NewProp_bOutputUtils_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputUtils_MetaData), NewProp_bOutputUtils_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExIterationsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExIterationsSettings_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExIterationsSettings_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExIterationsSettings_Statics::NewProp_Iterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExIterationsSettings_Statics::NewProp_bOutputUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExIterationsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExIterationsSettings Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPCGExIterationsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExIterationsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExIterationsSettings_Statics::ClassParams = {
	&UPCGExIterationsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExIterationsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExIterationsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExIterationsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExIterationsSettings_Statics::Class_MetaDataParams)
};
void UPCGExIterationsSettings::StaticRegisterNativesUPCGExIterationsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExIterationsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExIterationsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExIterationsSettings.OuterSingleton, Z_Construct_UClass_UPCGExIterationsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExIterationsSettings.OuterSingleton;
}
UPCGExIterationsSettings::UPCGExIterationsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExIterationsSettings);
UPCGExIterationsSettings::~UPCGExIterationsSettings() {}
// ********** End Class UPCGExIterationsSettings ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExIterations_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExIterationDataType_StaticEnum, TEXT("EPCGExIterationDataType"), &Z_Registration_Info_UEnum_EPCGExIterationDataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3865489390U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExIterationsSettings, UPCGExIterationsSettings::StaticClass, TEXT("UPCGExIterationsSettings"), &Z_Registration_Info_UClass_UPCGExIterationsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExIterationsSettings), 1225217107U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExIterations_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExIterations_h__Script_PCGExtendedToolkit_2155513635{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExIterations_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExIterations_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExIterations_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExIterations_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
