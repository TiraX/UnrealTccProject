// Auto generated by UnrealTcc. 

#include "TcrBigtree01.h"
#include "TcrTrunkGenerator.h"
#include "TcrBranchGenerator.h"
#include "TcrTreeSkin.h"
#include "TcrBigtree01Subbranches.h"
#include "TcrLeafGeneratorWithVariations.h"
#include "Generated/TccTemplates.h"
#include "TccForBlock.h"
#include "TccSwitch.h"
#include "TccAttribute.h"
#include "TccGeometry.h"
#include "Vex.h"
#include "HScript.h"

 UTcrBigtree01::UTcrBigtree01() 
{
}
FTccNodePtr UTcrBigtree01::CreateNode() 
{
	TSharedPtr<FTcrBigtree01> Node = MakeShared<FTcrBigtree01>();
	SyncParams(Node);
	return Node;
}
void UTcrBigtree01::SyncParams(FTccNodePtr InNode) 
{
	TSharedPtr<FTcrBigtree01> Node = StaticCastSharedPtr<FTcrBigtree01>(InNode);
	Node->W = W;
	Node->Yaw = Yaw;
	Node->Pitch = Pitch;
	Node->R = R;
}

 FTcrBigtree01::FTcrBigtree01() 
{
	InitInputsCount(0);
	tcr_trunk_generator1 = new FTcrTrunkGenerator();
	tcr_trunk_generator1->InitMultiRefs(true); // RefCount = 2
	root = new FTcrBranchGenerator();
	root->InitMultiRefs(false); // RefCount = 1
	tcr_branch_generator1 = new FTcrBranchGenerator();
	tcr_branch_generator1->InitMultiRefs(false); // RefCount = 1
	tcr_branch_generator2 = new FTcrBranchGenerator();
	tcr_branch_generator2->InitMultiRefs(true); // RefCount = 2
	tcc_merge1 = new FTccMerge();
	tcc_merge1->InitMultiRefs(false); // RefCount = 1
	tcr_tree_skin1 = new FTcrTreeSkin();
	tcr_tree_skin1->InitMultiRefs(false); // RefCount = 1
	pack_trunk = new FTccPack();
	pack_trunk->InitMultiRefs(false); // RefCount = 1
	for_variation_number = new FTccForBlock();
	for_variation_number->InitMultiRefs(false); // RefCount = 1
	for_variation_number->InitInputsCount(1);
		calc_seed = new FTccVex();
		calc_seed->InitMultiRefs(false); // RefCount = 1
		tcr_bigtree01_subbranches1 = new FTcrBigtree01Subbranches();
		tcr_bigtree01_subbranches1->InitMultiRefs(false); // RefCount = 1
		pack_branch_instance = new FTccPack();
		pack_branch_instance->InitMultiRefs(false); // RefCount = 1
		add_instance_attrib = new FTccVex();
		add_instance_attrib->InitMultiRefs(false); // RefCount = 1
	tcr_leaf_generator_with_variations2 = new FTcrLeafGeneratorWithVariations();
	tcr_leaf_generator_with_variations2->InitMultiRefs(false); // RefCount = 1
	merge_trunk_and_leaf = new FTccMerge();
	merge_trunk_and_leaf->InitMultiRefs(false); // RefCount = 1
}
 FTcrBigtree01::~FTcrBigtree01() 
{
	delete tcr_trunk_generator1; 
	delete root; 
	delete tcr_branch_generator1; 
	delete tcr_branch_generator2; 
	delete tcc_merge1; 
	delete tcr_tree_skin1; 
	delete pack_trunk; 
	delete for_variation_number; 
		delete calc_seed; 
		delete tcr_bigtree01_subbranches1; 
		delete pack_branch_instance; 
		delete add_instance_attrib; 
	delete tcr_leaf_generator_with_variations2; 
	delete merge_trunk_and_leaf; 
}
void FTcrBigtree01::Cook() 
{
	{
		tcr_trunk_generator1->RscaleAlongCurve = ETccRampInterp::Bezier;
		tcr_trunk_generator1->RscaleAlongCurve.ResizeRampPoints(4);
		tcr_trunk_generator1->RscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		tcr_trunk_generator1->RscaleAlongCurve.AddRampPoint(0.1749f, 0.3542f);
		tcr_trunk_generator1->RscaleAlongCurve.AddRampPoint(0.5366f, 0.4167f);
		tcr_trunk_generator1->RscaleAlongCurve.AddRampPoint(1.0000f, 0.3542f);
		tcr_trunk_generator1->Length = 20.000000f;
		tcr_trunk_generator1->Radius = 3.000000f;
		tcr_trunk_generator1->Segs = 20;
		tcr_trunk_generator1->Amp = 0.315000f;
		tcr_trunk_generator1->EnableBend = 1;
		tcr_trunk_generator1->Bend = 16.200001f;
		tcr_trunk_generator1->Cook();
	}
	{
		root->SetInput(0, tcr_trunk_generator1);
		root->RscaleAlongCurve = ETccRampInterp::Bezier;
		root->RscaleAlongCurve.ResizeRampPoints(4);
		root->RscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		root->RscaleAlongCurve.AddRampPoint(0.1185f, 0.7083f);
		root->RscaleAlongCurve.AddRampPoint(0.5502f, 0.8750f);
		root->RscaleAlongCurve.AddRampPoint(1.0000f, 0.2667f);
		root->LscaleAlongCurve = ETccRampInterp::Linear;
		root->LscaleAlongCurve.ResizeRampPoints(2);
		root->LscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		root->LscaleAlongCurve.AddRampPoint(1.0000f, 0.5000f);
		root->Npts = 8;
		root->Gpercent = FVector2f(0.100000f, 0.160000f);
		root->PitchR = FVector2f(-20.000000f, -25.000000f);
		root->RadiusScale = 0.527000f;
		root->BranchLength = 6.280000f;
		root->EnableNoise = 1;
		root->Freq = 2.110000f;
		root->Amp = 1.438000f;
		root->Bend1 = 1;
		root->Bend1Angle = -35.000000f;
		root->Cook();
	}
	{
		tcr_branch_generator1->SetInput(0, tcr_trunk_generator1);
		tcr_branch_generator1->RscaleAlongCurve = ETccRampInterp::Bezier;
		tcr_branch_generator1->RscaleAlongCurve.ResizeRampPoints(3);
		tcr_branch_generator1->RscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		tcr_branch_generator1->RscaleAlongCurve.AddRampPoint(0.2670f, 0.3750f);
		tcr_branch_generator1->RscaleAlongCurve.AddRampPoint(1.0000f, 0.2667f);
		tcr_branch_generator1->LscaleAlongCurve = ETccRampInterp::Linear;
		tcr_branch_generator1->LscaleAlongCurve.ResizeRampPoints(2);
		tcr_branch_generator1->LscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		tcr_branch_generator1->LscaleAlongCurve.AddRampPoint(1.0000f, 1.0000f);
		tcr_branch_generator1->Npts = 9;
		tcr_branch_generator1->Gpercent = FVector2f(0.700000f, 1.000000f);
		tcr_branch_generator1->PitchR = FVector2f(60.000000f, 72.000000f);
		tcr_branch_generator1->BranchLength = 12.000000f;
		tcr_branch_generator1->Bend1 = 1;
		tcr_branch_generator1->Bend1Angle = -51.000000f;
		tcr_branch_generator1->Bend1Length = 0.285000f;
		tcr_branch_generator1->Bend2 = 1;
		tcr_branch_generator1->Bend2Angle = 18.000000f;
		tcr_branch_generator1->Bend2Length = 0.982000f;
		tcr_branch_generator1->Bend2Offset = 5.820000f;
		tcr_branch_generator1->Cook();
	}
	{
		tcr_branch_generator2->SetInput(0, tcr_branch_generator1);
		tcr_branch_generator2->RscaleAlongCurve = ETccRampInterp::Linear;
		tcr_branch_generator2->RscaleAlongCurve.ResizeRampPoints(2);
		tcr_branch_generator2->RscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		tcr_branch_generator2->RscaleAlongCurve.AddRampPoint(1.0000f, 0.5000f);
		tcr_branch_generator2->LscaleAlongCurve = ETccRampInterp::Linear;
		tcr_branch_generator2->LscaleAlongCurve.ResizeRampPoints(2);
		tcr_branch_generator2->LscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		tcr_branch_generator2->LscaleAlongCurve.AddRampPoint(1.0000f, 0.6250f);
		tcr_branch_generator2->Npts = 6;
		tcr_branch_generator2->Gpercent = FVector2f(0.255000f, 1.000000f);
		tcr_branch_generator2->Pattern = UTcrBranchGenerator::AngleRange;
		tcr_branch_generator2->Yaw = 0.000000f;
		tcr_branch_generator2->YawRange = 62.900002f;
		tcr_branch_generator2->PitchR = FVector2f(25.000000f, 62.000000f);
		tcr_branch_generator2->RadiusScale = 0.533000f;
		tcr_branch_generator2->BranchLength = 10.000000f;
		tcr_branch_generator2->Bend1 = 1;
		tcr_branch_generator2->Bend1Angle = 13.000000f;
		tcr_branch_generator2->Bend1Length = 0.464000f;
		tcr_branch_generator2->Bend1Offset = 1.320000f;
		tcr_branch_generator2->Cook();
	}
	{
		tcc_merge1->SetInput(0, root);
		tcc_merge1->SetInput(1, tcr_branch_generator2);
		tcc_merge1->Cook();
	}
	{
		tcr_tree_skin1->SetInput(0, tcc_merge1);
		tcr_tree_skin1->UvScale = 0.132000f;
		tcr_tree_skin1->Twist = 180.000000f;
		tcr_tree_skin1->Cook();
	}
	{
		pack_trunk->SetInput(0, tcr_tree_skin1);
		pack_trunk->Cook();
	}
	{
		for_variation_number->SetInput(0, nullptr);
		for_variation_number->Itermethod = UTccForBlock::ByCount;
		for_variation_number->Method = UTccForBlock::MergeEachIteration;
		for_variation_number->Iterations = 5;
		for_variation_number->Cook();
		{
			// By Count, Merge Each Iteration
			const int32 NumIterations = 5;
			for(int32 __iter = 0; __iter < NumIterations; __iter ++)
			{
				const int32 _iteration = __iter;
				FTccNode* block_input0 = nullptr;
				{
					calc_seed->SetInput(0, block_input0);
					calc_seed->SetInput(1, nullptr);
					calc_seed->Cook();
					{
						FTccGeometryPtr Geo0 = calc_seed->GetGeoResult(0);
						FTccAttribPtr attr_gseed = Geo0->AddDetailAttrib("gseed", FTccAttrib::EAttrType::I);
						int32& _gseed = attr_gseed->GetData<int32>()[0];
						int32 iter = _iteration;
						_gseed = iter * 2 + 4;
					}
				}
				
				{
					tcr_bigtree01_subbranches1->SetInput(0, calc_seed);
					FTccGeometryPtr Geo0 = tcr_bigtree01_subbranches1->GetInput(0)->GetGeoResult(0);
					tcr_bigtree01_subbranches1->Gseed = int32(hs_detail(Geo0, "gseed", 0));
					tcr_bigtree01_subbranches1->Cook();
				}
				
				{
					pack_branch_instance->SetInput(0, tcr_bigtree01_subbranches1);
					pack_branch_instance->Cook();
				}
				
				{
					add_instance_attrib->SetInput(0, pack_branch_instance);
					add_instance_attrib->SetInput(1, nullptr);
					add_instance_attrib->Cook();
					{
						FTccGeometryPtr Geo0 = add_instance_attrib->GetGeoResult(0);
						FTccAttribPtr attr_instance_id = Geo0->AddPackedGeoAttrib("instance_id", FTccAttrib::EAttrType::I);
						const int32 _numpacked = Geo0->GetPackedGeoCount();
						for(int32 i = 0; i < _numpacked; i++)
						{
							const int32 _packednum = i;
							int32& _instance_id = attr_instance_id->GetData<int32>()[i];
							int32 iter = _iteration;
							_instance_id = iter;
						}
					}
				}
				
				for_variation_number->SetPieceResult(__iter, add_instance_attrib->GetGeoResult(0));
			}
			for_variation_number->MergeResult();
		}
	}
	{
		tcr_leaf_generator_with_variations2->SetInput(0, tcr_branch_generator2);
		tcr_leaf_generator_with_variations2->SetInput(1, for_variation_number);
		tcr_leaf_generator_with_variations2->ScaleRamp = ETccRampInterp::Linear;
		tcr_leaf_generator_with_variations2->ScaleRamp.ResizeRampPoints(4);
		tcr_leaf_generator_with_variations2->ScaleRamp.AddRampPoint(0.0000f, 0.5208f);
		tcr_leaf_generator_with_variations2->ScaleRamp.AddRampPoint(0.2510f, 1.0000f);
		tcr_leaf_generator_with_variations2->ScaleRamp.AddRampPoint(0.7038f, 0.7333f);
		tcr_leaf_generator_with_variations2->ScaleRamp.AddRampPoint(1.0000f, 0.2667f);
		tcr_leaf_generator_with_variations2->BranchSeed = 5;
		tcr_leaf_generator_with_variations2->Npts = 4;
		tcr_leaf_generator_with_variations2->Gpercent = FVector2f(0.100000f, 0.800000f);
		tcr_leaf_generator_with_variations2->YawRange = FVector2f(15.000000f, 60.000000f);
		tcr_leaf_generator_with_variations2->Scale = FVector2f(0.630000f, 0.630000f);
		tcr_leaf_generator_with_variations2->Cook();
	}
	{
		merge_trunk_and_leaf->SetInput(0, pack_trunk);
		merge_trunk_and_leaf->SetInput(1, tcr_leaf_generator_with_variations2);
		merge_trunk_and_leaf->Cook();
	}
	SetGeoResult(UTcrBigtree01::OUT_BigTree_01, merge_trunk_and_leaf->GetGeoResult(0));
}

