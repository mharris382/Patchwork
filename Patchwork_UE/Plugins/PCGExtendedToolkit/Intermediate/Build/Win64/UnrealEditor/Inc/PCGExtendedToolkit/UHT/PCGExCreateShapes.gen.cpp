// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shapes/PCGExCreateShapes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExCreateShapes() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateShapesSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateShapesSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShapeProcessorSettings();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExCreateShapesSettings ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateShapesSettings;
UClass* UPCGExCreateShapesSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateShapesSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateShapesSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateShapesSettings"),
			Z_Registration_Info_UClass_UPCGExCreateShapesSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateShapesSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateShapesSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateShapesSettings_NoRegister()
{
	return UPCGExCreateShapesSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateShapesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Shapes/PCGExCreateShapes.h" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExCreateShapes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteShapeId_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Should point have a ShapeID attribute */" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExCreateShapes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Should point have a ShapeID attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeIdAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the 'int32' attribute to write the ShapeId to */" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExCreateShapes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write the ShapeId to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceOutputToElement_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Force writing to points, otherwise defaults to @Data (even if unspecified) */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Write to points" },
		{ "EditCondition", "OutputMode == EPCGExShapeOutputMode::PerShape" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExCreateShapes.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Force writing to points, otherwise defaults to @Data (even if unspecified)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveBelow_MetaData[] = {
		{ "Category", "Settings|Pruning" },
		{ "Comment", "/** Don't output shape if they have less points than a specified amount. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExCreateShapes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Don't output shape if they have less points than a specified amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPointCount_MetaData[] = {
		{ "Category", "Settings|Pruning" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Discarded if point count is less than */" },
		{ "EditCondition", "bRemoveBelow" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExCreateShapes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Discarded if point count is less than" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveAbove_MetaData[] = {
		{ "Category", "Settings|Pruning" },
		{ "Comment", "/** Don't output shape if they have more points than a specified amount. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExCreateShapes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Don't output shape if they have more points than a specified amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPointCount_MetaData[] = {
		{ "Category", "Settings|Pruning" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Discarded if point count is more than */" },
		{ "EditCondition", "bRemoveAbove" },
		{ "ModuleRelativePath", "Public/Shapes/PCGExCreateShapes.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Discarded if point count is more than" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateShapesSettings constinit property declarations ***************
	static void NewProp_bWriteShapeId_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteShapeId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ShapeIdAttributeName;
	static void NewProp_bForceOutputToElement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceOutputToElement;
	static void NewProp_bRemoveBelow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveBelow;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinPointCount;
	static void NewProp_bRemoveAbove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveAbove;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPointCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateShapesSettings constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateShapesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateShapesSettings_Statics

// ********** Begin Class UPCGExCreateShapesSettings Property Definitions **************************
void Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_bWriteShapeId_SetBit(void* Obj)
{
	((UPCGExCreateShapesSettings*)Obj)->bWriteShapeId = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_bWriteShapeId = { "bWriteShapeId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCreateShapesSettings), &Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_bWriteShapeId_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteShapeId_MetaData), NewProp_bWriteShapeId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_ShapeIdAttributeName = { "ShapeIdAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateShapesSettings, ShapeIdAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeIdAttributeName_MetaData), NewProp_ShapeIdAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_bForceOutputToElement_SetBit(void* Obj)
{
	((UPCGExCreateShapesSettings*)Obj)->bForceOutputToElement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_bForceOutputToElement = { "bForceOutputToElement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCreateShapesSettings), &Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_bForceOutputToElement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceOutputToElement_MetaData), NewProp_bForceOutputToElement_MetaData) };
void Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_bRemoveBelow_SetBit(void* Obj)
{
	((UPCGExCreateShapesSettings*)Obj)->bRemoveBelow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_bRemoveBelow = { "bRemoveBelow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCreateShapesSettings), &Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_bRemoveBelow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveBelow_MetaData), NewProp_bRemoveBelow_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_MinPointCount = { "MinPointCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateShapesSettings, MinPointCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPointCount_MetaData), NewProp_MinPointCount_MetaData) };
void Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_bRemoveAbove_SetBit(void* Obj)
{
	((UPCGExCreateShapesSettings*)Obj)->bRemoveAbove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_bRemoveAbove = { "bRemoveAbove", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCreateShapesSettings), &Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_bRemoveAbove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveAbove_MetaData), NewProp_bRemoveAbove_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_MaxPointCount = { "MaxPointCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateShapesSettings, MaxPointCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPointCount_MetaData), NewProp_MaxPointCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_bWriteShapeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_ShapeIdAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_bForceOutputToElement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_bRemoveBelow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_MinPointCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_bRemoveAbove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::NewProp_MaxPointCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateShapesSettings Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExShapeProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::ClassParams = {
	&UPCGExCreateShapesSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateShapesSettings::StaticRegisterNativesUPCGExCreateShapesSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateShapesSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateShapesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateShapesSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateShapesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateShapesSettings.OuterSingleton;
}
UPCGExCreateShapesSettings::UPCGExCreateShapesSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateShapesSettings);
UPCGExCreateShapesSettings::~UPCGExCreateShapesSettings() {}
// ********** End Class UPCGExCreateShapesSettings *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExCreateShapes_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExCreateShapesSettings, UPCGExCreateShapesSettings::StaticClass, TEXT("UPCGExCreateShapesSettings"), &Z_Registration_Info_UClass_UPCGExCreateShapesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateShapesSettings), 2835272616U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExCreateShapes_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExCreateShapes_h__Script_PCGExtendedToolkit_3229656827{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExCreateShapes_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_PCGExCreateShapes_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
