﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#include "Data/PCGExPointIO.h"

#include "PCGExContext.h"
#include "PCGExMT.h"
#include "Data/PCGExPointData.h"
#include "Metadata/Accessors/PCGAttributeAccessorKeys.h"

namespace PCGExData
{
#pragma region FPointIO

	void FPointIO::SetInfos(
		const int32 InIndex,
		const FName InOutputPin,
		const TSet<FString>* InTags)
	{
		IOIndex = InIndex;
		OutputPin = InOutputPin;
		NumInPoints = In ? In->GetPoints().Num() : 0;

		if (InTags) { Tags = MakeShared<FTags>(*InTags); }
		else if (!Tags) { Tags = MakeShared<FTags>(); }
	}

	void FPointIO::InitializeOutput(const EIOInit InitOut)
	{
		if (Out && Out != In) { Context->ManagedObjects->Destroy(Out); }
		OutKeys.Reset();

		bMutable = false;

		if (InitOut == EIOInit::None)
		{
			Out = nullptr;
			return;
		}

		if (InitOut == EIOInit::Forward)
		{
			check(In);
			Out = const_cast<UPCGPointData*>(In);
			return;
		}

		bMutable = true;

		if (InitOut == EIOInit::New)
		{
			if (In)
			{
				UObject* GenericInstance = Context->ManagedObjects->New<UObject>(GetTransientPackage(), In->GetClass());
				Out = Cast<UPCGPointData>(GenericInstance);

				// Input type was not a PointData child, should not happen.
				check(Out)

				Out->InitializeFromData(In);

				const UPCGExPointData* TypedInPointData = Cast<UPCGExPointData>(In);
				UPCGExPointData* TypedOutPointData = Cast<UPCGExPointData>(Out);

				if (TypedInPointData && TypedOutPointData)
				{
					TypedOutPointData->InitializeFromPCGExData(TypedInPointData, EIOInit::New);
				}
			}
			else
			{
				Out = Context->ManagedObjects->New<UPCGPointData>();
			}

			return;
		}

		if (InitOut == EIOInit::Duplicate)
		{
			check(In)
			Out = Context->ManagedObjects->Duplicate<UPCGPointData>(In);
		}
	}

	TSharedPtr<FPCGAttributeAccessorKeysPoints> FPointIO::GetInKeys()
	{
		{
			FReadScopeLock ReadScopeLock(InKeysLock);
			if (InKeys) { return InKeys; }
		}

		{
			FWriteScopeLock WriteScopeLock(InKeysLock);
			if (InKeys) { return InKeys; }
			if (const TSharedPtr<FPointIO> PinnedRoot = RootIO.Pin()) { InKeys = PinnedRoot->GetInKeys(); }
			else { InKeys = MakeShared<FPCGAttributeAccessorKeysPoints>(In->GetPoints()); }
		}

		return InKeys;
	}

	TSharedPtr<FPCGAttributeAccessorKeysPoints> FPointIO::GetOutKeys(const bool bEnsureValidKeys)
	{
		check(Out)

		{
			FReadScopeLock ReadScopeLock(OutKeysLock);
			if (OutKeys) { return OutKeys; }
		}

		{
			FWriteScopeLock WriteScopeLock(OutKeysLock);
			if (OutKeys) { return OutKeys; }
			const TArrayView<FPCGPoint> MutablePoints = MakeArrayView(Out->GetMutablePoints());

			if (bEnsureValidKeys)
			{
				UPCGMetadata* OutMetadata = Out->Metadata;
				for (FPCGPoint& Pt : MutablePoints) { OutMetadata->InitializeOnSet(Pt.MetadataEntry); }
			}

			OutKeys = MakeShared<FPCGAttributeAccessorKeysPoints>(MutablePoints);
		}

		return OutKeys;
	}

	void FPointIO::PrintOutKeysMap(TMap<PCGMetadataEntryKey, int32>& InMap) const
	{
		TArray<FPCGPoint>& PointList = Out->GetMutablePoints();
		InMap.Empty(PointList.Num());
		for (int i = 0; i < PointList.Num(); i++)
		{
			FPCGPoint& Point = PointList[i];
			if (Point.MetadataEntry == PCGInvalidEntryKey) { Out->Metadata->InitializeOnSet(Point.MetadataEntry); }
			InMap.Add(Point.MetadataEntry, i);
		}
	}

	void FPointIO::CleanupKeys()
	{
		InKeys.Reset();
		OutKeys.Reset();
	}

	FPointIO::~FPointIO()
	{
		PCGEX_LOG_DTR(FPointIO)
	}

	bool FPointIO::StageOutput() const
	{
		if (!bEnabled || !Out || (!bAllowEmptyOutput && Out->GetPoints().IsEmpty())) { return false; }

		Context->StageOutput(OutputPin, Out, Tags->ToSet(), Out != In, bMutable);
		return true;
	}

	bool FPointIO::StageOutput(const int32 MinPointCount, const int32 MaxPointCount) const
	{
		if (Out)
		{
			const int64 OutNumPoints = Out->GetPoints().Num();
			if ((MinPointCount >= 0 && OutNumPoints < MinPointCount) ||
				(MaxPointCount >= 0 && OutNumPoints > MaxPointCount))
			{
				return StageOutput();
			}
		}
		return false;
	}

	void FPointIO::DeleteAttribute(FName AttributeName) const
	{
		if (!Out) { return; }

		{
			FWriteScopeLock WriteScopeLock(AttributesLock);
			Out->Metadata->DeleteAttribute(AttributeName);
		}
	}

#pragma endregion

#pragma region FPointIOCollection

	FPointIOCollection::FPointIOCollection(FPCGExContext* InContext): Context(InContext)
	{
		PCGEX_LOG_CTR(FPointIOCollection)
	}

	FPointIOCollection::FPointIOCollection(FPCGExContext* InContext, const FName InputLabel, const EIOInit InitOut)
		: FPointIOCollection(InContext)
	{
		TArray<FPCGTaggedData> Sources = Context->InputData.GetInputsByPin(InputLabel);
		Initialize(Sources, InitOut);
	}

	FPointIOCollection::FPointIOCollection(FPCGExContext* InContext, TArray<FPCGTaggedData>& Sources, const EIOInit InitOut)
		: FPointIOCollection(InContext)
	{
		Initialize(Sources, InitOut);
	}

	FPointIOCollection::~FPointIOCollection()
	{
		PCGEX_LOG_DTR(FPointIOCollection);
	}

	void FPointIOCollection::Initialize(
		TArray<FPCGTaggedData>& Sources,
		const EIOInit InitOut)
	{
		Pairs.Empty(Sources.Num());
		TSet<uint64> UniqueData;
		UniqueData.Reserve(Sources.Num());

		for (FPCGTaggedData& Source : Sources)
		{
			bool bIsAlreadyInSet;
			UniqueData.Add(Source.Data->UID, &bIsAlreadyInSet);
			if (bIsAlreadyInSet) { continue; } // Dedupe

			const UPCGPointData* MutablePointData = PCGExPointIO::GetMutablePointData(Context, Source);
			if (!MutablePointData || MutablePointData->GetPoints().Num() == 0) { continue; }
			Emplace_GetRef(MutablePointData, InitOut, &Source.Tags);
		}
		UniqueData.Empty();
	}

	TSharedPtr<FPointIO> FPointIOCollection::Emplace_GetRef(
		const UPCGPointData* In,
		const EIOInit InitOut,
		const TSet<FString>* Tags)
	{
		FWriteScopeLock WriteLock(PairsLock);
		TSharedPtr<FPointIO> NewIO = Pairs.Add_GetRef(MakeShared<FPointIO>(Context, In));
		NewIO->SetInfos(Pairs.Num() - 1, OutputPin, Tags);
		NewIO->InitializeOutput(InitOut);
		return NewIO;
	}

	TSharedPtr<FPointIO> FPointIOCollection::Emplace_GetRef(const EIOInit InitOut)
	{
		FWriteScopeLock WriteLock(PairsLock);
		TSharedPtr<FPointIO> NewIO = Pairs.Add_GetRef(MakeShared<FPointIO>(Context));
		NewIO->SetInfos(Pairs.Num() - 1, OutputPin);
		NewIO->InitializeOutput(InitOut);
		return NewIO;
	}

	TSharedPtr<FPointIO> FPointIOCollection::Emplace_GetRef(const TSharedPtr<FPointIO>& PointIO, const EIOInit InitOut)
	{
		TSharedPtr<FPointIO> Branch = Emplace_GetRef(PointIO->GetIn(), InitOut);
		Branch->Tags->Reset(PointIO->Tags);
		Branch->RootIO = PointIO;
		return Branch;
	}

	TSharedPtr<FPointIO> FPointIOCollection::InsertUnsafe(const int32 Index, const TSharedPtr<FPointIO>& PointIO)
	{
		check(!Pairs[Index]) // should be an empty spot
		Pairs[Index] = PointIO;
		PointIO->SetInfos(Index, OutputPin);
		return PointIO;
	}

	TSharedPtr<FPointIO> FPointIOCollection::AddUnsafe(const TSharedPtr<FPointIO>& PointIO)
	{
		PointIO->SetInfos(Pairs.Add(PointIO), OutputPin);
		return PointIO;
	}

	void FPointIOCollection::AddUnsafe(const TArray<TSharedPtr<FPointIO>>& IOs)
	{
		if (IOs.IsEmpty()) { return; }
		Pairs.Reserve(Pairs.Num() + IOs.Num());
		for (const TSharedPtr<FPointIO>& IO : IOs)
		{
			if (!IO) { continue; }
			AddUnsafe(IO);
		}
	}

	void FPointIOCollection::StageOutputs()
	{
		Sort();
		Context->StagedOutputReserve(Pairs.Num());
		for (int i = 0; i < Pairs.Num(); i++) { Pairs[i]->StageOutput(); }
	}

	void FPointIOCollection::StageOutputs(const int32 MinPointCount, const int32 MaxPointCount)
	{
		Sort();
		Context->StagedOutputReserve(Pairs.Num());
		for (int i = 0; i < Pairs.Num(); i++) { Pairs[i]->StageOutput(MinPointCount, MaxPointCount); }
	}

	void FPointIOCollection::Sort()
	{
		TRACE_CPUPROFILER_EVENT_SCOPE(FPointIOCollection::Sort);
		Pairs.Sort([](const TSharedPtr<FPointIO>& A, const TSharedPtr<FPointIO>& B) { return A->IOIndex < B->IOIndex; });
	}

	FBox FPointIOCollection::GetInBounds() const
	{
		FBox Bounds = FBox(ForceInit);
		for (const TSharedPtr<FPointIO>& IO : Pairs) { Bounds += IO->GetIn()->GetBounds(); }
		return Bounds;
	}

	FBox FPointIOCollection::GetOutBounds() const
	{
		FBox Bounds = FBox(ForceInit);
		for (const TSharedPtr<FPointIO>& IO : Pairs) { Bounds += IO->GetOut()->GetBounds(); }
		return Bounds;
	}

	void FPointIOCollection::PruneNullEntries(const bool bUpdateIndices)
	{
		const int32 MaxPairs = Pairs.Num();
		int32 WriteIndex = 0;
		if (!bUpdateIndices)
		{
			for (int32 i = 0; i < MaxPairs; i++) { if (Pairs[i]) { Pairs[WriteIndex++] = Pairs[i]; } }
		}
		else
		{
			for (int32 i = 0; i < MaxPairs; i++)
			{
				if (Pairs[i])
				{
					Pairs[i]->IOIndex = WriteIndex;
					Pairs[WriteIndex++] = Pairs[i];
				}
			}
		}
		Pairs.SetNum(WriteIndex);
	}

	void FPointIOCollection::Flush()
	{
		Pairs.Empty();
	}

#pragma endregion

#pragma region FPointIOTaggedEntries

	void FPointIOTaggedEntries::Add(const TSharedRef<FPointIO>& Value)
	{
		Entries.AddUnique(Value);
		Value->Tags->Add(TagId, TagValue);
	}

	bool FPointIOTaggedDictionary::CreateKey(const TSharedRef<FPointIO>& PointIOKey)
	{
		FString TagValue;
		if (!PointIOKey->Tags->GetValue(TagId, TagValue))
		{
			TagValue = FString::Printf(TEXT("%u"), PointIOKey->GetInOut()->GetUniqueID());
			PointIOKey->Tags->Add(TagId, TagValue);
		}

		bool bFoundDupe = false;
		for (const TSharedPtr<FPointIOTaggedEntries>& Binding : Entries)
		{
			// TagValue shouldn't exist already
			if (Binding->TagValue == TagValue) { return false; }
		}

		TagMap.Add(TagValue, Entries.Add(MakeShared<FPointIOTaggedEntries>(TagId, TagValue)));
		return true;
	}

	bool FPointIOTaggedDictionary::TryAddEntry(const TSharedRef<FPointIO>& PointIOEntry)
	{
		FString TagValue;
		if (!PointIOEntry->Tags->GetValue(TagId, TagValue)) { return false; }

		if (const int32* Index = TagMap.Find(TagValue))
		{
			Entries[*Index]->Add(PointIOEntry);
			return true;
		}

		return false;
	}

	TSharedPtr<FPointIOTaggedEntries> FPointIOTaggedDictionary::GetEntries(const FString& Key)
	{
		if (const int32* Index = TagMap.Find(Key)) { return Entries[*Index]; }
		return nullptr;
	}

#pragma endregion
}
