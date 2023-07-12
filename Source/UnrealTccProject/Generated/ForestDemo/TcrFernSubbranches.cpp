// Auto generated by UnrealTcc. 

#include "TcrFernSubbranches.h"
#include "TcrTreeTrunkGrowth.h"
#include "TcrTreeBranchGrowth.h"
#include "TcrTreeSimpleLeaf.h"
#include "TcrTreeLeafScatter.h"
#include "Generated/TccTemplates.h"
#include "TccForBlock.h"
#include "TccSwitch.h"
#include "TctTexVex.h"
#include "TccAttribute.h"
#include "TccGeometry.h"
#include "Vex.h"
#include "HScript.h"

 UTcrFernSubbranches::UTcrFernSubbranches() 
{
	RadiusShape.ResizeRampPoints(3);
	RadiusShape.AddRampPoint(0.0000f, 1.0000f);
	RadiusShape.AddRampPoint(0.1506f, 0.2500f);
	RadiusShape.AddRampPoint(1.0000f, 0.2500f);
	Shape.ResizeRampPoints(7);
	Shape.AddRampPoint(0.0000f, 0.0885f);
	Shape.AddRampPoint(0.1035f, 0.7708f);
	Shape.AddRampPoint(0.3643f, 1.0000f);
	Shape.AddRampPoint(0.5442f, 1.0000f);
	Shape.AddRampPoint(0.7965f, 0.8125f);
	Shape.AddRampPoint(0.9296f, 0.4167f);
	Shape.AddRampPoint(1.0000f, 0.0000f);
	ScaleRamp.ResizeRampPoints(5);
	ScaleRamp.AddRampPoint(0.0000f, 0.2333f);
	ScaleRamp.AddRampPoint(0.0638f, 0.7667f);
	ScaleRamp.AddRampPoint(0.1637f, 1.0000f);
	ScaleRamp.AddRampPoint(0.8134f, 1.0000f);
	ScaleRamp.AddRampPoint(0.9935f, 0.6333f);
}
FTccNodePtr UTcrFernSubbranches::CreateNode() 
{
	TSharedPtr<FTcrFernSubbranches> Node = MakeShared<FTcrFernSubbranches>();
	SyncParams(Node);
	return Node;
}
void UTcrFernSubbranches::SyncParams(FTccNodePtr InNode) 
{
	TSharedPtr<FTcrFernSubbranches> Node = StaticCastSharedPtr<FTcrFernSubbranches>(InNode);
	Node->RadiusShape = RadiusShape;
	Node->Shape = Shape;
	Node->ScaleRamp = ScaleRamp;
	Node->Gseed = Gseed;
	Node->TreeAge = TreeAge;
	Node->Pitch0 = Pitch0;
	Node->Pitch1 = Pitch1;
	Node->PitchLerpRange = PitchLerpRange;
	Node->Radius = Radius;
	Node->Size = Size;
	Node->Rows = Rows;
	Node->Cols = Cols;
	Node->Stem = Stem;
	Node->Bend = Bend;
	Node->Curl = Curl;
	Node->StartPercent = StartPercent;
	Node->AgeDis = AgeDis;
	Node->DropR = DropR;
	Node->Mirror = Mirror;
	Node->Yaw = Yaw;
	Node->PitchR = PitchR;
	Node->RollR = RollR;
	Node->Scale = Scale;
	Node->ScaleShowAdv = ScaleShowAdv;
}

 FTcrFernSubbranches::FTcrFernSubbranches() 
{
	InitInputsCount(1);
	trunk_dummy = new FTcrTreeTrunkGrowth();
	trunk_dummy->InitMultiRefs(false); // RefCount = 1
	branch1 = new FTcrTreeBranchGrowth();
	branch1->InitMultiRefs(true); // RefCount = 2
	fern_skin = new FTccPolyWire();
	fern_skin->InitMultiRefs(false); // RefCount = 1
	mi_subbranch = new FTccUnrealMaterial();
	mi_subbranch->InitMultiRefs(false); // RefCount = 1
	pack_branch = new FTccPack();
	pack_branch->InitMultiRefs(false); // RefCount = 1
	fern_leaf = new FTcrTreeSimpleLeaf();
	fern_leaf->InitMultiRefs(false); // RefCount = 1
	mi_leaf = new FTccUnrealMaterial();
	mi_leaf->InitMultiRefs(false); // RefCount = 1
	fern_leaf_scatter = new FTcrTreeLeafScatter();
	fern_leaf_scatter->InitMultiRefs(false); // RefCount = 1
	tcc_merge0 = new FTccMerge();
	tcc_merge0->InitMultiRefs(false); // RefCount = 1
	pack_subbranch = new FTccPack();
	pack_subbranch->InitMultiRefs(false); // RefCount = 1
	RadiusShape.ResizeRampPoints(3);
	RadiusShape.AddRampPoint(0.0000f, 1.0000f);
	RadiusShape.AddRampPoint(0.1506f, 0.2500f);
	RadiusShape.AddRampPoint(1.0000f, 0.2500f);
	Shape.ResizeRampPoints(7);
	Shape.AddRampPoint(0.0000f, 0.0885f);
	Shape.AddRampPoint(0.1035f, 0.7708f);
	Shape.AddRampPoint(0.3643f, 1.0000f);
	Shape.AddRampPoint(0.5442f, 1.0000f);
	Shape.AddRampPoint(0.7965f, 0.8125f);
	Shape.AddRampPoint(0.9296f, 0.4167f);
	Shape.AddRampPoint(1.0000f, 0.0000f);
	ScaleRamp.ResizeRampPoints(5);
	ScaleRamp.AddRampPoint(0.0000f, 0.2333f);
	ScaleRamp.AddRampPoint(0.0638f, 0.7667f);
	ScaleRamp.AddRampPoint(0.1637f, 1.0000f);
	ScaleRamp.AddRampPoint(0.8134f, 1.0000f);
	ScaleRamp.AddRampPoint(0.9935f, 0.6333f);
}
 FTcrFernSubbranches::~FTcrFernSubbranches() 
{
	delete trunk_dummy; 
	delete branch1; 
	delete fern_skin; 
	delete mi_subbranch; 
	delete pack_branch; 
	delete fern_leaf; 
	delete mi_leaf; 
	delete fern_leaf_scatter; 
	delete tcc_merge0; 
	delete pack_subbranch; 
}
void FTcrFernSubbranches::Cook() 
{
	{
		// Node: trunk_dummy
		trunk_dummy->RadiusShape = ETccRampInterp::Bezier;
		trunk_dummy->RadiusShape.ResizeRampPoints(3);
		trunk_dummy->RadiusShape.AddRampPoint(0.0000f, 1.0000f);
		trunk_dummy->RadiusShape.AddRampPoint(0.1500f, 0.5000f);
		trunk_dummy->RadiusShape.AddRampPoint(1.0000f, 0.5000f);
		trunk_dummy->TreeAge = float(TreeAge);
		trunk_dummy->MaxAge = 0.100000f;
		trunk_dummy->Radius = float(Radius);
		trunk_dummy->Cook();
	}
	{
		// Node: branch1
		branch1->SetInput(0, trunk_dummy);
		branch1->MaxCountRamp = ETccRampInterp::Linear;
		branch1->MaxCountRamp.ResizeRampPoints(2);
		branch1->MaxCountRamp.AddRampPoint(0.0000f, 1.0000f);
		branch1->MaxCountRamp.AddRampPoint(1.0000f, 1.0000f);
		branch1->SegLenRamp = ETccRampInterp::Linear;
		branch1->SegLenRamp.ResizeRampPoints(2);
		branch1->SegLenRamp.AddRampPoint(0.0000f, 1.0000f);
		branch1->SegLenRamp.AddRampPoint(1.0000f, 1.0000f);
		branch1->StartPercentRamp = ETccRampInterp::Linear;
		branch1->StartPercentRamp.ResizeRampPoints(2);
		branch1->StartPercentRamp.AddRampPoint(0.0000f, 1.0000f);
		branch1->StartPercentRamp.AddRampPoint(1.0000f, 1.0000f);
		branch1->AgeDisRamp = ETccRampInterp::Linear;
		branch1->AgeDisRamp.ResizeRampPoints(2);
		branch1->AgeDisRamp.AddRampPoint(0.0000f, 1.0000f);
		branch1->AgeDisRamp.AddRampPoint(1.0000f, 1.0000f);
		branch1->MaxAgeRamp = ETccRampInterp::Linear;
		branch1->MaxAgeRamp.ResizeRampPoints(2);
		branch1->MaxAgeRamp.AddRampPoint(0.0000f, 1.0000f);
		branch1->MaxAgeRamp.AddRampPoint(1.0000f, 0.2000f);
		branch1->RadiusShape = FTccRampFloat(RadiusShape);
		branch1->Pitch0Ramp = ETccRampInterp::Linear;
		branch1->Pitch0Ramp.ResizeRampPoints(2);
		branch1->Pitch0Ramp.AddRampPoint(0.0000f, 1.0000f);
		branch1->Pitch0Ramp.AddRampPoint(1.0000f, 1.0000f);
		branch1->Pitch1Ramp = ETccRampInterp::Linear;
		branch1->Pitch1Ramp.ResizeRampPoints(2);
		branch1->Pitch1Ramp.AddRampPoint(0.0000f, 1.0000f);
		branch1->Pitch1Ramp.AddRampPoint(1.0000f, 1.0000f);
		branch1->Soft = ETccRampInterp::Linear;
		branch1->Soft.ResizeRampPoints(2);
		branch1->Soft.AddRampPoint(0.0000f, 0.0000f);
		branch1->Soft.AddRampPoint(1.0000f, 1.0000f);
		branch1->Gseed = int32(Gseed);
		branch1->MaxCount = 1;
		branch1->MaxAge = float(TreeAge);
		branch1->Pitch0 = float(Pitch0);
		branch1->Pitch1 = float(Pitch1);
		branch1->PitchLerpRange = FVector2f(PitchLerpRange.X, PitchLerpRange.Y);
		branch1->Curl = 0.524000f;
		branch1->CurlFreq = 0.342000f;
		branch1->Cook();
	}
	{
		// Node: fern_skin
		fern_skin->SetInput(0, branch1);
		fern_skin->R = 0.020000f;
		fern_skin->EnableRadiusAttrib = 1;
		fern_skin->RAttrib = TEXT("radius");
		fern_skin->Divs = 6;
		fern_skin->Cook();
	}
	{
		// Node: mi_subbranch
		mi_subbranch->SetInput(0, fern_skin);
		mi_subbranch->MatPath = TEXT("/Game/ForestDemo/Materials/MI_TreeBig_Trunk.MI_TreeBig_Trunk");
		mi_subbranch->Cook();
	}
	{
		// Node: pack_branch
		pack_branch->SetInput(0, mi_subbranch);
		pack_branch->GeoName = TEXT("fern_branch");
		pack_branch->Cook();
	}
	{
		// Node: fern_leaf
		fern_leaf->Shape = FTccRampFloat(Shape);
		fern_leaf->Size = FVector2f(Size.X, Size.Y);
		fern_leaf->Rows = int32(Rows);
		fern_leaf->Cols = int32(Cols);
		fern_leaf->Stem = float(Stem);
		fern_leaf->Bend = float(Bend);
		fern_leaf->Curl = float(Curl);
		fern_leaf->Cook();
	}
	{
		// Node: mi_leaf
		mi_leaf->SetInput(0, fern_leaf);
		mi_leaf->MatPath = TEXT("/Game/ForestDemo/Materials/MI_TreeBig_Leaf.MI_TreeBig_Leaf");
		mi_leaf->Cook();
	}
	{
		// Node: fern_leaf_scatter
		fern_leaf_scatter->SetInput(0, branch1);
		fern_leaf_scatter->SetInput(1, mi_leaf);
		fern_leaf_scatter->StartPercentRamp = ETccRampInterp::Linear;
		fern_leaf_scatter->StartPercentRamp.ResizeRampPoints(2);
		fern_leaf_scatter->StartPercentRamp.AddRampPoint(0.0000f, 1.0000f);
		fern_leaf_scatter->StartPercentRamp.AddRampPoint(1.0000f, 1.0000f);
		fern_leaf_scatter->AgeDisRamp = ETccRampInterp::Linear;
		fern_leaf_scatter->AgeDisRamp.ResizeRampPoints(2);
		fern_leaf_scatter->AgeDisRamp.AddRampPoint(0.0000f, 1.0000f);
		fern_leaf_scatter->AgeDisRamp.AddRampPoint(1.0000f, 1.0000f);
		fern_leaf_scatter->YawRamp = ETccRampInterp::Linear;
		fern_leaf_scatter->YawRamp.ResizeRampPoints(2);
		fern_leaf_scatter->YawRamp.AddRampPoint(0.0000f, 0.0000f);
		fern_leaf_scatter->YawRamp.AddRampPoint(1.0000f, 1.0000f);
		fern_leaf_scatter->PitchRemap = ETccRampInterp::Linear;
		fern_leaf_scatter->PitchRemap.ResizeRampPoints(2);
		fern_leaf_scatter->PitchRemap.AddRampPoint(0.0000f, 0.0000f);
		fern_leaf_scatter->PitchRemap.AddRampPoint(1.0000f, 1.0000f);
		fern_leaf_scatter->PitchAlongTrunk = ETccRampInterp::Linear;
		fern_leaf_scatter->PitchAlongTrunk.ResizeRampPoints(2);
		fern_leaf_scatter->PitchAlongTrunk.AddRampPoint(0.0000f, 1.0000f);
		fern_leaf_scatter->PitchAlongTrunk.AddRampPoint(1.0000f, 1.0000f);
		fern_leaf_scatter->ScaleAlongBranch = FTccRampFloat(ScaleRamp);
		fern_leaf_scatter->ScaleAlongTrunk = ETccRampInterp::Linear;
		fern_leaf_scatter->ScaleAlongTrunk.ResizeRampPoints(2);
		fern_leaf_scatter->ScaleAlongTrunk.AddRampPoint(0.0000f, 1.0000f);
		fern_leaf_scatter->ScaleAlongTrunk.AddRampPoint(1.0000f, 1.0000f);
		fern_leaf_scatter->Gseed = int32(Gseed);
		fern_leaf_scatter->StartPercent = float(StartPercent);
		fern_leaf_scatter->AgeDis = float(AgeDis);
		fern_leaf_scatter->Mirror = int32(Mirror);
		fern_leaf_scatter->DropR = float(DropR);
		fern_leaf_scatter->Yaw = FVector2f(Yaw.X, Yaw.Y);
		fern_leaf_scatter->PitchR = float(PitchR);
		fern_leaf_scatter->RollR = float(RollR);
		fern_leaf_scatter->PitchRange = FVector2f(63.000000f, -54.000000f);
		fern_leaf_scatter->Scale = float(Scale);
		fern_leaf_scatter->ScaleShowAdv = int32(ScaleShowAdv);
		fern_leaf_scatter->Cook();
	}
	{
		// Node: tcc_merge0
		tcc_merge0->SetInput(0, pack_branch);
		tcc_merge0->SetInput(1, fern_leaf_scatter);
		tcc_merge0->Cook();
	}
	{
		// Node: pack_subbranch
		pack_subbranch->SetInput(0, tcc_merge0);
		pack_subbranch->GeoName = TEXT("fern_subbranch");
		pack_subbranch->Cook();
	}
	SetGeoResult(UTcrFernSubbranches::output0, pack_subbranch->GetGeoResult(0));
}

