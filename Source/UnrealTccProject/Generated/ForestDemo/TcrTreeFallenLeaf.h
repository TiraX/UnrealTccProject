// Auto generated by UnrealTcc. 

#pragma once

#include "CoreMinimal.h"
#include "TccNode.h"
#include "TccRecipeGeoDefine.h"
#include "TccRamp.h"
#include "TcrTreeFallenLeaf.generated.h"

UCLASS()
class UNREALTCCPROJECT_API UTcrTreeFallenLeaf : public UTccRecipeGeoDefine
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

	UTcrTreeFallenLeaf() ;

	virtual FTccNodePtr CreateNode() override;
	virtual void SyncParams(FTccNodePtr InNode) override;

	// Seed
	UPROPERTY(EditAnywhere)
	int32 Gseed = 0;

};

class FTcrTreeTrunkGrowth;
class FTcrTreeBranchGrowth;
class FTcrTreeSkinGrowth;
class FTccUnrealMaterial;
class FTccPack;
class FTcrTreeSimpleLeaf;
class FTcrTreeLeafScatter;
class FTccMerge;
class UNREALTCCPROJECT_API FTcrTreeFallenLeaf : public FTccNode
{
public:
	FTcrTreeFallenLeaf() ;
	virtual ~FTcrTreeFallenLeaf() ;

	virtual void Cook() override;

	// Seed
	int32 Gseed = 0;

	FTcrTreeTrunkGrowth* tcr_tree_trunk_growth1 = nullptr;

	FTcrTreeBranchGrowth* tcr_tree_branch_growth3 = nullptr;

	FTcrTreeSkinGrowth* tcr_tree_skin_growth1 = nullptr;

	FTccUnrealMaterial* mi_leaf = nullptr;

	FTccPack* tcc_pack1 = nullptr;

	FTcrTreeSimpleLeaf* tcr_tree_simple_leaf1 = nullptr;

	FTccUnrealMaterial* mi_leaf1 = nullptr;

	FTcrTreeLeafScatter* tcr_tree_leaf_scatter2 = nullptr;

	FTccMerge* tcc_merge1 = nullptr;

};

