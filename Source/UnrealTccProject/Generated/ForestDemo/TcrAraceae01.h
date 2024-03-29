// Auto generated by UnrealTcc. 

#pragma once

#include "CoreMinimal.h"
#include "TccNode.h"
#include "TccRecipeGeoDefine.h"
#include "TccRamp.h"
#include "TcrAraceae01.generated.h"

UCLASS()
class UNREALTCCPROJECT_API UTcrAraceae01 : public UTccRecipeGeoDefine
{
	GENERATED_BODY()
public:
	enum EOutputs
	{
		output0,  // From tcr_tree_leaf_scatter1
		OUT_Count,
	};

	const FString SOutputs[OUT_Count] = 
	{
		TEXT("output0"),
	};

	UTcrAraceae01() ;

	virtual FTccNodePtr CreateNode() override;
	virtual void SyncParams(FTccNodePtr InNode) override;

};

class FTcrTreeTrunkGrowth;
class FTcrBroadLeaf;
class FTccUnrealMaterial;
class FTccPack;
class FTccMerge;
class FTcrTreeLeafScatter;
class UNREALTCCPROJECT_API FTcrAraceae01 : public FTccNode
{
public:
	FTcrAraceae01() ;
	virtual ~FTcrAraceae01() ;

	virtual void Cook() override;

	FTcrTreeTrunkGrowth* trunk = nullptr;

	FTcrBroadLeaf* leaf1 = nullptr;

	FTccUnrealMaterial* mi_leaf = nullptr;

	FTccPack* tcc_pack1 = nullptr;

	FTcrBroadLeaf* leaf2 = nullptr;

	FTccUnrealMaterial* mi_leaf1 = nullptr;

	FTccPack* tcc_pack2 = nullptr;

	FTcrBroadLeaf* leaf3 = nullptr;

	FTccUnrealMaterial* mi_leaf2 = nullptr;

	FTccPack* tcc_pack3 = nullptr;

	FTccMerge* tcc_merge1 = nullptr;

	FTcrTreeLeafScatter* tcr_tree_leaf_scatter1 = nullptr;

};

