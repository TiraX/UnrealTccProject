// Recipe tcr_leaf_generator_with_variations, auto generated by UnrealTcc.

#include "TcrLeafGeneratorWithVariations.h"
#include "Generated/TccTemplates.h"
#include "TccForBlock.h"
#include "TccSwitch.h"
#include "TccAttribute.h"
#include "TccGeometry.h"
#include "Vex.h"
#include "HScript.h"

 UTcrLeafGeneratorWithVariations::UTcrLeafGeneratorWithVariations() 
{
	MaxInputs = 2;
	tcc_blast_by_feature3 = UTccNode::CreateNodeWithDefine<UTccBlastByFeature>(this, TEXT("tcc_blast_by_feature3"));
	tcc_attrib_promote1 = UTccNode::CreateNodeWithDefine<UTccAttribPromote>(this, TEXT("tcc_attrib_promote1"));
	foreach_branch2 = UTccNode::CreateNodeWithDefine<UTccForBlock>(this, TEXT("foreach_branch2"));
	foreach_branch2->InitInputsCount(2);
		add_density1 = UTccNode::CreateNodeWithDefine<UTccVex>(this, TEXT("add_density1"));
		tcc_scatter5 = UTccNode::CreateNodeWithDefine<UTccScatter>(this, TEXT("tcc_scatter5"));
		delete_density2 = UTccNode::CreateNodeWithDefine<UTccAttribDelete>(this, TEXT("delete_density2"));
		tcc_sort3 = UTccNode::CreateNodeWithDefine<UTccSort>(this, TEXT("tcc_sort3"));
		min_max_u2 = UTccNode::CreateNodeWithDefine<UTccAttribPromote>(this, TEXT("min_max_u2"));
		enable_mirror = UTccNode::CreateNodeWithDefine<UTccSwitch>(this, TEXT("enable_mirror"));
			default_dir = UTccNode::CreateNodeWithDefine<UTccVex>(this, TEXT("default_dir"));
			mirror_dir_pos = UTccNode::CreateNodeWithDefine<UTccVex>(this, TEXT("mirror_dir_pos"));
			mirror_dir_neg = UTccNode::CreateNodeWithDefine<UTccVex>(this, TEXT("mirror_dir_neg"));
			tcc_merge3 = UTccNode::CreateNodeWithDefine<UTccMerge>(this, TEXT("tcc_merge3"));
		calc_rotation2 = UTccNode::CreateNodeWithDefine<UTccVex>(this, TEXT("calc_rotation2"));
		tcc_attrib_delete2 = UTccNode::CreateNodeWithDefine<UTccAttribDelete>(this, TEXT("tcc_attrib_delete2"));
		apply_scale = UTccNode::CreateNodeWithDefine<UTccVex>(this, TEXT("apply_scale"));
		add_instance_id1 = UTccNode::CreateNodeWithDefine<UTccVex>(this, TEXT("add_instance_id1"));
		tcc_instancer2 = UTccNode::CreateNodeWithDefine<UTccInstancer>(this, TEXT("tcc_instancer2"));
	ScaleRamp.ResizeRampPoints(3);
	ScaleRamp.AddRampPoint(0.0000f, 0.0000f);
	ScaleRamp.AddRampPoint(0.2510f, 1.0000f);
	ScaleRamp.AddRampPoint(1.0000f, 0.0000f);
}
void UTcrLeafGeneratorWithVariations::Execute(UTccNode* InNode) 
{
	{
		tcc_blast_by_feature3->SetInput(0, InNode->GetInput(0));
		FTccGeometryPtr Geo0 = tcc_blast_by_feature3->GetInput(0)->GetGeoResult(0);
		UTccBlastByFeature* Define1 = Cast<UTccBlastByFeature>(tcc_blast_by_feature3->GetDefine()); 
		Define1->ByAttrib = 1;
		Define1->Attrib = TEXT("level");
		Define1->Op = UTccBlastByFeature::NotEqual;
		Define1->Value = float(hs_detail(Geo0, "curr_level", 0));
		tcc_blast_by_feature3->Cook();
	}
	{
		tcc_attrib_promote1->SetInput(0, InNode->GetInput(0));
		UTccAttribPromote* Define1 = Cast<UTccAttribPromote>(tcc_attrib_promote1->GetDefine()); 
		Define1->Inname = TEXT("instance_id");
		Define1->Inclass = UTccAttribPromote::PackedGeos;
		Define1->Outclass = UTccAttribPromote::DetailOnlyOnce;
		Define1->DoMax = 1;
		tcc_attrib_promote1->Cook();
	}
	{
		foreach_branch2->SetInput(0, tcc_blast_by_feature3);
		foreach_branch2->SetInput(1, tcc_attrib_promote1);
		UTccForBlock* Define1 = Cast<UTccForBlock>(foreach_branch2->GetDefine()); 
		Define1->Itermethod = UTccForBlock::ByPiecesOrPoints;
		Define1->Method = UTccForBlock::MergeEachIteration;
		Define1->Class = UTccForBlock::Primitives;
		foreach_branch2->Cook();
		{
			// By Pieces or Points, Merge Each Iteration, Primitives
			const int32 NumPieces = Define1->GetNumPieces();
			for(int32 piece = 0; piece < NumPieces; piece ++)
			{
				const int32 _iteration = piece;
				UTccNode* block_input0 = NewObject<UTccNode>(GetTransientPackage());
				block_input0->SetGeoResult(0, Define1->GetGeometryPiece(piece));
				UTccNode* block_input1 = tcc_attrib_promote1;
				{
					add_density1->SetInput(0, block_input0);
					add_density1->Cook();
					{
						FTccGeometryPtr Geo0 = add_density1->GetGeoResult(0);
						FTccAttribPtr attr_curveu = Geo0->AddPointAttrib("curveu", FTccAttrib::EAttrType::F);
						FTccAttribPtr attr_density = Geo0->AddPointAttrib("density", FTccAttrib::EAttrType::F);
						FTccAttribPtr attr_branch_dir = Geo0->AddPointAttrib("branch_dir", FTccAttrib::EAttrType::F3);
						const FVector2f percent = Gpercent;
						const int32 _numpt = Geo0->GetPointsCount();
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
					tcc_scatter5->SetInput(0, add_density1);
					UTccScatter* Define2 = Cast<UTccScatter>(tcc_scatter5->GetDefine()); 
					Define2->Usedensityattrib = 1;
					Define2->Npts = int32(Npts);
					Define2->ScatterSeed = int32(BranchSeed);
					tcc_scatter5->Cook();
				}
				
				{
					delete_density2->SetInput(0, tcc_scatter5);
					UTccAttribDelete* Define2 = Cast<UTccAttribDelete>(delete_density2->GetDefine()); 
					Define2->Ptdel = TEXT("density");
					delete_density2->Cook();
				}
				
				{
					tcc_sort3->SetInput(0, delete_density2);
					UTccSort* Define2 = Cast<UTccSort>(tcc_sort3->GetDefine()); 
					Define2->Ptsort = UTccSort::ByAttribute;
					Define2->Pointattrib = TEXT("curveu");
					tcc_sort3->Cook();
				}
				
				{
					min_max_u2->SetInput(0, tcc_sort3);
					UTccAttribPromote* Define2 = Cast<UTccAttribPromote>(min_max_u2->GetDefine()); 
					Define2->Inname = TEXT("curveu");
					Define2->Outclass = UTccAttribPromote::DetailOnlyOnce;
					Define2->DoMax = 1;
					Define2->DoMin = 1;
					min_max_u2->Cook();
				}
				
				{
					enable_mirror->SetInput(0, min_max_u2);
					UTccSwitch* Define2 = Cast<UTccSwitch>(enable_mirror->GetDefine()); 
					Define2->Input = int32(Mirror);
					Define2->NumCases = 2;
					enable_mirror->Cook();
					FTccGeometryPtr SwitchResult = nullptr;
					const int32 Selection = Define2->Input;
					switch (Selection)
					{
						case 0:
						{
							{
								default_dir->SetInput(0, min_max_u2);
								default_dir->Cook();
								{
									FTccGeometryPtr Geo0 = default_dir->GetGeoResult(0);
									FTccAttribPtr attr_dir = Geo0->AddPointAttrib("dir", FTccAttrib::EAttrType::F);
									const int32 _numpt = Geo0->GetPointsCount();
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
								mirror_dir_pos->SetInput(0, min_max_u2);
								mirror_dir_pos->Cook();
								{
									FTccGeometryPtr Geo0 = mirror_dir_pos->GetGeoResult(0);
									FTccAttribPtr attr_dir = Geo0->AddPointAttrib("dir", FTccAttrib::EAttrType::F);
									const int32 _numpt = Geo0->GetPointsCount();
									for(int32 i = 0; i < _numpt; i++)
									{
										const int32 _ptnum = i;
										float& _dir = attr_dir->GetData<float>()[i];
										_dir = 1.0f;
									}
								}
							}
							
							{
								mirror_dir_neg->SetInput(0, min_max_u2);
								mirror_dir_neg->Cook();
								{
									FTccGeometryPtr Geo0 = mirror_dir_neg->GetGeoResult(0);
									FTccAttribPtr attr_dir = Geo0->AddPointAttrib("dir", FTccAttrib::EAttrType::F);
									const int32 _numpt = Geo0->GetPointsCount();
									for(int32 i = 0; i < _numpt; i++)
									{
										const int32 _ptnum = i;
										float& _dir = attr_dir->GetData<float>()[i];
										_dir =  - 1.0f;
									}
								}
							}
							
							{
								tcc_merge3->SetInput(0, mirror_dir_pos);
								tcc_merge3->SetInput(1, mirror_dir_neg);
								tcc_merge3->Cook();
							}
							
							SwitchResult = tcc_merge3->GetGeoResult(0);
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
					calc_rotation2->SetInput(0, enable_mirror);
					calc_rotation2->SetInput(1, nullptr);
					calc_rotation2->Cook();
					{
						FTccGeometryPtr Geo0 = calc_rotation2->GetGeoResult(0);
						FTccAttribPtr attr_branch_dir = Geo0->AddPointAttrib("branch_dir", FTccAttrib::EAttrType::F3);
						FTccAttribPtr attr_dir = Geo0->AddPointAttrib("dir", FTccAttrib::EAttrType::F);
						FTccAttribPtr attr_curveu = Geo0->AddPointAttrib("curveu", FTccAttrib::EAttrType::F);
						FTccAttribPtr attr_orient = Geo0->AddPointAttrib("orient", FTccAttrib::EAttrType::F4);
						const int32 gseed = BranchSeed;
						const int32 iter = _iteration;
						const float max_u = vex_detail(Geo0, "max_curveu");
						const float min_u = vex_detail(Geo0, "min_curveu");
						const FVector3f up = vex_set(0, 1, 0);
						const FVector2f yaw_range = vex_radians(YawRange);
						const float pitch = vex_radians(Pitch);
						const float pitch_rand = vex_radians(PitchRand);
						const float roll = vex_radians(Roll);
						const int32 _numpt = Geo0->GetPointsCount();
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
					tcc_attrib_delete2->SetInput(0, calc_rotation2);
					UTccAttribDelete* Define2 = Cast<UTccAttribDelete>(tcc_attrib_delete2->GetDefine()); 
					Define2->Ptdel = TEXT("dir branch_dir");
					Define2->Dtldel = TEXT("max_curveu min_curveu");
					tcc_attrib_delete2->Cook();
				}
				
				{
					apply_scale->SetInput(0, tcc_attrib_delete2);
					apply_scale->SetInput(1, nullptr);
					apply_scale->Cook();
					{
						FTccGeometryPtr Geo0 = apply_scale->GetGeoResult(0);
						FTccAttribPtr attr_pscale = Geo0->AddPointAttrib("pscale", FTccAttrib::EAttrType::F);
						FTccAttribPtr attr_curveu = Geo0->AddPointAttrib("curveu", FTccAttrib::EAttrType::F);
						const int32 iter = _iteration;
						const FVector2f s = Scale;
						const int32 along_curve = EnableScaleCurve;
						const int32 _numpt = Geo0->GetPointsCount();
						for(int32 i = 0; i < _numpt; i++)
						{
							const int32 _ptnum = i;
							float& _pscale = attr_pscale->GetData<float>()[i];
							float& _curveu = attr_curveu->GetData<float>()[i];
							_pscale = vex_fit01(vex_rand((_ptnum + 2.4f) * iter), s.X, s.Y);
							if(along_curve > 0)
							{
							  _pscale *= ScaleRamp.Lookup(_curveu);
							}
						}
					}
				}
				
				{
					add_instance_id1->SetInput(0, apply_scale);
					add_instance_id1->SetInput(1, nullptr);
					add_instance_id1->SetInput(2, block_input1);
					add_instance_id1->Cook();
					{
						FTccGeometryPtr Geo0 = add_instance_id1->GetGeoResult(0);
						FTccGeometryPtr Geo2 = block_input1->GetGeoResult(0);
						FTccAttribPtr attr_instance_id = Geo0->AddPointAttrib("instance_id", FTccAttrib::EAttrType::I);
						const int32 max_instance_id = vex_detaili(Geo2, "max_instance_id");
						const int32 iter = _iteration;
						const int32 _numpt = Geo0->GetPointsCount();
						for(int32 i = 0; i < _numpt; i++)
						{
							const int32 _ptnum = i;
							int32& _instance_id = attr_instance_id->GetData<int32>()[i];
							_instance_id = (int)vex_fit01(vex_rand(iter * _ptnum * 2.7f + 3 + _ptnum), 0, max_instance_id + 0.999f);
						}
					}
				}
				
				{
					tcc_instancer2->SetInput(0, block_input1);
					tcc_instancer2->SetInput(1, add_instance_id1);
					UTccInstancer* Define2 = Cast<UTccInstancer>(tcc_instancer2->GetDefine()); 
					Define2->Useidattrib = 1;
					Define2->Idattrib = TEXT("instance_id");
					tcc_instancer2->Cook();
				}
				
				Define1->SetPieceResult(piece, tcc_instancer2->GetGeoResult(0));
			}
			Define1->MergeResult(foreach_branch2);
		}
	}
	InNode->SetGeoResult(output0, foreach_branch2->GetGeoResult(0));
}

