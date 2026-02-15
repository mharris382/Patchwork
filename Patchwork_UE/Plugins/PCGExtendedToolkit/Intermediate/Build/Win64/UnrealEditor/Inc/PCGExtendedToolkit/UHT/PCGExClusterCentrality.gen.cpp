// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGExClusterCentrality.h"
#include "Details/PCGExDetailsNoise.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExClusterCentrality() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExClusterCentralitySettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExClusterCentralitySettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCentralityDownsampling();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExRandomRatioDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExCentralityDownsampling **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExCentralityDownsampling;
static UEnum* EPCGExCentralityDownsampling_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExCentralityDownsampling.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExCentralityDownsampling.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCentralityDownsampling, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExCentralityDownsampling"));
	}
	return Z_Registration_Info_UEnum_EPCGExCentralityDownsampling.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCentralityDownsampling>()
{
	return EPCGExCentralityDownsampling_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCentralityDownsampling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Filters.DisplayName", "Filters" },
		{ "Filters.Name", "EPCGExCentralityDownsampling::Filters" },
		{ "Filters.ToolTip", "Use filters to drive which nodes are added to the subset" },
		{ "ModuleRelativePath", "Public/Graph/PCGExClusterCentrality.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPCGExCentralityDownsampling::None" },
		{ "None.ToolTip", "All connected filters must pass." },
		{ "Ratio.DisplayName", "Random ratio" },
		{ "Ratio.Name", "EPCGExCentralityDownsampling::Ratio" },
		{ "Ratio.ToolTip", "Sample using a random subset of the nodes." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExCentralityDownsampling::None", (int64)EPCGExCentralityDownsampling::None },
		{ "EPCGExCentralityDownsampling::Ratio", (int64)EPCGExCentralityDownsampling::Ratio },
		{ "EPCGExCentralityDownsampling::Filters", (int64)EPCGExCentralityDownsampling::Filters },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCentralityDownsampling_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCentralityDownsampling_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExCentralityDownsampling",
	"EPCGExCentralityDownsampling",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCentralityDownsampling_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCentralityDownsampling_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCentralityDownsampling_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCentralityDownsampling_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCentralityDownsampling()
{
	if (!Z_Registration_Info_UEnum_EPCGExCentralityDownsampling.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExCentralityDownsampling.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCentralityDownsampling_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExCentralityDownsampling.InnerSingleton;
}
// ********** End Enum EPCGExCentralityDownsampling ************************************************

// ********** Begin Class UPCGExClusterCentralitySettings ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExClusterCentralitySettings;
UClass* UPCGExClusterCentralitySettings::GetPrivateStaticClass()
{
	using TClass = UPCGExClusterCentralitySettings;
	if (!Z_Registration_Info_UClass_UPCGExClusterCentralitySettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExClusterCentralitySettings"),
			Z_Registration_Info_UClass_UPCGExClusterCentralitySettings.InnerSingleton,
			StaticRegisterNativesUPCGExClusterCentralitySettings,
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
	return Z_Registration_Info_UClass_UPCGExClusterCentralitySettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExClusterCentralitySettings_NoRegister()
{
	return UPCGExClusterCentralitySettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * Use PCGExTransform to manipulate the outgoing attributes instead of handling everything here.\n * This way we can multi-thread the various calculations instead of mixing everything along with async/game thread collision\n */" },
		{ "IncludePath", "Graph/PCGExClusterCentrality.h" },
		{ "ModuleRelativePath", "Public/Graph/PCGExClusterCentrality.h" },
		{ "PCGExNodeLibraryDoc", "clusters/centrality" },
		{ "ToolTip", "Use PCGExTransform to manipulate the outgoing attributes instead of handling everything here.\nThis way we can multi-thread the various calculations instead of mixing everything along with async/game thread collision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CentralityValueAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExClusterCentrality.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalize_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Discrete mode write the number as-is, relative will normalize against the highest number of overlaps found. */" },
		{ "DisplayName", "Normalize" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExClusterCentrality.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Discrete mode write the number as-is, relative will normalize against the highest number of overlaps found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputOneMinus_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to do a OneMinus on the normalized overlap count value */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 OneMinus" },
		{ "EditCondition", "bNormalize" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExClusterCentrality.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to do a OneMinus on the normalized overlap count value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownsamplingMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExClusterCentrality.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomDownsampling_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, only compute centrality on a subset of the nodes to get a rough approximation. This is useful for large clusters, or if you want to tradeoff precision for speed. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Ratio" },
		{ "EditCondition", "DownsamplingMode == EPCGExCentralityDownsampling::Ratio" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExClusterCentrality.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, only compute centrality on a subset of the nodes to get a rough approximation. This is useful for large clusters, or if you want to tradeoff precision for speed." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExClusterCentralitySettings constinit property declarations **********
	static const UECodeGen_Private::FNamePropertyParams NewProp_CentralityValueAttributeName;
	static void NewProp_bNormalize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalize;
	static void NewProp_bOutputOneMinus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputOneMinus;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DownsamplingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DownsamplingMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomDownsampling;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExClusterCentralitySettings constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExClusterCentralitySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics

// ********** Begin Class UPCGExClusterCentralitySettings Property Definitions *********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::NewProp_CentralityValueAttributeName = { "CentralityValueAttributeName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExClusterCentralitySettings, CentralityValueAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CentralityValueAttributeName_MetaData), NewProp_CentralityValueAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::NewProp_bNormalize_SetBit(void* Obj)
{
	((UPCGExClusterCentralitySettings*)Obj)->bNormalize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::NewProp_bNormalize = { "bNormalize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExClusterCentralitySettings), &Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::NewProp_bNormalize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalize_MetaData), NewProp_bNormalize_MetaData) };
void Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::NewProp_bOutputOneMinus_SetBit(void* Obj)
{
	((UPCGExClusterCentralitySettings*)Obj)->bOutputOneMinus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::NewProp_bOutputOneMinus = { "bOutputOneMinus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExClusterCentralitySettings), &Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::NewProp_bOutputOneMinus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputOneMinus_MetaData), NewProp_bOutputOneMinus_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::NewProp_DownsamplingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::NewProp_DownsamplingMode = { "DownsamplingMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExClusterCentralitySettings, DownsamplingMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCentralityDownsampling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownsamplingMode_MetaData), NewProp_DownsamplingMode_MetaData) }; // 1652509050
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::NewProp_RandomDownsampling = { "RandomDownsampling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExClusterCentralitySettings, RandomDownsampling), Z_Construct_UScriptStruct_FPCGExRandomRatioDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomDownsampling_MetaData), NewProp_RandomDownsampling_MetaData) }; // 1314394637
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::NewProp_CentralityValueAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::NewProp_bNormalize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::NewProp_bOutputOneMinus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::NewProp_DownsamplingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::NewProp_DownsamplingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::NewProp_RandomDownsampling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExClusterCentralitySettings Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::ClassParams = {
	&UPCGExClusterCentralitySettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::Class_MetaDataParams)
};
void UPCGExClusterCentralitySettings::StaticRegisterNativesUPCGExClusterCentralitySettings()
{
}
UClass* Z_Construct_UClass_UPCGExClusterCentralitySettings()
{
	if (!Z_Registration_Info_UClass_UPCGExClusterCentralitySettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExClusterCentralitySettings.OuterSingleton, Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExClusterCentralitySettings.OuterSingleton;
}
UPCGExClusterCentralitySettings::UPCGExClusterCentralitySettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExClusterCentralitySettings);
UPCGExClusterCentralitySettings::~UPCGExClusterCentralitySettings() {}
// ********** End Class UPCGExClusterCentralitySettings ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExClusterCentrality_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExCentralityDownsampling_StaticEnum, TEXT("EPCGExCentralityDownsampling"), &Z_Registration_Info_UEnum_EPCGExCentralityDownsampling, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1652509050U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExClusterCentralitySettings, UPCGExClusterCentralitySettings::StaticClass, TEXT("UPCGExClusterCentralitySettings"), &Z_Registration_Info_UClass_UPCGExClusterCentralitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExClusterCentralitySettings), 3171269768U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExClusterCentrality_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExClusterCentrality_h__Script_PCGExtendedToolkit_3311681629{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExClusterCentrality_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExClusterCentrality_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExClusterCentrality_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExClusterCentrality_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
