// Auto generated by UnrealTcc. 

#pragma once

#include "CoreMinimal.h"
#include "TccNode.h"
#include "TccRecipeGeoDefine.h"
#include "TccRamp.h"
#include "TcrTreeBranchFrac.generated.h"

UCLASS()
class UNREALTCCPROJECT_API UTcrTreeBranchFrac : public UTccRecipeGeoDefine
{
	GENERATED_BODY()
public:
	enum EOutputs
	{
		output0,  // From tcc_attrib_delete1
		OUT_Count,
	};

	const FString SOutputs[OUT_Count] = 
	{
		TEXT("output0"),
	};

	UTcrTreeBranchFrac() ;

	virtual FTccNodePtr CreateNode() override;
	virtual void SyncParams(FTccNodePtr InNode) override;

	// Seed
	UPROPERTY(EditAnywhere)
	int32 Gseed = 0;

	// Pitch Base
	UPROPERTY(EditAnywhere)
	float PitchBase = 0.000000f;

	// Seperation
	UPROPERTY(EditAnywhere)
	float Sep = 0.200000f;

	// Split Distance
	UPROPERTY(EditAnywhere)
	float SplitDis = 3.500000f;

	// Split Dis Falloff
	UPROPERTY(EditAnywhere)
	float SplitDisFalloff = 0.750000f;

	// Split Angle
	UPROPERTY(EditAnywhere)
	float Angle = 15.000000f;

	// Roll
	UPROPERTY(EditAnywhere)
	float Roll = 15.000000f;

	// Force
	UPROPERTY(EditAnywhere)
	float Force = 0.050000f;

};

class FTccVex;
class FTcrTreeBranchFracLevel;
class FTccMerge;
class FTccAttribDelete;
class UNREALTCCPROJECT_API FTcrTreeBranchFrac : public FTccNode
{
public:
	FTcrTreeBranchFrac() ;
	virtual ~FTcrTreeBranchFrac() ;

	virtual void Cook() override;

	// Seed
	int32 Gseed = 0;

	// Pitch Base
	float PitchBase = 0.000000f;

	// Seperation
	float Sep = 0.200000f;

	// Split Distance
	float SplitDis = 3.500000f;

	// Split Dis Falloff
	float SplitDisFalloff = 0.750000f;

	// Split Angle
	float Angle = 15.000000f;

	// Roll
	float Roll = 15.000000f;

	// Force
	float Force = 0.050000f;

	FTccVex* frac_base = nullptr;

	FTcrTreeBranchFracLevel* frac1 = nullptr;

	FTcrTreeBranchFracLevel* frac2 = nullptr;

	FTcrTreeBranchFracLevel* frac3 = nullptr;

	FTcrTreeBranchFracLevel* frac4 = nullptr;

	FTcrTreeBranchFracLevel* frac5 = nullptr;

	FTcrTreeBranchFracLevel* frac6 = nullptr;

	FTcrTreeBranchFracLevel* frac7 = nullptr;

	FTccMerge* tcc_merge1 = nullptr;

	FTccAttribDelete* tcc_attrib_delete1 = nullptr;

};

