// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shapes/Builders/PCGExShapeCircle.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExShapeCircle() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateShapeCircleSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateShapeCircleSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShapeBuilderFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShapeBuilderFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShapeCircleFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShapeCircleFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExShapeCircleConfig();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExShapeConfigBase();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExShapeCircleConfig *******************************************
struct Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExShapeCircleConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExShapeCircleConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapeCircle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartAngleInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Start angle source. */" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapeCircle.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Start angle source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartAngleAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Start angle attribute, in degrees. */" },
		{ "DisplayName", "Start Angle (Attr)" },
		{ "EditCondition", "StartAngleInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapeCircle.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Start angle attribute, in degrees." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartAngleConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Start angle constant, in degrees. */" },
		{ "DisplayName", "Start Angle" },
		{ "EditCondition", "StartAngleInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapeCircle.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Start angle constant, in degrees." },
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndAngleInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** End angle source. */" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapeCircle.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "End angle source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndAngleAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** End angle attribute, in degrees. */" },
		{ "DisplayName", "End Angle (Attr)" },
		{ "EditCondition", "EndAngleInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapeCircle.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "End angle attribute, in degrees." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndAngleConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** End angle constant, in degrees. */" },
		{ "DisplayName", "End Angle" },
		{ "EditCondition", "EndAngleInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapeCircle.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "End angle constant, in degrees." },
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsClosedLoop_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will flag circle as being closed if possible. */" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapeCircle.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will flag circle as being closed if possible." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExShapeCircleConfig constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_StartAngleInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StartAngleInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartAngleAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartAngleConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EndAngleInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EndAngleInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndAngleAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndAngleConstant;
	static void NewProp_bIsClosedLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsClosedLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExShapeCircleConfig constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExShapeCircleConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics
static_assert(std::is_polymorphic<FPCGExShapeCircleConfig>() == std::is_polymorphic<FPCGExShapeConfigBase>(), "USTRUCT FPCGExShapeCircleConfig cannot be polymorphic unless super FPCGExShapeConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExShapeCircleConfig;
class UScriptStruct* FPCGExShapeCircleConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExShapeCircleConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExShapeCircleConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExShapeCircleConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExShapeCircleConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExShapeCircleConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExShapeCircleConfig Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::NewProp_StartAngleInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::NewProp_StartAngleInput = { "StartAngleInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapeCircleConfig, StartAngleInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartAngleInput_MetaData), NewProp_StartAngleInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::NewProp_StartAngleAttribute = { "StartAngleAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapeCircleConfig, StartAngleAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartAngleAttribute_MetaData), NewProp_StartAngleAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::NewProp_StartAngleConstant = { "StartAngleConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapeCircleConfig, StartAngleConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartAngleConstant_MetaData), NewProp_StartAngleConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::NewProp_EndAngleInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::NewProp_EndAngleInput = { "EndAngleInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapeCircleConfig, EndAngleInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndAngleInput_MetaData), NewProp_EndAngleInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::NewProp_EndAngleAttribute = { "EndAngleAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapeCircleConfig, EndAngleAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndAngleAttribute_MetaData), NewProp_EndAngleAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::NewProp_EndAngleConstant = { "EndAngleConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExShapeCircleConfig, EndAngleConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndAngleConstant_MetaData), NewProp_EndAngleConstant_MetaData) };
void Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::NewProp_bIsClosedLoop_SetBit(void* Obj)
{
	((FPCGExShapeCircleConfig*)Obj)->bIsClosedLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::NewProp_bIsClosedLoop = { "bIsClosedLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExShapeCircleConfig), &Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::NewProp_bIsClosedLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsClosedLoop_MetaData), NewProp_bIsClosedLoop_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::NewProp_StartAngleInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::NewProp_StartAngleInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::NewProp_StartAngleAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::NewProp_StartAngleConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::NewProp_EndAngleInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::NewProp_EndAngleInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::NewProp_EndAngleAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::NewProp_EndAngleConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::NewProp_bIsClosedLoop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExShapeCircleConfig Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExShapeConfigBase,
	&NewStructOps,
	"PCGExShapeCircleConfig",
	Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::PropPointers),
	sizeof(FPCGExShapeCircleConfig),
	alignof(FPCGExShapeCircleConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExShapeCircleConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExShapeCircleConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExShapeCircleConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExShapeCircleConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExShapeCircleConfig *********************************************

// ********** Begin Class UPCGExShapeCircleFactory *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExShapeCircleFactory;
UClass* UPCGExShapeCircleFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExShapeCircleFactory;
	if (!Z_Registration_Info_UClass_UPCGExShapeCircleFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExShapeCircleFactory"),
			Z_Registration_Info_UClass_UPCGExShapeCircleFactory.InnerSingleton,
			StaticRegisterNativesUPCGExShapeCircleFactory,
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
	return Z_Registration_Info_UClass_UPCGExShapeCircleFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExShapeCircleFactory_NoRegister()
{
	return UPCGExShapeCircleFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExShapeCircleFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Shapes/Builders/PCGExShapeCircle.h" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapeCircle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapeCircle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExShapeCircleFactory constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExShapeCircleFactory constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExShapeCircleFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExShapeCircleFactory_Statics

// ********** Begin Class UPCGExShapeCircleFactory Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExShapeCircleFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExShapeCircleFactory, Config), Z_Construct_UScriptStruct_FPCGExShapeCircleConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2340161516
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExShapeCircleFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShapeCircleFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShapeCircleFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExShapeCircleFactory Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPCGExShapeCircleFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExShapeBuilderFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShapeCircleFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExShapeCircleFactory_Statics::ClassParams = {
	&UPCGExShapeCircleFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExShapeCircleFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShapeCircleFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShapeCircleFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExShapeCircleFactory_Statics::Class_MetaDataParams)
};
void UPCGExShapeCircleFactory::StaticRegisterNativesUPCGExShapeCircleFactory()
{
}
UClass* Z_Construct_UClass_UPCGExShapeCircleFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExShapeCircleFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExShapeCircleFactory.OuterSingleton, Z_Construct_UClass_UPCGExShapeCircleFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExShapeCircleFactory.OuterSingleton;
}
UPCGExShapeCircleFactory::UPCGExShapeCircleFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExShapeCircleFactory);
UPCGExShapeCircleFactory::~UPCGExShapeCircleFactory() {}
// ********** End Class UPCGExShapeCircleFactory ***************************************************

// ********** Begin Class UPCGExCreateShapeCircleSettings ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateShapeCircleSettings;
UClass* UPCGExCreateShapeCircleSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateShapeCircleSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateShapeCircleSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateShapeCircleSettings"),
			Z_Registration_Info_UClass_UPCGExCreateShapeCircleSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateShapeCircleSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateShapeCircleSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateShapeCircleSettings_NoRegister()
{
	return UPCGExCreateShapeCircleSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateShapeCircleSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Builder|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Shapes/Builders/PCGExShapeCircle.h" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapeCircle.h" },
		{ "PCGExNodeLibraryDoc", "misc/shapes/shape-circle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Shape properties */" },
		{ "ModuleRelativePath", "Public/Shapes/Builders/PCGExShapeCircle.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Shape properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateShapeCircleSettings constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateShapeCircleSettings constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateShapeCircleSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateShapeCircleSettings_Statics

// ********** Begin Class UPCGExCreateShapeCircleSettings Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateShapeCircleSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateShapeCircleSettings, Config), Z_Construct_UScriptStruct_FPCGExShapeCircleConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2340161516
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateShapeCircleSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateShapeCircleSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateShapeCircleSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateShapeCircleSettings Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UPCGExCreateShapeCircleSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExShapeBuilderFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateShapeCircleSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateShapeCircleSettings_Statics::ClassParams = {
	&UPCGExCreateShapeCircleSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateShapeCircleSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateShapeCircleSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateShapeCircleSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateShapeCircleSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateShapeCircleSettings::StaticRegisterNativesUPCGExCreateShapeCircleSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateShapeCircleSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateShapeCircleSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateShapeCircleSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateShapeCircleSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateShapeCircleSettings.OuterSingleton;
}
UPCGExCreateShapeCircleSettings::UPCGExCreateShapeCircleSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateShapeCircleSettings);
UPCGExCreateShapeCircleSettings::~UPCGExCreateShapeCircleSettings() {}
// ********** End Class UPCGExCreateShapeCircleSettings ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeCircle_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExShapeCircleConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics::NewStructOps, TEXT("PCGExShapeCircleConfig"),&Z_Registration_Info_UScriptStruct_FPCGExShapeCircleConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExShapeCircleConfig), 2340161516U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExShapeCircleFactory, UPCGExShapeCircleFactory::StaticClass, TEXT("UPCGExShapeCircleFactory"), &Z_Registration_Info_UClass_UPCGExShapeCircleFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExShapeCircleFactory), 1713357465U) },
		{ Z_Construct_UClass_UPCGExCreateShapeCircleSettings, UPCGExCreateShapeCircleSettings::StaticClass, TEXT("UPCGExCreateShapeCircleSettings"), &Z_Registration_Info_UClass_UPCGExCreateShapeCircleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateShapeCircleSettings), 1457374236U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeCircle_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeCircle_h__Script_PCGExtendedToolkit_1940097465{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeCircle_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeCircle_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeCircle_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeCircle_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
