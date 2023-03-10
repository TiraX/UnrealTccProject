// Recipe tcr_trunk_generator, auto generated by UnrealTcc.

#pragma once

#include "CoreMinimal.h"
#include "TccNode.h"
#include "TccRecipeDefine.h"
#include "TccRamp.h"
#include "TcrTrunkGenerator.generated.h"

UCLASS()
class UNREALTCCPROJECT_API UTcrTrunkGenerator : public UTccRecipeDefine
{
	GENERATED_BODY()
public:
	enum EOutputs
	{
		output0,  // From enable_bend
		OUT_Count,
	};

	const FString SOutputs[OUT_Count] = 
	{
		TEXT("output0"),
	};

	UTcrTrunkGenerator() ;

	virtual void Execute(UTccNode* InNode) override;

	// Radius Scale Along Trunk
	UPROPERTY(EditAnywhere)
	FTccRampFloat RscaleAlongCurve = ETccRampInterp::Bezier;

	// Max Length
	UPROPERTY(EditAnywhere)
	float Length = 5.000000f;

	// Radius
	UPROPERTY(EditAnywhere)
	float Radius = 0.500000f;

	// Noise Seed
	UPROPERTY(EditAnywhere)
	int32 Nseed = 0;

	// Segments
	UPROPERTY(EditAnywhere)
	int32 Segs = 4;

	// Frequency
	UPROPERTY(EditAnywhere)
	float Freq = 1.000000f;

	// Amplitude
	UPROPERTY(EditAnywhere)
	float Amp = 0.000000f;

	// Enable
	UPROPERTY(EditAnywhere)
	int32 EnableBend = 0;

	// Bend
	UPROPERTY(EditAnywhere)
	float Bend = 0.000000f;

	UPROPERTY(Transient)
	UTccNode* tcc_line1 = nullptr;

	UPROPERTY(Transient)
	UTccNode* enable_noise = nullptr;

	UPROPERTY(Transient)
	UTccNode* curl_noise = nullptr;

	UPROPERTY(Transient)
	UTccNode* calc_radius = nullptr;

	UPROPERTY(Transient)
	UTccNode* add_attrib_level = nullptr;

	UPROPERTY(Transient)
	UTccNode* enable_bend = nullptr;

	UPROPERTY(Transient)
	UTccNode* tcc_bend1 = nullptr;

	UPROPERTY(Transient)
	UTccNode* tcc_transform1 = nullptr;

};
