// Auto generated by UnrealTcc. 

#include "TcrTreeBigUe.h"
#include "TcrTreeTrunkSkeleton.h"
#include "TcrTreeBranchSkeleton.h"
#include "TcrScatterOnBranches.h"
#include "TcrTreeBigSubbranches.h"
#include "TcrTreeLeafScatterVariation.h"
#include "Generated/TccTemplates.h"
#include "TccForBlock.h"
#include "TccSwitch.h"
#include "TctTexVex.h"
#include "TccAttribute.h"
#include "TccGeometry.h"
#include "Vex.h"
#include "HScript.h"

 UTcrTreeBigUe::UTcrTreeBigUe() 
{
}
FTccNodePtr UTcrTreeBigUe::CreateNode() 
{
	TSharedPtr<FTcrTreeBigUe> Node = MakeShared<FTcrTreeBigUe>();
	SyncParams(Node);
	return Node;
}
void UTcrTreeBigUe::SyncParams(FTccNodePtr InNode) 
{
	TSharedPtr<FTcrTreeBigUe> Node = StaticCastSharedPtr<FTcrTreeBigUe>(InNode);
}

 FTcrTreeBigUe::FTcrTreeBigUe() 
{
	InitInputsCount(0);
	trunk = new FTcrTreeTrunkSkeleton();
	trunk->InitMultiRefs(false); // RefCount = 1
	branch1 = new FTcrTreeBranchSkeleton();
	branch1->InitMultiRefs(true); // RefCount = 2
	tcc_sphere2 = new FTccSphere();
	tcc_sphere2->InitMultiRefs(false); // RefCount = 1
	tcc_vex2 = new FTccVex();
	tcc_vex2->InitMultiRefs(false); // RefCount = 1
	tcr_scatter_on_branches1 = new FTcrScatterOnBranches();
	tcr_scatter_on_branches1->InitMultiRefs(false); // RefCount = 1
	tcc_copy_to_point1 = new FTccCopyToPoint();
	tcc_copy_to_point1->InitMultiRefs(false); // RefCount = 1
	tcc_sdf_from_polygon2 = new FTccSdfFromPolygon();
	tcc_sdf_from_polygon2->InitMultiRefs(true); // RefCount = 3
	branch2 = new FTcrTreeBranchSkeleton();
	branch2->InitMultiRefs(false); // RefCount = 1
	branch3 = new FTcrTreeBranchSkeleton();
	branch3->InitMultiRefs(true); // RefCount = 2
	tree_skin1 = new FTccPolyWire();
	tree_skin1->InitMultiRefs(false); // RefCount = 1
	mat_trunk = new FTccUnrealMaterial();
	mat_trunk->InitMultiRefs(false); // RefCount = 1
	tcc_pack1 = new FTccPack();
	tcc_pack1->InitMultiRefs(false); // RefCount = 1
	for_variation_number = new FTccForBlock();
	for_variation_number->InitMultiRefs(false); // RefCount = 1
	for_variation_number->InitInputsCount(1);
		calc_seed = new FTccVex();
		calc_seed->InitMultiRefs(false); // RefCount = 1
		subbranches = new FTcrTreeBigSubbranches();
		subbranches->InitMultiRefs(false); // RefCount = 1
		mat_leaf = new FTccUnrealMaterial();
		mat_leaf->InitMultiRefs(false); // RefCount = 1
		packed_name = new FTccVex();
		packed_name->InitMultiRefs(false); // RefCount = 1
		pack_branch_instance = new FTccPack();
		pack_branch_instance->InitMultiRefs(false); // RefCount = 1
		add_instance_attrib = new FTccVex();
		add_instance_attrib->InitMultiRefs(false); // RefCount = 1
	tcr_tree_leaf_scatter_variation1 = new FTcrTreeLeafScatterVariation();
	tcr_tree_leaf_scatter_variation1->InitMultiRefs(false); // RefCount = 1
	tcc_merge1 = new FTccMerge();
	tcc_merge1->InitMultiRefs(false); // RefCount = 1
}
 FTcrTreeBigUe::~FTcrTreeBigUe() 
{
	delete trunk; 
	delete branch1; 
	delete tcc_sphere2; 
	delete tcc_vex2; 
	delete tcr_scatter_on_branches1; 
	delete tcc_copy_to_point1; 
	delete tcc_sdf_from_polygon2; 
	delete branch2; 
	delete branch3; 
	delete tree_skin1; 
	delete mat_trunk; 
	delete tcc_pack1; 
	delete for_variation_number; 
		delete calc_seed; 
		delete subbranches; 
		delete mat_leaf; 
		delete packed_name; 
		delete pack_branch_instance; 
		delete add_instance_attrib; 
	delete tcr_tree_leaf_scatter_variation1; 
	delete tcc_merge1; 
}
void FTcrTreeBigUe::Cook() 
{
	{
		// Node: trunk
		trunk->RscaleAlongCurve = ETccRampInterp::Bezier;
		trunk->RscaleAlongCurve.ResizeRampPoints(4);
		trunk->RscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		trunk->RscaleAlongCurve.AddRampPoint(0.1749f, 0.3542f);
		trunk->RscaleAlongCurve.AddRampPoint(0.5366f, 0.4167f);
		trunk->RscaleAlongCurve.AddRampPoint(1.0000f, 0.3542f);
		trunk->Length = 20.000000f;
		trunk->Radius = 1.600000f;
		trunk->Segs = 10;
		trunk->Freq = 0.750000f;
		trunk->EnableBend = 1;
		trunk->Bend = 4.900000f;
		trunk->Cook();
	}
	{
		// Node: branch1
		branch1->SetInput(0, trunk);
		branch1->RscaleAlongCurve = ETccRampInterp::Bezier;
		branch1->RscaleAlongCurve.ResizeRampPoints(3);
		branch1->RscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		branch1->RscaleAlongCurve.AddRampPoint(0.0851f, 0.0000f);
		branch1->RscaleAlongCurve.AddRampPoint(1.0000f, 0.1400f);
		branch1->LscaleAlongCurve = ETccRampInterp::Linear;
		branch1->LscaleAlongCurve.ResizeRampPoints(2);
		branch1->LscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		branch1->LscaleAlongCurve.AddRampPoint(1.0000f, 0.4615f);
		branch1->Npts = 7;
		branch1->Gpercent = FVector2f(0.700000f, 1.000000f);
		branch1->DbgColor = FVector3f(0.500000f, 0.000000f, 0.500000f);
		branch1->PitchR = FVector2f(18.000000f, 25.000000f);
		branch1->RadiusScale = 0.788000f;
		branch1->BranchLength = 14.000000f;
		branch1->EnableNoise = 1;
		branch1->Segs = 5;
		branch1->Freq = 0.280000f;
		branch1->Amp = 2.000000f;
		branch1->Bend1 = 1;
		branch1->Bend1Angle = -22.700001f;
		branch1->Bend1Length = 0.285000f;
		branch1->Bend2 = 1;
		branch1->Bend2Angle = 59.200001f;
		branch1->Bend2Length = 0.982000f;
		branch1->Bend2Offset = 5.740000f;
		branch1->Cook();
	}
	{
		// Node: tcc_sphere2
		tcc_sphere2->Type = UTccSphere::Polygon;
		tcc_sphere2->Rad = FVector3f(5.500000f, 5.500000f, 5.500000f);
		tcc_sphere2->Cook();
	}
	{
		// Node: tcc_vex2
		tcc_vex2->SetInput(0, tcc_sphere2);
		float _percent = 0.380000f;
		tcc_vex2->Cook();
		{
			FTccGeometryPtr Geo0 = tcc_vex2->GetGeoResult(0);
			const FVector3f s = vex_getbbox_size(Geo0);
			const FVector3f bbox_min = vex_getbbox_min(Geo0);
			const float percent = _percent;
			const int32 _numpt = Geo0->GetNumPoints();
			for(int32 i = 0; i < _numpt; i++)
			{
				const int32 _ptnum = i;
				FVector3f& _P = Geo0->GetPositions()[i];
				if(_P.Z - bbox_min.Y < s.Y * percent)
				{
				_P.Z = s.Y * percent + bbox_min.Y;
				}
			}
		}
	}
	{
		// Node: tcr_scatter_on_branches1
		tcr_scatter_on_branches1->SetInput(0, branch1);
		tcr_scatter_on_branches1->Gseed = 34;
		tcr_scatter_on_branches1->ScaleMin = FVector3f(0.750000f, 0.800000f, 0.400000f);
		tcr_scatter_on_branches1->Cook();
	}
	{
		// Node: tcc_copy_to_point1
		tcc_copy_to_point1->SetInput(0, tcc_vex2);
		tcc_copy_to_point1->SetInput(1, tcr_scatter_on_branches1);
		tcc_copy_to_point1->Cook();
	}
	{
		// Node: tcc_sdf_from_polygon2
		tcc_sdf_from_polygon2->SetInput(0, tcc_copy_to_point1);
		tcc_sdf_from_polygon2->Voxelsize = 1.200000f;
		tcc_sdf_from_polygon2->Cook();
	}
	{
		// Node: branch2
		branch2->SetInput(0, branch1);
		branch2->SetInput(1, tcc_sdf_from_polygon2);
		branch2->RscaleAlongCurve = ETccRampInterp::Linear;
		branch2->RscaleAlongCurve.ResizeRampPoints(3);
		branch2->RscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		branch2->RscaleAlongCurve.AddRampPoint(0.2448f, 0.6042f);
		branch2->RscaleAlongCurve.AddRampPoint(1.0000f, 0.2917f);
		branch2->LscaleAlongCurve = ETccRampInterp::Linear;
		branch2->LscaleAlongCurve.ResizeRampPoints(2);
		branch2->LscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		branch2->LscaleAlongCurve.AddRampPoint(1.0000f, 0.5385f);
		branch2->Npts = 6;
		branch2->Gpercent = FVector2f(0.400000f, 1.000000f);
		branch2->DbgColor = FVector3f(0.000000f, 0.500000f, 0.500000f);
		branch2->Pattern = UTcrTreeBranchSkeleton::AngleRange;
		branch2->Yaw = 0.000000f;
		branch2->YawRange = 109.500000f;
		branch2->AngleOffset = 110.000000f;
		branch2->PitchR = FVector2f(35.000000f, 55.000000f);
		branch2->RadiusScale = 0.630000f;
		branch2->Prune = 1;
		branch2->BranchLength = 6.410000f;
		branch2->EnableNoise = 1;
		branch2->Freq = 4.370000f;
		branch2->Amp = 1.320000f;
		branch2->Cook();
	}
	{
		// Node: branch3
		branch3->SetInput(0, branch2);
		branch3->SetInput(1, tcc_sdf_from_polygon2);
		branch3->RscaleAlongCurve = ETccRampInterp::Linear;
		branch3->RscaleAlongCurve.ResizeRampPoints(2);
		branch3->RscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		branch3->RscaleAlongCurve.AddRampPoint(1.0000f, 0.5000f);
		branch3->LscaleAlongCurve = ETccRampInterp::Linear;
		branch3->LscaleAlongCurve.ResizeRampPoints(2);
		branch3->LscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		branch3->LscaleAlongCurve.AddRampPoint(1.0000f, 0.4872f);
		branch3->Npts = 5;
		branch3->Gpercent = FVector2f(0.100000f, 1.000000f);
		branch3->BranchSegs = 6;
		branch3->DbgColor = FVector3f(0.500000f, 1.000000f, 0.000000f);
		branch3->PitchR = FVector2f(25.000000f, 45.000000f);
		branch3->Prune = 1;
		branch3->BranchLength = 2.520000f;
		branch3->EnableNoise = 1;
		branch3->Freq = 1.240000f;
		branch3->Amp = 0.231000f;
		branch3->Cook();
	}
	{
		// Node: tree_skin1
		tree_skin1->SetInput(0, branch3);
		tree_skin1->EnableRadiusAttrib = 1;
		tree_skin1->RAttrib = TEXT("radius");
		tree_skin1->Divs = 7;
		tree_skin1->Cook();
	}
	{
		// Node: mat_trunk
		mat_trunk->SetInput(0, tree_skin1);
		mat_trunk->MatPath = TEXT("/Game/ForestDemo/Materials/MI_TreeBig_Trunk.MI_TreeBig_Trunk");
		mat_trunk->Cook();
	}
	{
		// Node: tcc_pack1
		tcc_pack1->SetInput(0, mat_trunk);
		tcc_pack1->GeoName = TEXT("trunk");
		tcc_pack1->Cook();
	}
	{
		// Node: for_variation_number
		for_variation_number->SetInput(0, nullptr);
		for_variation_number->Itermethod = UTccForBlock::ByCount;
		for_variation_number->Method = UTccForBlock::MergeEachIteration;
		for_variation_number->Iterations = 6;
		for_variation_number->Cook();
		{
			// By Count, Merge Each Iteration
			const int32 NumIterations = 6;
			for(int32 __iter = 0; __iter < NumIterations; __iter ++)
			{
				const int32 _iteration = __iter;
				FTccNode* block_input0 = nullptr;
				{
					// Node: calc_seed
					calc_seed->SetInput(0, block_input0);
					calc_seed->SetInput(1, nullptr);
					calc_seed->Cook();
					{
						FTccGeometryPtr Geo0 = calc_seed->GetGeoResult(0);
						FTccAttribPtr attr_gseed = Geo0->AddDetailAttrib("gseed", ETccAttribType::I);
						FTccAttribPtr attr_hie = Geo0->AddDetailAttrib("hie", ETccAttribType::I);
						FTccAttribPtr attr_smin = Geo0->AddDetailAttrib("smin", ETccAttribType::F);
						FTccAttribPtr attr_smax = Geo0->AddDetailAttrib("smax", ETccAttribType::F);
						int32& _gseed = attr_gseed->GetData<int32>()[0];
						int32& _hie = attr_hie->GetData<int32>()[0];
						float& _smin = attr_smin->GetData<float>()[0];
						float& _smax = attr_smax->GetData<float>()[0];
						int32 iter = _iteration;
						_gseed = iter * 2 + 4;
						int32 level = iter / 2;
						_hie = level;
						_smin = level * 2.f + 1.f;
						_smax = level * 2.f + 2.f;
					}
				}
				
				{
					// Node: subbranches
					subbranches->SetInput(0, calc_seed);
					FTccGeometryConstPtr Geo0 = subbranches->GetInput(0)->GetConstGeoResult(0);
					subbranches->Gseed = int32(hs_detail(Geo0, "gseed", 0));
					subbranches->Hierachy = int32(hs_detail(Geo0, "hie", 0));
					subbranches->SizeMin = float(hs_detail(Geo0, "smin", 0));
					subbranches->SizeMax = float(hs_detail(Geo0, "smax", 0));
					subbranches->Cook();
				}
				
				{
					// Node: mat_leaf
					mat_leaf->SetInput(0, subbranches);
					mat_leaf->MatPath = TEXT("/Game/ForestDemo/Materials/MI_TreeBig_Leaf.MI_TreeBig_Leaf");
					mat_leaf->Cook();
				}
				
				{
					// Node: packed_name
					packed_name->SetInput(0, mat_leaf);
					packed_name->SetInput(1, nullptr);
					packed_name->Cook();
					{
						FTccGeometryPtr Geo0 = packed_name->GetGeoResult(0);
						FTccAttribPtr attr_name = Geo0->AddDetailAttrib("name", ETccAttribType::S);
						FString& _name = attr_name->GetData<FString>()[0];
						int32 iter = _iteration;
						_name = "subbranch" + vex_itoa(iter);
					}
				}
				
				{
					// Node: pack_branch_instance
					pack_branch_instance->SetInput(0, packed_name);
					FTccGeometryConstPtr Geo0 = pack_branch_instance->GetInput(0)->GetConstGeoResult(0);
					pack_branch_instance->GeoName = hs_details(Geo0, "name");
					pack_branch_instance->Cook();
				}
				
				{
					// Node: add_instance_attrib
					add_instance_attrib->SetInput(0, pack_branch_instance);
					add_instance_attrib->SetInput(1, nullptr);
					add_instance_attrib->Cook();
					{
						FTccGeometryPtr Geo0 = add_instance_attrib->GetGeoResult(0);
						FTccAttribPtr attr_instance_id = Geo0->AddPackedGeoAttrib("instance_id", ETccAttribType::I);
						FTccAttribPtr attr_len = Geo0->AddPackedGeoAttrib("len", ETccAttribType::F);
						const int32 _numpacked = Geo0->GetNumPackedGeos();
						for(int32 i = 0; i < _numpacked; i++)
						{
							const int32 _packednum = i;
							int32& _instance_id = attr_instance_id->GetData<int32>()[i];
							float& _len = attr_len->GetData<float>()[i];
							int32 iter = _iteration;
							_instance_id = iter;
							FVector3f s = vex_getbbox_size(Geo0);
							_len = vex_max(s.X, s.Y, s.Z);
						}
					}
				}
				
				for_variation_number->SetPieceResult(__iter, add_instance_attrib->GetGeoResult(0));
			}
			for_variation_number->MergeResult();
		}
	}
	{
		// Node: tcr_tree_leaf_scatter_variation1
		tcr_tree_leaf_scatter_variation1->SetInput(0, branch3);
		tcr_tree_leaf_scatter_variation1->SetInput(1, for_variation_number);
		tcr_tree_leaf_scatter_variation1->SetInput(2, tcc_sdf_from_polygon2);
		tcr_tree_leaf_scatter_variation1->ScaleRamp = ETccRampInterp::Linear;
		tcr_tree_leaf_scatter_variation1->ScaleRamp.ResizeRampPoints(4);
		tcr_tree_leaf_scatter_variation1->ScaleRamp.AddRampPoint(0.0000f, 0.5208f);
		tcr_tree_leaf_scatter_variation1->ScaleRamp.AddRampPoint(0.2510f, 1.0000f);
		tcr_tree_leaf_scatter_variation1->ScaleRamp.AddRampPoint(0.6988f, 0.6250f);
		tcr_tree_leaf_scatter_variation1->ScaleRamp.AddRampPoint(1.0000f, 0.0000f);
		tcr_tree_leaf_scatter_variation1->BranchSeed = 5;
		tcr_tree_leaf_scatter_variation1->Method = UTcrTreeLeafScatterVariation::ByDistance;
		tcr_tree_leaf_scatter_variation1->Distance = 0.340000f;
		tcr_tree_leaf_scatter_variation1->Mirror = 0;
		tcr_tree_leaf_scatter_variation1->YawRange = FVector2f(15.000000f, 60.000000f);
		tcr_tree_leaf_scatter_variation1->PitchRand = 180.899994f;
		tcr_tree_leaf_scatter_variation1->Scale = FVector2f(0.230000f, 0.400000f);
		tcr_tree_leaf_scatter_variation1->Prune = 1;
		tcr_tree_leaf_scatter_variation1->EnableScaleCurve = 0;
		tcr_tree_leaf_scatter_variation1->Cook();
	}
	{
		// Node: tcc_merge1
		tcc_merge1->SetInput(0, tcc_pack1);
		tcc_merge1->SetInput(1, tcr_tree_leaf_scatter_variation1);
		tcc_merge1->Cook();
	}
	SetGeoResult(UTcrTreeBigUe::output0, tcc_merge1->GetGeoResult(0));
}

