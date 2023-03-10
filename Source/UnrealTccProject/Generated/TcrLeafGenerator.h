// Recipe tcr_leaf_generator, auto generated by UnrealTcc.

#pragma once

#include "CoreMinimal.h"
#include "TccNode.h"
#include "TccRecipeDefine.h"
#include "TccRamp.h"
#include "TcrLeafGenerator.generated.h"

UCLASS()
class UNREALTCCPROJECT_API UTcrLeafGenerator : public UTccRecipeDefine
{
	GENERATED_BODY()
public:
	enum EOutputs
	{
		output0,  // From foreach_branch
		OUT_Count,
	};

	const FString SOutputs[OUT_Count] = 
	{
		TEXT("output0"),
	};

	UTcrLeafGenerator() ;

	virtual void Execute(UTccNode* InNode) override;

	// Scale Along Curve
	UPROPERTY(EditAnywhere)
	FTccRampFloat ScaleRamp = ETccRampInterp::Linear;

	// Scale Along Height
	UPROPERTY(EditAnywhere)
	FTccRampFloat ScaleRampH = ETccRampInterp::Linear;

	// Seed
	UPROPERTY(EditAnywhere)
	int32 BranchSeed = 0;

	// Force Total Count
	UPROPERTY(EditAnywhere)
	int32 Npts = 10;

	// Resample
	UPROPERTY(EditAnywhere)
	int32 UseResample = 0;

	// Grow Range
	UPROPERTY(EditAnywhere)
	FVector2f Gpercent = FVector2f(0.200000f, 1.000000f);

	// Mirror
	UPROPERTY(EditAnywhere)
	int32 Mirror = 1;

	// Yaw Range
	UPROPERTY(EditAnywhere)
	FVector2f YawRange = FVector2f(-30.000000f, 45.000000f);

	// Pitch
	UPROPERTY(EditAnywhere)
	float Pitch = 0.000000f;

	// Pitch Random
	UPROPERTY(EditAnywhere)
	float PitchRand = 0.000000f;

	// Roll
	UPROPERTY(EditAnywhere)
	float Roll = 0.000000f;

	// Scale
	UPROPERTY(EditAnywhere)
	FVector2f Scale = FVector2f(1.000000f, 1.000000f);

	// Enable Scale Along Curve
	UPROPERTY(EditAnywhere)
	int32 EnableScaleCurve = 1;

	// Enable Scale Along Height
	UPROPERTY(EditAnywhere)
	int32 EnableScaleHeight = 0;

	// Height Range
	UPROPERTY(EditAnywhere)
	FVector2f HeightRange = FVector2f(1.000000f, 2.000000f);

	UPROPERTY(Transient)
	UTccNode* tcc_blast_by_feature1 = nullptr;

	UPROPERTY(Transient)
	UTccNode* foreach_branch = nullptr;

	UPROPERTY(Transient)
	UTccNode* add_density = nullptr;

	UPROPERTY(Transient)
	UTccNode* use_resample = nullptr;

	UPROPERTY(Transient)
	UTccNode* tcc_scatter3 = nullptr;

	UPROPERTY(Transient)
	UTccNode* delete_density = nullptr;

	UPROPERTY(Transient)
	UTccNode* tcc_sort1 = nullptr;

	UPROPERTY(Transient)
	UTccNode* calc_real_points = nullptr;

	UPROPERTY(Transient)
	UTccNode* tcc_resample1 = nullptr;

	UPROPERTY(Transient)
	UTccNode* tcc_blast_by_feature2 = nullptr;

	UPROPERTY(Transient)
	UTccNode* delete_density1 = nullptr;

	UPROPERTY(Transient)
	UTccNode* min_max_u = nullptr;

	UPROPERTY(Transient)
	UTccNode* enable_mirror = nullptr;

	UPROPERTY(Transient)
	UTccNode* default_dir = nullptr;

	UPROPERTY(Transient)
	UTccNode* mirror_dir_pos = nullptr;

	UPROPERTY(Transient)
	UTccNode* mirror_dir_neg = nullptr;

	UPROPERTY(Transient)
	UTccNode* tcc_merge1 = nullptr;

	UPROPERTY(Transient)
	UTccNode* calc_rotation1 = nullptr;

	UPROPERTY(Transient)
	UTccNode* tcc_attrib_delete1 = nullptr;

	UPROPERTY(Transient)
	UTccNode* apply_scale = nullptr;

	UPROPERTY(Transient)
	UTccNode* tcc_instancer1 = nullptr;

};
