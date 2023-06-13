// Auto generated by UnrealTcc. 

#pragma once

#include "CoreMinimal.h"
#include "TccNode.h"
#include "TccRecipeGeoDefine.h"
#include "TccRamp.h"
#include "TcrTreeBranchSkeleton.generated.h"

UCLASS()
class UNREALTCCPROJECT_API UTcrTreeBranchSkeleton : public UTccRecipeGeoDefine
{
	GENERATED_BODY()
public:
	enum EOutputs
	{
		output0,  // From inc_curr_level
		OUT_Count,
	};
	enum EMethod
	{
		ByCount,
		ByDistance,
	};
	enum EPattern
	{
		AngleStep,
		AngleRange,
	};

	const FString SOutputs[OUT_Count] = 
	{
		TEXT("output0"),
	};

	UTcrTreeBranchSkeleton() ;

	virtual FTccNodePtr CreateNode() override;
	virtual void SyncParams(FTccNodePtr InNode) override;

	// Radius Scale Along Trunk
	UPROPERTY(EditAnywhere)
	FTccRampFloat RscaleAlongCurve = ETccRampInterp::Linear;

	// Length Scale Along Trunk
	UPROPERTY(EditAnywhere)
	FTccRampFloat LscaleAlongCurve = ETccRampInterp::Linear;

	// Seed
	UPROPERTY(EditAnywhere)
	int32 BranchSeed = 0;

	// Method
	UPROPERTY(EditAnywhere)
	int32 Method = UTcrTreeBranchSkeleton::ByCount;

	// Force Total Count
	UPROPERTY(EditAnywhere)
	int32 Npts = 100;

	// Distance
	UPROPERTY(EditAnywhere)
	float Distance = 1.000000f;

	// Grow Range
	UPROPERTY(EditAnywhere)
	FVector2f Gpercent = FVector2f(0.000000f, 1.000000f);

	// Segments
	UPROPERTY(EditAnywhere)
	int32 BranchSegs = 10;

	// DebugColor
	UPROPERTY(EditAnywhere)
	int32 EnableDbgColor = 0;

	// Debug Color
	UPROPERTY(EditAnywhere)
	FVector3f DbgColor = FVector3f(1.000000f, 1.000000f, 1.000000f);

	// Pattern
	UPROPERTY(EditAnywhere)
	int32 Pattern = UTcrTreeBranchSkeleton::AngleStep;

	// Yaw
	UPROPERTY(EditAnywhere)
	float Yaw = 137.500000f;

	// Yaw Random
	UPROPERTY(EditAnywhere)
	float YawRand = 0.000000f;

	// Yaw Range
	UPROPERTY(EditAnywhere)
	float YawRange = 0.000000f;

	// Angle Offset
	UPROPERTY(EditAnywhere)
	float AngleOffset = 0.000000f;

	// Pitch Range
	UPROPERTY(EditAnywhere)
	FVector2f PitchR = FVector2f(15.000000f, 60.000000f);

	// Radius Scale
	UPROPERTY(EditAnywhere)
	float RadiusScale = 1.000000f;

	// Length by Volume
	UPROPERTY(EditAnywhere)
	int32 ByVolume = 0;

	// Branch Length
	UPROPERTY(EditAnywhere)
	float BranchLength = 1.000000f;

	// Enable
	UPROPERTY(EditAnywhere)
	int32 EnableNoise = 0;

	// Frequency
	UPROPERTY(EditAnywhere)
	float Freq = 1.000000f;

	// Amplitude
	UPROPERTY(EditAnywhere)
	float Amp = 0.000000f;

	// Bend1
	UPROPERTY(EditAnywhere)
	int32 Bend1 = 0;

	// Bend1
	UPROPERTY(EditAnywhere)
	float Bend1Angle = 0.000000f;

	// Length1
	UPROPERTY(EditAnywhere)
	float Bend1Length = 1.000000f;

	// Offset1
	UPROPERTY(EditAnywhere)
	float Bend1Offset = 0.000000f;

	// Bend2
	UPROPERTY(EditAnywhere)
	int32 Bend2 = 0;

	// Bend2
	UPROPERTY(EditAnywhere)
	float Bend2Angle = 0.000000f;

	// Length2
	UPROPERTY(EditAnywhere)
	float Bend2Length = 1.000000f;

	// Offset2
	UPROPERTY(EditAnywhere)
	float Bend2Offset = 0.000000f;

};

class FTccBlastByFeature;
class FTccMeasure;
class FTccPolyFrame;
class FTccSwitch;
class FTccLine;
class FTccBend;
class FTccForBlock;
class FTccVex;
class FTccDitheredScatter;
class FTccSort;
class FTccAttribPromote;
class FTccCopyToPoint;
class FTccCarveByVolume;
class FTccMerge;
class UNREALTCCPROJECT_API FTcrTreeBranchSkeleton : public FTccNode
{
public:
	FTcrTreeBranchSkeleton() ;
	virtual ~FTcrTreeBranchSkeleton() ;

	virtual void Cook() override;

	// Radius Scale Along Trunk
	FTccRampFloat RscaleAlongCurve = ETccRampInterp::Linear;

	// Length Scale Along Trunk
	FTccRampFloat LscaleAlongCurve = ETccRampInterp::Linear;

	// Seed
	int32 BranchSeed = 0;

	// Method
	int32 Method = UTcrTreeBranchSkeleton::ByCount;

	// Force Total Count
	int32 Npts = 100;

	// Distance
	float Distance = 1.000000f;

	// Grow Range
	FVector2f Gpercent = FVector2f(0.000000f, 1.000000f);

	// Segments
	int32 BranchSegs = 10;

	// DebugColor
	int32 EnableDbgColor = 0;

	// Debug Color
	FVector3f DbgColor = FVector3f(1.000000f, 1.000000f, 1.000000f);

	// Pattern
	int32 Pattern = UTcrTreeBranchSkeleton::AngleStep;

	// Yaw
	float Yaw = 137.500000f;

	// Yaw Random
	float YawRand = 0.000000f;

	// Yaw Range
	float YawRange = 0.000000f;

	// Angle Offset
	float AngleOffset = 0.000000f;

	// Pitch Range
	FVector2f PitchR = FVector2f(15.000000f, 60.000000f);

	// Radius Scale
	float RadiusScale = 1.000000f;

	// Length by Volume
	int32 ByVolume = 0;

	// Branch Length
	float BranchLength = 1.000000f;

	// Enable
	int32 EnableNoise = 0;

	// Frequency
	float Freq = 1.000000f;

	// Amplitude
	float Amp = 0.000000f;

	// Bend1
	int32 Bend1 = 0;

	// Bend1
	float Bend1Angle = 0.000000f;

	// Length1
	float Bend1Length = 1.000000f;

	// Offset1
	float Bend1Offset = 0.000000f;

	// Bend2
	int32 Bend2 = 0;

	// Bend2
	float Bend2Angle = 0.000000f;

	// Length2
	float Bend2Length = 1.000000f;

	// Offset2
	float Bend2Offset = 0.000000f;

	FTccBlastByFeature* tcc_blast_by_feature1 = nullptr;

	FTccBlastByFeature* remove_under_min = nullptr;

	FTccBlastByFeature* remove_above_max = nullptr;

	FTccMeasure* tcc_measure1 = nullptr;

	FTccBlastByFeature* remove_0_len = nullptr;

	FTccPolyFrame* tangent = nullptr;

	FTccSwitch* by_volume_more_length = nullptr;

	FTccLine* tcc_line1 = nullptr;

	FTccLine* tcc_line_double = nullptr;

	FTccSwitch* bend1 = nullptr;

	FTccBend* tcc_bend1 = nullptr;

	FTccSwitch* bend2 = nullptr;

	FTccBend* tcc_bend2 = nullptr;

	FTccForBlock* foreach_branch = nullptr;

	FTccVex* calc_count_and_seed = nullptr;

	FTccDitheredScatter* tcc_dithered_scatter1 = nullptr;

	FTccSort* tcc_sort1 = nullptr;

	FTccAttribPromote* min_max_u = nullptr;

	FTccVex* calc_rotation1 = nullptr;

	FTccVex* calc_scale = nullptr;

	FTccCopyToPoint* tcc_copy_to_point1 = nullptr;

	FTccVex* add_primattrib_level = nullptr;

	FTccSwitch* prune_by_volume = nullptr;

	FTccCarveByVolume* tcc_carve_by_volume1 = nullptr;

	FTccVex* calc_radius = nullptr;

	FTccSwitch* enable_noise = nullptr;

	FTccVex* curl_noise = nullptr;

	FTccSwitch* dbg_color = nullptr;

	FTccVex* tcc_vex1 = nullptr;

	FTccMerge* tcc_merge1 = nullptr;

	FTccVex* inc_curr_level = nullptr;

};
