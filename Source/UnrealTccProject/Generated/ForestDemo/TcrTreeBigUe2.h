// Auto generated by UnrealTcc. 

#pragma once

#include "CoreMinimal.h"
#include "TccNode.h"
#include "TccRecipeGeoDefine.h"
#include "TccRamp.h"
#include "TcrTreeBigUe2.generated.h"

UCLASS()
class UNREALTCCPROJECT_API UTcrTreeBigUe2 : public UTccRecipeGeoDefine
{
	GENERATED_BODY()
public:
	enum EOutputs
	{
		output0,  // From foreach_begin2
		OUT_Count,
	};

	const FString SOutputs[OUT_Count] = 
	{
		TEXT("output0"),
	};

	UTcrTreeBigUe2() ;

	virtual FTccNodePtr CreateNode() override;
	virtual void SyncParams(FTccNodePtr InNode) override;

	// Yaw
	UPROPERTY(EditAnywhere)
	FVector2f Yaw = FVector2f(0.000000f, 720.000000f);

	// Rand
	UPROPERTY(EditAnywhere)
	float YawR = 0.441000f;

	// Pitch
	UPROPERTY(EditAnywhere)
	FVector2f Pitch = FVector2f(-3.600000f, -25.400000f);

	// Rand
	UPROPERTY(EditAnywhere)
	float PitchR = 0.752000f;

	// Roll
	UPROPERTY(EditAnywhere)
	float Roll = 0.000000f;

	// Yaw
	UPROPERTY(EditAnywhere)
	FVector2f Yaw2 = FVector2f(0.000000f, 0.000000f);

	// Rand
	UPROPERTY(EditAnywhere)
	float YawR2 = 0.000000f;

	// Pitch
	UPROPERTY(EditAnywhere)
	FVector2f Pitch2 = FVector2f(0.000000f, 0.000000f);

	// Rand
	UPROPERTY(EditAnywhere)
	float PitchR2 = 0.000000f;

};

class FTcrTreeBigSubbranchesGrowth;
class FTccForBlock;
class FTccVex;
class FTcrTreeBranchFrac;
class FTcrTreeSkinGrowth;
class FTccPack;
class FTccBlastByFeature;
class FTcrTreeBigSubbranchScatter;
class FTccMerge;
class UNREALTCCPROJECT_API FTcrTreeBigUe2 : public FTccNode
{
public:
	FTcrTreeBigUe2() ;
	virtual ~FTcrTreeBigUe2() ;

	virtual void Cook() override;

	// Yaw
	FVector2f Yaw = FVector2f(0.000000f, 720.000000f);

	// Rand
	float YawR = 0.441000f;

	// Pitch
	FVector2f Pitch = FVector2f(-3.600000f, -25.400000f);

	// Rand
	float PitchR = 0.752000f;

	// Roll
	float Roll = 0.000000f;

	// Yaw
	FVector2f Yaw2 = FVector2f(0.000000f, 0.000000f);

	// Rand
	float YawR2 = 0.000000f;

	// Pitch
	FVector2f Pitch2 = FVector2f(0.000000f, 0.000000f);

	// Rand
	float PitchR2 = 0.000000f;

	FTcrTreeBigSubbranchesGrowth* subbranches_growth2 = nullptr;

	FTccForBlock* foreach_begin2 = nullptr;

	FTccVex* info = nullptr;

	FTcrTreeBranchFrac* branch_frac3 = nullptr;

	FTcrTreeSkinGrowth* tcr_tree_skin_growth7 = nullptr;

	FTccPack* tcc_pack1 = nullptr;

	FTccBlastByFeature* last_3_levels = nullptr;

	FTcrTreeBigSubbranchScatter* tcr_tree_big_subbranch_scatter1 = nullptr;

	FTccMerge* tcc_merge1 = nullptr;

};
