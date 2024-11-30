﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#pragma once

#include "CoreMinimal.h"
#include "PCGExPointIO.h"
#include "PCGExAttributeHelpers.h"
#include "PCGExDataFilter.h"
#include "Data/PCGPointData.h"
#include "UObject/Object.h"
#include "PCGExData.h"


#include "PCGExDataForward.generated.h"

namespace PCGExData
{
	class FDataForwardHandler;
}

USTRUCT(BlueprintType)
struct /*PCGEXTENDEDTOOLKIT_API*/ FPCGExForwardDetails : public FPCGExNameFiltersDetails
{
	GENERATED_BODY()

	FPCGExForwardDetails()
	{
	}

	/** Is forwarding enabled. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable, DisplayPriority=0))
	bool bEnabled = false;

	/** If enabled, will preserve the initial attribute default value. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable, DisplayPriority=0, EditCondition="bEnabled"))
	bool bPreserveAttributesDefaultValue = false;

	void Filter(TArray<PCGEx::FAttributeIdentity>& Identities) const
	{
		if (FilterMode == EPCGExAttributeFilter::All) { return; }
		for (int i = 0; i < Identities.Num(); i++)
		{
			if (!Test(Identities[i].Name.ToString()))
			{
				Identities.RemoveAt(i);
				i--;
			}
		}
	}

	TSharedPtr<PCGExData::FDataForwardHandler> GetHandler(const TSharedPtr<PCGExData::FFacade>& InSourceDataFacade) const;
	TSharedPtr<PCGExData::FDataForwardHandler> GetHandler(const TSharedPtr<PCGExData::FFacade>& InSourceDataFacade, const TSharedPtr<PCGExData::FFacade>& InTargetDataFacade) const;
	TSharedPtr<PCGExData::FDataForwardHandler> TryGetHandler(const TSharedPtr<PCGExData::FFacade>& InSourceDataFacade) const;
	TSharedPtr<PCGExData::FDataForwardHandler> TryGetHandler(const TSharedPtr<PCGExData::FFacade>& InSourceDataFacade, const TSharedPtr<PCGExData::FFacade>& InTargetDataFacade) const;
};

namespace PCGExData
{
	class /*PCGEXTENDEDTOOLKIT_API*/ FDataForwardHandler
	{
		FPCGExForwardDetails Details;
		TSharedPtr<FFacade> SourceDataFacade;
		TSharedPtr<FFacade> TargetDataFacade;
		TArray<PCGEx::FAttributeIdentity> Identities;
		TArray<TSharedPtr<FBufferBase>> Readers;
		TArray<TSharedPtr<FBufferBase>> Writers;

	public:
		~FDataForwardHandler() = default;
		FDataForwardHandler(const FPCGExForwardDetails& InDetails, const TSharedPtr<FFacade>& InSourceDataFacade);
		FDataForwardHandler(const FPCGExForwardDetails& InDetails, const TSharedPtr<FFacade>& InSourceDataFacade, const TSharedPtr<FFacade>& InTargetDataFacade);
		FORCEINLINE bool IsEmpty() const { return Identities.IsEmpty(); }
		void Forward(const int32 SourceIndex, const int32 TargetIndex);
		void Forward(int32 SourceIndex, const TSharedPtr<FFacade>& InTargetDataFacade);
		void Forward(int32 SourceIndex, UPCGMetadata* InTargetMetadata);
	};
}

USTRUCT(BlueprintType)
struct /*PCGEXTENDEDTOOLKIT_API*/ FPCGExAttributeToTagDetails
{
	GENERATED_BODY()

	FPCGExAttributeToTagDetails()
	{
	}

	/** Use reference point index to tag output data. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(InlineEditConditionToggle))
	bool bAddIndexTag = false;

	/** Prefix added to the reference point index */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(EditCondition="bAddIndexTag"))
	FString IndexTagPrefix = TEXT("IndexTag:");

	/** Attributes which value will be used as tags. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	TArray<FPCGAttributePropertyInputSelector> Attributes;

	TSharedPtr<PCGExData::FFacade> SourceDataFacade;
	TArray<TSharedPtr<PCGEx::TAttributeBroadcaster<FString>>> Getters;

	bool Init(const FPCGContext* InContext, const TSharedPtr<PCGExData::FFacade>& InSourceFacade)
	{
		for (FPCGAttributePropertyInputSelector& Selector : Attributes)
		{
			if (const TSharedPtr<PCGEx::TAttributeBroadcaster<FString>>& Getter = Getters.Add_GetRef(MakeShared<PCGEx::TAttributeBroadcaster<FString>>());
				!Getter->Prepare(Selector, InSourceFacade->Source))
			{
				PCGE_LOG_C(Error, GraphAndLog, InContext, FTEXT("Missing specified Tag attribute."));
				Getters.Empty();
				return false;
			}
		}

		SourceDataFacade = InSourceFacade;
		return true;
	}

	void Tag(const int32 TagIndex, const TSharedPtr<PCGExData::FPointIO>& PointIO) const
	{
		if (bAddIndexTag) { PointIO->Tags->Add(IndexTagPrefix + FString::Printf(TEXT("%d"), TagIndex)); }

		if (!Getters.IsEmpty())
		{
			const FPCGPoint& Point = SourceDataFacade->GetIn()->GetPoint(TagIndex);
			for (const TSharedPtr<PCGEx::TAttributeBroadcaster<FString>>& Getter : Getters)
			{
				FString Tag = Getter->SoftGet(TagIndex, Point, TEXT(""));
				if (Tag.IsEmpty()) { continue; }
				PointIO->Tags->Add(Tag);
			}
		}
	}
};
