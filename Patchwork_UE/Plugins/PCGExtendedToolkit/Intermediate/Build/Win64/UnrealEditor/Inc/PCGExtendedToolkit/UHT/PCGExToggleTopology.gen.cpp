// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Topology/PCGExToggleTopology.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExToggleTopology() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExToggleTopologySettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExToggleTopologySettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExToggleTopologyAction();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExToggleTopologyAction ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExToggleTopologyAction;
static UEnum* EPCGExToggleTopologyAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExToggleTopologyAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExToggleTopologyAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExToggleTopologyAction, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExToggleTopologyAction"));
	}
	return Z_Registration_Info_UEnum_EPCGExToggleTopologyAction.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExToggleTopologyAction>()
{
	return EPCGExToggleTopologyAction_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExToggleTopologyAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Topology/PCGExToggleTopology.h" },
		{ "Remove.DisplayName", "Remove" },
		{ "Remove.Name", "EPCGExToggleTopologyAction::Remove" },
		{ "Remove.ToolTip", "..." },
		{ "Toggle.DisplayName", "Toggle" },
		{ "Toggle.Name", "EPCGExToggleTopologyAction::Toggle" },
		{ "Toggle.ToolTip", "..." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExToggleTopologyAction::Toggle", (int64)EPCGExToggleTopologyAction::Toggle },
		{ "EPCGExToggleTopologyAction::Remove", (int64)EPCGExToggleTopologyAction::Remove },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExToggleTopologyAction_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExToggleTopologyAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExToggleTopologyAction",
	"EPCGExToggleTopologyAction",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExToggleTopologyAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExToggleTopologyAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExToggleTopologyAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExToggleTopologyAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExToggleTopologyAction()
{
	if (!Z_Registration_Info_UEnum_EPCGExToggleTopologyAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExToggleTopologyAction.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExToggleTopologyAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExToggleTopologyAction.InnerSingleton;
}
// ********** End Enum EPCGExToggleTopologyAction **************************************************

// ********** Begin Class UPCGExToggleTopologySettings *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExToggleTopologySettings;
UClass* UPCGExToggleTopologySettings::GetPrivateStaticClass()
{
	using TClass = UPCGExToggleTopologySettings;
	if (!Z_Registration_Info_UClass_UPCGExToggleTopologySettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExToggleTopologySettings"),
			Z_Registration_Info_UClass_UPCGExToggleTopologySettings.InnerSingleton,
			StaticRegisterNativesUPCGExToggleTopologySettings,
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
	return Z_Registration_Info_UClass_UPCGExToggleTopologySettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExToggleTopologySettings_NoRegister()
{
	return UPCGExToggleTopologySettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExToggleTopologySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Topology/PCGExToggleTopology.h" },
		{ "ModuleRelativePath", "Public/Topology/PCGExToggleTopology.h" },
		{ "PCGExNodeLibraryDoc", "topology/cluster-surface/toggle-topology" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//~End UPCGSettings\n" },
		{ "ModuleRelativePath", "Public/Topology/PCGExToggleTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bToggle_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Action == EPCGExToggleTopologyAction::Toggle" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExToggleTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFilterByTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Topology/PCGExToggleTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommaSeparatedTagFilters_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bFilterByTag" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExToggleTopology.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Topology/PCGExToggleTopology.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExToggleTopologySettings constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Action;
	static void NewProp_bToggle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bToggle;
	static void NewProp_bFilterByTag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterByTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CommaSeparatedTagFilters;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExToggleTopologySettings constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExToggleTopologySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExToggleTopologySettings_Statics

// ********** Begin Class UPCGExToggleTopologySettings Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExToggleTopologySettings, Action), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExToggleTopologyAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) }; // 3389260383
void Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::NewProp_bToggle_SetBit(void* Obj)
{
	((UPCGExToggleTopologySettings*)Obj)->bToggle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::NewProp_bToggle = { "bToggle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExToggleTopologySettings), &Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::NewProp_bToggle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bToggle_MetaData), NewProp_bToggle_MetaData) };
void Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::NewProp_bFilterByTag_SetBit(void* Obj)
{
	((UPCGExToggleTopologySettings*)Obj)->bFilterByTag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::NewProp_bFilterByTag = { "bFilterByTag", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExToggleTopologySettings), &Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::NewProp_bFilterByTag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFilterByTag_MetaData), NewProp_bFilterByTag_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::NewProp_CommaSeparatedTagFilters = { "CommaSeparatedTagFilters", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExToggleTopologySettings, CommaSeparatedTagFilters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommaSeparatedTagFilters_MetaData), NewProp_CommaSeparatedTagFilters_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x00240c0000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExToggleTopologySettings, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::NewProp_Action_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::NewProp_bToggle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::NewProp_bFilterByTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::NewProp_CommaSeparatedTagFilters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExToggleTopologySettings Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::ClassParams = {
	&UPCGExToggleTopologySettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::PropPointers),
	0,
	0x010800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::Class_MetaDataParams)
};
void UPCGExToggleTopologySettings::StaticRegisterNativesUPCGExToggleTopologySettings()
{
}
UClass* Z_Construct_UClass_UPCGExToggleTopologySettings()
{
	if (!Z_Registration_Info_UClass_UPCGExToggleTopologySettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExToggleTopologySettings.OuterSingleton, Z_Construct_UClass_UPCGExToggleTopologySettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExToggleTopologySettings.OuterSingleton;
}
UPCGExToggleTopologySettings::UPCGExToggleTopologySettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExToggleTopologySettings);
UPCGExToggleTopologySettings::~UPCGExToggleTopologySettings() {}
// ********** End Class UPCGExToggleTopologySettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExToggleTopology_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExToggleTopologyAction_StaticEnum, TEXT("EPCGExToggleTopologyAction"), &Z_Registration_Info_UEnum_EPCGExToggleTopologyAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3389260383U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExToggleTopologySettings, UPCGExToggleTopologySettings::StaticClass, TEXT("UPCGExToggleTopologySettings"), &Z_Registration_Info_UClass_UPCGExToggleTopologySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExToggleTopologySettings), 1125054420U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExToggleTopology_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExToggleTopology_h__Script_PCGExtendedToolkit_2579098627{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExToggleTopology_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExToggleTopology_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExToggleTopology_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExToggleTopology_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
