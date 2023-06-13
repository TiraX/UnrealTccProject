// Auto generated by UnrealTcc. 

#include "TcrTreeLeafScatter.h"
#include "Generated/TccTemplates.h"
#include "TccForBlock.h"
#include "TccSwitch.h"
#include "TctTexVex.h"
#include "TccAttribute.h"
#include "TccGeometry.h"
#include "Vex.h"
#include "HScript.h"

 UTcrTreeLeafScatter::UTcrTreeLeafScatter() 
{
	ScaleRamp.ResizeRampPoints(3);
	ScaleRamp.AddRampPoint(0.0000f, 0.0000f);
	ScaleRamp.AddRampPoint(0.2510f, 1.0000f);
	ScaleRamp.AddRampPoint(1.0000f, 0.0000f);
	ScaleRampH.ResizeRampPoints(2);
	ScaleRampH.AddRampPoint(0.0000f, 0.0000f);
	ScaleRampH.AddRampPoint(1.0000f, 1.0000f);
}
FTccNodePtr UTcrTreeLeafScatter::CreateNode() 
{
	TSharedPtr<FTcrTreeLeafScatter> Node = MakeShared<FTcrTreeLeafScatter>();
	SyncParams(Node);
	return Node;
}
void UTcrTreeLeafScatter::SyncParams(FTccNodePtr InNode) 
{
	TSharedPtr<FTcrTreeLeafScatter> Node = StaticCastSharedPtr<FTcrTreeLeafScatter>(InNode);
	Node->ScaleRamp = ScaleRamp;
	Node->ScaleRampH = ScaleRampH;
	Node->BranchSeed = BranchSeed;
	Node->Npts = Npts;
	Node->UseResample = UseResample;
	Node->Gpercent = Gpercent;
	Node->Mirror = Mirror;
	Node->YawRange = YawRange;
	Node->Pitch = Pitch;
	Node->PitchRand = PitchRand;
	Node->Roll = Roll;
	Node->Scale = Scale;
	Node->EnableScaleCurve = EnableScaleCurve;
	Node->EnableScaleHeight = EnableScaleHeight;
	Node->HeightRange = HeightRange;
}

 FTcrTreeLeafScatter::FTcrTreeLeafScatter() 
{
	InitInputsCount(2);
	tcc_blast_by_feature1 = new FTccBlastByFeature();
	tcc_blast_by_feature1->InitMultiRefs(false); // RefCount = 1
	foreach_branch = new FTccForBlock();
	foreach_branch->InitMultiRefs(false); // RefCount = 1
	foreach_branch->InitInputsCount(2);
		add_density = new FTccVex();
		add_density->InitMultiRefs(false); // RefCount = 1
		use_resample = new FTccSwitch();
		use_resample->InitMultiRefs(false); // RefCount = 1
			tcc_scatter3 = new FTccScatter();
			tcc_scatter3->InitMultiRefs(false); // RefCount = 1
			delete_density = new FTccAttribDelete();
			delete_density->InitMultiRefs(false); // RefCount = 1
			tcc_sort1 = new FTccSort();
			tcc_sort1->InitMultiRefs(false); // RefCount = 1
			calc_real_points = new FTccVex();
			calc_real_points->InitMultiRefs(false); // RefCount = 1
			tcc_resample1 = new FTccResample();
			tcc_resample1->InitMultiRefs(false); // RefCount = 1
			tcc_blast_by_feature2 = new FTccBlastByFeature();
			tcc_blast_by_feature2->InitMultiRefs(false); // RefCount = 1
			delete_density1 = new FTccAttribDelete();
			delete_density1->InitMultiRefs(false); // RefCount = 1
		min_max_u = new FTccAttribPromote();
		min_max_u->InitMultiRefs(true); // RefCount = 2
		enable_mirror = new FTccSwitch();
		enable_mirror->InitMultiRefs(false); // RefCount = 1
			default_dir = new FTccVex();
			default_dir->InitMultiRefs(false); // RefCount = 1
			mirror_dir_pos = new FTccVex();
			mirror_dir_pos->InitMultiRefs(false); // RefCount = 1
			mirror_dir_neg = new FTccVex();
			mirror_dir_neg->InitMultiRefs(false); // RefCount = 1
			tcc_merge1 = new FTccMerge();
			tcc_merge1->InitMultiRefs(false); // RefCount = 1
		calc_rotation1 = new FTccVex();
		calc_rotation1->InitMultiRefs(false); // RefCount = 1
		tcc_attrib_delete1 = new FTccAttribDelete();
		tcc_attrib_delete1->InitMultiRefs(false); // RefCount = 1
		apply_scale = new FTccVex();
		apply_scale->InitMultiRefs(false); // RefCount = 1
		tcc_instancer1 = new FTccInstancer();
		tcc_instancer1->InitMultiRefs(false); // RefCount = 1
	ScaleRamp.ResizeRampPoints(3);
	ScaleRamp.AddRampPoint(0.0000f, 0.0000f);
	ScaleRamp.AddRampPoint(0.2510f, 1.0000f);
	ScaleRamp.AddRampPoint(1.0000f, 0.0000f);
	ScaleRampH.ResizeRampPoints(2);
	ScaleRampH.AddRampPoint(0.0000f, 0.0000f);
	ScaleRampH.AddRampPoint(1.0000f, 1.0000f);
}
 FTcrTreeLeafScatter::~FTcrTreeLeafScatter() 
{
	delete tcc_blast_by_feature1; 
	delete foreach_branch; 
		delete add_density; 
		delete use_resample; 
			delete tcc_scatter3; 
			delete delete_density; 
			delete tcc_sort1; 
			delete calc_real_points; 
			delete tcc_resample1; 
			delete tcc_blast_by_feature2; 
			delete delete_density1; 
		delete min_max_u; 
		delete enable_mirror; 
			delete default_dir; 
			delete mirror_dir_pos; 
			delete mirror_dir_neg; 
			delete tcc_merge1; 
		delete calc_rotation1; 
		delete tcc_attrib_delete1; 
		delete apply_scale; 
		delete tcc_instancer1; 
}
void FTcrTreeLeafScatter::Cook() 
{
	{
		// Node: tcc_blast_by_feature1
		tcc_blast_by_feature1->SetInput(0, GetInput(0));
		FTccGeometryConstPtr Geo0 = tcc_blast_by_feature1->GetInput(0)->GetConstGeoResult(0);
		tcc_blast_by_feature1->ByAttrib = 1;
		tcc_blast_by_feature1->Attrib = TEXT("level");
		tcc_blast_by_feature1->Op = UTccBlastByFeature::NotEqual;
		tcc_blast_by_feature1->Value = float(hs_detail(Geo0, "curr_level", 0));
		tcc_blast_by_feature1->Cook();
	}
	{
		// Node: foreach_branch
		foreach_branch->SetInput(0, tcc_blast_by_feature1);
		foreach_branch->SetInput(1, GetInput(1));
		foreach_branch->Itermethod = UTccForBlock::ByPiecesOrPoints;
		foreach_branch->Method = UTccForBlock::MergeEachIteration;
		foreach_branch->Class = UTccForBlock::Primitives;
		foreach_branch->Cook();
		{
			// By Pieces or Points, Merge Each Iteration, Primitives
			const int32 NumPieces = foreach_branch->GetNumPieces();
			for(int32 piece = 0; piece < NumPieces; piece ++)
			{
				const int32 _iteration = piece;
				FTccNode* block_input0 = new FTccNode();
				block_input0->SetGeoResult(0, foreach_branch->GetGeometryPiece(piece));
				FTccNode* block_input1 = GetInput(1);
				{
					// Node: add_density
					add_density->SetInput(0, block_input0);
					add_density->Cook();
					{
						FTccGeometryPtr Geo0 = add_density->GetGeoResult(0);
						FTccAttribPtr attr_curveu = Geo0->AddPointAttrib("curveu", ETccAttribType::F);
						FTccAttribPtr attr_density = Geo0->AddPointAttrib("density", ETccAttribType::F);
						FTccAttribPtr attr_branch_dir = Geo0->AddPointAttrib("branch_dir", ETccAttribType::F3);
						const FVector2f percent = Gpercent;
						const int32 _numpt = Geo0->GetNumPoints();
						for(int32 i = 0; i < _numpt; i++)
						{
							const int32 _ptnum = i;
							float& _curveu = attr_curveu->GetData<float>()[i];
							float& _density = attr_density->GetData<float>()[i];
							FVector3f& _branch_dir = attr_branch_dir->GetData<FVector3f>()[i];
							// calc density
							float f = _curveu;
							_density = (f >= percent.X && f <= percent.Y)? 1.f : 0.f;
							// calc tangent dir
							FVector3f p0, p1;
							if(_ptnum == _numpt - 1)
							{
							    // last point
							p0 = vex_pointp(Geo0, _ptnum - 1);
							p1 = vex_pointp(Geo0, _ptnum);
							}
							else if(_ptnum == 0)
							{
							    // first point
							p0 = vex_pointp(Geo0, _ptnum);
							p1 = vex_pointp(Geo0, _ptnum + 1);
							}
							else
							{
							    // other points
							p0 = vex_pointp(Geo0, _ptnum - 1);
							p1 = vex_pointp(Geo0, _ptnum + 1);
							}
							FVector3f yaw_axis = vex_normalize(p1 - p0);
							_branch_dir = yaw_axis;
						}
					}
				}
				
				{
					// Node: use_resample
					use_resample->SetInput(0, add_density);
					use_resample->Input = int32(UseResample);
					use_resample->NumCases = 2;
					use_resample->Cook();
					FTccGeometryPtr SwitchResult = nullptr;
					const int32 Selection = use_resample->Input;
					switch (Selection)
					{
						case 0:
						{
							{
								// Node: tcc_scatter3
								tcc_scatter3->SetInput(0, add_density);
								tcc_scatter3->Usedensityattrib = 1;
								tcc_scatter3->Npts = int32(Npts);
								tcc_scatter3->ScatterSeed = int32(BranchSeed);
								tcc_scatter3->Cook();
							}
							
							{
								// Node: delete_density
								delete_density->SetInput(0, tcc_scatter3);
								delete_density->Ptdel = TEXT("density");
								delete_density->Cook();
							}
							
							{
								// Node: tcc_sort1
								tcc_sort1->SetInput(0, delete_density);
								tcc_sort1->Ptsort = UTccSort::ByAttribute;
								tcc_sort1->Pointattrib = TEXT("curveu");
								tcc_sort1->Cook();
							}
							
							
							
							
							
							SwitchResult = tcc_sort1->GetGeoResult(0);
						}
						break;
						case 1:
						{
							
							
							
							{
								// Node: calc_real_points
								calc_real_points->SetInput(0, add_density);
								calc_real_points->Cook();
								{
									FTccGeometryPtr Geo0 = calc_real_points->GetGeoResult(0);
									FTccAttribPtr attr_npts = Geo0->AddDetailAttrib("npts", ETccAttribType::I);
									int32& _npts = attr_npts->GetData<int32>()[0];
									int32 pts = Npts;
									FVector2f range = Gpercent;
									float percent = abs(range.Y - range.X);
									int32 real_pts = (int)ceil(pts / percent);
									_npts = real_pts;
								}
							}
							
							{
								// Node: tcc_resample1
								tcc_resample1->SetInput(0, calc_real_points);
								FTccGeometryConstPtr Geo0 = tcc_resample1->GetInput(0)->GetConstGeoResult(0);
								tcc_resample1->Dolength = 0;
								tcc_resample1->Dosegs = 1;
								tcc_resample1->Segs = int32(hs_detail(Geo0, "npts", 0) - 1);
								tcc_resample1->Cook();
							}
							
							{
								// Node: tcc_blast_by_feature2
								tcc_blast_by_feature2->SetInput(0, tcc_resample1);
								tcc_blast_by_feature2->Grouptype = UTccBlastByFeature::Points;
								tcc_blast_by_feature2->ByAttrib = 1;
								tcc_blast_by_feature2->Attrib = TEXT("density");
								tcc_blast_by_feature2->Op = UTccBlastByFeature::Less;
								tcc_blast_by_feature2->Value = 0.500000f;
								tcc_blast_by_feature2->Cook();
							}
							
							{
								// Node: delete_density1
								delete_density1->SetInput(0, tcc_blast_by_feature2);
								delete_density1->Ptdel = TEXT("density");
								delete_density1->Dtldel = TEXT("npts");
								delete_density1->Cook();
							}
							
							SwitchResult = delete_density1->GetGeoResult(0);
						}
						break;
						default:
						{
							checkNoEntry();
						}
						break;
					}
					use_resample->SetValidGeoResult(0, SwitchResult);
				}
				
				{
					// Node: min_max_u
					min_max_u->SetInput(0, use_resample);
					min_max_u->Inname = TEXT("curveu");
					min_max_u->Outclass = UTccAttribPromote::DetailOnlyOnce;
					min_max_u->DoMax = 1;
					min_max_u->DoMin = 1;
					min_max_u->Cook();
				}
				
				{
					// Node: enable_mirror
					enable_mirror->SetInput(0, min_max_u);
					enable_mirror->Input = int32(Mirror);
					enable_mirror->NumCases = 2;
					enable_mirror->Cook();
					FTccGeometryPtr SwitchResult = nullptr;
					const int32 Selection = enable_mirror->Input;
					switch (Selection)
					{
						case 0:
						{
							{
								// Node: default_dir
								default_dir->SetInput(0, min_max_u);
								default_dir->Cook();
								{
									FTccGeometryPtr Geo0 = default_dir->GetGeoResult(0);
									FTccAttribPtr attr_dir = Geo0->AddPointAttrib("dir", ETccAttribType::F);
									const int32 _numpt = Geo0->GetNumPoints();
									for(int32 i = 0; i < _numpt; i++)
									{
										const int32 _ptnum = i;
										float& _dir = attr_dir->GetData<float>()[i];
										_dir = 1.0f;
									}
								}
							}
							
							
							
							
							SwitchResult = default_dir->GetGeoResult(0);
						}
						break;
						case 1:
						{
							
							{
								// Node: mirror_dir_pos
								mirror_dir_pos->SetInput(0, min_max_u);
								mirror_dir_pos->Cook();
								{
									FTccGeometryPtr Geo0 = mirror_dir_pos->GetGeoResult(0);
									FTccAttribPtr attr_dir = Geo0->AddPointAttrib("dir", ETccAttribType::F);
									const int32 _numpt = Geo0->GetNumPoints();
									for(int32 i = 0; i < _numpt; i++)
									{
										const int32 _ptnum = i;
										float& _dir = attr_dir->GetData<float>()[i];
										_dir = 1.0f;
									}
								}
							}
							
							{
								// Node: mirror_dir_neg
								mirror_dir_neg->SetInput(0, min_max_u);
								mirror_dir_neg->Cook();
								{
									FTccGeometryPtr Geo0 = mirror_dir_neg->GetGeoResult(0);
									FTccAttribPtr attr_dir = Geo0->AddPointAttrib("dir", ETccAttribType::F);
									const int32 _numpt = Geo0->GetNumPoints();
									for(int32 i = 0; i < _numpt; i++)
									{
										const int32 _ptnum = i;
										float& _dir = attr_dir->GetData<float>()[i];
										_dir =  - 1.0f;
									}
								}
							}
							
							{
								// Node: tcc_merge1
								tcc_merge1->SetInput(0, mirror_dir_pos);
								tcc_merge1->SetInput(1, mirror_dir_neg);
								tcc_merge1->Cook();
							}
							
							SwitchResult = tcc_merge1->GetGeoResult(0);
						}
						break;
						default:
						{
							checkNoEntry();
						}
						break;
					}
					enable_mirror->SetValidGeoResult(0, SwitchResult);
				}
				
				{
					// Node: calc_rotation1
					calc_rotation1->SetInput(0, enable_mirror);
					calc_rotation1->SetInput(1, nullptr);
					calc_rotation1->Cook();
					{
						FTccGeometryPtr Geo0 = calc_rotation1->GetGeoResult(0);
						FTccAttribPtr attr_branch_dir = Geo0->AddPointAttrib("branch_dir", ETccAttribType::F3);
						FTccAttribPtr attr_dir = Geo0->AddPointAttrib("dir", ETccAttribType::F);
						FTccAttribPtr attr_curveu = Geo0->AddPointAttrib("curveu", ETccAttribType::F);
						FTccAttribPtr attr_orient = Geo0->AddPointAttrib("orient", ETccAttribType::F4);
						const int32 gseed = BranchSeed;
						const int32 iter = _iteration;
						const float max_u = vex_detail(Geo0, "max_curveu");
						const float min_u = vex_detail(Geo0, "min_curveu");
						const FVector3f up = vex_set(0, 1, 0);
						const FVector2f yaw_range = vex_radians(YawRange);
						const float pitch = vex_radians(Pitch);
						const float pitch_rand = vex_radians(PitchRand);
						const float roll = vex_radians(Roll);
						const int32 _numpt = Geo0->GetNumPoints();
						for(int32 i = 0; i < _numpt; i++)
						{
							const int32 _ptnum = i;
							FVector3f& _branch_dir = attr_branch_dir->GetData<FVector3f>()[i];
							float& _dir = attr_dir->GetData<float>()[i];
							float& _curveu = attr_curveu->GetData<float>()[i];
							FVector4f& _orient = attr_orient->GetData<FVector4f>()[i];
							FVector3f branch_dir = _branch_dir;
							// YAW
							FVector3f n = vex_normalize(vex_cross(branch_dir, up)) * _dir;
							FVector3f yaw_axis = vex_normalize(vex_cross(n, branch_dir));
							float yaw = vex_fit(_curveu, min_u, max_u, yaw_range.X, yaw_range.Y);
							FVector4f qyaw = vex_quaternion(yaw, yaw_axis);
							n = vex_qrotate(qyaw, n);
							// PITCH
							FVector3f pitch_axis = vex_cross(yaw_axis, n);
							float pitch_r = vex_fit01(vex_rand(_ptnum * 1.45f * iter + 21),  - pitch_rand, pitch_rand);
							float pitch_result = (pitch + pitch_r) * _dir;
							FVector4f qpitch = vex_quaternion(pitch_result, pitch_axis);
							n = vex_normalize(vex_qrotate(qpitch, n));
							// ROLL
							FVector4f qroll = vex_quaternion(roll, n);
							FVector3f new_up = vex_qrotate(qroll, up);
							// Convert to orient
							FMatrix44f m3 = vex_maketransform(n, new_up);
							_orient = vex_quaternion(m3);
						}
					}
				}
				
				{
					// Node: tcc_attrib_delete1
					tcc_attrib_delete1->SetInput(0, calc_rotation1);
					tcc_attrib_delete1->Ptdel = TEXT("dir branch_dir");
					tcc_attrib_delete1->Dtldel = TEXT("max_curveu min_curveu");
					tcc_attrib_delete1->Cook();
				}
				
				{
					// Node: apply_scale
					apply_scale->SetInput(0, tcc_attrib_delete1);
					apply_scale->SetInput(1, nullptr);
					apply_scale->Cook();
					{
						FTccGeometryPtr Geo0 = apply_scale->GetGeoResult(0);
						FTccAttribPtr attr_pscale = Geo0->AddPointAttrib("pscale", ETccAttribType::F);
						FTccAttribPtr attr_curveu = Geo0->AddPointAttrib("curveu", ETccAttribType::F);
						const int32 iter = _iteration;
						const FVector2f s = Scale;
						const int32 along_curve = EnableScaleCurve;
						const int32 along_height = EnableScaleHeight;
						const FVector2f height_range = HeightRange;
						const int32 _numpt = Geo0->GetNumPoints();
						for(int32 i = 0; i < _numpt; i++)
						{
							const int32 _ptnum = i;
							FVector3f& _P = Geo0->GetPositions()[i];
							float& _pscale = attr_pscale->GetData<float>()[i];
							float& _curveu = attr_curveu->GetData<float>()[i];
							_pscale = vex_fit01(vex_rand((_ptnum + 2.4f) * iter), s.X, s.Y);
							if(along_curve > 0)
							{
							_pscale *= ScaleRamp.Lookup(_curveu);
							}
							if(along_height > 0)
							{
							float h = (_P.Z - height_range.X) / (height_range.Y - height_range.X);
							float s_sample = ScaleRampH.Lookup(h);
							_pscale *= s_sample;
							}
						}
					}
				}
				
				{
					// Node: tcc_instancer1
					tcc_instancer1->SetInput(0, block_input1);
					tcc_instancer1->SetInput(1, apply_scale);
					tcc_instancer1->Cook();
				}
				
				foreach_branch->SetPieceResult(piece, tcc_instancer1->GetGeoResult(0));
				delete block_input0;
			}
			foreach_branch->MergeResult();
		}
	}
	SetGeoResult(UTcrTreeLeafScatter::output0, foreach_branch->GetGeoResult(0));
}
