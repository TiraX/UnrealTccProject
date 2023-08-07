// Auto generated by UnrealTcc. 

#include "TcrTreeShort04.h"
#include "TcrTreeTrunkGrowth.h"
#include "TcrTreeBranchGrowth.h"
#include "TcrTreeSkinGrowth.h"
#include "TcrTreeSimpleLeaf.h"
#include "TcrTreeLeafScatter.h"
#include "TcrSimpleFruit.h"
#include "Generated/TccTemplates.h"
#include "TccForBlock.h"
#include "TccSwitch.h"
#include "TctTexVex.h"
#include "TccAttribute.h"
#include "TccGeometry.h"
#include "Vex.h"
#include "HScript.h"

 UTcrTreeShort04::UTcrTreeShort04() 
{
}
FTccNodePtr UTcrTreeShort04::CreateNode() 
{
	TSharedPtr<FTcrTreeShort04> Node = MakeShared<FTcrTreeShort04>();
	SyncParams(Node);
	return Node;
}
void UTcrTreeShort04::SyncParams(FTccNodePtr InNode) 
{
	TSharedPtr<FTcrTreeShort04> Node = StaticCastSharedPtr<FTcrTreeShort04>(InNode);
}

 FTcrTreeShort04::FTcrTreeShort04() 
{
	InitInputsCount(0);
	short04_trunk = new FTcrTreeTrunkGrowth();
	short04_trunk->InitMultiRefs(true); // RefCount = 5
	branch_fruit = new FTcrTreeBranchGrowth();
	branch_fruit->InitMultiRefs(true); // RefCount = 2
	tcc_merge2 = new FTccMerge();
	tcc_merge2->InitMultiRefs(false); // RefCount = 1
	skin = new FTcrTreeSkinGrowth();
	skin->InitMultiRefs(false); // RefCount = 1
	mi_trunk = new FTccUnrealMaterial();
	mi_trunk->InitMultiRefs(false); // RefCount = 1
	tcc_pack3 = new FTccPack();
	tcc_pack3->InitMultiRefs(false); // RefCount = 1
	branch1 = new FTcrTreeBranchGrowth();
	branch1->InitMultiRefs(false); // RefCount = 1
	leaf1 = new FTcrTreeSimpleLeaf();
	leaf1->InitMultiRefs(false); // RefCount = 1
	mi_leaf2 = new FTccUnrealMaterial();
	mi_leaf2->InitMultiRefs(false); // RefCount = 1
	tcc_pack1 = new FTccPack();
	tcc_pack1->InitMultiRefs(false); // RefCount = 1
	tcc_vex1 = new FTccVex();
	tcc_vex1->InitMultiRefs(false); // RefCount = 1
	leaf2 = new FTcrTreeSimpleLeaf();
	leaf2->InitMultiRefs(false); // RefCount = 1
	mi_leaf3 = new FTccUnrealMaterial();
	mi_leaf3->InitMultiRefs(false); // RefCount = 1
	tcc_pack2 = new FTccPack();
	tcc_pack2->InitMultiRefs(false); // RefCount = 1
	tcc_vex2 = new FTccVex();
	tcc_vex2->InitMultiRefs(false); // RefCount = 1
	tcc_merge1 = new FTccMerge();
	tcc_merge1->InitMultiRefs(false); // RefCount = 1
	leaves1 = new FTcrTreeLeafScatter();
	leaves1->InitMultiRefs(false); // RefCount = 1
	leaf3 = new FTcrTreeSimpleLeaf();
	leaf3->InitMultiRefs(false); // RefCount = 1
	mi_leaf1 = new FTccUnrealMaterial();
	mi_leaf1->InitMultiRefs(false); // RefCount = 1
	leaves2 = new FTcrTreeLeafScatter();
	leaves2->InitMultiRefs(false); // RefCount = 1
	leaf4 = new FTcrTreeSimpleLeaf();
	leaf4->InitMultiRefs(false); // RefCount = 1
	mi_leaf = new FTccUnrealMaterial();
	mi_leaf->InitMultiRefs(false); // RefCount = 1
	leaves3 = new FTcrTreeLeafScatter();
	leaves3->InitMultiRefs(false); // RefCount = 1
	fruit = new FTcrSimpleFruit();
	fruit->InitMultiRefs(false); // RefCount = 1
	mi_fruit = new FTccUnrealMaterial();
	mi_fruit->InitMultiRefs(false); // RefCount = 1
	fruit_scatter = new FTcrTreeLeafScatter();
	fruit_scatter->InitMultiRefs(false); // RefCount = 1
	tcc_merge3 = new FTccMerge();
	tcc_merge3->InitMultiRefs(false); // RefCount = 1
}
 FTcrTreeShort04::~FTcrTreeShort04() 
{
	delete short04_trunk; 
	delete branch_fruit; 
	delete tcc_merge2; 
	delete skin; 
	delete mi_trunk; 
	delete tcc_pack3; 
	delete branch1; 
	delete leaf1; 
	delete mi_leaf2; 
	delete tcc_pack1; 
	delete tcc_vex1; 
	delete leaf2; 
	delete mi_leaf3; 
	delete tcc_pack2; 
	delete tcc_vex2; 
	delete tcc_merge1; 
	delete leaves1; 
	delete leaf3; 
	delete mi_leaf1; 
	delete leaves2; 
	delete leaf4; 
	delete mi_leaf; 
	delete leaves3; 
	delete fruit; 
	delete mi_fruit; 
	delete fruit_scatter; 
	delete tcc_merge3; 
}
void FTcrTreeShort04::Cook() 
{
	{
		// Node: short04_trunk
		short04_trunk->RadiusShape = ETccRampInterp::Bezier;
		short04_trunk->RadiusShape.ResizeRampPoints(3);
		short04_trunk->RadiusShape.AddRampPoint(0.0000f, 1.0000f);
		short04_trunk->RadiusShape.AddRampPoint(0.1500f, 0.5000f);
		short04_trunk->RadiusShape.AddRampPoint(1.0000f, 0.5000f);
		short04_trunk->TreeAge = 6.590000f;
		short04_trunk->MaxAge = 1.600000f;
		short04_trunk->SegLen = 0.060000f;
		short04_trunk->Radius = 0.100000f;
		short04_trunk->CurlForce = 0.139000f;
		short04_trunk->CurlFreq = 0.555000f;
		short04_trunk->Cook();
	}
	{
		// Node: branch_fruit
		branch_fruit->SetInput(0, short04_trunk);
		branch_fruit->MaxCountRamp = ETccRampInterp::Linear;
		branch_fruit->MaxCountRamp.ResizeRampPoints(2);
		branch_fruit->MaxCountRamp.AddRampPoint(0.0000f, 1.0000f);
		branch_fruit->MaxCountRamp.AddRampPoint(1.0000f, 1.0000f);
		branch_fruit->SegLenRamp = ETccRampInterp::Linear;
		branch_fruit->SegLenRamp.ResizeRampPoints(2);
		branch_fruit->SegLenRamp.AddRampPoint(0.0000f, 1.0000f);
		branch_fruit->SegLenRamp.AddRampPoint(1.0000f, 1.0000f);
		branch_fruit->StartPercentRamp = ETccRampInterp::Linear;
		branch_fruit->StartPercentRamp.ResizeRampPoints(2);
		branch_fruit->StartPercentRamp.AddRampPoint(0.0000f, 1.0000f);
		branch_fruit->StartPercentRamp.AddRampPoint(1.0000f, 1.0000f);
		branch_fruit->AgeDisRamp = ETccRampInterp::Linear;
		branch_fruit->AgeDisRamp.ResizeRampPoints(2);
		branch_fruit->AgeDisRamp.AddRampPoint(0.0000f, 1.0000f);
		branch_fruit->AgeDisRamp.AddRampPoint(1.0000f, 1.0000f);
		branch_fruit->MaxAgeRamp = ETccRampInterp::Linear;
		branch_fruit->MaxAgeRamp.ResizeRampPoints(7);
		branch_fruit->MaxAgeRamp.AddRampPoint(0.0000f, 1.0000f);
		branch_fruit->MaxAgeRamp.AddRampPoint(0.1154f, 0.7333f);
		branch_fruit->MaxAgeRamp.AddRampPoint(0.2196f, 1.0000f);
		branch_fruit->MaxAgeRamp.AddRampPoint(0.3777f, 0.9333f);
		branch_fruit->MaxAgeRamp.AddRampPoint(0.6161f, 1.0000f);
		branch_fruit->MaxAgeRamp.AddRampPoint(0.8281f, 0.7333f);
		branch_fruit->MaxAgeRamp.AddRampPoint(1.0000f, 1.0000f);
		branch_fruit->RadiusShape = ETccRampInterp::Bezier;
		branch_fruit->RadiusShape.ResizeRampPoints(3);
		branch_fruit->RadiusShape.AddRampPoint(0.0000f, 0.4583f);
		branch_fruit->RadiusShape.AddRampPoint(0.1506f, 0.1000f);
		branch_fruit->RadiusShape.AddRampPoint(1.0000f, 0.1000f);
		branch_fruit->Pitch0Ramp = ETccRampInterp::Linear;
		branch_fruit->Pitch0Ramp.ResizeRampPoints(2);
		branch_fruit->Pitch0Ramp.AddRampPoint(0.0000f, 1.0000f);
		branch_fruit->Pitch0Ramp.AddRampPoint(1.0000f, 1.0000f);
		branch_fruit->Pitch1Ramp = ETccRampInterp::Linear;
		branch_fruit->Pitch1Ramp.ResizeRampPoints(2);
		branch_fruit->Pitch1Ramp.AddRampPoint(0.0000f, 1.0000f);
		branch_fruit->Pitch1Ramp.AddRampPoint(1.0000f, 1.0000f);
		branch_fruit->Soft = ETccRampInterp::Linear;
		branch_fruit->Soft.ResizeRampPoints(2);
		branch_fruit->Soft.AddRampPoint(0.0000f, 0.0000f);
		branch_fruit->Soft.AddRampPoint(1.0000f, 1.0000f);
		branch_fruit->MaxCount = 6;
		branch_fruit->StartPercent = 0.982000f;
		branch_fruit->AgeDis = 0.006000f;
		branch_fruit->MaxAge = 0.390000f;
		branch_fruit->MaxAgeShowAdv = 1;
		branch_fruit->MaxAgeAdv = 1;
		branch_fruit->Pitch0 = 37.099998f;
		branch_fruit->Pitch1 = 1.000000f;
		branch_fruit->PitchLerpRange = FVector2f(0.000000f, 0.230000f);
		branch_fruit->Cook();
	}
	{
		// Node: tcc_merge2
		tcc_merge2->SetInput(0, short04_trunk);
		tcc_merge2->SetInput(1, branch_fruit);
		tcc_merge2->Cook();
	}
	{
		// Node: skin
		skin->SetInput(0, tcc_merge2);
		skin->Cook();
	}
	{
		// Node: mi_trunk
		mi_trunk->SetInput(0, skin);
		mi_trunk->MatPath = TEXT("/Game/ForestDemo/Materials/MI_TreeBig_Trunk.MI_TreeBig_Trunk");
		mi_trunk->Cook();
	}
	{
		// Node: tcc_pack3
		tcc_pack3->SetInput(0, mi_trunk);
		tcc_pack3->GeoName = TEXT("short04_trunk");
		tcc_pack3->Cook();
	}
	{
		// Node: branch1
		branch1->SetInput(0, short04_trunk);
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
		branch1->MaxAgeRamp.ResizeRampPoints(4);
		branch1->MaxAgeRamp.AddRampPoint(0.0000f, 1.0000f);
		branch1->MaxAgeRamp.AddRampPoint(0.1267f, 0.8333f);
		branch1->MaxAgeRamp.AddRampPoint(0.2949f, 0.4667f);
		branch1->MaxAgeRamp.AddRampPoint(1.0000f, 0.2000f);
		branch1->RadiusShape = ETccRampInterp::Bezier;
		branch1->RadiusShape.ResizeRampPoints(3);
		branch1->RadiusShape.AddRampPoint(0.0000f, 1.0000f);
		branch1->RadiusShape.AddRampPoint(0.1506f, 0.2500f);
		branch1->RadiusShape.AddRampPoint(1.0000f, 0.2500f);
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
		branch1->MaxCount = 93;
		branch1->StartPercent = 0.046000f;
		branch1->AgeDis = 0.013000f;
		branch1->MaxAge = 0.400000f;
		branch1->MaxAgeShowAdv = 1;
		branch1->MaxAgeAdv = 1;
		branch1->YawR = 6.200000f;
		branch1->Pitch0 = 75.000000f;
		branch1->Cook();
	}
	{
		// Node: leaf1
		leaf1->Shape = ETccRampInterp::Bezier;
		leaf1->Shape.ResizeRampPoints(8);
		leaf1->Shape.AddRampPoint(0.0000f, 0.0365f);
		leaf1->Shape.AddRampPoint(0.0318f, 0.5181f);
		leaf1->Shape.AddRampPoint(0.1001f, 0.8316f);
		leaf1->Shape.AddRampPoint(0.2758f, 0.9870f);
		leaf1->Shape.AddRampPoint(0.5187f, 1.0000f);
		leaf1->Shape.AddRampPoint(0.7037f, 0.3542f);
		leaf1->Shape.AddRampPoint(0.8936f, 0.1500f);
		leaf1->Shape.AddRampPoint(1.0000f, 0.0000f);
		leaf1->Rows = 20;
		leaf1->Curl = -20.400000f;
		leaf1->Cook();
	}
	{
		// Node: mi_leaf2
		mi_leaf2->SetInput(0, leaf1);
		mi_leaf2->MatPath = TEXT("/Game/ForestDemo/Materials/MI_TreeBig_Leaf.MI_TreeBig_Leaf");
		mi_leaf2->Cook();
	}
	{
		// Node: tcc_pack1
		tcc_pack1->SetInput(0, mi_leaf2);
		tcc_pack1->GeoName = TEXT("leaf1");
		tcc_pack1->Cook();
	}
	{
		// Node: tcc_vex1
		tcc_vex1->SetInput(0, tcc_pack1);
		tcc_vex1->Cook();
		{
			FTccGeometryPtr Geo0 = tcc_vex1->GetGeoRef(0);
			FTccAttribPtr attr_instance_id = Geo0->AddPackedGeoAttrib("instance_id", ETccAttribType::I);
			const int32 _numpacked = Geo0->GetNumPackedGeos();
			for(int32 i = 0; i < _numpacked; i++)
			{
				const int32 _packednum = i;
				int32& _instance_id = attr_instance_id->GetData<int32>()[i];
				_instance_id = 0;
			}
		}
	}
	{
		// Node: leaf2
		leaf2->Shape = ETccRampInterp::Bezier;
		leaf2->Shape.ResizeRampPoints(8);
		leaf2->Shape.AddRampPoint(0.0000f, 0.0365f);
		leaf2->Shape.AddRampPoint(0.0318f, 0.5181f);
		leaf2->Shape.AddRampPoint(0.1001f, 0.8316f);
		leaf2->Shape.AddRampPoint(0.2758f, 0.9870f);
		leaf2->Shape.AddRampPoint(0.5187f, 1.0000f);
		leaf2->Shape.AddRampPoint(0.7062f, 0.7500f);
		leaf2->Shape.AddRampPoint(0.9274f, 0.3125f);
		leaf2->Shape.AddRampPoint(1.0000f, 0.0000f);
		leaf2->Size = FVector2f(0.430000f, 0.500000f);
		leaf2->Rows = 20;
		leaf2->Curl = -8.500000f;
		leaf2->Cook();
	}
	{
		// Node: mi_leaf3
		mi_leaf3->SetInput(0, leaf2);
		mi_leaf3->MatPath = TEXT("/Game/ForestDemo/Materials/MI_TreeBig_Leaf.MI_TreeBig_Leaf");
		mi_leaf3->Cook();
	}
	{
		// Node: tcc_pack2
		tcc_pack2->SetInput(0, mi_leaf3);
		tcc_pack2->GeoName = TEXT("leaf2");
		tcc_pack2->Cook();
	}
	{
		// Node: tcc_vex2
		tcc_vex2->SetInput(0, tcc_pack2);
		tcc_vex2->Cook();
		{
			FTccGeometryPtr Geo0 = tcc_vex2->GetGeoRef(0);
			FTccAttribPtr attr_instance_id = Geo0->AddPackedGeoAttrib("instance_id", ETccAttribType::I);
			const int32 _numpacked = Geo0->GetNumPackedGeos();
			for(int32 i = 0; i < _numpacked; i++)
			{
				const int32 _packednum = i;
				int32& _instance_id = attr_instance_id->GetData<int32>()[i];
				_instance_id = 1;
			}
		}
	}
	{
		// Node: tcc_merge1
		tcc_merge1->SetInput(0, tcc_vex1);
		tcc_merge1->SetInput(1, tcc_vex2);
		tcc_merge1->Cook();
	}
	{
		// Node: leaves1
		leaves1->SetInput(0, branch1);
		leaves1->SetInput(1, tcc_merge1);
		leaves1->StartPercentRamp = ETccRampInterp::Linear;
		leaves1->StartPercentRamp.ResizeRampPoints(2);
		leaves1->StartPercentRamp.AddRampPoint(0.0000f, 1.0000f);
		leaves1->StartPercentRamp.AddRampPoint(1.0000f, 1.0000f);
		leaves1->AgeDisRamp = ETccRampInterp::Linear;
		leaves1->AgeDisRamp.ResizeRampPoints(2);
		leaves1->AgeDisRamp.AddRampPoint(0.0000f, 1.0000f);
		leaves1->AgeDisRamp.AddRampPoint(1.0000f, 1.0000f);
		leaves1->YawRamp = ETccRampInterp::Linear;
		leaves1->YawRamp.ResizeRampPoints(2);
		leaves1->YawRamp.AddRampPoint(0.0000f, 0.0000f);
		leaves1->YawRamp.AddRampPoint(1.0000f, 1.0000f);
		leaves1->PitchRemap = ETccRampInterp::Linear;
		leaves1->PitchRemap.ResizeRampPoints(2);
		leaves1->PitchRemap.AddRampPoint(0.0000f, 0.0000f);
		leaves1->PitchRemap.AddRampPoint(1.0000f, 1.0000f);
		leaves1->PitchAlongTrunk = ETccRampInterp::Linear;
		leaves1->PitchAlongTrunk.ResizeRampPoints(2);
		leaves1->PitchAlongTrunk.AddRampPoint(0.0000f, 1.0000f);
		leaves1->PitchAlongTrunk.AddRampPoint(1.0000f, 1.0000f);
		leaves1->ScaleAlongBranch = ETccRampInterp::Linear;
		leaves1->ScaleAlongBranch.ResizeRampPoints(2);
		leaves1->ScaleAlongBranch.AddRampPoint(0.0000f, 1.0000f);
		leaves1->ScaleAlongBranch.AddRampPoint(1.0000f, 1.0000f);
		leaves1->ScaleAlongTrunk = ETccRampInterp::Linear;
		leaves1->ScaleAlongTrunk.ResizeRampPoints(7);
		leaves1->ScaleAlongTrunk.AddRampPoint(0.0000f, 1.0000f);
		leaves1->ScaleAlongTrunk.AddRampPoint(0.3358f, 1.0000f);
		leaves1->ScaleAlongTrunk.AddRampPoint(0.4551f, 0.7333f);
		leaves1->ScaleAlongTrunk.AddRampPoint(0.5338f, 0.7333f);
		leaves1->ScaleAlongTrunk.AddRampPoint(0.6064f, 0.9000f);
		leaves1->ScaleAlongTrunk.AddRampPoint(0.6679f, 0.6667f);
		leaves1->ScaleAlongTrunk.AddRampPoint(1.0000f, 0.6500f);
		leaves1->StartPercent = 0.995000f;
		leaves1->UseInstanceId = UTcrTreeLeafScatter::Random;
		leaves1->Method = UTcrTreeLeafScatter::AroundBranch;
		leaves1->YawOffset = -90.000000f;
		leaves1->YawOffsetR = 10.100000f;
		leaves1->PitchRange = FVector2f(28.000000f, 0.000000f);
		leaves1->Scale = 0.490000f;
		leaves1->ScaleShowAdv = 1;
		leaves1->Cook();
	}
	{
		// Node: leaf3
		leaf3->Shape = ETccRampInterp::Bezier;
		leaf3->Shape.ResizeRampPoints(7);
		leaf3->Shape.AddRampPoint(0.0000f, 0.0365f);
		leaf3->Shape.AddRampPoint(0.0242f, 1.0000f);
		leaf3->Shape.AddRampPoint(0.1004f, 1.0000f);
		leaf3->Shape.AddRampPoint(0.4075f, 1.0000f);
		leaf3->Shape.AddRampPoint(0.7013f, 0.8333f);
		leaf3->Shape.AddRampPoint(0.8996f, 0.0833f);
		leaf3->Shape.AddRampPoint(1.0000f, 0.0000f);
		leaf3->Size = FVector2f(0.500000f, 1.000000f);
		leaf3->Rows = 20;
		leaf3->Bend = -61.900002f;
		leaf3->BendOffset = 0.201000f;
		leaf3->Curl = -20.400000f;
		leaf3->Cook();
	}
	{
		// Node: mi_leaf1
		mi_leaf1->SetInput(0, leaf3);
		mi_leaf1->MatPath = TEXT("/Game/ForestDemo/Materials/MI_TreeBig_Leaf.MI_TreeBig_Leaf");
		mi_leaf1->Cook();
	}
	{
		// Node: leaves2
		leaves2->SetInput(0, short04_trunk);
		leaves2->SetInput(1, mi_leaf1);
		leaves2->StartPercentRamp = ETccRampInterp::Linear;
		leaves2->StartPercentRamp.ResizeRampPoints(2);
		leaves2->StartPercentRamp.AddRampPoint(0.0000f, 1.0000f);
		leaves2->StartPercentRamp.AddRampPoint(1.0000f, 1.0000f);
		leaves2->AgeDisRamp = ETccRampInterp::Linear;
		leaves2->AgeDisRamp.ResizeRampPoints(2);
		leaves2->AgeDisRamp.AddRampPoint(0.0000f, 1.0000f);
		leaves2->AgeDisRamp.AddRampPoint(1.0000f, 1.0000f);
		leaves2->YawRamp = ETccRampInterp::Linear;
		leaves2->YawRamp.ResizeRampPoints(2);
		leaves2->YawRamp.AddRampPoint(0.0000f, 0.0000f);
		leaves2->YawRamp.AddRampPoint(1.0000f, 1.0000f);
		leaves2->PitchRemap = ETccRampInterp::Linear;
		leaves2->PitchRemap.ResizeRampPoints(2);
		leaves2->PitchRemap.AddRampPoint(0.0000f, 0.0000f);
		leaves2->PitchRemap.AddRampPoint(1.0000f, 1.0000f);
		leaves2->PitchAlongTrunk = ETccRampInterp::Linear;
		leaves2->PitchAlongTrunk.ResizeRampPoints(2);
		leaves2->PitchAlongTrunk.AddRampPoint(0.0000f, 0.3333f);
		leaves2->PitchAlongTrunk.AddRampPoint(1.0000f, 1.0000f);
		leaves2->ScaleAlongBranch = ETccRampInterp::Linear;
		leaves2->ScaleAlongBranch.ResizeRampPoints(11);
		leaves2->ScaleAlongBranch.AddRampPoint(0.0000f, 1.0000f);
		leaves2->ScaleAlongBranch.AddRampPoint(0.0787f, 0.8667f);
		leaves2->ScaleAlongBranch.AddRampPoint(0.1747f, 0.9000f);
		leaves2->ScaleAlongBranch.AddRampPoint(0.3358f, 1.0000f);
		leaves2->ScaleAlongBranch.AddRampPoint(0.4551f, 0.7333f);
		leaves2->ScaleAlongBranch.AddRampPoint(0.5191f, 0.8333f);
		leaves2->ScaleAlongBranch.AddRampPoint(0.6064f, 0.9000f);
		leaves2->ScaleAlongBranch.AddRampPoint(0.6654f, 0.9667f);
		leaves2->ScaleAlongBranch.AddRampPoint(0.7946f, 0.7667f);
		leaves2->ScaleAlongBranch.AddRampPoint(0.9164f, 0.6333f);
		leaves2->ScaleAlongBranch.AddRampPoint(1.0000f, 0.5333f);
		leaves2->ScaleAlongTrunk = ETccRampInterp::Linear;
		leaves2->ScaleAlongTrunk.ResizeRampPoints(2);
		leaves2->ScaleAlongTrunk.AddRampPoint(0.0000f, 1.0000f);
		leaves2->ScaleAlongTrunk.AddRampPoint(1.0000f, 1.0000f);
		leaves2->MaxCount = 25;
		leaves2->StartPercent = 0.750000f;
		leaves2->AgeDis = 0.014000f;
		leaves2->RadiusShrink = 1.000000f;
		leaves2->Method = UTcrTreeLeafScatter::AroundBranch;
		leaves2->YawOffset = 17.600000f;
		leaves2->YawOffsetR = 10.100000f;
		leaves2->PitchRange = FVector2f(-60.000000f, -15.000000f);
		leaves2->PitchAdv = 1;
		leaves2->Scale = 0.498000f;
		leaves2->ScaleShowAdv = 1;
		leaves2->Cook();
	}
	{
		// Node: leaf4
		leaf4->Shape = ETccRampInterp::Bezier;
		leaf4->Shape.ResizeRampPoints(7);
		leaf4->Shape.AddRampPoint(0.0000f, 0.0365f);
		leaf4->Shape.AddRampPoint(0.0242f, 1.0000f);
		leaf4->Shape.AddRampPoint(0.1004f, 1.0000f);
		leaf4->Shape.AddRampPoint(0.4075f, 1.0000f);
		leaf4->Shape.AddRampPoint(0.7013f, 0.8333f);
		leaf4->Shape.AddRampPoint(0.9021f, 0.0000f);
		leaf4->Shape.AddRampPoint(1.0000f, 0.0000f);
		leaf4->Size = FVector2f(0.300000f, 1.000000f);
		leaf4->Rows = 20;
		leaf4->Bend = 50.700001f;
		leaf4->BendOffset = 0.206000f;
		leaf4->Curl = 20.000000f;
		leaf4->Cook();
	}
	{
		// Node: mi_leaf
		mi_leaf->SetInput(0, leaf4);
		mi_leaf->MatPath = TEXT("/Game/ForestDemo/Materials/MI_TreeBig_Leaf.MI_TreeBig_Leaf");
		mi_leaf->Cook();
	}
	{
		// Node: leaves3
		leaves3->SetInput(0, short04_trunk);
		leaves3->SetInput(1, mi_leaf);
		leaves3->StartPercentRamp = ETccRampInterp::Linear;
		leaves3->StartPercentRamp.ResizeRampPoints(2);
		leaves3->StartPercentRamp.AddRampPoint(0.0000f, 1.0000f);
		leaves3->StartPercentRamp.AddRampPoint(1.0000f, 1.0000f);
		leaves3->AgeDisRamp = ETccRampInterp::Linear;
		leaves3->AgeDisRamp.ResizeRampPoints(2);
		leaves3->AgeDisRamp.AddRampPoint(0.0000f, 1.0000f);
		leaves3->AgeDisRamp.AddRampPoint(1.0000f, 1.0000f);
		leaves3->YawRamp = ETccRampInterp::Linear;
		leaves3->YawRamp.ResizeRampPoints(2);
		leaves3->YawRamp.AddRampPoint(0.0000f, 0.0000f);
		leaves3->YawRamp.AddRampPoint(1.0000f, 1.0000f);
		leaves3->PitchRemap = ETccRampInterp::Linear;
		leaves3->PitchRemap.ResizeRampPoints(2);
		leaves3->PitchRemap.AddRampPoint(0.0000f, 0.0000f);
		leaves3->PitchRemap.AddRampPoint(1.0000f, 1.0000f);
		leaves3->PitchAlongTrunk = ETccRampInterp::Linear;
		leaves3->PitchAlongTrunk.ResizeRampPoints(2);
		leaves3->PitchAlongTrunk.AddRampPoint(0.0000f, 0.3333f);
		leaves3->PitchAlongTrunk.AddRampPoint(1.0000f, 1.0000f);
		leaves3->ScaleAlongBranch = ETccRampInterp::Linear;
		leaves3->ScaleAlongBranch.ResizeRampPoints(2);
		leaves3->ScaleAlongBranch.AddRampPoint(0.0000f, 1.0000f);
		leaves3->ScaleAlongBranch.AddRampPoint(1.0000f, 1.0000f);
		leaves3->ScaleAlongTrunk = ETccRampInterp::Linear;
		leaves3->ScaleAlongTrunk.ResizeRampPoints(2);
		leaves3->ScaleAlongTrunk.AddRampPoint(0.0000f, 1.0000f);
		leaves3->ScaleAlongTrunk.AddRampPoint(1.0000f, 1.0000f);
		leaves3->MaxCount = 8;
		leaves3->StartPercent = 0.888000f;
		leaves3->AgeDis = 0.012000f;
		leaves3->RadiusShrink = 1.000000f;
		leaves3->Method = UTcrTreeLeafScatter::AroundBranch;
		leaves3->PitchRange = FVector2f(140.000000f, 220.000000f);
		leaves3->PitchAdv = 1;
		leaves3->Scale = 0.400000f;
		leaves3->ScaleShowAdv = 1;
		leaves3->Cook();
	}
	{
		// Node: fruit
		fruit->Shape = ETccRampInterp::Bezier;
		fruit->Shape.ResizeRampPoints(7);
		fruit->Shape.AddRampPoint(0.0000f, 0.0000f);
		fruit->Shape.AddRampPoint(0.0713f, 1.0000f);
		fruit->Shape.AddRampPoint(0.2080f, 1.0000f);
		fruit->Shape.AddRampPoint(0.3386f, 1.0000f);
		fruit->Shape.AddRampPoint(0.7485f, 1.0000f);
		fruit->Shape.AddRampPoint(0.9033f, 0.0000f);
		fruit->Shape.AddRampPoint(1.0000f, 0.0000f);
		fruit->Cook();
	}
	{
		// Node: mi_fruit
		mi_fruit->SetInput(0, fruit);
		mi_fruit->MatPath = TEXT("/Game/ForestDemo/Materials/MI_TreeBig_Trunk.MI_TreeBig_Trunk");
		mi_fruit->Cook();
	}
	{
		// Node: fruit_scatter
		fruit_scatter->SetInput(0, branch_fruit);
		fruit_scatter->SetInput(1, mi_fruit);
		fruit_scatter->StartPercentRamp = ETccRampInterp::Linear;
		fruit_scatter->StartPercentRamp.ResizeRampPoints(2);
		fruit_scatter->StartPercentRamp.AddRampPoint(0.0000f, 1.0000f);
		fruit_scatter->StartPercentRamp.AddRampPoint(1.0000f, 1.0000f);
		fruit_scatter->AgeDisRamp = ETccRampInterp::Linear;
		fruit_scatter->AgeDisRamp.ResizeRampPoints(2);
		fruit_scatter->AgeDisRamp.AddRampPoint(0.0000f, 1.0000f);
		fruit_scatter->AgeDisRamp.AddRampPoint(1.0000f, 1.0000f);
		fruit_scatter->YawRamp = ETccRampInterp::Linear;
		fruit_scatter->YawRamp.ResizeRampPoints(2);
		fruit_scatter->YawRamp.AddRampPoint(0.0000f, 0.0000f);
		fruit_scatter->YawRamp.AddRampPoint(1.0000f, 1.0000f);
		fruit_scatter->PitchRemap = ETccRampInterp::Linear;
		fruit_scatter->PitchRemap.ResizeRampPoints(2);
		fruit_scatter->PitchRemap.AddRampPoint(0.0000f, 0.0000f);
		fruit_scatter->PitchRemap.AddRampPoint(1.0000f, 1.0000f);
		fruit_scatter->PitchAlongTrunk = ETccRampInterp::Linear;
		fruit_scatter->PitchAlongTrunk.ResizeRampPoints(2);
		fruit_scatter->PitchAlongTrunk.AddRampPoint(0.0000f, 1.0000f);
		fruit_scatter->PitchAlongTrunk.AddRampPoint(1.0000f, 1.0000f);
		fruit_scatter->ScaleAlongBranch = ETccRampInterp::Linear;
		fruit_scatter->ScaleAlongBranch.ResizeRampPoints(2);
		fruit_scatter->ScaleAlongBranch.AddRampPoint(0.0000f, 1.0000f);
		fruit_scatter->ScaleAlongBranch.AddRampPoint(1.0000f, 1.0000f);
		fruit_scatter->ScaleAlongTrunk = ETccRampInterp::Linear;
		fruit_scatter->ScaleAlongTrunk.ResizeRampPoints(2);
		fruit_scatter->ScaleAlongTrunk.AddRampPoint(0.0000f, 1.0000f);
		fruit_scatter->ScaleAlongTrunk.AddRampPoint(1.0000f, 1.0000f);
		fruit_scatter->StartPercent = 0.991000f;
		fruit_scatter->Method = UTcrTreeLeafScatter::AroundBranch;
		fruit_scatter->PitchRange = FVector2f(84.000000f, 85.000000f);
		fruit_scatter->PitchShowAdv = 1;
		fruit_scatter->Scale = 0.080000f;
		fruit_scatter->Cook();
	}
	{
		// Node: tcc_merge3
		tcc_merge3->SetInput(0, tcc_pack3);
		tcc_merge3->SetInput(1, leaves1);
		tcc_merge3->SetInput(2, leaves2);
		tcc_merge3->SetInput(3, leaves3);
		tcc_merge3->SetInput(4, fruit_scatter);
		tcc_merge3->Cook();
	}
	SetGeoResult(UTcrTreeShort04::output0, tcc_merge3->GetGeoResult(0));
}
