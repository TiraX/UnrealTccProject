// Auto generated by UnrealTcc. 

#include "TcrTreeMid02.h"
#include "TcrTreeTrunkGrowth.h"
#include "TcrTreeSkinGrowth.h"
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

 UTcrTreeMid02::UTcrTreeMid02() 
{
}
FTccNodePtr UTcrTreeMid02::CreateNode() 
{
	TSharedPtr<FTcrTreeMid02> Node = MakeShared<FTcrTreeMid02>();
	SyncParams(Node);
	return Node;
}
void UTcrTreeMid02::SyncParams(FTccNodePtr InNode) 
{
	TSharedPtr<FTcrTreeMid02> Node = StaticCastSharedPtr<FTcrTreeMid02>(InNode);
	Node->Pitch0 = Pitch0;
	Node->Pitch1 = Pitch1;
	Node->Curl = Curl;
	Node->CurlFreq = CurlFreq;
	Node->Curl2 = Curl2;
	Node->CurlFreq2 = CurlFreq2;
}

 FTcrTreeMid02::FTcrTreeMid02() 
{
	InitInputsCount(0);
	main_trunk = new FTcrTreeTrunkGrowth();
	main_trunk->InitMultiRefs(true); // RefCount = 2
	trunk_skin = new FTcrTreeSkinGrowth();
	trunk_skin->InitMultiRefs(false); // RefCount = 1
	branch1 = new FTcrTreeBranchGrowth();
	branch1->InitMultiRefs(true); // RefCount = 2
	branch2 = new FTcrTreeBranchGrowth();
	branch2->InitMultiRefs(true); // RefCount = 2
	branch3 = new FTcrTreeBranchGrowth();
	branch3->InitMultiRefs(true); // RefCount = 2
	tcc_merge1 = new FTccMerge();
	tcc_merge1->InitMultiRefs(false); // RefCount = 1
	branch_skin = new FTcrTreeSkinGrowth();
	branch_skin->InitMultiRefs(false); // RefCount = 1
	tcc_merge3 = new FTccMerge();
	tcc_merge3->InitMultiRefs(false); // RefCount = 1
	mi_trunk = new FTccUnrealMaterial();
	mi_trunk->InitMultiRefs(false); // RefCount = 1
	tcc_pack1 = new FTccPack();
	tcc_pack1->InitMultiRefs(false); // RefCount = 1
	tcr_tree_simple_leaf1 = new FTcrTreeSimpleLeaf();
	tcr_tree_simple_leaf1->InitMultiRefs(false); // RefCount = 1
	mi_leaf = new FTccUnrealMaterial();
	mi_leaf->InitMultiRefs(false); // RefCount = 1
	tcr_tree_leaf_scatter1 = new FTcrTreeLeafScatter();
	tcr_tree_leaf_scatter1->InitMultiRefs(false); // RefCount = 1
	tcc_merge2 = new FTccMerge();
	tcc_merge2->InitMultiRefs(false); // RefCount = 1
}
 FTcrTreeMid02::~FTcrTreeMid02() 
{
	delete main_trunk; 
	delete trunk_skin; 
	delete branch1; 
	delete branch2; 
	delete branch3; 
	delete tcc_merge1; 
	delete branch_skin; 
	delete tcc_merge3; 
	delete mi_trunk; 
	delete tcc_pack1; 
	delete tcr_tree_simple_leaf1; 
	delete mi_leaf; 
	delete tcr_tree_leaf_scatter1; 
	delete tcc_merge2; 
}
void FTcrTreeMid02::Cook() 
{
	{
		// Node: main_trunk
		main_trunk->RadiusShape = ETccRampInterp::Bezier;
		main_trunk->RadiusShape.ResizeRampPoints(3);
		main_trunk->RadiusShape.AddRampPoint(0.0000f, 1.0000f);
		main_trunk->RadiusShape.AddRampPoint(0.1456f, 0.6458f);
		main_trunk->RadiusShape.AddRampPoint(1.0000f, 0.5833f);
		main_trunk->TreeAge = 23.000000f;
		main_trunk->MaxAge = 1.200000f;
		main_trunk->SegLen = 0.020000f;
		main_trunk->Radius = 0.120000f;
		main_trunk->CurlForce = 0.164000f;
		main_trunk->CurlFreq = 0.845000f;
		main_trunk->Cook();
	}
	{
		// Node: trunk_skin
		trunk_skin->SetInput(0, main_trunk);
		trunk_skin->Cols = 12;
		trunk_skin->Noise = UTcrTreeSkinGrowth::Worley;
		trunk_skin->Amp = 0.038000f;
		trunk_skin->Freq = FVector3f(1.000000f, 1.000000f, 5.800000f);
		trunk_skin->Cook();
	}
	{
		// Node: branch1
		branch1->SetInput(0, main_trunk);
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
		branch1->RadiusShape = ETccRampInterp::Bezier;
		branch1->RadiusShape.ResizeRampPoints(3);
		branch1->RadiusShape.AddRampPoint(0.0000f, 1.0000f);
		branch1->RadiusShape.AddRampPoint(0.1015f, 0.9375f);
		branch1->RadiusShape.AddRampPoint(1.0000f, 0.5000f);
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
		branch1->MaxCount = 5;
		branch1->SegLen = 0.090000f;
		branch1->StartPercent = 0.950000f;
		branch1->AgeDis = 0.010000f;
		branch1->MaxAge = 0.700000f;
		branch1->Pitch0 = float(Pitch0);
		branch1->Pitch1 = float(Pitch1);
		branch1->Curl = 0.273000f;
		branch1->CurlFreq = 6.500000f;
		branch1->Cook();
	}
	{
		// Node: branch2
		branch2->SetInput(0, branch1);
		branch2->MaxCountRamp = ETccRampInterp::Linear;
		branch2->MaxCountRamp.ResizeRampPoints(2);
		branch2->MaxCountRamp.AddRampPoint(0.0000f, 1.0000f);
		branch2->MaxCountRamp.AddRampPoint(1.0000f, 1.0000f);
		branch2->SegLenRamp = ETccRampInterp::Linear;
		branch2->SegLenRamp.ResizeRampPoints(2);
		branch2->SegLenRamp.AddRampPoint(0.0000f, 1.0000f);
		branch2->SegLenRamp.AddRampPoint(1.0000f, 1.0000f);
		branch2->StartPercentRamp = ETccRampInterp::Linear;
		branch2->StartPercentRamp.ResizeRampPoints(2);
		branch2->StartPercentRamp.AddRampPoint(0.0000f, 1.0000f);
		branch2->StartPercentRamp.AddRampPoint(1.0000f, 1.0000f);
		branch2->AgeDisRamp = ETccRampInterp::Linear;
		branch2->AgeDisRamp.ResizeRampPoints(2);
		branch2->AgeDisRamp.AddRampPoint(0.0000f, 1.0000f);
		branch2->AgeDisRamp.AddRampPoint(1.0000f, 1.0000f);
		branch2->MaxAgeRamp = ETccRampInterp::Linear;
		branch2->MaxAgeRamp.ResizeRampPoints(6);
		branch2->MaxAgeRamp.AddRampPoint(0.0000f, 1.0000f);
		branch2->MaxAgeRamp.AddRampPoint(0.2151f, 1.0000f);
		branch2->MaxAgeRamp.AddRampPoint(0.3244f, 0.6667f);
		branch2->MaxAgeRamp.AddRampPoint(0.6252f, 1.0000f);
		branch2->MaxAgeRamp.AddRampPoint(0.8353f, 0.6667f);
		branch2->MaxAgeRamp.AddRampPoint(1.0000f, 0.8667f);
		branch2->RadiusShape = ETccRampInterp::Bezier;
		branch2->RadiusShape.ResizeRampPoints(3);
		branch2->RadiusShape.AddRampPoint(0.0000f, 1.0000f);
		branch2->RadiusShape.AddRampPoint(0.1408f, 0.5417f);
		branch2->RadiusShape.AddRampPoint(1.0000f, 0.5000f);
		branch2->Pitch0Ramp = ETccRampInterp::Linear;
		branch2->Pitch0Ramp.ResizeRampPoints(2);
		branch2->Pitch0Ramp.AddRampPoint(0.0000f, 1.0000f);
		branch2->Pitch0Ramp.AddRampPoint(1.0000f, 1.0000f);
		branch2->Pitch1Ramp = ETccRampInterp::Linear;
		branch2->Pitch1Ramp.ResizeRampPoints(2);
		branch2->Pitch1Ramp.AddRampPoint(0.0000f, 1.0000f);
		branch2->Pitch1Ramp.AddRampPoint(1.0000f, 1.0000f);
		branch2->Soft = ETccRampInterp::Linear;
		branch2->Soft.ResizeRampPoints(2);
		branch2->Soft.AddRampPoint(0.0000f, 0.0000f);
		branch2->Soft.AddRampPoint(1.0000f, 1.0000f);
		branch2->Gseed = 66;
		branch2->MaxCount = 3;
		branch2->SegLen = 0.090000f;
		branch2->StartPercent = 0.950000f;
		branch2->AgeDis = 0.020000f;
		branch2->MaxAge = 2.640000f;
		branch2->MaxAgeShowAdv = 1;
		branch2->MaxAgeAdv = 1;
		branch2->YawOffsetR = 90.000000f;
		branch2->Yaw = 120.000000f;
		branch2->Pitch1 = 25.000000f;
		branch2->Curl = float(Curl);
		branch2->CurlFreq = float(CurlFreq);
		branch2->Cook();
	}
	{
		// Node: branch3
		branch3->SetInput(0, branch2);
		branch3->MaxCountRamp = ETccRampInterp::Linear;
		branch3->MaxCountRamp.ResizeRampPoints(2);
		branch3->MaxCountRamp.AddRampPoint(0.0000f, 1.0000f);
		branch3->MaxCountRamp.AddRampPoint(1.0000f, 1.0000f);
		branch3->SegLenRamp = ETccRampInterp::Linear;
		branch3->SegLenRamp.ResizeRampPoints(2);
		branch3->SegLenRamp.AddRampPoint(0.0000f, 1.0000f);
		branch3->SegLenRamp.AddRampPoint(1.0000f, 1.0000f);
		branch3->StartPercentRamp = ETccRampInterp::Linear;
		branch3->StartPercentRamp.ResizeRampPoints(2);
		branch3->StartPercentRamp.AddRampPoint(0.0000f, 1.0000f);
		branch3->StartPercentRamp.AddRampPoint(1.0000f, 1.0000f);
		branch3->AgeDisRamp = ETccRampInterp::Linear;
		branch3->AgeDisRamp.ResizeRampPoints(2);
		branch3->AgeDisRamp.AddRampPoint(0.0000f, 1.0000f);
		branch3->AgeDisRamp.AddRampPoint(1.0000f, 1.0000f);
		branch3->MaxAgeRamp = ETccRampInterp::Linear;
		branch3->MaxAgeRamp.ResizeRampPoints(2);
		branch3->MaxAgeRamp.AddRampPoint(0.0000f, 1.0000f);
		branch3->MaxAgeRamp.AddRampPoint(1.0000f, 0.2000f);
		branch3->RadiusShape = ETccRampInterp::Linear;
		branch3->RadiusShape.ResizeRampPoints(2);
		branch3->RadiusShape.AddRampPoint(0.0000f, 1.0000f);
		branch3->RadiusShape.AddRampPoint(1.0000f, 0.6458f);
		branch3->Pitch0Ramp = ETccRampInterp::Linear;
		branch3->Pitch0Ramp.ResizeRampPoints(2);
		branch3->Pitch0Ramp.AddRampPoint(0.0000f, 1.0000f);
		branch3->Pitch0Ramp.AddRampPoint(1.0000f, 1.0000f);
		branch3->Pitch1Ramp = ETccRampInterp::Linear;
		branch3->Pitch1Ramp.ResizeRampPoints(2);
		branch3->Pitch1Ramp.AddRampPoint(0.0000f, 1.0000f);
		branch3->Pitch1Ramp.AddRampPoint(1.0000f, 1.0000f);
		branch3->Soft = ETccRampInterp::Linear;
		branch3->Soft.ResizeRampPoints(2);
		branch3->Soft.AddRampPoint(0.0000f, 0.0000f);
		branch3->Soft.AddRampPoint(1.0000f, 1.0000f);
		branch3->MaxCount = 3;
		branch3->SegLen = 0.090000f;
		branch3->StartPercent = 0.861000f;
		branch3->AgeDis = 0.070000f;
		branch3->MaxAge = 0.850000f;
		branch3->YawOffsetR = 90.000000f;
		branch3->Yaw = 120.000000f;
		branch3->Pitch0 = 25.000000f;
		branch3->Pitch1 = 25.000000f;
		branch3->PitchLerpRange = FVector2f(0.000000f, 0.350000f);
		branch3->Curl = float(Curl2);
		branch3->CurlFreq = float(CurlFreq2);
		branch3->Cook();
	}
	{
		// Node: tcc_merge1
		tcc_merge1->SetInput(0, nullptr);
		tcc_merge1->SetInput(1, branch1);
		tcc_merge1->SetInput(2, branch2);
		tcc_merge1->SetInput(3, branch3);
		tcc_merge1->Cook();
	}
	{
		// Node: branch_skin
		branch_skin->SetInput(0, tcc_merge1);
		branch_skin->Cols = 8;
		branch_skin->Amp = 0.038000f;
		branch_skin->Freq = FVector3f(0.000000f, 0.000000f, 5.800000f);
		branch_skin->Cook();
	}
	{
		// Node: tcc_merge3
		tcc_merge3->SetInput(0, trunk_skin);
		tcc_merge3->SetInput(1, branch_skin);
		tcc_merge3->Cook();
	}
	{
		// Node: mi_trunk
		mi_trunk->SetInput(0, tcc_merge3);
		mi_trunk->MatPath = TEXT("/Game/ForestDemo/Materials/MI_TreeBig_Trunk.MI_TreeBig_Trunk");
		mi_trunk->Cook();
	}
	{
		// Node: tcc_pack1
		tcc_pack1->SetInput(0, mi_trunk);
		tcc_pack1->GeoName = TEXT("mid02_trunk");
		tcc_pack1->Cook();
	}
	{
		// Node: tcr_tree_simple_leaf1
		tcr_tree_simple_leaf1->Shape = ETccRampInterp::Linear;
		tcr_tree_simple_leaf1->Shape.ResizeRampPoints(7);
		tcr_tree_simple_leaf1->Shape.AddRampPoint(0.0000f, 0.0600f);
		tcr_tree_simple_leaf1->Shape.AddRampPoint(0.1035f, 0.7708f);
		tcr_tree_simple_leaf1->Shape.AddRampPoint(0.3536f, 1.0000f);
		tcr_tree_simple_leaf1->Shape.AddRampPoint(0.5488f, 0.8958f);
		tcr_tree_simple_leaf1->Shape.AddRampPoint(0.7952f, 0.5417f);
		tcr_tree_simple_leaf1->Shape.AddRampPoint(0.9337f, 0.1667f);
		tcr_tree_simple_leaf1->Shape.AddRampPoint(1.0000f, 0.0000f);
		tcr_tree_simple_leaf1->Size = FVector2f(0.400000f, 1.250000f);
		tcr_tree_simple_leaf1->Rows = 13;
		tcr_tree_simple_leaf1->Stem = 0.098000f;
		tcr_tree_simple_leaf1->Curl = 15.000000f;
		tcr_tree_simple_leaf1->Cook();
	}
	{
		// Node: mi_leaf
		mi_leaf->SetInput(0, tcr_tree_simple_leaf1);
		mi_leaf->MatPath = TEXT("/Game/ForestDemo/Materials/MI_TreeBig_Leaf.MI_TreeBig_Leaf");
		mi_leaf->Cook();
	}
	{
		// Node: tcr_tree_leaf_scatter1
		tcr_tree_leaf_scatter1->SetInput(0, branch3);
		tcr_tree_leaf_scatter1->SetInput(1, mi_leaf);
		tcr_tree_leaf_scatter1->StartPercentRamp = ETccRampInterp::Linear;
		tcr_tree_leaf_scatter1->StartPercentRamp.ResizeRampPoints(2);
		tcr_tree_leaf_scatter1->StartPercentRamp.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_leaf_scatter1->StartPercentRamp.AddRampPoint(1.0000f, 1.0000f);
		tcr_tree_leaf_scatter1->AgeDisRamp = ETccRampInterp::Linear;
		tcr_tree_leaf_scatter1->AgeDisRamp.ResizeRampPoints(2);
		tcr_tree_leaf_scatter1->AgeDisRamp.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_leaf_scatter1->AgeDisRamp.AddRampPoint(1.0000f, 1.0000f);
		tcr_tree_leaf_scatter1->YawRamp = ETccRampInterp::Linear;
		tcr_tree_leaf_scatter1->YawRamp.ResizeRampPoints(2);
		tcr_tree_leaf_scatter1->YawRamp.AddRampPoint(0.0000f, 0.0000f);
		tcr_tree_leaf_scatter1->YawRamp.AddRampPoint(1.0000f, 1.0000f);
		tcr_tree_leaf_scatter1->PitchRemap = ETccRampInterp::Linear;
		tcr_tree_leaf_scatter1->PitchRemap.ResizeRampPoints(2);
		tcr_tree_leaf_scatter1->PitchRemap.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_leaf_scatter1->PitchRemap.AddRampPoint(1.0000f, 1.0000f);
		tcr_tree_leaf_scatter1->PitchAlongTrunk = ETccRampInterp::Linear;
		tcr_tree_leaf_scatter1->PitchAlongTrunk.ResizeRampPoints(2);
		tcr_tree_leaf_scatter1->PitchAlongTrunk.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_leaf_scatter1->PitchAlongTrunk.AddRampPoint(1.0000f, 1.0000f);
		tcr_tree_leaf_scatter1->ScaleAlongBranch = ETccRampInterp::Linear;
		tcr_tree_leaf_scatter1->ScaleAlongBranch.ResizeRampPoints(2);
		tcr_tree_leaf_scatter1->ScaleAlongBranch.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_leaf_scatter1->ScaleAlongBranch.AddRampPoint(1.0000f, 1.0000f);
		tcr_tree_leaf_scatter1->ScaleAlongTrunk = ETccRampInterp::Linear;
		tcr_tree_leaf_scatter1->ScaleAlongTrunk.ResizeRampPoints(2);
		tcr_tree_leaf_scatter1->ScaleAlongTrunk.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_leaf_scatter1->ScaleAlongTrunk.AddRampPoint(1.0000f, 1.0000f);
		tcr_tree_leaf_scatter1->StartPercent = 0.511000f;
		tcr_tree_leaf_scatter1->AgeDis = 0.067000f;
		tcr_tree_leaf_scatter1->Method = UTcrTreeLeafScatter::AroundBranch;
		tcr_tree_leaf_scatter1->YawOffsetR = 90.000000f;
		tcr_tree_leaf_scatter1->PitchRange = FVector2f(0.000000f, 30.000000f);
		tcr_tree_leaf_scatter1->Scale = 0.500000f;
		tcr_tree_leaf_scatter1->ScaleShowAdv = 1;
		tcr_tree_leaf_scatter1->Cook();
	}
	{
		// Node: tcc_merge2
		tcc_merge2->SetInput(0, tcc_pack1);
		tcc_merge2->SetInput(1, tcr_tree_leaf_scatter1);
		tcc_merge2->Cook();
	}
	SetGeoResult(UTcrTreeMid02::output0, tcc_merge2->GetGeoResult(0));
}

