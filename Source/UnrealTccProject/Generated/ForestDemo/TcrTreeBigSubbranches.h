// Auto generated by UnrealTcc. 

#pragma once

#include "CoreMinimal.h"
#include "TccNode.h"
#include "TccRecipeGeoDefine.h"
#include "TccRamp.h"
#include "TcrTreeBigSubbranches.generated.h"

UCLASS()
class UNREALTCCPROJECT_API UTcrTreeBigSubbranches : public UTccRecipeGeoDefine
{
	GENERATED_BODY()
public:
	enum EOutputs
	{
		output0,  // From tcc_unpack1
		OUT_Count,
	};

	const FString SOutputs[OUT_Count] = 
	{
		TEXT("output0"),
	};

	UTcrTreeBigSubbranches() ;

	virtual FTccNodePtr CreateNode() override;
	virtual void SyncParams(FTccNodePtr InNode) override;

	// Global Seed
	UPROPERTY(EditAnywhere)
	int32 Gseed = 0;

	// Hierachy
	UPROPERTY(EditAnywhere)
	int32 Hierachy = 0;

	// Size Min
	UPROPERTY(EditAnywhere)
	float SizeMin = 1.000000f;

	// Size Max
	UPROPERTY(EditAnywhere)
	float SizeMax = 2.000000f;

};

class FTcrTreeTrunkSkeleton;
class FTccTransform;
class FTccVex;
class FTcrTreeBranchSkeleton;
class FTccSwitch;
class FTccPolyWire;
class FTccAttribDelete;
class FTcrTreeSimpleLeaf;
class FTccUvTransform;
class FTcrTreeLeafScatter;
class FTccMerge;
class FTccUnpack;
class UNREALTCCPROJECT_API FTcrTreeBigSubbranches : public FTccNode
{
public:
	FTcrTreeBigSubbranches() ;
	virtual ~FTcrTreeBigSubbranches() ;

	virtual void Cook() override;

	// Global Seed
	int32 Gseed = 0;

	// Hierachy
	int32 Hierachy = 0;

	// Size Min
	float SizeMin = 1.000000f;

	// Size Max
	float SizeMax = 2.000000f;

	FTcrTreeTrunkSkeleton* main_branch = nullptr;

	FTccTransform* trunk_laydown = nullptr;

	FTccVex* info_by_hierarchy = nullptr;

	FTcrTreeBranchSkeleton* branch1 = nullptr;

	FTcrTreeBranchSkeleton* branch2 = nullptr;

	FTccSwitch* hierarchy1 = nullptr;

	FTcrTreeBranchSkeleton* branch3 = nullptr;

	FTccSwitch* hierarchy2 = nullptr;

	FTcrTreeBranchSkeleton* branch4 = nullptr;

	FTccPolyWire* tree_skin = nullptr;

	FTccAttribDelete* tcc_attrib_delete1 = nullptr;

	FTcrTreeSimpleLeaf* tcr_tree_simple_leaf1 = nullptr;

	FTccUvTransform* tcc_uv_transform1 = nullptr;

	FTcrTreeLeafScatter* leaf_scatter = nullptr;

	FTccMerge* tcc_merge1 = nullptr;

	FTccUnpack* tcc_unpack1 = nullptr;

};
