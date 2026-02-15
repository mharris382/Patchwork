// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/PCGExRelaxClusters.h"
#include "Details/PCGExDetailsRelax.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExRelaxClusters() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExRelaxClusterOperation_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExRelaxClustersSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExRelaxClustersSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExInfluenceDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExRelaxClustersSettings **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExRelaxClustersSettings;
UClass* UPCGExRelaxClustersSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExRelaxClustersSettings;
	if (!Z_Registration_Info_UClass_UPCGExRelaxClustersSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExRelaxClustersSettings"),
			Z_Registration_Info_UClass_UPCGExRelaxClustersSettings.InnerSingleton,
			StaticRegisterNativesUPCGExRelaxClustersSettings,
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
	return Z_Registration_Info_UClass_UPCGExRelaxClustersSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExRelaxClustersSettings_NoRegister()
{
	return UPCGExRelaxClustersSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Edges/PCGExRelaxClusters.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRelaxClusters.h" },
		{ "PCGExNodeLibraryDoc", "clusters/relax-cluster" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRelaxClusters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfluenceDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Influence Settings*/" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRelaxClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Influence Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Relaxing_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Relaxing arithmetics */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRelaxClusters.h" },
		{ "NoResetToDefault", "" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Relaxing arithmetics" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDirectionAndSize_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the final direction and size of the relaxation. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRelaxClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the final direction and size of the relaxation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionAndSizeAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'FVector' attribute to write direction and size to.*/" },
		{ "DisplayName", "DirectionAndSize" },
		{ "EditCondition", "bWriteDirectionAndSize" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRelaxClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'FVector' attribute to write direction and size to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDirection_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the final direction of the relaxation. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRelaxClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the final direction of the relaxation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'FVector' attribute to write direction to.*/" },
		{ "DisplayName", "Direction" },
		{ "EditCondition", "bWriteDirection" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRelaxClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'FVector' attribute to write direction to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteAmplitude_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the final amplitude of the relaxation. (that's the size of the DirectionAndSize vector) */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRelaxClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the final amplitude of the relaxation. (that's the size of the DirectionAndSize vector)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmplitudeAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write amplitude to.*/" },
		{ "DisplayName", "Amplitude" },
		{ "EditCondition", "bWriteAmplitude" },
		{ "ModuleRelativePath", "Public/Graph/Edges/PCGExRelaxClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write amplitude to." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExRelaxClustersSettings constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InfluenceDetails;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Relaxing;
	static void NewProp_bWriteDirectionAndSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteDirectionAndSize;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DirectionAndSizeAttributeName;
	static void NewProp_bWriteDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteDirection;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DirectionAttributeName;
	static void NewProp_bWriteAmplitude_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteAmplitude;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AmplitudeAttributeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExRelaxClustersSettings constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExRelaxClustersSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics

// ********** Begin Class UPCGExRelaxClustersSettings Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRelaxClustersSettings, Iterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Iterations_MetaData), NewProp_Iterations_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_InfluenceDetails = { "InfluenceDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRelaxClustersSettings, InfluenceDetails), Z_Construct_UScriptStruct_FPCGExInfluenceDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfluenceDetails_MetaData), NewProp_InfluenceDetails_MetaData) }; // 3063891606
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_Relaxing = { "Relaxing", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRelaxClustersSettings, Relaxing), Z_Construct_UClass_UPCGExRelaxClusterOperation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Relaxing_MetaData), NewProp_Relaxing_MetaData) };
void Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_bWriteDirectionAndSize_SetBit(void* Obj)
{
	((UPCGExRelaxClustersSettings*)Obj)->bWriteDirectionAndSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_bWriteDirectionAndSize = { "bWriteDirectionAndSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExRelaxClustersSettings), &Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_bWriteDirectionAndSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDirectionAndSize_MetaData), NewProp_bWriteDirectionAndSize_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_DirectionAndSizeAttributeName = { "DirectionAndSizeAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRelaxClustersSettings, DirectionAndSizeAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionAndSizeAttributeName_MetaData), NewProp_DirectionAndSizeAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_bWriteDirection_SetBit(void* Obj)
{
	((UPCGExRelaxClustersSettings*)Obj)->bWriteDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_bWriteDirection = { "bWriteDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExRelaxClustersSettings), &Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_bWriteDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDirection_MetaData), NewProp_bWriteDirection_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_DirectionAttributeName = { "DirectionAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRelaxClustersSettings, DirectionAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionAttributeName_MetaData), NewProp_DirectionAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_bWriteAmplitude_SetBit(void* Obj)
{
	((UPCGExRelaxClustersSettings*)Obj)->bWriteAmplitude = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_bWriteAmplitude = { "bWriteAmplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExRelaxClustersSettings), &Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_bWriteAmplitude_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteAmplitude_MetaData), NewProp_bWriteAmplitude_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_AmplitudeAttributeName = { "AmplitudeAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRelaxClustersSettings, AmplitudeAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmplitudeAttributeName_MetaData), NewProp_AmplitudeAttributeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_Iterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_InfluenceDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_Relaxing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_bWriteDirectionAndSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_DirectionAndSizeAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_bWriteDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_DirectionAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_bWriteAmplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::NewProp_AmplitudeAttributeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExRelaxClustersSettings Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::ClassParams = {
	&UPCGExRelaxClustersSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::Class_MetaDataParams)
};
void UPCGExRelaxClustersSettings::StaticRegisterNativesUPCGExRelaxClustersSettings()
{
}
UClass* Z_Construct_UClass_UPCGExRelaxClustersSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExRelaxClustersSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExRelaxClustersSettings.OuterSingleton, Z_Construct_UClass_UPCGExRelaxClustersSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExRelaxClustersSettings.OuterSingleton;
}
UPCGExRelaxClustersSettings::UPCGExRelaxClustersSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExRelaxClustersSettings);
UPCGExRelaxClustersSettings::~UPCGExRelaxClustersSettings() {}
// ********** End Class UPCGExRelaxClustersSettings ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExRelaxClusters_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExRelaxClustersSettings, UPCGExRelaxClustersSettings::StaticClass, TEXT("UPCGExRelaxClustersSettings"), &Z_Registration_Info_UClass_UPCGExRelaxClustersSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExRelaxClustersSettings), 1894594859U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExRelaxClusters_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExRelaxClusters_h__Script_PCGExtendedToolkit_349685928{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExRelaxClusters_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_PCGExRelaxClusters_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
