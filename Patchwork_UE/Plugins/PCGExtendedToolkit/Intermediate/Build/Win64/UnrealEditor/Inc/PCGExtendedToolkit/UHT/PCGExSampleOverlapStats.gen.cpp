// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/PCGExSampleOverlapStats.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSampleOverlapStats() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleOverlapStatsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapTestMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSampleOverlapStatsSettings *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSampleOverlapStatsSettings;
UClass* UPCGExSampleOverlapStatsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSampleOverlapStatsSettings;
	if (!Z_Registration_Info_UClass_UPCGExSampleOverlapStatsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSampleOverlapStatsSettings"),
			Z_Registration_Info_UClass_UPCGExSampleOverlapStatsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSampleOverlapStatsSettings,
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
	return Z_Registration_Info_UClass_UPCGExSampleOverlapStatsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_NoRegister()
{
	return UPCGExSampleOverlapStatsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Sampling" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/PCGExSampleOverlapStats.h" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleOverlapStats.h" },
		{ "PCGExNodeLibraryDoc", "sampling/overlap-stats" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Overlap test mode */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleOverlapStats.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Overlap test mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Point bounds to be used to compute overlaps */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleOverlapStats.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Point bounds to be used to compute overlaps" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Expansion_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Expand bounds by that amount to account for a margin of error due to multiple layers of transformation and lack of OBB */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleOverlapStats.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Expand bounds by that amount to account for a margin of error due to multiple layers of transformation and lack of OBB" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The minimum amount two sub-points must overlap to be added to the comparison.  The higher, the more \"overlap\" there must be. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleOverlapStats.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The minimum amount two sub-points must overlap to be added to the comparison.  The higher, the more \"overlap\" there must be." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdMeasure_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How to interpret the min overlap value.  Discrete means distance in world space  Relative means uses percentage (0-1) of the averaged radius. */" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleOverlapStats.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to interpret the min overlap value.  Discrete means distance in world space  Relative means uses percentage (0-1) of the averaged radius." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteOverlapCount_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the unique overlap count to an int32 attribute. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleOverlapStats.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the unique overlap count to an int32 attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapCountAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'int32' attribute to write unique overlap count to. Unique overlap count is the number of time a different point data set overlapped this point. */" },
		{ "DisplayName", "Overlap Count" },
		{ "EditCondition", "bWriteOverlapCount" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleOverlapStats.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write unique overlap count to. Unique overlap count is the number of time a different point data set overlapped this point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteOverlapSubCount_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the total number of overlaps. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleOverlapStats.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the total number of overlaps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapSubCountAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'int32' attribute to write total overlap sub-count to. Total overlap count is the number of time another point overlapped this point. This count can get really high, really fast. */" },
		{ "DisplayName", "Overlap Sub Count" },
		{ "EditCondition", "bWriteOverlapSubCount" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleOverlapStats.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write total overlap sub-count to. Total overlap count is the number of time another point overlapped this point. This count can get really high, really fast." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteRelativeOverlapCount_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the relative unique overlap count to an int32 attribute. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleOverlapStats.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the relative unique overlap count to an int32 attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeOverlapCountAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'int32' attribute to write relative unique overlap count to. Relative Unique overlap count is this collection' OverlapSubCount divided by the max of all collections combined */" },
		{ "DisplayName", "Relative Overlap Count" },
		{ "EditCondition", "bWriteRelativeOverlapCount" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleOverlapStats.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write relative unique overlap count to. Relative Unique overlap count is this collection' OverlapSubCount divided by the max of all collections combined" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteRelativeOverlapSubCount_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the total number of overlaps. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleOverlapStats.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the total number of overlaps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeOverlapSubCountAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'int32' attribute to write relative total overlap sub-count to. Relative Total overlap count is is this collection' OverlapCount divided by the max of all collections combined */" },
		{ "DisplayName", "Relative Overlap Sub Count" },
		{ "EditCondition", "bWriteRelativeOverlapSubCount" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleOverlapStats.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write relative total overlap sub-count to. Relative Total overlap count is is this collection' OverlapCount divided by the max of all collections combined" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasAnyOverlap_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "//\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleOverlapStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasAnyOverlapTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "EditCondition", "bTagIfHasAnyOverlap" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleOverlapStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfHasNoOverlap_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleOverlapStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasNoOverlapTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "EditCondition", "bTagIfHasNoOverlap" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleOverlapStats.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSampleOverlapStatsSettings constinit property declarations *********
	static const UECodeGen_Private::FBytePropertyParams NewProp_TestMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TestMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoundsSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundsSource;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Expansion;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThresholdMeasure_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThresholdMeasure;
	static void NewProp_bWriteOverlapCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteOverlapCount;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OverlapCountAttributeName;
	static void NewProp_bWriteOverlapSubCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteOverlapSubCount;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OverlapSubCountAttributeName;
	static void NewProp_bWriteRelativeOverlapCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteRelativeOverlapCount;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RelativeOverlapCountAttributeName;
	static void NewProp_bWriteRelativeOverlapSubCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteRelativeOverlapSubCount;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RelativeOverlapSubCountAttributeName;
	static void NewProp_bTagIfHasAnyOverlap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfHasAnyOverlap;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HasAnyOverlapTag;
	static void NewProp_bTagIfHasNoOverlap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfHasNoOverlap;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HasNoOverlapTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSampleOverlapStatsSettings constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSampleOverlapStatsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics

// ********** Begin Class UPCGExSampleOverlapStatsSettings Property Definitions ********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_TestMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_TestMode = { "TestMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleOverlapStatsSettings, TestMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOverlapTestMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestMode_MetaData), NewProp_TestMode_MetaData) }; // 932059669
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_BoundsSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_BoundsSource = { "BoundsSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleOverlapStatsSettings, BoundsSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointBoundsSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsSource_MetaData), NewProp_BoundsSource_MetaData) }; // 926722312
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_Expansion = { "Expansion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleOverlapStatsSettings, Expansion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Expansion_MetaData), NewProp_Expansion_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_MinThreshold = { "MinThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleOverlapStatsSettings, MinThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinThreshold_MetaData), NewProp_MinThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_ThresholdMeasure_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_ThresholdMeasure = { "ThresholdMeasure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleOverlapStatsSettings, ThresholdMeasure), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdMeasure_MetaData), NewProp_ThresholdMeasure_MetaData) }; // 356721050
void Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bWriteOverlapCount_SetBit(void* Obj)
{
	((UPCGExSampleOverlapStatsSettings*)Obj)->bWriteOverlapCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bWriteOverlapCount = { "bWriteOverlapCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleOverlapStatsSettings), &Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bWriteOverlapCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteOverlapCount_MetaData), NewProp_bWriteOverlapCount_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_OverlapCountAttributeName = { "OverlapCountAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleOverlapStatsSettings, OverlapCountAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapCountAttributeName_MetaData), NewProp_OverlapCountAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bWriteOverlapSubCount_SetBit(void* Obj)
{
	((UPCGExSampleOverlapStatsSettings*)Obj)->bWriteOverlapSubCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bWriteOverlapSubCount = { "bWriteOverlapSubCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleOverlapStatsSettings), &Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bWriteOverlapSubCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteOverlapSubCount_MetaData), NewProp_bWriteOverlapSubCount_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_OverlapSubCountAttributeName = { "OverlapSubCountAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleOverlapStatsSettings, OverlapSubCountAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapSubCountAttributeName_MetaData), NewProp_OverlapSubCountAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bWriteRelativeOverlapCount_SetBit(void* Obj)
{
	((UPCGExSampleOverlapStatsSettings*)Obj)->bWriteRelativeOverlapCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bWriteRelativeOverlapCount = { "bWriteRelativeOverlapCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleOverlapStatsSettings), &Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bWriteRelativeOverlapCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteRelativeOverlapCount_MetaData), NewProp_bWriteRelativeOverlapCount_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_RelativeOverlapCountAttributeName = { "RelativeOverlapCountAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleOverlapStatsSettings, RelativeOverlapCountAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeOverlapCountAttributeName_MetaData), NewProp_RelativeOverlapCountAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bWriteRelativeOverlapSubCount_SetBit(void* Obj)
{
	((UPCGExSampleOverlapStatsSettings*)Obj)->bWriteRelativeOverlapSubCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bWriteRelativeOverlapSubCount = { "bWriteRelativeOverlapSubCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleOverlapStatsSettings), &Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bWriteRelativeOverlapSubCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteRelativeOverlapSubCount_MetaData), NewProp_bWriteRelativeOverlapSubCount_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_RelativeOverlapSubCountAttributeName = { "RelativeOverlapSubCountAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleOverlapStatsSettings, RelativeOverlapSubCountAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeOverlapSubCountAttributeName_MetaData), NewProp_RelativeOverlapSubCountAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bTagIfHasAnyOverlap_SetBit(void* Obj)
{
	((UPCGExSampleOverlapStatsSettings*)Obj)->bTagIfHasAnyOverlap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bTagIfHasAnyOverlap = { "bTagIfHasAnyOverlap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleOverlapStatsSettings), &Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bTagIfHasAnyOverlap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasAnyOverlap_MetaData), NewProp_bTagIfHasAnyOverlap_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_HasAnyOverlapTag = { "HasAnyOverlapTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleOverlapStatsSettings, HasAnyOverlapTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasAnyOverlapTag_MetaData), NewProp_HasAnyOverlapTag_MetaData) };
void Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bTagIfHasNoOverlap_SetBit(void* Obj)
{
	((UPCGExSampleOverlapStatsSettings*)Obj)->bTagIfHasNoOverlap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bTagIfHasNoOverlap = { "bTagIfHasNoOverlap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSampleOverlapStatsSettings), &Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bTagIfHasNoOverlap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfHasNoOverlap_MetaData), NewProp_bTagIfHasNoOverlap_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_HasNoOverlapTag = { "HasNoOverlapTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSampleOverlapStatsSettings, HasNoOverlapTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasNoOverlapTag_MetaData), NewProp_HasNoOverlapTag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_TestMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_TestMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_BoundsSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_BoundsSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_Expansion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_MinThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_ThresholdMeasure_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_ThresholdMeasure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bWriteOverlapCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_OverlapCountAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bWriteOverlapSubCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_OverlapSubCountAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bWriteRelativeOverlapCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_RelativeOverlapCountAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bWriteRelativeOverlapSubCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_RelativeOverlapSubCountAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bTagIfHasAnyOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_HasAnyOverlapTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_bTagIfHasNoOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::NewProp_HasNoOverlapTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSampleOverlapStatsSettings Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::ClassParams = {
	&UPCGExSampleOverlapStatsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::Class_MetaDataParams)
};
void UPCGExSampleOverlapStatsSettings::StaticRegisterNativesUPCGExSampleOverlapStatsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSampleOverlapStatsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSampleOverlapStatsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSampleOverlapStatsSettings.OuterSingleton, Z_Construct_UClass_UPCGExSampleOverlapStatsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSampleOverlapStatsSettings.OuterSingleton;
}
UPCGExSampleOverlapStatsSettings::UPCGExSampleOverlapStatsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSampleOverlapStatsSettings);
UPCGExSampleOverlapStatsSettings::~UPCGExSampleOverlapStatsSettings() {}
// ********** End Class UPCGExSampleOverlapStatsSettings *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleOverlapStats_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSampleOverlapStatsSettings, UPCGExSampleOverlapStatsSettings::StaticClass, TEXT("UPCGExSampleOverlapStatsSettings"), &Z_Registration_Info_UClass_UPCGExSampleOverlapStatsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSampleOverlapStatsSettings), 1385426954U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleOverlapStats_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleOverlapStats_h__Script_PCGExtendedToolkit_2365048634{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleOverlapStats_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleOverlapStats_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
