// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGExGlobalSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExGlobalSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExGlobalSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExGlobalSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAsyncPriority();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExDataBlendingTypeDefault *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExDataBlendingTypeDefault;
static UEnum* EPCGExDataBlendingTypeDefault_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExDataBlendingTypeDefault.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExDataBlendingTypeDefault.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExDataBlendingTypeDefault"));
	}
	return Z_Registration_Info_UEnum_EPCGExDataBlendingTypeDefault.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExDataBlendingTypeDefault>()
{
	return EPCGExDataBlendingTypeDefault_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AbsoluteMax.DisplayName", "Unsigned Max" },
		{ "AbsoluteMax.Name", "EPCGExDataBlendingTypeDefault::AbsoluteMax" },
		{ "AbsoluteMax.ToolTip", "Component-wise MAX on unsigned value, but keeps the sign on written data." },
		{ "AbsoluteMin.DisplayName", "Unsigned Min" },
		{ "AbsoluteMin.Name", "EPCGExDataBlendingTypeDefault::AbsoluteMin" },
		{ "AbsoluteMin.ToolTip", "Component-wise MIN on unsigned value, but keeps the sign on written data." },
		{ "Average.DisplayName", "Average" },
		{ "Average.Name", "EPCGExDataBlendingTypeDefault::Average" },
		{ "Average.ToolTip", "Average all sampled values." },
		{ "Copy.DisplayName", "Copy (Target)" },
		{ "Copy.Name", "EPCGExDataBlendingTypeDefault::Copy" },
		{ "Copy.ToolTip", "Copy target data (second value)" },
		{ "CopyOther.DisplayName", "Copy (Source)" },
		{ "CopyOther.Name", "EPCGExDataBlendingTypeDefault::CopyOther" },
		{ "CopyOther.ToolTip", "Copy source data (first value)" },
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "EPCGExDataBlendingTypeDefault::Default" },
		{ "Default.ToolTip", "Use the node' default" },
		{ "Hash.DisplayName", "Hash" },
		{ "Hash.Name", "EPCGExDataBlendingTypeDefault::Hash" },
		{ "Hash.ToolTip", "Combine the values into a hash" },
		{ "Lerp.DisplayName", "Lerp" },
		{ "Lerp.Name", "EPCGExDataBlendingTypeDefault::Lerp" },
		{ "Lerp.ToolTip", "Uses weight as lerp. If the results are unexpected, try 'Weight' instead." },
		{ "Max.DisplayName", "Max" },
		{ "Max.Name", "EPCGExDataBlendingTypeDefault::Max" },
		{ "Max.ToolTip", "Component-wise MAX operation" },
		{ "Min.DisplayName", "Min" },
		{ "Min.Name", "EPCGExDataBlendingTypeDefault::Min" },
		{ "Min.ToolTip", "Component-wise MIN operation" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPCGExDataBlendingTypeDefault::None" },
		{ "None.ToolTip", "No blending is applied, keep the original value." },
		{ "Subtract.DisplayName", "Subtract" },
		{ "Subtract.Name", "EPCGExDataBlendingTypeDefault::Subtract" },
		{ "Subtract.ToolTip", "Subtract." },
		{ "Sum.DisplayName", "Sum" },
		{ "Sum.Name", "EPCGExDataBlendingTypeDefault::Sum" },
		{ "Sum.ToolTip", "Sum" },
		{ "UnsignedHash.DisplayName", "Hash (Unsigned)" },
		{ "UnsignedHash.Name", "EPCGExDataBlendingTypeDefault::UnsignedHash" },
		{ "UnsignedHash.ToolTip", "Combine the values into a hash but sort the values first to create an order-independent hash." },
		{ "UnsignedMax.DisplayName", "Unsigned Max" },
		{ "UnsignedMax.Name", "EPCGExDataBlendingTypeDefault::UnsignedMax" },
		{ "UnsignedMax.ToolTip", "Component-wise MAX on unsigned value, but keeps the sign on written data." },
		{ "UnsignedMin.DisplayName", "Unsigned Min" },
		{ "UnsignedMin.Name", "EPCGExDataBlendingTypeDefault::UnsignedMin" },
		{ "UnsignedMin.ToolTip", "Component-wise MIN on unsigned value, but keeps the sign on written data." },
		{ "Weight.DisplayName", "Weight" },
		{ "Weight.Name", "EPCGExDataBlendingTypeDefault::Weight" },
		{ "Weight.ToolTip", "Weights based on distance to blend targets. If the results are unexpected, try 'Lerp' instead" },
		{ "WeightedSubtract.DisplayName", "Weighted Subtract" },
		{ "WeightedSubtract.Name", "EPCGExDataBlendingTypeDefault::WeightedSubtract" },
		{ "WeightedSubtract.ToolTip", "Substraction of all the data, weighted" },
		{ "WeightedSum.DisplayName", "Weighted Sum" },
		{ "WeightedSum.Name", "EPCGExDataBlendingTypeDefault::WeightedSum" },
		{ "WeightedSum.ToolTip", "Sum of all the data, weighted" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExDataBlendingTypeDefault::Default", (int64)EPCGExDataBlendingTypeDefault::Default },
		{ "EPCGExDataBlendingTypeDefault::None", (int64)EPCGExDataBlendingTypeDefault::None },
		{ "EPCGExDataBlendingTypeDefault::Average", (int64)EPCGExDataBlendingTypeDefault::Average },
		{ "EPCGExDataBlendingTypeDefault::Weight", (int64)EPCGExDataBlendingTypeDefault::Weight },
		{ "EPCGExDataBlendingTypeDefault::Min", (int64)EPCGExDataBlendingTypeDefault::Min },
		{ "EPCGExDataBlendingTypeDefault::Max", (int64)EPCGExDataBlendingTypeDefault::Max },
		{ "EPCGExDataBlendingTypeDefault::Copy", (int64)EPCGExDataBlendingTypeDefault::Copy },
		{ "EPCGExDataBlendingTypeDefault::Sum", (int64)EPCGExDataBlendingTypeDefault::Sum },
		{ "EPCGExDataBlendingTypeDefault::WeightedSum", (int64)EPCGExDataBlendingTypeDefault::WeightedSum },
		{ "EPCGExDataBlendingTypeDefault::Lerp", (int64)EPCGExDataBlendingTypeDefault::Lerp },
		{ "EPCGExDataBlendingTypeDefault::Subtract", (int64)EPCGExDataBlendingTypeDefault::Subtract },
		{ "EPCGExDataBlendingTypeDefault::UnsignedMin", (int64)EPCGExDataBlendingTypeDefault::UnsignedMin },
		{ "EPCGExDataBlendingTypeDefault::UnsignedMax", (int64)EPCGExDataBlendingTypeDefault::UnsignedMax },
		{ "EPCGExDataBlendingTypeDefault::AbsoluteMin", (int64)EPCGExDataBlendingTypeDefault::AbsoluteMin },
		{ "EPCGExDataBlendingTypeDefault::AbsoluteMax", (int64)EPCGExDataBlendingTypeDefault::AbsoluteMax },
		{ "EPCGExDataBlendingTypeDefault::WeightedSubtract", (int64)EPCGExDataBlendingTypeDefault::WeightedSubtract },
		{ "EPCGExDataBlendingTypeDefault::CopyOther", (int64)EPCGExDataBlendingTypeDefault::CopyOther },
		{ "EPCGExDataBlendingTypeDefault::Hash", (int64)EPCGExDataBlendingTypeDefault::Hash },
		{ "EPCGExDataBlendingTypeDefault::UnsignedHash", (int64)EPCGExDataBlendingTypeDefault::UnsignedHash },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExDataBlendingTypeDefault",
	"EPCGExDataBlendingTypeDefault",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault()
{
	if (!Z_Registration_Info_UEnum_EPCGExDataBlendingTypeDefault.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExDataBlendingTypeDefault.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExDataBlendingTypeDefault.InnerSingleton;
}
// ********** End Enum EPCGExDataBlendingTypeDefault ***********************************************

// ********** Begin Class UPCGExGlobalSettings *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExGlobalSettings;
UClass* UPCGExGlobalSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExGlobalSettings;
	if (!Z_Registration_Info_UClass_UPCGExGlobalSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExGlobalSettings"),
			Z_Registration_Info_UClass_UPCGExGlobalSettings.InnerSingleton,
			StaticRegisterNativesUPCGExGlobalSettings,
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
	return Z_Registration_Info_UClass_UPCGExGlobalSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExGlobalSettings_NoRegister()
{
	return UPCGExGlobalSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExGlobalSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Description", "Configure PCG Extended Toolkit settings" },
		{ "DisplayName", "PCGEx" },
		{ "IncludePath", "PCGExGlobalSettings.h" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldUp_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** World \"Up\" vector used as default up internally */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "World \"Up\" vector used as default up internally" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultCacheNodeOutput_MetaData[] = {
		{ "Category", "Performance|Defaults" },
		{ "Comment", "/** Value applied by default to node caching when `Default` is selected -- note that some nodes may stop working as expected when working with cached data.*/" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Value applied by default to node caching when `Default` is selected -- note that some nodes may stop working as expected when working with cached data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultScopedAttributeGet_MetaData[] = {
		{ "Category", "Performance|Defaults" },
		{ "Comment", "/** Value applied by default to node caching when `Default` is selected*/" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Value applied by default to node caching when `Default` is selected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBulkInitData_MetaData[] = {
		{ "Category", "Performance|Defaults" },
		{ "Comment", "/** Value applied by default to node bulk init data when `Default` is selected. */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Value applied by default to node bulk init data when `Default` is selected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallClusterSize_MetaData[] = {
		{ "Category", "Performance|Cluster" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterDefaultBatchChunkSize_MetaData[] = {
		{ "Category", "Performance|Cluster" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultScopedIndexLookupBuild_MetaData[] = {
		{ "Category", "Performance|Cluster" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCacheClusters_MetaData[] = {
		{ "Category", "Performance|Cluster" },
		{ "Comment", "/** Allow caching of clusters so they don't have to be rebuilt every time data changes hands */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Allow caching of clusters so they don't have to be rebuilt every time data changes hands" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultBuildAndCacheClusters_MetaData[] = {
		{ "Category", "Performance|Cluster" },
		{ "Comment", "/** Default value for new nodes (Editable per-node in the Graph Output Settings) */" },
		{ "EditCondition", "bCacheClusters" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Default value for new nodes (Editable per-node in the Graph Output Settings)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallPointsSize_MetaData[] = {
		{ "Category", "Performance|Points" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointsDefaultBatchChunkSize_MetaData[] = {
		{ "Category", "Performance|Points" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWorkPriority_MetaData[] = {
		{ "Category", "Performance|Async" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPersistentDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** If enabled, debug generated by PCG will not be transient. (Pre-5.6 behavior) (Requires restarting the editor.)*/" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "If enabled, debug generated by PCG will not be transient. (Pre-5.6 behavior) (Requires restarting the editor.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAssertOnEmptyThread_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** If enabled, code will assert when attempting to schedule zero task. Requires a debugguer attached to the editor, otherwise will crash.  */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "If enabled, code will assert when attempting to schedule zero task. Requires a debugguer attached to the editor, otherwise will crash." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCollisionByDefault_MetaData[] = {
		{ "Category", "Collections" },
		{ "Comment", "/** Disable collision on new entries */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Disable collision on new entries" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBooleanBlendMode_MetaData[] = {
		{ "Category", "Blending|Attribute Types Defaults|Simple Types" },
		{ "DisplayName", "Boolean" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFloatBlendMode_MetaData[] = {
		{ "Category", "Blending|Attribute Types Defaults|Simple Types" },
		{ "DisplayName", "Float" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDoubleBlendMode_MetaData[] = {
		{ "Category", "Blending|Attribute Types Defaults|Simple Types" },
		{ "DisplayName", "Double" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInteger32BlendMode_MetaData[] = {
		{ "Category", "Blending|Attribute Types Defaults|Simple Types" },
		{ "DisplayName", "Integer32" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInteger64BlendMode_MetaData[] = {
		{ "Category", "Blending|Attribute Types Defaults|Simple Types" },
		{ "DisplayName", "Integer64" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVector2BlendMode_MetaData[] = {
		{ "Category", "Blending|Attribute Types Defaults|Vector Types" },
		{ "DisplayName", "Vector2" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVectorBlendMode_MetaData[] = {
		{ "Category", "Blending|Attribute Types Defaults|Vector Types" },
		{ "DisplayName", "Vector" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVector4BlendMode_MetaData[] = {
		{ "Category", "Blending|Attribute Types Defaults|Vector Types" },
		{ "DisplayName", "Vector4" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultQuaternionBlendMode_MetaData[] = {
		{ "Category", "Blending|Attribute Types Defaults|Complex Types" },
		{ "DisplayName", "Quaternion" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTransformBlendMode_MetaData[] = {
		{ "Category", "Blending|Attribute Types Defaults|Complex Types" },
		{ "DisplayName", "Transform" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRotatorBlendMode_MetaData[] = {
		{ "Category", "Blending|Attribute Types Defaults|Complex Types" },
		{ "DisplayName", "Rotator" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStringBlendMode_MetaData[] = {
		{ "Category", "Blending|Attribute Types Defaults|Text Types" },
		{ "DisplayName", "String" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNameBlendMode_MetaData[] = {
		{ "Category", "Blending|Attribute Types Defaults|Text Types" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSoftObjectPathBlendMode_MetaData[] = {
		{ "Category", "Blending|Attribute Types Defaults|Soft Paths Types" },
		{ "DisplayName", "SoftObjectPath" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSoftClassPathBlendMode_MetaData[] = {
		{ "Category", "Blending|Attribute Types Defaults|Soft Paths Types" },
		{ "DisplayName", "SoftClassPath" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bToneDownOptionalPins_MetaData[] = {
		{ "Category", "Colors and Semantics" },
		{ "Comment", "/**If enabled, non-required pin that are disconnected will be toned down. Helps reduce the confusion regarding which pin matters; but may, on the contrary, be perceived as being more \"noisy\" in a graph. */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "If enabled, non-required pin that are disconnected will be toned down. Helps reduce the confusion regarding which pin matters; but may, on the contrary, be perceived as being more \"noisy\" in a graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseNativeColorsIfPossible_MetaData[] = {
		{ "Category", "Colors and Semantics" },
		{ "Comment", "/** If enabled, will use native node colors where relevant. I.e filters, spawners, etc. in order to stay as close as possible from the vanilla color semantics. */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "If enabled, will use native node colors where relevant. I.e filters, spawners, etc. in order to stay as close as possible from the vanilla color semantics." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorConstant_MetaData[] = {
		{ "Category", "Colors and Semantics" },
		{ "Comment", "/** Color associated with constants & nodes that output constant values */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with constants & nodes that output constant values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorDebug_MetaData[] = {
		{ "Category", "Colors and Semantics" },
		{ "Comment", "/** Color associated with debug nodes */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with debug nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorMisc_MetaData[] = {
		{ "Category", "Colors and Semantics" },
		{ "Comment", "/** Color associated with misc nodes, that don't really fall in any specific category */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with misc nodes, that don't really fall in any specific category" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorMiscWrite_MetaData[] = {
		{ "Category", "Colors and Semantics" },
		{ "Comment", "/** Color associated with misc nodes that usually write new attribute & values to existing data */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with misc nodes that usually write new attribute & values to existing data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorMiscAdd_MetaData[] = {
		{ "Category", "Colors and Semantics" },
		{ "Comment", "/** Color associated with nodes that generate new data or split existing data into more data */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with nodes that generate new data or split existing data into more data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorMiscRemove_MetaData[] = {
		{ "Category", "Colors and Semantics" },
		{ "Comment", "/** Color associated with nodes that remove and delete things */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with nodes that remove and delete things" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorSampling_MetaData[] = {
		{ "Category", "Colors and Semantics" },
		{ "Comment", "/** Color associated with nodes that grab attributes and value from external sources */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with nodes that grab attributes and value from external sources" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorClusterGenerator_MetaData[] = {
		{ "Category", "Colors and Semantics" },
		{ "Comment", "/** Color associated with nodes that creates cluster data. */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with nodes that creates cluster data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorClusterOp_MetaData[] = {
		{ "Category", "Colors and Semantics" },
		{ "Comment", "/** Color associated with nodes that do operations on clusters */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with nodes that do operations on clusters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorPathfinding_MetaData[] = {
		{ "Category", "Colors and Semantics" },
		{ "Comment", "/** Color associated with nodes that do pathfinding-like operations on clusters */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with nodes that do pathfinding-like operations on clusters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorPath_MetaData[] = {
		{ "Category", "Colors and Semantics" },
		{ "Comment", "/** Color associated with nodes that do operations on path-like data */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with nodes that do operations on path-like data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorFilterHub_MetaData[] = {
		{ "Category", "Colors and Semantics" },
		{ "Comment", "/** Color associated with nodes that focus solely on filtering data */" },
		{ "EditCondition", "!bUseNativeColorsIfPossible" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with nodes that focus solely on filtering data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorTransform_MetaData[] = {
		{ "Category", "Colors and Semantics" },
		{ "Comment", "/** Color associated with nodes that focus on spatial transformations */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with nodes that focus on spatial transformations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorAction_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes" },
		{ "Comment", "/** Color associated with action subnodes */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with action subnodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorBlendOp_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes" },
		{ "Comment", "/** Color associated with blend operations subnodes */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with blend operations subnodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorMatchRule_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes" },
		{ "Comment", "/** Color associated with match rules subnodes */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with match rules subnodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorFilter_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes|Filters" },
		{ "Comment", "/** Color associated with filter (generic) subnodes */" },
		{ "EditCondition", "!bUseNativeColorsIfPossible" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with filter (generic) subnodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorFilterPoint_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes|Filters" },
		{ "Comment", "/** Color associated with filter (points) subnodes */" },
		{ "EditCondition", "!bUseNativeColorsIfPossible" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with filter (points) subnodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorFilterCollection_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes|Filters" },
		{ "Comment", "/** Color associated with filter (collections) subnodes */" },
		{ "EditCondition", "!bUseNativeColorsIfPossible" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with filter (collections) subnodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorFilterCluster_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes|Filters" },
		{ "Comment", "/** Color associated with filter (cluster) subnodes */" },
		{ "EditCondition", "!bUseNativeColorsIfPossible" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with filter (cluster) subnodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorFilterVtx_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes|Filters" },
		{ "Comment", "/** Color associated with filter (vtx) subnodes */" },
		{ "EditCondition", "!bUseNativeColorsIfPossible" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with filter (vtx) subnodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorFilterEdge_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes|Filters" },
		{ "Comment", "/** Color associated with filter (edges) subnodes */" },
		{ "EditCondition", "!bUseNativeColorsIfPossible" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with filter (edges) subnodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorVtxProperty_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes" },
		{ "Comment", "/** Color associated with Vtx Property subnodes */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with Vtx Property subnodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorNeighborSampler_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes" },
		{ "Comment", "/** Color associated with Neighbor Sampler subnodes */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with Neighbor Sampler subnodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorFillControl_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes" },
		{ "Comment", "/** Color associated with Fill Control subnodes */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with Fill Control subnodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorHeuristics_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes|Heuristics" },
		{ "Comment", "/** Color associated with Heuristics subnodes. */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with Heuristics subnodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorHeuristicsAttribute_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes|Heuristics" },
		{ "Comment", "/** Color associated with Heuristics subnodes relying on attributes. */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with Heuristics subnodes relying on attributes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorHeuristicsFeedback_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes|Heuristics" },
		{ "Comment", "/** Color associated with \"Feedback\" Heuristics subnodes. */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with \"Feedback\" Heuristics subnodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorProbe_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes" },
		{ "Comment", "/** Color associated with Probes subnodes */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with Probes subnodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorClusterState_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes" },
		{ "Comment", "/** Color associated with cluster state (node flags) subnodes */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with cluster state (node flags) subnodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorPicker_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes" },
		{ "Comment", "/** Color associated with pickers subnodes */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with pickers subnodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorTexParam_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes" },
		{ "Comment", "/** Color associated with tex params subnodes */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with tex params subnodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorShape_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes" },
		{ "Comment", "/** Color associated with shapes subnodes */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with shapes subnodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorTensor_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes" },
		{ "Comment", "/** Color associated with tensors subnodes */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with tensors subnodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorSortRule_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes" },
		{ "Comment", "/** Color associated with sort rules subnodes */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with sort rules subnodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorPartitionRule_MetaData[] = {
		{ "Category", "Colors and Semantics|Subnodes" },
		{ "Comment", "/** Color associated with partition rules subnodes */" },
		{ "ModuleRelativePath", "Public/PCGExGlobalSettings.h" },
		{ "ToolTip", "Color associated with partition rules subnodes" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExGlobalSettings constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldUp;
	static void NewProp_bDefaultCacheNodeOutput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultCacheNodeOutput;
	static void NewProp_bDefaultScopedAttributeGet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultScopedAttributeGet;
	static void NewProp_bBulkInitData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBulkInitData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SmallClusterSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClusterDefaultBatchChunkSize;
	static void NewProp_bDefaultScopedIndexLookupBuild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultScopedIndexLookupBuild;
	static void NewProp_bCacheClusters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCacheClusters;
	static void NewProp_bDefaultBuildAndCacheClusters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultBuildAndCacheClusters;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SmallPointsSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointsDefaultBatchChunkSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultWorkPriority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultWorkPriority;
	static void NewProp_bPersistentDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPersistentDebug;
	static void NewProp_bAssertOnEmptyThread_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssertOnEmptyThread;
	static void NewProp_bDisableCollisionByDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCollisionByDefault;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultBooleanBlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultBooleanBlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultFloatBlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultFloatBlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultDoubleBlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultDoubleBlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultInteger32BlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultInteger32BlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultInteger64BlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultInteger64BlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultVector2BlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultVector2BlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultVectorBlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultVectorBlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultVector4BlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultVector4BlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultQuaternionBlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultQuaternionBlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultTransformBlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultTransformBlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultRotatorBlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultRotatorBlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultStringBlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultStringBlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultNameBlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultNameBlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultSoftObjectPathBlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultSoftObjectPathBlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultSoftClassPathBlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultSoftClassPathBlendMode;
	static void NewProp_bToneDownOptionalPins_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bToneDownOptionalPins;
	static void NewProp_bUseNativeColorsIfPossible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNativeColorsIfPossible;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorConstant;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorDebug;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorMisc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorMiscWrite;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorMiscAdd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorMiscRemove;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorSampling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorClusterGenerator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorClusterOp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorPathfinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorFilterHub;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorBlendOp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorMatchRule;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorFilterPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorFilterCollection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorFilterCluster;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorFilterVtx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorFilterEdge;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorVtxProperty;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorNeighborSampler;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorFillControl;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorHeuristics;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorHeuristicsAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorHeuristicsFeedback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorProbe;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorClusterState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorPicker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorTexParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorShape;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorTensor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorSortRule;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorPartitionRule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExGlobalSettings constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExGlobalSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExGlobalSettings_Statics

// ********** Begin Class UPCGExGlobalSettings Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_WorldUp = { "WorldUp", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, WorldUp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldUp_MetaData), NewProp_WorldUp_MetaData) };
void Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bDefaultCacheNodeOutput_SetBit(void* Obj)
{
	((UPCGExGlobalSettings*)Obj)->bDefaultCacheNodeOutput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bDefaultCacheNodeOutput = { "bDefaultCacheNodeOutput", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExGlobalSettings), &Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bDefaultCacheNodeOutput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultCacheNodeOutput_MetaData), NewProp_bDefaultCacheNodeOutput_MetaData) };
void Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bDefaultScopedAttributeGet_SetBit(void* Obj)
{
	((UPCGExGlobalSettings*)Obj)->bDefaultScopedAttributeGet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bDefaultScopedAttributeGet = { "bDefaultScopedAttributeGet", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExGlobalSettings), &Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bDefaultScopedAttributeGet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultScopedAttributeGet_MetaData), NewProp_bDefaultScopedAttributeGet_MetaData) };
void Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bBulkInitData_SetBit(void* Obj)
{
	((UPCGExGlobalSettings*)Obj)->bBulkInitData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bBulkInitData = { "bBulkInitData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExGlobalSettings), &Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bBulkInitData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBulkInitData_MetaData), NewProp_bBulkInitData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_SmallClusterSize = { "SmallClusterSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, SmallClusterSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallClusterSize_MetaData), NewProp_SmallClusterSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ClusterDefaultBatchChunkSize = { "ClusterDefaultBatchChunkSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ClusterDefaultBatchChunkSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterDefaultBatchChunkSize_MetaData), NewProp_ClusterDefaultBatchChunkSize_MetaData) };
void Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bDefaultScopedIndexLookupBuild_SetBit(void* Obj)
{
	((UPCGExGlobalSettings*)Obj)->bDefaultScopedIndexLookupBuild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bDefaultScopedIndexLookupBuild = { "bDefaultScopedIndexLookupBuild", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExGlobalSettings), &Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bDefaultScopedIndexLookupBuild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultScopedIndexLookupBuild_MetaData), NewProp_bDefaultScopedIndexLookupBuild_MetaData) };
void Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bCacheClusters_SetBit(void* Obj)
{
	((UPCGExGlobalSettings*)Obj)->bCacheClusters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bCacheClusters = { "bCacheClusters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExGlobalSettings), &Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bCacheClusters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCacheClusters_MetaData), NewProp_bCacheClusters_MetaData) };
void Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bDefaultBuildAndCacheClusters_SetBit(void* Obj)
{
	((UPCGExGlobalSettings*)Obj)->bDefaultBuildAndCacheClusters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bDefaultBuildAndCacheClusters = { "bDefaultBuildAndCacheClusters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExGlobalSettings), &Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bDefaultBuildAndCacheClusters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultBuildAndCacheClusters_MetaData), NewProp_bDefaultBuildAndCacheClusters_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_SmallPointsSize = { "SmallPointsSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, SmallPointsSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallPointsSize_MetaData), NewProp_SmallPointsSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_PointsDefaultBatchChunkSize = { "PointsDefaultBatchChunkSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, PointsDefaultBatchChunkSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointsDefaultBatchChunkSize_MetaData), NewProp_PointsDefaultBatchChunkSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultWorkPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultWorkPriority = { "DefaultWorkPriority", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, DefaultWorkPriority), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAsyncPriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWorkPriority_MetaData), NewProp_DefaultWorkPriority_MetaData) }; // 2365709606
void Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bPersistentDebug_SetBit(void* Obj)
{
	((UPCGExGlobalSettings*)Obj)->bPersistentDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bPersistentDebug = { "bPersistentDebug", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExGlobalSettings), &Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bPersistentDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPersistentDebug_MetaData), NewProp_bPersistentDebug_MetaData) };
void Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bAssertOnEmptyThread_SetBit(void* Obj)
{
	((UPCGExGlobalSettings*)Obj)->bAssertOnEmptyThread = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bAssertOnEmptyThread = { "bAssertOnEmptyThread", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExGlobalSettings), &Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bAssertOnEmptyThread_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAssertOnEmptyThread_MetaData), NewProp_bAssertOnEmptyThread_MetaData) };
void Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bDisableCollisionByDefault_SetBit(void* Obj)
{
	((UPCGExGlobalSettings*)Obj)->bDisableCollisionByDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bDisableCollisionByDefault = { "bDisableCollisionByDefault", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExGlobalSettings), &Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bDisableCollisionByDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableCollisionByDefault_MetaData), NewProp_bDisableCollisionByDefault_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultBooleanBlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultBooleanBlendMode = { "DefaultBooleanBlendMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, DefaultBooleanBlendMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBooleanBlendMode_MetaData), NewProp_DefaultBooleanBlendMode_MetaData) }; // 1191522661
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultFloatBlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultFloatBlendMode = { "DefaultFloatBlendMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, DefaultFloatBlendMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFloatBlendMode_MetaData), NewProp_DefaultFloatBlendMode_MetaData) }; // 1191522661
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultDoubleBlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultDoubleBlendMode = { "DefaultDoubleBlendMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, DefaultDoubleBlendMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDoubleBlendMode_MetaData), NewProp_DefaultDoubleBlendMode_MetaData) }; // 1191522661
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultInteger32BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultInteger32BlendMode = { "DefaultInteger32BlendMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, DefaultInteger32BlendMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInteger32BlendMode_MetaData), NewProp_DefaultInteger32BlendMode_MetaData) }; // 1191522661
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultInteger64BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultInteger64BlendMode = { "DefaultInteger64BlendMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, DefaultInteger64BlendMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInteger64BlendMode_MetaData), NewProp_DefaultInteger64BlendMode_MetaData) }; // 1191522661
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultVector2BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultVector2BlendMode = { "DefaultVector2BlendMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, DefaultVector2BlendMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultVector2BlendMode_MetaData), NewProp_DefaultVector2BlendMode_MetaData) }; // 1191522661
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultVectorBlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultVectorBlendMode = { "DefaultVectorBlendMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, DefaultVectorBlendMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultVectorBlendMode_MetaData), NewProp_DefaultVectorBlendMode_MetaData) }; // 1191522661
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultVector4BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultVector4BlendMode = { "DefaultVector4BlendMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, DefaultVector4BlendMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultVector4BlendMode_MetaData), NewProp_DefaultVector4BlendMode_MetaData) }; // 1191522661
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultQuaternionBlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultQuaternionBlendMode = { "DefaultQuaternionBlendMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, DefaultQuaternionBlendMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultQuaternionBlendMode_MetaData), NewProp_DefaultQuaternionBlendMode_MetaData) }; // 1191522661
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultTransformBlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultTransformBlendMode = { "DefaultTransformBlendMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, DefaultTransformBlendMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTransformBlendMode_MetaData), NewProp_DefaultTransformBlendMode_MetaData) }; // 1191522661
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultRotatorBlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultRotatorBlendMode = { "DefaultRotatorBlendMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, DefaultRotatorBlendMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultRotatorBlendMode_MetaData), NewProp_DefaultRotatorBlendMode_MetaData) }; // 1191522661
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultStringBlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultStringBlendMode = { "DefaultStringBlendMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, DefaultStringBlendMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultStringBlendMode_MetaData), NewProp_DefaultStringBlendMode_MetaData) }; // 1191522661
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultNameBlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultNameBlendMode = { "DefaultNameBlendMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, DefaultNameBlendMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultNameBlendMode_MetaData), NewProp_DefaultNameBlendMode_MetaData) }; // 1191522661
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultSoftObjectPathBlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultSoftObjectPathBlendMode = { "DefaultSoftObjectPathBlendMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, DefaultSoftObjectPathBlendMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSoftObjectPathBlendMode_MetaData), NewProp_DefaultSoftObjectPathBlendMode_MetaData) }; // 1191522661
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultSoftClassPathBlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultSoftClassPathBlendMode = { "DefaultSoftClassPathBlendMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, DefaultSoftClassPathBlendMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingTypeDefault, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSoftClassPathBlendMode_MetaData), NewProp_DefaultSoftClassPathBlendMode_MetaData) }; // 1191522661
void Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bToneDownOptionalPins_SetBit(void* Obj)
{
	((UPCGExGlobalSettings*)Obj)->bToneDownOptionalPins = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bToneDownOptionalPins = { "bToneDownOptionalPins", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExGlobalSettings), &Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bToneDownOptionalPins_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bToneDownOptionalPins_MetaData), NewProp_bToneDownOptionalPins_MetaData) };
void Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bUseNativeColorsIfPossible_SetBit(void* Obj)
{
	((UPCGExGlobalSettings*)Obj)->bUseNativeColorsIfPossible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bUseNativeColorsIfPossible = { "bUseNativeColorsIfPossible", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExGlobalSettings), &Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bUseNativeColorsIfPossible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseNativeColorsIfPossible_MetaData), NewProp_bUseNativeColorsIfPossible_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorConstant = { "ColorConstant", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorConstant), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorConstant_MetaData), NewProp_ColorConstant_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorDebug = { "ColorDebug", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorDebug), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorDebug_MetaData), NewProp_ColorDebug_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorMisc = { "ColorMisc", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorMisc), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorMisc_MetaData), NewProp_ColorMisc_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorMiscWrite = { "ColorMiscWrite", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorMiscWrite), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorMiscWrite_MetaData), NewProp_ColorMiscWrite_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorMiscAdd = { "ColorMiscAdd", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorMiscAdd), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorMiscAdd_MetaData), NewProp_ColorMiscAdd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorMiscRemove = { "ColorMiscRemove", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorMiscRemove), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorMiscRemove_MetaData), NewProp_ColorMiscRemove_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorSampling = { "ColorSampling", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorSampling), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorSampling_MetaData), NewProp_ColorSampling_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorClusterGenerator = { "ColorClusterGenerator", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorClusterGenerator), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorClusterGenerator_MetaData), NewProp_ColorClusterGenerator_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorClusterOp = { "ColorClusterOp", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorClusterOp), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorClusterOp_MetaData), NewProp_ColorClusterOp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorPathfinding = { "ColorPathfinding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorPathfinding), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorPathfinding_MetaData), NewProp_ColorPathfinding_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorPath = { "ColorPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorPath), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorPath_MetaData), NewProp_ColorPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorFilterHub = { "ColorFilterHub", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorFilterHub), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorFilterHub_MetaData), NewProp_ColorFilterHub_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorTransform = { "ColorTransform", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorTransform), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorTransform_MetaData), NewProp_ColorTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorAction = { "ColorAction", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorAction), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorAction_MetaData), NewProp_ColorAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorBlendOp = { "ColorBlendOp", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorBlendOp), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorBlendOp_MetaData), NewProp_ColorBlendOp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorMatchRule = { "ColorMatchRule", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorMatchRule), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorMatchRule_MetaData), NewProp_ColorMatchRule_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorFilter = { "ColorFilter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorFilter), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorFilter_MetaData), NewProp_ColorFilter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorFilterPoint = { "ColorFilterPoint", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorFilterPoint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorFilterPoint_MetaData), NewProp_ColorFilterPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorFilterCollection = { "ColorFilterCollection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorFilterCollection), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorFilterCollection_MetaData), NewProp_ColorFilterCollection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorFilterCluster = { "ColorFilterCluster", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorFilterCluster), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorFilterCluster_MetaData), NewProp_ColorFilterCluster_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorFilterVtx = { "ColorFilterVtx", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorFilterVtx), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorFilterVtx_MetaData), NewProp_ColorFilterVtx_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorFilterEdge = { "ColorFilterEdge", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorFilterEdge), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorFilterEdge_MetaData), NewProp_ColorFilterEdge_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorVtxProperty = { "ColorVtxProperty", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorVtxProperty), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorVtxProperty_MetaData), NewProp_ColorVtxProperty_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorNeighborSampler = { "ColorNeighborSampler", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorNeighborSampler), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorNeighborSampler_MetaData), NewProp_ColorNeighborSampler_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorFillControl = { "ColorFillControl", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorFillControl), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorFillControl_MetaData), NewProp_ColorFillControl_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorHeuristics = { "ColorHeuristics", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorHeuristics), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorHeuristics_MetaData), NewProp_ColorHeuristics_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorHeuristicsAttribute = { "ColorHeuristicsAttribute", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorHeuristicsAttribute), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorHeuristicsAttribute_MetaData), NewProp_ColorHeuristicsAttribute_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorHeuristicsFeedback = { "ColorHeuristicsFeedback", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorHeuristicsFeedback), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorHeuristicsFeedback_MetaData), NewProp_ColorHeuristicsFeedback_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorProbe = { "ColorProbe", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorProbe), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorProbe_MetaData), NewProp_ColorProbe_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorClusterState = { "ColorClusterState", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorClusterState), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorClusterState_MetaData), NewProp_ColorClusterState_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorPicker = { "ColorPicker", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorPicker), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorPicker_MetaData), NewProp_ColorPicker_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorTexParam = { "ColorTexParam", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorTexParam), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorTexParam_MetaData), NewProp_ColorTexParam_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorShape = { "ColorShape", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorShape), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorShape_MetaData), NewProp_ColorShape_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorTensor = { "ColorTensor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorTensor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorTensor_MetaData), NewProp_ColorTensor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorSortRule = { "ColorSortRule", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorSortRule), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorSortRule_MetaData), NewProp_ColorSortRule_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorPartitionRule = { "ColorPartitionRule", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGlobalSettings, ColorPartitionRule), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorPartitionRule_MetaData), NewProp_ColorPartitionRule_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExGlobalSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_WorldUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bDefaultCacheNodeOutput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bDefaultScopedAttributeGet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bBulkInitData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_SmallClusterSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ClusterDefaultBatchChunkSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bDefaultScopedIndexLookupBuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bCacheClusters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bDefaultBuildAndCacheClusters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_SmallPointsSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_PointsDefaultBatchChunkSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultWorkPriority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultWorkPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bPersistentDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bAssertOnEmptyThread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bDisableCollisionByDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultBooleanBlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultBooleanBlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultFloatBlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultFloatBlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultDoubleBlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultDoubleBlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultInteger32BlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultInteger32BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultInteger64BlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultInteger64BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultVector2BlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultVector2BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultVectorBlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultVectorBlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultVector4BlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultVector4BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultQuaternionBlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultQuaternionBlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultTransformBlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultTransformBlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultRotatorBlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultRotatorBlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultStringBlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultStringBlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultNameBlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultNameBlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultSoftObjectPathBlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultSoftObjectPathBlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultSoftClassPathBlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_DefaultSoftClassPathBlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bToneDownOptionalPins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_bUseNativeColorsIfPossible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorMisc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorMiscWrite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorMiscAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorMiscRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorSampling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorClusterGenerator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorClusterOp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorPathfinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorFilterHub,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorBlendOp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorMatchRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorFilterPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorFilterCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorFilterCluster,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorFilterVtx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorFilterEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorVtxProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorNeighborSampler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorFillControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorHeuristics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorHeuristicsAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorHeuristicsFeedback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorProbe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorClusterState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorPicker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorTexParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorTensor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorSortRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGlobalSettings_Statics::NewProp_ColorPartitionRule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGlobalSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExGlobalSettings Property Definitions **********************************
UObject* (*const Z_Construct_UClass_UPCGExGlobalSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGlobalSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExGlobalSettings_Statics::ClassParams = {
	&UPCGExGlobalSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExGlobalSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGlobalSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGlobalSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExGlobalSettings_Statics::Class_MetaDataParams)
};
void UPCGExGlobalSettings::StaticRegisterNativesUPCGExGlobalSettings()
{
}
UClass* Z_Construct_UClass_UPCGExGlobalSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExGlobalSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExGlobalSettings.OuterSingleton, Z_Construct_UClass_UPCGExGlobalSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExGlobalSettings.OuterSingleton;
}
UPCGExGlobalSettings::UPCGExGlobalSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExGlobalSettings);
UPCGExGlobalSettings::~UPCGExGlobalSettings() {}
// ********** End Class UPCGExGlobalSettings *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExGlobalSettings_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExDataBlendingTypeDefault_StaticEnum, TEXT("EPCGExDataBlendingTypeDefault"), &Z_Registration_Info_UEnum_EPCGExDataBlendingTypeDefault, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1191522661U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExGlobalSettings, UPCGExGlobalSettings::StaticClass, TEXT("UPCGExGlobalSettings"), &Z_Registration_Info_UClass_UPCGExGlobalSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExGlobalSettings), 2787349702U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExGlobalSettings_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExGlobalSettings_h__Script_PCGExtendedToolkit_2974576567{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExGlobalSettings_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExGlobalSettings_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExGlobalSettings_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExGlobalSettings_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
