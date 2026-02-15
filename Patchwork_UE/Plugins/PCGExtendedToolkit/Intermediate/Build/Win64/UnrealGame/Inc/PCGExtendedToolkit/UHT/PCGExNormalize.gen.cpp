// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/PCGExNormalize.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExNormalize() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNormalizeSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNormalizeSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExNormalizeSettings **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNormalizeSettings;
UClass* UPCGExNormalizeSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExNormalizeSettings;
	if (!Z_Registration_Info_UClass_UPCGExNormalizeSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNormalizeSettings"),
			Z_Registration_Info_UClass_UPCGExNormalizeSettings.InnerSingleton,
			StaticRegisterNativesUPCGExNormalizeSettings,
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
	return Z_Registration_Info_UClass_UPCGExNormalizeSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNormalizeSettings_NoRegister()
{
	return UPCGExNormalizeSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNormalizeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/PCGExNormalize.h" },
		{ "ModuleRelativePath", "Public/Transform/PCGExNormalize.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "transform/normalize" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExNormalize.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExNormalize.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tile_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExNormalize.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wrapping_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Transform/PCGExNormalize.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneMinus_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExApplySampledComponentFlags" },
		{ "Category", "Settings" },
		{ "Comment", "/** Which components should be one minus'd */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExNormalize.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Which components should be one minus'd" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to read the transform from an attribute on the edge or a constant. */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExNormalize.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to read the transform from an attribute on the edge or a constant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Transform applied to the position before processing  */" },
		{ "DisplayName", "Transform (Attr)" },
		{ "EditCondition", "TransformInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExNormalize.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Transform applied to the position before processing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Transform applied to the position before processing  */" },
		{ "DisplayName", "Transform" },
		{ "EditCondition", "TransformInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExNormalize.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Transform applied to the position before processing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExNormalize.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNormalizeSettings constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundsSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundsSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tile;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Wrapping_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Wrapping;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OneMinus;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformConstant;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExNormalizeSettings constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNormalizeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNormalizeSettings_Statics

// ********** Begin Class UPCGExNormalizeSettings Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_BoundsSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_BoundsSource = { "BoundsSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNormalizeSettings, BoundsSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsSource_MetaData), NewProp_BoundsSource_MetaData) }; // 926722312
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNormalizeSettings, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNormalizeSettings, Tile), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tile_MetaData), NewProp_Tile_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_Wrapping_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_Wrapping = { "Wrapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNormalizeSettings, Wrapping), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wrapping_MetaData), NewProp_Wrapping_MetaData) }; // 122057320
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_OneMinus = { "OneMinus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNormalizeSettings, OneMinus), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneMinus_MetaData), NewProp_OneMinus_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_TransformInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_TransformInput = { "TransformInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNormalizeSettings, TransformInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformInput_MetaData), NewProp_TransformInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_TransformAttribute = { "TransformAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNormalizeSettings, TransformAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformAttribute_MetaData), NewProp_TransformAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_TransformConstant = { "TransformConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNormalizeSettings, TransformConstant), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformConstant_MetaData), NewProp_TransformConstant_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNormalizeSettings, Output), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Output_MetaData), NewProp_Output_MetaData) }; // 3844583698
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExNormalizeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_BoundsSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_BoundsSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_Tile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_Wrapping_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_Wrapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_OneMinus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_TransformInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_TransformInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_TransformAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_TransformConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNormalizeSettings_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNormalizeSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExNormalizeSettings Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPCGExNormalizeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNormalizeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNormalizeSettings_Statics::ClassParams = {
	&UPCGExNormalizeSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExNormalizeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNormalizeSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNormalizeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNormalizeSettings_Statics::Class_MetaDataParams)
};
void UPCGExNormalizeSettings::StaticRegisterNativesUPCGExNormalizeSettings()
{
}
UClass* Z_Construct_UClass_UPCGExNormalizeSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExNormalizeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNormalizeSettings.OuterSingleton, Z_Construct_UClass_UPCGExNormalizeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNormalizeSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNormalizeSettings);
UPCGExNormalizeSettings::~UPCGExNormalizeSettings() {}
// ********** End Class UPCGExNormalizeSettings ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExNormalize_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExNormalizeSettings, UPCGExNormalizeSettings::StaticClass, TEXT("UPCGExNormalizeSettings"), &Z_Registration_Info_UClass_UPCGExNormalizeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNormalizeSettings), 1921125615U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExNormalize_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExNormalize_h__Script_PCGExtendedToolkit_3297538441{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExNormalize_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExNormalize_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
