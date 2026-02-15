// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/FloodFill/FillControls/PCGExFillControlKeepDirection.h"
#include "Metadata/PCGAttributePropertySelector.h"
#include "PCGExCompare.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFillControlKeepDirection() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryKeepDirection();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryKeepDirection_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsKeepDirectionProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsKeepDirectionProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFillControlConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExFillControlConfigKeepDirection ******************************
struct Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExFillControlConfigKeepDirection); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExFillControlConfigKeepDirection); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlKeepDirection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowSizeInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlKeepDirection.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowSizeAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Window Size Attribute */" },
		{ "DisplayName", "Window Size (Attr)" },
		{ "EditCondition", "WindowSizeInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlKeepDirection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Window Size Attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Window Size Constant */" },
		{ "DisplayName", "Window Size" },
		{ "EditCondition", "WindowSizeInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlKeepDirection.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Window Size Constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HashComparisonDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Hash comparison settings */" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlKeepDirection.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Hash comparison settings" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExFillControlConfigKeepDirection constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_WindowSizeInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WindowSizeInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WindowSizeAttribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WindowSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HashComparisonDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExFillControlConfigKeepDirection constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExFillControlConfigKeepDirection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection_Statics
static_assert(std::is_polymorphic<FPCGExFillControlConfigKeepDirection>() == std::is_polymorphic<FPCGExFillControlConfigBase>(), "USTRUCT FPCGExFillControlConfigKeepDirection cannot be polymorphic unless super FPCGExFillControlConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigKeepDirection;
class UScriptStruct* FPCGExFillControlConfigKeepDirection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigKeepDirection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigKeepDirection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExFillControlConfigKeepDirection"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigKeepDirection.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExFillControlConfigKeepDirection Property Definitions *********
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection_Statics::NewProp_WindowSizeInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection_Statics::NewProp_WindowSizeInput = { "WindowSizeInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigKeepDirection, WindowSizeInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowSizeInput_MetaData), NewProp_WindowSizeInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection_Statics::NewProp_WindowSizeAttribute = { "WindowSizeAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigKeepDirection, WindowSizeAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowSizeAttribute_MetaData), NewProp_WindowSizeAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection_Statics::NewProp_WindowSize = { "WindowSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigKeepDirection, WindowSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowSize_MetaData), NewProp_WindowSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection_Statics::NewProp_HashComparisonDetails = { "HashComparisonDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigKeepDirection, HashComparisonDetails), Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HashComparisonDetails_MetaData), NewProp_HashComparisonDetails_MetaData) }; // 1421576008
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection_Statics::NewProp_WindowSizeInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection_Statics::NewProp_WindowSizeInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection_Statics::NewProp_WindowSizeAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection_Statics::NewProp_WindowSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection_Statics::NewProp_HashComparisonDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExFillControlConfigKeepDirection Property Definitions ***********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExFillControlConfigBase,
	&NewStructOps,
	"PCGExFillControlConfigKeepDirection",
	Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection_Statics::PropPointers),
	sizeof(FPCGExFillControlConfigKeepDirection),
	alignof(FPCGExFillControlConfigKeepDirection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigKeepDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigKeepDirection.InnerSingleton, Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigKeepDirection.InnerSingleton);
}
// ********** End ScriptStruct FPCGExFillControlConfigKeepDirection ********************************

// ********** Begin Class UPCGExFillControlsFactoryKeepDirection ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFillControlsFactoryKeepDirection;
UClass* UPCGExFillControlsFactoryKeepDirection::GetPrivateStaticClass()
{
	using TClass = UPCGExFillControlsFactoryKeepDirection;
	if (!Z_Registration_Info_UClass_UPCGExFillControlsFactoryKeepDirection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFillControlsFactoryKeepDirection"),
			Z_Registration_Info_UClass_UPCGExFillControlsFactoryKeepDirection.InnerSingleton,
			StaticRegisterNativesUPCGExFillControlsFactoryKeepDirection,
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
	return Z_Registration_Info_UClass_UPCGExFillControlsFactoryKeepDirection.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFillControlsFactoryKeepDirection_NoRegister()
{
	return UPCGExFillControlsFactoryKeepDirection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFillControlsFactoryKeepDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/FloodFill/FillControls/PCGExFillControlKeepDirection.h" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlKeepDirection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlKeepDirection.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFillControlsFactoryKeepDirection constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFillControlsFactoryKeepDirection constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFillControlsFactoryKeepDirection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFillControlsFactoryKeepDirection_Statics

// ********** Begin Class UPCGExFillControlsFactoryKeepDirection Property Definitions **************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFillControlsFactoryKeepDirection_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFillControlsFactoryKeepDirection, Config), Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 864242913
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFillControlsFactoryKeepDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFillControlsFactoryKeepDirection_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryKeepDirection_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFillControlsFactoryKeepDirection Property Definitions ****************
UObject* (*const Z_Construct_UClass_UPCGExFillControlsFactoryKeepDirection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFillControlsFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryKeepDirection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFillControlsFactoryKeepDirection_Statics::ClassParams = {
	&UPCGExFillControlsFactoryKeepDirection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFillControlsFactoryKeepDirection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryKeepDirection_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryKeepDirection_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFillControlsFactoryKeepDirection_Statics::Class_MetaDataParams)
};
void UPCGExFillControlsFactoryKeepDirection::StaticRegisterNativesUPCGExFillControlsFactoryKeepDirection()
{
}
UClass* Z_Construct_UClass_UPCGExFillControlsFactoryKeepDirection()
{
	if (!Z_Registration_Info_UClass_UPCGExFillControlsFactoryKeepDirection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFillControlsFactoryKeepDirection.OuterSingleton, Z_Construct_UClass_UPCGExFillControlsFactoryKeepDirection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFillControlsFactoryKeepDirection.OuterSingleton;
}
UPCGExFillControlsFactoryKeepDirection::UPCGExFillControlsFactoryKeepDirection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFillControlsFactoryKeepDirection);
UPCGExFillControlsFactoryKeepDirection::~UPCGExFillControlsFactoryKeepDirection() {}
// ********** End Class UPCGExFillControlsFactoryKeepDirection *************************************

// ********** Begin Class UPCGExFillControlsKeepDirectionProviderSettings **************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFillControlsKeepDirectionProviderSettings;
UClass* UPCGExFillControlsKeepDirectionProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExFillControlsKeepDirectionProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExFillControlsKeepDirectionProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFillControlsKeepDirectionProviderSettings"),
			Z_Registration_Info_UClass_UPCGExFillControlsKeepDirectionProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExFillControlsKeepDirectionProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExFillControlsKeepDirectionProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFillControlsKeepDirectionProviderSettings_NoRegister()
{
	return UPCGExFillControlsKeepDirectionProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFillControlsKeepDirectionProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/FloodFill/FillControls/PCGExFillControlKeepDirection.h" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlKeepDirection.h" },
		{ "PCGExNodeLibraryDoc", "clusters/flood-fill/fc-keep-direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Control Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlKeepDirection.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Control Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFillControlsKeepDirectionProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFillControlsKeepDirectionProviderSettings constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFillControlsKeepDirectionProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFillControlsKeepDirectionProviderSettings_Statics

// ********** Begin Class UPCGExFillControlsKeepDirectionProviderSettings Property Definitions *****
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFillControlsKeepDirectionProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFillControlsKeepDirectionProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 864242913
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFillControlsKeepDirectionProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFillControlsKeepDirectionProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsKeepDirectionProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFillControlsKeepDirectionProviderSettings Property Definitions *******
UObject* (*const Z_Construct_UClass_UPCGExFillControlsKeepDirectionProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsKeepDirectionProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFillControlsKeepDirectionProviderSettings_Statics::ClassParams = {
	&UPCGExFillControlsKeepDirectionProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFillControlsKeepDirectionProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsKeepDirectionProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsKeepDirectionProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFillControlsKeepDirectionProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExFillControlsKeepDirectionProviderSettings::StaticRegisterNativesUPCGExFillControlsKeepDirectionProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExFillControlsKeepDirectionProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExFillControlsKeepDirectionProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFillControlsKeepDirectionProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExFillControlsKeepDirectionProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFillControlsKeepDirectionProviderSettings.OuterSingleton;
}
UPCGExFillControlsKeepDirectionProviderSettings::UPCGExFillControlsKeepDirectionProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFillControlsKeepDirectionProviderSettings);
UPCGExFillControlsKeepDirectionProviderSettings::~UPCGExFillControlsKeepDirectionProviderSettings() {}
// ********** End Class UPCGExFillControlsKeepDirectionProviderSettings ****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlKeepDirection_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExFillControlConfigKeepDirection::StaticStruct, Z_Construct_UScriptStruct_FPCGExFillControlConfigKeepDirection_Statics::NewStructOps, TEXT("PCGExFillControlConfigKeepDirection"),&Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigKeepDirection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExFillControlConfigKeepDirection), 864242913U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFillControlsFactoryKeepDirection, UPCGExFillControlsFactoryKeepDirection::StaticClass, TEXT("UPCGExFillControlsFactoryKeepDirection"), &Z_Registration_Info_UClass_UPCGExFillControlsFactoryKeepDirection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFillControlsFactoryKeepDirection), 2775043576U) },
		{ Z_Construct_UClass_UPCGExFillControlsKeepDirectionProviderSettings, UPCGExFillControlsKeepDirectionProviderSettings::StaticClass, TEXT("UPCGExFillControlsKeepDirectionProviderSettings"), &Z_Registration_Info_UClass_UPCGExFillControlsKeepDirectionProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFillControlsKeepDirectionProviderSettings), 4128826626U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlKeepDirection_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlKeepDirection_h__Script_PCGExtendedToolkit_175425817{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlKeepDirection_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlKeepDirection_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlKeepDirection_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlKeepDirection_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
