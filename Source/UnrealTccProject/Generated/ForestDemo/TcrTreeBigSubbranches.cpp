// Auto generated by UnrealTcc. 

#include "TcrTreeBigSubbranches.h"
#include "TcrTreeTrunkSkeleton.h"
#include "TcrTreeBranchSkeleton.h"
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

 UTcrTreeBigSubbranches::UTcrTreeBigSubbranches() 
{
}
FTccNodePtr UTcrTreeBigSubbranches::CreateNode() 
{
	TSharedPtr<FTcrTreeBigSubbranches> Node = MakeShared<FTcrTreeBigSubbranches>();
	SyncParams(Node);
	return Node;
}
void UTcrTreeBigSubbranches::SyncParams(FTccNodePtr InNode) 
{
	TSharedPtr<FTcrTreeBigSubbranches> Node = StaticCastSharedPtr<FTcrTreeBigSubbranches>(InNode);
	Node->Gseed = Gseed;
	Node->Hierachy = Hierachy;
	Node->SizeMin = SizeMin;
	Node->SizeMax = SizeMax;
}

 FTcrTreeBigSubbranches::FTcrTreeBigSubbranches() 
{
	InitInputsCount(1);
	main_branch = new FTcrTreeTrunkSkeleton();
	main_branch->InitMultiRefs(false); // RefCount = 1
	trunk_laydown = new FTccTransform();
	trunk_laydown->InitMultiRefs(false); // RefCount = 1
	info_by_hierarchy = new FTccVex();
	info_by_hierarchy->InitMultiRefs(false); // RefCount = 1
	branch1 = new FTcrTreeBranchSkeleton();
	branch1->InitMultiRefs(false); // RefCount = 1
	branch2 = new FTcrTreeBranchSkeleton();
	branch2->InitMultiRefs(false); // RefCount = 1
	hierarchy1 = new FTccSwitch();
	hierarchy1->InitMultiRefs(false); // RefCount = 1
		branch3 = new FTcrTreeBranchSkeleton();
		branch3->InitMultiRefs(false); // RefCount = 1
	hierarchy2 = new FTccSwitch();
	hierarchy2->InitMultiRefs(true); // RefCount = 2
		branch4 = new FTcrTreeBranchSkeleton();
		branch4->InitMultiRefs(false); // RefCount = 1
	tree_skin = new FTccPolyWire();
	tree_skin->InitMultiRefs(false); // RefCount = 1
	tcc_attrib_delete1 = new FTccAttribDelete();
	tcc_attrib_delete1->InitMultiRefs(false); // RefCount = 1
	tcr_tree_simple_leaf1 = new FTcrTreeSimpleLeaf();
	tcr_tree_simple_leaf1->InitMultiRefs(false); // RefCount = 1
	tcc_uv_transform1 = new FTccUvTransform();
	tcc_uv_transform1->InitMultiRefs(false); // RefCount = 1
	leaf_scatter = new FTcrTreeLeafScatter();
	leaf_scatter->InitMultiRefs(false); // RefCount = 1
	tcc_merge1 = new FTccMerge();
	tcc_merge1->InitMultiRefs(false); // RefCount = 1
	tcc_unpack1 = new FTccUnpack();
	tcc_unpack1->InitMultiRefs(false); // RefCount = 1
}
 FTcrTreeBigSubbranches::~FTcrTreeBigSubbranches() 
{
	delete main_branch; 
	delete trunk_laydown; 
	delete info_by_hierarchy; 
	delete branch1; 
	delete branch2; 
	delete hierarchy1; 
		delete branch3; 
	delete hierarchy2; 
		delete branch4; 
	delete tree_skin; 
	delete tcc_attrib_delete1; 
	delete tcr_tree_simple_leaf1; 
	delete tcc_uv_transform1; 
	delete leaf_scatter; 
	delete tcc_merge1; 
	delete tcc_unpack1; 
}
void FTcrTreeBigSubbranches::Cook() 
{
	{
		// Node: main_branch
		main_branch->RscaleAlongCurve = ETccRampInterp::Bezier;
		main_branch->RscaleAlongCurve.ResizeRampPoints(4);
		main_branch->RscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		main_branch->RscaleAlongCurve.AddRampPoint(0.1744f, 0.6250f);
		main_branch->RscaleAlongCurve.AddRampPoint(0.5392f, 0.5833f);
		main_branch->RscaleAlongCurve.AddRampPoint(1.0000f, 0.5208f);
		main_branch->Length = float(hs_fit01(hs_rand(Gseed + 1.5f), SizeMin, SizeMax));
		main_branch->Segs = 13;
		main_branch->Radius = float((Hierachy + 1) * 0.05f);
		main_branch->Nseed = int32(Gseed);
		main_branch->Freq = 0.650000f;
		main_branch->Amp = float(main_branch->Length * 0.2f);
		main_branch->Bend = 4.900000f;
		main_branch->Cook();
	}
	{
		// Node: trunk_laydown
		trunk_laydown->SetInput(0, main_branch);
		trunk_laydown->R = FVector3f(90.000000f, 0.000000f, 0.000000f);
		trunk_laydown->Cook();
	}
	{
		// Node: info_by_hierarchy
		info_by_hierarchy->SetInput(0, trunk_laydown);
		info_by_hierarchy->Cook();
		{
			FTccGeometryPtr Geo0 = info_by_hierarchy->GetGeoRef(0);
			FTccAttribPtr attr_branch1_len = Geo0->AddDetailAttrib("branch1_len", ETccAttribType::F);
			FTccAttribPtr attr_branch2_len = Geo0->AddDetailAttrib("branch2_len", ETccAttribType::F);
			FTccAttribPtr attr_branch3_len = Geo0->AddDetailAttrib("branch3_len", ETccAttribType::F);
			FTccAttribPtr attr_branch4_len = Geo0->AddDetailAttrib("branch4_len", ETccAttribType::F);
			FTccAttribPtr attr_leaf_per_branch = Geo0->AddDetailAttrib("leaf_per_branch", ETccAttribType::I);
			FTccAttribPtr attr_leaf_mirror = Geo0->AddDetailAttrib("leaf_mirror", ETccAttribType::I);
			float& _branch1_len = attr_branch1_len->GetData<float>()[0];
			float& _branch2_len = attr_branch2_len->GetData<float>()[0];
			float& _branch3_len = attr_branch3_len->GetData<float>()[0];
			float& _branch4_len = attr_branch4_len->GetData<float>()[0];
			int32& _leaf_per_branch = attr_leaf_per_branch->GetData<int32>()[0];
			int32& _leaf_mirror = attr_leaf_mirror->GetData<int32>()[0];
			int32 gseed = Gseed;
			int32 level = Hierachy;
			float smin = SizeMin;
			float smax = SizeMax;
			float base_length = vex_fit01(vex_rand(gseed + 1.5f), smin, smax);
			// if branch length rule modified, adjust the instance selection algorithm in tree_leaf_scatter_variation1
			_branch1_len = base_length * 0.5f;
			_branch2_len = base_length * 0.25f;
			_branch3_len = base_length * 0.25f * 0.8f;
			_branch4_len = base_length * 0.25f * 0.5f;
			// leaf rules
			// level 0 : 1 leaf per branch
			// level 1 : 1 leaf mirrored
			// level 2+ : 2 leaf mirrored
			_leaf_per_branch = level <= 1 ? 1 : 2;
			_leaf_mirror = level <= 0 ? 0 : 1;
		}
	}
	{
		// Node: branch1
		branch1->SetInput(0, info_by_hierarchy);
		FTccGeometryConstPtr Geo0 = branch1->GetInput(0)->GetConstGeoResult(0);
		branch1->RscaleAlongCurve = ETccRampInterp::Bezier;
		branch1->RscaleAlongCurve.ResizeRampPoints(3);
		branch1->RscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		branch1->RscaleAlongCurve.AddRampPoint(0.2670f, 0.3750f);
		branch1->RscaleAlongCurve.AddRampPoint(1.0000f, 0.2667f);
		branch1->LscaleAlongCurve = ETccRampInterp::Linear;
		branch1->LscaleAlongCurve.ResizeRampPoints(2);
		branch1->LscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		branch1->LscaleAlongCurve.AddRampPoint(1.0000f, 1.0000f);
		branch1->BranchSeed = int32(Gseed);
		branch1->Npts = 5;
		branch1->Gpercent = FVector2f(0.100000f, 1.000000f);
		branch1->AngleOffset = float(hs_fit01(hs_rand(Gseed + 1.1f), 0, 180));
		branch1->PitchR = FVector2f(45.000000f, 55.000000f);
		branch1->BranchLength = float(hs_detail(Geo0, "branch1_len", 0));
		branch1->EnableNoise = 1;
		branch1->Freq = 1.740000f;
		branch1->Amp = 0.610000f;
		branch1->Bend1Angle = -51.000000f;
		branch1->Bend1Length = 0.285000f;
		branch1->Bend2Angle = 18.000000f;
		branch1->Bend2Length = 0.982000f;
		branch1->Bend2Offset = 5.740000f;
		branch1->Cook();
	}
	{
		// Node: branch2
		branch2->SetInput(0, branch1);
		FTccGeometryConstPtr Geo0 = branch2->GetInput(0)->GetConstGeoResult(0);
		branch2->RscaleAlongCurve = ETccRampInterp::Linear;
		branch2->RscaleAlongCurve.ResizeRampPoints(2);
		branch2->RscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		branch2->RscaleAlongCurve.AddRampPoint(1.0000f, 0.5000f);
		branch2->LscaleAlongCurve = ETccRampInterp::Linear;
		branch2->LscaleAlongCurve.ResizeRampPoints(2);
		branch2->LscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
		branch2->LscaleAlongCurve.AddRampPoint(1.0000f, 1.0000f);
		branch2->BranchSeed = int32(Gseed);
		branch2->Npts = 2;
		branch2->Gpercent = FVector2f(0.300000f, 1.000000f);
		branch2->BranchSegs = 3;
		branch2->BranchLength = float(hs_detail(Geo0, "branch2_len", 0));
		branch2->Cook();
	}
	{
		// Node: hierarchy1
		hierarchy1->SetInput(0, branch2);
		hierarchy1->Input = int32(Hierachy >= 1);
		hierarchy1->NumCases = 2;
		hierarchy1->Cook();
		FTccGeometryPtr SwitchResult = nullptr;
		const int32 Selection = hierarchy1->Input;
		switch (Selection)
		{
			case 0:
			{
				
				SwitchResult = nullptr;
			}
			break;
			case 1:
			{
				{
					// Node: branch3
					branch3->SetInput(0, branch2);
					FTccGeometryConstPtr Geo0 = branch3->GetInput(0)->GetConstGeoResult(0);
					branch3->RscaleAlongCurve = ETccRampInterp::Linear;
					branch3->RscaleAlongCurve.ResizeRampPoints(2);
					branch3->RscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
					branch3->RscaleAlongCurve.AddRampPoint(1.0000f, 0.5000f);
					branch3->LscaleAlongCurve = ETccRampInterp::Linear;
					branch3->LscaleAlongCurve.ResizeRampPoints(2);
					branch3->LscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
					branch3->LscaleAlongCurve.AddRampPoint(1.0000f, 1.0000f);
					branch3->BranchSeed = int32(Gseed);
					branch3->Npts = 2;
					branch3->BranchSegs = 3;
					branch3->BranchLength = float(hs_detail(Geo0, "branch3_len", 0));
					branch3->Cook();
				}
				
				SwitchResult = branch3->GetGeoResult(0);
			}
			break;
			default:
			{
				checkNoEntry();
			}
			break;
		}
		hierarchy1->SetValidGeoResult(0, SwitchResult);
	}
	{
		// Node: hierarchy2
		hierarchy2->SetInput(0, hierarchy1);
		hierarchy2->Input = int32(Hierachy >= 2);
		hierarchy2->NumCases = 2;
		hierarchy2->Cook();
		FTccGeometryPtr SwitchResult = nullptr;
		const int32 Selection = hierarchy2->Input;
		switch (Selection)
		{
			case 0:
			{
				
				SwitchResult = nullptr;
			}
			break;
			case 1:
			{
				{
					// Node: branch4
					branch4->SetInput(0, hierarchy1);
					FTccGeometryConstPtr Geo0 = branch4->GetInput(0)->GetConstGeoResult(0);
					branch4->RscaleAlongCurve = ETccRampInterp::Linear;
					branch4->RscaleAlongCurve.ResizeRampPoints(2);
					branch4->RscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
					branch4->RscaleAlongCurve.AddRampPoint(1.0000f, 0.5000f);
					branch4->LscaleAlongCurve = ETccRampInterp::Linear;
					branch4->LscaleAlongCurve.ResizeRampPoints(2);
					branch4->LscaleAlongCurve.AddRampPoint(0.0000f, 1.0000f);
					branch4->LscaleAlongCurve.AddRampPoint(1.0000f, 1.0000f);
					branch4->Npts = 2;
					branch4->BranchSegs = 4;
					branch4->PitchR = FVector2f(15.000000f, 35.000000f);
					branch4->BranchLength = float(hs_detail(Geo0, "branch4_len", 0));
					branch4->Cook();
				}
				
				SwitchResult = branch4->GetGeoResult(0);
			}
			break;
			default:
			{
				checkNoEntry();
			}
			break;
		}
		hierarchy2->SetValidGeoResult(0, SwitchResult);
	}
	{
		// Node: tree_skin
		tree_skin->SetInput(0, hierarchy2);
		tree_skin->EnableRadiusAttrib = 1;
		tree_skin->RAttrib = TEXT("radius");
		tree_skin->Divs = 7;
		tree_skin->Cook();
	}
	{
		// Node: tcc_attrib_delete1
		tcc_attrib_delete1->SetInput(0, tree_skin);
		tcc_attrib_delete1->Ptdel = TEXT("*");
		tcc_attrib_delete1->Primdel = TEXT("*");
		tcc_attrib_delete1->Dtldel = TEXT("*");
		tcc_attrib_delete1->Cook();
	}
	{
		// Node: tcr_tree_simple_leaf1
		tcr_tree_simple_leaf1->Shape = ETccRampInterp::Linear;
		tcr_tree_simple_leaf1->Shape.ResizeRampPoints(7);
		tcr_tree_simple_leaf1->Shape.AddRampPoint(0.0000f, 0.0885f);
		tcr_tree_simple_leaf1->Shape.AddRampPoint(0.1035f, 0.7708f);
		tcr_tree_simple_leaf1->Shape.AddRampPoint(0.3643f, 1.0000f);
		tcr_tree_simple_leaf1->Shape.AddRampPoint(0.5442f, 1.0000f);
		tcr_tree_simple_leaf1->Shape.AddRampPoint(0.7965f, 0.8125f);
		tcr_tree_simple_leaf1->Shape.AddRampPoint(0.9337f, 0.1667f);
		tcr_tree_simple_leaf1->Shape.AddRampPoint(1.0000f, 0.0000f);
		tcr_tree_simple_leaf1->Size = FVector2f(0.150000f, 0.200000f);
		tcr_tree_simple_leaf1->Cook();
	}
	{
		// Node: tcc_uv_transform1
		tcc_uv_transform1->SetInput(0, tcr_tree_simple_leaf1);
		tcc_uv_transform1->T = FVector3f(0.550000f, 0.000000f, 0.550000f);
		tcc_uv_transform1->S = FVector3f(0.400000f, 0.400000f, 0.400000f);
		tcc_uv_transform1->Cook();
	}
	{
		// Node: leaf_scatter
		leaf_scatter->SetInput(0, hierarchy2);
		leaf_scatter->SetInput(1, tcc_uv_transform1);
		FTccGeometryConstPtr Geo0 = leaf_scatter->GetInput(0)->GetConstGeoResult(0);
		leaf_scatter->ScaleRamp = ETccRampInterp::Linear;
		leaf_scatter->ScaleRamp.ResizeRampPoints(2);
		leaf_scatter->ScaleRamp.AddRampPoint(0.0000f, 1.0000f);
		leaf_scatter->ScaleRamp.AddRampPoint(1.0000f, 1.0000f);
		leaf_scatter->ScaleRampH = ETccRampInterp::Linear;
		leaf_scatter->ScaleRampH.ResizeRampPoints(2);
		leaf_scatter->ScaleRampH.AddRampPoint(0.0000f, 0.0000f);
		leaf_scatter->ScaleRampH.AddRampPoint(1.0000f, 1.0000f);
		leaf_scatter->BranchSeed = 2;
		leaf_scatter->Npts = int32(hs_detail(hierarchy2->GetGeoResult(0), "leaf_per_branch", 0));
		leaf_scatter->Gpercent = FVector2f(0.600000f, 1.000000f);
		leaf_scatter->Mirror = int32(hs_detail(hierarchy2->GetGeoResult(0), "leaf_mirror", 0));
		leaf_scatter->YawRange = FVector2f(17.000000f, 70.000000f);
		leaf_scatter->Pitch = 5.500000f;
		leaf_scatter->PitchRand = 35.500000f;
		leaf_scatter->Roll = 3.500000f;
		leaf_scatter->Scale = FVector2f(2.000000f, 4.000000f);
		leaf_scatter->EnableScaleCurve = 0;
		leaf_scatter->Cook();
	}
	{
		// Node: tcc_merge1
		tcc_merge1->SetInput(0, tcc_attrib_delete1);
		tcc_merge1->SetInput(1, leaf_scatter);
		tcc_merge1->Cook();
	}
	{
		// Node: tcc_unpack1
		tcc_unpack1->SetInput(0, tcc_merge1);
		tcc_unpack1->Cook();
	}
	SetGeoResult(UTcrTreeBigSubbranches::output0, tcc_unpack1->GetGeoResult(0));
}

