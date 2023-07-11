// Auto generated by UnrealTcc. 

#include "TcrTreeSkinGrowth.h"
#include "Generated/TccTemplates.h"
#include "TccForBlock.h"
#include "TccSwitch.h"
#include "TctTexVex.h"
#include "TccAttribute.h"
#include "TccGeometry.h"
#include "Vex.h"
#include "HScript.h"

 UTcrTreeSkinGrowth::UTcrTreeSkinGrowth() 
{
}
FTccNodePtr UTcrTreeSkinGrowth::CreateNode() 
{
	TSharedPtr<FTcrTreeSkinGrowth> Node = MakeShared<FTcrTreeSkinGrowth>();
	SyncParams(Node);
	return Node;
}
void UTcrTreeSkinGrowth::SyncParams(FTccNodePtr InNode) 
{
	TSharedPtr<FTcrTreeSkinGrowth> Node = StaticCastSharedPtr<FTcrTreeSkinGrowth>(InNode);
	Node->Gseed = Gseed;
	Node->Cols = Cols;
	Node->Incroll = Incroll;
	Node->Noise = Noise;
	Node->Amp = Amp;
	Node->Freq = Freq;
}

 FTcrTreeSkinGrowth::FTcrTreeSkinGrowth() 
{
	InitInputsCount(1);
	tcc_poly_wire1 = new FTccPolyWire();
	tcc_poly_wire1->InitMultiRefs(false); // RefCount = 1
	tcc_normal1 = new FTccNormal();
	tcc_normal1->InitMultiRefs(false); // RefCount = 1
	noise = new FTccSwitch();
	noise->InitMultiRefs(false); // RefCount = 1
		noise_perlin = new FTccVex();
		noise_perlin->InitMultiRefs(false); // RefCount = 1
		noise_worley = new FTccVex();
		noise_worley->InitMultiRefs(false); // RefCount = 1
	tcc_attrib_delete1 = new FTccAttribDelete();
	tcc_attrib_delete1->InitMultiRefs(false); // RefCount = 1
	tcc_normal2 = new FTccNormal();
	tcc_normal2->InitMultiRefs(false); // RefCount = 1
}
 FTcrTreeSkinGrowth::~FTcrTreeSkinGrowth() 
{
	delete tcc_poly_wire1; 
	delete tcc_normal1; 
	delete noise; 
		delete noise_perlin; 
		delete noise_worley; 
	delete tcc_attrib_delete1; 
	delete tcc_normal2; 
}
void FTcrTreeSkinGrowth::Cook() 
{
	{
		// Node: tcc_poly_wire1
		tcc_poly_wire1->SetInput(0, GetInput(0));
		tcc_poly_wire1->EnableRadiusAttrib = 1;
		tcc_poly_wire1->RAttrib = TEXT("radius");
		tcc_poly_wire1->Divs = int32(Cols);
		tcc_poly_wire1->Twist = float(Incroll);
		tcc_poly_wire1->DoUv = 1;
		tcc_poly_wire1->PosBeforeTwist = 1;
		tcc_poly_wire1->Cook();
	}
	{
		// Node: tcc_normal1
		tcc_normal1->SetInput(0, tcc_poly_wire1);
		tcc_normal1->Cook();
	}
	{
		// Node: noise
		noise->SetInput(0, tcc_normal1);
		noise->Input = int32(Noise);
		noise->NumCases = 3;
		noise->Cook();
		FTccGeometryPtr SwitchResult = nullptr;
		const int32 Selection = noise->Input;
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
					// Node: noise_perlin
					noise_perlin->SetInput(0, tcc_normal1);
					noise_perlin->Cook();
					{
						FTccGeometryPtr Geo0 = noise_perlin->GetGeoRef(0);
						FTccAttribPtr attr_before_twist = Geo0->AddPointAttrib("before_twist", ETccAttribType::F3);
						FTccAttribPtr attr_N = Geo0->AddPointAttrib("N", ETccAttribType::F3);
						const int32 gseed = Gseed;
						const FVector3f freq = Freq;
						const int32 _numpt = Geo0->GetNumPoints();
						for(int32 i = 0; i < _numpt; i++)
						{
							const int32 _ptnum = i;
							FVector3f& _P = Geo0->GetPositions()[i];
							FVector3f& _before_twist = attr_before_twist->GetData<FVector3f>()[i];
							FVector3f& _N = attr_N->GetData<FVector3f>()[i];
							FVector3f uvw = _before_twist;
							FVector3f pos_seed = uvw * freq + float(gseed);
							float n = vex_noise3(pos_seed);
							n = n * 2.f - 1.f;
							float amp = Amp;
							_P += _N * n * amp;
						}
					}
				}
				
				
				SwitchResult = noise_perlin->GetGeoResult(0);
			}
			break;
			case 2:
			{
				
				{
					// Node: noise_worley
					noise_worley->SetInput(0, tcc_normal1);
					noise_worley->Cook();
					{
						FTccGeometryPtr Geo0 = noise_worley->GetGeoRef(0);
						FTccAttribPtr attr_before_twist = Geo0->AddPointAttrib("before_twist", ETccAttribType::F3);
						FTccAttribPtr attr_N = Geo0->AddPointAttrib("N", ETccAttribType::F3);
						const int32 gseed = Gseed;
						const FVector3f freq = Freq;
						const float amp = Amp;
						const int32 _numpt = Geo0->GetNumPoints();
						for(int32 i = 0; i < _numpt; i++)
						{
							const int32 _ptnum = i;
							FVector3f& _P = Geo0->GetPositions()[i];
							FVector3f& _before_twist = attr_before_twist->GetData<FVector3f>()[i];
							FVector3f& _N = attr_N->GetData<FVector3f>()[i];
							FVector3f uvw = _before_twist;
							FVector3f pos_seed = uvw * freq + float(gseed);
							float f1, f2;
							vex_wnoise(pos_seed, gseed, f1, f2);
							float n = f2 - f1;
							_P += _N * n * amp;
						}
					}
				}
				
				SwitchResult = noise_worley->GetGeoResult(0);
			}
			break;
			default:
			{
				checkNoEntry();
			}
			break;
		}
		noise->SetValidGeoResult(0, SwitchResult);
	}
	{
		// Node: tcc_attrib_delete1
		tcc_attrib_delete1->SetInput(0, noise);
		tcc_attrib_delete1->Ptdel = TEXT("*");
		tcc_attrib_delete1->Primdel = TEXT("*");
		tcc_attrib_delete1->Dtldel = TEXT("*");
		tcc_attrib_delete1->Cook();
	}
	{
		// Node: tcc_normal2
		tcc_normal2->SetInput(0, tcc_attrib_delete1);
		tcc_normal2->Cook();
	}
	SetGeoResult(UTcrTreeSkinGrowth::output0, tcc_normal2->GetGeoResult(0));
}

