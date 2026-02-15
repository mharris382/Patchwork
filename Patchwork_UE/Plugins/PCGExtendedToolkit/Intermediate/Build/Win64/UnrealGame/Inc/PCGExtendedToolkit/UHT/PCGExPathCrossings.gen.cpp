// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExPathCrossings.h"
#include "Data/Blending/PCGExDataBlending.h"
#include "Data/PCGExDataFilter.h"
#include "Paths/PCGExPaths.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPathCrossings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathCrossingsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathCrossingsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBlendingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCarryOverDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExPathCrossingsSettings **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPathCrossingsSettings;
UClass* UPCGExPathCrossingsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPathCrossingsSettings;
	if (!Z_Registration_Info_UClass_UPCGExPathCrossingsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPathCrossingsSettings"),
			Z_Registration_Info_UClass_UPCGExPathCrossingsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPathCrossingsSettings,
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
	return Z_Registration_Info_UClass_UPCGExPathCrossingsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPathCrossingsSettings_NoRegister()
{
	return UPCGExPathCrossingsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExPathCrossings.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCGExNodeLibraryDoc", "paths/crossings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelfIntersectionOnly_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If enabled, crossings are only computed per path, against themselves only. Note: this ignores the \"bEnableSelfIntersection\" from details below. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, crossings are only computed per path, against themselves only. Note: this ignores the \"bEnableSelfIntersection\" from details below." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanBeCutTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter entire dataset. If any tag is found on these paths, they are considered cut-able. Empty or None will ignore filtering. */" },
		{ "EditCondition", "!bSelfIntersectionOnly" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Filter entire dataset. If any tag is found on these paths, they are considered cut-able. Empty or None will ignore filtering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertCanBeCutTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, the absence of the specified tag considers paths as cut-able. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Invert" },
		{ "EditCondition", "!bSelfIntersectionOnly" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, the absence of the specified tag considers paths as cut-able." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanCutTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter entire dataset. If any tag is found on these paths, they are considered cutters. Empty or None will ignore filtering. */" },
		{ "EditCondition", "!bSelfIntersectionOnly" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Filter entire dataset. If any tag is found on these paths, they are considered cutters. Empty or None will ignore filtering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertCanCutTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, the absence of the specified tag considers paths as cutters. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Invert" },
		{ "EditCondition", "!bSelfIntersectionOnly" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, the absence of the specified tag considers paths as cutters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreatePointAtCrossings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, a point will be created at the crossing' location. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, a point will be created at the crossing' location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blending_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Blending applied on intersecting points along the path prev and next point. This is different from inheriting from external properties. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "NoResetToDefault", "" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Blending applied on intersecting points along the path prev and next point. This is different from inheriting from external properties." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoCrossBlending_MetaData[] = {
		{ "Category", "Settings|Cross Blending" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossingCarryOver_MetaData[] = {
		{ "Category", "Settings|Cross Blending" },
		{ "Comment", "/** If enabled, blend in properties & attributes from external sources. */" },
		{ "EditCondition", "bDoCrossBlending" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, blend in properties & attributes from external sources." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossingBlending_MetaData[] = {
		{ "Category", "Settings|Cross Blending" },
		{ "Comment", "/** If enabled, blend in properties & attributes from external sources. */" },
		{ "EditCondition", "bDoCrossBlending" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, blend in properties & attributes from external sources." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteAlpha_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossingAlphaAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "DisplayName", "Crossing Alpha" },
		{ "EditCondition", "bWriteAlpha" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAlpha_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Default Value" },
		{ "EditCondition", "bWriteAlpha" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOrientCrossing_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossingOrientAxis_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "EditCondition", "bOrientCrossing" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteCrossDirection_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossDirectionAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "DisplayName", "Cross Direction" },
		{ "EditCondition", "bWriteCrossDirection" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCrossDirection_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Default Value" },
		{ "EditCondition", "bWriteCrossDirection" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteIsPointCrossing_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsPointCrossingAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "DisplayName", "Is Point Crossing" },
		{ "EditCondition", "bWriteIsPointCrossing" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasCrossing_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasCrossingsTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "EditCondition", "bTagIfHasCrossing" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasNoCrossings_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasNoCrossingsTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "EditCondition", "bTagIfHasNoCrossings" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitUncuttableFromOutput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, paths that are only \"cutters\" (paths that will cut but won't be cut). */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathCrossings.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, paths that are only \"cutters\" (paths that will cut but won't be cut)." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPathCrossingsSettings constinit property declarations **************
	static void NewProp_bSelfIntersectionOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelfIntersectionOnly;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CanBeCutTag;
	static void NewProp_bInvertCanBeCutTag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertCanBeCutTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CanCutTag;
	static void NewProp_bInvertCanCutTag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertCanCutTag;
	static void NewProp_bCreatePointAtCrossings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreatePointAtCrossings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntersectionDetails;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Blending;
	static void NewProp_bDoCrossBlending_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoCrossBlending;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CrossingCarryOver;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CrossingBlending;
	static void NewProp_bWriteAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteAlpha;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CrossingAlphaAttributeName;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DefaultAlpha;
	static void NewProp_bOrientCrossing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientCrossing;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CrossingOrientAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CrossingOrientAxis;
	static void NewProp_bWriteCrossDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteCrossDirection;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CrossDirectionAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultCrossDirection;
	static void NewProp_bWriteIsPointCrossing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteIsPointCrossing;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IsPointCrossingAttributeName;
	static void NewProp_bTagIfHasCrossing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfHasCrossing;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HasCrossingsTag;
	static void NewProp_bTagIfHasNoCrossings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfHasNoCrossings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HasNoCrossingsTag;
	static void NewProp_bOmitUncuttableFromOutput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitUncuttableFromOutput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPathCrossingsSettings constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPathCrossingsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics

// ********** Begin Class UPCGExPathCrossingsSettings Property Definitions *************************
void Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bSelfIntersectionOnly_SetBit(void* Obj)
{
	((UPCGExPathCrossingsSettings*)Obj)->bSelfIntersectionOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bSelfIntersectionOnly = { "bSelfIntersectionOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathCrossingsSettings), &Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bSelfIntersectionOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelfIntersectionOnly_MetaData), NewProp_bSelfIntersectionOnly_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_CanBeCutTag = { "CanBeCutTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathCrossingsSettings, CanBeCutTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanBeCutTag_MetaData), NewProp_CanBeCutTag_MetaData) };
void Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bInvertCanBeCutTag_SetBit(void* Obj)
{
	((UPCGExPathCrossingsSettings*)Obj)->bInvertCanBeCutTag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bInvertCanBeCutTag = { "bInvertCanBeCutTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathCrossingsSettings), &Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bInvertCanBeCutTag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertCanBeCutTag_MetaData), NewProp_bInvertCanBeCutTag_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_CanCutTag = { "CanCutTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathCrossingsSettings, CanCutTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanCutTag_MetaData), NewProp_CanCutTag_MetaData) };
void Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bInvertCanCutTag_SetBit(void* Obj)
{
	((UPCGExPathCrossingsSettings*)Obj)->bInvertCanCutTag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bInvertCanCutTag = { "bInvertCanCutTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathCrossingsSettings), &Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bInvertCanCutTag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertCanCutTag_MetaData), NewProp_bInvertCanCutTag_MetaData) };
void Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bCreatePointAtCrossings_SetBit(void* Obj)
{
	((UPCGExPathCrossingsSettings*)Obj)->bCreatePointAtCrossings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bCreatePointAtCrossings = { "bCreatePointAtCrossings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathCrossingsSettings), &Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bCreatePointAtCrossings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreatePointAtCrossings_MetaData), NewProp_bCreatePointAtCrossings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_IntersectionDetails = { "IntersectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathCrossingsSettings, IntersectionDetails), Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionDetails_MetaData), NewProp_IntersectionDetails_MetaData) }; // 2450089009
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_Blending = { "Blending", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathCrossingsSettings, Blending), Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blending_MetaData), NewProp_Blending_MetaData) };
void Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bDoCrossBlending_SetBit(void* Obj)
{
	((UPCGExPathCrossingsSettings*)Obj)->bDoCrossBlending = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bDoCrossBlending = { "bDoCrossBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathCrossingsSettings), &Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bDoCrossBlending_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoCrossBlending_MetaData), NewProp_bDoCrossBlending_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_CrossingCarryOver = { "CrossingCarryOver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathCrossingsSettings, CrossingCarryOver), Z_Construct_UScriptStruct_FPCGExCarryOverDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossingCarryOver_MetaData), NewProp_CrossingCarryOver_MetaData) }; // 4041221405
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_CrossingBlending = { "CrossingBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathCrossingsSettings, CrossingBlending), Z_Construct_UScriptStruct_FPCGExBlendingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossingBlending_MetaData), NewProp_CrossingBlending_MetaData) }; // 1694264898
void Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bWriteAlpha_SetBit(void* Obj)
{
	((UPCGExPathCrossingsSettings*)Obj)->bWriteAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bWriteAlpha = { "bWriteAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathCrossingsSettings), &Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bWriteAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteAlpha_MetaData), NewProp_bWriteAlpha_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_CrossingAlphaAttributeName = { "CrossingAlphaAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathCrossingsSettings, CrossingAlphaAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossingAlphaAttributeName_MetaData), NewProp_CrossingAlphaAttributeName_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_DefaultAlpha = { "DefaultAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathCrossingsSettings, DefaultAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAlpha_MetaData), NewProp_DefaultAlpha_MetaData) };
void Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bOrientCrossing_SetBit(void* Obj)
{
	((UPCGExPathCrossingsSettings*)Obj)->bOrientCrossing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bOrientCrossing = { "bOrientCrossing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathCrossingsSettings), &Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bOrientCrossing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOrientCrossing_MetaData), NewProp_bOrientCrossing_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_CrossingOrientAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_CrossingOrientAxis = { "CrossingOrientAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathCrossingsSettings, CrossingOrientAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossingOrientAxis_MetaData), NewProp_CrossingOrientAxis_MetaData) }; // 1564008668
void Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bWriteCrossDirection_SetBit(void* Obj)
{
	((UPCGExPathCrossingsSettings*)Obj)->bWriteCrossDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bWriteCrossDirection = { "bWriteCrossDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathCrossingsSettings), &Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bWriteCrossDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteCrossDirection_MetaData), NewProp_bWriteCrossDirection_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_CrossDirectionAttributeName = { "CrossDirectionAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathCrossingsSettings, CrossDirectionAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossDirectionAttributeName_MetaData), NewProp_CrossDirectionAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_DefaultCrossDirection = { "DefaultCrossDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathCrossingsSettings, DefaultCrossDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCrossDirection_MetaData), NewProp_DefaultCrossDirection_MetaData) };
void Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bWriteIsPointCrossing_SetBit(void* Obj)
{
	((UPCGExPathCrossingsSettings*)Obj)->bWriteIsPointCrossing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bWriteIsPointCrossing = { "bWriteIsPointCrossing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathCrossingsSettings), &Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bWriteIsPointCrossing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteIsPointCrossing_MetaData), NewProp_bWriteIsPointCrossing_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_IsPointCrossingAttributeName = { "IsPointCrossingAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathCrossingsSettings, IsPointCrossingAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsPointCrossingAttributeName_MetaData), NewProp_IsPointCrossingAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bTagIfHasCrossing_SetBit(void* Obj)
{
	((UPCGExPathCrossingsSettings*)Obj)->bTagIfHasCrossing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bTagIfHasCrossing = { "bTagIfHasCrossing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathCrossingsSettings), &Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bTagIfHasCrossing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasCrossing_MetaData), NewProp_bTagIfHasCrossing_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_HasCrossingsTag = { "HasCrossingsTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathCrossingsSettings, HasCrossingsTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasCrossingsTag_MetaData), NewProp_HasCrossingsTag_MetaData) };
void Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bTagIfHasNoCrossings_SetBit(void* Obj)
{
	((UPCGExPathCrossingsSettings*)Obj)->bTagIfHasNoCrossings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bTagIfHasNoCrossings = { "bTagIfHasNoCrossings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathCrossingsSettings), &Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bTagIfHasNoCrossings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasNoCrossings_MetaData), NewProp_bTagIfHasNoCrossings_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_HasNoCrossingsTag = { "HasNoCrossingsTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathCrossingsSettings, HasNoCrossingsTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasNoCrossingsTag_MetaData), NewProp_HasNoCrossingsTag_MetaData) };
void Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bOmitUncuttableFromOutput_SetBit(void* Obj)
{
	((UPCGExPathCrossingsSettings*)Obj)->bOmitUncuttableFromOutput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bOmitUncuttableFromOutput = { "bOmitUncuttableFromOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathCrossingsSettings), &Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bOmitUncuttableFromOutput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitUncuttableFromOutput_MetaData), NewProp_bOmitUncuttableFromOutput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bSelfIntersectionOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_CanBeCutTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bInvertCanBeCutTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_CanCutTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bInvertCanCutTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bCreatePointAtCrossings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_IntersectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_Blending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bDoCrossBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_CrossingCarryOver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_CrossingBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bWriteAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_CrossingAlphaAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_DefaultAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bOrientCrossing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_CrossingOrientAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_CrossingOrientAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bWriteCrossDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_CrossDirectionAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_DefaultCrossDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bWriteIsPointCrossing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_IsPointCrossingAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bTagIfHasCrossing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_HasCrossingsTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bTagIfHasNoCrossings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_HasNoCrossingsTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::NewProp_bOmitUncuttableFromOutput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPathCrossingsSettings Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::ClassParams = {
	&UPCGExPathCrossingsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::Class_MetaDataParams)
};
void UPCGExPathCrossingsSettings::StaticRegisterNativesUPCGExPathCrossingsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPathCrossingsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPathCrossingsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPathCrossingsSettings.OuterSingleton, Z_Construct_UClass_UPCGExPathCrossingsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPathCrossingsSettings.OuterSingleton;
}
UPCGExPathCrossingsSettings::UPCGExPathCrossingsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPathCrossingsSettings);
UPCGExPathCrossingsSettings::~UPCGExPathCrossingsSettings() {}
// ********** End Class UPCGExPathCrossingsSettings ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathCrossings_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPathCrossingsSettings, UPCGExPathCrossingsSettings::StaticClass, TEXT("UPCGExPathCrossingsSettings"), &Z_Registration_Info_UClass_UPCGExPathCrossingsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPathCrossingsSettings), 3515448356U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathCrossings_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathCrossings_h__Script_PCGExtendedToolkit_2626788706{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathCrossings_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathCrossings_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
