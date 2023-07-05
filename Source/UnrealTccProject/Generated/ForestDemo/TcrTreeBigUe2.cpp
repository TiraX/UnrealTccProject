// Auto generated by UnrealTcc. 

#include "TcrTreeBigUe2.h"
#include "TcrTreeBigSubbranchesGrowth.h"
#include "TcrTreeBranchFrac.h"
#include "TcrTreeSkinGrowth.h"
#include "TcrTreeBigSubbranchScatter.h"
#include "TcrTreeTrunkGrowth.h"
#include "TcrTreeBranchGrowth.h"
#include "Generated/TccTemplates.h"
#include "TccForBlock.h"
#include "TccSwitch.h"
#include "TctTexVex.h"
#include "TccAttribute.h"
#include "TccGeometry.h"
#include "Vex.h"
#include "HScript.h"

 UTcrTreeBigUe2::UTcrTreeBigUe2() 
{
}
FTccNodePtr UTcrTreeBigUe2::CreateNode() 
{
	TSharedPtr<FTcrTreeBigUe2> Node = MakeShared<FTcrTreeBigUe2>();
	SyncParams(Node);
	return Node;
}
void UTcrTreeBigUe2::SyncParams(FTccNodePtr InNode) 
{
	TSharedPtr<FTcrTreeBigUe2> Node = StaticCastSharedPtr<FTcrTreeBigUe2>(InNode);
	Node->Yaw = Yaw;
	Node->YawR = YawR;
	Node->Pitch = Pitch;
	Node->PitchR = PitchR;
	Node->Roll = Roll;
	Node->Yaw2 = Yaw2;
	Node->YawR2 = YawR2;
	Node->Pitch2 = Pitch2;
	Node->PitchR2 = PitchR2;
}

 FTcrTreeBigUe2::FTcrTreeBigUe2() 
{
	InitInputsCount(0);
	subbranches_growth2 = new FTcrTreeBigSubbranchesGrowth();
	subbranches_growth2->InitMultiRefs(true); // RefCount = 4
	foreach_begin2 = new FTccForBlock();
	foreach_begin2->InitMultiRefs(false); // RefCount = 1
	foreach_begin2->InitInputsCount(2);
		info = new FTccVex();
		info->InitMultiRefs(false); // RefCount = 1
		branch_frac3 = new FTcrTreeBranchFrac();
		branch_frac3->InitMultiRefs(true); // RefCount = 2
		tcr_tree_skin_growth7 = new FTcrTreeSkinGrowth();
		tcr_tree_skin_growth7->InitMultiRefs(false); // RefCount = 1
		tcc_pack1 = new FTccPack();
		tcc_pack1->InitMultiRefs(false); // RefCount = 1
		last_3_levels = new FTccBlastByFeature();
		last_3_levels->InitMultiRefs(false); // RefCount = 1
		tcr_tree_big_subbranch_scatter1 = new FTcrTreeBigSubbranchScatter();
		tcr_tree_big_subbranch_scatter1->InitMultiRefs(false); // RefCount = 1
		tcc_merge1 = new FTccMerge();
		tcc_merge1->InitMultiRefs(false); // RefCount = 1
		packed_name = new FTccVex();
		packed_name->InitMultiRefs(false); // RefCount = 1
		tcc_pack2 = new FTccPack();
		tcc_pack2->InitMultiRefs(false); // RefCount = 1
		instance_id = new FTccVex();
		instance_id->InitMultiRefs(false); // RefCount = 1
	tcr_tree_trunk_growth4 = new FTcrTreeTrunkGrowth();
	tcr_tree_trunk_growth4->InitMultiRefs(false); // RefCount = 1
	tcr_tree_branch_growth7 = new FTcrTreeBranchGrowth();
	tcr_tree_branch_growth7->InitMultiRefs(false); // RefCount = 1
	tcr_tree_branch_growth8 = new FTcrTreeBranchGrowth();
	tcr_tree_branch_growth8->InitMultiRefs(false); // RefCount = 1
	tcc_vex1 = new FTccVex();
	tcc_vex1->InitMultiRefs(false); // RefCount = 1
	tcc_instancer1 = new FTccInstancer();
	tcc_instancer1->InitMultiRefs(false); // RefCount = 1
}
 FTcrTreeBigUe2::~FTcrTreeBigUe2() 
{
	delete subbranches_growth2; 
	delete foreach_begin2; 
		delete info; 
		delete branch_frac3; 
		delete tcr_tree_skin_growth7; 
		delete tcc_pack1; 
		delete last_3_levels; 
		delete tcr_tree_big_subbranch_scatter1; 
		delete tcc_merge1; 
		delete packed_name; 
		delete tcc_pack2; 
		delete instance_id; 
	delete tcr_tree_trunk_growth4; 
	delete tcr_tree_branch_growth7; 
	delete tcr_tree_branch_growth8; 
	delete tcc_vex1; 
	delete tcc_instancer1; 
}
void FTcrTreeBigUe2::Cook() 
{
	{
		// Node: subbranches_growth2
		subbranches_growth2->Gseed = 8;
		subbranches_growth2->Yaw = FVector2f(Yaw.X, Yaw.Y);
		subbranches_growth2->YawR = float(YawR);
		subbranches_growth2->Pitch = FVector2f(Pitch.X, Pitch.Y);
		subbranches_growth2->PitchR = float(PitchR);
		subbranches_growth2->Roll = float(Roll);
		subbranches_growth2->Yaw2 = FVector2f(Yaw2.X, Yaw2.Y);
		subbranches_growth2->YawR2 = float(YawR2);
		subbranches_growth2->Pitch2 = FVector2f(Pitch2.X, Pitch2.Y);
		subbranches_growth2->PitchR2 = float(PitchR2);
		subbranches_growth2->Cook();
	}
	{
		// Node: foreach_begin2
		foreach_begin2->SetInput(0, nullptr);
		foreach_begin2->SetInput(1, subbranches_growth2);
		foreach_begin2->Itermethod = UTccForBlock::ByCount;
		foreach_begin2->Method = UTccForBlock::MergeEachIteration;
		foreach_begin2->Iterations = 4;
		foreach_begin2->Cook();
		{
			// By Count, Merge Each Iteration
			const int32 NumIterations = 4;
			for(int32 __iter = 0; __iter < NumIterations; __iter ++)
			{
				const int32 _iteration = __iter;
				FTccNode* block_input0 = nullptr;
				FTccNode* block_input1 = subbranches_growth2;
				{
					// Node: info
					info->SetInput(0, block_input0);
					info->SetInput(1, nullptr);
					info->Cook();
					{
						FTccGeometryPtr Geo0 = info->GetGeoRef(0);
						FTccAttribPtr attr_pitch_base = Geo0->AddDetailAttrib("pitch_base", ETccAttribType::F);
						FTccAttribPtr attr_split_dis = Geo0->AddDetailAttrib("split_dis", ETccAttribType::F);
						float& _pitch_base = attr_pitch_base->GetData<float>()[0];
						float& _split_dis = attr_split_dis->GetData<float>()[0];
						int32 iter = _iteration;
						// pitch base from -15 to 30
						float sep = 15.f;
						_pitch_base = sep * iter - sep;
						// split dis from 0.7 to 0.6?
						_split_dis = 0.7f - 0.0f * iter;
					}
				}
				
				{
					// Node: branch_frac3
					branch_frac3->SetInput(0, info);
					FTccGeometryConstPtr Geo0 = branch_frac3->GetInput(0)->GetConstGeoResult(0);
					branch_frac3->PitchBase = float(hs_detail(Geo0, "pitch_base", 0));
					branch_frac3->Sep = 0.261000f;
					branch_frac3->SplitDis = float(hs_detail(Geo0, "split_dis", 0));
					branch_frac3->SplitDisFalloff = 0.945000f;
					branch_frac3->Angle = 35.299999f;
					branch_frac3->Roll = 49.700001f;
					branch_frac3->Force = 0.357000f;
					branch_frac3->Cook();
				}
				
				{
					// Node: tcr_tree_skin_growth7
					tcr_tree_skin_growth7->SetInput(0, branch_frac3);
					tcr_tree_skin_growth7->Cols = 4;
					tcr_tree_skin_growth7->Amp = 0.000000f;
					tcr_tree_skin_growth7->Incroll = 0.000000f;
					tcr_tree_skin_growth7->Cook();
				}
				
				{
					// Node: tcc_pack1
					tcc_pack1->SetInput(0, tcr_tree_skin_growth7);
					tcc_pack1->Cook();
				}
				
				{
					// Node: last_3_levels
					last_3_levels->SetInput(0, branch_frac3);
					last_3_levels->ByAttrib = 1;
					last_3_levels->Attrib = TEXT("frac_level");
					last_3_levels->Op = UTccBlastByFeature::Less;
					last_3_levels->Value = 5.000000f;
					last_3_levels->Cook();
				}
				
				{
					// Node: tcr_tree_big_subbranch_scatter1
					tcr_tree_big_subbranch_scatter1->SetInput(0, last_3_levels);
					tcr_tree_big_subbranch_scatter1->SetInput(1, block_input1);
					tcr_tree_big_subbranch_scatter1->Gseed = 3;
					tcr_tree_big_subbranch_scatter1->AgeDis = 0.100000f;
					tcr_tree_big_subbranch_scatter1->Scale = FVector2f(0.500000f, 0.700000f);
					tcr_tree_big_subbranch_scatter1->Cook();
				}
				
				{
					// Node: tcc_merge1
					tcc_merge1->SetInput(0, tcc_pack1);
					tcc_merge1->SetInput(1, tcr_tree_big_subbranch_scatter1);
					tcc_merge1->Cook();
				}
				
				{
					// Node: packed_name
					packed_name->SetInput(0, tcc_merge1);
					packed_name->SetInput(1, nullptr);
					packed_name->Cook();
					{
						FTccGeometryPtr Geo0 = packed_name->GetGeoRef(0);
						FTccAttribPtr attr_name = Geo0->AddDetailAttrib("name", ETccAttribType::S);
						FString& _name = attr_name->GetData<FString>()[0];
						int32 iter = _iteration;
						_name = "fracbranch" + vex_itoa(iter);
					}
				}
				
				{
					// Node: tcc_pack2
					tcc_pack2->SetInput(0, packed_name);
					FTccGeometryConstPtr Geo0 = tcc_pack2->GetInput(0)->GetConstGeoResult(0);
					tcc_pack2->GeoName = hs_details(Geo0, "name");
					tcc_pack2->Cook();
				}
				
				{
					// Node: instance_id
					instance_id->SetInput(0, tcc_pack2);
					instance_id->SetInput(1, nullptr);
					instance_id->Cook();
					{
						FTccGeometryPtr Geo0 = instance_id->GetGeoRef(0);
						FTccAttribPtr attr_instance_id = Geo0->AddPackedGeoAttrib("instance_id", ETccAttribType::I);
						const int32 _numpacked = Geo0->GetNumPackedGeos();
						for(int32 i = 0; i < _numpacked; i++)
						{
							const int32 _packednum = i;
							int32& _instance_id = attr_instance_id->GetData<int32>()[i];
							_instance_id = _iteration;
						}
					}
				}
				
				foreach_begin2->SetPieceResult(__iter, instance_id->GetGeoResult(0));
			}
			foreach_begin2->MergeResult();
		}
	}
	{
		// Node: tcr_tree_trunk_growth4
		tcr_tree_trunk_growth4->RadiusShape = ETccRampInterp::Bezier;
		tcr_tree_trunk_growth4->RadiusShape.ResizeRampPoints(3);
		tcr_tree_trunk_growth4->RadiusShape.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_trunk_growth4->RadiusShape.AddRampPoint(0.1500f, 0.5000f);
		tcr_tree_trunk_growth4->RadiusShape.AddRampPoint(1.0000f, 0.3125f);
		tcr_tree_trunk_growth4->Gseed = 127;
		tcr_tree_trunk_growth4->TreeAge = 16.170000f;
		tcr_tree_trunk_growth4->MaxAge = 10.970000f;
		tcr_tree_trunk_growth4->SegLen = 0.555000f;
		tcr_tree_trunk_growth4->Radius = 1.200000f;
		tcr_tree_trunk_growth4->CurlForce = 0.155000f;
		tcr_tree_trunk_growth4->CurlFreq = 0.086000f;
		tcr_tree_trunk_growth4->Cook();
	}
	{
		// Node: tcr_tree_branch_growth7
		tcr_tree_branch_growth7->SetInput(0, tcr_tree_trunk_growth4);
		tcr_tree_branch_growth7->MaxCountRamp = ETccRampInterp::Linear;
		tcr_tree_branch_growth7->MaxCountRamp.ResizeRampPoints(2);
		tcr_tree_branch_growth7->MaxCountRamp.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_branch_growth7->MaxCountRamp.AddRampPoint(1.0000f, 1.0000f);
		tcr_tree_branch_growth7->SegLenRamp = ETccRampInterp::Linear;
		tcr_tree_branch_growth7->SegLenRamp.ResizeRampPoints(2);
		tcr_tree_branch_growth7->SegLenRamp.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_branch_growth7->SegLenRamp.AddRampPoint(1.0000f, 1.0000f);
		tcr_tree_branch_growth7->StartPercentRamp = ETccRampInterp::Linear;
		tcr_tree_branch_growth7->StartPercentRamp.ResizeRampPoints(2);
		tcr_tree_branch_growth7->StartPercentRamp.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_branch_growth7->StartPercentRamp.AddRampPoint(1.0000f, 1.0000f);
		tcr_tree_branch_growth7->AgeDisRamp = ETccRampInterp::Linear;
		tcr_tree_branch_growth7->AgeDisRamp.ResizeRampPoints(7);
		tcr_tree_branch_growth7->AgeDisRamp.AddRampPoint(0.0000f, 0.2000f);
		tcr_tree_branch_growth7->AgeDisRamp.AddRampPoint(0.0773f, 0.1000f);
		tcr_tree_branch_growth7->AgeDisRamp.AddRampPoint(0.1160f, 0.1000f);
		tcr_tree_branch_growth7->AgeDisRamp.AddRampPoint(0.1395f, 1.0000f);
		tcr_tree_branch_growth7->AgeDisRamp.AddRampPoint(0.1613f, 1.0000f);
		tcr_tree_branch_growth7->AgeDisRamp.AddRampPoint(0.2050f, 0.1000f);
		tcr_tree_branch_growth7->AgeDisRamp.AddRampPoint(1.0000f, 0.2000f);
		tcr_tree_branch_growth7->MaxAgeRamp = ETccRampInterp::Linear;
		tcr_tree_branch_growth7->MaxAgeRamp.ResizeRampPoints(2);
		tcr_tree_branch_growth7->MaxAgeRamp.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_branch_growth7->MaxAgeRamp.AddRampPoint(1.0000f, 0.3667f);
		tcr_tree_branch_growth7->RadiusShape = ETccRampInterp::Bezier;
		tcr_tree_branch_growth7->RadiusShape.ResizeRampPoints(3);
		tcr_tree_branch_growth7->RadiusShape.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_branch_growth7->RadiusShape.AddRampPoint(0.1506f, 0.2500f);
		tcr_tree_branch_growth7->RadiusShape.AddRampPoint(1.0000f, 0.2500f);
		tcr_tree_branch_growth7->Pitch0Ramp = ETccRampInterp::Linear;
		tcr_tree_branch_growth7->Pitch0Ramp.ResizeRampPoints(2);
		tcr_tree_branch_growth7->Pitch0Ramp.AddRampPoint(0.0000f, 0.4667f);
		tcr_tree_branch_growth7->Pitch0Ramp.AddRampPoint(1.0000f, 1.0000f);
		tcr_tree_branch_growth7->Pitch1Ramp = ETccRampInterp::Linear;
		tcr_tree_branch_growth7->Pitch1Ramp.ResizeRampPoints(3);
		tcr_tree_branch_growth7->Pitch1Ramp.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_branch_growth7->Pitch1Ramp.AddRampPoint(0.7412f, 0.9333f);
		tcr_tree_branch_growth7->Pitch1Ramp.AddRampPoint(1.0000f, 0.5000f);
		tcr_tree_branch_growth7->Soft = ETccRampInterp::Linear;
		tcr_tree_branch_growth7->Soft.ResizeRampPoints(2);
		tcr_tree_branch_growth7->Soft.AddRampPoint(0.0000f, 0.0000f);
		tcr_tree_branch_growth7->Soft.AddRampPoint(1.0000f, 1.0000f);
		tcr_tree_branch_growth7->StartPercent = 0.352000f;
		tcr_tree_branch_growth7->AgeDis = 3.640000f;
		tcr_tree_branch_growth7->AgeDisShowAdv = 1;
		tcr_tree_branch_growth7->AgeDisAdv = 1;
		tcr_tree_branch_growth7->MaxAge = 6.140000f;
		tcr_tree_branch_growth7->MaxAgeAdv = 1;
		tcr_tree_branch_growth7->DbgColor = FVector3f(0.660000f, 0.180000f, 0.750000f);
		tcr_tree_branch_growth7->Pitch0 = 22.000000f;
		tcr_tree_branch_growth7->Pitch0Adv = 1;
		tcr_tree_branch_growth7->Pitch1 = 72.599998f;
		tcr_tree_branch_growth7->Pitch1Adv = 1;
		tcr_tree_branch_growth7->Curl = 0.394000f;
		tcr_tree_branch_growth7->CurlFreq = 0.654000f;
		tcr_tree_branch_growth7->Cook();
	}
	{
		// Node: tcr_tree_branch_growth8
		tcr_tree_branch_growth8->SetInput(0, tcr_tree_branch_growth7);
		tcr_tree_branch_growth8->MaxCountRamp = ETccRampInterp::Linear;
		tcr_tree_branch_growth8->MaxCountRamp.ResizeRampPoints(2);
		tcr_tree_branch_growth8->MaxCountRamp.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_branch_growth8->MaxCountRamp.AddRampPoint(1.0000f, 1.0000f);
		tcr_tree_branch_growth8->SegLenRamp = ETccRampInterp::Linear;
		tcr_tree_branch_growth8->SegLenRamp.ResizeRampPoints(2);
		tcr_tree_branch_growth8->SegLenRamp.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_branch_growth8->SegLenRamp.AddRampPoint(1.0000f, 1.0000f);
		tcr_tree_branch_growth8->StartPercentRamp = ETccRampInterp::Linear;
		tcr_tree_branch_growth8->StartPercentRamp.ResizeRampPoints(2);
		tcr_tree_branch_growth8->StartPercentRamp.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_branch_growth8->StartPercentRamp.AddRampPoint(1.0000f, 0.5667f);
		tcr_tree_branch_growth8->AgeDisRamp = ETccRampInterp::Linear;
		tcr_tree_branch_growth8->AgeDisRamp.ResizeRampPoints(2);
		tcr_tree_branch_growth8->AgeDisRamp.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_branch_growth8->AgeDisRamp.AddRampPoint(1.0000f, 1.0000f);
		tcr_tree_branch_growth8->MaxAgeRamp = ETccRampInterp::Linear;
		tcr_tree_branch_growth8->MaxAgeRamp.ResizeRampPoints(2);
		tcr_tree_branch_growth8->MaxAgeRamp.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_branch_growth8->MaxAgeRamp.AddRampPoint(1.0000f, 0.5000f);
		tcr_tree_branch_growth8->RadiusShape = ETccRampInterp::Bezier;
		tcr_tree_branch_growth8->RadiusShape.ResizeRampPoints(3);
		tcr_tree_branch_growth8->RadiusShape.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_branch_growth8->RadiusShape.AddRampPoint(0.1538f, 0.6458f);
		tcr_tree_branch_growth8->RadiusShape.AddRampPoint(1.0000f, 0.4167f);
		tcr_tree_branch_growth8->Pitch0Ramp = ETccRampInterp::Linear;
		tcr_tree_branch_growth8->Pitch0Ramp.ResizeRampPoints(2);
		tcr_tree_branch_growth8->Pitch0Ramp.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_branch_growth8->Pitch0Ramp.AddRampPoint(1.0000f, 1.0000f);
		tcr_tree_branch_growth8->Pitch1Ramp = ETccRampInterp::Linear;
		tcr_tree_branch_growth8->Pitch1Ramp.ResizeRampPoints(2);
		tcr_tree_branch_growth8->Pitch1Ramp.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_branch_growth8->Pitch1Ramp.AddRampPoint(1.0000f, 0.2667f);
		tcr_tree_branch_growth8->Soft = ETccRampInterp::Linear;
		tcr_tree_branch_growth8->Soft.ResizeRampPoints(2);
		tcr_tree_branch_growth8->Soft.AddRampPoint(0.0000f, 0.0000f);
		tcr_tree_branch_growth8->Soft.AddRampPoint(1.0000f, 1.0000f);
		tcr_tree_branch_growth8->Gseed = 44;
		tcr_tree_branch_growth8->StartPercentAdv = 1;
		tcr_tree_branch_growth8->AgeDis = 1.660000f;
		tcr_tree_branch_growth8->MaxAge = 3.000000f;
		tcr_tree_branch_growth8->MaxAgeAdv = 1;
		tcr_tree_branch_growth8->DbgColor = FVector3f(0.210000f, 0.130000f, 0.600000f);
		tcr_tree_branch_growth8->YawOffset = 123.900002f;
		tcr_tree_branch_growth8->Pitch0 = 82.300003f;
		tcr_tree_branch_growth8->Pitch1 = 83.400002f;
		tcr_tree_branch_growth8->Pitch1ShowAdv = 1;
		tcr_tree_branch_growth8->Pitch1Adv = 1;
		tcr_tree_branch_growth8->Curl = 1.022000f;
		tcr_tree_branch_growth8->CurlFreq = 1.000000f;
		tcr_tree_branch_growth8->Force = -0.078000f;
		tcr_tree_branch_growth8->Cook();
	}
	{
		// Node: tcc_vex1
		tcc_vex1->SetInput(0, nullptr);
		tcc_vex1->SetInput(1, tcr_tree_branch_growth8);
		tcc_vex1->Cook();
		{
			FTccGeometryPtr Geo0 = tcc_vex1->GetGeoRef(0);
			FTccGeometryConstPtr Geo1 = tcr_tree_branch_growth8->GetConstGeoResult(0);
			// get last point of each branches, then copy branches to it
			int32 num_branches = vex_nprimitives(Geo1);
			TArray < FVector3f > poses;
			TArray < FVector4f > rots;
			TArray < int32 > ids;
			vex_resize(poses, num_branches);
			vex_resize(rots, num_branches);
			vex_resize(ids, num_branches);
			FVector3f forward = vex_set(0, 0, 1);
			for(int b = 0;b < num_branches;b ++)
			{
			TArray < int32 > branch_pts= vex_primpoints(Geo1, b);
			int32 branch_end_pt = branch_pts [ vex_len(branch_pts) - 1];
			    // use last point's position
			poses [ b] = vex_pointp(Geo1, branch_end_pt);
			    // rotate yaw only
			FVector3f dir = vex_pointv(Geo1, "dir", branch_end_pt);
			FVector3f dir_h = vex_normalize(vex_set(dir.X, 0.f, dir.Z));
			rots [ b] = vex_dihedral(forward, dir_h);
			    // select instance by pitch angle
			    // -15,0,15,30 degrees is about dir.y = -0.26, 0, 0.26, 0.5
			    // -7.5, 7.5, 22.5, 37.5 degrees is about dir.y = -0.13, 0.13, 0.38, 0.60
			int32 _id = 0;
			if(dir.Y < - 0.13f)
			_id = 0;// use - 15 degree branches
			else if(dir.Y < 0.13f)
			_id = 1;// use 0 degree branches
			else if(dir.Y < 0.38f)
			_id = 2;// use 15 degree branches
			else
			_id = 3;// use 30 degree branches
			ids [ b] = _id;
			}
			TArray < int32 > pts= vex_addpoints(Geo0, poses);
			vex_setpointsattrib(Geo0, "orient", pts, rots);
			vex_setpointsattrib(Geo0, "instance_id", pts, ids);
		}
	}
	{
		// Node: tcc_instancer1
		tcc_instancer1->SetInput(0, foreach_begin2);
		tcc_instancer1->SetInput(1, tcc_vex1);
		tcc_instancer1->Useidattrib = 1;
		tcc_instancer1->Idattrib = TEXT("instance_id");
		tcc_instancer1->Cook();
	}
	SetGeoResult(UTcrTreeBigUe2::output0, tcc_instancer1->GetGeoResult(0));
}

