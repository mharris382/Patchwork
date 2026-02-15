// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExPathInsert.h"
#include "Data/PCGExDataFilter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPathInsert() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathInsertSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathInsertSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCarryOverDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExPathInsertSettings *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPathInsertSettings;
UClass* UPCGExPathInsertSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPathInsertSettings;
	if (!Z_Registration_Info_UClass_UPCGExPathInsertSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPathInsertSettings"),
			Z_Registration_Info_UClass_UPCGExPathInsertSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPathInsertSettings,
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
	return Z_Registration_Info_UClass_UPCGExPathInsertSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPathInsertSettings_NoRegister()
{
	return UPCGExPathInsertSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPathInsertSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExPathInsert.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathInsert.h" },
		{ "PCGExNodeLibraryDoc", "paths/insert" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToPath_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, inserted points will be snapped to the path. Otherwise, they retain their original location */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathInsert.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, inserted points will be snapped to the path. Otherwise, they retain their original location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWithinRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathInsert.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "bWithinRange" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathInsert.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Max Count Attribute */" },
		{ "DisplayName", "Range (Attr)" },
		{ "EditCondition", "bWithinRange && RangeInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathInsert.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max Count Attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Max Count Constant */" },
		{ "DisplayName", "Range" },
		{ "EditCondition", "bWithinRange && RangeInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathInsert.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max Count Constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarryOverDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Meta filter settings. */" },
		{ "DisplayName", "Carry Over Settings" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathInsert.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Meta filter settings." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPathInsertSettings constinit property declarations *****************
	static void NewProp_bSnapToPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToPath;
	static void NewProp_bWithinRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWithinRange;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RangeInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RangeInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RangeAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Range;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CarryOverDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPathInsertSettings constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPathInsertSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPathInsertSettings_Statics

// ********** Begin Class UPCGExPathInsertSettings Property Definitions ****************************
void Z_Construct_UClass_UPCGExPathInsertSettings_Statics::NewProp_bSnapToPath_SetBit(void* Obj)
{
	((UPCGExPathInsertSettings*)Obj)->bSnapToPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathInsertSettings_Statics::NewProp_bSnapToPath = { "bSnapToPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathInsertSettings), &Z_Construct_UClass_UPCGExPathInsertSettings_Statics::NewProp_bSnapToPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapToPath_MetaData), NewProp_bSnapToPath_MetaData) };
void Z_Construct_UClass_UPCGExPathInsertSettings_Statics::NewProp_bWithinRange_SetBit(void* Obj)
{
	((UPCGExPathInsertSettings*)Obj)->bWithinRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathInsertSettings_Statics::NewProp_bWithinRange = { "bWithinRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathInsertSettings), &Z_Construct_UClass_UPCGExPathInsertSettings_Statics::NewProp_bWithinRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWithinRange_MetaData), NewProp_bWithinRange_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathInsertSettings_Statics::NewProp_RangeInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathInsertSettings_Statics::NewProp_RangeInput = { "RangeInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathInsertSettings, RangeInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeInput_MetaData), NewProp_RangeInput_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPathInsertSettings_Statics::NewProp_RangeAttribute = { "RangeAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathInsertSettings, RangeAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeAttribute_MetaData), NewProp_RangeAttribute_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExPathInsertSettings_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathInsertSettings, Range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathInsertSettings_Statics::NewProp_CarryOverDetails = { "CarryOverDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathInsertSettings, CarryOverDetails), Z_Construct_UScriptStruct_FPCGExCarryOverDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarryOverDetails_MetaData), NewProp_CarryOverDetails_MetaData) }; // 4041221405
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPathInsertSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathInsertSettings_Statics::NewProp_bSnapToPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathInsertSettings_Statics::NewProp_bWithinRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathInsertSettings_Statics::NewProp_RangeInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathInsertSettings_Statics::NewProp_RangeInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathInsertSettings_Statics::NewProp_RangeAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathInsertSettings_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathInsertSettings_Statics::NewProp_CarryOverDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathInsertSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPathInsertSettings Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPCGExPathInsertSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathInsertSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPathInsertSettings_Statics::ClassParams = {
	&UPCGExPathInsertSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPathInsertSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathInsertSettings_Statics::PropPointers),
	0,
	0x010800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathInsertSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPathInsertSettings_Statics::Class_MetaDataParams)
};
void UPCGExPathInsertSettings::StaticRegisterNativesUPCGExPathInsertSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPathInsertSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPathInsertSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPathInsertSettings.OuterSingleton, Z_Construct_UClass_UPCGExPathInsertSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPathInsertSettings.OuterSingleton;
}
UPCGExPathInsertSettings::UPCGExPathInsertSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPathInsertSettings);
UPCGExPathInsertSettings::~UPCGExPathInsertSettings() {}
// ********** End Class UPCGExPathInsertSettings ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathInsert_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPathInsertSettings, UPCGExPathInsertSettings::StaticClass, TEXT("UPCGExPathInsertSettings"), &Z_Registration_Info_UClass_UPCGExPathInsertSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPathInsertSettings), 1125180201U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathInsert_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathInsert_h__Script_PCGExtendedToolkit_2689013958{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathInsert_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathInsert_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
