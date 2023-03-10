// Recipe tcr_tree_skin, auto generated by UnrealTcc.

#include "TcrTreeSkin.h"
#include "Generated/TccTemplates.h"
#include "TccForBlock.h"
#include "TccSwitch.h"
#include "TccAttribute.h"
#include "TccGeometry.h"
#include "Vex.h"
#include "HScript.h"

 UTcrTreeSkin::UTcrTreeSkin() 
{
	MaxInputs = 1;
	tcc_poly_wire1 = UTccNode::CreateNodeWithDefine<UTccPolyWire>(this, TEXT("tcc_poly_wire1"));
}
void UTcrTreeSkin::Execute(UTccNode* InNode) 
{
	{
		tcc_poly_wire1->SetInput(0, InNode->GetInput(0));
		UTccPolyWire* Define1 = Cast<UTccPolyWire>(tcc_poly_wire1->GetDefine()); 
		Define1->EnableRadiusAttrib = 1;
		Define1->RAttrib = TEXT("radius");
		Define1->Divs = 7;
		Define1->Twist = float(Twist);
		Define1->DoUv = 1;
		Define1->UvScale = float(UvScale);
		tcc_poly_wire1->Cook();
	}
	InNode->SetGeoResult(output0, tcc_poly_wire1->GetGeoResult(0));
}

