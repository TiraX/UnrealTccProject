// Auto generated by UnrealTcc. 

#include "TcrTreeBranchGrowth.h"
#include "Generated/TccTemplates.h"
#include "TccForBlock.h"
#include "TccSwitch.h"
#include "TctTexVex.h"
#include "TccAttribute.h"
#include "TccGeometry.h"
#include "Vex.h"
#include "HScript.h"

 UTcrTreeBranchGrowth::UTcrTreeBranchGrowth() 
{
	MaxCountRamp.ResizeRampPoints(2);
	MaxCountRamp.AddRampPoint(0.0000f, 1.0000f);
	MaxCountRamp.AddRampPoint(1.0000f, 1.0000f);
	SegLenRamp.ResizeRampPoints(2);
	SegLenRamp.AddRampPoint(0.0000f, 1.0000f);
	SegLenRamp.AddRampPoint(1.0000f, 1.0000f);
	StartPercentRamp.ResizeRampPoints(2);
	StartPercentRamp.AddRampPoint(0.0000f, 1.0000f);
	StartPercentRamp.AddRampPoint(1.0000f, 1.0000f);
	AgeDisRamp.ResizeRampPoints(2);
	AgeDisRamp.AddRampPoint(0.0000f, 1.0000f);
	AgeDisRamp.AddRampPoint(1.0000f, 1.0000f);
	MaxAgeRamp.ResizeRampPoints(2);
	MaxAgeRamp.AddRampPoint(0.0000f, 1.0000f);
	MaxAgeRamp.AddRampPoint(1.0000f, 0.2000f);
	RadiusShape.ResizeRampPoints(3);
	RadiusShape.AddRampPoint(0.0000f, 1.0000f);
	RadiusShape.AddRampPoint(0.1506f, 0.2500f);
	RadiusShape.AddRampPoint(1.0000f, 0.2500f);
	Pitch0Ramp.ResizeRampPoints(2);
	Pitch0Ramp.AddRampPoint(0.0000f, 1.0000f);
	Pitch0Ramp.AddRampPoint(1.0000f, 1.0000f);
	Pitch1Ramp.ResizeRampPoints(2);
	Pitch1Ramp.AddRampPoint(0.0000f, 1.0000f);
	Pitch1Ramp.AddRampPoint(1.0000f, 1.0000f);
	Soft.ResizeRampPoints(2);
	Soft.AddRampPoint(0.0000f, 0.0000f);
	Soft.AddRampPoint(1.0000f, 1.0000f);
}
FTccNodePtr UTcrTreeBranchGrowth::CreateNode() 
{
	TSharedPtr<FTcrTreeBranchGrowth> Node = MakeShared<FTcrTreeBranchGrowth>();
	SyncParams(Node);
	return Node;
}
void UTcrTreeBranchGrowth::SyncParams(FTccNodePtr InNode) 
{
	TSharedPtr<FTcrTreeBranchGrowth> Node = StaticCastSharedPtr<FTcrTreeBranchGrowth>(InNode);
	Node->MaxCountRamp = MaxCountRamp;
	Node->SegLenRamp = SegLenRamp;
	Node->StartPercentRamp = StartPercentRamp;
	Node->AgeDisRamp = AgeDisRamp;
	Node->MaxAgeRamp = MaxAgeRamp;
	Node->RadiusShape = RadiusShape;
	Node->Pitch0Ramp = Pitch0Ramp;
	Node->Pitch1Ramp = Pitch1Ramp;
	Node->Soft = Soft;
	Node->Gseed = Gseed;
	Node->MaxCount = MaxCount;
	Node->MaxCountShowAdv = MaxCountShowAdv;
	Node->MaxCountAdv = MaxCountAdv;
	Node->SegLen = SegLen;
	Node->SegLenShowAdv = SegLenShowAdv;
	Node->SegLenAdv = SegLenAdv;
	Node->StartPercent = StartPercent;
	Node->StartPercentShowAdv = StartPercentShowAdv;
	Node->StartPercentAdv = StartPercentAdv;
	Node->AgeDis = AgeDis;
	Node->AgeDisShowAdv = AgeDisShowAdv;
	Node->AgeDisAdv = AgeDisAdv;
	Node->MaxAge = MaxAge;
	Node->MaxAgeShowAdv = MaxAgeShowAdv;
	Node->MaxAgeAdv = MaxAgeAdv;
	Node->EnableDebug = EnableDebug;
	Node->DbgColor = DbgColor;
	Node->YawOffset = YawOffset;
	Node->Yaw = Yaw;
	Node->Pitch0 = Pitch0;
	Node->Pitch0ShowAdv = Pitch0ShowAdv;
	Node->Pitch0Adv = Pitch0Adv;
	Node->Pitch1 = Pitch1;
	Node->Pitch1ShowAdv = Pitch1ShowAdv;
	Node->Pitch1Adv = Pitch1Adv;
	Node->PitchLerpRange = PitchLerpRange;
	Node->Curl = Curl;
	Node->CurlFreq = CurlFreq;
	Node->SoftStart = SoftStart;
	Node->Force = Force;
	Node->ForceDir = ForceDir;
	Node->Attraction = Attraction;
	Node->AttractDir = AttractDir;
}

 FTcrTreeBranchGrowth::FTcrTreeBranchGrowth() 
{
	InitInputsCount(1);
	foreach_begin4 = new FTccForBlock();
	foreach_begin4->InitMultiRefs(false); // RefCount = 1
	foreach_begin4->InitInputsCount(1);
		branch1 = new FTccVex();
		branch1->InitMultiRefs(false); // RefCount = 1
	tcc_vex2 = new FTccVex();
	tcc_vex2->InitMultiRefs(false); // RefCount = 1
	MaxCountRamp.ResizeRampPoints(2);
	MaxCountRamp.AddRampPoint(0.0000f, 1.0000f);
	MaxCountRamp.AddRampPoint(1.0000f, 1.0000f);
	SegLenRamp.ResizeRampPoints(2);
	SegLenRamp.AddRampPoint(0.0000f, 1.0000f);
	SegLenRamp.AddRampPoint(1.0000f, 1.0000f);
	StartPercentRamp.ResizeRampPoints(2);
	StartPercentRamp.AddRampPoint(0.0000f, 1.0000f);
	StartPercentRamp.AddRampPoint(1.0000f, 1.0000f);
	AgeDisRamp.ResizeRampPoints(2);
	AgeDisRamp.AddRampPoint(0.0000f, 1.0000f);
	AgeDisRamp.AddRampPoint(1.0000f, 1.0000f);
	MaxAgeRamp.ResizeRampPoints(2);
	MaxAgeRamp.AddRampPoint(0.0000f, 1.0000f);
	MaxAgeRamp.AddRampPoint(1.0000f, 0.2000f);
	RadiusShape.ResizeRampPoints(3);
	RadiusShape.AddRampPoint(0.0000f, 1.0000f);
	RadiusShape.AddRampPoint(0.1506f, 0.2500f);
	RadiusShape.AddRampPoint(1.0000f, 0.2500f);
	Pitch0Ramp.ResizeRampPoints(2);
	Pitch0Ramp.AddRampPoint(0.0000f, 1.0000f);
	Pitch0Ramp.AddRampPoint(1.0000f, 1.0000f);
	Pitch1Ramp.ResizeRampPoints(2);
	Pitch1Ramp.AddRampPoint(0.0000f, 1.0000f);
	Pitch1Ramp.AddRampPoint(1.0000f, 1.0000f);
	Soft.ResizeRampPoints(2);
	Soft.AddRampPoint(0.0000f, 0.0000f);
	Soft.AddRampPoint(1.0000f, 1.0000f);
}
 FTcrTreeBranchGrowth::~FTcrTreeBranchGrowth() 
{
	delete foreach_begin4; 
		delete branch1; 
	delete tcc_vex2; 
}
void FTcrTreeBranchGrowth::Cook() 
{
	{
		// Node: foreach_begin4
		foreach_begin4->SetInput(0, GetInput(0));
		foreach_begin4->Itermethod = UTccForBlock::ByPiecesOrPoints;
		foreach_begin4->Method = UTccForBlock::MergeEachIteration;
		foreach_begin4->Class = UTccForBlock::Primitives;
		foreach_begin4->Cook();
		{
			// By Pieces or Points, Merge Each Iteration, Primitives
			const int32 NumPieces = foreach_begin4->GetNumPieces();
			for(int32 piece = 0; piece < NumPieces; piece ++)
			{
				const int32 _iteration = piece;
				FTccNode* block_input0 = new FTccNode();
				block_input0->SetGeoResult(0, foreach_begin4->GetGeometryPiece(piece));
				{
					// Node: branch1
					branch1->SetInput(0, nullptr);
					branch1->SetInput(1, block_input0);
					branch1->SetInput(2, nullptr);
					branch1->Cook();
					{
						FTccGeometryPtr Geo0 = branch1->GetGeoResult(0);
						FTccGeometryConstPtr Geo1 = block_input0->GetConstGeoResult(0);
						const int32 gseed = Gseed;
						const float tree_age = vex_detailf(Geo1, "global_tree_age");
						const float max_age_base = MaxAge;
						const int32 max_age_adv = MaxAgeAdv;
						const int32 max_count_base = MaxCount;
						const int32 max_count_adv = MaxCountAdv;
						const float seg_len_override = SegLen;
						const int32 seg_len_adv = SegLenAdv;
						const float start_range_base = StartPercent;
						const int32 start_range_adv = StartPercentAdv;
						const float sep_range_base = AgeDis;
						const int32 sep_range_adv = AgeDisAdv;
						const float yaw_step = vex_radians(Yaw);
						const float yaw_offset = vex_radians(YawOffset);
						const float pitch_start_base = vex_radians(Pitch0);
						const int32 pitch_start_adv = Pitch0Adv;
						const float pitch_target_base = vex_radians(Pitch1);
						const int32 pitch_target_adv = Pitch1Adv;
						const float soft_age = SoftStart;
						const float force = Force;
						const FVector3f force_dir = vex_normalize(ForceDir);
						const float attraction = Attraction;
						const FVector3f attract_dir = vex_normalize(AttractDir);
						const FVector2f pitch_lerp_range = PitchLerpRange;
						const float curl = Curl;
						const float curl_freq = CurlFreq;
						const int32 parent_level = vex_primi(Geo1, "level", 0);
						const int32 curr_level = parent_level + 1;
						const float parent_percent = vex_primf(Geo1, "percent", 0);
						const float _age0 = vex_pointf(Geo1, "age", 0);
						const float _age1 = vex_pointf(Geo1, "age", 1);
						const float inv_seg_len = 1.f / (_age1 - _age0);
						const float eps = 0.01f;
						const float pitch_end_percent = 0.8f;
						const float pitch_tail = vex_radians(0);
						const float max_age_tail = 0.3f;
						float max_seg_len = vex_detailf(Geo1, "global_seg_len");
						if(seg_len_override > 0.0f)
						{
						max_seg_len = seg_len_override;
						if(seg_len_adv > 0)
						max_seg_len = SegLenRamp.Lookup(parent_percent);
						}
						int32 max_count = max_count_base;
						if(max_count_adv > 0)
						{
						max_count = (int)(max_count * MaxCountRamp.Lookup(parent_percent) + 0.5f);
						}
						float start = start_range_base;
						if(start_range_adv > 0)
						{
						start *= StartPercentRamp.Lookup(parent_percent);
						}
						// turn to age
						TArray < int32 > parent_pts= vex_primpoints(Geo1, 0);
						float _age_ = vex_pointf(Geo1, "age", parent_pts [ vex_len(parent_pts) - 1]);
						start *= (_age_ - _age0);
						int32 iter = _iteration;
						int32 seed = gseed + iter + 19;
						// generate branch points
						int32 max_pts_on_parent = vex_npoints(Geo1);
						float age_start_on_parent = vex_pointf(Geo1, "age", 0);
						float age_end_on_parent = vex_pointf(Geo1, "age", max_pts_on_parent - 1);
						float yaw = yaw_offset;
						int32 num_generated = 0;
						float branch_start = start;
						float max_ages_generated = 0.f;
						int32 use_parent_percent = curr_level == 1 ? 0 : 1;
						// pre calc ages
						for(float age = branch_start;age < tree_age;)
						{
						    // find correct segs
						float _pt = age * inv_seg_len;
						int32 pt0 = floor(_pt);
						int32 pt1 = pt0 + 1;
						float ratio = _pt - pt0;
						if(pt0 >= max_pts_on_parent - 1)
						break;
						    
						if(max_count > 0 && num_generated >= max_count)
						break;
						max_ages_generated = age;
						    
						float percent = 0.f;
						if(use_parent_percent)
						percent = parent_percent;
						else
						percent = (age - branch_start) / (max_ages_generated - branch_start);
						        
						seed += 91;
						float age_step = sep_range_base;
						if(sep_range_adv > 0)
						{
						age_step *= AgeDisRamp.Lookup(percent);
						age_step = vex_max(0.01f, age_step);
						}
						age += age_step;
						num_generated ++;
						}
						// reset params
						seed = gseed + iter + 19;
						yaw = yaw_offset;
						num_generated = 0;
						for(float age = branch_start;age < tree_age;)
						{
						    // find correct segs
						float _pt = age * inv_seg_len;
						int32 pt0 = floor(_pt);
						int32 pt1 = pt0 + 1;
						float ratio = _pt - pt0;
						if(pt0 >= max_pts_on_parent - 1)
						break;
						    
						if(max_count > 0 && num_generated >= max_count)
						break;
						    // load properties
						FVector3f pos0 = vex_pointp(Geo1, pt0);
						FVector3f pos1 = vex_pointp(Geo1, pt1);
						FVector3f dir0 = vex_pointv(Geo1, "dir", pt0);
						FVector3f dir1 = vex_pointv(Geo1, "dir", pt1);
						float radius0 = vex_pointf(Geo1, "radius", pt0);
						float radius1 = vex_pointf(Geo1, "radius", pt1);
						    // interporlate
						FVector3f pos = vex_lerp(pos0, pos1, ratio);
						FVector3f dir = vex_lerp(dir0, dir1, ratio);
						dir = vex_normalize(dir);
						float radius = vex_lerp(radius0, radius1, ratio) * 0.95f;
						    // find grow direction
						FVector3f up = vex_set(0, 1, 0);
						float DoU = vex_dot(dir, up);
						if(DoU > 0.9f)
						up = vex_set(1, 0, 0);
						FVector3f axis = vex_cross(dir, up);
						float percent = 0.f;
						if(use_parent_percent)
						percent = parent_percent;
						else
						percent = (age - branch_start) / (max_ages_generated - branch_start);
						    
						float branch_max_age = max_age_base;
						if(max_age_adv > 0)
						{
						branch_max_age *= MaxAgeRamp.Lookup(percent);
						}
						float pitch_start = pitch_start_base;
						if(pitch_start_adv > 0)
						{
						pitch_start *= Pitch0Ramp.Lookup(percent);
						}
						float pitch_target = pitch_target_base;
						if(pitch_target_adv > 0)
						{
						pitch_target *= Pitch1Ramp.Lookup(percent);
						}
						    // lerp between pitch_start/pitch_target and pitch_tail when grow greater than 80%
						float grow_percent_on_parent = age / (age_end_on_parent - age_start_on_parent);
						if(use_parent_percent == 1 && grow_percent_on_parent > pitch_end_percent)
						{
						float p = vex_fit(grow_percent_on_parent, pitch_end_percent, 1.f, 0.f, 0.9f);
						pitch_start = vex_lerp(pitch_start, pitch_tail, p);
						pitch_target = vex_lerp(pitch_target, pitch_tail, p);
						branch_max_age -= branch_max_age * p * (1 - max_age_tail);
						}
						FVector4f qpitch_start = vex_quaternion(pitch_start, axis);
						FVector4f qpitch_target = vex_quaternion(pitch_target, axis);
						FVector4f qyaw = vex_quaternion(yaw, dir);
						FVector4f q = vex_qmultiply(qyaw, qpitch_start);
						FVector4f q1 = vex_qmultiply(qyaw, qpitch_target);
						    // will lerp between start and target pitch with range limit: pitch_lerp_range
						FVector3f dir_start = vex_qrotate(q, dir);
						FVector3f dir_target = vex_qrotate(q1, dir);
						float local_branch_age = vex_min(branch_max_age + age_start_on_parent + age, tree_age);
						    // int branch_line = create_branch(
						    //     age_start_on_parent, age, local_branch_age - age_start_on_parent, max_seg_len, curl, curl_freq, radius, force, attraction,
						    //     seed, curr_level, iter, 
						    //     pitch_lerp_range, 
						    //     pos, dir_start, dir_target, force_dir, attract_dir);
						    // function int create_branch(
						    //     float base_age, start_age, max_age, max_seg_len, curl, curl_freq, base_radius, force, attraction;
						    //     int seed, branch_level, id;
						    //     vector2 pitch_lerp_range;
						    //     vector start_pos, start_dir, target_dir, force_dir, attract_dir
						    // )
						int32 branch_line =  - 1;
						{
						float base_age = age_start_on_parent;
						float start_age = age;
						float max_age = local_branch_age - age_start_on_parent;
						float base_radius = radius;
						int32 branch_level = curr_level;
						int32 id = iter;
						FVector3f start_pos = pos;
						FVector3f start_dir = dir_start;
						FVector3f target_dir = dir_target;
						float age_len = max_age - start_age;
						float inv_age_len = 1.f / age_len;
						int32 num_segs = (int)ceil(age_len / max_seg_len);
						float len_left = age_len - max_seg_len * (num_segs - 1);
						if(len_left > eps)
						num_segs ++;
						        
						        //check(num_segs > 0);  //tcc_mark:uncomment
						TArray < FVector3f > poses;
						TArray < float > ages;
						TArray < FVector3f > dirs;
						TArray < float > rads;
						vex_resize(poses, num_segs);
						vex_resize(ages, num_segs);
						vex_resize(dirs, num_segs);
						vex_resize(rads, num_segs);
						        // first point always at 0
						FVector3f last_pos = start_pos;
						float local_age = start_age;
						poses [ 0] = last_pos;
						ages [ 0] = local_age + base_age;
						dirs [ 0] = start_dir;
						rads [ 0] = base_radius;
						for(int i = 1;i < num_segs;i ++)
						{
						float seg_len = vex_min(max_age - local_age, max_seg_len);
						local_age += seg_len;
						            // calc grow dir, lerp between start and target
						float relative_age = local_age - start_age;
						float dir_ratio = vex_fitto01(relative_age, pitch_lerp_range.X, pitch_lerp_range.Y);
						FVector3f branch_dir = vex_lerp(start_dir, target_dir, dir_ratio);
						branch_dir = vex_normalize(branch_dir);
						float relative_age_percent = relative_age * inv_age_len;
						float softness = Soft.Lookup(relative_age_percent);
						            // apply force
						if(force > 0.f)
						{
						branch_dir = vex_normalize(branch_dir + force_dir * force * softness);
						}
						if(attraction > 0.f)
						{
						branch_dir = vex_normalize(branch_dir + attract_dir * attraction * softness);
						}
						            // apply curl if no guide lines
						if(curl > 0.f)
						{
						FVector3f curl_seed = last_pos * curl_freq + float(seed);
						FVector3f c = vex_curlnoise(curl_seed) * curl;
						branch_dir = vex_normalize(branch_dir + c);
						}
						            
						FVector3f branch_pos = last_pos + branch_dir * seg_len;
						            // calc radius
						float local_radius = RadiusShape.Lookup(relative_age_percent) * base_radius;
						poses [ i] = branch_pos;
						ages [ i] = local_age + base_age;
						dirs [ i] = branch_dir;
						rads [ i] = local_radius;
						last_pos = branch_pos;
						}
						TArray < int32 > pts= vex_addpoints(Geo0, poses);
						vex_setpointsattrib(Geo0, "age", pts, ages);
						vex_setpointsattrib(Geo0, "dir", pts, dirs);
						vex_setpointsattrib(Geo0, "radius", pts, rads);
						        // add prim if there is enough points
						branch_line = vex_addprim(Geo0, "polyline", pts);
						vex_setprimattrib(Geo0, "level", branch_line, branch_level);
						vex_setprimattrib(Geo0, "id", branch_line, id);
						}
						    
						vex_setprimattrib(Geo0, "percent", branch_line, percent);
						seed += 91;
						yaw += yaw_step;
						float age_step = sep_range_base;
						if(sep_range_adv > 0)
						{
						age_step *= AgeDisRamp.Lookup(percent);
						age_step = vex_max(0.01f, age_step);
						}
						age += age_step;
						num_generated ++;
						}
					}
				}
				
				foreach_begin4->SetPieceResult(piece, branch1->GetGeoResult(0));
				delete block_input0;
			}
			foreach_begin4->MergeResult();
		}
	}
	{
		// Node: tcc_vex2
		tcc_vex2->SetInput(0, foreach_begin4);
		tcc_vex2->SetInput(1, GetInput(0));
		tcc_vex2->Cook();
		{
			FTccGeometryPtr Geo0 = tcc_vex2->GetGeoResult(0);
			FTccGeometryConstPtr Geo1 = GetInput(0)->GetConstGeoResult(0);
			FTccAttribPtr attr_global_radius_base = Geo0->AddDetailAttrib("global_radius_base", ETccAttribType::F);
			FTccAttribPtr attr_global_radius_min = Geo0->AddDetailAttrib("global_radius_min", ETccAttribType::F);
			FTccAttribPtr attr_global_seg_len = Geo0->AddDetailAttrib("global_seg_len", ETccAttribType::F);
			FTccAttribPtr attr_global_tree_age = Geo0->AddDetailAttrib("global_tree_age", ETccAttribType::F);
			float& _global_radius_base = attr_global_radius_base->GetData<float>()[0];
			float& _global_radius_min = attr_global_radius_min->GetData<float>()[0];
			float& _global_seg_len = attr_global_seg_len->GetData<float>()[0];
			float& _global_tree_age = attr_global_tree_age->GetData<float>()[0];
			_global_radius_base = vex_detailf(Geo1, "global_radius_base");
			_global_radius_min = vex_detailf(Geo1, "global_radius_min");
			_global_seg_len = vex_detailf(Geo1, "global_seg_len");
			_global_tree_age = vex_detailf(Geo1, "global_tree_age");
		}
	}
	SetGeoResult(UTcrTreeBranchGrowth::output0, tcc_vex2->GetGeoResult(0));
}

