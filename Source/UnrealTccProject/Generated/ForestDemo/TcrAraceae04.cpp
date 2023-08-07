// Auto generated by UnrealTcc. 

#include "TcrAraceae04.h"
#include "TcrTreeTrunkGrowth.h"
#include "TcrTreeBranchGrowth.h"
#include "TcrTreeSkinGrowth.h"
#include "TcrBroadLeaf.h"
#include "TcrSimpleFruit.h"
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

 UTcrAraceae04::UTcrAraceae04() 
{
}
FTccNodePtr UTcrAraceae04::CreateNode() 
{
	TSharedPtr<FTcrAraceae04> Node = MakeShared<FTcrAraceae04>();
	SyncParams(Node);
	return Node;
}
void UTcrAraceae04::SyncParams(FTccNodePtr InNode) 
{
	TSharedPtr<FTcrAraceae04> Node = StaticCastSharedPtr<FTcrAraceae04>(InNode);
	Node->Gseed = Gseed;
}

 FTcrAraceae04::FTcrAraceae04() 
{
	InitInputsCount(0);
	trunk = new FTcrTreeTrunkGrowth();
	trunk->InitMultiRefs(false); // RefCount = 1
	branch = new FTcrTreeBranchGrowth();
	branch->InitMultiRefs(true); // RefCount = 2
	tcr_tree_skin_growth1 = new FTcrTreeSkinGrowth();
	tcr_tree_skin_growth1->InitMultiRefs(false); // RefCount = 1
	mi_trunk = new FTccUnrealMaterial();
	mi_trunk->InitMultiRefs(false); // RefCount = 1
	tcc_pack1 = new FTccPack();
	tcc_pack1->InitMultiRefs(false); // RefCount = 1
	flower1 = new FTcrBroadLeaf();
	flower1->InitMultiRefs(false); // RefCount = 1
	bend_v = new FTccBend();
	bend_v->InitMultiRefs(false); // RefCount = 1
	bend_u = new FTccBend();
	bend_u->InitMultiRefs(false); // RefCount = 1
	bend_v_agin = new FTccBend();
	bend_v_agin->InitMultiRefs(false); // RefCount = 1
	tcc_transform4 = new FTccTransform();
	tcc_transform4->InitMultiRefs(false); // RefCount = 1
	flower2 = new FTcrBroadLeaf();
	flower2->InitMultiRefs(false); // RefCount = 1
	bend_v1 = new FTccBend();
	bend_v1->InitMultiRefs(false); // RefCount = 1
	bend_u1 = new FTccBend();
	bend_u1->InitMultiRefs(false); // RefCount = 1
	bend_v_agin1 = new FTccBend();
	bend_v_agin1->InitMultiRefs(false); // RefCount = 1
	tcc_transform1 = new FTccTransform();
	tcc_transform1->InitMultiRefs(false); // RefCount = 1
	fruit = new FTcrSimpleFruit();
	fruit->InitMultiRefs(false); // RefCount = 1
	tcc_circle2 = new FTccCircle();
	tcc_circle2->InitMultiRefs(false); // RefCount = 1
	tcc_point_jitter1 = new FTccPointJitter();
	tcc_point_jitter1->InitMultiRefs(false); // RefCount = 1
	tcc_transform2 = new FTccTransform();
	tcc_transform2->InitMultiRefs(false); // RefCount = 1
	rot_and_scale = new FTccVex();
	rot_and_scale->InitMultiRefs(false); // RefCount = 1
	tcc_copy_to_point1 = new FTccCopyToPoint();
	tcc_copy_to_point1->InitMultiRefs(false); // RefCount = 1
	tcr_tree_simple_leaf1 = new FTcrTreeSimpleLeaf();
	tcr_tree_simple_leaf1->InitMultiRefs(false); // RefCount = 1
	tcc_circle3 = new FTccCircle();
	tcc_circle3->InitMultiRefs(false); // RefCount = 1
	tcc_transform3 = new FTccTransform();
	tcc_transform3->InitMultiRefs(false); // RefCount = 1
	rot_and_scale1 = new FTccVex();
	rot_and_scale1->InitMultiRefs(false); // RefCount = 1
	tcc_copy_to_point2 = new FTccCopyToPoint();
	tcc_copy_to_point2->InitMultiRefs(false); // RefCount = 1
	tcc_merge1 = new FTccMerge();
	tcc_merge1->InitMultiRefs(false); // RefCount = 1
	mi_leaf1 = new FTccUnrealMaterial();
	mi_leaf1->InitMultiRefs(false); // RefCount = 1
	tcr_tree_leaf_scatter1 = new FTcrTreeLeafScatter();
	tcr_tree_leaf_scatter1->InitMultiRefs(false); // RefCount = 1
	tcc_merge2 = new FTccMerge();
	tcc_merge2->InitMultiRefs(false); // RefCount = 1
}
 FTcrAraceae04::~FTcrAraceae04() 
{
	delete trunk; 
	delete branch; 
	delete tcr_tree_skin_growth1; 
	delete mi_trunk; 
	delete tcc_pack1; 
	delete flower1; 
	delete bend_v; 
	delete bend_u; 
	delete bend_v_agin; 
	delete tcc_transform4; 
	delete flower2; 
	delete bend_v1; 
	delete bend_u1; 
	delete bend_v_agin1; 
	delete tcc_transform1; 
	delete fruit; 
	delete tcc_circle2; 
	delete tcc_point_jitter1; 
	delete tcc_transform2; 
	delete rot_and_scale; 
	delete tcc_copy_to_point1; 
	delete tcr_tree_simple_leaf1; 
	delete tcc_circle3; 
	delete tcc_transform3; 
	delete rot_and_scale1; 
	delete tcc_copy_to_point2; 
	delete tcc_merge1; 
	delete mi_leaf1; 
	delete tcr_tree_leaf_scatter1; 
	delete tcc_merge2; 
}
void FTcrAraceae04::Cook() 
{
	{
		// Node: trunk
		trunk->RadiusShape = ETccRampInterp::Bezier;
		trunk->RadiusShape.ResizeRampPoints(3);
		trunk->RadiusShape.AddRampPoint(0.0000f, 1.0000f);
		trunk->RadiusShape.AddRampPoint(0.1500f, 0.5000f);
		trunk->RadiusShape.AddRampPoint(1.0000f, 0.5000f);
		trunk->TreeAge = 6.640000f;
		trunk->MaxAge = 0.100000f;
		trunk->Radius = 0.016000f;
		trunk->CurlForce = 0.206000f;
		trunk->CurlFreq = 3.300000f;
		trunk->Cook();
	}
	{
		// Node: branch
		branch->SetInput(0, trunk);
		branch->MaxCountRamp = ETccRampInterp::Linear;
		branch->MaxCountRamp.ResizeRampPoints(2);
		branch->MaxCountRamp.AddRampPoint(0.0000f, 1.0000f);
		branch->MaxCountRamp.AddRampPoint(1.0000f, 1.0000f);
		branch->SegLenRamp = ETccRampInterp::Linear;
		branch->SegLenRamp.ResizeRampPoints(2);
		branch->SegLenRamp.AddRampPoint(0.0000f, 1.0000f);
		branch->SegLenRamp.AddRampPoint(1.0000f, 1.0000f);
		branch->StartPercentRamp = ETccRampInterp::Linear;
		branch->StartPercentRamp.ResizeRampPoints(2);
		branch->StartPercentRamp.AddRampPoint(0.0000f, 1.0000f);
		branch->StartPercentRamp.AddRampPoint(1.0000f, 1.0000f);
		branch->AgeDisRamp = ETccRampInterp::Linear;
		branch->AgeDisRamp.ResizeRampPoints(2);
		branch->AgeDisRamp.AddRampPoint(0.0000f, 1.0000f);
		branch->AgeDisRamp.AddRampPoint(1.0000f, 1.0000f);
		branch->MaxAgeRamp = ETccRampInterp::Linear;
		branch->MaxAgeRamp.ResizeRampPoints(2);
		branch->MaxAgeRamp.AddRampPoint(0.0000f, 1.0000f);
		branch->MaxAgeRamp.AddRampPoint(1.0000f, 0.2000f);
		branch->RadiusShape = ETccRampInterp::Bezier;
		branch->RadiusShape.ResizeRampPoints(3);
		branch->RadiusShape.AddRampPoint(0.0000f, 1.0000f);
		branch->RadiusShape.AddRampPoint(0.1499f, 0.8125f);
		branch->RadiusShape.AddRampPoint(1.0000f, 0.5208f);
		branch->Pitch0Ramp = ETccRampInterp::Linear;
		branch->Pitch0Ramp.ResizeRampPoints(2);
		branch->Pitch0Ramp.AddRampPoint(0.0000f, 1.0000f);
		branch->Pitch0Ramp.AddRampPoint(1.0000f, 1.0000f);
		branch->Pitch1Ramp = ETccRampInterp::Linear;
		branch->Pitch1Ramp.ResizeRampPoints(2);
		branch->Pitch1Ramp.AddRampPoint(0.0000f, 1.0000f);
		branch->Pitch1Ramp.AddRampPoint(1.0000f, 1.0000f);
		branch->Soft = ETccRampInterp::Linear;
		branch->Soft.ResizeRampPoints(2);
		branch->Soft.AddRampPoint(0.0000f, 0.0000f);
		branch->Soft.AddRampPoint(1.0000f, 1.0000f);
		branch->Gseed = 37;
		branch->StartPercent = 0.000000f;
		branch->AgeDis = 0.040000f;
		branch->MaxAge = 0.790000f;
		branch->Pitch0 = 5.100000f;
		branch->Pitch1 = 12.000000f;
		branch->PitchLerpRange = FVector2f(0.000000f, 1.010000f);
		branch->Cook();
	}
	{
		// Node: tcr_tree_skin_growth1
		tcr_tree_skin_growth1->SetInput(0, branch);
		tcr_tree_skin_growth1->Cols = 6;
		tcr_tree_skin_growth1->Cook();
	}
	{
		// Node: mi_trunk
		mi_trunk->SetInput(0, tcr_tree_skin_growth1);
		mi_trunk->MatPath = TEXT("/Game/ForestDemo/Materials/MI_TreeBig_Trunk.MI_TreeBig_Trunk");
		mi_trunk->Cook();
	}
	{
		// Node: tcc_pack1
		tcc_pack1->SetInput(0, mi_trunk);
		tcc_pack1->GeoName = TEXT("trunk");
		tcc_pack1->Cook();
	}
	{
		// Node: flower1
		flower1->RadRamp = ETccRampInterp::Linear;
		flower1->RadRamp.ResizeRampPoints(2);
		flower1->RadRamp.AddRampPoint(0.0000f, 1.0000f);
		flower1->RadRamp.AddRampPoint(1.0000f, 0.0000f);
		flower1->ShapeLeft = ETccRampInterp::Bezier;
		flower1->ShapeLeft.ResizeRampPoints(5);
		flower1->ShapeLeft.AddRampPoint(0.0000f, 0.3750f);
		flower1->ShapeLeft.AddRampPoint(0.0701f, 1.0000f);
		flower1->ShapeLeft.AddRampPoint(0.3309f, 1.0000f);
		flower1->ShapeLeft.AddRampPoint(0.8856f, 0.4792f);
		flower1->ShapeLeft.AddRampPoint(1.0000f, 0.4635f);
		flower1->YawRemapLeft = ETccRampInterp::Linear;
		flower1->YawRemapLeft.ResizeRampPoints(2);
		flower1->YawRemapLeft.AddRampPoint(0.0000f, 0.0000f);
		flower1->YawRemapLeft.AddRampPoint(1.0000f, 1.0000f);
		flower1->ShapeRight = ETccRampInterp::Bezier;
		flower1->ShapeRight.ResizeRampPoints(5);
		flower1->ShapeRight.AddRampPoint(0.0000f, 0.3750f);
		flower1->ShapeRight.AddRampPoint(0.0701f, 1.0000f);
		flower1->ShapeRight.AddRampPoint(0.3309f, 1.0000f);
		flower1->ShapeRight.AddRampPoint(0.8856f, 0.4792f);
		flower1->ShapeRight.AddRampPoint(1.0000f, 0.4635f);
		flower1->YawRemapRight = ETccRampInterp::Linear;
		flower1->YawRemapRight.ResizeRampPoints(2);
		flower1->YawRemapRight.AddRampPoint(0.0000f, 0.0000f);
		flower1->YawRemapRight.AddRampPoint(1.0000f, 1.0000f);
		flower1->ULen = 0.360000f;
		flower1->USegs = 5;
		flower1->VLen = 1.160000f;
		flower1->VSegs = 12;
		flower1->Stem = 0.000000f;
		flower1->Amp = 0.000000f;
		flower1->Freq = 2.387000f;
		flower1->Cook();
	}
	{
		// Node: bend_v
		bend_v->SetInput(0, flower1);
		bend_v->Bend = -93.519997f;
		bend_v->Origin = FVector3f(0.000000f, 0.530000f, 0.000000f);
		bend_v->Length = 1.370000f;
		bend_v->Cook();
	}
	{
		// Node: bend_u
		bend_u->SetInput(0, bend_v);
		bend_u->Bend = 217.000000f;
		bend_u->Origin = FVector3f(0.020000f, 0.000000f, 0.000000f);
		bend_u->Dir = FVector3f(1.000000f, 0.000000f, 0.000000f);
		bend_u->Length = 0.320000f;
		bend_u->Symmetricdeformation = 1;
		bend_u->Cook();
	}
	{
		// Node: bend_v_agin
		bend_v_agin->SetInput(0, bend_u);
		bend_v_agin->Bend = 21.500000f;
		bend_v_agin->Cook();
	}
	{
		// Node: tcc_transform4
		tcc_transform4->SetInput(0, bend_v_agin);
		tcc_transform4->T = FVector3f(0.000000f, 0.000000f, -0.084000f);
		tcc_transform4->Cook();
	}
	{
		// Node: flower2
		flower2->RadRamp = ETccRampInterp::Linear;
		flower2->RadRamp.ResizeRampPoints(2);
		flower2->RadRamp.AddRampPoint(0.0000f, 1.0000f);
		flower2->RadRamp.AddRampPoint(1.0000f, 0.0000f);
		flower2->ShapeLeft = ETccRampInterp::Bezier;
		flower2->ShapeLeft.ResizeRampPoints(5);
		flower2->ShapeLeft.AddRampPoint(0.0000f, 0.3750f);
		flower2->ShapeLeft.AddRampPoint(0.0701f, 1.0000f);
		flower2->ShapeLeft.AddRampPoint(0.3309f, 1.0000f);
		flower2->ShapeLeft.AddRampPoint(0.8856f, 0.4792f);
		flower2->ShapeLeft.AddRampPoint(1.0000f, 0.4635f);
		flower2->YawRemapLeft = ETccRampInterp::Linear;
		flower2->YawRemapLeft.ResizeRampPoints(2);
		flower2->YawRemapLeft.AddRampPoint(0.0000f, 0.0000f);
		flower2->YawRemapLeft.AddRampPoint(1.0000f, 1.0000f);
		flower2->ShapeRight = ETccRampInterp::Bezier;
		flower2->ShapeRight.ResizeRampPoints(5);
		flower2->ShapeRight.AddRampPoint(0.0000f, 0.3750f);
		flower2->ShapeRight.AddRampPoint(0.0701f, 1.0000f);
		flower2->ShapeRight.AddRampPoint(0.3309f, 1.0000f);
		flower2->ShapeRight.AddRampPoint(0.8856f, 0.4792f);
		flower2->ShapeRight.AddRampPoint(1.0000f, 0.4635f);
		flower2->YawRemapRight = ETccRampInterp::Linear;
		flower2->YawRemapRight.ResizeRampPoints(2);
		flower2->YawRemapRight.AddRampPoint(0.0000f, 0.0000f);
		flower2->YawRemapRight.AddRampPoint(1.0000f, 1.0000f);
		flower2->ULen = 0.200000f;
		flower2->USegs = 3;
		flower2->VLen = 1.020000f;
		flower2->VSegs = 12;
		flower2->Stem = 0.000000f;
		flower2->Amp = 0.000000f;
		flower2->Freq = 2.387000f;
		flower2->Cook();
	}
	{
		// Node: bend_v1
		bend_v1->SetInput(0, flower2);
		bend_v1->Bend = 5.300000f;
		bend_v1->Origin = FVector3f(0.000000f, 0.530000f, 0.000000f);
		bend_v1->Length = 1.370000f;
		bend_v1->Cook();
	}
	{
		// Node: bend_u1
		bend_u1->SetInput(0, bend_v1);
		bend_u1->Bend = 430.700012f;
		bend_u1->Origin = FVector3f(0.020000f, 0.000000f, 0.000000f);
		bend_u1->Dir = FVector3f(1.000000f, 0.000000f, 0.000000f);
		bend_u1->Length = 0.320000f;
		bend_u1->Symmetricdeformation = 1;
		bend_u1->Cook();
	}
	{
		// Node: bend_v_agin1
		bend_v_agin1->SetInput(0, bend_u1);
		bend_v_agin1->Bend = -30.500000f;
		bend_v_agin1->Cook();
	}
	{
		// Node: tcc_transform1
		tcc_transform1->SetInput(0, bend_v_agin1);
		tcc_transform1->T = FVector3f(0.030000f, 0.000000f, 0.050000f);
		tcc_transform1->R = FVector3f(0.000000f, 194.300003f, 0.000000f);
		tcc_transform1->Cook();
	}
	{
		// Node: fruit
		fruit->Shape = ETccRampInterp::Linear;
		fruit->Shape.ResizeRampPoints(5);
		fruit->Shape.AddRampPoint(0.0000f, 0.2917f);
		fruit->Shape.AddRampPoint(0.8670f, 0.3125f);
		fruit->Shape.AddRampPoint(0.9166f, 1.0000f);
		fruit->Shape.AddRampPoint(0.9420f, 1.0000f);
		fruit->Shape.AddRampPoint(1.0000f, 0.0000f);
		fruit->Bend = 6.900000f;
		fruit->Radx = 0.030000f;
		fruit->Rady = 0.030000f;
		fruit->Height = 1.687000f;
		fruit->Rows = 15;
		fruit->Cols = 4;
		fruit->Cook();
	}
	{
		// Node: tcc_circle2
		tcc_circle2->R = 0.020000f;
		tcc_circle2->Divs = 4;
		tcc_circle2->Cook();
	}
	{
		// Node: tcc_point_jitter1
		tcc_point_jitter1->SetInput(0, tcc_circle2);
		tcc_point_jitter1->Scale = 0.040000f;
		tcc_point_jitter1->Axisscale = FVector3f(1.000000f, 1.000000f, 0.000000f);
		tcc_point_jitter1->Cook();
	}
	{
		// Node: tcc_transform2
		tcc_transform2->SetInput(0, tcc_point_jitter1);
		tcc_transform2->T = FVector3f(0.000000f, 0.000000f, 0.040000f);
		tcc_transform2->R = FVector3f(90.000000f, 0.000000f, 0.000000f);
		tcc_transform2->Cook();
	}
	{
		// Node: rot_and_scale
		rot_and_scale->SetInput(0, tcc_transform2);
		rot_and_scale->Cook();
		{
			FTccGeometryPtr Geo0 = rot_and_scale->GetGeoRef(0);
			FTccAttribPtr attr_orient = Geo0->AddPointAttrib("orient", ETccAttribType::F4);
			FTccAttribPtr attr_pscale = Geo0->AddPointAttrib("pscale", ETccAttribType::F);
			const FVector3f up = vex_set(0, 0, 1);
			const int32 _numpt = Geo0->GetNumPoints();
			for(int32 i = 0; i < _numpt; i++)
			{
				const int32 _ptnum = i;
				FVector4f& _orient = attr_orient->GetData<FVector4f>()[i];
				float& _pscale = attr_pscale->GetData<float>()[i];
				float a = float(_ptnum) / _numpt * PI * 2.f - PI * 0.5f;
				_orient = vex_quaternion(a, up);
				_pscale = vex_fit01(vex_rand(_ptnum), 0.8f, 1.0f);
			}
		}
	}
	{
		// Node: tcc_copy_to_point1
		tcc_copy_to_point1->SetInput(0, fruit);
		tcc_copy_to_point1->SetInput(1, rot_and_scale);
		tcc_copy_to_point1->Cook();
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
		tcr_tree_simple_leaf1->Size = FVector2f(0.260000f, 0.260000f);
		tcr_tree_simple_leaf1->Rows = 8;
		tcr_tree_simple_leaf1->Bend = -90.000000f;
		tcr_tree_simple_leaf1->Curl = -73.800003f;
		tcr_tree_simple_leaf1->Cook();
	}
	{
		// Node: tcc_circle3
		tcc_circle3->R = 0.016000f;
		tcc_circle3->Divs = 4;
		tcc_circle3->Cook();
	}
	{
		// Node: tcc_transform3
		tcc_transform3->SetInput(0, tcc_circle3);
		tcc_transform3->T = FVector3f(0.000000f, -0.080000f, 0.001000f);
		tcc_transform3->R = FVector3f(90.000000f, 0.000000f, 0.000000f);
		tcc_transform3->Cook();
	}
	{
		// Node: rot_and_scale1
		rot_and_scale1->SetInput(0, tcc_transform3);
		float _angle = 73.500000f;
		rot_and_scale1->Cook();
		{
			FTccGeometryPtr Geo0 = rot_and_scale1->GetGeoRef(0);
			FTccAttribPtr attr_orient = Geo0->AddPointAttrib("orient", ETccAttribType::F4);
			FTccAttribPtr attr_pscale = Geo0->AddPointAttrib("pscale", ETccAttribType::F);
			const FVector3f up = vex_set(0, 0, 1);
			const int32 _numpt = Geo0->GetNumPoints();
			for(int32 i = 0; i < _numpt; i++)
			{
				const int32 _ptnum = i;
				FVector3f& _P = Geo0->GetPositions()[i];
				FVector4f& _orient = attr_orient->GetData<FVector4f>()[i];
				float& _pscale = attr_pscale->GetData<float>()[i];
				float a = float(_ptnum) / _numpt * PI * 2.f - PI * 0.5f;
				FVector3f fwd = vex_normalize(_P);
				FVector3f axis = vex_set(1, 0, 0);
				FVector4f yaw = vex_quaternion(a, up);
				float angle = vex_radians(_angle);
				FVector4f pitch = vex_quaternion( - angle, axis);
				_orient = vex_qmultiply(yaw, pitch);
				_pscale = vex_fit01(vex_rand(_ptnum), 0.8f, 1.0f);
			}
		}
	}
	{
		// Node: tcc_copy_to_point2
		tcc_copy_to_point2->SetInput(0, tcr_tree_simple_leaf1);
		tcc_copy_to_point2->SetInput(1, rot_and_scale1);
		tcc_copy_to_point2->Cook();
	}
	{
		// Node: tcc_merge1
		tcc_merge1->SetInput(0, tcc_transform4);
		tcc_merge1->SetInput(1, tcc_transform1);
		tcc_merge1->SetInput(2, tcc_copy_to_point1);
		tcc_merge1->SetInput(3, tcc_copy_to_point2);
		tcc_merge1->Cook();
	}
	{
		// Node: mi_leaf1
		mi_leaf1->SetInput(0, tcc_merge1);
		mi_leaf1->MatPath = TEXT("/Game/ForestDemo/Materials/MI_TreeBig_Leaf.MI_TreeBig_Leaf");
		mi_leaf1->Cook();
	}
	{
		// Node: tcr_tree_leaf_scatter1
		tcr_tree_leaf_scatter1->SetInput(0, branch);
		tcr_tree_leaf_scatter1->SetInput(1, mi_leaf1);
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
		tcr_tree_leaf_scatter1->PitchRemap.AddRampPoint(0.0000f, 0.0000f);
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
		tcr_tree_leaf_scatter1->ScaleAlongTrunk.ResizeRampPoints(5);
		tcr_tree_leaf_scatter1->ScaleAlongTrunk.AddRampPoint(0.0000f, 1.0000f);
		tcr_tree_leaf_scatter1->ScaleAlongTrunk.AddRampPoint(0.1796f, 0.5333f);
		tcr_tree_leaf_scatter1->ScaleAlongTrunk.AddRampPoint(0.3001f, 1.0000f);
		tcr_tree_leaf_scatter1->ScaleAlongTrunk.AddRampPoint(0.6716f, 0.5000f);
		tcr_tree_leaf_scatter1->ScaleAlongTrunk.AddRampPoint(1.0000f, 1.0000f);
		tcr_tree_leaf_scatter1->Gseed = 1;
		tcr_tree_leaf_scatter1->StartPercent = 0.996000f;
		tcr_tree_leaf_scatter1->RadiusShrink = 0.000000f;
		tcr_tree_leaf_scatter1->Method = UTcrTreeLeafScatter::AroundBranch;
		tcr_tree_leaf_scatter1->YawOffset = 61.099998f;
		tcr_tree_leaf_scatter1->YawOffsetR = 90.000000f;
		tcr_tree_leaf_scatter1->PitchRange = FVector2f(89.000000f, 85.000000f);
		tcr_tree_leaf_scatter1->Scale = 0.213000f;
		tcr_tree_leaf_scatter1->ScaleShowAdv = 1;
		tcr_tree_leaf_scatter1->Cook();
	}
	{
		// Node: tcc_merge2
		tcc_merge2->SetInput(0, tcc_pack1);
		tcc_merge2->SetInput(1, tcr_tree_leaf_scatter1);
		tcc_merge2->Cook();
	}
	SetGeoResult(UTcrAraceae04::output0, tcc_merge2->GetGeoResult(0));
}
