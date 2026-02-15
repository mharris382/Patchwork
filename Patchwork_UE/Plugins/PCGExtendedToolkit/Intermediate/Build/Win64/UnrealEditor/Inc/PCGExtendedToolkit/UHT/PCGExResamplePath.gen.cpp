// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExResamplePath.h"
#include "Data/Blending/PCGExDataBlending.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExResamplePath() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExResamplePathSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExResamplePathSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResampleMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResolutionMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTruncateMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBlendingDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExResampleMode ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExResampleMode;
static UEnum* EPCGExResampleMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExResampleMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExResampleMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResampleMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExResampleMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExResampleMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExResampleMode>()
{
	return EPCGExResampleMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResampleMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExResamplePath.h" },
		{ "Redistribute.DisplayName", "Redistribute" },
		{ "Redistribute.Name", "EPCGExResampleMode::Redistribute" },
		{ "Redistribute.ToolTip", "..." },
		{ "Sweep.DisplayName", "Sweep" },
		{ "Sweep.Name", "EPCGExResampleMode::Sweep" },
		{ "Sweep.ToolTip", "..." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExResampleMode::Sweep", (int64)EPCGExResampleMode::Sweep },
		{ "EPCGExResampleMode::Redistribute", (int64)EPCGExResampleMode::Redistribute },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResampleMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResampleMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExResampleMode",
	"EPCGExResampleMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResampleMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResampleMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResampleMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResampleMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResampleMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExResampleMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExResampleMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResampleMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExResampleMode.InnerSingleton;
}
// ********** End Enum EPCGExResampleMode **********************************************************

// ********** Begin Class UPCGExResamplePathSettings ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExResamplePathSettings;
UClass* UPCGExResamplePathSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExResamplePathSettings;
	if (!Z_Registration_Info_UClass_UPCGExResamplePathSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExResamplePathSettings"),
			Z_Registration_Info_UClass_UPCGExResamplePathSettings.InnerSingleton,
			StaticRegisterNativesUPCGExResamplePathSettings,
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
	return Z_Registration_Info_UClass_UPCGExResamplePathSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExResamplePathSettings_NoRegister()
{
	return UPCGExResamplePathSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExResamplePathSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExResamplePath.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExResamplePath.h" },
		{ "PCGExNodeLibraryDoc", "paths/resample" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExResamplePath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveLastPoint_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "Mode == EPCGExResampleMode::Sweep" },
		{ "ModuleRelativePath", "Public/Paths/PCGExResamplePath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Resolution mode */" },
		{ "EditCondition", "Mode == EPCGExResampleMode::Sweep" },
		{ "ModuleRelativePath", "Public/Paths/PCGExResamplePath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Resolution mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Resolution Constant. */" },
		{ "EditCondition", "Mode == EPCGExResampleMode::Sweep" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExResamplePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Resolution Constant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Truncate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "Mode == EPCGExResampleMode::Sweep" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExResamplePath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendingSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Blending settings used to smooth attributes.*/" },
		{ "ModuleRelativePath", "Public/Paths/PCGExResamplePath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Blending settings used to smooth attributes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnsureUniqueSeeds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExResamplePath.h" },
		{ "PCG_NotOverridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExResamplePathSettings constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static void NewProp_bPreserveLastPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveLastPoint;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResolutionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResolutionMode;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Truncate_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Truncate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendingSettings;
	static void NewProp_bEnsureUniqueSeeds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnsureUniqueSeeds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExResamplePathSettings constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExResamplePathSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExResamplePathSettings_Statics

// ********** Begin Class UPCGExResamplePathSettings Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExResamplePathSettings, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResampleMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 2854075810
void Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_bPreserveLastPoint_SetBit(void* Obj)
{
	((UPCGExResamplePathSettings*)Obj)->bPreserveLastPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_bPreserveLastPoint = { "bPreserveLastPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExResamplePathSettings), &Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_bPreserveLastPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveLastPoint_MetaData), NewProp_bPreserveLastPoint_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_ResolutionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_ResolutionMode = { "ResolutionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExResamplePathSettings, ResolutionMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExResolutionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionMode_MetaData), NewProp_ResolutionMode_MetaData) }; // 3513872999
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExResamplePathSettings, Resolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_Truncate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_Truncate = { "Truncate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExResamplePathSettings, Truncate), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTruncateMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Truncate_MetaData), NewProp_Truncate_MetaData) }; // 3854127603
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_BlendingSettings = { "BlendingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExResamplePathSettings, BlendingSettings), Z_Construct_UScriptStruct_FPCGExBlendingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendingSettings_MetaData), NewProp_BlendingSettings_MetaData) }; // 1694264898
void Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_bEnsureUniqueSeeds_SetBit(void* Obj)
{
	((UPCGExResamplePathSettings*)Obj)->bEnsureUniqueSeeds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_bEnsureUniqueSeeds = { "bEnsureUniqueSeeds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExResamplePathSettings), &Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_bEnsureUniqueSeeds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnsureUniqueSeeds_MetaData), NewProp_bEnsureUniqueSeeds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExResamplePathSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_bPreserveLastPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_ResolutionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_ResolutionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_Truncate_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_Truncate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_BlendingSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExResamplePathSettings_Statics::NewProp_bEnsureUniqueSeeds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExResamplePathSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExResamplePathSettings Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UPCGExResamplePathSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExResamplePathSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExResamplePathSettings_Statics::ClassParams = {
	&UPCGExResamplePathSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExResamplePathSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExResamplePathSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExResamplePathSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExResamplePathSettings_Statics::Class_MetaDataParams)
};
void UPCGExResamplePathSettings::StaticRegisterNativesUPCGExResamplePathSettings()
{
}
UClass* Z_Construct_UClass_UPCGExResamplePathSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExResamplePathSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExResamplePathSettings.OuterSingleton, Z_Construct_UClass_UPCGExResamplePathSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExResamplePathSettings.OuterSingleton;
}
UPCGExResamplePathSettings::UPCGExResamplePathSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExResamplePathSettings);
UPCGExResamplePathSettings::~UPCGExResamplePathSettings() {}
// ********** End Class UPCGExResamplePathSettings *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExResamplePath_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExResampleMode_StaticEnum, TEXT("EPCGExResampleMode"), &Z_Registration_Info_UEnum_EPCGExResampleMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2854075810U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExResamplePathSettings, UPCGExResamplePathSettings::StaticClass, TEXT("UPCGExResamplePathSettings"), &Z_Registration_Info_UClass_UPCGExResamplePathSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExResamplePathSettings), 2296533278U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExResamplePath_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExResamplePath_h__Script_PCGExtendedToolkit_3242678134{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExResamplePath_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExResamplePath_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExResamplePath_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExResamplePath_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
