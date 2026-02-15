// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExPathSplineMeshSimple.h"
#include "Collections/PCGExComponentDescriptors.h"
#include "Details/PCGExDetailsStaging.h"
#include "Metadata/PCGAttributePropertySelector.h"
#include "Metadata/PCGObjectPropertyOverride.h"
#include "Paths/PCGExPaths.h"
#include "Paths/Tangents/PCGExTangentsInstancedFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPathSplineMeshSimple() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGObjectPropertyOverrideDescription();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshUpMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTangentsDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExPathSplineMeshSimpleSettings ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPathSplineMeshSimpleSettings;
UClass* UPCGExPathSplineMeshSimpleSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPathSplineMeshSimpleSettings;
	if (!Z_Registration_Info_UClass_UPCGExPathSplineMeshSimpleSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPathSplineMeshSimpleSettings"),
			Z_Registration_Info_UClass_UPCGExPathSplineMeshSimpleSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPathSplineMeshSimpleSettings,
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
	return Z_Registration_Info_UClass_UPCGExPathSplineMeshSimpleSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_NoRegister()
{
	return UPCGExPathSplineMeshSimpleSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExPathSplineMeshSimple.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "paths/spline-mesh/spline-mesh-simple" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How the asset gets selected */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How the asset gets selected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPathAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The name of the attribute to write asset path to.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Asset (Attr)" },
		{ "EditCondition", "AssetType != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The name of the attribute to write asset path to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Constant static mesh .*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Asset" },
		{ "EditCondition", "AssetType == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant static mesh ." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReadMaterialFromAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The name of the attribute to write material path to.*/" },
		{ "EditCondition", "bReadMaterialFromAttribute" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The name of the attribute to write material path to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The index of the slot to set the material to, if found.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Slot" },
		{ "EditCondition", "bReadMaterialFromAttribute" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The index of the slot to set the material to, if found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "Settings|Target Actor" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyCustomTangents_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangentAttribute_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangentAttribute_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Per-point tangent settings. Can't be set if the spline is linear. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Per-point tangent settings. Can't be set if the spline is linear." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartOffsetInput_MetaData[] = {
		{ "Category", "Settings|Mutations|Offsets" },
		{ "Comment", "/** Type of Start Offset */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Type of Start Offset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartOffsetAttribute_MetaData[] = {
		{ "Category", "Settings|Mutations|Offsets" },
		{ "Comment", "/** Start Offset Attribute (Vector 2 expected)*/" },
		{ "DisplayName", "Start Offset (Attr)" },
		{ "EditCondition", "StartOffsetInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Start Offset Attribute (Vector 2 expected)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
		{ "Category", "Settings|Mutations|Offsets" },
		{ "Comment", "/** Start Offset Constant */" },
		{ "DisplayName", "Start Offset" },
		{ "EditCondition", "StartOffsetInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Start Offset Constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndOffsetInput_MetaData[] = {
		{ "Category", "Settings|Mutations|Offsets" },
		{ "Comment", "/** Type of End Offset */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Type of End Offset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndOffsetAttribute_MetaData[] = {
		{ "Category", "Settings|Mutations|Offsets" },
		{ "Comment", "/** End Offset Attribute (Vector 2 expected)*/" },
		{ "DisplayName", "End Offset (Attr)" },
		{ "EditCondition", "EndOffsetInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "End Offset Attribute (Vector 2 expected)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[] = {
		{ "Category", "Settings|Mutations|Offsets" },
		{ "Comment", "/** End Offset Constant */" },
		{ "DisplayName", "End Offset" },
		{ "EditCondition", "EndOffsetInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "End Offset Constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MutationDetails_MetaData[] = {
		{ "Category", "Settings|Mutations" },
		{ "Comment", "/** Push details */" },
		{ "DisplayName", "Expansion" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Push details" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshUpMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshUpVectorAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Spline Mesh Up Vector (Attr)" },
		{ "EditCondition", "SplineMeshUpMode == EPCGExSplineMeshUpMode::Attribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshUpVector_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Spline Mesh Up Vector" },
		{ "EditCondition", "SplineMeshUpMode == EPCGExSplineMeshUpMode::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshAxisConstant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaggingDetails_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Tagging details */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tagging details" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshDescriptor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Default static mesh config applied to spline mesh components. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "ToolTip", "Default static mesh config applied to spline mesh components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyOverrideDescriptions_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessFunctionNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Specify a list of functions to be called on the target actor after spline mesh creation. Functions need to be parameter-less and with \"CallInEditor\" flag enabled. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSplineMeshSimple.h" },
		{ "ToolTip", "Specify a list of functions to be called on the target actor after spline mesh creation. Functions need to be parameter-less and with \"CallInEditor\" flag enabled." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPathSplineMeshSimpleSettings constinit property declarations *******
	static const UECodeGen_Private::FBytePropertyParams NewProp_AssetType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetPathAttributeName;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
	static void NewProp_bReadMaterialFromAttribute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadMaterialFromAttribute;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialSlotConstant;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetActor;
	static void NewProp_bApplyCustomTangents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyCustomTangents;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArriveTangentAttribute;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LeaveTangentAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StartOffsetInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StartOffsetInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartOffsetAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EndOffsetInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EndOffsetInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EndOffsetAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MutationDetails;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SplineMeshUpMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SplineMeshUpMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SplineMeshUpVectorAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SplineMeshUpVector;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SplineMeshAxisConstant_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SplineMeshAxisConstant;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaggingDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshDescriptor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyOverrideDescriptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyOverrideDescriptions;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PostProcessFunctionNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PostProcessFunctionNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPathSplineMeshSimpleSettings constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPathSplineMeshSimpleSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics

// ********** Begin Class UPCGExPathSplineMeshSimpleSettings Property Definitions ******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_AssetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_AssetType = { "AssetType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, AssetType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetType_MetaData), NewProp_AssetType_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_AssetPathAttributeName = { "AssetPathAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, AssetPathAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPathAttributeName_MetaData), NewProp_AssetPathAttributeName_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
void Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_bReadMaterialFromAttribute_SetBit(void* Obj)
{
	((UPCGExPathSplineMeshSimpleSettings*)Obj)->bReadMaterialFromAttribute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_bReadMaterialFromAttribute = { "bReadMaterialFromAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathSplineMeshSimpleSettings), &Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_bReadMaterialFromAttribute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReadMaterialFromAttribute_MetaData), NewProp_bReadMaterialFromAttribute_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_MaterialAttributeName = { "MaterialAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, MaterialAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialAttributeName_MetaData), NewProp_MaterialAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_MaterialSlotConstant = { "MaterialSlotConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, MaterialSlotConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSlotConstant_MetaData), NewProp_MaterialSlotConstant_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
void Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_bApplyCustomTangents_SetBit(void* Obj)
{
	((UPCGExPathSplineMeshSimpleSettings*)Obj)->bApplyCustomTangents_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_bApplyCustomTangents = { "bApplyCustomTangents", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathSplineMeshSimpleSettings), &Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_bApplyCustomTangents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyCustomTangents_MetaData), NewProp_bApplyCustomTangents_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_ArriveTangentAttribute = { "ArriveTangentAttribute", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, ArriveTangentAttribute_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveTangentAttribute_MetaData), NewProp_ArriveTangentAttribute_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_LeaveTangentAttribute = { "LeaveTangentAttribute", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, LeaveTangentAttribute_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveTangentAttribute_MetaData), NewProp_LeaveTangentAttribute_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, Tangents), Z_Construct_UScriptStruct_FPCGExTangentsDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tangents_MetaData), NewProp_Tangents_MetaData) }; // 2695381813
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_StartOffsetInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_StartOffsetInput = { "StartOffsetInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, StartOffsetInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartOffsetInput_MetaData), NewProp_StartOffsetInput_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_StartOffsetAttribute = { "StartOffsetAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, StartOffsetAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartOffsetAttribute_MetaData), NewProp_StartOffsetAttribute_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, StartOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartOffset_MetaData), NewProp_StartOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_EndOffsetInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_EndOffsetInput = { "EndOffsetInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, EndOffsetInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndOffsetInput_MetaData), NewProp_EndOffsetInput_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_EndOffsetAttribute = { "EndOffsetAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, EndOffsetAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndOffsetAttribute_MetaData), NewProp_EndOffsetAttribute_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, EndOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndOffset_MetaData), NewProp_EndOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_MutationDetails = { "MutationDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, MutationDetails), Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MutationDetails_MetaData), NewProp_MutationDetails_MetaData) }; // 668750296
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_SplineMeshUpMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_SplineMeshUpMode = { "SplineMeshUpMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, SplineMeshUpMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineMeshUpMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMeshUpMode_MetaData), NewProp_SplineMeshUpMode_MetaData) }; // 2035307606
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_SplineMeshUpVectorAttribute = { "SplineMeshUpVectorAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, SplineMeshUpVectorAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMeshUpVectorAttribute_MetaData), NewProp_SplineMeshUpVectorAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_SplineMeshUpVector = { "SplineMeshUpVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, SplineMeshUpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMeshUpVector_MetaData), NewProp_SplineMeshUpVector_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_SplineMeshAxisConstant_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_SplineMeshAxisConstant = { "SplineMeshAxisConstant", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, SplineMeshAxisConstant_DEPRECATED), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMeshAxisConstant_MetaData), NewProp_SplineMeshAxisConstant_MetaData) }; // 904353693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_TaggingDetails = { "TaggingDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, TaggingDetails), Z_Construct_UScriptStruct_FPCGExAssetTaggingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaggingDetails_MetaData), NewProp_TaggingDetails_MetaData) }; // 1519111645
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_StaticMeshDescriptor = { "StaticMeshDescriptor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, StaticMeshDescriptor), Z_Construct_UScriptStruct_FPCGExStaticMeshComponentDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshDescriptor_MetaData), NewProp_StaticMeshDescriptor_MetaData) }; // 3445229925
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_PropertyOverrideDescriptions_Inner = { "PropertyOverrideDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGObjectPropertyOverrideDescription, METADATA_PARAMS(0, nullptr) }; // 2847192473
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_PropertyOverrideDescriptions = { "PropertyOverrideDescriptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, PropertyOverrideDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyOverrideDescriptions_MetaData), NewProp_PropertyOverrideDescriptions_MetaData) }; // 2847192473
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_PostProcessFunctionNames_Inner = { "PostProcessFunctionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_PostProcessFunctionNames = { "PostProcessFunctionNames", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSplineMeshSimpleSettings, PostProcessFunctionNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessFunctionNames_MetaData), NewProp_PostProcessFunctionNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_AssetType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_AssetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_AssetPathAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_bReadMaterialFromAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_MaterialAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_MaterialSlotConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_bApplyCustomTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_ArriveTangentAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_LeaveTangentAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_Tangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_StartOffsetInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_StartOffsetInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_StartOffsetAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_StartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_EndOffsetInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_EndOffsetInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_EndOffsetAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_EndOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_MutationDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_SplineMeshUpMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_SplineMeshUpMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_SplineMeshUpVectorAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_SplineMeshUpVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_SplineMeshAxisConstant_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_SplineMeshAxisConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_TaggingDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_StaticMeshDescriptor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_PropertyOverrideDescriptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_PropertyOverrideDescriptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_PostProcessFunctionNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::NewProp_PostProcessFunctionNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPathSplineMeshSimpleSettings Property Definitions ********************
UObject* (*const Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::ClassParams = {
	&UPCGExPathSplineMeshSimpleSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::Class_MetaDataParams)
};
void UPCGExPathSplineMeshSimpleSettings::StaticRegisterNativesUPCGExPathSplineMeshSimpleSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPathSplineMeshSimpleSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPathSplineMeshSimpleSettings.OuterSingleton, Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPathSplineMeshSimpleSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPathSplineMeshSimpleSettings);
UPCGExPathSplineMeshSimpleSettings::~UPCGExPathSplineMeshSimpleSettings() {}
// ********** End Class UPCGExPathSplineMeshSimpleSettings *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSplineMeshSimple_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPathSplineMeshSimpleSettings, UPCGExPathSplineMeshSimpleSettings::StaticClass, TEXT("UPCGExPathSplineMeshSimpleSettings"), &Z_Registration_Info_UClass_UPCGExPathSplineMeshSimpleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPathSplineMeshSimpleSettings), 1962760612U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSplineMeshSimple_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSplineMeshSimple_h__Script_PCGExtendedToolkit_1394068159{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSplineMeshSimple_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSplineMeshSimple_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
