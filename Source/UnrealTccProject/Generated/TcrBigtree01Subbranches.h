// Recipe tcr_bigtree01_subbranches, auto generated by UnrealTcc.

#pragma once

#include "CoreMinimal.h"
#include "TccNode.h"
#include "TccRecipeDefine.h"
#include "TccRamp.h"
#include "TcrBigtree01Subbranches.generated.h"

UCLASS()
class UNREALTCCPROJECT_API UTcrBigtree01Subbranches : public UTccRecipeDefine
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

	UTcrBigtree01Subbranches() ;

	virtual void Execute(UTccNode* InNode) override;

	// Global Seed
	UPROPERTY(EditAnywhere)
	int32 Gseed = 0;

	UPROPERTY(Transient)
	UTccNode* sub_trunk = nullptr;

	UPROPERTY(Transient)
	UTccNode* trunk_laydown = nullptr;

	UPROPERTY(Transient)
	UTccNode* sub_branch1 = nullptr;

	UPROPERTY(Transient)
	UTccNode* sub_tree_skin = nullptr;

	UPROPERTY(Transient)
	UTccNode* tcr_simple_leaf1 = nullptr;

	UPROPERTY(Transient)
	UTccNode* tcc_uv_transform1 = nullptr;

	UPROPERTY(Transient)
	UTccNode* sub_leaf = nullptr;

	UPROPERTY(Transient)
	UTccNode* tcc_merge1 = nullptr;

	UPROPERTY(Transient)
	UTccNode* tcc_unpack1 = nullptr;

};
