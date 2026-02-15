// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExPathSplineMesh.h"
#include "Collections/PCGExComponentDescriptors.h"
#include "Details/PCGExDetailsStaging.h"
#include "Metadata/PCGAttributePropertySelector.h"
#include "Metadata/PCGObjectPropertyOverride.h"
#include "Paths/PCGExPaths.h"
#include "Paths/Tangents/PCGExTangentsInstancedFactory.h"
#include "Transform/PCGExFitting.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPathSplineMesh() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGObjectPropertyOverrideDescription();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMeshCollection_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathSplineMeshSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathSplineMeshSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionSource();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshUpMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWeightOutputMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExJustificationDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExScaleToFitDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTangentsDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExPathSplineMeshSettings *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPathSplineMeshSettings;
UClass* UPCGExPathSplineMeshSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPathSplineMeshSettings;
	if (!Z_Registration_Info_UClass_UPCGExPathSplineMeshSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPathSplineMeshSettings"),
			Z_Registration_Info_UClass_UPCGExPathSplineMeshSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPathSplineMeshSettings,
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
	return Z_Registration_Info_UClass_UPCGExPathSplineMeshSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPathSplineMeshSettings_NoRegister()
{
	return UPCGExPathSplineMeshSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExPathSplineMesh.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "paths/spline-mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectionSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetCollection_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "CollectionSource == EPCGExCollectionSource::Asset" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSetDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "CollectionSource == EPCGExCollectionSource::AttributeSet" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistributionSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Distribution details */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Distribution details" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialDistributionSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How should materials be distributed and picked. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How should materials be distributed and picked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyCustomTangents_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangentAttribute_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangentAttribute_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshAxisConstant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Per-point tangent settings. Can't be set if the spline is linear. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Per-point tangent settings. Can't be set if the spline is linear." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleToFit_MetaData[] = {
		{ "Category", "Settings|Fitting" },
		{ "Comment", "/** If enabled, will break scaling interpolation across the spline. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will break scaling interpolation across the spline." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Justification_MetaData[] = {
		{ "Category", "Settings|Fitting" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MutationDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Push details */" },
		{ "DisplayName", "Expansion" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Push details" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPathAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** The name of the attribute to write asset path to.*/" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The name of the attribute to write asset path to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaggingDetails_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Tagging details */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tagging details" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightToAttribute_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Update point scale so staged asset fits within its bounds */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Update point scale so staged asset fits within its bounds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** The name of the attribute to write asset weight to.*/" },
		{ "EditCondition", "WeightToAttribute != EPCGExWeightOutputMode::NoOutput && WeightToAttribute != EPCGExWeightOutputMode::NormalizedToDensity && WeightToAttribute != EPCGExWeightOutputMode::NormalizedInvertedToDensity" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The name of the attribute to write asset weight to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshUpMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshUpVectorAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Spline Mesh Up Vector (Attr)" },
		{ "EditCondition", "SplineMeshUpMode == EPCGExSplineMeshUpMode::Attribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshUpVector_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Spline Mesh Up Vector" },
		{ "EditCondition", "SplineMeshUpMode == EPCGExSplineMeshUpMode::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDescriptor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Default static mesh config applied to spline mesh components. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
		{ "ToolTip", "Default static mesh config applied to spline mesh components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceDefaultDescriptor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, override collection settings with the default descriptor settings */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Force Default Descriptor" },
		{ "EditCondition", "CollectionSource != EPCGExCollectionSource::AttributeSet" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, override collection settings with the default descriptor settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyOverrideDescriptions_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessFunctionNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Specify a list of functions to be called on the target actor after spline mesh creation. Functions need to be parameter-less and with \"CallInEditor\" flag enabled. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMesh.h" },
		{ "ToolTip", "Specify a list of functions to be called on the target actor after spline mesh creation. Functions need to be parameter-less and with \"CallInEditor\" flag enabled." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPathSplineMeshSettings constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollectionSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollectionSource;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AssetCollection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeSetDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistributionSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialDistributionSettings;
	static void NewProp_bApplyCustomTangents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyCustomTangents;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArriveTangentAttribute;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LeaveTangentAttribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SplineMeshAxisConstant_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SplineMeshAxisConstant;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleToFit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Justification;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MutationDetails;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetPathAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaggingDetails;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeightToAttribute_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeightToAttribute;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeightAttributeName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SplineMeshUpMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SplineMeshUpMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SplineMeshUpVectorAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SplineMeshUpVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultDescriptor;
	static void NewProp_bForceDefaultDescriptor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceDefaultDescriptor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyOverrideDescriptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyOverrideDescriptions;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PostProcessFunctionNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PostProcessFunctionNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPathSplineMeshSettings constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPathSplineMeshSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics

// ********** Begin Class UPCGExPathSplineMeshSettings Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_CollectionSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_CollectionSource = { "CollectionSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, CollectionSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCollectionSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectionSource_MetaData), NewProp_CollectionSource_MetaData) }; // 1613534763
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_AssetCollection = { "AssetCollection", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, AssetCollection), Z_Construct_UClass_UPCGExMeshCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetCollection_MetaData), NewProp_AssetCollection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_AttributeSetDetails = { "AttributeSetDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, AttributeSetDetails), Z_Construct_UScriptStruct_FPCGExRoamingAssetCollectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSetDetails_MetaData), NewProp_AttributeSetDetails_MetaData) }; // 127131122
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_DistributionSettings = { "DistributionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, DistributionSettings), Z_Construct_UScriptStruct_FPCGExAssetDistributionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistributionSettings_MetaData), NewProp_DistributionSettings_MetaData) }; // 2045492251
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_MaterialDistributionSettings = { "MaterialDistributionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, MaterialDistributionSettings), Z_Construct_UScriptStruct_FPCGExMicroCacheDistributionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialDistributionSettings_MetaData), NewProp_MaterialDistributionSettings_MetaData) }; // 3760200020
void Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_bApplyCustomTangents_SetBit(void* Obj)
{
	((UPCGExPathSplineMeshSettings*)Obj)->bApplyCustomTangents_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_bApplyCustomTangents = { "bApplyCustomTangents", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathSplineMeshSettings), &Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_bApplyCustomTangents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyCustomTangents_MetaData), NewProp_bApplyCustomTangents_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_ArriveTangentAttribute = { "ArriveTangentAttribute", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, ArriveTangentAttribute_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveTangentAttribute_MetaData), NewProp_ArriveTangentAttribute_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_LeaveTangentAttribute = { "LeaveTangentAttribute", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, LeaveTangentAttribute_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveTangentAttribute_MetaData), NewProp_LeaveTangentAttribute_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_SplineMeshAxisConstant_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_SplineMeshAxisConstant = { "SplineMeshAxisConstant", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, SplineMeshAxisConstant_DEPRECATED), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMeshAxisConstant_MetaData), NewProp_SplineMeshAxisConstant_MetaData) }; // 904353693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, Tangents), Z_Construct_UScriptStruct_FPCGExTangentsDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tangents_MetaData), NewProp_Tangents_MetaData) }; // 2695381813
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_ScaleToFit = { "ScaleToFit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, ScaleToFit), Z_Construct_UScriptStruct_FPCGExScaleToFitDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleToFit_MetaData), NewProp_ScaleToFit_MetaData) }; // 344909932
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_Justification = { "Justification", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, Justification), Z_Construct_UScriptStruct_FPCGExJustificationDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Justification_MetaData), NewProp_Justification_MetaData) }; // 161038766
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_MutationDetails = { "MutationDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, MutationDetails), Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MutationDetails_MetaData), NewProp_MutationDetails_MetaData) }; // 668750296
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_AssetPathAttributeName = { "AssetPathAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, AssetPathAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPathAttributeName_MetaData), NewProp_AssetPathAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_TaggingDetails = { "TaggingDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, TaggingDetails), Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaggingDetails_MetaData), NewProp_TaggingDetails_MetaData) }; // 1519111645
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_WeightToAttribute_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_WeightToAttribute = { "WeightToAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, WeightToAttribute), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWeightOutputMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightToAttribute_MetaData), NewProp_WeightToAttribute_MetaData) }; // 3422170499
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_WeightAttributeName = { "WeightAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, WeightAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightAttributeName_MetaData), NewProp_WeightAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_SplineMeshUpMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_SplineMeshUpMode = { "SplineMeshUpMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, SplineMeshUpMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshUpMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMeshUpMode_MetaData), NewProp_SplineMeshUpMode_MetaData) }; // 2035307606
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_SplineMeshUpVectorAttribute = { "SplineMeshUpVectorAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, SplineMeshUpVectorAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMeshUpVectorAttribute_MetaData), NewProp_SplineMeshUpVectorAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_SplineMeshUpVector = { "SplineMeshUpVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, SplineMeshUpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMeshUpVector_MetaData), NewProp_SplineMeshUpVector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_DefaultDescriptor = { "DefaultDescriptor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, DefaultDescriptor), Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDescriptor_MetaData), NewProp_DefaultDescriptor_MetaData) }; // 3445229925
void Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_bForceDefaultDescriptor_SetBit(void* Obj)
{
	((UPCGExPathSplineMeshSettings*)Obj)->bForceDefaultDescriptor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_bForceDefaultDescriptor = { "bForceDefaultDescriptor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathSplineMeshSettings), &Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_bForceDefaultDescriptor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceDefaultDescriptor_MetaData), NewProp_bForceDefaultDescriptor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_PropertyOverrideDescriptions_Inner = { "PropertyOverrideDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGObjectPropertyOverrideDescription, METADATA_PARAMS(0, nullptr) }; // 2847192473
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_PropertyOverrideDescriptions = { "PropertyOverrideDescriptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, PropertyOverrideDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyOverrideDescriptions_MetaData), NewProp_PropertyOverrideDescriptions_MetaData) }; // 2847192473
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_PostProcessFunctionNames_Inner = { "PostProcessFunctionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_PostProcessFunctionNames = { "PostProcessFunctionNames", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSettings, PostProcessFunctionNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessFunctionNames_MetaData), NewProp_PostProcessFunctionNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_CollectionSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_CollectionSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_AssetCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_AttributeSetDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_DistributionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_MaterialDistributionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_bApplyCustomTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_ArriveTangentAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_LeaveTangentAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_SplineMeshAxisConstant_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_SplineMeshAxisConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_Tangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_ScaleToFit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_Justification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_MutationDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_AssetPathAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_TaggingDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_WeightToAttribute_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_WeightToAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_WeightAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_SplineMeshUpMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_SplineMeshUpMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_SplineMeshUpVectorAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_SplineMeshUpVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_DefaultDescriptor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_bForceDefaultDescriptor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_PropertyOverrideDescriptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_PropertyOverrideDescriptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_PostProcessFunctionNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::NewProp_PostProcessFunctionNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPathSplineMeshSettings Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::ClassParams = {
	&UPCGExPathSplineMeshSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::Class_MetaDataParams)
};
void UPCGExPathSplineMeshSettings::StaticRegisterNativesUPCGExPathSplineMeshSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPathSplineMeshSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPathSplineMeshSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPathSplineMeshSettings.OuterSingleton, Z_Construct_UClass_UPCGExPathSplineMeshSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPathSplineMeshSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPathSplineMeshSettings);
UPCGExPathSplineMeshSettings::~UPCGExPathSplineMeshSettings() {}
// ********** End Class UPCGExPathSplineMeshSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSplineMesh_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPathSplineMeshSettings, UPCGExPathSplineMeshSettings::StaticClass, TEXT("UPCGExPathSplineMeshSettings"), &Z_Registration_Info_UClass_UPCGExPathSplineMeshSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPathSplineMeshSettings), 3550063994U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSplineMesh_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSplineMesh_h__Script_PCGExtendedToolkit_322408736{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSplineMesh_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSplineMesh_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
