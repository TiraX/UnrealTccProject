// Auto generated by UnrealTcc. 

#pragma once

#include "CoreMinimal.h"
#include "TccNode.h"
#include "TccRecipeGeoDefine.h"
#include "TccRamp.h"
#include "TcrTreeBigSubbranchScatter.generated.h"

UCLASS()
class UNREALTCCPROJECT_API UTcrTreeBigSubbranchScatter : public UTccRecipeGeoDefine
{
	GENERATED_BODY()
public:
	enum EOutputs
	{
		output0,  // From tcc_instancer1
		OUT_Count,
	};

	const FString SOutputs[OUT_Count] = 
	{
		TEXT("output0"),
	};

	UTcrTreeBigSubbranchScatter() ;

	virtual FTccNodePtr CreateNode() override;
	virtual void SyncParams(FTccNodePtr InNode) override;

	// Global Seed
	UPROPERTY(EditAnywhere)
	int32 Gseed = 0;

	// Age Seperation
	UPROPERTY(EditAnywhere)
	float AgeDis = 0.500000f;

	// Scale
	UPROPERTY(EditAnywhere)
	FVector2f Scale = FVector2f(1.000000f, 1.000000f);

};

class FTccMeasure;
class FTccAttribDelete;
class FTccForBlock;
class FTccVex;
class FTccDitheredScatter;
class FTccBlastByFeature;
class FTccMerge;
class FTccInstancer;
class UNREALTCCPROJECT_API FTcrTreeBigSubbranchScatter : public FTccNode
{
public:
	FTcrTreeBigSubbranchScatter() ;
	virtual ~FTcrTreeBigSubbranchScatter() ;

	virtual void Cook() override;

	// Global Seed
	int32 Gseed = 0;

	// Age Seperation
	float AgeDis = 0.500000f;

	// Scale
	FVector2f Scale = FVector2f(1.000000f, 1.000000f);

	FTccMeasure* tcc_measure1 = nullptr;

	FTccAttribDelete* clean_extra_attribs = nullptr;

	FTccForBlock* foreach_begin1 = nullptr;

	FTccVex* info = nullptr;

	FTccDitheredScatter* tcc_dithered_scatter1 = nullptr;

	FTccVex* scale_and_angle = nullptr;

	FTccBlastByFeature* vertical = nullptr;

	FTccVex* rot = nullptr;

	FTccAttribDelete* tcc_attrib_delete1 = nullptr;

	FTccBlastByFeature* horizontal = nullptr;

	FTccVex* rot1 = nullptr;

	FTccAttribDelete* tcc_attrib_delete2 = nullptr;

	FTccMerge* tcc_merge1 = nullptr;

	FTccInstancer* tcc_instancer1 = nullptr;

};
