// Auto generated by UnrealTcc. 

#include "TcrTreeBigSubbranchScatter.h"
#include "Generated/TccTemplates.h"
#include "TccForBlock.h"
#include "TccSwitch.h"
#include "TctTexVex.h"
#include "TccAttribute.h"
#include "TccGeometry.h"
#include "Vex.h"
#include "HScript.h"

 UTcrTreeBigSubbranchScatter::UTcrTreeBigSubbranchScatter() 
{
}
FTccNodePtr UTcrTreeBigSubbranchScatter::CreateNode() 
{
	TSharedPtr<FTcrTreeBigSubbranchScatter> Node = MakeShared<FTcrTreeBigSubbranchScatter>();
	SyncParams(Node);
	return Node;
}
void UTcrTreeBigSubbranchScatter::SyncParams(FTccNodePtr InNode) 
{
	TSharedPtr<FTcrTreeBigSubbranchScatter> Node = StaticCastSharedPtr<FTcrTreeBigSubbranchScatter>(InNode);
	Node->Gseed = Gseed;
	Node->AgeDis = AgeDis;
	Node->Scale = Scale;
}

 FTcrTreeBigSubbranchScatter::FTcrTreeBigSubbranchScatter() 
{
	InitInputsCount(2);
	tcc_measure1 = new FTccMeasure();
	tcc_measure1->InitMultiRefs(false); // RefCount = 1
	clean_extra_attribs = new FTccAttribDelete();
	clean_extra_attribs->InitMultiRefs(false); // RefCount = 1
	foreach_begin1 = new FTccForBlock();
	foreach_begin1->InitMultiRefs(false); // RefCount = 1
	foreach_begin1->InitInputsCount(1);
		info = new FTccVex();
		info->InitMultiRefs(false); // RefCount = 1
		tcc_dithered_scatter1 = new FTccDitheredScatter();
		tcc_dithered_scatter1->InitMultiRefs(false); // RefCount = 1
		scale_and_angle = new FTccVex();
		scale_and_angle->InitMultiRefs(true); // RefCount = 2
		vertical = new FTccBlastByFeature();
		vertical->InitMultiRefs(false); // RefCount = 1
		rot = new FTccVex();
		rot->InitMultiRefs(false); // RefCount = 1
		tcc_attrib_delete1 = new FTccAttribDelete();
		tcc_attrib_delete1->InitMultiRefs(false); // RefCount = 1
		horizontal = new FTccBlastByFeature();
		horizontal->InitMultiRefs(false); // RefCount = 1
		rot1 = new FTccVex();
		rot1->InitMultiRefs(false); // RefCount = 1
		tcc_attrib_delete2 = new FTccAttribDelete();
		tcc_attrib_delete2->InitMultiRefs(false); // RefCount = 1
		tcc_merge1 = new FTccMerge();
		tcc_merge1->InitMultiRefs(false); // RefCount = 1
	tcc_instancer1 = new FTccInstancer();
	tcc_instancer1->InitMultiRefs(false); // RefCount = 1
}
 FTcrTreeBigSubbranchScatter::~FTcrTreeBigSubbranchScatter() 
{
	delete tcc_measure1; 
	delete clean_extra_attribs; 
	delete foreach_begin1; 
		delete info; 
		delete tcc_dithered_scatter1; 
		delete scale_and_angle; 
		delete vertical; 
		delete rot; 
		delete tcc_attrib_delete1; 
		delete horizontal; 
		delete rot1; 
		delete tcc_attrib_delete2; 
		delete tcc_merge1; 
	delete tcc_instancer1; 
}
void FTcrTreeBigSubbranchScatter::Cook() 
{
	{
		// Node: tcc_measure1
		tcc_measure1->SetInput(0, GetInput(0));
		tcc_measure1->Measure = UTccMeasure::Perimeter;
		tcc_measure1->Attribname = TEXT("len");
		tcc_measure1->Cook();
	}
	{
		// Node: clean_extra_attribs
		clean_extra_attribs->SetInput(0, tcc_measure1);
		clean_extra_attribs->Ptdel = TEXT("age radius");
		clean_extra_attribs->Cook();
	}
	{
		// Node: foreach_begin1
		foreach_begin1->SetInput(0, clean_extra_attribs);
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
					// Node: info
					info->SetInput(0, block_input0);
					info->SetInput(1, nullptr);
					info->Cook();
					{
						FTccGeometryPtr Geo0 = info->GetGeoRef(0);
						FTccAttribPtr attr_count = Geo0->AddDetailAttrib("count", ETccAttribType::I);
						FTccAttribPtr attr_seed = Geo0->AddDetailAttrib("seed", ETccAttribType::I);
						const float sep = AgeDis;
						const float vex_len = vex_primf(Geo0, "len", 0);
						const int32 count = (int)(vex_len / sep + 0.5f);
						const int32 seed = Gseed;
						int32& _count = attr_count->GetData<int32>()[0];
						int32& _seed = attr_seed->GetData<int32>()[0];
						_count = count;
						int32 iter = _iteration;
						_seed = seed + iter + 3;
					}
				}
				
				{
					// Node: tcc_dithered_scatter1
					tcc_dithered_scatter1->SetInput(0, info);
					FTccGeometryConstPtr Geo0 = tcc_dithered_scatter1->GetInput(0)->GetConstGeoResult(0);
					tcc_dithered_scatter1->Npts = int32(hs_detail(Geo0, "count", 0));
					tcc_dithered_scatter1->ScatterSeed = int32(hs_detail(Geo0, "seed", 0));
					tcc_dithered_scatter1->Jitter = 0.246000f;
					tcc_dithered_scatter1->Cook();
				}
				
				{
					// Node: scale_and_angle
					scale_and_angle->SetInput(0, tcc_dithered_scatter1);
					FVector2f _scale = FVector2f(Scale.X, Scale.Y);
					scale_and_angle->Cook();
					{
						FTccGeometryPtr Geo0 = scale_and_angle->GetGeoRef(0);
						FTccAttribPtr attr_pscale = Geo0->AddPointAttrib("pscale", ETccAttribType::F);
						FTccAttribPtr attr_dir_type = Geo0->AddPointAttrib("dir_type", ETccAttribType::I);
						FTccAttribPtr attr_dir = Geo0->AddPointAttrib("dir", ETccAttribType::F3);
						const int32 seed = Gseed;
						const FVector2f scale = _scale;
						const FVector3f up = vex_set(0, 1, 0);
						const int32 _numpt = Geo0->GetNumPoints();
						for(int32 i = 0; i < _numpt; i++)
						{
							const int32 _ptnum = i;
							float& _pscale = attr_pscale->GetData<float>()[i];
							int32& _dir_type = attr_dir_type->GetData<int32>()[i];
							FVector3f& _dir = attr_dir->GetData<FVector3f>()[i];
							// scale
							float s = vex_fit01(vex_rand(seed + _ptnum + 12), scale.X, scale.Y);
							_pscale = s;
							// angle
							_dir_type = vex_dot(_dir, up)> 0.707f ? 1 : 0;
						}
					}
				}
				
				{
					// Node: vertical
					vertical->SetInput(0, scale_and_angle);
					vertical->Grouptype = UTccBlastByFeature::Points;
					vertical->ByAttrib = 1;
					vertical->Attrib = TEXT("dir_type");
					vertical->Cook();
				}
				
				{
					// Node: rot
					rot->SetInput(0, vertical);
					rot->SetInput(1, nullptr);
					FVector2f _scale = FVector2f(Scale.X, Scale.Y);
					rot->Cook();
					{
						FTccGeometryPtr Geo0 = rot->GetGeoRef(0);
						FTccAttribPtr attr_dir = Geo0->AddPointAttrib("dir", ETccAttribType::F3);
						FTccAttribPtr attr_orient = Geo0->AddPointAttrib("orient", ETccAttribType::F4);
						const int32 gseed = Gseed;
						const FVector3f up = vex_set(0, 1, 0);
						const int32 _numpt = Geo0->GetNumPoints();
						for(int32 i = 0; i < _numpt; i++)
						{
							const int32 _ptnum = i;
							FVector3f& _dir = attr_dir->GetData<FVector3f>()[i];
							FVector4f& _orient = attr_orient->GetData<FVector4f>()[i];
							int32 iter = _iteration;
							int32 seed = gseed + iter;
							// rot vertical
							FVector3f dir = _dir;
							float yaw_step = PI * 2.f / vex_npoints(Geo0);
							FVector4f q0 = vex_dihedral(up, dir);
							// YAW, split in 360 degrees average
							float yaw = yaw_step * _ptnum;
							// rand by 10%*yaw_step
							yaw += vex_fit01(vex_rand(seed + _ptnum + 35),  - 0.1f, 0.1f) * yaw_step;
							FVector4f qyaw = vex_quaternion(yaw, dir);
							// PITCH, random in 10 degrees
							float pitch = vex_rand(seed + _ptnum + 72) * vex_radians(10);
							FVector3f axis = vex_normalize(vex_cross(dir, up));
							FVector4f qpitch = vex_quaternion(pitch, axis);
							// no ROLL
							FVector4f q = vex_qmultiply(qyaw, q0);
							q = vex_qmultiply(q, qpitch);
							_orient = q;
						}
					}
				}
				
				{
					// Node: tcc_attrib_delete1
					tcc_attrib_delete1->SetInput(0, rot);
					tcc_attrib_delete1->Ptdel = TEXT("dir dir_type");
					tcc_attrib_delete1->Cook();
				}
				
				{
					// Node: horizontal
					horizontal->SetInput(0, scale_and_angle);
					horizontal->Grouptype = UTccBlastByFeature::Points;
					horizontal->ByAttrib = 1;
					horizontal->Attrib = TEXT("dir_type");
					horizontal->Op = UTccBlastByFeature::NotEqual;
					horizontal->Cook();
				}
				
				{
					// Node: rot1
					rot1->SetInput(0, horizontal);
					rot1->SetInput(1, nullptr);
					FVector2f _scale = FVector2f(Scale.X, Scale.Y);
					rot1->Cook();
					{
						FTccGeometryPtr Geo0 = rot1->GetGeoRef(0);
						FTccAttribPtr attr_dir = Geo0->AddPointAttrib("dir", ETccAttribType::F3);
						FTccAttribPtr attr_orient = Geo0->AddPointAttrib("orient", ETccAttribType::F4);
						const int32 gseed = Gseed;
						const FVector3f up = vex_set(0, 1, 0);
						const FVector3f fwd = vex_set(0, 0, 1);
						const int32 _numpt = Geo0->GetNumPoints();
						for(int32 i = 0; i < _numpt; i++)
						{
							const int32 _ptnum = i;
							FVector3f& _dir = attr_dir->GetData<FVector3f>()[i];
							FVector4f& _orient = attr_orient->GetData<FVector4f>()[i];
							int32 iter = _iteration;
							int32 seed = gseed + iter;
							// rot hor
							FVector3f dir = _dir;
							FVector3f dir_h = dir;
							dir_h.Z = 0;// tcc_mark:replace=dir_h.Z / dir_h.Z
							dir_h = vex_normalize(dir_h);
							float oppo = _ptnum % 2 == 0 ? 1.0f : - 1.0f;
							// YAW, 90 degree with dir, with 45 degrees rand
							float yaw = PI * 0.5f * oppo;
							yaw += vex_fit01(vex_rand(seed + _ptnum + 63),  - 1.0f, 1.0f) * vex_radians(45);
							FVector4f qyaw = vex_quaternion(yaw, up);
							dir_h = vex_qrotate(qyaw, dir_h);
							FVector4f q0 = vex_dihedral(fwd, dir_h);
							// PITCH, random in 
							float pitch = vex_rand(seed + _ptnum + 64) * vex_radians( - 45) * oppo;
							FVector4f qpitch = vex_quaternion(pitch, dir);
							// no ROLL
							FVector4f q = vex_qmultiply(qpitch, q0);
							_orient = q;
						}
					}
				}
				
				{
					// Node: tcc_attrib_delete2
					tcc_attrib_delete2->SetInput(0, rot1);
					tcc_attrib_delete2->Ptdel = TEXT("dir dir_type");
					tcc_attrib_delete2->Cook();
				}
				
				{
					// Node: tcc_merge1
					tcc_merge1->SetInput(0, tcc_attrib_delete1);
					tcc_merge1->SetInput(1, tcc_attrib_delete2);
					tcc_merge1->Cook();
				}
				
				foreach_begin1->SetPieceResult(piece, tcc_merge1->GetGeoResult(0));
				delete block_input0;
			}
			foreach_begin1->MergeResult();
		}
	}
	{
		// Node: tcc_instancer1
		tcc_instancer1->SetInput(0, GetInput(1));
		tcc_instancer1->SetInput(1, foreach_begin1);
		tcc_instancer1->Cook();
	}
	SetGeoResult(UTcrTreeBigSubbranchScatter::output0, tcc_instancer1->GetGeoResult(0));
}

