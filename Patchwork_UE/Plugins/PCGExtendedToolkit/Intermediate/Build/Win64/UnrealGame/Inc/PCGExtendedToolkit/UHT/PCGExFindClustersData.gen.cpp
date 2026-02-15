// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGExFindClustersData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFindClustersData() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFindClustersDataSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFindClustersDataSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterDataSearchMode();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExClusterDataSearchMode ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExClusterDataSearchMode;
static UEnum* EPCGExClusterDataSearchMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExClusterDataSearchMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExClusterDataSearchMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterDataSearchMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExClusterDataSearchMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExClusterDataSearchMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExClusterDataSearchMode>()
{
	return EPCGExClusterDataSearchMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterDataSearchMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.DisplayName", "All" },
		{ "All.Name", "EPCGExClusterDataSearchMode::All" },
		{ "EdgesFromVtx.DisplayName", "Edges from Vtx" },
		{ "EdgesFromVtx.Name", "EPCGExClusterDataSearchMode::EdgesFromVtx" },
		{ "ModuleRelativePath", "Public/Graph/PCGExFindClustersData.h" },
		{ "VtxFromEdges.DisplayName", "Vtx from Edges" },
		{ "VtxFromEdges.Name", "EPCGExClusterDataSearchMode::VtxFromEdges" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExClusterDataSearchMode::All", (int64)EPCGExClusterDataSearchMode::All },
		{ "EPCGExClusterDataSearchMode::VtxFromEdges", (int64)EPCGExClusterDataSearchMode::VtxFromEdges },
		{ "EPCGExClusterDataSearchMode::EdgesFromVtx", (int64)EPCGExClusterDataSearchMode::EdgesFromVtx },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterDataSearchMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterDataSearchMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExClusterDataSearchMode",
	"EPCGExClusterDataSearchMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterDataSearchMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterDataSearchMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterDataSearchMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterDataSearchMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterDataSearchMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExClusterDataSearchMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExClusterDataSearchMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterDataSearchMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExClusterDataSearchMode.InnerSingleton;
}
// ********** End Enum EPCGExClusterDataSearchMode *************************************************

// ********** Begin Class UPCGExFindClustersDataSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFindClustersDataSettings;
UClass* UPCGExFindClustersDataSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExFindClustersDataSettings;
	if (!Z_Registration_Info_UClass_UPCGExFindClustersDataSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFindClustersDataSettings"),
			Z_Registration_Info_UClass_UPCGExFindClustersDataSettings.InnerSingleton,
			StaticRegisterNativesUPCGExFindClustersDataSettings,
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
	return Z_Registration_Info_UClass_UPCGExFindClustersDataSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFindClustersDataSettings_NoRegister()
{
	return UPCGExFindClustersDataSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/PCGExFindClustersData.h" },
		{ "ModuleRelativePath", "Public/Graph/PCGExFindClustersData.h" },
		{ "PCGExNodeLibraryDoc", "clusters/find-clusters-data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Search mode. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExFindClustersData.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Search mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipTrivialWarnings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Warning about inputs mismatch and triage */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExFindClustersData.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Warning about inputs mismatch and triage" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipImportantWarnings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Warning that you'll get anyway if you try these inputs in a cluster node*/" },
		{ "ModuleRelativePath", "Public/Graph/PCGExFindClustersData.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Warning that you'll get anyway if you try these inputs in a cluster node" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFindClustersDataSettings constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_SearchMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SearchMode;
	static void NewProp_bSkipTrivialWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipTrivialWarnings;
	static void NewProp_bSkipImportantWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipImportantWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFindClustersDataSettings constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFindClustersDataSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics

// ********** Begin Class UPCGExFindClustersDataSettings Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::NewProp_SearchMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::NewProp_SearchMode = { "SearchMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFindClustersDataSettings, SearchMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterDataSearchMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchMode_MetaData), NewProp_SearchMode_MetaData) }; // 1552271133
void Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::NewProp_bSkipTrivialWarnings_SetBit(void* Obj)
{
	((UPCGExFindClustersDataSettings*)Obj)->bSkipTrivialWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::NewProp_bSkipTrivialWarnings = { "bSkipTrivialWarnings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFindClustersDataSettings), &Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::NewProp_bSkipTrivialWarnings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipTrivialWarnings_MetaData), NewProp_bSkipTrivialWarnings_MetaData) };
void Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::NewProp_bSkipImportantWarnings_SetBit(void* Obj)
{
	((UPCGExFindClustersDataSettings*)Obj)->bSkipImportantWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::NewProp_bSkipImportantWarnings = { "bSkipImportantWarnings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFindClustersDataSettings), &Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::NewProp_bSkipImportantWarnings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipImportantWarnings_MetaData), NewProp_bSkipImportantWarnings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::NewProp_SearchMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::NewProp_SearchMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::NewProp_bSkipTrivialWarnings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::NewProp_bSkipImportantWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFindClustersDataSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::ClassParams = {
	&UPCGExFindClustersDataSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::Class_MetaDataParams)
};
void UPCGExFindClustersDataSettings::StaticRegisterNativesUPCGExFindClustersDataSettings()
{
}
UClass* Z_Construct_UClass_UPCGExFindClustersDataSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExFindClustersDataSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFindClustersDataSettings.OuterSingleton, Z_Construct_UClass_UPCGExFindClustersDataSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFindClustersDataSettings.OuterSingleton;
}
UPCGExFindClustersDataSettings::UPCGExFindClustersDataSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFindClustersDataSettings);
UPCGExFindClustersDataSettings::~UPCGExFindClustersDataSettings() {}
// ********** End Class UPCGExFindClustersDataSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExFindClustersData_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExClusterDataSearchMode_StaticEnum, TEXT("EPCGExClusterDataSearchMode"), &Z_Registration_Info_UEnum_EPCGExClusterDataSearchMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1552271133U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFindClustersDataSettings, UPCGExFindClustersDataSettings::StaticClass, TEXT("UPCGExFindClustersDataSettings"), &Z_Registration_Info_UClass_UPCGExFindClustersDataSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFindClustersDataSettings), 171784425U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExFindClustersData_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExFindClustersData_h__Script_PCGExtendedToolkit_1394976521{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExFindClustersData_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExFindClustersData_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExFindClustersData_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExFindClustersData_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
