// Auto generated by UnrealTcc. 

#pragma once

#include "CoreMinimal.h"
#include "TccNode.h"
#include "TccRecipeTexDefine.h"
#include "TccRamp.h"
#include "TctrBigmidTree.generated.h"

class UTctCells1;
UCLASS()
class UNREALTCCPROJECT_API UTctrBigmidTree : public UTccRecipeTexDefine
{
	GENERATED_BODY()
public:
	enum EOutputs
	{
		OUT_Height_Trunk,  // From tct_cells_3
		OUT_Count,
	};

	const FString SOutputs[OUT_Count] = 
	{
		TEXT("OUT_Height_Trunk"),
	};

	UTctrBigmidTree() ;

	virtual void FillComputeGraph(UTccComputeGraph* InComputeGraph) override;

	// Resolution
	UPROPERTY(EditAnywhere)
	FIntVector2 Res = FIntVector2(2048, 2048);

	UPROPERTY(Transient)
	UTctCells1* tct_cells_3 = nullptr;

};

