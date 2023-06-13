// Auto generated by UnrealTcc. 

#pragma once

#include "CoreMinimal.h"
#include "TccNode.h"
#include "TccRecipeGeoDefine.h"
#include "TccRamp.h"
#include "TcrTreeSkin.generated.h"

UCLASS()
class UNREALTCCPROJECT_API UTcrTreeSkin : public UTccRecipeGeoDefine
{
	GENERATED_BODY()
public:
	enum EOutputs
	{
		output0,  // From tcc_poly_wire1
		OUT_Count,
	};

	const FString SOutputs[OUT_Count] = 
	{
		TEXT("output0"),
	};

	UTcrTreeSkin() ;

	virtual FTccNodePtr CreateNode() override;
	virtual void SyncParams(FTccNodePtr InNode) override;

	// UVScale, 1 meter equals to ? unit in uv space.
	UPROPERTY(EditAnywhere)
	float UvScale = 1.000000f;

	// Twist
	UPROPERTY(EditAnywhere)
	float Twist = 0.000000f;

};

class FTccPolyWire;
class UNREALTCCPROJECT_API FTcrTreeSkin : public FTccNode
{
public:
	FTcrTreeSkin() ;
	virtual ~FTcrTreeSkin() ;

	virtual void Cook() override;

	// UVScale, 1 meter equals to ? unit in uv space.
	float UvScale = 1.000000f;

	// Twist
	float Twist = 0.000000f;

	FTccPolyWire* tcc_poly_wire1 = nullptr;

};
