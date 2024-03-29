// Auto generated by UnrealTcc. 

#pragma once

#include "CoreMinimal.h"
#include "TccNode.h"
#include "TccRecipeGeoDefine.h"
#include "TccRamp.h"
#include "TcrAraceae02.generated.h"

UCLASS()
class UNREALTCCPROJECT_API UTcrAraceae02 : public UTccRecipeGeoDefine
{
	GENERATED_BODY()
public:
	enum EOutputs
	{
		output0,  // From tcc_merge3
		OUT_Count,
	};

	const FString SOutputs[OUT_Count] = 
	{
		TEXT("output0"),
	};

	UTcrAraceae02() ;

	virtual FTccNodePtr CreateNode() override;
	virtual void SyncParams(FTccNodePtr InNode) override;

	// Seed
	UPROPERTY(EditAnywhere)
	int32 Gseed = 0;

};

class FTcrTreeTrunkGrowth;
class FTcrTreeBranchGrowth;
class FTccMerge;
class FTcrTreeSkinGrowth;
class FTccUnrealMaterial;
class FTccPack;
class FTcrBroadLeaf;
class FTcrTreeLeafScatter;
class UNREALTCCPROJECT_API FTcrAraceae02 : public FTccNode
{
public:
	FTcrAraceae02() ;
	virtual ~FTcrAraceae02() ;

	virtual void Cook() override;

	// Seed
	int32 Gseed = 0;

	FTcrTreeTrunkGrowth* trunk = nullptr;

	FTcrTreeBranchGrowth* branch = nullptr;

	FTccMerge* tcc_merge2 = nullptr;

	FTcrTreeSkinGrowth* tcr_tree_skin_growth1 = nullptr;

	FTccUnrealMaterial* mi_trunk = nullptr;

	FTccPack* tcc_pack3 = nullptr;

	FTcrBroadLeaf* leaf1 = nullptr;

	FTccUnrealMaterial* mi_leaf1 = nullptr;

	FTccPack* tcc_pack1 = nullptr;

	FTcrBroadLeaf* leaf2 = nullptr;

	FTccUnrealMaterial* mi_leaf2 = nullptr;

	FTccPack* tcc_pack2 = nullptr;

	FTccMerge* tcc_merge1 = nullptr;

	FTcrTreeLeafScatter* tcr_tree_leaf_scatter1 = nullptr;

	FTccMerge* tcc_merge3 = nullptr;

};

