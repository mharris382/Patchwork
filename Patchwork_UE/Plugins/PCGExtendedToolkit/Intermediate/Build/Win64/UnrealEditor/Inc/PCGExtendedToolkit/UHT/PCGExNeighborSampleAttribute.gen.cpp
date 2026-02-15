// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/Neighbors/PCGExNeighborSampleAttribute.h"
#include "Details/PCGExDetailsAttributes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExNeighborSampleAttribute() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSampleAttributeSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSampleAttributeSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSampleProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryAttribute();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryAttribute_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryData();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeSamplerConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetList();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExAttributeSamplerConfigBase **********************************
struct Z_Construct_UScriptStruct_FPCGExAttributeSamplerConfigBase_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAttributeSamplerConfigBase); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAttributeSamplerConfigBase); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///\n" },
		{ "Hidden", "TRUE" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blending_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Unique blendmode applied to all specified attributes. For different blendmodes, create multiple sampler nodes. */" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleAttribute.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Unique blendmode applied to all specified attributes. For different blendmodes, create multiple sampler nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAttributes_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to sample & optionally remap. Leave it to None to overwrite the source attribute.  */" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleAttribute.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Attribute to sample & optionally remap. Leave it to None to overwrite the source attribute." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAttributeSamplerConfigBase constinit property declarations **
	static const UECodeGen_Private::FBytePropertyParams NewProp_Blending_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Blending;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAttributeSamplerConfigBase constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAttributeSamplerConfigBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAttributeSamplerConfigBase_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAttributeSamplerConfigBase;
class UScriptStruct* FPCGExAttributeSamplerConfigBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeSamplerConfigBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAttributeSamplerConfigBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAttributeSamplerConfigBase, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAttributeSamplerConfigBase"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAttributeSamplerConfigBase.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAttributeSamplerConfigBase Property Definitions *************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAttributeSamplerConfigBase_Statics::NewProp_Blending_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeSamplerConfigBase_Statics::NewProp_Blending = { "Blending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeSamplerConfigBase, Blending), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDataBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blending_MetaData), NewProp_Blending_MetaData) }; // 4044480617
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeSamplerConfigBase_Statics::NewProp_SourceAttributes = { "SourceAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeSamplerConfigBase, SourceAttributes), Z_Construct_UScriptStruct_FPCGExAttributeSourceToTargetList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAttributes_MetaData), NewProp_SourceAttributes_MetaData) }; // 2362630701
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAttributeSamplerConfigBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeSamplerConfigBase_Statics::NewProp_Blending_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeSamplerConfigBase_Statics::NewProp_Blending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeSamplerConfigBase_Statics::NewProp_SourceAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeSamplerConfigBase_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAttributeSamplerConfigBase Property Definitions ***************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAttributeSamplerConfigBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExAttributeSamplerConfigBase",
	Z_Construct_UScriptStruct_FPCGExAttributeSamplerConfigBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeSamplerConfigBase_Statics::PropPointers),
	sizeof(FPCGExAttributeSamplerConfigBase),
	alignof(FPCGExAttributeSamplerConfigBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeSamplerConfigBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAttributeSamplerConfigBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeSamplerConfigBase()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeSamplerConfigBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAttributeSamplerConfigBase.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAttributeSamplerConfigBase_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAttributeSamplerConfigBase.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAttributeSamplerConfigBase ************************************

// ********** Begin Class UPCGExNeighborSamplerFactoryAttribute ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryAttribute;
UClass* UPCGExNeighborSamplerFactoryAttribute::GetPrivateStaticClass()
{
	using TClass = UPCGExNeighborSamplerFactoryAttribute;
	if (!Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryAttribute.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNeighborSamplerFactoryAttribute"),
			Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryAttribute.InnerSingleton,
			StaticRegisterNativesUPCGExNeighborSamplerFactoryAttribute,
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
	return Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryAttribute.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryAttribute_NoRegister()
{
	return UPCGExNeighborSamplerFactoryAttribute::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNeighborSamplerFactoryAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/Neighbors/PCGExNeighborSampleAttribute.h" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleAttribute.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNeighborSamplerFactoryAttribute constinit property declarations ****
// ********** End Class UPCGExNeighborSamplerFactoryAttribute constinit property declarations ******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNeighborSamplerFactoryAttribute>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNeighborSamplerFactoryAttribute_Statics
UObject* (*const Z_Construct_UClass_UPCGExNeighborSamplerFactoryAttribute_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExNeighborSamplerFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSamplerFactoryAttribute_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNeighborSamplerFactoryAttribute_Statics::ClassParams = {
	&UPCGExNeighborSamplerFactoryAttribute::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x010800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSamplerFactoryAttribute_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNeighborSamplerFactoryAttribute_Statics::Class_MetaDataParams)
};
void UPCGExNeighborSamplerFactoryAttribute::StaticRegisterNativesUPCGExNeighborSamplerFactoryAttribute()
{
}
UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryAttribute()
{
	if (!Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryAttribute.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryAttribute.OuterSingleton, Z_Construct_UClass_UPCGExNeighborSamplerFactoryAttribute_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryAttribute.OuterSingleton;
}
UPCGExNeighborSamplerFactoryAttribute::UPCGExNeighborSamplerFactoryAttribute(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNeighborSamplerFactoryAttribute);
UPCGExNeighborSamplerFactoryAttribute::~UPCGExNeighborSamplerFactoryAttribute() {}
// ********** End Class UPCGExNeighborSamplerFactoryAttribute **************************************

// ********** Begin Class UPCGExNeighborSampleAttributeSettings ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNeighborSampleAttributeSettings;
UClass* UPCGExNeighborSampleAttributeSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExNeighborSampleAttributeSettings;
	if (!Z_Registration_Info_UClass_UPCGExNeighborSampleAttributeSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNeighborSampleAttributeSettings"),
			Z_Registration_Info_UClass_UPCGExNeighborSampleAttributeSettings.InnerSingleton,
			StaticRegisterNativesUPCGExNeighborSampleAttributeSettings,
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
	return Z_Registration_Info_UClass_UPCGExNeighborSampleAttributeSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNeighborSampleAttributeSettings_NoRegister()
{
	return UPCGExNeighborSampleAttributeSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNeighborSampleAttributeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|NeighborSample" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/Neighbors/PCGExNeighborSampleAttribute.h" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sampler Settings. */" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleAttribute.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Sampler Settings." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNeighborSampleAttributeSettings constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExNeighborSampleAttributeSettings constinit property declarations ******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNeighborSampleAttributeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNeighborSampleAttributeSettings_Statics

// ********** Begin Class UPCGExNeighborSampleAttributeSettings Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNeighborSampleAttributeSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNeighborSampleAttributeSettings, Config), Z_Construct_UScriptStruct_FPCGExAttributeSamplerConfigBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1073448813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExNeighborSampleAttributeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNeighborSampleAttributeSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSampleAttributeSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExNeighborSampleAttributeSettings Property Definitions *****************
UObject* (*const Z_Construct_UClass_UPCGExNeighborSampleAttributeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExNeighborSampleProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSampleAttributeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNeighborSampleAttributeSettings_Statics::ClassParams = {
	&UPCGExNeighborSampleAttributeSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExNeighborSampleAttributeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSampleAttributeSettings_Statics::PropPointers),
	0,
	0x010800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSampleAttributeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNeighborSampleAttributeSettings_Statics::Class_MetaDataParams)
};
void UPCGExNeighborSampleAttributeSettings::StaticRegisterNativesUPCGExNeighborSampleAttributeSettings()
{
}
UClass* Z_Construct_UClass_UPCGExNeighborSampleAttributeSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExNeighborSampleAttributeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNeighborSampleAttributeSettings.OuterSingleton, Z_Construct_UClass_UPCGExNeighborSampleAttributeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNeighborSampleAttributeSettings.OuterSingleton;
}
UPCGExNeighborSampleAttributeSettings::UPCGExNeighborSampleAttributeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNeighborSampleAttributeSettings);
UPCGExNeighborSampleAttributeSettings::~UPCGExNeighborSampleAttributeSettings() {}
// ********** End Class UPCGExNeighborSampleAttributeSettings **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleAttribute_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExAttributeSamplerConfigBase::StaticStruct, Z_Construct_UScriptStruct_FPCGExAttributeSamplerConfigBase_Statics::NewStructOps, TEXT("PCGExAttributeSamplerConfigBase"),&Z_Registration_Info_UScriptStruct_FPCGExAttributeSamplerConfigBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAttributeSamplerConfigBase), 1073448813U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExNeighborSamplerFactoryAttribute, UPCGExNeighborSamplerFactoryAttribute::StaticClass, TEXT("UPCGExNeighborSamplerFactoryAttribute"), &Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNeighborSamplerFactoryAttribute), 3173991264U) },
		{ Z_Construct_UClass_UPCGExNeighborSampleAttributeSettings, UPCGExNeighborSampleAttributeSettings::StaticClass, TEXT("UPCGExNeighborSampleAttributeSettings"), &Z_Registration_Info_UClass_UPCGExNeighborSampleAttributeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNeighborSampleAttributeSettings), 3528922453U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleAttribute_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleAttribute_h__Script_PCGExtendedToolkit_4031473623{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleAttribute_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleAttribute_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleAttribute_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleAttribute_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
