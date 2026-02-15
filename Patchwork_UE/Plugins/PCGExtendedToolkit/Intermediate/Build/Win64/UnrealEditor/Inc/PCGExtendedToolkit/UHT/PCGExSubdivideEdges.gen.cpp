// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/PCGExSubdivideEdges.h"
#include "Graph/PCGExEdgeDirectionSettings.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSubdivideEdges() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubdivideEdgesSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubdivideEdgesSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubdivideMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSubdivideEdgesSettings *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSubdivideEdgesSettings;
UClass* UPCGExSubdivideEdgesSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSubdivideEdgesSettings;
	if (!Z_Registration_Info_UClass_UPCGExSubdivideEdgesSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSubdivideEdgesSettings"),
			Z_Registration_Info_UClass_UPCGExSubdivideEdgesSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSubdivideEdgesSettings,
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
	return Z_Registration_Info_UClass_UPCGExSubdivideEdgesSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSubdivideEdgesSettings_NoRegister()
{
	return UPCGExSubdivideEdgesSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Edges/PCGExSubdivideEdges.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExSubdivideEdges.h" },
		{ "PCGExNodeLibraryDoc", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Defines the direction of an edge, and which endpoints should be considered the start & end. */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExSubdivideEdges.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Defines the direction of an edge, and which endpoints should be considered the start & end." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubdivideMethod_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Reference for computing the blending interpolation point point */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExSubdivideEdges.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Reference for computing the blending interpolation point point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExSubdivideEdges.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.100000" },
		{ "DisplayName", "Subdivisions (Distance)" },
		{ "EditCondition", "SubdivideMethod == EPCGExSubdivideMode::Distance && AmountInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExSubdivideEdges.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Subdivisions (Count)" },
		{ "EditCondition", "SubdivideMethod == EPCGExSubdivideMode::Count && AmountInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExSubdivideEdges.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "EditCondition", "AmountInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExSubdivideEdges.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubdivisionAmount_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Subdivisions (Attr)" },
		{ "EditCondition", "AmountInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExSubdivideEdges.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blending_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExSubdivideEdges.h" },
		{ "NoResetToDefault", "" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlagSubVtx_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExSubdivideEdges.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubVtxFlagName_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "EditCondition", "bFlagSubVtx" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExSubdivideEdges.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlagSubEdge_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExSubdivideEdges.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubEdgeFlagName_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "EditCondition", "bFlagSubEdge" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExSubdivideEdges.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteVtxAlpha_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExSubdivideEdges.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VtxAlphaAttributeName_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "EditCondition", "bWriteVtxAlpha" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExSubdivideEdges.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVtxAlpha_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "EditCondition", "bWriteVtxAlpha" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExSubdivideEdges.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSubdivideEdgesSettings constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionSettings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SubdivideMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SubdivideMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AmountInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AmountInput;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AmountSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AmountSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubdivisionAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Blending;
	static void NewProp_bFlagSubVtx_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlagSubVtx;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubVtxFlagName;
	static void NewProp_bFlagSubEdge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlagSubEdge;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubEdgeFlagName;
	static void NewProp_bWriteVtxAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteVtxAlpha;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VtxAlphaAttributeName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DefaultVtxAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSubdivideEdgesSettings constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSubdivideEdgesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics

// ********** Begin Class UPCGExSubdivideEdgesSettings Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_DirectionSettings = { "DirectionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideEdgesSettings, DirectionSettings), Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionSettings_MetaData), NewProp_DirectionSettings_MetaData) }; // 1520832441
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_SubdivideMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_SubdivideMethod = { "SubdivideMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideEdgesSettings, SubdivideMethod), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubdivideMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubdivideMethod_MetaData), NewProp_SubdivideMethod_MetaData) }; // 56681284
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_AmountInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_AmountInput = { "AmountInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideEdgesSettings, AmountInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountInput_MetaData), NewProp_AmountInput_MetaData) }; // 504493006
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideEdgesSettings, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideEdgesSettings, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_AmountSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_AmountSource = { "AmountSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideEdgesSettings, AmountSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountSource_MetaData), NewProp_AmountSource_MetaData) }; // 1423364254
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_SubdivisionAmount = { "SubdivisionAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideEdgesSettings, SubdivisionAmount), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubdivisionAmount_MetaData), NewProp_SubdivisionAmount_MetaData) }; // 3844583698
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_Blending = { "Blending", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideEdgesSettings, Blending), Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blending_MetaData), NewProp_Blending_MetaData) };
void Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_bFlagSubVtx_SetBit(void* Obj)
{
	((UPCGExSubdivideEdgesSettings*)Obj)->bFlagSubVtx = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_bFlagSubVtx = { "bFlagSubVtx", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSubdivideEdgesSettings), &Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_bFlagSubVtx_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlagSubVtx_MetaData), NewProp_bFlagSubVtx_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_SubVtxFlagName = { "SubVtxFlagName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideEdgesSettings, SubVtxFlagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubVtxFlagName_MetaData), NewProp_SubVtxFlagName_MetaData) };
void Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_bFlagSubEdge_SetBit(void* Obj)
{
	((UPCGExSubdivideEdgesSettings*)Obj)->bFlagSubEdge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_bFlagSubEdge = { "bFlagSubEdge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSubdivideEdgesSettings), &Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_bFlagSubEdge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlagSubEdge_MetaData), NewProp_bFlagSubEdge_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_SubEdgeFlagName = { "SubEdgeFlagName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideEdgesSettings, SubEdgeFlagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubEdgeFlagName_MetaData), NewProp_SubEdgeFlagName_MetaData) };
void Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_bWriteVtxAlpha_SetBit(void* Obj)
{
	((UPCGExSubdivideEdgesSettings*)Obj)->bWriteVtxAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_bWriteVtxAlpha = { "bWriteVtxAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSubdivideEdgesSettings), &Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_bWriteVtxAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteVtxAlpha_MetaData), NewProp_bWriteVtxAlpha_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_VtxAlphaAttributeName = { "VtxAlphaAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideEdgesSettings, VtxAlphaAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VtxAlphaAttributeName_MetaData), NewProp_VtxAlphaAttributeName_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_DefaultVtxAlpha = { "DefaultVtxAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSubdivideEdgesSettings, DefaultVtxAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultVtxAlpha_MetaData), NewProp_DefaultVtxAlpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_DirectionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_SubdivideMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_SubdivideMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_AmountInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_AmountInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_AmountSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_AmountSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_SubdivisionAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_Blending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_bFlagSubVtx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_SubVtxFlagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_bFlagSubEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_SubEdgeFlagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_bWriteVtxAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_VtxAlphaAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::NewProp_DefaultVtxAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSubdivideEdgesSettings Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::ClassParams = {
	&UPCGExSubdivideEdgesSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::PropPointers),
	0,
	0x018800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::Class_MetaDataParams)
};
void UPCGExSubdivideEdgesSettings::StaticRegisterNativesUPCGExSubdivideEdgesSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSubdivideEdgesSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSubdivideEdgesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSubdivideEdgesSettings.OuterSingleton, Z_Construct_UClass_UPCGExSubdivideEdgesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSubdivideEdgesSettings.OuterSingleton;
}
UPCGExSubdivideEdgesSettings::UPCGExSubdivideEdgesSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSubdivideEdgesSettings);
UPCGExSubdivideEdgesSettings::~UPCGExSubdivideEdgesSettings() {}
// ********** End Class UPCGExSubdivideEdgesSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExSubdivideEdges_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSubdivideEdgesSettings, UPCGExSubdivideEdgesSettings::StaticClass, TEXT("UPCGExSubdivideEdgesSettings"), &Z_Registration_Info_UClass_UPCGExSubdivideEdgesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSubdivideEdgesSettings), 4071706957U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExSubdivideEdges_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExSubdivideEdges_h__Script_PCGExtendedToolkit_1894136717{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExSubdivideEdges_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExSubdivideEdges_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
