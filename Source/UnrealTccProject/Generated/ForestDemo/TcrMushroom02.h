// Auto generated by UnrealTcc. 

#pragma once

#include "CoreMinimal.h"
#include "TccNode.h"
#include "TccRecipeGeoDefine.h"
#include "TccRamp.h"
#include "TcrMushroom02.generated.h"

UCLASS()
class UNREALTCCPROJECT_API UTcrMushroom02 : public UTccRecipeGeoDefine
{
	GENERATED_BODY()
public:
	enum EOutputs
	{
		output0,  // From tcc_merge1
		OUT_Count,
	};

	const FString SOutputs[OUT_Count] = 
	{
		TEXT("output0"),
	};

	UTcrMushroom02() ;

	virtual FTccNodePtr CreateNode() override;
	virtual void SyncParams(FTccNodePtr InNode) override;

	// Seed
	UPROPERTY(EditAnywhere)
	int32 Gseed = 0;

};

class FTcrMushroomStem;
class FTccUnrealMaterial;
class FTccSphere;
class FTccSubdivide;
class FTccMountain;
class FTccPack;
class FTccMerge;
class FTcrMushroomUmb;
class FTccCircle;
class FTccScatter;
class FTccSort;
class FTccVex;
class FTccInstancer;
class UNREALTCCPROJECT_API FTcrMushroom02 : public FTccNode
{
public:
	FTcrMushroom02() ;
	virtual ~FTcrMushroom02() ;

	virtual void Cook() override;

	// Seed
	int32 Gseed = 0;

	FTcrMushroomStem* tcr_mushroom_stem = nullptr;

	FTccUnrealMaterial* mi_trunk = nullptr;

	FTccSphere* tcc_sphere1 = nullptr;

	FTccSubdivide* tcc_subdivide1 = nullptr;

	FTccMountain* tcc_mountain1 = nullptr;

	FTccPack* tcc_pack1 = nullptr;

	FTccMountain* tcc_mountain2 = nullptr;

	FTccPack* tcc_pack2 = nullptr;

	FTccMountain* tcc_mountain3 = nullptr;

	FTccPack* tcc_pack3 = nullptr;

	FTccMerge* tcc_merge2 = nullptr;

	FTcrMushroomUmb* tcr_mushroom_umb = nullptr;

	FTcrMushroomStem* tcr_mushroom_stem1 = nullptr;

	FTccUnrealMaterial* mi_trunk1 = nullptr;

	FTcrMushroomUmb* tcr_mushroom_umb1 = nullptr;

	FTcrMushroomStem* tcr_mushroom_stem2 = nullptr;

	FTccUnrealMaterial* mi_trunk2 = nullptr;

	FTcrMushroomUmb* tcr_mushroom_umb2 = nullptr;

	FTccCircle* tcc_circle1 = nullptr;

	FTccScatter* tcc_scatter1 = nullptr;

	FTccSort* tcc_sort1 = nullptr;

	FTccVex* tcc_vex1 = nullptr;

	FTccInstancer* tcc_instancer1 = nullptr;

	FTccMerge* tcc_merge1 = nullptr;

};

