// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGExPickClosestClusters.h"
#include "Data/PCGExDataForward.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPickClosestClusters() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPickClosestClustersSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPickClosestClustersSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestPickMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestSearchMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterDataAction();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExForwardDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExClusterClosestPickMode **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExClusterClosestPickMode;
static UEnum* EPCGExClusterClosestPickMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExClusterClosestPickMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExClusterClosestPickMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestPickMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExClusterClosestPickMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExClusterClosestPickMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExClusterClosestPickMode>()
{
	return EPCGExClusterClosestPickMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestPickMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/PCGExPickClosestClusters.h" },
		{ "NextBest.DisplayName", "Next Best" },
		{ "NextBest.Name", "EPCGExClusterClosestPickMode::NextBest" },
		{ "NextBest.ToolTip", "If a cluster was already the closest pick of another target, pick the nest best candidate." },
		{ "OnlyBest.DisplayName", "Only Best" },
		{ "OnlyBest.Name", "EPCGExClusterClosestPickMode::OnlyBest" },
		{ "OnlyBest.ToolTip", "Allows duplicate picks for multiple targets" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExClusterClosestPickMode::OnlyBest", (int64)EPCGExClusterClosestPickMode::OnlyBest },
		{ "EPCGExClusterClosestPickMode::NextBest", (int64)EPCGExClusterClosestPickMode::NextBest },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestPickMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestPickMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExClusterClosestPickMode",
	"EPCGExClusterClosestPickMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestPickMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestPickMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestPickMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestPickMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestPickMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExClusterClosestPickMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExClusterClosestPickMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestPickMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExClusterClosestPickMode.InnerSingleton;
}
// ********** End Enum EPCGExClusterClosestPickMode ************************************************

// ********** Begin Class UPCGExPickClosestClustersSettings ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPickClosestClustersSettings;
UClass* UPCGExPickClosestClustersSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPickClosestClustersSettings;
	if (!Z_Registration_Info_UClass_UPCGExPickClosestClustersSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPickClosestClustersSettings"),
			Z_Registration_Info_UClass_UPCGExPickClosestClustersSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPickClosestClustersSettings,
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
	return Z_Registration_Info_UClass_UPCGExPickClosestClustersSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPickClosestClustersSettings_NoRegister()
{
	return UPCGExPickClosestClustersSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/PCGExPickClosestClusters.h" },
		{ "ModuleRelativePath", "Public/Graph/PCGExPickClosestClusters.h" },
		{ "PCGExNodeLibraryDoc", "clusters/pick-closest-cluster" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** What type of proximity to look for */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExPickClosestClusters.h" },
		{ "ToolTip", "What type of proximity to look for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to allow the same pick for multiple targets or not. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExPickClosestClusters.h" },
		{ "ToolTip", "Whether to allow the same pick for multiple targets or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Action type. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExPickClosestClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Action type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetBoundsExpansion_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExPickClosestClusters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExpandSearchOutsideTargetBounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExPickClosestClusters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeepTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "Action == EPCGExFilterDataAction::Tag" },
		{ "ModuleRelativePath", "Public/Graph/PCGExPickClosestClusters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OmitTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "Action == EPCGExFilterDataAction::Tag" },
		{ "ModuleRelativePath", "Public/Graph/PCGExPickClosestClusters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAttributesToTags_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExPickClosestClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetForwarding_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which Seed attributes to forward on paths. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExPickClosestClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which Seed attributes to forward on paths." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPickClosestClustersSettings constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_SearchMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SearchMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PickMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PickMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Action;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TargetBoundsExpansion;
	static void NewProp_bExpandSearchOutsideTargetBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpandSearchOutsideTargetBounds;
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeepTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OmitTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetAttributesToTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetForwarding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPickClosestClustersSettings constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPickClosestClustersSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics

// ********** Begin Class UPCGExPickClosestClustersSettings Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_SearchMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_SearchMode = { "SearchMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPickClosestClustersSettings, SearchMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestSearchMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchMode_MetaData), NewProp_SearchMode_MetaData) }; // 1075485612
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_PickMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_PickMode = { "PickMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPickClosestClustersSettings, PickMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestPickMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickMode_MetaData), NewProp_PickMode_MetaData) }; // 1371980631
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPickClosestClustersSettings, Action), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterDataAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) }; // 2434922102
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_TargetBoundsExpansion = { "TargetBoundsExpansion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPickClosestClustersSettings, TargetBoundsExpansion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetBoundsExpansion_MetaData), NewProp_TargetBoundsExpansion_MetaData) };
void Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_bExpandSearchOutsideTargetBounds_SetBit(void* Obj)
{
	((UPCGExPickClosestClustersSettings*)Obj)->bExpandSearchOutsideTargetBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_bExpandSearchOutsideTargetBounds = { "bExpandSearchOutsideTargetBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPickClosestClustersSettings), &Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_bExpandSearchOutsideTargetBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExpandSearchOutsideTargetBounds_MetaData), NewProp_bExpandSearchOutsideTargetBounds_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_KeepTag = { "KeepTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPickClosestClustersSettings, KeepTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeepTag_MetaData), NewProp_KeepTag_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_OmitTag = { "OmitTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPickClosestClustersSettings, OmitTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OmitTag_MetaData), NewProp_OmitTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_TargetAttributesToTags = { "TargetAttributesToTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPickClosestClustersSettings, TargetAttributesToTags), Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAttributesToTags_MetaData), NewProp_TargetAttributesToTags_MetaData) }; // 1295694073
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_TargetForwarding = { "TargetForwarding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPickClosestClustersSettings, TargetForwarding), Z_Construct_UScriptStruct_FPCGExForwardDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetForwarding_MetaData), NewProp_TargetForwarding_MetaData) }; // 925115943
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_SearchMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_SearchMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_PickMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_PickMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_Action_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_TargetBoundsExpansion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_bExpandSearchOutsideTargetBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_KeepTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_OmitTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_TargetAttributesToTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::NewProp_TargetForwarding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPickClosestClustersSettings Property Definitions *********************
UObject* (*const Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::ClassParams = {
	&UPCGExPickClosestClustersSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::Class_MetaDataParams)
};
void UPCGExPickClosestClustersSettings::StaticRegisterNativesUPCGExPickClosestClustersSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPickClosestClustersSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPickClosestClustersSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPickClosestClustersSettings.OuterSingleton, Z_Construct_UClass_UPCGExPickClosestClustersSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPickClosestClustersSettings.OuterSingleton;
}
UPCGExPickClosestClustersSettings::UPCGExPickClosestClustersSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPickClosestClustersSettings);
UPCGExPickClosestClustersSettings::~UPCGExPickClosestClustersSettings() {}
// ********** End Class UPCGExPickClosestClustersSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExPickClosestClusters_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExClusterClosestPickMode_StaticEnum, TEXT("EPCGExClusterClosestPickMode"), &Z_Registration_Info_UEnum_EPCGExClusterClosestPickMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1371980631U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPickClosestClustersSettings, UPCGExPickClosestClustersSettings::StaticClass, TEXT("UPCGExPickClosestClustersSettings"), &Z_Registration_Info_UClass_UPCGExPickClosestClustersSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPickClosestClustersSettings), 2528579291U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExPickClosestClusters_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExPickClosestClusters_h__Script_PCGExtendedToolkit_2302573945{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExPickClosestClusters_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExPickClosestClusters_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExPickClosestClusters_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExPickClosestClusters_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
