// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGExMeshToClusters.h"
#include "Data/PCGExDataForward.h"
#include "Geometry/PCGExGeoMesh.h"
#include "Graph/PCGExGraph.h"
#include "Transform/PCGExFitting.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExMeshToClusters() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMeshToClustersSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMeshToClustersSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeshAttributeHandling();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTriangulationType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExForwardDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTransformDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExMeshAttributeHandling ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExMeshAttributeHandling;
static UEnum* EPCGExMeshAttributeHandling_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExMeshAttributeHandling.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExMeshAttributeHandling.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeshAttributeHandling, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExMeshAttributeHandling"));
	}
	return Z_Registration_Info_UEnum_EPCGExMeshAttributeHandling.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMeshAttributeHandling>()
{
	return EPCGExMeshAttributeHandling_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeshAttributeHandling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActorReference.DisplayName", "Actor Reference" },
		{ "ActorReference.Name", "EPCGExMeshAttributeHandling::ActorReference" },
		{ "ActorReference.ToolTip", "Read the attribute as an actor reference to extract primitive from." },
		{ "ModuleRelativePath", "Public/Graph/PCGExMeshToClusters.h" },
		{ "StaticMeshSoftPath.DisplayName", "StaticMesh Soft Path" },
		{ "StaticMeshSoftPath.Name", "EPCGExMeshAttributeHandling::StaticMeshSoftPath" },
		{ "StaticMeshSoftPath.ToolTip", "Read the attribute as a StaticMesh soft path." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExMeshAttributeHandling::StaticMeshSoftPath", (int64)EPCGExMeshAttributeHandling::StaticMeshSoftPath },
		{ "EPCGExMeshAttributeHandling::ActorReference", (int64)EPCGExMeshAttributeHandling::ActorReference },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeshAttributeHandling_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeshAttributeHandling_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExMeshAttributeHandling",
	"EPCGExMeshAttributeHandling",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeshAttributeHandling_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeshAttributeHandling_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeshAttributeHandling_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeshAttributeHandling_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeshAttributeHandling()
{
	if (!Z_Registration_Info_UEnum_EPCGExMeshAttributeHandling.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExMeshAttributeHandling.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeshAttributeHandling_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExMeshAttributeHandling.InnerSingleton;
}
// ********** End Enum EPCGExMeshAttributeHandling *************************************************

// ********** Begin Class UPCGExMeshToClustersSettings *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExMeshToClustersSettings;
UClass* UPCGExMeshToClustersSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExMeshToClustersSettings;
	if (!Z_Registration_Info_UClass_UPCGExMeshToClustersSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExMeshToClustersSettings"),
			Z_Registration_Info_UClass_UPCGExMeshToClustersSettings.InnerSingleton,
			StaticRegisterNativesUPCGExMeshToClustersSettings,
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
	return Z_Registration_Info_UClass_UPCGExMeshToClustersSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExMeshToClustersSettings_NoRegister()
{
	return UPCGExMeshToClustersSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/PCGExMeshToClusters.h" },
		{ "ModuleRelativePath", "Public/Graph/PCGExMeshToClusters.h" },
		{ "PCGExNodeLibraryDoc", "clusters/mesh-to-clusters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphOutputType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Triangulation type */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExMeshToClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Triangulation type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Mesh source */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExMeshToClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Mesh source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Static mesh path attribute -- Either FString, FName or FSoftObjectPath*/" },
		{ "DisplayName", "Static Mesh (Attr)" },
		{ "EditCondition", "StaticMeshInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExMeshToClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Static mesh path attribute -- Either FString, FName or FSoftObjectPath" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Static mesh constant */" },
		{ "DisplayName", "Static Mesh" },
		{ "EditCondition", "StaticMeshInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExMeshToClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Static mesh constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeHandling_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Static mesh path attribute type*/" },
		{ "EditCondition", "StaticMeshInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExMeshToClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Static mesh path attribute type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Target inherit behavior */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExMeshToClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Target inherit behavior" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which data should be imported from the static mesh onto the generated points */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExMeshToClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which data should be imported from the static mesh onto the generated points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreMeshWarnings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Skip invalid meshes & do not throw warning about them. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExMeshToClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Skip invalid meshes & do not throw warning about them." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphBuilderDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Graph & Edges output properties. Only available if bPruneOutsideBounds as it otherwise generates a complete graph. */" },
		{ "DisplayName", "Cluster Output Settings" },
		{ "ModuleRelativePath", "Public/Graph/PCGExMeshToClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Graph & Edges output properties. Only available if bPruneOutsideBounds as it otherwise generates a complete graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributesForwarding_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which input points attributes to forward on clusters. NOTE : Not implemented */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExMeshToClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which input points attributes to forward on clusters. NOTE : Not implemented" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExMeshToClustersSettings constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_GraphOutputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GraphOutputType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StaticMeshInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StaticMeshInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StaticMeshAttribute;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMeshConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeHandling_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeHandling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImportDetails;
	static void NewProp_bIgnoreMeshWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreMeshWarnings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphBuilderDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributesForwarding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExMeshToClustersSettings constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExMeshToClustersSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics

// ********** Begin Class UPCGExMeshToClustersSettings Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_GraphOutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_GraphOutputType = { "GraphOutputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMeshToClustersSettings, GraphOutputType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTriangulationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphOutputType_MetaData), NewProp_GraphOutputType_MetaData) }; // 1411639293
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_StaticMeshInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_StaticMeshInput = { "StaticMeshInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMeshToClustersSettings, StaticMeshInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshInput_MetaData), NewProp_StaticMeshInput_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_StaticMeshAttribute = { "StaticMeshAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMeshToClustersSettings, StaticMeshAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshAttribute_MetaData), NewProp_StaticMeshAttribute_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_StaticMeshConstant = { "StaticMeshConstant", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMeshToClustersSettings, StaticMeshConstant), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshConstant_MetaData), NewProp_StaticMeshConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_AttributeHandling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_AttributeHandling = { "AttributeHandling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMeshToClustersSettings, AttributeHandling), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeshAttributeHandling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeHandling_MetaData), NewProp_AttributeHandling_MetaData) }; // 2905027748
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_TransformDetails = { "TransformDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMeshToClustersSettings, TransformDetails), Z_Construct_UScriptStruct_FPCGExTransformDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformDetails_MetaData), NewProp_TransformDetails_MetaData) }; // 4231827955
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_ImportDetails = { "ImportDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMeshToClustersSettings, ImportDetails), Z_Construct_UScriptStruct_FPCGExGeoMeshImportDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportDetails_MetaData), NewProp_ImportDetails_MetaData) }; // 2907180939
void Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_bIgnoreMeshWarnings_SetBit(void* Obj)
{
	((UPCGExMeshToClustersSettings*)Obj)->bIgnoreMeshWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_bIgnoreMeshWarnings = { "bIgnoreMeshWarnings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExMeshToClustersSettings), &Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_bIgnoreMeshWarnings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreMeshWarnings_MetaData), NewProp_bIgnoreMeshWarnings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_GraphBuilderDetails = { "GraphBuilderDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMeshToClustersSettings, GraphBuilderDetails), Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphBuilderDetails_MetaData), NewProp_GraphBuilderDetails_MetaData) }; // 816765072
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_AttributesForwarding = { "AttributesForwarding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMeshToClustersSettings, AttributesForwarding), Z_Construct_UScriptStruct_FPCGExForwardDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributesForwarding_MetaData), NewProp_AttributesForwarding_MetaData) }; // 925115943
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_GraphOutputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_GraphOutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_StaticMeshInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_StaticMeshInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_StaticMeshAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_StaticMeshConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_AttributeHandling_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_AttributeHandling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_TransformDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_ImportDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_bIgnoreMeshWarnings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_GraphBuilderDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::NewProp_AttributesForwarding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExMeshToClustersSettings Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::ClassParams = {
	&UPCGExMeshToClustersSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::Class_MetaDataParams)
};
void UPCGExMeshToClustersSettings::StaticRegisterNativesUPCGExMeshToClustersSettings()
{
}
UClass* Z_Construct_UClass_UPCGExMeshToClustersSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExMeshToClustersSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExMeshToClustersSettings.OuterSingleton, Z_Construct_UClass_UPCGExMeshToClustersSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExMeshToClustersSettings.OuterSingleton;
}
UPCGExMeshToClustersSettings::UPCGExMeshToClustersSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExMeshToClustersSettings);
UPCGExMeshToClustersSettings::~UPCGExMeshToClustersSettings() {}
// ********** End Class UPCGExMeshToClustersSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExMeshToClusters_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExMeshAttributeHandling_StaticEnum, TEXT("EPCGExMeshAttributeHandling"), &Z_Registration_Info_UEnum_EPCGExMeshAttributeHandling, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2905027748U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExMeshToClustersSettings, UPCGExMeshToClustersSettings::StaticClass, TEXT("UPCGExMeshToClustersSettings"), &Z_Registration_Info_UClass_UPCGExMeshToClustersSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExMeshToClustersSettings), 252878755U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExMeshToClusters_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExMeshToClusters_h__Script_PCGExtendedToolkit_4254146519{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExMeshToClusters_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExMeshToClusters_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExMeshToClusters_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExMeshToClusters_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
