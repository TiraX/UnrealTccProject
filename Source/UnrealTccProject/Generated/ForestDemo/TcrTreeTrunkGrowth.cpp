// Auto generated by UnrealTcc. 

#include "TcrTreeTrunkGrowth.h"
#include "Generated/TccTemplates.h"
#include "TccForBlock.h"
#include "TccSwitch.h"
#include "TctTexVex.h"
#include "TccAttribute.h"
#include "TccGeometry.h"
#include "Vex.h"
#include "HScript.h"

 UTcrTreeTrunkGrowth::UTcrTreeTrunkGrowth() 
{
	RadiusShape.ResizeRampPoints(3);
	RadiusShape.AddRampPoint(0.0000f, 1.0000f);
	RadiusShape.AddRampPoint(0.1500f, 0.5000f);
	RadiusShape.AddRampPoint(1.0000f, 0.5000f);
}
FTccNodePtr UTcrTreeTrunkGrowth::CreateNode() 
{
	TSharedPtr<FTcrTreeTrunkGrowth> Node = MakeShared<FTcrTreeTrunkGrowth>();
	SyncParams(Node);
	return Node;
}
void UTcrTreeTrunkGrowth::SyncParams(FTccNodePtr InNode) 
{
	TSharedPtr<FTcrTreeTrunkGrowth> Node = StaticCastSharedPtr<FTcrTreeTrunkGrowth>(InNode);
	Node->RadiusShape = RadiusShape;
	Node->Gseed = Gseed;
	Node->TreeAge = TreeAge;
	Node->MaxAge = MaxAge;
	Node->SegLen = SegLen;
	Node->Radius = Radius;
	Node->CurlForce = CurlForce;
	Node->CurlFreq = CurlFreq;
}

 FTcrTreeTrunkGrowth::FTcrTreeTrunkGrowth() 
{
	InitInputsCount(0);
	main_trunk = new FTccVex();
	main_trunk->InitMultiRefs(false); // RefCount = 1
	RadiusShape.ResizeRampPoints(3);
	RadiusShape.AddRampPoint(0.0000f, 1.0000f);
	RadiusShape.AddRampPoint(0.1500f, 0.5000f);
	RadiusShape.AddRampPoint(1.0000f, 0.5000f);
}
 FTcrTreeTrunkGrowth::~FTcrTreeTrunkGrowth() 
{
	delete main_trunk; 
}
void FTcrTreeTrunkGrowth::Cook() 
{
	{
		// Node: main_trunk
		main_trunk->Cook();
		{
			FTccGeometryPtr Geo0 = main_trunk->GetGeoRef(0);
			FTccAttribPtr attr_global_tree_age = Geo0->AddDetailAttrib("global_tree_age", ETccAttribType::F);
			FTccAttribPtr attr_global_seg_len = Geo0->AddDetailAttrib("global_seg_len", ETccAttribType::F);
			FTccAttribPtr attr_global_radius_base = Geo0->AddDetailAttrib("global_radius_base", ETccAttribType::F);
			const int32 gseed = Gseed;
			const float tree_age = TreeAge;
			const float tree_age_inv = 1.f / tree_age;
			const float max_age = MaxAge;
			const float trunk_age = vex_min(max_age, tree_age);
			const float max_seg_len = SegLen;
			const float radius = Radius;
			const float curl_force = CurlForce;
			const float curl_freq = CurlFreq;
			const FVector3f up = vex_set(0, 1, 0);
			const float eps = 0.01f;
			float& _global_tree_age = attr_global_tree_age->GetData<float>()[0];
			float& _global_seg_len = attr_global_seg_len->GetData<float>()[0];
			float& _global_radius_base = attr_global_radius_base->GetData<float>()[0];
			// parameters
			int32 num_segs = (int)ceil(trunk_age / max_seg_len);
			float len_left = trunk_age - max_seg_len * (num_segs - 1);
			if(len_left > eps)
			num_segs ++;
			// trunk points
			TArray < FVector3f > poses;
			TArray < float > ages;
			TArray < FVector3f > dirs;
			TArray < float > rads;
			vex_resize(poses, num_segs);
			vex_resize(ages, num_segs);
			vex_resize(dirs, num_segs);
			vex_resize(rads, num_segs);
			// first point always at 0
			FVector3f last_pos = vex_set(0, 0, 0);
			float local_age = 0.f;
			poses [ 0] = last_pos;
			ages [ 0] = local_age;
			dirs [ 0] = vex_set(0, 1, 0);
			rads [ 0] = radius;
			for(int i = 1;i < num_segs;i ++)
			{
			float seg_len = vex_min(trunk_age - local_age, max_seg_len);
			local_age += seg_len;
			FVector3f dir = vex_set(0, 1, 0);
			    // apply curl if no guide lines
			if(curl_force > 0.f)
			{
			FVector3f curl_seed = last_pos * curl_freq + float(gseed);
			FVector3f c = vex_curlnoise2d(curl_seed) * curl_force;
			c = vex_set(c.X, 0.f, c.Y);
			dir = vex_normalize(dir + c);
			}
			FVector3f pos = last_pos + dir * seg_len;
			poses [ i] = pos;
			ages [ i] = local_age;
			dirs [ i] = dir;
			float local_radius = radius * RadiusShape.Lookup(local_age * tree_age_inv);
			rads [ i] = local_radius;
			last_pos = pos;
			}
			TArray < int32 > pts= vex_addpoints(Geo0, poses);
			vex_setpointsattrib(Geo0, "age", pts, ages);
			vex_setpointsattrib(Geo0, "dir", pts, dirs);
			vex_setpointsattrib(Geo0, "radius", pts, rads);
			// trunk primitive
			int32 trunk_line = vex_addprim(Geo0, "polyline", pts);
			// set level attrib to 0
			vex_setprimattrib(Geo0, "level", trunk_line, 0);
			vex_setprimattrib(Geo0, "percent", trunk_line, 0.f);
			// meta infos
			_global_tree_age = tree_age;
			_global_seg_len = max_seg_len;
			_global_radius_base = radius;
			//i@curr_level = 0;
		}
	}
	SetGeoResult(UTcrTreeTrunkGrowth::output0, main_trunk->GetGeoResult(0));
}

