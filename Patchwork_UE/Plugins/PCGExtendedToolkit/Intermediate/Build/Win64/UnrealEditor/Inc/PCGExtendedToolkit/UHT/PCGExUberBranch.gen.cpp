// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExUberBranch.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExUberBranch() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExUberBranchSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExUberBranchSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberBranchMode();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExUberBranchMode ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExUberBranchMode;
static UEnum* EPCGExUberBranchMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExUberBranchMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExUberBranchMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberBranchMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExUberBranchMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExUberBranchMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExUberBranchMode>()
{
	return EPCGExUberBranchMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberBranchMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.DisplayName", "All" },
		{ "All.Name", "EPCGExUberBranchMode::All" },
		{ "All.ToolTip", "All points must pass the filters." },
		{ "Any.DisplayName", "Any" },
		{ "Any.Name", "EPCGExUberBranchMode::Any" },
		{ "Any.ToolTip", "At least one point must pass the filter." },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberBranch.h" },
		{ "Partial.DisplayName", "Partial" },
		{ "Partial.Name", "EPCGExUberBranchMode::Partial" },
		{ "Partial.ToolTip", "A given amount of points must pass the filter." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExUberBranchMode::All", (int64)EPCGExUberBranchMode::All },
		{ "EPCGExUberBranchMode::Any", (int64)EPCGExUberBranchMode::Any },
		{ "EPCGExUberBranchMode::Partial", (int64)EPCGExUberBranchMode::Partial },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberBranchMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberBranchMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExUberBranchMode",
	"EPCGExUberBranchMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberBranchMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberBranchMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberBranchMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberBranchMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberBranchMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExUberBranchMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExUberBranchMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberBranchMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExUberBranchMode.InnerSingleton;
}
// ********** End Enum EPCGExUberBranchMode ********************************************************

// ********** Begin Class UPCGExUberBranchSettings *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExUberBranchSettings;
UClass* UPCGExUberBranchSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExUberBranchSettings;
	if (!Z_Registration_Info_UClass_UPCGExUberBranchSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExUberBranchSettings"),
			Z_Registration_Info_UClass_UPCGExUberBranchSettings.InnerSingleton,
			StaticRegisterNativesUPCGExUberBranchSettings,
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
	return Z_Registration_Info_UClass_UPCGExUberBranchSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExUberBranchSettings_NoRegister()
{
	return UPCGExUberBranchSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExUberBranchSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExUberBranch.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberBranch.h" },
		{ "PCGExNodeLibraryDoc", "quality-of-life/uber-branch" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumBranches_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Write result to point instead of split outputs */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberBranch.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write result to point instead of split outputs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputLabels_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/PCGExUberBranch.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputLabels_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/PCGExUberBranch.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsyncChunkSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Number of collections to check for in parallel. Use 0 to force execution in a single go. Can be beneficial if filters are simple enough. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberBranch.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Number of collections to check for in parallel. Use 0 to force execution in a single go. Can be beneficial if filters are simple enough." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExUberBranchSettings constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBranches;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputLabels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputLabels;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputLabels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputLabels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AsyncChunkSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExUberBranchSettings constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExUberBranchSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExUberBranchSettings_Statics

// ********** Begin Class UPCGExUberBranchSettings Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExUberBranchSettings_Statics::NewProp_NumBranches = { "NumBranches", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExUberBranchSettings, NumBranches), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumBranches_MetaData), NewProp_NumBranches_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExUberBranchSettings_Statics::NewProp_InputLabels_Inner = { "InputLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExUberBranchSettings_Statics::NewProp_InputLabels = { "InputLabels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExUberBranchSettings, InputLabels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputLabels_MetaData), NewProp_InputLabels_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExUberBranchSettings_Statics::NewProp_OutputLabels_Inner = { "OutputLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExUberBranchSettings_Statics::NewProp_OutputLabels = { "OutputLabels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExUberBranchSettings, OutputLabels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputLabels_MetaData), NewProp_OutputLabels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExUberBranchSettings_Statics::NewProp_AsyncChunkSize = { "AsyncChunkSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExUberBranchSettings, AsyncChunkSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsyncChunkSize_MetaData), NewProp_AsyncChunkSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExUberBranchSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberBranchSettings_Statics::NewProp_NumBranches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberBranchSettings_Statics::NewProp_InputLabels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberBranchSettings_Statics::NewProp_InputLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberBranchSettings_Statics::NewProp_OutputLabels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberBranchSettings_Statics::NewProp_OutputLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberBranchSettings_Statics::NewProp_AsyncChunkSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExUberBranchSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExUberBranchSettings Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPCGExUberBranchSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExUberBranchSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExUberBranchSettings_Statics::ClassParams = {
	&UPCGExUberBranchSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExUberBranchSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExUberBranchSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExUberBranchSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExUberBranchSettings_Statics::Class_MetaDataParams)
};
void UPCGExUberBranchSettings::StaticRegisterNativesUPCGExUberBranchSettings()
{
}
UClass* Z_Construct_UClass_UPCGExUberBranchSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExUberBranchSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExUberBranchSettings.OuterSingleton, Z_Construct_UClass_UPCGExUberBranchSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExUberBranchSettings.OuterSingleton;
}
UPCGExUberBranchSettings::UPCGExUberBranchSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExUberBranchSettings);
UPCGExUberBranchSettings::~UPCGExUberBranchSettings() {}
// ********** End Class UPCGExUberBranchSettings ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberBranch_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExUberBranchMode_StaticEnum, TEXT("EPCGExUberBranchMode"), &Z_Registration_Info_UEnum_EPCGExUberBranchMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2336756145U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExUberBranchSettings, UPCGExUberBranchSettings::StaticClass, TEXT("UPCGExUberBranchSettings"), &Z_Registration_Info_UClass_UPCGExUberBranchSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExUberBranchSettings), 1206047822U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberBranch_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberBranch_h__Script_PCGExtendedToolkit_2735965434{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberBranch_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberBranch_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberBranch_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberBranch_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
