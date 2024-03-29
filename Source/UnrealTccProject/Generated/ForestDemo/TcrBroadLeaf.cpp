// Auto generated by UnrealTcc. 

#include "TcrBroadLeaf.h"
#include "Generated/TccTemplates.h"
#include "TccForBlock.h"
#include "TccSwitch.h"
#include "TctTexVex.h"
#include "TccAttribute.h"
#include "TccGeometry.h"
#include "Vex.h"
#include "HScript.h"

 UTcrBroadLeaf::UTcrBroadLeaf() 
{
	RadRamp.ResizeRampPoints(2);
	RadRamp.AddRampPoint(0.0000f, 1.0000f);
	RadRamp.AddRampPoint(1.0000f, 0.0000f);
	ShapeLeft.ResizeRampPoints(7);
	ShapeLeft.AddRampPoint(0.0000f, 0.3000f);
	ShapeLeft.AddRampPoint(0.1016f, 0.6000f);
	ShapeLeft.AddRampPoint(0.2056f, 0.6667f);
	ShapeLeft.AddRampPoint(0.3555f, 0.6667f);
	ShapeLeft.AddRampPoint(0.6771f, 0.7333f);
	ShapeLeft.AddRampPoint(0.8767f, 0.7778f);
	ShapeLeft.AddRampPoint(1.0000f, 1.0000f);
	YawRemapLeft.ResizeRampPoints(2);
	YawRemapLeft.AddRampPoint(0.0000f, 0.0000f);
	YawRemapLeft.AddRampPoint(1.0000f, 1.0000f);
	ShapeRight.ResizeRampPoints(7);
	ShapeRight.AddRampPoint(0.0000f, 0.3000f);
	ShapeRight.AddRampPoint(0.1016f, 0.6000f);
	ShapeRight.AddRampPoint(0.2056f, 0.6667f);
	ShapeRight.AddRampPoint(0.3555f, 0.6667f);
	ShapeRight.AddRampPoint(0.6771f, 0.7333f);
	ShapeRight.AddRampPoint(0.8767f, 0.7778f);
	ShapeRight.AddRampPoint(1.0000f, 1.0000f);
	YawRemapRight.ResizeRampPoints(2);
	YawRemapRight.AddRampPoint(0.0000f, 0.0000f);
	YawRemapRight.AddRampPoint(1.0000f, 1.0000f);
}
FTccNodePtr UTcrBroadLeaf::CreateNode() 
{
	TSharedPtr<FTcrBroadLeaf> Node = MakeShared<FTcrBroadLeaf>();
	SyncParams(Node);
	return Node;
}
void UTcrBroadLeaf::SyncParams(FTccNodePtr InNode) 
{
	TSharedPtr<FTcrBroadLeaf> Node = StaticCastSharedPtr<FTcrBroadLeaf>(InNode);
	Node->RadRamp = RadRamp;
	Node->ShapeLeft = ShapeLeft;
	Node->YawRemapLeft = YawRemapLeft;
	Node->ShapeRight = ShapeRight;
	Node->YawRemapRight = YawRemapRight;
	Node->Gseed = Gseed;
	Node->ULen = ULen;
	Node->USegs = USegs;
	Node->UAngle = UAngle;
	Node->VLen = VLen;
	Node->VSegs = VSegs;
	Node->VAngle = VAngle;
	Node->Radius = Radius;
	Node->ShowRadiusCurve = ShowRadiusCurve;
	Node->Stem = Stem;
	Node->UBend = UBend;
	Node->UBendOffset = UBendOffset;
	Node->VBend = VBend;
	Node->VBendOffset = VBendOffset;
	Node->Mirror = Mirror;
	Node->YawBeginLeft = YawBeginLeft;
	Node->YawEndLeft = YawEndLeft;
	Node->YawAdvLeft = YawAdvLeft;
	Node->YawBeginRight = YawBeginRight;
	Node->YawEndRight = YawEndRight;
	Node->YawAdvRight = YawAdvRight;
	Node->Amp = Amp;
	Node->Freq = Freq;
}

 FTcrBroadLeaf::FTcrBroadLeaf() 
{
	InitInputsCount(0);
	u_line = new FTccLine();
	u_line->InitMultiRefs(false); // RefCount = 1
	u_bend = new FTccBend();
	u_bend->InitMultiRefs(true); // RefCount = 2
	info = new FTccVex();
	info->InitMultiRefs(false); // RefCount = 1
	v_line = new FTccLine();
	v_line->InitMultiRefs(true); // RefCount = 2
	assign_id = new FTccVex();
	assign_id->InitMultiRefs(false); // RefCount = 1
	tcc_blast_by_feature1 = new FTccBlastByFeature();
	tcc_blast_by_feature1->InitMultiRefs(true); // RefCount = 2
	trans_left = new FTccVex();
	trans_left->InitMultiRefs(false); // RefCount = 1
	tcc_copy_to_point1 = new FTccCopyToPoint();
	tcc_copy_to_point1->InitMultiRefs(false); // RefCount = 1
	v_bend_left = new FTccBend();
	v_bend_left->InitMultiRefs(false); // RefCount = 1
	foreach_begin1 = new FTccForBlock();
	foreach_begin1->InitMultiRefs(false); // RefCount = 1
	foreach_begin1->InitInputsCount(1);
		noise = new FTccVex();
		noise->InitMultiRefs(false); // RefCount = 1
	tcc_skin1 = new FTccSkin();
	tcc_skin1->InitMultiRefs(false); // RefCount = 1
	trans_right = new FTccVex();
	trans_right->InitMultiRefs(false); // RefCount = 1
	tcc_copy_to_point2 = new FTccCopyToPoint();
	tcc_copy_to_point2->InitMultiRefs(false); // RefCount = 1
	v_bend_right = new FTccBend();
	v_bend_right->InitMultiRefs(false); // RefCount = 1
	foreach_begin2 = new FTccForBlock();
	foreach_begin2->InitMultiRefs(false); // RefCount = 1
	foreach_begin2->InitInputsCount(1);
		noise1 = new FTccVex();
		noise1->InitMultiRefs(false); // RefCount = 1
	tcc_skin2 = new FTccSkin();
	tcc_skin2->InitMultiRefs(false); // RefCount = 1
	radius_attr = new FTccVex();
	radius_attr->InitMultiRefs(false); // RefCount = 1
	tcc_bend2 = new FTccBend();
	tcc_bend2->InitMultiRefs(false); // RefCount = 1
	tcc_poly_wire1 = new FTccPolyWire();
	tcc_poly_wire1->InitMultiRefs(false); // RefCount = 1
	tcc_merge2 = new FTccMerge();
	tcc_merge2->InitMultiRefs(false); // RefCount = 1
	RadRamp.ResizeRampPoints(2);
	RadRamp.AddRampPoint(0.0000f, 1.0000f);
	RadRamp.AddRampPoint(1.0000f, 0.0000f);
	ShapeLeft.ResizeRampPoints(7);
	ShapeLeft.AddRampPoint(0.0000f, 0.3000f);
	ShapeLeft.AddRampPoint(0.1016f, 0.6000f);
	ShapeLeft.AddRampPoint(0.2056f, 0.6667f);
	ShapeLeft.AddRampPoint(0.3555f, 0.6667f);
	ShapeLeft.AddRampPoint(0.6771f, 0.7333f);
	ShapeLeft.AddRampPoint(0.8767f, 0.7778f);
	ShapeLeft.AddRampPoint(1.0000f, 1.0000f);
	YawRemapLeft.ResizeRampPoints(2);
	YawRemapLeft.AddRampPoint(0.0000f, 0.0000f);
	YawRemapLeft.AddRampPoint(1.0000f, 1.0000f);
	ShapeRight.ResizeRampPoints(7);
	ShapeRight.AddRampPoint(0.0000f, 0.3000f);
	ShapeRight.AddRampPoint(0.1016f, 0.6000f);
	ShapeRight.AddRampPoint(0.2056f, 0.6667f);
	ShapeRight.AddRampPoint(0.3555f, 0.6667f);
	ShapeRight.AddRampPoint(0.6771f, 0.7333f);
	ShapeRight.AddRampPoint(0.8767f, 0.7778f);
	ShapeRight.AddRampPoint(1.0000f, 1.0000f);
	YawRemapRight.ResizeRampPoints(2);
	YawRemapRight.AddRampPoint(0.0000f, 0.0000f);
	YawRemapRight.AddRampPoint(1.0000f, 1.0000f);
}
 FTcrBroadLeaf::~FTcrBroadLeaf() 
{
	delete u_line; 
	delete u_bend; 
	delete info; 
	delete v_line; 
	delete assign_id; 
	delete tcc_blast_by_feature1; 
	delete trans_left; 
	delete tcc_copy_to_point1; 
	delete v_bend_left; 
	delete foreach_begin1; 
		delete noise; 
	delete tcc_skin1; 
	delete trans_right; 
	delete tcc_copy_to_point2; 
	delete v_bend_right; 
	delete foreach_begin2; 
		delete noise1; 
	delete tcc_skin2; 
	delete radius_attr; 
	delete tcc_bend2; 
	delete tcc_poly_wire1; 
	delete tcc_merge2; 
}
void FTcrBroadLeaf::Cook() 
{
	{
		// Node: u_line
		u_line->Dir = FVector3f(0.000000f, hs_cos(UAngle), hs_sin(UAngle));
		u_line->Dist = float(ULen);
		u_line->Points = int32(USegs + 1);
		u_line->Cook();
	}
	{
		// Node: u_bend
		u_bend->SetInput(0, u_line);
		u_bend->Bend = float(-UBend);
		u_bend->Origin = FVector3f(0.000000f, UBendOffset * ULen * u_bend->Dir.Z, UBendOffset * ULen * u_bend->Dir.Y);
		u_bend->Dir = FVector3f(0.000000f, hs_cos(UAngle), hs_sin(UAngle));
		u_bend->Length = float(ULen);
		u_bend->Cook();
	}
	{
		// Node: info
		info->Cook();
		{
			FTccGeometryPtr Geo0 = info->GetGeoRef(0);
			FTccAttribPtr attr_line_len = Geo0->AddDetailAttrib("line_len", ETccAttribType::F);
			FTccAttribPtr attr_line_pts = Geo0->AddDetailAttrib("line_pts", ETccAttribType::F);
			FTccAttribPtr attr_stem_pts = Geo0->AddDetailAttrib("stem_pts", ETccAttribType::I);
			const float leaf_len = VLen;
			const float stem_len = Stem;
			const int32 leaf_segs = VSegs;
			const float seg_len = leaf_len / leaf_segs;
			float& _line_len = attr_line_len->GetData<float>()[0];
			float& _line_pts = attr_line_pts->GetData<float>()[0];
			int32& _stem_pts = attr_stem_pts->GetData<int32>()[0];
			int32 stem_segs = 0;
			if(stem_len > 0.f)
			{
			stem_segs = (int)(stem_len / seg_len + 0.5f);
			stem_segs = vex_max(1, stem_segs);
			}
			_line_len = leaf_len + stem_len;
			_line_pts = leaf_segs + stem_segs + 1;
			_stem_pts = stem_segs;
		}
	}
	{
		// Node: v_line
		v_line->SetInput(0, info);
		FTccGeometryConstPtr Geo0 = v_line->GetInput(0)->GetConstGeoResult(0);
		v_line->Dir = FVector3f(0.000000f, 1.000000f, 0.000000f);
		v_line->Dist = float(hs_detail(Geo0, "line_len", 0));
		v_line->Points = int32(hs_detail(Geo0, "line_pts", 0));
		v_line->Docurveuattr = 1;
		v_line->Cook();
	}
	{
		// Node: assign_id
		assign_id->SetInput(0, v_line);
		assign_id->Cook();
		{
			FTccGeometryPtr Geo0 = assign_id->GetGeoRef(0);
			FTccAttribPtr attr_id = Geo0->AddPointAttrib("id", ETccAttribType::I);
			const int32 _numpt = Geo0->GetNumPoints();
			for(int32 i = 0; i < _numpt; i++)
			{
				const int32 _ptnum = i;
				int32& _id = attr_id->GetData<int32>()[i];
				_id = _ptnum;
			}
		}
	}
	{
		// Node: tcc_blast_by_feature1
		tcc_blast_by_feature1->SetInput(0, assign_id);
		FTccGeometryConstPtr Geo0 = tcc_blast_by_feature1->GetInput(0)->GetConstGeoResult(0);
		tcc_blast_by_feature1->Grouptype = UTccBlastByFeature::Points;
		tcc_blast_by_feature1->ByAttrib = 1;
		tcc_blast_by_feature1->Attrib = TEXT("id");
		tcc_blast_by_feature1->Op = UTccBlastByFeature::Less;
		tcc_blast_by_feature1->Value = float(hs_detail(info->GetGeoResult(0), "stem_pts", 0));
		tcc_blast_by_feature1->Cook();
	}
	{
		// Node: trans_left
		trans_left->SetInput(0, tcc_blast_by_feature1);
		trans_left->Cook();
		{
			FTccGeometryPtr Geo0 = trans_left->GetGeoRef(0);
			FTccAttribPtr attr_curveu = Geo0->AddPointAttrib("curveu", ETccAttribType::F);
			FTccAttribPtr attr_orient = Geo0->AddPointAttrib("orient", ETccAttribType::F4);
			FTccAttribPtr attr_pscale = Geo0->AddPointAttrib("pscale", ETccAttribType::F);
			const int32 gseed = Gseed;
			const float radius = Radius;
			const int32 vsegs = VSegs;
			const float inv_vsegs = 1.f / vsegs;
			const float yaw_begin = vex_radians(YawBeginLeft);
			const float yaw_end = vex_radians(YawEndLeft);
			const FVector3f up = vex_set(0, 1, 0);
			const FVector3f x = vex_set(1, 0, 0);
			const int32 _numpt = Geo0->GetNumPoints();
			for(int32 i = 0; i < _numpt; i++)
			{
				const int32 _ptnum = i;
				FVector3f& _P = Geo0->GetPositions()[i];
				float& _curveu = attr_curveu->GetData<float>()[i];
				FVector4f& _orient = attr_orient->GetData<FVector4f>()[i];
				float& _pscale = attr_pscale->GetData<float>()[i];
				float percent = inv_vsegs * _ptnum;
				// Pos offset
				_P.X += radius * RadRamp.Lookup(_curveu) * 0.9f;
				// YAW
				float yaw_ratio = YawRemapLeft.Lookup(percent);
				float yaw = vex_lerp(yaw_begin, yaw_end, yaw_ratio) + PI * 0.5f;
				FVector4f qyaw = vex_quaternion(yaw, up);
				_orient = qyaw;
				// SCALE
				_pscale = ShapeLeft.Lookup(percent);
			}
		}
	}
	{
		// Node: tcc_copy_to_point1
		tcc_copy_to_point1->SetInput(0, u_bend);
		tcc_copy_to_point1->SetInput(1, trans_left);
		tcc_copy_to_point1->Cook();
	}
	{
		// Node: v_bend_left
		v_bend_left->SetInput(0, tcc_copy_to_point1);
		v_bend_left->Bend = float(-VBend);
		v_bend_left->Origin = FVector3f(0.000000f, VBendOffset * VLen, 0.000000f);
		v_bend_left->Length = float(VLen + ULen * ShapeLeft.Lookup(1.0f, 0));
		v_bend_left->Cook();
	}
	{
		// Node: foreach_begin1
		foreach_begin1->SetInput(0, v_bend_left);
		foreach_begin1->Itermethod = UTccForBlock::ByPiecesOrPoints;
		foreach_begin1->Method = UTccForBlock::MergeEachIteration;
		foreach_begin1->Class = UTccForBlock::Primitives;
		foreach_begin1->Cook();
		{
			// By Pieces or Points, Merge Each Iteration, Primitives
			const int32 NumPieces = foreach_begin1->GetNumPieces();
			for(int32 piece = 0; piece < NumPieces; piece ++)
			{
				const int32 _iteration = piece;
				FTccNode* block_input0 = new FTccNode();
				block_input0->SetGeoResult(0, foreach_begin1->GetGeometryPiece(piece));
				{
					// Node: noise
					noise->SetInput(0, block_input0);
					noise->Cook();
					{
						FTccGeometryPtr Geo0 = noise->GetGeoRef(0);
						const int32 gseed = Gseed;
						const int32 usegs_ = USegs;
						const float amp = Amp;
						const float freq = Freq;
						const float useg_inv = 1.f / usegs_;
						FVector3f PEnd = vex_pointp(Geo0, usegs_);
						float r = (vex_noise2(PEnd * freq + float(gseed)) * 2.f - 1.f) * amp;
						for(int i = 1;i <= usegs_;i ++)
						{
						FVector3f pos = vex_pointp(Geo0, i);
						pos.Z += r * (i - 1) * useg_inv;// tcc_mark:replace=pos.Z / pos.Z
						vex_setpointattrib(Geo0, "P", i, pos);
						}
					}
				}
				
				foreach_begin1->SetPieceResult(piece, noise->GetGeoResult(0));
				delete block_input0;
			}
			foreach_begin1->MergeResult();
		}
	}
	{
		// Node: tcc_skin1
		tcc_skin1->SetInput(0, foreach_begin1);
		tcc_skin1->Cook();
	}
	{
		// Node: trans_right
		trans_right->SetInput(0, tcc_blast_by_feature1);
		trans_right->Cook();
		{
			FTccGeometryPtr Geo0 = trans_right->GetGeoRef(0);
			FTccAttribPtr attr_curveu = Geo0->AddPointAttrib("curveu", ETccAttribType::F);
			FTccAttribPtr attr_orient = Geo0->AddPointAttrib("orient", ETccAttribType::F4);
			FTccAttribPtr attr_pscale = Geo0->AddPointAttrib("pscale", ETccAttribType::F);
			const int32 gseed = Gseed;
			const float radius = Radius;
			const int32 vsegs = VSegs;
			const float inv_vsegs = 1.f / vsegs;
			const float yaw_begin = vex_radians(YawBeginRight);
			const float yaw_end = vex_radians(YawEndRight);
			const FVector3f up = vex_set(0, 1, 0);
			const FVector3f x = vex_set(1, 0, 0);
			const int32 _numpt = Geo0->GetNumPoints();
			for(int32 i = 0; i < _numpt; i++)
			{
				const int32 _ptnum = i;
				FVector3f& _P = Geo0->GetPositions()[i];
				float& _curveu = attr_curveu->GetData<float>()[i];
				FVector4f& _orient = attr_orient->GetData<FVector4f>()[i];
				float& _pscale = attr_pscale->GetData<float>()[i];
				float percent = inv_vsegs * _ptnum;
				// Pos offset
				_P.X -= radius * RadRamp.Lookup(_curveu) * 0.9f;
				// YAW
				float yaw_ratio = YawRemapRight.Lookup(percent);
				float yaw = vex_lerp(yaw_begin, yaw_end, yaw_ratio) + PI * 0.5f;
				FVector4f qyaw = vex_quaternion( - yaw, up);
				_orient = qyaw;
				// SCALE
				_pscale = ShapeRight.Lookup(percent);
			}
		}
	}
	{
		// Node: tcc_copy_to_point2
		tcc_copy_to_point2->SetInput(0, u_bend);
		tcc_copy_to_point2->SetInput(1, trans_right);
		tcc_copy_to_point2->Cook();
	}
	{
		// Node: v_bend_right
		v_bend_right->SetInput(0, tcc_copy_to_point2);
		v_bend_right->Bend = float(-VBend);
		v_bend_right->Origin = FVector3f(0.000000f, VBendOffset * VLen, 0.000000f);
		v_bend_right->Length = float(VLen + ULen * ShapeLeft.Lookup(1.0f, 0));
		v_bend_right->Cook();
	}
	{
		// Node: foreach_begin2
		foreach_begin2->SetInput(0, v_bend_right);
		foreach_begin2->Itermethod = UTccForBlock::ByPiecesOrPoints;
		foreach_begin2->Method = UTccForBlock::MergeEachIteration;
		foreach_begin2->Class = UTccForBlock::Primitives;
		foreach_begin2->Cook();
		{
			// By Pieces or Points, Merge Each Iteration, Primitives
			const int32 NumPieces = foreach_begin2->GetNumPieces();
			for(int32 piece = 0; piece < NumPieces; piece ++)
			{
				const int32 _iteration = piece;
				FTccNode* block_input0 = new FTccNode();
				block_input0->SetGeoResult(0, foreach_begin2->GetGeometryPiece(piece));
				{
					// Node: noise1
					noise1->SetInput(0, block_input0);
					noise1->Cook();
					{
						FTccGeometryPtr Geo0 = noise1->GetGeoRef(0);
						const int32 gseed = Gseed;
						const int32 usegs_ = USegs;
						const float amp = Amp;
						const float freq = Freq;
						const float useg_inv = 1.f / usegs_;
						FVector3f PEnd = vex_pointp(Geo0, usegs_);
						float r = (vex_noise2(PEnd * freq + float(gseed)) * 2.f - 1.f) * amp;
						for(int i = 1;i <= usegs_;i ++)
						{
						FVector3f pos = vex_pointp(Geo0, i);
						pos.Z += r * (i - 1) * useg_inv;// tcc_mark:replace=pos.Z / pos.Z
						vex_setpointattrib(Geo0, "P", i, pos);
						}
					}
				}
				
				foreach_begin2->SetPieceResult(piece, noise1->GetGeoResult(0));
				delete block_input0;
			}
			foreach_begin2->MergeResult();
		}
	}
	{
		// Node: tcc_skin2
		tcc_skin2->SetInput(0, foreach_begin2);
		tcc_skin2->Reverse = 1;
		tcc_skin2->Cook();
	}
	{
		// Node: radius_attr
		radius_attr->SetInput(0, v_line);
		radius_attr->Cook();
		{
			FTccGeometryPtr Geo0 = radius_attr->GetGeoRef(0);
			FTccAttribPtr attr_radius = Geo0->AddPointAttrib("radius", ETccAttribType::F);
			FTccAttribPtr attr_curveu = Geo0->AddPointAttrib("curveu", ETccAttribType::F);
			const float radius = Radius;
			const int32 _numpt = Geo0->GetNumPoints();
			for(int32 i = 0; i < _numpt; i++)
			{
				const int32 _ptnum = i;
				float& _radius = attr_radius->GetData<float>()[i];
				float& _curveu = attr_curveu->GetData<float>()[i];
				_radius = radius * RadRamp.Lookup(_curveu);
			}
		}
	}
	{
		// Node: tcc_bend2
		tcc_bend2->SetInput(0, radius_attr);
		tcc_bend2->Bend = float(-VBend);
		tcc_bend2->Origin = FVector3f(0.000000f, VBendOffset * VLen, 0.000000f);
		tcc_bend2->Length = float(VLen + ULen * ShapeLeft.Lookup(1.0f, 0));
		tcc_bend2->Cook();
	}
	{
		// Node: tcc_poly_wire1
		tcc_poly_wire1->SetInput(0, tcc_bend2);
		tcc_poly_wire1->EnableRadiusAttrib = 1;
		tcc_poly_wire1->RAttrib = TEXT("radius");
		tcc_poly_wire1->Divs = 6;
		tcc_poly_wire1->Cook();
	}
	{
		// Node: tcc_merge2
		tcc_merge2->SetInput(0, tcc_skin1);
		tcc_merge2->SetInput(1, tcc_skin2);
		tcc_merge2->SetInput(2, tcc_poly_wire1);
		tcc_merge2->Cook();
	}
	SetGeoResult(UTcrBroadLeaf::output0, tcc_merge2->GetGeoResult(0));
}

