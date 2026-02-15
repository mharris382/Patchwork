// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExAttributeRolling.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExAttributeRolling() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAttributeRollingSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAttributeRollingSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingRangeControl();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingToggleInitialValue();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingValueControl();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExRollingRangeControl *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExRollingRangeControl;
static UEnum* EPCGExRollingRangeControl_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExRollingRangeControl.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExRollingRangeControl.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingRangeControl, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExRollingRangeControl"));
	}
	return Z_Registration_Info_UEnum_EPCGExRollingRangeControl.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRollingRangeControl>()
{
	return EPCGExRollingRangeControl_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingRangeControl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "StartStop.DisplayName", "Start/Stop" },
		{ "StartStop.Name", "EPCGExRollingRangeControl::StartStop" },
		{ "StartStop.ToolTip", "Uses two separate set of filters to start & stop rolling" },
		{ "Toggle.DisplayName", "Toggle" },
		{ "Toggle.Name", "EPCGExRollingRangeControl::Toggle" },
		{ "Toggle.ToolTip", "Uses a single set of filter that switches roll on/off whenever a point passes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExRollingRangeControl::StartStop", (int64)EPCGExRollingRangeControl::StartStop },
		{ "EPCGExRollingRangeControl::Toggle", (int64)EPCGExRollingRangeControl::Toggle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingRangeControl_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingRangeControl_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExRollingRangeControl",
	"EPCGExRollingRangeControl",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingRangeControl_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingRangeControl_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingRangeControl_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingRangeControl_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingRangeControl()
{
	if (!Z_Registration_Info_UEnum_EPCGExRollingRangeControl.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExRollingRangeControl.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingRangeControl_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExRollingRangeControl.InnerSingleton;
}
// ********** End Enum EPCGExRollingRangeControl ***************************************************

// ********** Begin Enum EPCGExRollingToggleInitialValue *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExRollingToggleInitialValue;
static UEnum* EPCGExRollingToggleInitialValue_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExRollingToggleInitialValue.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExRollingToggleInitialValue.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingToggleInitialValue, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExRollingToggleInitialValue"));
	}
	return Z_Registration_Info_UEnum_EPCGExRollingToggleInitialValue.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRollingToggleInitialValue>()
{
	return EPCGExRollingToggleInitialValue_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingToggleInitialValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Constant.DisplayName", "Constant" },
		{ "Constant.Name", "EPCGExRollingToggleInitialValue::Constant" },
		{ "Constant.ToolTip", "Use a constant value." },
		{ "ConstantPreserve.DisplayName", "Constant (Preserve)" },
		{ "ConstantPreserve.Name", "EPCGExRollingToggleInitialValue::ConstantPreserve" },
		{ "ConstantPreserve.ToolTip", "Use a constant value, but does not switch if the first value is the same." },
		{ "FromPoint.DisplayName", "From Point" },
		{ "FromPoint.Name", "EPCGExRollingToggleInitialValue::FromPoint" },
		{ "FromPoint.ToolTip", "Use the first point starting value." },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExRollingToggleInitialValue::Constant", (int64)EPCGExRollingToggleInitialValue::Constant },
		{ "EPCGExRollingToggleInitialValue::ConstantPreserve", (int64)EPCGExRollingToggleInitialValue::ConstantPreserve },
		{ "EPCGExRollingToggleInitialValue::FromPoint", (int64)EPCGExRollingToggleInitialValue::FromPoint },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingToggleInitialValue_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingToggleInitialValue_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExRollingToggleInitialValue",
	"EPCGExRollingToggleInitialValue",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingToggleInitialValue_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingToggleInitialValue_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingToggleInitialValue_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingToggleInitialValue_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingToggleInitialValue()
{
	if (!Z_Registration_Info_UEnum_EPCGExRollingToggleInitialValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExRollingToggleInitialValue.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingToggleInitialValue_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExRollingToggleInitialValue.InnerSingleton;
}
// ********** End Enum EPCGExRollingToggleInitialValue *********************************************

// ********** Begin Enum EPCGExRollingValueControl *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExRollingValueControl;
static UEnum* EPCGExRollingValueControl_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExRollingValueControl.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExRollingValueControl.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingValueControl, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExRollingValueControl"));
	}
	return Z_Registration_Info_UEnum_EPCGExRollingValueControl.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRollingValueControl>()
{
	return EPCGExRollingValueControl_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingValueControl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "Pin.DisplayName", "Pin" },
		{ "Pin.Name", "EPCGExRollingValueControl::Pin" },
		{ "Pin.ToolTip", "Uses filter to determine when a point should be used as reference for rolling" },
		{ "Previous.DisplayName", "Previous" },
		{ "Previous.Name", "EPCGExRollingValueControl::Previous" },
		{ "Previous.ToolTip", "Use the previous point' value" },
		{ "RangeStart.DisplayName", "Range Start" },
		{ "RangeStart.Name", "EPCGExRollingValueControl::RangeStart" },
		{ "RangeStart.ToolTip", "Use the first point of a range" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExRollingValueControl::Pin", (int64)EPCGExRollingValueControl::Pin },
		{ "EPCGExRollingValueControl::Previous", (int64)EPCGExRollingValueControl::Previous },
		{ "EPCGExRollingValueControl::RangeStart", (int64)EPCGExRollingValueControl::RangeStart },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingValueControl_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingValueControl_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExRollingValueControl",
	"EPCGExRollingValueControl",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingValueControl_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingValueControl_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingValueControl_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingValueControl_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingValueControl()
{
	if (!Z_Registration_Info_UEnum_EPCGExRollingValueControl.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExRollingValueControl.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingValueControl_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExRollingValueControl.InnerSingleton;
}
// ********** End Enum EPCGExRollingValueControl ***************************************************

// ********** Begin Class UPCGExAttributeRollingSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExAttributeRollingSettings;
UClass* UPCGExAttributeRollingSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExAttributeRollingSettings;
	if (!Z_Registration_Info_UClass_UPCGExAttributeRollingSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExAttributeRollingSettings"),
			Z_Registration_Info_UClass_UPCGExAttributeRollingSettings.InnerSingleton,
			StaticRegisterNativesUPCGExAttributeRollingSettings,
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
	return Z_Registration_Info_UClass_UPCGExAttributeRollingSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExAttributeRollingSettings_NoRegister()
{
	return UPCGExAttributeRollingSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExAttributeRolling.h" },
		{ "Keywords", "range" },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "paths/attribute-rolling" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeControl_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rolling range control */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Rolling range control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueControl_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rolling value control */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Rolling value control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialValueMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitialValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Starting toggle value. */" },
		{ "EditCondition", "InitialValueMode != EPCGExRollingToggleInitialValue::FromPoint" },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Starting toggle value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverseRolling_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Reverse rolling order */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Reverse rolling order" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlendOutsideRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Enable blend operations to be processed outside the rolling range. This can be useful in some cases. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Enable blend operations to be processed outside the rolling range. This can be useful in some cases." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlendStopElement_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "!bBlendOutsideRange" },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteRangeStart_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeStartAttributeName_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/** Name of the 'bool' attribute to write range start to.*/" },
		{ "DisplayName", "Range Start" },
		{ "EditCondition", "bWriteRangeStart" },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'bool' attribute to write range start to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteRangeStop_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeStopAttributeName_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/** Name of the 'bool' attribute to write range stop to.*/" },
		{ "DisplayName", "Range Stop" },
		{ "EditCondition", "bWriteRangeStop" },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'bool' attribute to write range stop to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteRangePole_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangePoleAttributeName_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/** Name of the 'bool' attribute to write range pole to. A pole is either start or stop. */" },
		{ "DisplayName", "Range Pole" },
		{ "EditCondition", "bWriteRangePole" },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'bool' attribute to write range pole to. A pole is either start or stop." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteRangeIndex_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeIndexAttributeName_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/** Name of the 'int32' attribute to write range index to.*/" },
		{ "DisplayName", "Range Index" },
		{ "EditCondition", "bWriteRangeIndex" },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write range index to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeIndexOffset_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/** Let you add an offset to the range index value. Since it's an index, its default value is -1, and the first index is 0; a default value of 0 or above may be more desirable for some usecases. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Index Offset" },
		{ "EditCondition", "bWriteRangeIndex" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Let you add an offset to the range index value. Since it's an index, its default value is -1, and the first index is 0; a default value of 0 or above may be more desirable for some usecases." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteIsInsideRange_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsInsideRangeAttributeName_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/** Name of the 'bool' attribute to write whether a point is inside the range or not.*/" },
		{ "DisplayName", "Is Inside Range" },
		{ "EditCondition", "bWriteIsInsideRange" },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'bool' attribute to write whether a point is inside the range or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteIndexInsideRange_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexInsideRangeAttributeName_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/** Name of the 'int32' attribute to write range index to.*/" },
		{ "DisplayName", "Index inside Range" },
		{ "EditCondition", "bWriteIndexInsideRange" },
		{ "ModuleRelativePath", "Public/Paths/PCGExAttributeRolling.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write range index to." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExAttributeRollingSettings constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_RangeControl_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RangeControl;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ValueControl_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ValueControl;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InitialValueMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialValueMode;
	static void NewProp_bInitialValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialValue;
	static void NewProp_bReverseRolling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseRolling;
	static void NewProp_bBlendOutsideRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendOutsideRange;
	static void NewProp_bBlendStopElement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendStopElement;
	static void NewProp_bWriteRangeStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteRangeStart;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RangeStartAttributeName;
	static void NewProp_bWriteRangeStop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteRangeStop;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RangeStopAttributeName;
	static void NewProp_bWriteRangePole_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteRangePole;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RangePoleAttributeName;
	static void NewProp_bWriteRangeIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteRangeIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RangeIndexAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeIndexOffset;
	static void NewProp_bWriteIsInsideRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteIsInsideRange;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IsInsideRangeAttributeName;
	static void NewProp_bWriteIndexInsideRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteIndexInsideRange;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IndexInsideRangeAttributeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExAttributeRollingSettings constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExAttributeRollingSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics

// ********** Begin Class UPCGExAttributeRollingSettings Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_RangeControl_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_RangeControl = { "RangeControl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeRollingSettings, RangeControl), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingRangeControl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeControl_MetaData), NewProp_RangeControl_MetaData) }; // 2061212512
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_ValueControl_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_ValueControl = { "ValueControl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeRollingSettings, ValueControl), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingValueControl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueControl_MetaData), NewProp_ValueControl_MetaData) }; // 2400273384
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_InitialValueMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_InitialValueMode = { "InitialValueMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeRollingSettings, InitialValueMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRollingToggleInitialValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialValueMode_MetaData), NewProp_InitialValueMode_MetaData) }; // 3882836200
void Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bInitialValue_SetBit(void* Obj)
{
	((UPCGExAttributeRollingSettings*)Obj)->bInitialValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bInitialValue = { "bInitialValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeRollingSettings), &Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bInitialValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitialValue_MetaData), NewProp_bInitialValue_MetaData) };
void Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bReverseRolling_SetBit(void* Obj)
{
	((UPCGExAttributeRollingSettings*)Obj)->bReverseRolling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bReverseRolling = { "bReverseRolling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeRollingSettings), &Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bReverseRolling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverseRolling_MetaData), NewProp_bReverseRolling_MetaData) };
void Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bBlendOutsideRange_SetBit(void* Obj)
{
	((UPCGExAttributeRollingSettings*)Obj)->bBlendOutsideRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bBlendOutsideRange = { "bBlendOutsideRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeRollingSettings), &Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bBlendOutsideRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlendOutsideRange_MetaData), NewProp_bBlendOutsideRange_MetaData) };
void Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bBlendStopElement_SetBit(void* Obj)
{
	((UPCGExAttributeRollingSettings*)Obj)->bBlendStopElement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bBlendStopElement = { "bBlendStopElement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeRollingSettings), &Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bBlendStopElement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlendStopElement_MetaData), NewProp_bBlendStopElement_MetaData) };
void Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteRangeStart_SetBit(void* Obj)
{
	((UPCGExAttributeRollingSettings*)Obj)->bWriteRangeStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteRangeStart = { "bWriteRangeStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeRollingSettings), &Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteRangeStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteRangeStart_MetaData), NewProp_bWriteRangeStart_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_RangeStartAttributeName = { "RangeStartAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeRollingSettings, RangeStartAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeStartAttributeName_MetaData), NewProp_RangeStartAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteRangeStop_SetBit(void* Obj)
{
	((UPCGExAttributeRollingSettings*)Obj)->bWriteRangeStop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteRangeStop = { "bWriteRangeStop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeRollingSettings), &Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteRangeStop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteRangeStop_MetaData), NewProp_bWriteRangeStop_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_RangeStopAttributeName = { "RangeStopAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeRollingSettings, RangeStopAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeStopAttributeName_MetaData), NewProp_RangeStopAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteRangePole_SetBit(void* Obj)
{
	((UPCGExAttributeRollingSettings*)Obj)->bWriteRangePole = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteRangePole = { "bWriteRangePole", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeRollingSettings), &Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteRangePole_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteRangePole_MetaData), NewProp_bWriteRangePole_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_RangePoleAttributeName = { "RangePoleAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeRollingSettings, RangePoleAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangePoleAttributeName_MetaData), NewProp_RangePoleAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteRangeIndex_SetBit(void* Obj)
{
	((UPCGExAttributeRollingSettings*)Obj)->bWriteRangeIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteRangeIndex = { "bWriteRangeIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeRollingSettings), &Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteRangeIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteRangeIndex_MetaData), NewProp_bWriteRangeIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_RangeIndexAttributeName = { "RangeIndexAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeRollingSettings, RangeIndexAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeIndexAttributeName_MetaData), NewProp_RangeIndexAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_RangeIndexOffset = { "RangeIndexOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeRollingSettings, RangeIndexOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeIndexOffset_MetaData), NewProp_RangeIndexOffset_MetaData) };
void Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteIsInsideRange_SetBit(void* Obj)
{
	((UPCGExAttributeRollingSettings*)Obj)->bWriteIsInsideRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteIsInsideRange = { "bWriteIsInsideRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeRollingSettings), &Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteIsInsideRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteIsInsideRange_MetaData), NewProp_bWriteIsInsideRange_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_IsInsideRangeAttributeName = { "IsInsideRangeAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeRollingSettings, IsInsideRangeAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsInsideRangeAttributeName_MetaData), NewProp_IsInsideRangeAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteIndexInsideRange_SetBit(void* Obj)
{
	((UPCGExAttributeRollingSettings*)Obj)->bWriteIndexInsideRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteIndexInsideRange = { "bWriteIndexInsideRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExAttributeRollingSettings), &Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteIndexInsideRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteIndexInsideRange_MetaData), NewProp_bWriteIndexInsideRange_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_IndexInsideRangeAttributeName = { "IndexInsideRangeAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExAttributeRollingSettings, IndexInsideRangeAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexInsideRangeAttributeName_MetaData), NewProp_IndexInsideRangeAttributeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_RangeControl_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_RangeControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_ValueControl_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_ValueControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_InitialValueMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_InitialValueMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bInitialValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bReverseRolling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bBlendOutsideRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bBlendStopElement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteRangeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_RangeStartAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteRangeStop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_RangeStopAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteRangePole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_RangePoleAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteRangeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_RangeIndexAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_RangeIndexOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteIsInsideRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_IsInsideRangeAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_bWriteIndexInsideRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::NewProp_IndexInsideRangeAttributeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExAttributeRollingSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::ClassParams = {
	&UPCGExAttributeRollingSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::Class_MetaDataParams)
};
void UPCGExAttributeRollingSettings::StaticRegisterNativesUPCGExAttributeRollingSettings()
{
}
UClass* Z_Construct_UClass_UPCGExAttributeRollingSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExAttributeRollingSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExAttributeRollingSettings.OuterSingleton, Z_Construct_UClass_UPCGExAttributeRollingSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExAttributeRollingSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExAttributeRollingSettings);
UPCGExAttributeRollingSettings::~UPCGExAttributeRollingSettings() {}
// ********** End Class UPCGExAttributeRollingSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExAttributeRolling_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExRollingRangeControl_StaticEnum, TEXT("EPCGExRollingRangeControl"), &Z_Registration_Info_UEnum_EPCGExRollingRangeControl, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2061212512U) },
		{ EPCGExRollingToggleInitialValue_StaticEnum, TEXT("EPCGExRollingToggleInitialValue"), &Z_Registration_Info_UEnum_EPCGExRollingToggleInitialValue, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3882836200U) },
		{ EPCGExRollingValueControl_StaticEnum, TEXT("EPCGExRollingValueControl"), &Z_Registration_Info_UEnum_EPCGExRollingValueControl, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2400273384U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExAttributeRollingSettings, UPCGExAttributeRollingSettings::StaticClass, TEXT("UPCGExAttributeRollingSettings"), &Z_Registration_Info_UClass_UPCGExAttributeRollingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExAttributeRollingSettings), 432740743U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExAttributeRolling_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExAttributeRolling_h__Script_PCGExtendedToolkit_1803471512{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExAttributeRolling_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExAttributeRolling_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExAttributeRolling_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExAttributeRolling_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
