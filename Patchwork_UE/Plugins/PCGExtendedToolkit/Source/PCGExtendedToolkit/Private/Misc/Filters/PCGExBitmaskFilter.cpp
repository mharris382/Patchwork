﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#include "Misc/Filters/PCGExBitmaskFilter.h"

PCGExPointFilter::TFilter* UPCGExBitmaskFilterFactory::CreateFilter() const
{
	return new PCGExPointsFilter::TBitmaskFilter(this);
}

bool PCGExPointsFilter::TBitmaskFilter::Init(const FPCGContext* InContext, PCGExData::FFacade* InPointDataFacade)
{
	if (!TFilter::Init(InContext, InPointDataFacade)) { return false; }

	FlagsReader = PointDataFacade->GetScopedReader<int64>(TypedFilterFactory->Config.FlagsAttribute);

	if (!FlagsReader)
	{
		PCGE_LOG_C(Error, GraphAndLog, InContext, FText::Format(FTEXT("Invalid Value attribute: \"{0}\"."), FText::FromName(TypedFilterFactory->Config.FlagsAttribute)));
		return false;
	}

	if (TypedFilterFactory->Config.MaskType == EPCGExFetchType::Attribute)
	{
		MaskReader = PointDataFacade->GetScopedReader<int64>(TypedFilterFactory->Config.BitmaskAttribute);
		if (!MaskReader)
		{
			PCGE_LOG_C(Error, GraphAndLog, InContext, FText::Format(FTEXT("Invalid Mask attribute: \"{0}\"."), FText::FromName(TypedFilterFactory->Config.BitmaskAttribute)));
			return false;
		}
	}

	return true;
}

namespace PCGExCompareFilter
{
}

#define LOCTEXT_NAMESPACE "PCGExCompareFilterDefinition"
#define PCGEX_NAMESPACE CompareFilterDefinition

PCGEX_CREATE_FILTER_FACTORY(Bitmask)

#if WITH_EDITOR
FString UPCGExBitmaskFilterProviderSettings::GetDisplayName() const
{
	FString A = Config.MaskType == EPCGExFetchType::Attribute ? Config.BitmaskAttribute.ToString() : TEXT("(Const)");
	FString B = Config.FlagsAttribute.ToString();
	FString DisplayName;

	switch (Config.Comparison)
	{
	case EPCGExBitflagComparison::MatchPartial:
		DisplayName = TEXT("Contains Any");
	//DisplayName = TEXT("A & B != 0");
	//DisplayName = A + " & " + B + TEXT(" != 0");
		break;
	case EPCGExBitflagComparison::MatchFull:
		DisplayName = TEXT("Contains All");
	//DisplayName = TEXT("A & B == B");
	//DisplayName = A + " Any " + B + TEXT(" == B");
		break;
	case EPCGExBitflagComparison::MatchStrict:
		DisplayName = TEXT("Is Exactly");
	//DisplayName = TEXT("A == B");
	//DisplayName = A + " == " + B;
		break;
	case EPCGExBitflagComparison::NoMatchPartial:
		DisplayName = TEXT("Not Contains Any");
	//DisplayName = TEXT("A & B == 0");
	//DisplayName = A + " & " + B + TEXT(" == 0");
		break;
	case EPCGExBitflagComparison::NoMatchFull:
		DisplayName = TEXT("Not Contains All");
	//DisplayName = TEXT("A & B != B");
	//DisplayName = A + " & " + B + TEXT(" != B");
		break;
	default:
		DisplayName = " ?? ";
		break;
	}

	return DisplayName;
}
#endif

#undef LOCTEXT_NAMESPACE
#undef PCGEX_NAMESPACE
