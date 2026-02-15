// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shapes/PCGExShapeBuilderFactoryProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExShapeBuilderFactoryProvider() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShapeBuilderFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShapeBuilderFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShapeBuilderFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShapeBuilderFactoryProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoShape();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExDataTypeInfoShape *******************************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoShape_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDataTypeInfoShape); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDataTypeInfoShape); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapeBuilderFactoryProvider.h" },
		{ "PCG_DataTypeDisplayName", "PCGEx | Shape" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDataTypeInfoShape constinit property declarations ***********
// ********** End ScriptStruct FPCGExDataTypeInfoShape constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDataTypeInfoShape>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoShape_Statics
static_assert(std::is_polymorphic<FPCGExDataTypeInfoShape>() == std::is_polymorphic<FPCGExFactoryDataTypeInfo>(), "USTRUCT FPCGExDataTypeInfoShape cannot be polymorphic unless super FPCGExFactoryDataTypeInfo is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoShape;
class UScriptStruct* FPCGExDataTypeInfoShape::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoShape.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoShape.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDataTypeInfoShape, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDataTypeInfoShape"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoShape.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDataTypeInfoShape_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo,
	&NewStructOps,
	"PCGExDataTypeInfoShape",
	nullptr,
	0,
	sizeof(FPCGExDataTypeInfoShape),
	alignof(FPCGExDataTypeInfoShape),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDataTypeInfoShape_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDataTypeInfoShape_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoShape()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoShape.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoShape.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDataTypeInfoShape_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoShape.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDataTypeInfoShape *********************************************

// ********** Begin Class UPCGExShapeBuilderFactoryData ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExShapeBuilderFactoryData;
UClass* UPCGExShapeBuilderFactoryData::GetPrivateStaticClass()
{
	using TClass = UPCGExShapeBuilderFactoryData;
	if (!Z_Registration_Info_UClass_UPCGExShapeBuilderFactoryData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExShapeBuilderFactoryData"),
			Z_Registration_Info_UClass_UPCGExShapeBuilderFactoryData.InnerSingleton,
			StaticRegisterNativesUPCGExShapeBuilderFactoryData,
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
	return Z_Registration_Info_UClass_UPCGExShapeBuilderFactoryData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExShapeBuilderFactoryData_NoRegister()
{
	return UPCGExShapeBuilderFactoryData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExShapeBuilderFactoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Shapes/PCGExShapeBuilderFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapeBuilderFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExShapeBuilderFactoryData constinit property declarations ************
// ********** End Class UPCGExShapeBuilderFactoryData constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExShapeBuilderFactoryData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExShapeBuilderFactoryData_Statics
UObject* (*const Z_Construct_UClass_UPCGExShapeBuilderFactoryData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShapeBuilderFactoryData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExShapeBuilderFactoryData_Statics::ClassParams = {
	&UPCGExShapeBuilderFactoryData::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShapeBuilderFactoryData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExShapeBuilderFactoryData_Statics::Class_MetaDataParams)
};
void UPCGExShapeBuilderFactoryData::StaticRegisterNativesUPCGExShapeBuilderFactoryData()
{
}
UClass* Z_Construct_UClass_UPCGExShapeBuilderFactoryData()
{
	if (!Z_Registration_Info_UClass_UPCGExShapeBuilderFactoryData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExShapeBuilderFactoryData.OuterSingleton, Z_Construct_UClass_UPCGExShapeBuilderFactoryData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExShapeBuilderFactoryData.OuterSingleton;
}
UPCGExShapeBuilderFactoryData::UPCGExShapeBuilderFactoryData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExShapeBuilderFactoryData);
UPCGExShapeBuilderFactoryData::~UPCGExShapeBuilderFactoryData() {}
// ********** End Class UPCGExShapeBuilderFactoryData **********************************************

// ********** Begin Class UPCGExShapeBuilderFactoryProviderSettings ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExShapeBuilderFactoryProviderSettings;
UClass* UPCGExShapeBuilderFactoryProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExShapeBuilderFactoryProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExShapeBuilderFactoryProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExShapeBuilderFactoryProviderSettings"),
			Z_Registration_Info_UClass_UPCGExShapeBuilderFactoryProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExShapeBuilderFactoryProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExShapeBuilderFactoryProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExShapeBuilderFactoryProviderSettings_NoRegister()
{
	return UPCGExShapeBuilderFactoryProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExShapeBuilderFactoryProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Shapes/PCGExShapeBuilderFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExShapeBuilderFactoryProvider.h" },
		{ "PCGExNodeLibraryDoc", "misc/shapes/create-shapes" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExShapeBuilderFactoryProviderSettings constinit property declarations 
// ********** End Class UPCGExShapeBuilderFactoryProviderSettings constinit property declarations **
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExShapeBuilderFactoryProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExShapeBuilderFactoryProviderSettings_Statics
UObject* (*const Z_Construct_UClass_UPCGExShapeBuilderFactoryProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShapeBuilderFactoryProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExShapeBuilderFactoryProviderSettings_Statics::ClassParams = {
	&UPCGExShapeBuilderFactoryProviderSettings::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShapeBuilderFactoryProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExShapeBuilderFactoryProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExShapeBuilderFactoryProviderSettings::StaticRegisterNativesUPCGExShapeBuilderFactoryProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExShapeBuilderFactoryProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExShapeBuilderFactoryProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExShapeBuilderFactoryProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExShapeBuilderFactoryProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExShapeBuilderFactoryProviderSettings.OuterSingleton;
}
UPCGExShapeBuilderFactoryProviderSettings::UPCGExShapeBuilderFactoryProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExShapeBuilderFactoryProviderSettings);
UPCGExShapeBuilderFactoryProviderSettings::~UPCGExShapeBuilderFactoryProviderSettings() {}
// ********** End Class UPCGExShapeBuilderFactoryProviderSettings **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExShapeBuilderFactoryProvider_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExDataTypeInfoShape::StaticStruct, Z_Construct_UScriptStruct_FPCGExDataTypeInfoShape_Statics::NewStructOps, TEXT("PCGExDataTypeInfoShape"),&Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoShape, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDataTypeInfoShape), 2816368110U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExShapeBuilderFactoryData, UPCGExShapeBuilderFactoryData::StaticClass, TEXT("UPCGExShapeBuilderFactoryData"), &Z_Registration_Info_UClass_UPCGExShapeBuilderFactoryData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExShapeBuilderFactoryData), 3200010858U) },
		{ Z_Construct_UClass_UPCGExShapeBuilderFactoryProviderSettings, UPCGExShapeBuilderFactoryProviderSettings::StaticClass, TEXT("UPCGExShapeBuilderFactoryProviderSettings"), &Z_Registration_Info_UClass_UPCGExShapeBuilderFactoryProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExShapeBuilderFactoryProviderSettings), 1650157076U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExShapeBuilderFactoryProvider_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExShapeBuilderFactoryProvider_h__Script_PCGExtendedToolkit_708991046{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExShapeBuilderFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExShapeBuilderFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExShapeBuilderFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExShapeBuilderFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
