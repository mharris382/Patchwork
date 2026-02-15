// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Topology/PCGExTopologyEdgesProcessor.h"
#include "Geometry/PCGExGeo.h"
#include "Topology/PCGExTopology.h"
#include "Transform/PCGExTransform.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTopologyEdgesProcessor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttachmentRules();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTopologyDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExTopologyOutputMode **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExTopologyOutputMode;
static UEnum* EPCGExTopologyOutputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExTopologyOutputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExTopologyOutputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExTopologyOutputMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExTopologyOutputMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTopologyOutputMode>()
{
	return EPCGExTopologyOutputMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Legacy.DisplayName", "Legacy (Spawn Mesh)" },
		{ "Legacy.Name", "EPCGExTopologyOutputMode::Legacy" },
		{ "Legacy.ToolTip", "Spawns a dynamic mesh (Legacy)." },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopologyEdgesProcessor.h" },
		{ "PCGDynamicMesh.DisplayName", "PCG Dynamic Mesh" },
		{ "PCGDynamicMesh.Name", "EPCGExTopologyOutputMode::PCGDynamicMesh" },
		{ "PCGDynamicMesh.ToolTip", "Creates a PCG dynamic mesh." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExTopologyOutputMode::Legacy", (int64)EPCGExTopologyOutputMode::Legacy },
		{ "EPCGExTopologyOutputMode::PCGDynamicMesh", (int64)EPCGExTopologyOutputMode::PCGDynamicMesh },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExTopologyOutputMode",
	"EPCGExTopologyOutputMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExTopologyOutputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExTopologyOutputMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExTopologyOutputMode.InnerSingleton;
}
// ********** End Enum EPCGExTopologyOutputMode ****************************************************

// ********** Begin Class UPCGExTopologyEdgesProcessorSettings *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTopologyEdgesProcessorSettings;
UClass* UPCGExTopologyEdgesProcessorSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExTopologyEdgesProcessorSettings;
	if (!Z_Registration_Info_UClass_UPCGExTopologyEdgesProcessorSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTopologyEdgesProcessorSettings"),
			Z_Registration_Info_UClass_UPCGExTopologyEdgesProcessorSettings.InnerSingleton,
			StaticRegisterNativesUPCGExTopologyEdgesProcessorSettings,
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
	return Z_Registration_Info_UClass_UPCGExTopologyEdgesProcessorSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_NoRegister()
{
	return UPCGExTopologyEdgesProcessorSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Topology/PCGExTopologyEdgesProcessor.h" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopologyEdgesProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopologyEdgesProcessor.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Projection settings. */" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopologyEdgesProcessor.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Projection settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopologyEdgesProcessor.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Topology_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Topology settings. Some settings will be ignored based on selected output mode. */" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopologyEdgesProcessor.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Topology settings. Some settings will be ignored based on selected output mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "OutputMode == EPCGExTopologyOutputMode::Legacy" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopologyEdgesProcessor.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommaSeparatedComponentTags_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comma separated tags */" },
		{ "EditCondition", "OutputMode == EPCGExTopologyOutputMode::Legacy" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopologyEdgesProcessor.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comma separated tags" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessFunctionNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Specify a list of functions to be called on the target actor after dynamic mesh creation. Functions need to be parameter-less and with \"CallInEditor\" flag enabled. */" },
		{ "EditCondition", "OutputMode == EPCGExTopologyOutputMode::Legacy" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopologyEdgesProcessor.h" },
		{ "ToolTip", "Specify a list of functions to be called on the target actor after dynamic mesh creation. Functions need to be parameter-less and with \"CallInEditor\" flag enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentRules_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "OutputMode == EPCGExTopologyOutputMode::Legacy" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopologyEdgesProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTopologyEdgesProcessorSettings constinit property declarations *****
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constraints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Topology;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CommaSeparatedComponentTags;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PostProcessFunctionNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PostProcessFunctionNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttachmentRules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExTopologyEdgesProcessorSettings constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTopologyEdgesProcessorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics

// ********** Begin Class UPCGExTopologyEdgesProcessorSettings Property Definitions ****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::NewProp_OutputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::NewProp_OutputMode = { "OutputMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTopologyEdgesProcessorSettings, OutputMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTopologyOutputMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputMode_MetaData), NewProp_OutputMode_MetaData) }; // 3289275
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::NewProp_ProjectionDetails = { "ProjectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTopologyEdgesProcessorSettings, ProjectionDetails), Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionDetails_MetaData), NewProp_ProjectionDetails_MetaData) }; // 1019281773
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTopologyEdgesProcessorSettings, Constraints), Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constraints_MetaData), NewProp_Constraints_MetaData) }; // 200512390
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::NewProp_Topology = { "Topology", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTopologyEdgesProcessorSettings, Topology), Z_Construct_UScriptStruct_FPCGExTopologyDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Topology_MetaData), NewProp_Topology_MetaData) }; // 4263416702
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTopologyEdgesProcessorSettings, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::NewProp_CommaSeparatedComponentTags = { "CommaSeparatedComponentTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTopologyEdgesProcessorSettings, CommaSeparatedComponentTags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommaSeparatedComponentTags_MetaData), NewProp_CommaSeparatedComponentTags_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::NewProp_PostProcessFunctionNames_Inner = { "PostProcessFunctionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::NewProp_PostProcessFunctionNames = { "PostProcessFunctionNames", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTopologyEdgesProcessorSettings, PostProcessFunctionNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessFunctionNames_MetaData), NewProp_PostProcessFunctionNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::NewProp_AttachmentRules = { "AttachmentRules", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTopologyEdgesProcessorSettings, AttachmentRules), Z_Construct_UScriptStruct_FPCGExAttachmentRules, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentRules_MetaData), NewProp_AttachmentRules_MetaData) }; // 2108791550
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::NewProp_OutputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::NewProp_OutputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::NewProp_ProjectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::NewProp_Constraints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::NewProp_Topology,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::NewProp_CommaSeparatedComponentTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::NewProp_PostProcessFunctionNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::NewProp_PostProcessFunctionNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::NewProp_AttachmentRules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExTopologyEdgesProcessorSettings Property Definitions ******************
UObject* (*const Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::ClassParams = {
	&UPCGExTopologyEdgesProcessorSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::Class_MetaDataParams)
};
void UPCGExTopologyEdgesProcessorSettings::StaticRegisterNativesUPCGExTopologyEdgesProcessorSettings()
{
}
UClass* Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExTopologyEdgesProcessorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTopologyEdgesProcessorSettings.OuterSingleton, Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTopologyEdgesProcessorSettings.OuterSingleton;
}
UPCGExTopologyEdgesProcessorSettings::UPCGExTopologyEdgesProcessorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTopologyEdgesProcessorSettings);
UPCGExTopologyEdgesProcessorSettings::~UPCGExTopologyEdgesProcessorSettings() {}
// ********** End Class UPCGExTopologyEdgesProcessorSettings ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyEdgesProcessor_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExTopologyOutputMode_StaticEnum, TEXT("EPCGExTopologyOutputMode"), &Z_Registration_Info_UEnum_EPCGExTopologyOutputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3289275U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings, UPCGExTopologyEdgesProcessorSettings::StaticClass, TEXT("UPCGExTopologyEdgesProcessorSettings"), &Z_Registration_Info_UClass_UPCGExTopologyEdgesProcessorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTopologyEdgesProcessorSettings), 1048529817U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyEdgesProcessor_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyEdgesProcessor_h__Script_PCGExtendedToolkit_1286545528{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyEdgesProcessor_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyEdgesProcessor_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyEdgesProcessor_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyEdgesProcessor_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
