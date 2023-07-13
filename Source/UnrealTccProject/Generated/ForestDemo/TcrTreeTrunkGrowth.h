// Auto generated by UnrealTcc. 

#pragma once

#include "CoreMinimal.h"
#include "TccNode.h"
#include "TccRecipeGeoDefine.h"
#include "TccRamp.h"
#include "TcrTreeTrunkGrowth.generated.h"

UCLASS()
class UNREALTCCPROJECT_API UTcrTreeTrunkGrowth : public UTccRecipeGeoDefine
{
	GENERATED_BODY()
public:
	enum EOutputs
	{
		output0,  // From main_trunk
		OUT_Count,
	};

	const FString SOutputs[OUT_Count] = 
	{
		TEXT("output0"),
	};

	UTcrTreeTrunkGrowth() ;

	virtual FTccNodePtr CreateNode() override;
	virtual void SyncParams(FTccNodePtr InNode) override;

	// Radius Shape
	UPROPERTY(EditAnywhere)
	FTccRampFloat RadiusShape = ETccRampInterp::Bezier;

	// Seed
	UPROPERTY(EditAnywhere)
	int32 Gseed = 0;

	// Tree Age, 1 age equals 1 meter
	UPROPERTY(EditAnywhere)
	float TreeAge = 1.000000f;

	// Max Age, 1 age equals 1 meter
	UPROPERTY(EditAnywhere)
	float MaxAge = 1.000000f;

	// Seg Length, Length per segment
	UPROPERTY(EditAnywhere)
	float SegLen = 0.100000f;

	// VOffset, Length per segment
	UPROPERTY(EditAnywhere)
	float VOffset = 0.000000f;

	// Base Radius
	UPROPERTY(EditAnywhere)
	float Radius = 2.000000f;

	// Curl Force
	UPROPERTY(EditAnywhere)
	float CurlForce = 0.000000f;

	// Curl Freq
	UPROPERTY(EditAnywhere)
	float CurlFreq = 0.100000f;

};

class FTccVex;
class UNREALTCCPROJECT_API FTcrTreeTrunkGrowth : public FTccNode
{
public:
	FTcrTreeTrunkGrowth() ;
	virtual ~FTcrTreeTrunkGrowth() ;

	virtual void Cook() override;

	// Radius Shape
	FTccRampFloat RadiusShape = ETccRampInterp::Bezier;

	// Seed
	int32 Gseed = 0;

	// Tree Age, 1 age equals 1 meter
	float TreeAge = 1.000000f;

	// Max Age, 1 age equals 1 meter
	float MaxAge = 1.000000f;

	// Seg Length, Length per segment
	float SegLen = 0.100000f;

	// VOffset, Length per segment
	float VOffset = 0.000000f;

	// Base Radius
	float Radius = 2.000000f;

	// Curl Force
	float CurlForce = 0.000000f;

	// Curl Freq
	float CurlFreq = 0.100000f;

	FTccVex* main_trunk = nullptr;

};

