// Auto generated by UnrealTcc. 

#pragma once

#include "CoreMinimal.h"
#include "TccNode.h"
#include "TccRecipeGeoDefine.h"
#include "TccRamp.h"
#include "TcrTreeMidPalm.generated.h"

UCLASS()
class UNREALTCCPROJECT_API UTcrTreeMidPalm : public UTccRecipeGeoDefine
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

	UTcrTreeMidPalm() ;

	virtual FTccNodePtr CreateNode() override;
	virtual void SyncParams(FTccNodePtr InNode) override;

	// Yaw
	UPROPERTY(EditAnywhere)
	float Yaw = 0.000000f;

};

class FTcrTreeTrunkGrowth;
class FTcrTreeSkinGrowth;
class FTccUnrealMaterial;
class FTccPack;
class FTcrFernSubbranches;
class FTccVex;
class FTccMerge;
class FTcrTreeLeafScatter;
class FTcrSimpleFruit;
class UNREALTCCPROJECT_API FTcrTreeMidPalm : public FTccNode
{
public:
	FTcrTreeMidPalm() ;
	virtual ~FTcrTreeMidPalm() ;

	virtual void Cook() override;

	// Yaw
	float Yaw = 0.000000f;

	FTcrTreeTrunkGrowth* main_trunk = nullptr;

	FTcrTreeSkinGrowth* tcr_tree_skin_growth1 = nullptr;

	FTccUnrealMaterial* mi_trunk = nullptr;

	FTccPack* tcc_pack1 = nullptr;

	FTcrFernSubbranches* subbranch1 = nullptr;

	FTccVex* instance_id1 = nullptr;

	FTcrFernSubbranches* subbranch2 = nullptr;

	FTccVex* instance_id2 = nullptr;

	FTcrFernSubbranches* subbranch3 = nullptr;

	FTccVex* instance_id3 = nullptr;

	FTccMerge* tcc_merge2 = nullptr;

	FTcrTreeLeafScatter* subbranch_scatter = nullptr;

	FTcrSimpleFruit* tcr_simple_fruit1 = nullptr;

	FTccUnrealMaterial* mi_fruit = nullptr;

	FTcrTreeLeafScatter* fruit_scatter = nullptr;

	FTccMerge* tcc_merge1 = nullptr;

};

