// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "System/PCGExWaitForPCGData.h"
#include "Data/PCGExDataForward.h"
#include "PCGPin.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExWaitForPCGData() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UClass* Z_Construct_UClass_UPCGGraph_NoRegister();
PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGComponentGenerationTrigger();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPinProperties();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExWaitForPCGDataSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExWaitForPCGDataSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGenerationTriggerAction();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRuntimeGenerationTriggerAction();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExGenerationTriggerAction *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExGenerationTriggerAction;
static UEnum* EPCGExGenerationTriggerAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExGenerationTriggerAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExGenerationTriggerAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGenerationTriggerAction, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExGenerationTriggerAction"));
	}
	return Z_Registration_Info_UEnum_EPCGExGenerationTriggerAction.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExGenerationTriggerAction>()
{
	return EPCGExGenerationTriggerAction_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGenerationTriggerAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AsIs.DisplayName", "As-is" },
		{ "AsIs.Name", "EPCGExGenerationTriggerAction::AsIs" },
		{ "AsIs.ToolTip", "Grab the data as-is and doesnt'try to generate if it wasn't." },
		{ "ForceGenerate.DisplayName", "Generate (force)" },
		{ "ForceGenerate.Name", "EPCGExGenerationTriggerAction::ForceGenerate" },
		{ "ForceGenerate.ToolTip", "Generate (force) and wait for completion. Already generated component will be re-regenerated." },
		{ "Generate.DisplayName", "Generate" },
		{ "Generate.Name", "EPCGExGenerationTriggerAction::Generate" },
		{ "Generate.ToolTip", "Generate and wait for completion. If the component was already generated, this should not trigger a regeneration." },
		{ "Ignore.DisplayName", "Ignore" },
		{ "Ignore.Name", "EPCGExGenerationTriggerAction::Ignore" },
		{ "Ignore.ToolTip", "Ignore component if not actively generating already" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExGenerationTriggerAction::Ignore", (int64)EPCGExGenerationTriggerAction::Ignore },
		{ "EPCGExGenerationTriggerAction::AsIs", (int64)EPCGExGenerationTriggerAction::AsIs },
		{ "EPCGExGenerationTriggerAction::Generate", (int64)EPCGExGenerationTriggerAction::Generate },
		{ "EPCGExGenerationTriggerAction::ForceGenerate", (int64)EPCGExGenerationTriggerAction::ForceGenerate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGenerationTriggerAction_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGenerationTriggerAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExGenerationTriggerAction",
	"EPCGExGenerationTriggerAction",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGenerationTriggerAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGenerationTriggerAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGenerationTriggerAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGenerationTriggerAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGenerationTriggerAction()
{
	if (!Z_Registration_Info_UEnum_EPCGExGenerationTriggerAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExGenerationTriggerAction.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGenerationTriggerAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExGenerationTriggerAction.InnerSingleton;
}
// ********** End Enum EPCGExGenerationTriggerAction ***********************************************

// ********** Begin Enum EPCGExRuntimeGenerationTriggerAction **************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExRuntimeGenerationTriggerAction;
static UEnum* EPCGExRuntimeGenerationTriggerAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExRuntimeGenerationTriggerAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExRuntimeGenerationTriggerAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRuntimeGenerationTriggerAction, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExRuntimeGenerationTriggerAction"));
	}
	return Z_Registration_Info_UEnum_EPCGExRuntimeGenerationTriggerAction.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRuntimeGenerationTriggerAction>()
{
	return EPCGExRuntimeGenerationTriggerAction_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRuntimeGenerationTriggerAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AsIs.DisplayName", "As-is" },
		{ "AsIs.Name", "EPCGExRuntimeGenerationTriggerAction::AsIs" },
		{ "AsIs.ToolTip", "Grab the data as-is and doesnt'try to refresh it." },
		{ "Ignore.DisplayName", "Ignore" },
		{ "Ignore.Name", "EPCGExRuntimeGenerationTriggerAction::Ignore" },
		{ "Ignore.ToolTip", "Ignore component if not actively generating already" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "RefreshFirst.DisplayName", "Refresh" },
		{ "RefreshFirst.Name", "EPCGExRuntimeGenerationTriggerAction::RefreshFirst" },
		{ "RefreshFirst.ToolTip", "Refresh and wait for completion" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExRuntimeGenerationTriggerAction::Ignore", (int64)EPCGExRuntimeGenerationTriggerAction::Ignore },
		{ "EPCGExRuntimeGenerationTriggerAction::AsIs", (int64)EPCGExRuntimeGenerationTriggerAction::AsIs },
		{ "EPCGExRuntimeGenerationTriggerAction::RefreshFirst", (int64)EPCGExRuntimeGenerationTriggerAction::RefreshFirst },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRuntimeGenerationTriggerAction_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRuntimeGenerationTriggerAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExRuntimeGenerationTriggerAction",
	"EPCGExRuntimeGenerationTriggerAction",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRuntimeGenerationTriggerAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRuntimeGenerationTriggerAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRuntimeGenerationTriggerAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRuntimeGenerationTriggerAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRuntimeGenerationTriggerAction()
{
	if (!Z_Registration_Info_UEnum_EPCGExRuntimeGenerationTriggerAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExRuntimeGenerationTriggerAction.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRuntimeGenerationTriggerAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExRuntimeGenerationTriggerAction.InnerSingleton;
}
// ********** End Enum EPCGExRuntimeGenerationTriggerAction ****************************************

// ********** Begin Class UPCGExWaitForPCGDataSettings Function EDITOR_RefreshPins *****************
#if WITH_EDITOR
struct Z_Construct_UFunction_UPCGExWaitForPCGDataSettings_EDITOR_RefreshPins_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Utils" },
		{ "DisplayName", "Refresh Pins" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "ShortToolTip", "Refreshes the cached pins" },
	};
#endif // WITH_METADATA

// ********** Begin Function EDITOR_RefreshPins constinit property declarations ********************
// ********** End Function EDITOR_RefreshPins constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExWaitForPCGDataSettings_EDITOR_RefreshPins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExWaitForPCGDataSettings, nullptr, "EDITOR_RefreshPins", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExWaitForPCGDataSettings_EDITOR_RefreshPins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExWaitForPCGDataSettings_EDITOR_RefreshPins_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPCGExWaitForPCGDataSettings_EDITOR_RefreshPins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExWaitForPCGDataSettings_EDITOR_RefreshPins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExWaitForPCGDataSettings::execEDITOR_RefreshPins)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EDITOR_RefreshPins();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UPCGExWaitForPCGDataSettings Function EDITOR_RefreshPins *******************

// ********** Begin Class UPCGExWaitForPCGDataSettings *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExWaitForPCGDataSettings;
UClass* UPCGExWaitForPCGDataSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExWaitForPCGDataSettings;
	if (!Z_Registration_Info_UClass_UPCGExWaitForPCGDataSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExWaitForPCGDataSettings"),
			Z_Registration_Info_UClass_UPCGExWaitForPCGDataSettings.InnerSingleton,
			StaticRegisterNativesUPCGExWaitForPCGDataSettings,
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
	return Z_Registration_Info_UClass_UPCGExWaitForPCGDataSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExWaitForPCGDataSettings_NoRegister()
{
	return UPCGExWaitForPCGDataSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Sampling" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "System/PCGExWaitForPCGData.h" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorReferenceAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Actor reference that we will be waiting for PCG Components with the target graph. */" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Actor reference that we will be waiting for PCG Components with the target graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Actor reference that we will be waiting for PCG Components with the target graph. */" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Actor reference that we will be waiting for PCG Components with the target graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateGraph_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Graph instance to look for. Will wait until a PCGComponent is found with that instance set, and its output generated. */" },
		{ "EditCondition", "TemplateInput == EPCGExDataInputValueType::Constant" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Graph instance to look for. Will wait until a PCGComponent is found with that instance set, and its output generated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateGraphAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Graph instance to look for. Will wait until a PCGComponent is found with that instance set, and its output generated. */" },
		{ "EditCondition", "TemplateInput == EPCGExDataInputValueType::Attribute" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Graph instance to look for. Will wait until a PCGComponent is found with that instance set, and its output generated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMustMatchTemplate_MetaData[] = {
		{ "Category", "Settings|Filtering" },
		{ "Comment", "/** If enabled, will skip components which graph instances is not the same as the specified template. */" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will skip components which graph instances is not the same as the specified template." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MustHaveTag_MetaData[] = {
		{ "Category", "Settings|Filtering" },
		{ "Comment", "/** If not None, will only consider components with the specified tag. */" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If not None, will only consider components with the specified tag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoMatchGenerationTrigger_MetaData[] = {
		{ "Category", "Settings|Filtering" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchGenerationTrigger_MetaData[] = {
		{ "Category", "Settings|Filtering" },
		{ "Comment", "/** If enabled, only process component with the specified generation trigger. */" },
		{ "EditCondition", "bDoMatchGenerationTrigger" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, only process component with the specified generation trigger." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertGenerationTrigger_MetaData[] = {
		{ "Category", "Settings|Filtering" },
		{ "Comment", "/** If enabled, only process component that do not match the specified generation trigger */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Invert" },
		{ "EditCondition", "bDoMatchGenerationTrigger" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, only process component that do not match the specified generation trigger" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForMissingActors_MetaData[] = {
		{ "Category", "Settings|Gen & Wait Settings" },
		{ "Comment", "/** If enabled, will wait for actor references to exist. */" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will wait for actor references to exist." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitForActorTimeout_MetaData[] = {
		{ "Category", "Settings|Gen & Wait Settings" },
		{ "ClampMax", "30" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** Time after which the search is considered a fail. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Timeout" },
		{ "EditCondition", "bWaitForMissingActors" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Time after which the search is considered a fail." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForMissingComponents_MetaData[] = {
		{ "Category", "Settings|Gen & Wait Settings" },
		{ "Comment", "/** If enabled, will wait for at least a single PCG component to be found that uses the target Graph. Use carefully, and only if you know for sure it will be found at some point! */" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will wait for at least a single PCG component to be found that uses the target Graph. Use carefully, and only if you know for sure it will be found at some point!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitForComponentTimeout_MetaData[] = {
		{ "Category", "Settings|Gen & Wait Settings" },
		{ "ClampMax", "30" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** Time after which the search is considered a fail. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Timeout" },
		{ "EditCondition", "bWaitForMissingActors" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Time after which the search is considered a fail." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateOnLoadAction_MetaData[] = {
		{ "Category", "Settings|Gen & Wait Settings" },
		{ "Comment", "/** How to deal with found components that have the trigger condition 'GenerateOnLoad'*/" },
		{ "DisplayName", "Grab GenerateOnLoad" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to deal with found components that have the trigger condition 'GenerateOnLoad'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateOnDemandAction_MetaData[] = {
		{ "Category", "Settings|Gen & Wait Settings" },
		{ "Comment", "/** How to deal with found components that have the trigger condition 'GenerateOnDemand'*/" },
		{ "DisplayName", "Grab GenerateOnDemand" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to deal with found components that have the trigger condition 'GenerateOnDemand'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateAtRuntime_MetaData[] = {
		{ "Category", "Settings|Gen & Wait Settings" },
		{ "Comment", "/** How to deal with found components that have the trigger condition 'GenerateAtRuntime'*/" },
		{ "DisplayName", "Grab GenerateAtRuntime" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to deal with found components that have the trigger condition 'GenerateAtRuntime'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreRequiredPin_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/** If enabled, available data will be output even if some required pins have no data. */" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, available data will be output even if some required pins have no data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDedupeData_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/** If enabled, only output component data once per unique actor. Otherwise, output data as many time as found. Note that when enabled, TargetIndexToTag will be disabled. */" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "ToolTip", "If enabled, only output component data once per unique actor. Otherwise, output data as many time as found. Note that when enabled, TargetIndexToTag will be disabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCarryOverTargetTags_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/** If enabled, target collections' tags will be added to the output data. */" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "ToolTip", "If enabled, target collections' tags will be added to the output data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAttributesToDataTags_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/** Lets you tag output data with attribute values from target points input */" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "ToolTip", "Lets you tag output data with attribute values from target points input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputRoaming_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoamingPin_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/** If enabled, adds an extra pin that contains all the data that isn't part of the template. */" },
		{ "EditCondition", "bOutputRoaming" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
		{ "ToolTip", "If enabled, adds an extra pin that contains all the data that isn't part of the template." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietActorNotFoundWarning_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietComponentNotFoundWarning_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietTimeoutError_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/System/PCGExWaitForPCGData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExWaitForPCGDataSettings constinit property declarations *************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorReferenceAttribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TemplateInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TemplateInput;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TemplateGraph;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TemplateGraphAttributeName;
	static void NewProp_bMustMatchTemplate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMustMatchTemplate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MustHaveTag;
	static void NewProp_bDoMatchGenerationTrigger_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoMatchGenerationTrigger;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MatchGenerationTrigger_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchGenerationTrigger;
	static void NewProp_bInvertGenerationTrigger_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertGenerationTrigger;
	static void NewProp_bWaitForMissingActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForMissingActors;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaitForActorTimeout;
	static void NewProp_bWaitForMissingComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForMissingComponents;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaitForComponentTimeout;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GenerateOnLoadAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GenerateOnLoadAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GenerateOnDemandAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GenerateOnDemandAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GenerateAtRuntime_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GenerateAtRuntime;
	static void NewProp_bIgnoreRequiredPin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreRequiredPin;
	static void NewProp_bDedupeData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDedupeData;
	static void NewProp_bCarryOverTargetTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCarryOverTargetTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetAttributesToDataTags;
	static void NewProp_bOutputRoaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputRoaming;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RoamingPin;
	static void NewProp_bQuietActorNotFoundWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietActorNotFoundWarning;
	static void NewProp_bQuietComponentNotFoundWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietComponentNotFoundWarning;
	static void NewProp_bQuietTimeoutError_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietTimeoutError;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedPins_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedPins;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExWaitForPCGDataSettings constinit property declarations ***************
#if WITH_EDITOR
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EDITOR_RefreshPins"), .Pointer = &UPCGExWaitForPCGDataSettings::execEDITOR_RefreshPins },
	};
#endif // WITH_EDITOR
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGExWaitForPCGDataSettings_EDITOR_RefreshPins, "EDITOR_RefreshPins" }, // 3542643477
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExWaitForPCGDataSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics

// ********** Begin Class UPCGExWaitForPCGDataSettings Property Definitions ************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_ActorReferenceAttribute = { "ActorReferenceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWaitForPCGDataSettings, ActorReferenceAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorReferenceAttribute_MetaData), NewProp_ActorReferenceAttribute_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_TemplateInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_TemplateInput = { "TemplateInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWaitForPCGDataSettings, TemplateInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateInput_MetaData), NewProp_TemplateInput_MetaData) }; // 785724845
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_TemplateGraph = { "TemplateGraph", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWaitForPCGDataSettings, TemplateGraph), Z_Construct_UClass_UPCGGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateGraph_MetaData), NewProp_TemplateGraph_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_TemplateGraphAttributeName = { "TemplateGraphAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWaitForPCGDataSettings, TemplateGraphAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateGraphAttributeName_MetaData), NewProp_TemplateGraphAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bMustMatchTemplate_SetBit(void* Obj)
{
	((UPCGExWaitForPCGDataSettings*)Obj)->bMustMatchTemplate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bMustMatchTemplate = { "bMustMatchTemplate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWaitForPCGDataSettings), &Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bMustMatchTemplate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMustMatchTemplate_MetaData), NewProp_bMustMatchTemplate_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_MustHaveTag = { "MustHaveTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWaitForPCGDataSettings, MustHaveTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MustHaveTag_MetaData), NewProp_MustHaveTag_MetaData) };
void Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bDoMatchGenerationTrigger_SetBit(void* Obj)
{
	((UPCGExWaitForPCGDataSettings*)Obj)->bDoMatchGenerationTrigger = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bDoMatchGenerationTrigger = { "bDoMatchGenerationTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWaitForPCGDataSettings), &Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bDoMatchGenerationTrigger_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoMatchGenerationTrigger_MetaData), NewProp_bDoMatchGenerationTrigger_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_MatchGenerationTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_MatchGenerationTrigger = { "MatchGenerationTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWaitForPCGDataSettings, MatchGenerationTrigger), Z_Construct_UEnum_PCG_EPCGComponentGenerationTrigger, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchGenerationTrigger_MetaData), NewProp_MatchGenerationTrigger_MetaData) }; // 332204300
void Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bInvertGenerationTrigger_SetBit(void* Obj)
{
	((UPCGExWaitForPCGDataSettings*)Obj)->bInvertGenerationTrigger = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bInvertGenerationTrigger = { "bInvertGenerationTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWaitForPCGDataSettings), &Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bInvertGenerationTrigger_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertGenerationTrigger_MetaData), NewProp_bInvertGenerationTrigger_MetaData) };
void Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bWaitForMissingActors_SetBit(void* Obj)
{
	((UPCGExWaitForPCGDataSettings*)Obj)->bWaitForMissingActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bWaitForMissingActors = { "bWaitForMissingActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWaitForPCGDataSettings), &Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bWaitForMissingActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWaitForMissingActors_MetaData), NewProp_bWaitForMissingActors_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_WaitForActorTimeout = { "WaitForActorTimeout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWaitForPCGDataSettings, WaitForActorTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitForActorTimeout_MetaData), NewProp_WaitForActorTimeout_MetaData) };
void Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bWaitForMissingComponents_SetBit(void* Obj)
{
	((UPCGExWaitForPCGDataSettings*)Obj)->bWaitForMissingComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bWaitForMissingComponents = { "bWaitForMissingComponents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWaitForPCGDataSettings), &Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bWaitForMissingComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWaitForMissingComponents_MetaData), NewProp_bWaitForMissingComponents_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_WaitForComponentTimeout = { "WaitForComponentTimeout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWaitForPCGDataSettings, WaitForComponentTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitForComponentTimeout_MetaData), NewProp_WaitForComponentTimeout_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_GenerateOnLoadAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_GenerateOnLoadAction = { "GenerateOnLoadAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWaitForPCGDataSettings, GenerateOnLoadAction), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGenerationTriggerAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateOnLoadAction_MetaData), NewProp_GenerateOnLoadAction_MetaData) }; // 439329936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_GenerateOnDemandAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_GenerateOnDemandAction = { "GenerateOnDemandAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWaitForPCGDataSettings, GenerateOnDemandAction), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGenerationTriggerAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateOnDemandAction_MetaData), NewProp_GenerateOnDemandAction_MetaData) }; // 439329936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_GenerateAtRuntime_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_GenerateAtRuntime = { "GenerateAtRuntime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWaitForPCGDataSettings, GenerateAtRuntime), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRuntimeGenerationTriggerAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateAtRuntime_MetaData), NewProp_GenerateAtRuntime_MetaData) }; // 494886751
void Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bIgnoreRequiredPin_SetBit(void* Obj)
{
	((UPCGExWaitForPCGDataSettings*)Obj)->bIgnoreRequiredPin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bIgnoreRequiredPin = { "bIgnoreRequiredPin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWaitForPCGDataSettings), &Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bIgnoreRequiredPin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreRequiredPin_MetaData), NewProp_bIgnoreRequiredPin_MetaData) };
void Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bDedupeData_SetBit(void* Obj)
{
	((UPCGExWaitForPCGDataSettings*)Obj)->bDedupeData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bDedupeData = { "bDedupeData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWaitForPCGDataSettings), &Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bDedupeData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDedupeData_MetaData), NewProp_bDedupeData_MetaData) };
void Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bCarryOverTargetTags_SetBit(void* Obj)
{
	((UPCGExWaitForPCGDataSettings*)Obj)->bCarryOverTargetTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bCarryOverTargetTags = { "bCarryOverTargetTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWaitForPCGDataSettings), &Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bCarryOverTargetTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCarryOverTargetTags_MetaData), NewProp_bCarryOverTargetTags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_TargetAttributesToDataTags = { "TargetAttributesToDataTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWaitForPCGDataSettings, TargetAttributesToDataTags), Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAttributesToDataTags_MetaData), NewProp_TargetAttributesToDataTags_MetaData) }; // 1295694073
void Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bOutputRoaming_SetBit(void* Obj)
{
	((UPCGExWaitForPCGDataSettings*)Obj)->bOutputRoaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bOutputRoaming = { "bOutputRoaming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWaitForPCGDataSettings), &Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bOutputRoaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputRoaming_MetaData), NewProp_bOutputRoaming_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_RoamingPin = { "RoamingPin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWaitForPCGDataSettings, RoamingPin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoamingPin_MetaData), NewProp_RoamingPin_MetaData) };
void Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bQuietActorNotFoundWarning_SetBit(void* Obj)
{
	((UPCGExWaitForPCGDataSettings*)Obj)->bQuietActorNotFoundWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bQuietActorNotFoundWarning = { "bQuietActorNotFoundWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWaitForPCGDataSettings), &Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bQuietActorNotFoundWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietActorNotFoundWarning_MetaData), NewProp_bQuietActorNotFoundWarning_MetaData) };
void Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bQuietComponentNotFoundWarning_SetBit(void* Obj)
{
	((UPCGExWaitForPCGDataSettings*)Obj)->bQuietComponentNotFoundWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bQuietComponentNotFoundWarning = { "bQuietComponentNotFoundWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWaitForPCGDataSettings), &Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bQuietComponentNotFoundWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietComponentNotFoundWarning_MetaData), NewProp_bQuietComponentNotFoundWarning_MetaData) };
void Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bQuietTimeoutError_SetBit(void* Obj)
{
	((UPCGExWaitForPCGDataSettings*)Obj)->bQuietTimeoutError = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bQuietTimeoutError = { "bQuietTimeoutError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExWaitForPCGDataSettings), &Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bQuietTimeoutError_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietTimeoutError_MetaData), NewProp_bQuietTimeoutError_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_CachedPins_Inner = { "CachedPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGPinProperties, METADATA_PARAMS(0, nullptr) }; // 2150601488
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_CachedPins = { "CachedPins", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExWaitForPCGDataSettings, CachedPins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPins_MetaData), NewProp_CachedPins_MetaData) }; // 2150601488
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_ActorReferenceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_TemplateInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_TemplateInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_TemplateGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_TemplateGraphAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bMustMatchTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_MustHaveTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bDoMatchGenerationTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_MatchGenerationTrigger_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_MatchGenerationTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bInvertGenerationTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bWaitForMissingActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_WaitForActorTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bWaitForMissingComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_WaitForComponentTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_GenerateOnLoadAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_GenerateOnLoadAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_GenerateOnDemandAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_GenerateOnDemandAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_GenerateAtRuntime_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_GenerateAtRuntime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bIgnoreRequiredPin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bDedupeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bCarryOverTargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_TargetAttributesToDataTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bOutputRoaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_RoamingPin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bQuietActorNotFoundWarning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bQuietComponentNotFoundWarning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_bQuietTimeoutError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_CachedPins_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::NewProp_CachedPins,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExWaitForPCGDataSettings Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::ClassParams = {
	&UPCGExWaitForPCGDataSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::Class_MetaDataParams)
};
void UPCGExWaitForPCGDataSettings::StaticRegisterNativesUPCGExWaitForPCGDataSettings()
{
	UClass* Class = UPCGExWaitForPCGDataSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, IF_WITH_EDITOR(MakeConstArrayView(Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::Funcs), {}));
}
UClass* Z_Construct_UClass_UPCGExWaitForPCGDataSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExWaitForPCGDataSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExWaitForPCGDataSettings.OuterSingleton, Z_Construct_UClass_UPCGExWaitForPCGDataSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExWaitForPCGDataSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExWaitForPCGDataSettings);
UPCGExWaitForPCGDataSettings::~UPCGExWaitForPCGDataSettings() {}
// ********** End Class UPCGExWaitForPCGDataSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_System_PCGExWaitForPCGData_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExGenerationTriggerAction_StaticEnum, TEXT("EPCGExGenerationTriggerAction"), &Z_Registration_Info_UEnum_EPCGExGenerationTriggerAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 439329936U) },
		{ EPCGExRuntimeGenerationTriggerAction_StaticEnum, TEXT("EPCGExRuntimeGenerationTriggerAction"), &Z_Registration_Info_UEnum_EPCGExRuntimeGenerationTriggerAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 494886751U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExWaitForPCGDataSettings, UPCGExWaitForPCGDataSettings::StaticClass, TEXT("UPCGExWaitForPCGDataSettings"), &Z_Registration_Info_UClass_UPCGExWaitForPCGDataSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExWaitForPCGDataSettings), 2766096653U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_System_PCGExWaitForPCGData_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_System_PCGExWaitForPCGData_h__Script_PCGExtendedToolkit_2574509768{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_System_PCGExWaitForPCGData_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_System_PCGExWaitForPCGData_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_System_PCGExWaitForPCGData_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_System_PCGExWaitForPCGData_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
