// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExBevelPath.h"
#include "Details/PCGExDetailsSubdivision.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBevelPath() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBevelPathSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBevelPathSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelCustomProfileScaling();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelLimit();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelProfileType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubdivideMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExManhattanDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExBevelMode ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBevelMode;
static UEnum* EPCGExBevelMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBevelMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBevelMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBevelMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExBevelMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBevelMode>()
{
	return EPCGExBevelMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Distance.DisplayName", "Distance" },
		{ "Distance.Name", "EPCGExBevelMode::Distance" },
		{ "Distance.ToolTip", "Width is used as a distance along each point neighboring segments" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "Radius.DisplayName", "Radius" },
		{ "Radius.Name", "EPCGExBevelMode::Radius" },
		{ "Radius.ToolTip", "Width is used as a radius value to compute distance along each point neighboring segments" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBevelMode::Radius", (int64)EPCGExBevelMode::Radius },
		{ "EPCGExBevelMode::Distance", (int64)EPCGExBevelMode::Distance },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBevelMode",
	"EPCGExBevelMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExBevelMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBevelMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBevelMode.InnerSingleton;
}
// ********** End Enum EPCGExBevelMode *************************************************************

// ********** Begin Enum EPCGExBevelProfileType ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBevelProfileType;
static UEnum* EPCGExBevelProfileType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBevelProfileType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBevelProfileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelProfileType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBevelProfileType"));
	}
	return Z_Registration_Info_UEnum_EPCGExBevelProfileType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBevelProfileType>()
{
	return EPCGExBevelProfileType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelProfileType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Arc.DisplayName", "Arc" },
		{ "Arc.Name", "EPCGExBevelProfileType::Arc" },
		{ "Arc.ToolTip", "Arc profile" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "EPCGExBevelProfileType::Custom" },
		{ "Custom.ToolTip", "Custom profile" },
		{ "Line.DisplayName", "Line" },
		{ "Line.Name", "EPCGExBevelProfileType::Line" },
		{ "Line.ToolTip", "Line profile" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBevelProfileType::Line", (int64)EPCGExBevelProfileType::Line },
		{ "EPCGExBevelProfileType::Arc", (int64)EPCGExBevelProfileType::Arc },
		{ "EPCGExBevelProfileType::Custom", (int64)EPCGExBevelProfileType::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelProfileType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelProfileType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBevelProfileType",
	"EPCGExBevelProfileType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelProfileType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelProfileType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelProfileType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelProfileType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelProfileType()
{
	if (!Z_Registration_Info_UEnum_EPCGExBevelProfileType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBevelProfileType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelProfileType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBevelProfileType.InnerSingleton;
}
// ********** End Enum EPCGExBevelProfileType ******************************************************

// ********** Begin Enum EPCGExBevelLimit **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBevelLimit;
static UEnum* EPCGExBevelLimit_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBevelLimit.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBevelLimit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelLimit, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBevelLimit"));
	}
	return Z_Registration_Info_UEnum_EPCGExBevelLimit.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBevelLimit>()
{
	return EPCGExBevelLimit_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelLimit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Balanced.DisplayName", "Balanced" },
		{ "Balanced.Name", "EPCGExBevelLimit::Balanced" },
		{ "Balanced.ToolTip", "Weighted balance against opposite bevel position, falling back to closest neighbor" },
		{ "ClosestNeighbor.DisplayName", "Closest neighbor" },
		{ "ClosestNeighbor.Name", "EPCGExBevelLimit::ClosestNeighbor" },
		{ "ClosestNeighbor.ToolTip", "Closest neighbor position is used as upper limit" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPCGExBevelLimit::None" },
		{ "None.ToolTip", "Bevel is not limited" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBevelLimit::None", (int64)EPCGExBevelLimit::None },
		{ "EPCGExBevelLimit::ClosestNeighbor", (int64)EPCGExBevelLimit::ClosestNeighbor },
		{ "EPCGExBevelLimit::Balanced", (int64)EPCGExBevelLimit::Balanced },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelLimit_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelLimit_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBevelLimit",
	"EPCGExBevelLimit",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelLimit_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelLimit_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelLimit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelLimit_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelLimit()
{
	if (!Z_Registration_Info_UEnum_EPCGExBevelLimit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBevelLimit.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelLimit_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBevelLimit.InnerSingleton;
}
// ********** End Enum EPCGExBevelLimit ************************************************************

// ********** Begin Enum EPCGExBevelCustomProfileScaling *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBevelCustomProfileScaling;
static UEnum* EPCGExBevelCustomProfileScaling_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBevelCustomProfileScaling.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBevelCustomProfileScaling.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelCustomProfileScaling, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBevelCustomProfileScaling"));
	}
	return Z_Registration_Info_UEnum_EPCGExBevelCustomProfileScaling.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBevelCustomProfileScaling>()
{
	return EPCGExBevelCustomProfileScaling_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelCustomProfileScaling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Distance.DisplayName", "Distance" },
		{ "Distance.Name", "EPCGExBevelCustomProfileScaling::Distance" },
		{ "Distance.ToolTip", "Use a fixed distance relative to the bevelled point" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "Scale.DisplayName", "Scale" },
		{ "Scale.Name", "EPCGExBevelCustomProfileScaling::Scale" },
		{ "Scale.ToolTip", "Use a scale factor relative to the bevel distance" },
		{ "Uniform.DisplayName", "Uniform" },
		{ "Uniform.Name", "EPCGExBevelCustomProfileScaling::Uniform" },
		{ "Uniform.ToolTip", "Keep the profile ratio uniform" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBevelCustomProfileScaling::Uniform", (int64)EPCGExBevelCustomProfileScaling::Uniform },
		{ "EPCGExBevelCustomProfileScaling::Scale", (int64)EPCGExBevelCustomProfileScaling::Scale },
		{ "EPCGExBevelCustomProfileScaling::Distance", (int64)EPCGExBevelCustomProfileScaling::Distance },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelCustomProfileScaling_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelCustomProfileScaling_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBevelCustomProfileScaling",
	"EPCGExBevelCustomProfileScaling",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelCustomProfileScaling_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelCustomProfileScaling_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelCustomProfileScaling_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelCustomProfileScaling_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelCustomProfileScaling()
{
	if (!Z_Registration_Info_UEnum_EPCGExBevelCustomProfileScaling.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBevelCustomProfileScaling.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelCustomProfileScaling_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBevelCustomProfileScaling.InnerSingleton;
}
// ********** End Enum EPCGExBevelCustomProfileScaling *********************************************

// ********** Begin Class UPCGExBevelPathSettings **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBevelPathSettings;
UClass* UPCGExBevelPathSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBevelPathSettings;
	if (!Z_Registration_Info_UClass_UPCGExBevelPathSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBevelPathSettings"),
			Z_Registration_Info_UClass_UPCGExBevelPathSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBevelPathSettings,
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
	return Z_Registration_Info_UClass_UPCGExBevelPathSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBevelPathSettings_NoRegister()
{
	return UPCGExBevelPathSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBevelPathSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExBevelPath.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCGExNodeLibraryDoc", "paths/bevel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of Bevel operation */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Type of Bevel operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of Bevel profile */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Type of Bevel profile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepCornerPoint_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to keep the corner point or not. If enabled, subdivision is ignored. */" },
		{ "EditCondition", "Type == EPCGExBevelProfileType::Line" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to keep the corner point or not. If enabled, subdivision is ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainAxisScaling_MetaData[] = {
		{ "Category", "Settings|Profile Scaling" },
		{ "Comment", "/** Define how the custom profile will be scaled on the main axis. */" },
		{ "EditCondition", "Type == EPCGExBevelProfileType::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Define how the custom profile will be scaled on the main axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainAxisScale_MetaData[] = {
		{ "Category", "Settings|Profile Scaling" },
		{ "Comment", "/** Scale or Distance value for the main axis. */" },
		{ "EditCondition", "Type == EPCGExBevelProfileType::Custom && (MainAxisScaling == EPCGExBevelCustomProfileScaling::Scale || MainAxisScaling == EPCGExBevelCustomProfileScaling::Distance)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Scale or Distance value for the main axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossAxisScaling_MetaData[] = {
		{ "Category", "Settings|Profile Scaling" },
		{ "Comment", "/** Define how the custom profile will be scaled on the cross axis. */" },
		{ "EditCondition", "Type == EPCGExBevelProfileType::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Define how the custom profile will be scaled on the cross axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossAxisScale_MetaData[] = {
		{ "Category", "Settings|Profile Scaling" },
		{ "Comment", "/** Scale or Distance value for the cross axis. */" },
		{ "EditCondition", "Type == EPCGExBevelProfileType::Custom && (CrossAxisScaling == EPCGExBevelCustomProfileScaling::Scale || CrossAxisScaling == EPCGExBevelCustomProfileScaling::Distance)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Scale or Distance value for the cross axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidthMeasure_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Bevel width value interpretation.*/" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Bevel width value interpretation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidthInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Bevel width source */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Bevel width source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidthAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Bevel width attribute.*/" },
		{ "DisplayName", "Width (Attr)" },
		{ "EditCondition", "WidthInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Bevel width attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidthConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Bevel width constant.*/" },
		{ "DisplayName", "Width" },
		{ "EditCondition", "WidthInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Bevel width constant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Bevel limit type */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Bevel limit type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSubdivide_MetaData[] = {
		{ "Category", "Settings|Subdivision" },
		{ "Comment", "/** Whether to subdivide the profile */" },
		{ "EditCondition", "Type != EPCGExBevelProfileType::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to subdivide the profile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubdivideMethod_MetaData[] = {
		{ "Category", "Settings|Subdivision" },
		{ "Comment", "/** Subdivision method */" },
		{ "EditCondition", "bSubdivide && Type != EPCGExBevelProfileType::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Subdivision method" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubdivisionAmountInput_MetaData[] = {
		{ "Category", "Settings|Subdivision" },
		{ "Comment", "/** Whether to subdivide the profile */" },
		{ "EditCondition", "bSubdivide && Type != EPCGExBevelProfileType::Custom && SubdivideMethod != EPCGExSubdivideMode::Manhattan" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to subdivide the profile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubdivisionDistance_MetaData[] = {
		{ "Category", "Settings|Subdivision" },
		{ "ClampMin", "0.100000" },
		{ "DisplayName", "Subdivisions (Distance)" },
		{ "EditCondition", "bSubdivide && Type != EPCGExBevelProfileType::Custom && SubdivideMethod == EPCGExSubdivideMode::Distance && SubdivisionAmountInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubdivisionCount_MetaData[] = {
		{ "Category", "Settings|Subdivision" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Subdivisions (Count)" },
		{ "EditCondition", "bSubdivide && Type != EPCGExBevelProfileType::Custom && SubdivideMethod == EPCGExSubdivideMode::Count && SubdivisionAmountInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubdivisionAmount_MetaData[] = {
		{ "Category", "Settings|Subdivision" },
		{ "DisplayName", "Subdividions (Attr)" },
		{ "EditCondition", "bSubdivide && Type != EPCGExBevelProfileType::Custom && SubdivideMethod != EPCGExSubdivideMode::Manhattan && SubdivisionAmountInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManhattanDetails_MetaData[] = {
		{ "Category", "Settings|Subdivision" },
		{ "DisplayName", "Manhattan" },
		{ "EditCondition", "bSubdivide && Type != EPCGExBevelProfileType::Custom && SubdivideMethod == EPCGExSubdivideMode::Manhattan" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlagPoles_MetaData[] = {
		{ "Category", "Settings|Flags" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoleFlagName_MetaData[] = {
		{ "Category", "Settings|Flags" },
		{ "Comment", "/** Name of the boolean flag to write whether the point is a Bevel endpoint or not (Either start or end) */" },
		{ "EditCondition", "bFlagPoles" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the boolean flag to write whether the point is a Bevel endpoint or not (Either start or end)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlagStartPoint_MetaData[] = {
		{ "Category", "Settings|Flags" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPointFlagName_MetaData[] = {
		{ "Category", "Settings|Flags" },
		{ "Comment", "/** Name of the boolean flag to write whether the point is a Bevel start point or not */" },
		{ "EditCondition", "bFlagStartPoint" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the boolean flag to write whether the point is a Bevel start point or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlagEndPoint_MetaData[] = {
		{ "Category", "Settings|Flags" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPointFlagName_MetaData[] = {
		{ "Category", "Settings|Flags" },
		{ "Comment", "/** Name of the boolean flag to write whether the point is a Bevel end point or not */" },
		{ "EditCondition", "bFlagEndPoint" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the boolean flag to write whether the point is a Bevel end point or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlagSubdivision_MetaData[] = {
		{ "Category", "Settings|Flags" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubdivisionFlagName_MetaData[] = {
		{ "Category", "Settings|Flags" },
		{ "Comment", "/** Name of the boolean flag to write whether the point is a subdivision point or not */" },
		{ "EditCondition", "bFlagSubdivision" },
		{ "ModuleRelativePath", "Public/Paths/PCGExBevelPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the boolean flag to write whether the point is a subdivision point or not" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBevelPathSettings constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static void NewProp_bKeepCornerPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepCornerPoint;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MainAxisScaling_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MainAxisScaling;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MainAxisScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CrossAxisScaling_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CrossAxisScaling;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CrossAxisScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WidthMeasure_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WidthMeasure;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WidthInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WidthInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidthAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WidthConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Limit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Limit;
	static void NewProp_bSubdivide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubdivide;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SubdivideMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SubdivideMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SubdivisionAmountInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SubdivisionAmountInput;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SubdivisionDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubdivisionCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubdivisionAmount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ManhattanDetails;
	static void NewProp_bFlagPoles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlagPoles;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PoleFlagName;
	static void NewProp_bFlagStartPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlagStartPoint;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartPointFlagName;
	static void NewProp_bFlagEndPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlagEndPoint;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EndPointFlagName;
	static void NewProp_bFlagSubdivision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlagSubdivision;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubdivisionFlagName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBevelPathSettings constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBevelPathSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBevelPathSettings_Statics

// ********** Begin Class UPCGExBevelPathSettings Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBevelPathSettings, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3724512492
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBevelPathSettings, Type), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelProfileType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3515080024
void Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bKeepCornerPoint_SetBit(void* Obj)
{
	((UPCGExBevelPathSettings*)Obj)->bKeepCornerPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bKeepCornerPoint = { "bKeepCornerPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBevelPathSettings), &Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bKeepCornerPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepCornerPoint_MetaData), NewProp_bKeepCornerPoint_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_MainAxisScaling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_MainAxisScaling = { "MainAxisScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBevelPathSettings, MainAxisScaling), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelCustomProfileScaling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainAxisScaling_MetaData), NewProp_MainAxisScaling_MetaData) }; // 1935418589
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_MainAxisScale = { "MainAxisScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBevelPathSettings, MainAxisScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainAxisScale_MetaData), NewProp_MainAxisScale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_CrossAxisScaling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_CrossAxisScaling = { "CrossAxisScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBevelPathSettings, CrossAxisScaling), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelCustomProfileScaling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossAxisScaling_MetaData), NewProp_CrossAxisScaling_MetaData) }; // 1935418589
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_CrossAxisScale = { "CrossAxisScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBevelPathSettings, CrossAxisScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossAxisScale_MetaData), NewProp_CrossAxisScale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_WidthMeasure_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_WidthMeasure = { "WidthMeasure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBevelPathSettings, WidthMeasure), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidthMeasure_MetaData), NewProp_WidthMeasure_MetaData) }; // 356721050
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_WidthInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_WidthInput = { "WidthInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBevelPathSettings, WidthInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidthInput_MetaData), NewProp_WidthInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_WidthAttribute = { "WidthAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBevelPathSettings, WidthAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidthAttribute_MetaData), NewProp_WidthAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_WidthConstant = { "WidthConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBevelPathSettings, WidthConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidthConstant_MetaData), NewProp_WidthConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_Limit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBevelPathSettings, Limit), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBevelLimit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) }; // 3405693012
void Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bSubdivide_SetBit(void* Obj)
{
	((UPCGExBevelPathSettings*)Obj)->bSubdivide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bSubdivide = { "bSubdivide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBevelPathSettings), &Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bSubdivide_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSubdivide_MetaData), NewProp_bSubdivide_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_SubdivideMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_SubdivideMethod = { "SubdivideMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBevelPathSettings, SubdivideMethod), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSubdivideMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubdivideMethod_MetaData), NewProp_SubdivideMethod_MetaData) }; // 56681284
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_SubdivisionAmountInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_SubdivisionAmountInput = { "SubdivisionAmountInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBevelPathSettings, SubdivisionAmountInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubdivisionAmountInput_MetaData), NewProp_SubdivisionAmountInput_MetaData) }; // 504493006
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_SubdivisionDistance = { "SubdivisionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBevelPathSettings, SubdivisionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubdivisionDistance_MetaData), NewProp_SubdivisionDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_SubdivisionCount = { "SubdivisionCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBevelPathSettings, SubdivisionCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubdivisionCount_MetaData), NewProp_SubdivisionCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_SubdivisionAmount = { "SubdivisionAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBevelPathSettings, SubdivisionAmount), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubdivisionAmount_MetaData), NewProp_SubdivisionAmount_MetaData) }; // 3844583698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_ManhattanDetails = { "ManhattanDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBevelPathSettings, ManhattanDetails), Z_Construct_UScriptStruct_FPCGExManhattanDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManhattanDetails_MetaData), NewProp_ManhattanDetails_MetaData) }; // 3119287054
void Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bFlagPoles_SetBit(void* Obj)
{
	((UPCGExBevelPathSettings*)Obj)->bFlagPoles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bFlagPoles = { "bFlagPoles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBevelPathSettings), &Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bFlagPoles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlagPoles_MetaData), NewProp_bFlagPoles_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_PoleFlagName = { "PoleFlagName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBevelPathSettings, PoleFlagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoleFlagName_MetaData), NewProp_PoleFlagName_MetaData) };
void Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bFlagStartPoint_SetBit(void* Obj)
{
	((UPCGExBevelPathSettings*)Obj)->bFlagStartPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bFlagStartPoint = { "bFlagStartPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBevelPathSettings), &Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bFlagStartPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlagStartPoint_MetaData), NewProp_bFlagStartPoint_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_StartPointFlagName = { "StartPointFlagName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBevelPathSettings, StartPointFlagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPointFlagName_MetaData), NewProp_StartPointFlagName_MetaData) };
void Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bFlagEndPoint_SetBit(void* Obj)
{
	((UPCGExBevelPathSettings*)Obj)->bFlagEndPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bFlagEndPoint = { "bFlagEndPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBevelPathSettings), &Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bFlagEndPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlagEndPoint_MetaData), NewProp_bFlagEndPoint_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_EndPointFlagName = { "EndPointFlagName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBevelPathSettings, EndPointFlagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPointFlagName_MetaData), NewProp_EndPointFlagName_MetaData) };
void Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bFlagSubdivision_SetBit(void* Obj)
{
	((UPCGExBevelPathSettings*)Obj)->bFlagSubdivision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bFlagSubdivision = { "bFlagSubdivision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBevelPathSettings), &Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bFlagSubdivision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlagSubdivision_MetaData), NewProp_bFlagSubdivision_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_SubdivisionFlagName = { "SubdivisionFlagName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBevelPathSettings, SubdivisionFlagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubdivisionFlagName_MetaData), NewProp_SubdivisionFlagName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBevelPathSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bKeepCornerPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_MainAxisScaling_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_MainAxisScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_MainAxisScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_CrossAxisScaling_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_CrossAxisScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_CrossAxisScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_WidthMeasure_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_WidthMeasure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_WidthInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_WidthInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_WidthAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_WidthConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_Limit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bSubdivide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_SubdivideMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_SubdivideMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_SubdivisionAmountInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_SubdivisionAmountInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_SubdivisionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_SubdivisionCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_SubdivisionAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_ManhattanDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bFlagPoles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_PoleFlagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bFlagStartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_StartPointFlagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bFlagEndPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_EndPointFlagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_bFlagSubdivision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBevelPathSettings_Statics::NewProp_SubdivisionFlagName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBevelPathSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBevelPathSettings Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPCGExBevelPathSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBevelPathSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBevelPathSettings_Statics::ClassParams = {
	&UPCGExBevelPathSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBevelPathSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBevelPathSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBevelPathSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBevelPathSettings_Statics::Class_MetaDataParams)
};
void UPCGExBevelPathSettings::StaticRegisterNativesUPCGExBevelPathSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBevelPathSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBevelPathSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBevelPathSettings.OuterSingleton, Z_Construct_UClass_UPCGExBevelPathSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBevelPathSettings.OuterSingleton;
}
UPCGExBevelPathSettings::UPCGExBevelPathSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBevelPathSettings);
UPCGExBevelPathSettings::~UPCGExBevelPathSettings() {}
// ********** End Class UPCGExBevelPathSettings ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBevelPath_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExBevelMode_StaticEnum, TEXT("EPCGExBevelMode"), &Z_Registration_Info_UEnum_EPCGExBevelMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3724512492U) },
		{ EPCGExBevelProfileType_StaticEnum, TEXT("EPCGExBevelProfileType"), &Z_Registration_Info_UEnum_EPCGExBevelProfileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3515080024U) },
		{ EPCGExBevelLimit_StaticEnum, TEXT("EPCGExBevelLimit"), &Z_Registration_Info_UEnum_EPCGExBevelLimit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3405693012U) },
		{ EPCGExBevelCustomProfileScaling_StaticEnum, TEXT("EPCGExBevelCustomProfileScaling"), &Z_Registration_Info_UEnum_EPCGExBevelCustomProfileScaling, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1935418589U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBevelPathSettings, UPCGExBevelPathSettings::StaticClass, TEXT("UPCGExBevelPathSettings"), &Z_Registration_Info_UClass_UPCGExBevelPathSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBevelPathSettings), 4050650159U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBevelPath_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBevelPath_h__Script_PCGExtendedToolkit_2191786812{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBevelPath_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBevelPath_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBevelPath_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExBevelPath_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
