// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/Orient/PCGExOrientLookAt.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExOrientLookAt() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExOrientInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExOrientLookAt();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExOrientLookAt_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientLookAtMode();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExOrientLookAtMode ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExOrientLookAtMode;
static UEnum* EPCGExOrientLookAtMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExOrientLookAtMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExOrientLookAtMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientLookAtMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExOrientLookAtMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExOrientLookAtMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExOrientLookAtMode>()
{
	return EPCGExOrientLookAtMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientLookAtMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Direction.DisplayName", "Direction" },
		{ "Direction.Name", "EPCGExOrientLookAtMode::Direction" },
		{ "Direction.ToolTip", "Use a local vector attribute as a direction to look at" },
		{ "ModuleRelativePath", "Public/Paths/Orient/PCGExOrientLookAt.h" },
		{ "NextPoint.DisplayName", "Next Point" },
		{ "NextPoint.Name", "EPCGExOrientLookAtMode::NextPoint" },
		{ "NextPoint.ToolTip", "Look at next point in path" },
		{ "Position.DisplayName", "Position" },
		{ "Position.Name", "EPCGExOrientLookAtMode::Position" },
		{ "Position.ToolTip", "Use a local vector attribtue as a world position to look at" },
		{ "PreviousPoint.DisplayName", "Previous Point" },
		{ "PreviousPoint.Name", "EPCGExOrientLookAtMode::PreviousPoint" },
		{ "PreviousPoint.ToolTip", "Look at previous point in path" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExOrientLookAtMode::NextPoint", (int64)EPCGExOrientLookAtMode::NextPoint },
		{ "EPCGExOrientLookAtMode::PreviousPoint", (int64)EPCGExOrientLookAtMode::PreviousPoint },
		{ "EPCGExOrientLookAtMode::Direction", (int64)EPCGExOrientLookAtMode::Direction },
		{ "EPCGExOrientLookAtMode::Position", (int64)EPCGExOrientLookAtMode::Position },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientLookAtMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientLookAtMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExOrientLookAtMode",
	"EPCGExOrientLookAtMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientLookAtMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientLookAtMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientLookAtMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientLookAtMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientLookAtMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExOrientLookAtMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExOrientLookAtMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientLookAtMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExOrientLookAtMode.InnerSingleton;
}
// ********** End Enum EPCGExOrientLookAtMode ******************************************************

// ********** Begin Class UPCGExOrientLookAt *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExOrientLookAt;
UClass* UPCGExOrientLookAt::GetPrivateStaticClass()
{
	using TClass = UPCGExOrientLookAt;
	if (!Z_Registration_Info_UClass_UPCGExOrientLookAt.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExOrientLookAt"),
			Z_Registration_Info_UClass_UPCGExOrientLookAt.InnerSingleton,
			StaticRegisterNativesUPCGExOrientLookAt,
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
	return Z_Registration_Info_UClass_UPCGExOrientLookAt.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExOrientLookAt_NoRegister()
{
	return UPCGExOrientLookAt::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExOrientLookAt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Look At" },
		{ "IncludePath", "Paths/Orient/PCGExOrientLookAt.h" },
		{ "ModuleRelativePath", "Public/Paths/Orient/PCGExOrientLookAt.h" },
		{ "PCGExNodeLibraryDoc", "paths/orient/orient-look-at" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAt_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Look at method */" },
		{ "ModuleRelativePath", "Public/Paths/Orient/PCGExOrientLookAt.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Look at method" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Vector attribute representing either a direction or world position, depending on selected mode. */" },
		{ "EditCondition", "LookAt == EPCGExOrientLookAtMode::Direction || LookAt == EPCGExOrientLookAtMode::Position" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/Orient/PCGExOrientLookAt.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Vector attribute representing either a direction or world position, depending on selected mode." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExOrientLookAt constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_LookAt_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LookAt;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtAttribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExOrientLookAt constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExOrientLookAt>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExOrientLookAt_Statics

// ********** Begin Class UPCGExOrientLookAt Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExOrientLookAt_Statics::NewProp_LookAt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExOrientLookAt_Statics::NewProp_LookAt = { "LookAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOrientLookAt, LookAt), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOrientLookAtMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAt_MetaData), NewProp_LookAt_MetaData) }; // 3851220085
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExOrientLookAt_Statics::NewProp_LookAtAttribute = { "LookAtAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExOrientLookAt, LookAtAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtAttribute_MetaData), NewProp_LookAtAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExOrientLookAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOrientLookAt_Statics::NewProp_LookAt_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOrientLookAt_Statics::NewProp_LookAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExOrientLookAt_Statics::NewProp_LookAtAttribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExOrientLookAt_Statics::PropPointers) < 2048);
// ********** End Class UPCGExOrientLookAt Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UPCGExOrientLookAt_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExOrientInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExOrientLookAt_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExOrientLookAt_Statics::ClassParams = {
	&UPCGExOrientLookAt::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExOrientLookAt_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExOrientLookAt_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExOrientLookAt_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExOrientLookAt_Statics::Class_MetaDataParams)
};
void UPCGExOrientLookAt::StaticRegisterNativesUPCGExOrientLookAt()
{
}
UClass* Z_Construct_UClass_UPCGExOrientLookAt()
{
	if (!Z_Registration_Info_UClass_UPCGExOrientLookAt.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExOrientLookAt.OuterSingleton, Z_Construct_UClass_UPCGExOrientLookAt_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExOrientLookAt.OuterSingleton;
}
UPCGExOrientLookAt::UPCGExOrientLookAt(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExOrientLookAt);
UPCGExOrientLookAt::~UPCGExOrientLookAt() {}
// ********** End Class UPCGExOrientLookAt *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientLookAt_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExOrientLookAtMode_StaticEnum, TEXT("EPCGExOrientLookAtMode"), &Z_Registration_Info_UEnum_EPCGExOrientLookAtMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3851220085U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExOrientLookAt, UPCGExOrientLookAt::StaticClass, TEXT("UPCGExOrientLookAt"), &Z_Registration_Info_UClass_UPCGExOrientLookAt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExOrientLookAt), 1284608315U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientLookAt_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientLookAt_h__Script_PCGExtendedToolkit_1404151260{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientLookAt_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientLookAt_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientLookAt_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientLookAt_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
