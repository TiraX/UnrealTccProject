// Recipe tcr_bigtree_01, auto generated by UnrealTcc.

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
	MaxInputs = 0;
	tcr_trunk_generator1 = UTccNode::CreateNodeWithDefine<UTcrTrunkGenerator>(this, TEXT("tcr_trunk_generator1"));
	root = UTccNode::CreateNodeWithDefine<UTcrBranchGenerator>(this, TEXT("root"));
	tcr_branch_generator1 = UTccNode::CreateNodeWithDefine<UTcrBranchGenerator>(this, TEXT("tcr_branch_generator1"));
	tcr_branch_generator2 = UTccNode::CreateNodeWithDefine<UTcrBranchGenerator>(this, TEXT("tcr_branch_generator2"));
	tcc_merge1 = UTccNode::CreateNodeWithDefine<UTccMerge>(this, TEXT("tcc_merge1"));
	tcr_tree_skin1 = UTccNode::CreateNodeWithDefine<UTcrTreeSkin>(this, TEXT("tcr_tree_skin1"));
	pack_trunk = UTccNode::CreateNodeWithDefine<UTccPack>(this, TEXT("pack_trunk"));
	for_variation_number = UTccNode::CreateNodeWithDefine<UTccForBlock>(this, TEXT("for_variation_number"));
	for_variation_number->InitInputsCount(1);
		calc_seed = UTccNode::CreateNodeWithDefine<UTccVex>(this, TEXT("calc_seed"));
		tcr_bigtree01_subbranches1 = UTccNode::CreateNodeWithDefine<UTcrBigtree01Subbranches>(this, TEXT("tcr_bigtree01_subbranches1"));
		pack_branch_instance = UTccNode::CreateNodeWithDefine<UTccPack>(this, TEXT("pack_branch_instance"));
		add_instance_attrib = UTccNode::CreateNodeWithDefine<UTccVex>(this, TEXT("add_instance_attrib"));
	tcr_leaf_generator_with_variations2 = UTccNode::CreateNodeWithDefine<UTcrLeafGeneratorWithVariations>(this, TEXT("tcr_leaf_generator_with_variations2"));
	merge_trunk_and_leaf = UTccNode::CreateNodeWithDefine<UTccMerge>(this, TEXT("merge_trunk_and_leaf"));
}
void UTcrBigtree01::Execute(UTccNode* InNode) 
{
	{
		UTcrTrunkGenerator* Define1 = Cast<UTcrTrunkGenerator>(tcr_trunk_generator1->GetDefine()); 
		Define1->RscaleAlongCurve = ETccRampInterp::Bezier;
		Define1->RscaleAlongCurve.ResizeRampPoints(4);
		Define1->RscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		Define1->RscaleAlongCurve.AddRampPoint(0.1749f, 0.3542f);
		Define1->RscaleAlongCurve.AddRampPoint(0.5366f, 0.4167f);
		Define1->RscaleAlongCurve.AddRampPoint(1.0000f, 0.3542f);
		Define1->Length = 20.000000f;
		Define1->Radius = 3.000000f;
		Define1->Segs = 20;
		Define1->Amp = 0.315000f;
		Define1->EnableBend = 1;
		Define1->Bend = 16.200001f;
		tcr_trunk_generator1->Cook();
	}
	{
		root->SetInput(0, tcr_trunk_generator1);
		UTcrBranchGenerator* Define1 = Cast<UTcrBranchGenerator>(root->GetDefine()); 
		Define1->RscaleAlongCurve = ETccRampInterp::Bezier;
		Define1->RscaleAlongCurve.ResizeRampPoints(4);
		Define1->RscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		Define1->RscaleAlongCurve.AddRampPoint(0.1185f, 0.7083f);
		Define1->RscaleAlongCurve.AddRampPoint(0.5502f, 0.8750f);
		Define1->RscaleAlongCurve.AddRampPoint(1.0000f, 0.2667f);
		Define1->LscaleAlongCurve = ETccRampInterp::Linear;
		Define1->LscaleAlongCurve.ResizeRampPoints(2);
		Define1->LscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		Define1->LscaleAlongCurve.AddRampPoint(1.0000f, 0.5000f);
		Define1->Npts = 8;
		Define1->Gpercent = FVector2f(0.100000f, 0.160000f);
		Define1->PitchR = FVector2f(-20.000000f, -25.000000f);
		Define1->RadiusScale = 0.527000f;
		Define1->BranchLength = 6.280000f;
		Define1->EnableNoise = 1;
		Define1->Freq = 2.110000f;
		Define1->Amp = 1.438000f;
		Define1->Bend1 = 1;
		Define1->Bend1Angle = -35.000000f;
		root->Cook();
	}
	{
		tcr_branch_generator1->SetInput(0, tcr_trunk_generator1);
		UTcrBranchGenerator* Define1 = Cast<UTcrBranchGenerator>(tcr_branch_generator1->GetDefine()); 
		Define1->RscaleAlongCurve = ETccRampInterp::Bezier;
		Define1->RscaleAlongCurve.ResizeRampPoints(3);
		Define1->RscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		Define1->RscaleAlongCurve.AddRampPoint(0.2670f, 0.3750f);
		Define1->RscaleAlongCurve.AddRampPoint(1.0000f, 0.2667f);
		Define1->LscaleAlongCurve = ETccRampInterp::Linear;
		Define1->LscaleAlongCurve.ResizeRampPoints(2);
		Define1->LscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		Define1->LscaleAlongCurve.AddRampPoint(1.0000f, 1.0000f);
		Define1->Npts = 9;
		Define1->Gpercent = FVector2f(0.700000f, 1.000000f);
		Define1->PitchR = FVector2f(60.000000f, 72.000000f);
		Define1->BranchLength = 12.000000f;
		Define1->Bend1 = 1;
		Define1->Bend1Angle = -51.000000f;
		Define1->Bend1Length = 0.285000f;
		Define1->Bend2 = 1;
		Define1->Bend2Angle = 18.000000f;
		Define1->Bend2Length = 0.982000f;
		Define1->Bend2Offset = 5.820000f;
		tcr_branch_generator1->Cook();
	}
	{
		tcr_branch_generator2->SetInput(0, tcr_branch_generator1);
		UTcrBranchGenerator* Define1 = Cast<UTcrBranchGenerator>(tcr_branch_generator2->GetDefine()); 
		Define1->RscaleAlongCurve = ETccRampInterp::Linear;
		Define1->RscaleAlongCurve.ResizeRampPoints(2);
		Define1->RscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		Define1->RscaleAlongCurve.AddRampPoint(1.0000f, 0.5000f);
		Define1->LscaleAlongCurve = ETccRampInterp::Linear;
		Define1->LscaleAlongCurve.ResizeRampPoints(2);
		Define1->LscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		Define1->LscaleAlongCurve.AddRampPoint(1.0000f, 0.6250f);
		Define1->Npts = 6;
		Define1->Gpercent = FVector2f(0.255000f, 1.000000f);
		Define1->Pattern = UTcrBranchGenerator::AngleRange;
		Define1->Yaw = 0.000000f;
		Define1->YawRange = 62.900002f;
		Define1->PitchR = FVector2f(25.000000f, 62.000000f);
		Define1->RadiusScale = 0.533000f;
		Define1->BranchLength = 10.000000f;
		Define1->Bend1 = 1;
		Define1->Bend1Angle = 13.000000f;
		Define1->Bend1Length = 0.464000f;
		Define1->Bend1Offset = 1.320000f;
		tcr_branch_generator2->Cook();
	}
	{
		tcc_merge1->SetInput(0, root);
		tcc_merge1->SetInput(1, tcr_branch_generator2);
		tcc_merge1->Cook();
	}
	{
		tcr_tree_skin1->SetInput(0, tcc_merge1);
		UTcrTreeSkin* Define1 = Cast<UTcrTreeSkin>(tcr_tree_skin1->GetDefine()); 
		Define1->UvScale = 0.132000f;
		Define1->Twist = 180.000000f;
		tcr_tree_skin1->Cook();
	}
	{
		pack_trunk->SetInput(0, tcr_tree_skin1);
		pack_trunk->Cook();
	}
	{
		for_variation_number->SetInput(0, nullptr);
		UTccForBlock* Define1 = Cast<UTccForBlock>(for_variation_number->GetDefine()); 
		Define1->Itermethod = UTccForBlock::ByCount;
		Define1->Method = UTccForBlock::MergeEachIteration;
		Define1->Iterations = 5;
		for_variation_number->Cook();
		{
			// By Count, Merge Each Iteration
			const int32 NumIterations = 5;
			for(int32 __iter = 0; __iter < NumIterations; __iter++)
			{
				const int32 _iteration = __iter;
				UTccNode* block_input0 = nullptr;
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
					UTcrBigtree01Subbranches* Define2 = Cast<UTcrBigtree01Subbranches>(tcr_bigtree01_subbranches1->GetDefine()); 
					Define2->Gseed = int32(hs_detail(Geo0, "gseed", 0));
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
				
				Define1->SetPieceResult(__iter, add_instance_attrib->GetGeoResult(0));
			}
			Define1->MergeResult(for_variation_number);
		}
	}
	{
		tcr_leaf_generator_with_variations2->SetInput(0, tcr_branch_generator2);
		tcr_leaf_generator_with_variations2->SetInput(1, for_variation_number);
		UTcrLeafGeneratorWithVariations* Define1 = Cast<UTcrLeafGeneratorWithVariations>(tcr_leaf_generator_with_variations2->GetDefine()); 
		Define1->ScaleRamp = ETccRampInterp::Linear;
		Define1->ScaleRamp.ResizeRampPoints(4);
		Define1->ScaleRamp.AddRampPoint(0.0000f, 0.5208f);
		Define1->ScaleRamp.AddRampPoint(0.2510f, 1.0000f);
		Define1->ScaleRamp.AddRampPoint(0.6988f, 0.6250f);
		Define1->ScaleRamp.AddRampPoint(1.0000f, 0.0000f);
		Define1->BranchSeed = 5;
		Define1->Npts = 4;
		Define1->Gpercent = FVector2f(0.100000f, 1.000000f);
		Define1->YawRange = FVector2f(15.000000f, 60.000000f);
		Define1->Scale = FVector2f(0.630000f, 0.630000f);
		tcr_leaf_generator_with_variations2->Cook();
	}
	{
		merge_trunk_and_leaf->SetInput(0, pack_trunk);
		merge_trunk_and_leaf->SetInput(1, tcr_leaf_generator_with_variations2);
		merge_trunk_and_leaf->Cook();
	}
	InNode->SetGeoResult(OUT_BigTree_01, merge_trunk_and_leaf->GetGeoResult(0));
}

