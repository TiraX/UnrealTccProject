// Auto generated by UnrealTcc. 

#include "TcrMushroom02.h"
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

 UTcrMushroom02::UTcrMushroom02() 
{
}
FTccNodePtr UTcrMushroom02::CreateNode() 
{
	TSharedPtr<FTcrMushroom02> Node = MakeShared<FTcrMushroom02>();
	SyncParams(Node);
	return Node;
}
void UTcrMushroom02::SyncParams(FTccNodePtr InNode) 
{
	TSharedPtr<FTcrMushroom02> Node = StaticCastSharedPtr<FTcrMushroom02>(InNode);
	Node->Gseed = Gseed;
}

 FTcrMushroom02::FTcrMushroom02() 
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
	tcc_merge2->InitMultiRefs(true); // RefCount = 2
	tcr_mushroom_umb = new FTcrMushroomUmb();
	tcr_mushroom_umb->InitMultiRefs(false); // RefCount = 1
	tcr_mushroom_stem1 = new FTcrMushroomStem();
	tcr_mushroom_stem1->InitMultiRefs(false); // RefCount = 1
	mi_trunk1 = new FTccUnrealMaterial();
	mi_trunk1->InitMultiRefs(false); // RefCount = 1
	tcr_mushroom_umb1 = new FTcrMushroomUmb();
	tcr_mushroom_umb1->InitMultiRefs(false); // RefCount = 1
	tcr_mushroom_stem2 = new FTcrMushroomStem();
	tcr_mushroom_stem2->InitMultiRefs(false); // RefCount = 1
	mi_trunk2 = new FTccUnrealMaterial();
	mi_trunk2->InitMultiRefs(false); // RefCount = 1
	tcr_mushroom_umb2 = new FTcrMushroomUmb();
	tcr_mushroom_umb2->InitMultiRefs(false); // RefCount = 1
	tcc_circle1 = new FTccCircle();
	tcc_circle1->InitMultiRefs(false); // RefCount = 1
	tcc_scatter1 = new FTccScatter();
	tcc_scatter1->InitMultiRefs(false); // RefCount = 1
	tcc_sort1 = new FTccSort();
	tcc_sort1->InitMultiRefs(false); // RefCount = 1
	tcc_vex1 = new FTccVex();
	tcc_vex1->InitMultiRefs(false); // RefCount = 1
	tcc_instancer1 = new FTccInstancer();
	tcc_instancer1->InitMultiRefs(false); // RefCount = 1
	tcc_merge1 = new FTccMerge();
	tcc_merge1->InitMultiRefs(false); // RefCount = 1
}
 FTcrMushroom02::~FTcrMushroom02() 
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
	delete tcr_mushroom_stem1; 
	delete mi_trunk1; 
	delete tcr_mushroom_umb1; 
	delete tcr_mushroom_stem2; 
	delete mi_trunk2; 
	delete tcr_mushroom_umb2; 
	delete tcc_circle1; 
	delete tcc_scatter1; 
	delete tcc_sort1; 
	delete tcc_vex1; 
	delete tcc_instancer1; 
	delete tcc_merge1; 
}
void FTcrMushroom02::Cook() 
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
		tcr_mushroom_stem->Ori = FVector3f(-0.042000f, -0.094000f, 0.000000f);
		tcr_mushroom_stem->H = 0.187200f;
		tcr_mushroom_stem->SegsV = 13;
		tcr_mushroom_stem->StemR = 0.019600f;
		tcr_mushroom_stem->Yaw = 176.300003f;
		tcr_mushroom_stem->Pitch0 = 61.799999f;
		tcr_mushroom_stem->PitchRange = FVector2f(0.000000f, 0.500000f);
		tcr_mushroom_stem->Amp = 0.048000f;
		tcr_mushroom_stem->Freq = 6.620000f;
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
		tcr_mushroom_umb->ShapeBot.AddRampPoint(0.1898f, 0.6042f);
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
		tcr_mushroom_umb->SliceShape.AddRampPoint(0.1898f, 0.6042f);
		tcr_mushroom_umb->SliceShape.AddRampPoint(1.0000f, 0.5625f);
		tcr_mushroom_umb->Gseed = int32(Gseed);
		tcr_mushroom_umb->R = 0.090300f;
		tcr_mushroom_umb->Segs = 20;
		tcr_mushroom_umb->StemInters = 0.004310f;
		tcr_mushroom_umb->H1 = 0.065600f;
		tcr_mushroom_umb->Amp = 0.024500f;
		tcr_mushroom_umb->Freq = 4.110000f;
		tcr_mushroom_umb->EnableScatter = 1;
		tcr_mushroom_umb->Npts = 70;
		tcr_mushroom_umb->RotRange = 21.700001f;
		tcr_mushroom_umb->SScale = 0.006000f;
		tcr_mushroom_umb->SScaleR = 0.635000f;
		tcr_mushroom_umb->Cook();
	}
	{
		// Node: tcr_mushroom_stem1
		tcr_mushroom_stem1->RadiusShape = ETccRampInterp::Bezier;
		tcr_mushroom_stem1->RadiusShape.ResizeRampPoints(5);
		tcr_mushroom_stem1->RadiusShape.AddRampPoint(0.0000f, 0.6458f);
		tcr_mushroom_stem1->RadiusShape.AddRampPoint(0.1245f, 1.0000f);
		tcr_mushroom_stem1->RadiusShape.AddRampPoint(0.5647f, 0.4606f);
		tcr_mushroom_stem1->RadiusShape.AddRampPoint(0.9021f, 0.5021f);
		tcr_mushroom_stem1->RadiusShape.AddRampPoint(1.0000f, 0.5000f);
		tcr_mushroom_stem1->CurlS = ETccRampInterp::Linear;
		tcr_mushroom_stem1->CurlS.ResizeRampPoints(2);
		tcr_mushroom_stem1->CurlS.AddRampPoint(0.0000f, 1.0000f);
		tcr_mushroom_stem1->CurlS.AddRampPoint(1.0000f, 0.0000f);
		tcr_mushroom_stem1->Gseed = 56;
		tcr_mushroom_stem1->Ori = FVector3f(-0.060000f, 0.020000f, 0.000000f);
		tcr_mushroom_stem1->H = 0.266400f;
		tcr_mushroom_stem1->SegsV = 13;
		tcr_mushroom_stem1->StemR = 0.031200f;
		tcr_mushroom_stem1->Pitch0 = 90.000000f;
		tcr_mushroom_stem1->PitchRange = FVector2f(0.000000f, 0.500000f);
		tcr_mushroom_stem1->Amp = 0.048000f;
		tcr_mushroom_stem1->Freq = 6.620000f;
		tcr_mushroom_stem1->Cook();
	}
	{
		// Node: mi_trunk1
		mi_trunk1->SetInput(0, tcr_mushroom_stem1);
		mi_trunk1->MatPath = TEXT("/Game/ForestDemo/Materials/MI_TreeBig_Trunk.MI_TreeBig_Trunk");
		mi_trunk1->Cook();
	}
	{
		// Node: tcr_mushroom_umb1
		tcr_mushroom_umb1->SetInput(0, mi_trunk1);
		tcr_mushroom_umb1->SetInput(1, tcc_merge2);
		tcr_mushroom_umb1->ShapeTop = ETccRampInterp::Bezier;
		tcr_mushroom_umb1->ShapeTop.ResizeRampPoints(6);
		tcr_mushroom_umb1->ShapeTop.AddRampPoint(0.0000f, 0.5000f);
		tcr_mushroom_umb1->ShapeTop.AddRampPoint(0.0763f, 0.7135f);
		tcr_mushroom_umb1->ShapeTop.AddRampPoint(0.2868f, 0.6979f);
		tcr_mushroom_umb1->ShapeTop.AddRampPoint(0.5118f, 0.8542f);
		tcr_mushroom_umb1->ShapeTop.AddRampPoint(0.7526f, 1.0000f);
		tcr_mushroom_umb1->ShapeTop.AddRampPoint(1.0000f, 1.0000f);
		tcr_mushroom_umb1->ShapeBot = ETccRampInterp::Bezier;
		tcr_mushroom_umb1->ShapeBot.ResizeRampPoints(4);
		tcr_mushroom_umb1->ShapeBot.AddRampPoint(0.0000f, 0.5000f);
		tcr_mushroom_umb1->ShapeBot.AddRampPoint(0.1000f, 0.5000f);
		tcr_mushroom_umb1->ShapeBot.AddRampPoint(0.1898f, 0.6042f);
		tcr_mushroom_umb1->ShapeBot.AddRampPoint(1.0000f, 0.5625f);
		tcr_mushroom_umb1->NoiseRamp = ETccRampInterp::Linear;
		tcr_mushroom_umb1->NoiseRamp.ResizeRampPoints(2);
		tcr_mushroom_umb1->NoiseRamp.AddRampPoint(0.0000f, 1.0000f);
		tcr_mushroom_umb1->NoiseRamp.AddRampPoint(1.0000f, 1.0000f);
		tcr_mushroom_umb1->ScatterDensity = ETccRampInterp::Linear;
		tcr_mushroom_umb1->ScatterDensity.ResizeRampPoints(6);
		tcr_mushroom_umb1->ScatterDensity.AddRampPoint(0.0000f, 0.0000f);
		tcr_mushroom_umb1->ScatterDensity.AddRampPoint(0.0200f, 0.0000f);
		tcr_mushroom_umb1->ScatterDensity.AddRampPoint(0.0712f, 1.0000f);
		tcr_mushroom_umb1->ScatterDensity.AddRampPoint(0.1131f, 1.0000f);
		tcr_mushroom_umb1->ScatterDensity.AddRampPoint(0.5683f, 0.0000f);
		tcr_mushroom_umb1->ScatterDensity.AddRampPoint(1.0000f, 0.0000f);
		tcr_mushroom_umb1->SliceShape = ETccRampInterp::Bezier;
		tcr_mushroom_umb1->SliceShape.ResizeRampPoints(4);
		tcr_mushroom_umb1->SliceShape.AddRampPoint(0.0000f, 0.5000f);
		tcr_mushroom_umb1->SliceShape.AddRampPoint(0.1000f, 0.5000f);
		tcr_mushroom_umb1->SliceShape.AddRampPoint(0.1898f, 0.6042f);
		tcr_mushroom_umb1->SliceShape.AddRampPoint(1.0000f, 0.5625f);
		tcr_mushroom_umb1->Gseed = int32(Gseed);
		tcr_mushroom_umb1->R = 0.138600f;
		tcr_mushroom_umb1->Segs = 20;
		tcr_mushroom_umb1->StemInters = 0.004310f;
		tcr_mushroom_umb1->H1 = 0.091400f;
		tcr_mushroom_umb1->Amp = 0.025500f;
		tcr_mushroom_umb1->Freq = 4.110000f;
		tcr_mushroom_umb1->EnableScatter = 1;
		tcr_mushroom_umb1->Npts = 134;
		tcr_mushroom_umb1->RotRange = 21.700001f;
		tcr_mushroom_umb1->SScale = 0.008300f;
		tcr_mushroom_umb1->SScaleR = 0.635000f;
		tcr_mushroom_umb1->Cook();
	}
	{
		// Node: tcr_mushroom_stem2
		tcr_mushroom_stem2->RadiusShape = ETccRampInterp::Bezier;
		tcr_mushroom_stem2->RadiusShape.ResizeRampPoints(5);
		tcr_mushroom_stem2->RadiusShape.AddRampPoint(0.0000f, 0.6458f);
		tcr_mushroom_stem2->RadiusShape.AddRampPoint(0.1245f, 1.0000f);
		tcr_mushroom_stem2->RadiusShape.AddRampPoint(0.5647f, 0.4606f);
		tcr_mushroom_stem2->RadiusShape.AddRampPoint(0.7855f, 0.5021f);
		tcr_mushroom_stem2->RadiusShape.AddRampPoint(1.0000f, 0.6875f);
		tcr_mushroom_stem2->CurlS = ETccRampInterp::Linear;
		tcr_mushroom_stem2->CurlS.ResizeRampPoints(2);
		tcr_mushroom_stem2->CurlS.AddRampPoint(0.0000f, 1.0000f);
		tcr_mushroom_stem2->CurlS.AddRampPoint(1.0000f, 0.0000f);
		tcr_mushroom_stem2->Gseed = 56;
		tcr_mushroom_stem2->H = 0.176800f;
		tcr_mushroom_stem2->SegsV = 9;
		tcr_mushroom_stem2->StemR = 0.016500f;
		tcr_mushroom_stem2->Pitch0 = 33.400002f;
		tcr_mushroom_stem2->Pitch1 = 83.800003f;
		tcr_mushroom_stem2->PitchRange = FVector2f(0.000000f, 0.500000f);
		tcr_mushroom_stem2->Freq = 6.620000f;
		tcr_mushroom_stem2->Cook();
	}
	{
		// Node: mi_trunk2
		mi_trunk2->SetInput(0, tcr_mushroom_stem2);
		mi_trunk2->MatPath = TEXT("/Game/ForestDemo/Materials/MI_TreeBig_Trunk.MI_TreeBig_Trunk");
		mi_trunk2->Cook();
	}
	{
		// Node: tcr_mushroom_umb2
		tcr_mushroom_umb2->SetInput(0, mi_trunk2);
		tcr_mushroom_umb2->ShapeTop = ETccRampInterp::Bezier;
		tcr_mushroom_umb2->ShapeTop.ResizeRampPoints(4);
		tcr_mushroom_umb2->ShapeTop.AddRampPoint(0.0000f, 0.5000f);
		tcr_mushroom_umb2->ShapeTop.AddRampPoint(0.0100f, 0.7368f);
		tcr_mushroom_umb2->ShapeTop.AddRampPoint(0.6409f, 1.0000f);
		tcr_mushroom_umb2->ShapeTop.AddRampPoint(1.0000f, 1.0000f);
		tcr_mushroom_umb2->ShapeBot = ETccRampInterp::Bezier;
		tcr_mushroom_umb2->ShapeBot.ResizeRampPoints(4);
		tcr_mushroom_umb2->ShapeBot.AddRampPoint(0.0000f, 0.5000f);
		tcr_mushroom_umb2->ShapeBot.AddRampPoint(0.1000f, 0.5000f);
		tcr_mushroom_umb2->ShapeBot.AddRampPoint(0.1898f, 0.6042f);
		tcr_mushroom_umb2->ShapeBot.AddRampPoint(1.0000f, 0.5625f);
		tcr_mushroom_umb2->NoiseRamp = ETccRampInterp::Linear;
		tcr_mushroom_umb2->NoiseRamp.ResizeRampPoints(2);
		tcr_mushroom_umb2->NoiseRamp.AddRampPoint(0.0000f, 1.0000f);
		tcr_mushroom_umb2->NoiseRamp.AddRampPoint(1.0000f, 1.0000f);
		tcr_mushroom_umb2->ScatterDensity = ETccRampInterp::Linear;
		tcr_mushroom_umb2->ScatterDensity.ResizeRampPoints(6);
		tcr_mushroom_umb2->ScatterDensity.AddRampPoint(0.0000f, 0.0000f);
		tcr_mushroom_umb2->ScatterDensity.AddRampPoint(0.0200f, 0.0000f);
		tcr_mushroom_umb2->ScatterDensity.AddRampPoint(0.0712f, 1.0000f);
		tcr_mushroom_umb2->ScatterDensity.AddRampPoint(0.1131f, 1.0000f);
		tcr_mushroom_umb2->ScatterDensity.AddRampPoint(0.5683f, 0.0000f);
		tcr_mushroom_umb2->ScatterDensity.AddRampPoint(1.0000f, 0.0000f);
		tcr_mushroom_umb2->SliceShape = ETccRampInterp::Bezier;
		tcr_mushroom_umb2->SliceShape.ResizeRampPoints(4);
		tcr_mushroom_umb2->SliceShape.AddRampPoint(0.0000f, 0.5000f);
		tcr_mushroom_umb2->SliceShape.AddRampPoint(0.1000f, 0.5000f);
		tcr_mushroom_umb2->SliceShape.AddRampPoint(0.1898f, 0.6042f);
		tcr_mushroom_umb2->SliceShape.AddRampPoint(1.0000f, 0.5625f);
		tcr_mushroom_umb2->Gseed = int32(Gseed);
		tcr_mushroom_umb2->R = 0.072300f;
		tcr_mushroom_umb2->Segs = 14;
		tcr_mushroom_umb2->StemInters = 0.004310f;
		tcr_mushroom_umb2->H1 = 0.056500f;
		tcr_mushroom_umb2->Segs1 = 5;
		tcr_mushroom_umb2->Amp = 0.024500f;
		tcr_mushroom_umb2->Freq = 4.110000f;
		tcr_mushroom_umb2->Npts = 134;
		tcr_mushroom_umb2->RotRange = 21.700001f;
		tcr_mushroom_umb2->SScale = 0.008300f;
		tcr_mushroom_umb2->SScaleR = 0.635000f;
		tcr_mushroom_umb2->Cook();
	}
	{
		// Node: tcc_circle1
		tcc_circle1->R = 0.080000f;
		tcc_circle1->Divs = 7;
		tcc_circle1->Cook();
	}
	{
		// Node: tcc_scatter1
		tcc_scatter1->SetInput(0, tcc_circle1);
		tcc_scatter1->Npts = 4;
		tcc_scatter1->Cook();
	}
	{
		// Node: tcc_sort1
		tcc_sort1->SetInput(0, tcc_scatter1);
		tcc_sort1->Ptsort = UTccSort::ByZ;
		tcc_sort1->Cook();
	}
	{
		// Node: tcc_vex1
		tcc_vex1->SetInput(0, tcc_sort1);
		tcc_vex1->Cook();
		{
			FTccGeometryPtr Geo0 = tcc_vex1->GetGeoRef(0);
			const FVector3f up = vex_set(0, 1, 0);
			TArray < FVector4f > q;
			TArray < float > ps;
			TArray < int32 > pts;
			vex_resize(pts, 4);
			vex_resize(q, 4);
			vex_resize(ps, 4);
			pts [ 0] = 0;
			pts [ 1] = 1;
			pts [ 2] = 2;
			pts [ 3] = 3;
			q [ 0] = vex_quaternion(vex_radians(135), up);
			q [ 1] = vex_quaternion(vex_radians(100), up);
			q [ 2] = vex_quaternion(vex_radians(32), up);
			q [ 3] = vex_quaternion(vex_radians(12), up);
			ps [ 0] = 0.78f;
			ps [ 1] = 0.55f;
			ps [ 2] = 0.47f;
			ps [ 3] = 1.f;
			vex_setpointsattrib(Geo0, "orient", pts, q);
			vex_setpointsattrib(Geo0, "pscale", pts, ps);
		}
	}
	{
		// Node: tcc_instancer1
		tcc_instancer1->SetInput(0, tcr_mushroom_umb2);
		tcc_instancer1->SetInput(1, tcc_vex1);
		tcc_instancer1->Cook();
	}
	{
		// Node: tcc_merge1
		tcc_merge1->SetInput(0, tcr_mushroom_umb);
		tcc_merge1->SetInput(1, tcr_mushroom_umb1);
		tcc_merge1->SetInput(2, nullptr);
		tcc_merge1->SetInput(3, tcc_instancer1);
		tcc_merge1->Cook();
	}
	SetGeoResult(UTcrMushroom02::output0, tcc_merge1->GetGeoResult(0));
}
