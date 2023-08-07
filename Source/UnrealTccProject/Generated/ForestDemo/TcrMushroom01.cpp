// Auto generated by UnrealTcc. 

#include "TcrMushroom01.h"
#include "TcrMushroomStem.h"
#include "TcrMushroomUmb.h"
#include "Generated/TccTemplates.h"
#include "TccForBlock.h"
#include "TccSwitch.h"
#include "TctTexVex.h"
#include "TccAttribute.h"
#include "TccGeometry.h"
#include "Vex.h"
#include "HScript.h"

 UTcrMushroom01::UTcrMushroom01() 
{
}
FTccNodePtr UTcrMushroom01::CreateNode() 
{
	TSharedPtr<FTcrMushroom01> Node = MakeShared<FTcrMushroom01>();
	SyncParams(Node);
	return Node;
}
void UTcrMushroom01::SyncParams(FTccNodePtr InNode) 
{
	TSharedPtr<FTcrMushroom01> Node = StaticCastSharedPtr<FTcrMushroom01>(InNode);
	Node->Gseed = Gseed;
	Node->Amp = Amp;
	Node->Freq = Freq;
	Node->H1 = H1;
	Node->Segs1 = Segs1;
	Node->H2 = H2;
	Node->Segs2 = Segs2;
	Node->FastRemoveR = FastRemoveR;
}

 FTcrMushroom01::FTcrMushroom01() 
{
	InitInputsCount(0);
	tcr_mushroom_stem = new FTcrMushroomStem();
	tcr_mushroom_stem->InitMultiRefs(false); // RefCount = 1
	mi_trunk = new FTccUnrealMaterial();
	mi_trunk->InitMultiRefs(false); // RefCount = 1
	tcc_sphere1 = new FTccSphere();
	tcc_sphere1->InitMultiRefs(false); // RefCount = 1
	tcc_subdivide1 = new FTccSubdivide();
	tcc_subdivide1->InitMultiRefs(true); // RefCount = 3
	tcc_mountain1 = new FTccMountain();
	tcc_mountain1->InitMultiRefs(false); // RefCount = 1
	tcc_pack1 = new FTccPack();
	tcc_pack1->InitMultiRefs(false); // RefCount = 1
	tcc_mountain2 = new FTccMountain();
	tcc_mountain2->InitMultiRefs(false); // RefCount = 1
	tcc_pack2 = new FTccPack();
	tcc_pack2->InitMultiRefs(false); // RefCount = 1
	tcc_mountain3 = new FTccMountain();
	tcc_mountain3->InitMultiRefs(false); // RefCount = 1
	tcc_pack3 = new FTccPack();
	tcc_pack3->InitMultiRefs(false); // RefCount = 1
	tcc_merge2 = new FTccMerge();
	tcc_merge2->InitMultiRefs(false); // RefCount = 1
	tcr_mushroom_umb = new FTcrMushroomUmb();
	tcr_mushroom_umb->InitMultiRefs(false); // RefCount = 1
}
 FTcrMushroom01::~FTcrMushroom01() 
{
	delete tcr_mushroom_stem; 
	delete mi_trunk; 
	delete tcc_sphere1; 
	delete tcc_subdivide1; 
	delete tcc_mountain1; 
	delete tcc_pack1; 
	delete tcc_mountain2; 
	delete tcc_pack2; 
	delete tcc_mountain3; 
	delete tcc_pack3; 
	delete tcc_merge2; 
	delete tcr_mushroom_umb; 
}
void FTcrMushroom01::Cook() 
{
	{
		// Node: tcr_mushroom_stem
		tcr_mushroom_stem->RadiusShape = ETccRampInterp::Bezier;
		tcr_mushroom_stem->RadiusShape.ResizeRampPoints(5);
		tcr_mushroom_stem->RadiusShape.AddRampPoint(0.0000f, 0.6458f);
		tcr_mushroom_stem->RadiusShape.AddRampPoint(0.1245f, 1.0000f);
		tcr_mushroom_stem->RadiusShape.AddRampPoint(0.5647f, 0.4606f);
		tcr_mushroom_stem->RadiusShape.AddRampPoint(0.9021f, 0.5021f);
		tcr_mushroom_stem->RadiusShape.AddRampPoint(1.0000f, 0.5000f);
		tcr_mushroom_stem->CurlS = ETccRampInterp::Linear;
		tcr_mushroom_stem->CurlS.ResizeRampPoints(2);
		tcr_mushroom_stem->CurlS.AddRampPoint(0.0000f, 1.0000f);
		tcr_mushroom_stem->CurlS.AddRampPoint(1.0000f, 0.0000f);
		tcr_mushroom_stem->Gseed = 56;
		tcr_mushroom_stem->H = 0.216000f;
		tcr_mushroom_stem->SegsV = 13;
		tcr_mushroom_stem->StemR = 0.037100f;
		tcr_mushroom_stem->Yaw = 92.900002f;
		tcr_mushroom_stem->Pitch0 = 35.000000f;
		tcr_mushroom_stem->Pitch1 = 81.500000f;
		tcr_mushroom_stem->PitchRange = FVector2f(0.000000f, 0.500000f);
		tcr_mushroom_stem->Amp = 0.097000f;
		tcr_mushroom_stem->Freq = 7.400000f;
		tcr_mushroom_stem->Cook();
	}
	{
		// Node: mi_trunk
		mi_trunk->SetInput(0, tcr_mushroom_stem);
		mi_trunk->MatPath = TEXT("/Game/ForestDemo/Materials/MI_TreeBig_Trunk.MI_TreeBig_Trunk");
		mi_trunk->Cook();
	}
	{
		// Node: tcc_sphere1
		tcc_sphere1->Rad = FVector3f(0.400000f, 0.200000f, 0.500000f);
		tcc_sphere1->Rows = 4;
		tcc_sphere1->Cols = 4;
		tcc_sphere1->Cook();
	}
	{
		// Node: tcc_subdivide1
		tcc_subdivide1->SetInput(0, tcc_sphere1);
		tcc_subdivide1->Uv = 0;
		tcc_subdivide1->Cook();
	}
	{
		// Node: tcc_mountain1
		tcc_mountain1->SetInput(0, tcc_subdivide1);
		tcc_mountain1->Amplitude = 0.290000f;
		tcc_mountain1->Elementsize = 0.450000f;
		tcc_mountain1->Cook();
	}
	{
		// Node: tcc_pack1
		tcc_pack1->SetInput(0, tcc_mountain1);
		tcc_pack1->GeoName = TEXT("dot0");
		tcc_pack1->EnableId = 1;
		tcc_pack1->Cook();
	}
	{
		// Node: tcc_mountain2
		tcc_mountain2->SetInput(0, tcc_subdivide1);
		tcc_mountain2->Amplitude = 0.290000f;
		tcc_mountain2->Elementsize = 0.450000f;
		tcc_mountain2->Offset = 17.410000f;
		tcc_mountain2->Cook();
	}
	{
		// Node: tcc_pack2
		tcc_pack2->SetInput(0, tcc_mountain2);
		tcc_pack2->GeoName = TEXT("dot1");
		tcc_pack2->EnableId = 1;
		tcc_pack2->InsId = 1;
		tcc_pack2->Cook();
	}
	{
		// Node: tcc_mountain3
		tcc_mountain3->SetInput(0, tcc_subdivide1);
		tcc_mountain3->Amplitude = 0.290000f;
		tcc_mountain3->Elementsize = 0.450000f;
		tcc_mountain3->Offset = 44.650002f;
		tcc_mountain3->Cook();
	}
	{
		// Node: tcc_pack3
		tcc_pack3->SetInput(0, tcc_mountain3);
		tcc_pack3->GeoName = TEXT("dot2");
		tcc_pack3->EnableId = 1;
		tcc_pack3->InsId = 2;
		tcc_pack3->Cook();
	}
	{
		// Node: tcc_merge2
		tcc_merge2->SetInput(0, tcc_pack1);
		tcc_merge2->SetInput(1, tcc_pack2);
		tcc_merge2->SetInput(2, tcc_pack3);
		tcc_merge2->Cook();
	}
	{
		// Node: tcr_mushroom_umb
		tcr_mushroom_umb->SetInput(0, mi_trunk);
		tcr_mushroom_umb->SetInput(1, tcc_merge2);
		tcr_mushroom_umb->ShapeTop = ETccRampInterp::Bezier;
		tcr_mushroom_umb->ShapeTop.ResizeRampPoints(4);
		tcr_mushroom_umb->ShapeTop.AddRampPoint(0.0000f, 0.5000f);
		tcr_mushroom_umb->ShapeTop.AddRampPoint(0.0100f, 0.7368f);
		tcr_mushroom_umb->ShapeTop.AddRampPoint(0.6409f, 1.0000f);
		tcr_mushroom_umb->ShapeTop.AddRampPoint(1.0000f, 1.0000f);
		tcr_mushroom_umb->ShapeBot = ETccRampInterp::Bezier;
		tcr_mushroom_umb->ShapeBot.ResizeRampPoints(4);
		tcr_mushroom_umb->ShapeBot.AddRampPoint(0.0000f, 0.5000f);
		tcr_mushroom_umb->ShapeBot.AddRampPoint(0.1000f, 0.5000f);
		tcr_mushroom_umb->ShapeBot.AddRampPoint(0.2106f, 0.9167f);
		tcr_mushroom_umb->ShapeBot.AddRampPoint(1.0000f, 0.5625f);
		tcr_mushroom_umb->NoiseRamp = ETccRampInterp::Linear;
		tcr_mushroom_umb->NoiseRamp.ResizeRampPoints(2);
		tcr_mushroom_umb->NoiseRamp.AddRampPoint(0.0000f, 1.0000f);
		tcr_mushroom_umb->NoiseRamp.AddRampPoint(1.0000f, 1.0000f);
		tcr_mushroom_umb->ScatterDensity = ETccRampInterp::Linear;
		tcr_mushroom_umb->ScatterDensity.ResizeRampPoints(6);
		tcr_mushroom_umb->ScatterDensity.AddRampPoint(0.0000f, 0.0000f);
		tcr_mushroom_umb->ScatterDensity.AddRampPoint(0.0200f, 0.0000f);
		tcr_mushroom_umb->ScatterDensity.AddRampPoint(0.0712f, 1.0000f);
		tcr_mushroom_umb->ScatterDensity.AddRampPoint(0.1131f, 1.0000f);
		tcr_mushroom_umb->ScatterDensity.AddRampPoint(0.5683f, 0.0000f);
		tcr_mushroom_umb->ScatterDensity.AddRampPoint(1.0000f, 0.0000f);
		tcr_mushroom_umb->SliceShape = ETccRampInterp::Bezier;
		tcr_mushroom_umb->SliceShape.ResizeRampPoints(4);
		tcr_mushroom_umb->SliceShape.AddRampPoint(0.0000f, 0.5000f);
		tcr_mushroom_umb->SliceShape.AddRampPoint(0.1000f, 0.5000f);
		tcr_mushroom_umb->SliceShape.AddRampPoint(0.7132f, 0.6146f);
		tcr_mushroom_umb->SliceShape.AddRampPoint(1.0000f, 0.2708f);
		tcr_mushroom_umb->Gseed = int32(Gseed);
		tcr_mushroom_umb->R = 0.150600f;
		tcr_mushroom_umb->Segs = 20;
		tcr_mushroom_umb->StemInters = 0.004310f;
		tcr_mushroom_umb->H1 = float(H1);
		tcr_mushroom_umb->Segs1 = int32(Segs1);
		tcr_mushroom_umb->H2 = float(H2);
		tcr_mushroom_umb->Segs2 = int32(Segs2);
		tcr_mushroom_umb->Amp = float(Amp);
		tcr_mushroom_umb->Freq = float(Freq);
		tcr_mushroom_umb->EnableScatter = 1;
		tcr_mushroom_umb->FastRemoveR = float(FastRemoveR);
		tcr_mushroom_umb->Npts = 124;
		tcr_mushroom_umb->RotRange = 21.700001f;
		tcr_mushroom_umb->SScale = 0.006000f;
		tcr_mushroom_umb->SScaleR = 0.635000f;
		tcr_mushroom_umb->EnableSlice = 1;
		tcr_mushroom_umb->SliceCount = 86;
		tcr_mushroom_umb->SliceAmph = 0.005000f;
		tcr_mushroom_umb->Cook();
	}
	SetGeoResult(UTcrMushroom01::output0, tcr_mushroom_umb->GetGeoResult(0));
}

