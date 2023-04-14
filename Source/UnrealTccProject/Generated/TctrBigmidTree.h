// Auto generated by UnrealTcc. 

#pragma once

#include "CoreMinimal.h"
#include "TccNode.h"
#include "TccRecipeTexDefine.h"
#include "TccRamp.h"
#include "TctrBigmidTree.generated.h"

UCLASS()
class UNREALTCCPROJECT_API UTctrBigmidTree : public UTccRecipeTexDefine
{
	GENERATED_BODY()
public:
	enum EOutputs
	{
		OUT_Albedo_Trunk,  // From tct_invert1
		OUT_Normal_Trunk,  // From tct_normal_map1
		OUT_AO_Trunk,  // From tct_ambient_occlusion1
		OUT_Height_Trunk,  // From tct_cells_3
		OUT_Count,
	};
	enum ENetworkNodes
	{
		tct_cells_3,
		tct_normal_map1,
		tct_ambient_occlusion1,
		tct_invert1,
		NumNodes,
	};

	const FString SOutputs[OUT_Count] = 
	{
		TEXT("OUT_Albedo_Trunk"),
		TEXT("OUT_Normal_Trunk"),
		TEXT("OUT_AO_Trunk"),
		TEXT("OUT_Height_Trunk"),
	};

	UTctrBigmidTree() ;

	virtual void UpdateParameters() override;
	virtual void FillComputeGraph(UTccComputeGraph* InComputeGraph,int32 InOutputIndex = -1,TObjectPtr<UTexture2D> OutTexture = nullptr) override;

	// Resolution
	UPROPERTY(EditAnywhere)
	FIntVector2 Res = FIntVector2(2048, 2048);

	// TestSeed
	UPROPERTY(EditAnywhere)
	int32 Seed = 0;

	// TestScale
	UPROPERTY(EditAnywhere)
	int32 Scale = 32;

	// TestIntensity
	UPROPERTY(EditAnywhere)
	float Intensity = 12.000000f;

};

