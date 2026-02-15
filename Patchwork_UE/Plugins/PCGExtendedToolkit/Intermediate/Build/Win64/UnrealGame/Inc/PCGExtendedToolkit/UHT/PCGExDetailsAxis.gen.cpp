// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Details/PCGExDetailsAxis.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDetailsAxis() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMakeRotAxis();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExMinimalAxis *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExMinimalAxis;
static UEnum* EPCGExMinimalAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExMinimalAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExMinimalAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExMinimalAxis"));
	}
	return Z_Registration_Info_UEnum_EPCGExMinimalAxis.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMinimalAxis>()
{
	return EPCGExMinimalAxis_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsAxis.h" },
		{ "None.ActionIcon", "STF_None" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPCGExMinimalAxis::None" },
		{ "None.ToolTip", "None" },
		{ "X.ActionIcon", "X" },
		{ "X.DisplayName", "X" },
		{ "X.Name", "EPCGExMinimalAxis::X" },
		{ "X.ToolTip", "X Axis" },
		{ "Y.ActionIcon", "Y" },
		{ "Y.DisplayName", "Y" },
		{ "Y.Name", "EPCGExMinimalAxis::Y" },
		{ "Y.ToolTip", "Y Axis" },
		{ "Z.ActionIcon", "Z" },
		{ "Z.DisplayName", "Z" },
		{ "Z.Name", "EPCGExMinimalAxis::Z" },
		{ "Z.ToolTip", "Z Axis" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExMinimalAxis::None", (int64)EPCGExMinimalAxis::None },
		{ "EPCGExMinimalAxis::X", (int64)EPCGExMinimalAxis::X },
		{ "EPCGExMinimalAxis::Y", (int64)EPCGExMinimalAxis::Y },
		{ "EPCGExMinimalAxis::Z", (int64)EPCGExMinimalAxis::Z },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExMinimalAxis",
	"EPCGExMinimalAxis",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis()
{
	if (!Z_Registration_Info_UEnum_EPCGExMinimalAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExMinimalAxis.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExMinimalAxis.InnerSingleton;
}
// ********** End Enum EPCGExMinimalAxis ***********************************************************

// ********** Begin Enum EPCGExAxis ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAxis;
static UEnum* EPCGExAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAxis"));
	}
	return Z_Registration_Info_UEnum_EPCGExAxis.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAxis>()
{
	return EPCGExAxis_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Backward.DisplayName", "Backward" },
		{ "Backward.Name", "EPCGExAxis::Backward" },
		{ "Backward.ToolTip", "Backward (X-)." },
		{ "Down.DisplayName", "Down" },
		{ "Down.Name", "EPCGExAxis::Down" },
		{ "Down.ToolTip", "Down (Z-)" },
		{ "Forward.DisplayName", "Forward" },
		{ "Forward.Name", "EPCGExAxis::Forward" },
		{ "Forward.ToolTip", "Forward (X+)." },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EPCGExAxis::Left" },
		{ "Left.ToolTip", "Left (Y-)" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsAxis.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EPCGExAxis::Right" },
		{ "Right.ToolTip", "Right (Y+)" },
		{ "Up.DisplayName", "Up" },
		{ "Up.Name", "EPCGExAxis::Up" },
		{ "Up.ToolTip", "Up (Z+)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAxis::Forward", (int64)EPCGExAxis::Forward },
		{ "EPCGExAxis::Backward", (int64)EPCGExAxis::Backward },
		{ "EPCGExAxis::Right", (int64)EPCGExAxis::Right },
		{ "EPCGExAxis::Left", (int64)EPCGExAxis::Left },
		{ "EPCGExAxis::Up", (int64)EPCGExAxis::Up },
		{ "EPCGExAxis::Down", (int64)EPCGExAxis::Down },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAxis",
	"EPCGExAxis",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis()
{
	if (!Z_Registration_Info_UEnum_EPCGExAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAxis.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAxis.InnerSingleton;
}
// ********** End Enum EPCGExAxis ******************************************************************

// ********** Begin Enum EPCGExAxisOrder ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAxisOrder;
static UEnum* EPCGExAxisOrder_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAxisOrder.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAxisOrder.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAxisOrder"));
	}
	return Z_Registration_Info_UEnum_EPCGExAxisOrder.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAxisOrder>()
{
	return EPCGExAxisOrder_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsAxis.h" },
		{ "XYZ.ActionIcon", "AxisOrder_XYZ" },
		{ "XYZ.DisplayName", "X > Y > Z" },
		{ "XYZ.Name", "EPCGExAxisOrder::XYZ" },
		{ "XYZ.ToolTip", "X > Y > Z" },
		{ "XZY.ActionIcon", "AxisOrder_XZY" },
		{ "XZY.DisplayName", "X > Z > Y" },
		{ "XZY.Name", "EPCGExAxisOrder::XZY" },
		{ "XZY.ToolTip", "X > Z > Y" },
		{ "YXZ.ActionIcon", "AxisOrder_YXZ" },
		{ "YXZ.DisplayName", "Y > X > Z" },
		{ "YXZ.Name", "EPCGExAxisOrder::YXZ" },
		{ "YXZ.ToolTip", "Y > X > Z" },
		{ "YZX.ActionIcon", "AxisOrder_YZX" },
		{ "YZX.DisplayName", "Y > Z > X" },
		{ "YZX.Name", "EPCGExAxisOrder::YZX" },
		{ "YZX.ToolTip", "Y > Z > X" },
		{ "ZXY.ActionIcon", "AxisOrder_ZXY" },
		{ "ZXY.DisplayName", "Z > X > Y" },
		{ "ZXY.Name", "EPCGExAxisOrder::ZXY" },
		{ "ZXY.ToolTip", "Z > X > Y" },
		{ "ZYX.ActionIcon", "AxisOrder_ZYX" },
		{ "ZYX.DisplayName", "Z > Y > X" },
		{ "ZYX.Name", "EPCGExAxisOrder::ZYX" },
		{ "ZYX.ToolTip", "Z > Y > X" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAxisOrder::XYZ", (int64)EPCGExAxisOrder::XYZ },
		{ "EPCGExAxisOrder::YZX", (int64)EPCGExAxisOrder::YZX },
		{ "EPCGExAxisOrder::ZXY", (int64)EPCGExAxisOrder::ZXY },
		{ "EPCGExAxisOrder::YXZ", (int64)EPCGExAxisOrder::YXZ },
		{ "EPCGExAxisOrder::ZYX", (int64)EPCGExAxisOrder::ZYX },
		{ "EPCGExAxisOrder::XZY", (int64)EPCGExAxisOrder::XZY },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAxisOrder",
	"EPCGExAxisOrder",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder()
{
	if (!Z_Registration_Info_UEnum_EPCGExAxisOrder.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAxisOrder.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAxisOrder.InnerSingleton;
}
// ********** End Enum EPCGExAxisOrder *************************************************************

// ********** Begin Enum EPCGExAxisAlign ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAxisAlign;
static UEnum* EPCGExAxisAlign_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAxisAlign.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAxisAlign.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAxisAlign"));
	}
	return Z_Registration_Info_UEnum_EPCGExAxisAlign.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAxisAlign>()
{
	return EPCGExAxisAlign_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Backward.DisplayName", "Backward" },
		{ "Backward.Name", "EPCGExAxisAlign::Backward" },
		{ "Backward.ToolTip", "..." },
		{ "Down.DisplayName", "Down" },
		{ "Down.Name", "EPCGExAxisAlign::Down" },
		{ "Down.ToolTip", "..." },
		{ "Forward.DisplayName", "Forward" },
		{ "Forward.Name", "EPCGExAxisAlign::Forward" },
		{ "Forward.ToolTip", "..." },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EPCGExAxisAlign::Left" },
		{ "Left.ToolTip", "..." },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsAxis.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EPCGExAxisAlign::Right" },
		{ "Right.ToolTip", "..." },
		{ "Up.DisplayName", "Up" },
		{ "Up.Name", "EPCGExAxisAlign::Up" },
		{ "Up.ToolTip", "..." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAxisAlign::Forward", (int64)EPCGExAxisAlign::Forward },
		{ "EPCGExAxisAlign::Backward", (int64)EPCGExAxisAlign::Backward },
		{ "EPCGExAxisAlign::Right", (int64)EPCGExAxisAlign::Right },
		{ "EPCGExAxisAlign::Left", (int64)EPCGExAxisAlign::Left },
		{ "EPCGExAxisAlign::Up", (int64)EPCGExAxisAlign::Up },
		{ "EPCGExAxisAlign::Down", (int64)EPCGExAxisAlign::Down },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAxisAlign",
	"EPCGExAxisAlign",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign()
{
	if (!Z_Registration_Info_UEnum_EPCGExAxisAlign.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAxisAlign.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisAlign_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAxisAlign.InnerSingleton;
}
// ********** End Enum EPCGExAxisAlign *************************************************************

// ********** Begin Enum EPCGExMakeRotAxis *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExMakeRotAxis;
static UEnum* EPCGExMakeRotAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExMakeRotAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExMakeRotAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMakeRotAxis, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExMakeRotAxis"));
	}
	return Z_Registration_Info_UEnum_EPCGExMakeRotAxis.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMakeRotAxis>()
{
	return EPCGExMakeRotAxis_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMakeRotAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Details/PCGExDetailsAxis.h" },
		{ "X.ActionIcon", "RotOrder_X" },
		{ "X.DisplayName", "X" },
		{ "X.Name", "EPCGExMakeRotAxis::X" },
		{ "X.ToolTip", "Main direction used for X (Forward)" },
		{ "XY.ActionIcon", "RotOrder_XY" },
		{ "XY.DisplayName", "X > Y" },
		{ "XY.Name", "EPCGExMakeRotAxis::XY" },
		{ "XY.ToolTip", "Main direction used for X (Forward), second axis for Y (Right)" },
		{ "XZ.ActionIcon", "RotOrder_XZ" },
		{ "XZ.DisplayName", "X > Z" },
		{ "XZ.Name", "EPCGExMakeRotAxis::XZ" },
		{ "XZ.ToolTip", "Main direction used for X (Forward), second axis for Z (Up)" },
		{ "Y.ActionIcon", "RotOrder_Y" },
		{ "Y.DisplayName", "Y" },
		{ "Y.Name", "EPCGExMakeRotAxis::Y" },
		{ "Y.ToolTip", "Main direction used for Y (Right)" },
		{ "YX.ActionIcon", "RotOrder_YX" },
		{ "YX.DisplayName", "Y > X" },
		{ "YX.Name", "EPCGExMakeRotAxis::YX" },
		{ "YX.ToolTip", "Main direction used for Y (Right), second axis for X (Forward)" },
		{ "YZ.ActionIcon", "RotOrder_YZ" },
		{ "YZ.DisplayName", "Y > Z" },
		{ "YZ.Name", "EPCGExMakeRotAxis::YZ" },
		{ "YZ.ToolTip", "Main direction used for Y (Right), second axis for Z (Up)" },
		{ "Z.ActionIcon", "RotOrder_Z" },
		{ "Z.DisplayName", "Z" },
		{ "Z.Name", "EPCGExMakeRotAxis::Z" },
		{ "Z.ToolTip", "Main direction used for Z (Up)" },
		{ "ZX.ActionIcon", "RotOrder_ZX" },
		{ "ZX.DisplayName", "Z > X" },
		{ "ZX.Name", "EPCGExMakeRotAxis::ZX" },
		{ "ZX.ToolTip", "Main direction used for Z (Up), second axis for X (Forward)" },
		{ "ZY.ActionIcon", "RotOrder_ZY" },
		{ "ZY.DisplayName", "Z > Y" },
		{ "ZY.Name", "EPCGExMakeRotAxis::ZY" },
		{ "ZY.ToolTip", "Main direction used for Z (Up), second axis for Y (Right)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExMakeRotAxis::X", (int64)EPCGExMakeRotAxis::X },
		{ "EPCGExMakeRotAxis::XY", (int64)EPCGExMakeRotAxis::XY },
		{ "EPCGExMakeRotAxis::XZ", (int64)EPCGExMakeRotAxis::XZ },
		{ "EPCGExMakeRotAxis::Y", (int64)EPCGExMakeRotAxis::Y },
		{ "EPCGExMakeRotAxis::YX", (int64)EPCGExMakeRotAxis::YX },
		{ "EPCGExMakeRotAxis::YZ", (int64)EPCGExMakeRotAxis::YZ },
		{ "EPCGExMakeRotAxis::Z", (int64)EPCGExMakeRotAxis::Z },
		{ "EPCGExMakeRotAxis::ZX", (int64)EPCGExMakeRotAxis::ZX },
		{ "EPCGExMakeRotAxis::ZY", (int64)EPCGExMakeRotAxis::ZY },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMakeRotAxis_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMakeRotAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExMakeRotAxis",
	"EPCGExMakeRotAxis",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMakeRotAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMakeRotAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMakeRotAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMakeRotAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMakeRotAxis()
{
	if (!Z_Registration_Info_UEnum_EPCGExMakeRotAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExMakeRotAxis.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMakeRotAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExMakeRotAxis.InnerSingleton;
}
// ********** End Enum EPCGExMakeRotAxis ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsAxis_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExMinimalAxis_StaticEnum, TEXT("EPCGExMinimalAxis"), &Z_Registration_Info_UEnum_EPCGExMinimalAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 904353693U) },
		{ EPCGExAxis_StaticEnum, TEXT("EPCGExAxis"), &Z_Registration_Info_UEnum_EPCGExAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1564008668U) },
		{ EPCGExAxisOrder_StaticEnum, TEXT("EPCGExAxisOrder"), &Z_Registration_Info_UEnum_EPCGExAxisOrder, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3484752427U) },
		{ EPCGExAxisAlign_StaticEnum, TEXT("EPCGExAxisAlign"), &Z_Registration_Info_UEnum_EPCGExAxisAlign, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3442821815U) },
		{ EPCGExMakeRotAxis_StaticEnum, TEXT("EPCGExMakeRotAxis"), &Z_Registration_Info_UEnum_EPCGExMakeRotAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 332592364U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsAxis_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsAxis_h__Script_PCGExtendedToolkit_714507457{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsAxis_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsAxis_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
