﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#pragma once

#include "CoreMinimal.h"
#include "Data/PCGPointData.h"
#include "UObject/Object.h"

#include "PCGExDataBlending.h"
#include "PCGExPropertiesBlender.h"

namespace PCGExDataBlending
{
	class PCGEXTENDEDTOOLKIT_API FMetadataBlender final
	{
	public:
		bool bBlendProperties = true;

		TMap<FName, FDataBlendingOperationBase*> OperationIdMap;

		~FMetadataBlender();

		explicit FMetadataBlender(const FPCGExBlendingDetails* InBlendingDetails);
		explicit FMetadataBlender(const FMetadataBlender* ReferenceBlender);

		void PrepareForData(
			PCGExData::FFacade* InPrimaryFacade,
			const PCGExData::ESource SecondarySource = PCGExData::ESource::In,
			const bool bInitFirstOperation = false,
			const TSet<FName>* IgnoreAttributeSet = nullptr);

		void PrepareForData(
			PCGExData::FFacade* InPrimaryFacade,
			PCGExData::FFacade* InSecondaryFacade,
			const PCGExData::ESource SecondarySource = PCGExData::ESource::In,
			const bool bInitFirstOperation = false,
			const TSet<FName>* IgnoreAttributeSet = nullptr);

		FORCEINLINE void PrepareForBlending(const PCGExData::FPointRef& Target, const FPCGPoint* Defaults = nullptr) const
		{
			for (const FDataBlendingOperationBase* Op : OperationsToBePrepared) { Op->PrepareOperation(Target.Index); }
			if (bSkipProperties || !PropertiesBlender->bRequiresPrepare) { return; }
			PropertiesBlender->PrepareBlending(Target.MutablePoint(), Defaults ? *Defaults : *Target.Point);
		}

		FORCEINLINE void PrepareForBlending(const int32 PrimaryIndex, const FPCGPoint* Defaults = nullptr) const
		{
			for (const FDataBlendingOperationBase* Op : OperationsToBePrepared) { Op->PrepareOperation(PrimaryIndex); }
			if (bSkipProperties || !PropertiesBlender->bRequiresPrepare) { return; }
			PropertiesBlender->PrepareBlending(*(PrimaryPoints->GetData() + PrimaryIndex), Defaults ? *Defaults : *(PrimaryPoints->GetData() + PrimaryIndex));
		}

		FORCEINLINE void Blend(const PCGExData::FPointRef& A, const PCGExData::FPointRef& B, const PCGExData::FPointRef& Target, const double Weight)
		{
			const bool IsFirstOperation = FirstPointOperation[A.Index];
			for (const FDataBlendingOperationBase* Op : Operations) { Op->DoOperation(A.Index, B.Index, Target.Index, Weight, IsFirstOperation); }
			FirstPointOperation[A.Index] = false;
			if (bSkipProperties) { return; }
			PropertiesBlender->Blend(*A.Point, *B.Point, Target.MutablePoint(), Weight);
		}

		FORCEINLINE void Blend(const int32 PrimaryIndex, const int32 SecondaryIndex, const int32 TargetIndex, const double Weight)
		{
			const bool IsFirstOperation = FirstPointOperation[PrimaryIndex];
			for (const FDataBlendingOperationBase* Op : Operations) { Op->DoOperation(PrimaryIndex, SecondaryIndex, TargetIndex, Weight, IsFirstOperation); }
			FirstPointOperation[PrimaryIndex] = false;
			if (bSkipProperties) { return; }
			PropertiesBlender->Blend(*(PrimaryPoints->GetData() + PrimaryIndex), *(SecondaryPoints->GetData() + SecondaryIndex), (*PrimaryPoints)[TargetIndex], Weight);
		}

		FORCEINLINE void CompleteBlending(const PCGExData::FPointRef& Target, const int32 Count, double TotalWeight) const
		{
			for (const FDataBlendingOperationBase* Op : OperationsToBeCompleted) { Op->FinalizeOperation(Target.Index, Count, TotalWeight); }
			if (bSkipProperties || !PropertiesBlender->bRequiresPrepare) { return; }
			PropertiesBlender->CompleteBlending(Target.MutablePoint(), Count, TotalWeight);
		}

		FORCEINLINE void CompleteBlending(const int32 PrimaryIndex, const int32 Count, double TotalWeight) const
		{
			//check(Count > 0) // Ugh, there's a check missing in a blender user...
			for (const FDataBlendingOperationBase* Op : OperationsToBeCompleted) { Op->FinalizeOperation(PrimaryIndex, Count, TotalWeight); }
			if (bSkipProperties || !PropertiesBlender->bRequiresPrepare) { return; }
			PropertiesBlender->CompleteBlending(*(PrimaryPoints->GetData() + PrimaryIndex), Count, TotalWeight);
		}

		void PrepareRangeForBlending(const int32 StartIndex, const int32 Range) const;
		void BlendRange(const PCGExData::FPointRef& A, const PCGExData::FPointRef& B, const int32 StartIndex, const int32 Range, const TArrayView<double>& Weights);
		void CompleteRangeBlending(const int32 StartIndex, const int32 Range, const TArrayView<const int32>& Counts, const TArrayView<double>& TotalWeights) const;

		void BlendRangeFromTo(const PCGExData::FPointRef& From, const PCGExData::FPointRef& To, const int32 StartIndex, const TArrayView<double>& Weights);

		void Cleanup();

	protected:
		const FPCGExBlendingDetails* BlendingDetails = nullptr;
		const FPropertiesBlender* PropertiesBlender = nullptr;
		bool bSkipProperties = false;
		TArray<FDataBlendingOperationBase*> Operations;
		TArray<FDataBlendingOperationBase*> OperationsToBePrepared;
		TArray<FDataBlendingOperationBase*> OperationsToBeCompleted;

		TArray<FPCGPoint>* PrimaryPoints = nullptr;
		TArray<FPCGPoint>* SecondaryPoints = nullptr;

		TArray<bool> FirstPointOperation;

		void InternalPrepareForData(
			PCGExData::FFacade* InPrimaryFacade,
			PCGExData::FFacade* InSecondaryFacade,
			const PCGExData::ESource SecondarySource,
			const bool bInitFirstOperation,
			const TSet<FName>* IgnoreAttributeSet);
	};
}
