// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/PCGExBestMatchAxis.h"
#include "Data/Matching/PCGExMatching.h"
#include "Details/PCGExDetailsDistances.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBestMatchAxis() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBestMatchAxisSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBestMatchAxisSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBestMatchAxisTargetMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDistanceDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchingDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExBestMatchAxisTargetMode *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBestMatchAxisTargetMode;
static UEnum* EPCGExBestMatchAxisTargetMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBestMatchAxisTargetMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBestMatchAxisTargetMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBestMatchAxisTargetMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBestMatchAxisTargetMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExBestMatchAxisTargetMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBestMatchAxisTargetMode>()
{
	return EPCGExBestMatchAxisTargetMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBestMatchAxisTargetMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ClosestTarget.DisplayName", "Look at Closest Target" },
		{ "ClosestTarget.Name", "EPCGExBestMatchAxisTargetMode::ClosestTarget" },
		{ "ClosestTarget.ToolTip", "Best match against the look at vector toward the closest target point." },
		{ "Direction.DisplayName", "Direction" },
		{ "Direction.Name", "EPCGExBestMatchAxisTargetMode::Direction" },
		{ "Direction.ToolTip", "Best match against a direction vector." },
		{ "LookAtRelativePosition.DisplayName", "Look at Position (Relative)" },
		{ "LookAtRelativePosition.Name", "EPCGExBestMatchAxisTargetMode::LookAtRelativePosition" },
		{ "LookAtRelativePosition.ToolTip", "Best match against the look at vector toward a relative position." },
		{ "LookAtWorldPosition.DisplayName", "Look at Position (World)" },
		{ "LookAtWorldPosition.Name", "EPCGExBestMatchAxisTargetMode::LookAtWorldPosition" },
		{ "LookAtWorldPosition.ToolTip", "Best match against the look at vector toward a world position." },
		{ "ModuleRelativePath", "Public/Transform/PCGExBestMatchAxis.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBestMatchAxisTargetMode::Direction", (int64)EPCGExBestMatchAxisTargetMode::Direction },
		{ "EPCGExBestMatchAxisTargetMode::LookAtWorldPosition", (int64)EPCGExBestMatchAxisTargetMode::LookAtWorldPosition },
		{ "EPCGExBestMatchAxisTargetMode::LookAtRelativePosition", (int64)EPCGExBestMatchAxisTargetMode::LookAtRelativePosition },
		{ "EPCGExBestMatchAxisTargetMode::ClosestTarget", (int64)EPCGExBestMatchAxisTargetMode::ClosestTarget },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBestMatchAxisTargetMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBestMatchAxisTargetMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBestMatchAxisTargetMode",
	"EPCGExBestMatchAxisTargetMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBestMatchAxisTargetMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBestMatchAxisTargetMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBestMatchAxisTargetMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBestMatchAxisTargetMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBestMatchAxisTargetMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExBestMatchAxisTargetMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBestMatchAxisTargetMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBestMatchAxisTargetMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBestMatchAxisTargetMode.InnerSingleton;
}
// ********** End Enum EPCGExBestMatchAxisTargetMode ***********************************************

// ********** Begin Class UPCGExBestMatchAxisSettings **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBestMatchAxisSettings;
UClass* UPCGExBestMatchAxisSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBestMatchAxisSettings;
	if (!Z_Registration_Info_UClass_UPCGExBestMatchAxisSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBestMatchAxisSettings"),
			Z_Registration_Info_UClass_UPCGExBestMatchAxisSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBestMatchAxisSettings,
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
	return Z_Registration_Info_UClass_UPCGExBestMatchAxisSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBestMatchAxisSettings_NoRegister()
{
	return UPCGExBestMatchAxisSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/PCGExBestMatchAxis.h" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBestMatchAxis.h" },
		{ "PCGExNodeLibraryDoc", "transform/move-pivot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Drive the best match axis */" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBestMatchAxis.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Drive the best match axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Up vector source.*/" },
		{ "EditCondition", "Mode != EPCGExBestMatchAxisTargetMode::ClosestTarget" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBestMatchAxis.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Up vector source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The attribute or property on selected source to use as Up vector for the look at transform.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Match (Attr)" },
		{ "EditCondition", "Mode != EPCGExBestMatchAxisTargetMode::ClosestTarget && MatchInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBestMatchAxis.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The attribute or property on selected source to use as Up vector for the look at transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The constant to use as Up vector for the look at transform.*/" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Match" },
		{ "EditCondition", "Mode != EPCGExBestMatchAxisTargetMode::ClosestTarget && MatchInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBestMatchAxis.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The constant to use as Up vector for the look at transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataMatching_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, allows you to filter out which targets get sampled by which data */" },
		{ "EditCondition", "Mode == EPCGExBestMatchAxisTargetMode::ClosestTarget" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBestMatchAxis.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, allows you to filter out which targets get sampled by which data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Distance method to be used for source & target points. */" },
		{ "EditCondition", "Mode == EPCGExBestMatchAxisTargetMode::ClosestTarget" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Transform/PCGExBestMatchAxis.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Distance method to be used for source & target points." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBestMatchAxisSettings constinit property declarations **************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MatchInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MatchSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MatchConstant;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataMatching;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBestMatchAxisSettings constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBestMatchAxisSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics

// ********** Begin Class UPCGExBestMatchAxisSettings Property Definitions *************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBestMatchAxisSettings, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBestMatchAxisTargetMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 1066701680
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::NewProp_MatchInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::NewProp_MatchInput = { "MatchInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBestMatchAxisSettings, MatchInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchInput_MetaData), NewProp_MatchInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::NewProp_MatchSource = { "MatchSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBestMatchAxisSettings, MatchSource), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchSource_MetaData), NewProp_MatchSource_MetaData) }; // 3844583698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::NewProp_MatchConstant = { "MatchConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBestMatchAxisSettings, MatchConstant), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchConstant_MetaData), NewProp_MatchConstant_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::NewProp_DataMatching = { "DataMatching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBestMatchAxisSettings, DataMatching), Z_Construct_UScriptStruct_FPCGExMatchingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataMatching_MetaData), NewProp_DataMatching_MetaData) }; // 1786308959
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::NewProp_DistanceDetails = { "DistanceDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBestMatchAxisSettings, DistanceDetails), Z_Construct_UScriptStruct_FPCGExDistanceDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceDetails_MetaData), NewProp_DistanceDetails_MetaData) }; // 649156467
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::NewProp_MatchInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::NewProp_MatchInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::NewProp_MatchSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::NewProp_MatchConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::NewProp_DataMatching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::NewProp_DistanceDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBestMatchAxisSettings Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::ClassParams = {
	&UPCGExBestMatchAxisSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::PropPointers),
	0,
	0x010000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::Class_MetaDataParams)
};
void UPCGExBestMatchAxisSettings::StaticRegisterNativesUPCGExBestMatchAxisSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBestMatchAxisSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBestMatchAxisSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBestMatchAxisSettings.OuterSingleton, Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBestMatchAxisSettings.OuterSingleton;
}
UPCGExBestMatchAxisSettings::UPCGExBestMatchAxisSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBestMatchAxisSettings);
UPCGExBestMatchAxisSettings::~UPCGExBestMatchAxisSettings() {}
// ********** End Class UPCGExBestMatchAxisSettings ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBestMatchAxis_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExBestMatchAxisTargetMode_StaticEnum, TEXT("EPCGExBestMatchAxisTargetMode"), &Z_Registration_Info_UEnum_EPCGExBestMatchAxisTargetMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1066701680U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBestMatchAxisSettings, UPCGExBestMatchAxisSettings::StaticClass, TEXT("UPCGExBestMatchAxisSettings"), &Z_Registration_Info_UClass_UPCGExBestMatchAxisSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBestMatchAxisSettings), 1793373996U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBestMatchAxis_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBestMatchAxis_h__Script_PCGExtendedToolkit_1123038456{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBestMatchAxis_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBestMatchAxis_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBestMatchAxis_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBestMatchAxis_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
