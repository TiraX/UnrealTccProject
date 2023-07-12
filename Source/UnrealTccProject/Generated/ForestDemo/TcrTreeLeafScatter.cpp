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
	StartPercentRamp.ResizeRampPoints(2);
	StartPercentRamp.AddRampPoint(0.0000f, 1.0000f);
	StartPercentRamp.AddRampPoint(1.0000f, 1.0000f);
	AgeDisRamp.ResizeRampPoints(2);
	AgeDisRamp.AddRampPoint(0.0000f, 1.0000f);
	AgeDisRamp.AddRampPoint(1.0000f, 1.0000f);
	YawRamp.ResizeRampPoints(2);
	YawRamp.AddRampPoint(0.0000f, 0.0000f);
	YawRamp.AddRampPoint(1.0000f, 1.0000f);
	PitchRemap.ResizeRampPoints(2);
	PitchRemap.AddRampPoint(0.0000f, 0.0000f);
	PitchRemap.AddRampPoint(1.0000f, 1.0000f);
	PitchAlongTrunk.ResizeRampPoints(2);
	PitchAlongTrunk.AddRampPoint(0.0000f, 1.0000f);
	PitchAlongTrunk.AddRampPoint(1.0000f, 1.0000f);
	ScaleAlongBranch.ResizeRampPoints(2);
	ScaleAlongBranch.AddRampPoint(0.0000f, 1.0000f);
	ScaleAlongBranch.AddRampPoint(1.0000f, 1.0000f);
	ScaleAlongTrunk.ResizeRampPoints(2);
	ScaleAlongTrunk.AddRampPoint(0.0000f, 1.0000f);
	ScaleAlongTrunk.AddRampPoint(1.0000f, 1.0000f);
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
	Node->StartPercentRamp = StartPercentRamp;
	Node->AgeDisRamp = AgeDisRamp;
	Node->YawRamp = YawRamp;
	Node->PitchRemap = PitchRemap;
	Node->PitchAlongTrunk = PitchAlongTrunk;
	Node->ScaleAlongBranch = ScaleAlongBranch;
	Node->ScaleAlongTrunk = ScaleAlongTrunk;
	Node->Gseed = Gseed;
	Node->MaxCount = MaxCount;
	Node->StartPercent = StartPercent;
	Node->StartPercentShowAdv = StartPercentShowAdv;
	Node->StartPercentAdv = StartPercentAdv;
	Node->AgeDis = AgeDis;
	Node->AgeDisShowAdv = AgeDisShowAdv;
	Node->AgeDisAdv = AgeDisAdv;
	Node->Mirror = Mirror;
	Node->DropR = DropR;
	Node->RadiusShrink = RadiusShrink;
	Node->UseInstanceId = UseInstanceId;
	Node->Method = Method;
	Node->Yaw = Yaw;
	Node->YawShowAdv = YawShowAdv;
	Node->YawAdv = YawAdv;
	Node->PitchR = PitchR;
	Node->RollR = RollR;
	Node->YawOffset = YawOffset;
	Node->YawOffsetR = YawOffsetR;
	Node->YawSep = YawSep;
	Node->PitchRange = PitchRange;
	Node->PitchShowAdv = PitchShowAdv;
	Node->PitchAdv = PitchAdv;
	Node->Scale = Scale;
	Node->ScaleShowAdv = ScaleShowAdv;
}

 FTcrTreeLeafScatter::FTcrTreeLeafScatter() 
{
	InitInputsCount(2);
	foreach_branch = new FTccForBlock();
	foreach_branch->InitMultiRefs(false); // RefCount = 1
	foreach_branch->InitInputsCount(1);
		info = new FTccVex();
		info->InitMultiRefs(false); // RefCount = 1
		blast_start = new FTccBlastByFeature();
		blast_start->InitMultiRefs(false); // RefCount = 1
		scatter_on_end = new FTccSwitch();
		scatter_on_end->InitMultiRefs(true); // RefCount = 2
			blast_end = new FTccBlastByFeature();
			blast_end->InitMultiRefs(false); // RefCount = 1
			scatter_points = new FTccDitheredScatter();
			scatter_points->InitMultiRefs(false); // RefCount = 1
		mirror = new FTccSwitch();
		mirror->InitMultiRefs(false); // RefCount = 1
			sign = new FTccVex();
			sign->InitMultiRefs(false); // RefCount = 1
			sign1 = new FTccVex();
			sign1->InitMultiRefs(false); // RefCount = 1
			sign2 = new FTccVex();
			sign2->InitMultiRefs(false); // RefCount = 1
			tcc_merge2 = new FTccMerge();
			tcc_merge2->InitMultiRefs(false); // RefCount = 1
		rand_drop = new FTccVex();
		rand_drop->InitMultiRefs(false); // RefCount = 1
		drop_points = new FTccBlastByFeature();
		drop_points->InitMultiRefs(false); // RefCount = 1
		transform = new FTccVex();
		transform->InitMultiRefs(false); // RefCount = 1
		remove_unused_attribs = new FTccAttribDelete();
		remove_unused_attribs->InitMultiRefs(false); // RefCount = 1
	empty = new FTccVex();
	empty->InitMultiRefs(false); // RefCount = 1
	use_instance_id = new FTccSwitch();
	use_instance_id->InitMultiRefs(false); // RefCount = 1
		tcc_attrib_promote1 = new FTccAttribPromote();
		tcc_attrib_promote1->InitMultiRefs(false); // RefCount = 1
		assign_piece_id = new FTccVex();
		assign_piece_id->InitMultiRefs(false); // RefCount = 1
	tcc_instancer2 = new FTccInstancer();
	tcc_instancer2->InitMultiRefs(false); // RefCount = 1
	StartPercentRamp.ResizeRampPoints(2);
	StartPercentRamp.AddRampPoint(0.0000f, 1.0000f);
	StartPercentRamp.AddRampPoint(1.0000f, 1.0000f);
	AgeDisRamp.ResizeRampPoints(2);
	AgeDisRamp.AddRampPoint(0.0000f, 1.0000f);
	AgeDisRamp.AddRampPoint(1.0000f, 1.0000f);
	YawRamp.ResizeRampPoints(2);
	YawRamp.AddRampPoint(0.0000f, 0.0000f);
	YawRamp.AddRampPoint(1.0000f, 1.0000f);
	PitchRemap.ResizeRampPoints(2);
	PitchRemap.AddRampPoint(0.0000f, 0.0000f);
	PitchRemap.AddRampPoint(1.0000f, 1.0000f);
	PitchAlongTrunk.ResizeRampPoints(2);
	PitchAlongTrunk.AddRampPoint(0.0000f, 1.0000f);
	PitchAlongTrunk.AddRampPoint(1.0000f, 1.0000f);
	ScaleAlongBranch.ResizeRampPoints(2);
	ScaleAlongBranch.AddRampPoint(0.0000f, 1.0000f);
	ScaleAlongBranch.AddRampPoint(1.0000f, 1.0000f);
	ScaleAlongTrunk.ResizeRampPoints(2);
	ScaleAlongTrunk.AddRampPoint(0.0000f, 1.0000f);
	ScaleAlongTrunk.AddRampPoint(1.0000f, 1.0000f);
}
 FTcrTreeLeafScatter::~FTcrTreeLeafScatter() 
{
	delete foreach_branch; 
		delete info; 
		delete blast_start; 
		delete scatter_on_end; 
			delete blast_end; 
			delete scatter_points; 
		delete mirror; 
			delete sign; 
			delete sign1; 
			delete sign2; 
			delete tcc_merge2; 
		delete rand_drop; 
		delete drop_points; 
		delete transform; 
		delete remove_unused_attribs; 
	delete empty; 
	delete use_instance_id; 
		delete tcc_attrib_promote1; 
		delete assign_piece_id; 
	delete tcc_instancer2; 
}
void FTcrTreeLeafScatter::Cook() 
{
	{
		// Node: foreach_branch
		foreach_branch->SetInput(0, GetInput(0));
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
				{
					// Node: info
					info->SetInput(0, block_input0);
					info->SetInput(1, nullptr);
					info->Cook();
					{
						FTccGeometryPtr Geo0 = info->GetGeoRef(0);
						FTccAttribPtr attr_grow_age_start = Geo0->AddDetailAttrib("grow_age_start", ETccAttribType::F);
						FTccAttribPtr attr_grow_age_end = Geo0->AddDetailAttrib("grow_age_end", ETccAttribType::F);
						FTccAttribPtr attr_max_count = Geo0->AddDetailAttrib("max_count", ETccAttribType::I);
						FTccAttribPtr attr_seed = Geo0->AddDetailAttrib("seed", ETccAttribType::I);
						const int32 gseed = Gseed;
						const int32 max_count_base = MaxCount;
						const float start_range_base = StartPercent;
						const int32 start_range_adv = StartPercentAdv;
						const float sep_range_base = AgeDis;
						const int32 sep_range_adv = AgeDisAdv;
						const float eps = 0.0001f;
						float& _grow_age_start = attr_grow_age_start->GetData<float>()[0];
						float& _grow_age_end = attr_grow_age_end->GetData<float>()[0];
						int32& _max_count = attr_max_count->GetData<int32>()[0];
						int32& _seed = attr_seed->GetData<int32>()[0];
						int32 iter = _iteration;
						float parent_percent = vex_primf(Geo0, "percent", 0);
						TArray < int32 > parent_pts= vex_primpoints(Geo0, 0);
						float parent_age_min = vex_pointf(Geo0, "age", 0);
						float parent_age_max = vex_pointf(Geo0, "age", parent_pts [ vex_len(parent_pts) - 1 ]);
						float start = start_range_base;
						if(start_range_adv > 0)
						{
						start *= StartPercentRamp.Lookup(parent_percent);
						}
						start = (parent_age_max - parent_age_min) * start + parent_age_min;
						float sep_age = sep_range_base;
						if(sep_range_adv > 0)
						{
						sep_age *= AgeDisRamp.Lookup(parent_percent);
						}
						float end = parent_age_max + eps;
						if(max_count_base > 0)
						{
						end = vex_min(sep_age * max_count_base + start, parent_age_max);
						}
						int32 count = (int)((end - start) / sep_age + 0.5f);
						_grow_age_start = start;
						_grow_age_end = end;
						_max_count = count;
						_seed = gseed + iter + 4;
					}
				}
				
				{
					// Node: blast_start
					blast_start->SetInput(0, info);
					FTccGeometryConstPtr Geo0 = blast_start->GetInput(0)->GetConstGeoResult(0);
					blast_start->Grouptype = UTccBlastByFeature::Points;
					blast_start->ByAttrib = 1;
					blast_start->Attrib = TEXT("age");
					blast_start->Op = UTccBlastByFeature::Less;
					blast_start->Value = float(hs_detail(Geo0, "grow_age_start", 0));
					blast_start->Cook();
				}
				
				{
					// Node: scatter_on_end
					scatter_on_end->SetInput(0, blast_start);
					scatter_on_end->Input = int32(StartPercent >= 0.99f);
					scatter_on_end->NumCases = 2;
					scatter_on_end->Cook();
					FTccGeometryPtr SwitchResult = nullptr;
					const int32 Selection = scatter_on_end->Input;
					switch (Selection)
					{
						case 0:
						{
							{
								// Node: blast_end
								blast_end->SetInput(0, blast_start);
								FTccGeometryConstPtr Geo0 = blast_end->GetInput(0)->GetConstGeoResult(0);
								blast_end->Grouptype = UTccBlastByFeature::Points;
								blast_end->ByAttrib = 1;
								blast_end->Attrib = TEXT("age");
								blast_end->Op = UTccBlastByFeature::Greater;
								blast_end->Value = float(hs_detail(Geo0, "grow_age_end", 0));
								blast_end->Cook();
							}
							
							{
								// Node: scatter_points
								scatter_points->SetInput(0, blast_end);
								FTccGeometryConstPtr Geo0 = scatter_points->GetInput(0)->GetConstGeoResult(0);
								scatter_points->Npts = int32(hs_detail(Geo0, "max_count", 0));
								scatter_points->ScatterSeed = int32(hs_detail(Geo0, "seed", 0));
								scatter_points->Jitter = 0.265000f;
								scatter_points->DoU = 1;
								scatter_points->Cook();
							}
							
							SwitchResult = scatter_points->GetGeoResult(0);
						}
						break;
						case 1:
						{
							
							
							SwitchResult = scatter_points->GetGeoResult(0);
						}
						break;
						default:
						{
							checkNoEntry();
						}
						break;
					}
					scatter_on_end->SetValidGeoResult(0, SwitchResult);
				}
				
				{
					// Node: mirror
					mirror->SetInput(0, scatter_on_end);
					mirror->Input = int32(Mirror);
					mirror->NumCases = 2;
					mirror->Cook();
					FTccGeometryPtr SwitchResult = nullptr;
					const int32 Selection = mirror->Input;
					switch (Selection)
					{
						case 0:
						{
							{
								// Node: sign
								sign->SetInput(0, scatter_on_end);
								sign->Cook();
								{
									FTccGeometryPtr Geo0 = sign->GetGeoRef(0);
									FTccAttribPtr attr_sign = Geo0->AddPointAttrib("sign", ETccAttribType::F);
									const int32 _numpt = Geo0->GetNumPoints();
									for(int32 i = 0; i < _numpt; i++)
									{
										const int32 _ptnum = i;
										float& _sign = attr_sign->GetData<float>()[i];
										_sign = 1.0f;
									}
								}
							}
							
							
							
							
							SwitchResult = sign->GetGeoResult(0);
						}
						break;
						case 1:
						{
							
							{
								// Node: sign1
								sign1->SetInput(0, scatter_on_end);
								sign1->Cook();
								{
									FTccGeometryPtr Geo0 = sign1->GetGeoRef(0);
									FTccAttribPtr attr_sign = Geo0->AddPointAttrib("sign", ETccAttribType::F);
									const int32 _numpt = Geo0->GetNumPoints();
									for(int32 i = 0; i < _numpt; i++)
									{
										const int32 _ptnum = i;
										float& _sign = attr_sign->GetData<float>()[i];
										_sign = 1.0f;
									}
								}
							}
							
							{
								// Node: sign2
								sign2->SetInput(0, scatter_on_end);
								sign2->Cook();
								{
									FTccGeometryPtr Geo0 = sign2->GetGeoRef(0);
									FTccAttribPtr attr_sign = Geo0->AddPointAttrib("sign", ETccAttribType::F);
									const int32 _numpt = Geo0->GetNumPoints();
									for(int32 i = 0; i < _numpt; i++)
									{
										const int32 _ptnum = i;
										float& _sign = attr_sign->GetData<float>()[i];
										_sign =  - 1.0f;
									}
								}
							}
							
							{
								// Node: tcc_merge2
								tcc_merge2->SetInput(0, sign1);
								tcc_merge2->SetInput(1, sign2);
								tcc_merge2->Cook();
							}
							
							SwitchResult = tcc_merge2->GetGeoResult(0);
						}
						break;
						default:
						{
							checkNoEntry();
						}
						break;
					}
					mirror->SetValidGeoResult(0, SwitchResult);
				}
				
				{
					// Node: rand_drop
					rand_drop->SetInput(0, mirror);
					rand_drop->SetInput(1, nullptr);
					rand_drop->Cook();
					{
						FTccGeometryPtr Geo0 = rand_drop->GetGeoRef(0);
						FTccAttribPtr attr_drop = Geo0->AddPointAttrib("drop", ETccAttribType::I);
						const int32 gseed = Gseed;
						const float drop_rand = DropR;
						const int32 _numpt = Geo0->GetNumPoints();
						for(int32 i = 0; i < _numpt; i++)
						{
							const int32 _ptnum = i;
							int32& _drop = attr_drop->GetData<int32>()[i];
							int32 iter = _iteration;
							int32 seed = gseed + iter * 103 + _ptnum + 21;
							float r = vex_rand(seed);
							_drop = r < drop_rand ? 1 : 0;
						}
					}
				}
				
				{
					// Node: drop_points
					drop_points->SetInput(0, rand_drop);
					drop_points->Grouptype = UTccBlastByFeature::Points;
					drop_points->ByAttrib = 1;
					drop_points->Attrib = TEXT("drop");
					drop_points->Value = 1.000000f;
					drop_points->Cook();
				}
				
				{
					// Node: transform
					transform->SetInput(0, drop_points);
					transform->SetInput(1, nullptr);
					transform->SetInput(2, block_input0);
					transform->Cook();
					{
						FTccGeometryPtr Geo0 = transform->GetGeoRef(0);
						FTccGeometryConstPtr Geo2 = block_input0->GetConstGeoResult(0);
						FTccAttribPtr attr___u = Geo0->AddPointAttrib("__u", ETccAttribType::F);
						FTccAttribPtr attr_sign = Geo0->AddPointAttrib("sign", ETccAttribType::F);
						FTccAttribPtr attr_dir = Geo0->AddPointAttrib("dir", ETccAttribType::F3);
						FTccAttribPtr attr_radius = Geo0->AddPointAttrib("radius", ETccAttribType::F);
						FTccAttribPtr attr_orient = Geo0->AddPointAttrib("orient", ETccAttribType::F4);
						FTccAttribPtr attr_pscale = Geo0->AddPointAttrib("pscale", ETccAttribType::F);
						const int32 gseed = Gseed;
						const int32 method = Method;
						const int32 num_pts = vex_npoints(Geo0);
						const FVector2f yaw_range = vex_radians(Yaw);
						const int32 yaw_adv = YawAdv;
						const float pitch_r = vex_radians(PitchR);
						const float roll_r = vex_radians(RollR);
						const float yaw_offset = vex_radians(YawOffset);
						const float yaw_offset_r = vex_radians(YawOffsetR);
						const float yaw_sep = vex_radians(YawSep);
						const FVector2f pitch_range = vex_radians(PitchRange);
						const int32 pitch_adv = PitchAdv;
						const float radius_shrink = RadiusShrink;
						const float scale_base = Scale;
						const FVector3f forward = vex_set(0, 0, 1);
						const int32 _numpt = Geo0->GetNumPoints();
						for(int32 i = 0; i < _numpt; i++)
						{
							const int32 _ptnum = i;
							FVector3f& _P = Geo0->GetPositions()[i];
							float& ___u = attr___u->GetData<float>()[i];
							float& _sign = attr_sign->GetData<float>()[i];
							FVector3f& _dir = attr_dir->GetData<FVector3f>()[i];
							float& _radius = attr_radius->GetData<float>()[i];
							FVector4f& _orient = attr_orient->GetData<FVector4f>()[i];
							float& _pscale = attr_pscale->GetData<float>()[i];
							// Lay on branch
							// Around branch
							// Scale
							FVector3f up = vex_set(0, 1, 0);
							float branch_percent = ___u;
							float trunk_percent = vex_primf(Geo2, "percent", 0);
							float s = _sign;
							int32 iter = _iteration;
							int32 seed = gseed + iter * 100 + _ptnum + 28;
							FVector3f dir = _dir;
							if(vex_dot(dir, up)> 0.99f)
							up = vex_set(1, 0, 0);
							FVector3f dir_perp = vex_normalize(vex_cross(up, dir * s));
							if(method == 0)
							{
							    // lay on branch
							    // OFFSET from radius
							_P += dir_perp * _radius * radius_shrink;
							FVector3f axis = vex_cross(dir, dir_perp) * s;
							    // PITCH
							float pt_pitch = 0.f;
							FVector4f q = vex_set(0, 0, 0, 1);
							if(pitch_r > 0.f)
							{
							pt_pitch = vex_fit01(vex_rand(seed),  - pitch_r, pitch_r);
							FVector4f qpitch = vex_quaternion(pt_pitch, dir);
							q = qpitch;// vex_qmultiply(qpitch, q);
							        //dir_perp = qrotate(q, dir_perp);
							}
							    // YAW
							float yaw_percent = branch_percent;
							if(yaw_adv > 0)
							yaw_percent = YawRamp.Lookup(branch_percent);
							float pt_yaw = vex_lerp(yaw_range.X, yaw_range.Y, yaw_percent) * s;
							FVector4f qyaw = vex_quaternion(pt_yaw, axis);
							q = vex_qmultiply(qyaw, q);
							dir_perp = vex_qrotate(q, dir_perp);
							    // ROLL
							if(roll_r > 0.f)
							{
							float pt_roll = vex_fit01(vex_rand(seed + 181),  - roll_r, roll_r);
							FVector4f qroll = vex_quaternion(pt_roll, dir_perp);
							axis = vex_qrotate(qroll, axis);
							}
							FMatrix44f m = vex_maketransform(dir_perp, axis);
							_orient = vex_quaternion(m);
							}
							else
							{
							    // around branch
							        
							    // YAW
							int32 pt_index = _ptnum;
							if(s < 0.f)
							pt_index = _ptnum - num_pts / 2;
							float y_offset = yaw_offset;
							if(yaw_offset_r > 0.f)
							{
							y_offset += vex_fit01(vex_rand(seed + 71),  - yaw_offset_r, yaw_offset_r);
							}
							float pt_yaw = pt_index * yaw_sep + y_offset;
							FVector4f qyaw = vex_quaternion(pt_yaw, dir);
							FVector3f dir_fwd = vex_qrotate(qyaw, dir_perp);
							    // OFFSET from radius
							_P += dir_fwd * _radius * radius_shrink;
							    
							    // PITCH
							FVector3f axis = vex_cross(dir_fwd, dir);
							float pitch_percent = branch_percent;
							if(pitch_adv > 0)
							{
							pitch_percent = PitchRemap.Lookup(branch_percent);
							}
							float pt_pitch = vex_lerp(pitch_range.X, pitch_range.Y, pitch_percent);
							if(pitch_adv > 0)
							{
							pt_pitch *= PitchAlongTrunk.Lookup(trunk_percent);
							}
							FVector4f qpitch = vex_quaternion(pt_pitch, axis);
							dir_fwd = vex_qrotate(qpitch, dir_fwd);
							    //v@dir_fwd = dir_fwd;
							    // ROLL
							FMatrix44f m = vex_maketransform(dir_fwd, dir);
							_orient = vex_quaternion(m);
							}
							// SCALE
							_pscale = scale_base * ScaleAlongBranch.Lookup(branch_percent);
							_pscale *= ScaleAlongTrunk.Lookup(trunk_percent);
						}
					}
				}
				
				{
					// Node: remove_unused_attribs
					remove_unused_attribs->SetInput(0, transform);
					remove_unused_attribs->Ptdel = TEXT("__u age dir drop radius sign");
					remove_unused_attribs->Cook();
				}
				
				foreach_branch->SetPieceResult(piece, remove_unused_attribs->GetGeoResult(0));
				delete block_input0;
			}
			foreach_branch->MergeResult();
		}
	}
	{
		// Node: empty
		empty->SetInput(0, foreach_branch);
		empty->Cook();
		{
			FTccGeometryPtr Geo0 = empty->GetGeoRef(0);
		}
	}
	{
		// Node: use_instance_id
		use_instance_id->SetInput(0, empty);
		use_instance_id->Input = int32(UseInstanceId);
		use_instance_id->NumCases = 2;
		use_instance_id->Cook();
		FTccGeometryPtr SwitchResult = nullptr;
		const int32 Selection = use_instance_id->Input;
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
					// Node: tcc_attrib_promote1
					tcc_attrib_promote1->SetInput(0, GetInput(1));
					tcc_attrib_promote1->Inname = TEXT("instance_id");
					tcc_attrib_promote1->Inclass = UTccAttribPromote::PackedGeos;
					tcc_attrib_promote1->Outclass = UTccAttribPromote::DetailOnlyOnce;
					tcc_attrib_promote1->DoMax = 1;
					tcc_attrib_promote1->Cook();
				}
				
				{
					// Node: assign_piece_id
					assign_piece_id->SetInput(0, empty);
					assign_piece_id->SetInput(1, tcc_attrib_promote1);
					assign_piece_id->Cook();
					{
						FTccGeometryPtr Geo0 = assign_piece_id->GetGeoRef(0);
						FTccGeometryConstPtr Geo1 = tcc_attrib_promote1->GetConstGeoResult(0);
						FTccAttribPtr attr_instance_id = Geo0->AddPointAttrib("instance_id", ETccAttribType::I);
						const int32 gseed = Gseed;
						const int32 max_id = vex_detaili(Geo1, "max_instance_id");
						const int32 _numpt = Geo0->GetNumPoints();
						for(int32 i = 0; i < _numpt; i++)
						{
							const int32 _ptnum = i;
							int32& _instance_id = attr_instance_id->GetData<int32>()[i];
							int32 seed = gseed + _ptnum + 4;
							int32 _id = (int)vex_fit01(vex_rand(seed), 0, max_id + 1.f);
							_instance_id = _id;
						}
					}
				}
				
				SwitchResult = assign_piece_id->GetGeoResult(0);
			}
			break;
			default:
			{
				checkNoEntry();
			}
			break;
		}
		use_instance_id->SetValidGeoResult(0, SwitchResult);
	}
	{
		// Node: tcc_instancer2
		tcc_instancer2->SetInput(0, GetInput(1));
		tcc_instancer2->SetInput(1, use_instance_id);
		tcc_instancer2->Useidattrib = int32(UseInstanceId);
		tcc_instancer2->Idattrib = TEXT("instance_id");
		tcc_instancer2->Cook();
	}
	SetGeoResult(UTcrTreeLeafScatter::output0, tcc_instancer2->GetGeoResult(0));
}

