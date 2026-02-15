// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExReduceDataAttribute.h"
#include "Details/PCGExDetailsAttributes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExReduceDataAttribute() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataTypes();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExReduceDataAttributeSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExReduceDataAttributeSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExReduceDataDomainMethod();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExReduceDataDomainMethod **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExReduceDataDomainMethod;
static UEnum* EPCGExReduceDataDomainMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExReduceDataDomainMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExReduceDataDomainMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExReduceDataDomainMethod, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExReduceDataDomainMethod"));
	}
	return Z_Registration_Info_UEnum_EPCGExReduceDataDomainMethod.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExReduceDataDomainMethod>()
{
	return EPCGExReduceDataDomainMethod_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExReduceDataDomainMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Average.DisplayName", "Average" },
		{ "Average.Name", "EPCGExReduceDataDomainMethod::Average" },
		{ "Average.ToolTip", "" },
		{ "Join.DisplayName", "Join" },
		{ "Join.Name", "EPCGExReduceDataDomainMethod::Join" },
		{ "Join.ToolTip", "" },
		{ "Max.DisplayName", "Max" },
		{ "Max.Name", "EPCGExReduceDataDomainMethod::Max" },
		{ "Max.ToolTip", "" },
		{ "Min.DisplayName", "Min" },
		{ "Min.Name", "EPCGExReduceDataDomainMethod::Min" },
		{ "Min.ToolTip", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExReduceDataAttribute.h" },
		{ "Sum.DisplayName", "Sum" },
		{ "Sum.Name", "EPCGExReduceDataDomainMethod::Sum" },
		{ "Sum.ToolTip", "" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExReduceDataDomainMethod::Min", (int64)EPCGExReduceDataDomainMethod::Min },
		{ "EPCGExReduceDataDomainMethod::Max", (int64)EPCGExReduceDataDomainMethod::Max },
		{ "EPCGExReduceDataDomainMethod::Sum", (int64)EPCGExReduceDataDomainMethod::Sum },
		{ "EPCGExReduceDataDomainMethod::Average", (int64)EPCGExReduceDataDomainMethod::Average },
		{ "EPCGExReduceDataDomainMethod::Join", (int64)EPCGExReduceDataDomainMethod::Join },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExReduceDataDomainMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExReduceDataDomainMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExReduceDataDomainMethod",
	"EPCGExReduceDataDomainMethod",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExReduceDataDomainMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExReduceDataDomainMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExReduceDataDomainMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExReduceDataDomainMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExReduceDataDomainMethod()
{
	if (!Z_Registration_Info_UEnum_EPCGExReduceDataDomainMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExReduceDataDomainMethod.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExReduceDataDomainMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExReduceDataDomainMethod.InnerSingleton;
}
// ********** End Enum EPCGExReduceDataDomainMethod ************************************************

// ********** Begin Class UPCGExReduceDataAttributeSettings ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExReduceDataAttributeSettings;
UClass* UPCGExReduceDataAttributeSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExReduceDataAttributeSettings;
	if (!Z_Registration_Info_UClass_UPCGExReduceDataAttributeSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExReduceDataAttributeSettings"),
			Z_Registration_Info_UClass_UPCGExReduceDataAttributeSettings.InnerSingleton,
			StaticRegisterNativesUPCGExReduceDataAttributeSettings,
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
	return Z_Registration_Info_UClass_UPCGExReduceDataAttributeSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExReduceDataAttributeSettings_NoRegister()
{
	return UPCGExReduceDataAttributeSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExReduceDataAttribute.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExReduceDataAttribute.h" },
		{ "PCGExNodeLibraryDoc", "metadata/reduce-data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Misc/PCGExReduceDataAttribute.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Misc/PCGExReduceDataAttribute.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCustomOutputType_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExReduceDataAttribute.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bCustomOutputType" },
		{ "ModuleRelativePath", "Public/Misc/PCGExReduceDataAttribute.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinDelimiter_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Method == EPCGExReduceDataDomainMethod::Join" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExReduceDataAttribute.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExReduceDataAttributeSettings constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
	static void NewProp_bCustomOutputType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomOutputType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JoinDelimiter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExReduceDataAttributeSettings constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExReduceDataAttributeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics

// ********** Begin Class UPCGExReduceDataAttributeSettings Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExReduceDataAttributeSettings, Attributes), Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 2258194026
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExReduceDataAttributeSettings, Method), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExReduceDataDomainMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Method_MetaData), NewProp_Method_MetaData) }; // 356663341
void Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::NewProp_bCustomOutputType_SetBit(void* Obj)
{
	((UPCGExReduceDataAttributeSettings*)Obj)->bCustomOutputType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::NewProp_bCustomOutputType = { "bCustomOutputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExReduceDataAttributeSettings), &Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::NewProp_bCustomOutputType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCustomOutputType_MetaData), NewProp_bCustomOutputType_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::NewProp_OutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExReduceDataAttributeSettings, OutputType), Z_Construct_UEnum_PCG_EPCGMetadataTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputType_MetaData), NewProp_OutputType_MetaData) }; // 77595749
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::NewProp_JoinDelimiter = { "JoinDelimiter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExReduceDataAttributeSettings, JoinDelimiter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinDelimiter_MetaData), NewProp_JoinDelimiter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::NewProp_Method_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::NewProp_Method,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::NewProp_bCustomOutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::NewProp_OutputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::NewProp_OutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::NewProp_JoinDelimiter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExReduceDataAttributeSettings Property Definitions *********************
UObject* (*const Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::ClassParams = {
	&UPCGExReduceDataAttributeSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::Class_MetaDataParams)
};
void UPCGExReduceDataAttributeSettings::StaticRegisterNativesUPCGExReduceDataAttributeSettings()
{
}
UClass* Z_Construct_UClass_UPCGExReduceDataAttributeSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExReduceDataAttributeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExReduceDataAttributeSettings.OuterSingleton, Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExReduceDataAttributeSettings.OuterSingleton;
}
UPCGExReduceDataAttributeSettings::UPCGExReduceDataAttributeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExReduceDataAttributeSettings);
UPCGExReduceDataAttributeSettings::~UPCGExReduceDataAttributeSettings() {}
// ********** End Class UPCGExReduceDataAttributeSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReduceDataAttribute_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExReduceDataDomainMethod_StaticEnum, TEXT("EPCGExReduceDataDomainMethod"), &Z_Registration_Info_UEnum_EPCGExReduceDataDomainMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 356663341U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExReduceDataAttributeSettings, UPCGExReduceDataAttributeSettings::StaticClass, TEXT("UPCGExReduceDataAttributeSettings"), &Z_Registration_Info_UClass_UPCGExReduceDataAttributeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExReduceDataAttributeSettings), 133702702U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReduceDataAttribute_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReduceDataAttribute_h__Script_PCGExtendedToolkit_39774072{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReduceDataAttribute_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReduceDataAttribute_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReduceDataAttribute_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReduceDataAttribute_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
