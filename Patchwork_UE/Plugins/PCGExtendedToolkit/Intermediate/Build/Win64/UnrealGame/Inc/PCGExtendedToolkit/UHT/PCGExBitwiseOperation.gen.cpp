// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExBitwiseOperation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBitwiseOperation() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBitwiseOperationSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBitwiseOperationSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitOp();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExBitwiseOperationSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBitwiseOperationSettings;
UClass* UPCGExBitwiseOperationSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBitwiseOperationSettings;
	if (!Z_Registration_Info_UClass_UPCGExBitwiseOperationSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBitwiseOperationSettings"),
			Z_Registration_Info_UClass_UPCGExBitwiseOperationSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBitwiseOperationSettings,
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
	return Z_Registration_Info_UClass_UPCGExBitwiseOperationSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBitwiseOperationSettings_NoRegister()
{
	return UPCGExBitwiseOperationSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExBitwiseOperation.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBitwiseOperation.h" },
		{ "PCGExNodeLibraryDoc", "metadata/bitmasks/bitmask-operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Target attribute */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBitwiseOperation.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Target attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Target attribute */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBitwiseOperation.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Target attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of Mask */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBitwiseOperation.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Mask" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Mask -- Must be int64. */" },
		{ "DisplayName", "Bitmask (Attr)" },
		{ "EditCondition", "MaskInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBitwiseOperation.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Mask -- Must be int64." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bitmask_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Bitmask" },
		{ "EditCondition", "MaskInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExBitwiseOperation.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBitwiseOperationSettings constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_FlagAttribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaskInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaskInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaskAttribute;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Bitmask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBitwiseOperationSettings constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBitwiseOperationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics

// ********** Begin Class UPCGExBitwiseOperationSettings Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::NewProp_FlagAttribute = { "FlagAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBitwiseOperationSettings, FlagAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagAttribute_MetaData), NewProp_FlagAttribute_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBitwiseOperationSettings, Operation), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operation_MetaData), NewProp_Operation_MetaData) }; // 1700527728
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::NewProp_MaskInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::NewProp_MaskInput = { "MaskInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBitwiseOperationSettings, MaskInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskInput_MetaData), NewProp_MaskInput_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::NewProp_MaskAttribute = { "MaskAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBitwiseOperationSettings, MaskAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskAttribute_MetaData), NewProp_MaskAttribute_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::NewProp_Bitmask = { "Bitmask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBitwiseOperationSettings, Bitmask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bitmask_MetaData), NewProp_Bitmask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::NewProp_FlagAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::NewProp_Operation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::NewProp_Operation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::NewProp_MaskInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::NewProp_MaskInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::NewProp_MaskAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::NewProp_Bitmask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBitwiseOperationSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::ClassParams = {
	&UPCGExBitwiseOperationSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::Class_MetaDataParams)
};
void UPCGExBitwiseOperationSettings::StaticRegisterNativesUPCGExBitwiseOperationSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBitwiseOperationSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBitwiseOperationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBitwiseOperationSettings.OuterSingleton, Z_Construct_UClass_UPCGExBitwiseOperationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBitwiseOperationSettings.OuterSingleton;
}
UPCGExBitwiseOperationSettings::UPCGExBitwiseOperationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBitwiseOperationSettings);
UPCGExBitwiseOperationSettings::~UPCGExBitwiseOperationSettings() {}
// ********** End Class UPCGExBitwiseOperationSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBitwiseOperation_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBitwiseOperationSettings, UPCGExBitwiseOperationSettings::StaticClass, TEXT("UPCGExBitwiseOperationSettings"), &Z_Registration_Info_UClass_UPCGExBitwiseOperationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBitwiseOperationSettings), 2112286091U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBitwiseOperation_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBitwiseOperation_h__Script_PCGExtendedToolkit_3200215167{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBitwiseOperation_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExBitwiseOperation_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
