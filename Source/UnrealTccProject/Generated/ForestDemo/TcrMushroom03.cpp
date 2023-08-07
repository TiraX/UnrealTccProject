// Auto generated by UnrealTcc. 

#include "TcrMushroom03.h"
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

 UTcrMushroom03::UTcrMushroom03() 
{
}
FTccNodePtr UTcrMushroom03::CreateNode() 
{
	TSharedPtr<FTcrMushroom03> Node = MakeShared<FTcrMushroom03>();
	SyncParams(Node);
	return Node;
}
void UTcrMushroom03::SyncParams(FTccNodePtr InNode) 
{
	TSharedPtr<FTcrMushroom03> Node = StaticCastSharedPtr<FTcrMushroom03>(InNode);
	Node->Gseed = Gseed;
	Node->Npts = Npts;
	Node->FastRemove = FastRemove;
	Node->FastRemoveR = FastRemoveR;
}

 FTcrMushroom03::FTcrMushroom03() 
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
	tcc_pack4 = new FTccPack();
	tcc_pack4->InitMultiRefs(false); // RefCount = 1
	tcr_mushroom_stem3 = new FTcrMushroomStem();
	tcr_mushroom_stem3->InitMultiRefs(false); // RefCount = 1
	mi_trunk3 = new FTccUnrealMaterial();
	mi_trunk3->InitMultiRefs(false); // RefCount = 1
	tcr_mushroom_umb3 = new FTcrMushroomUmb();
	tcr_mushroom_umb3->InitMultiRefs(false); // RefCount = 1
	tcc_pack5 = new FTccPack();
	tcc_pack5->InitMultiRefs(false); // RefCount = 1
	tcc_merge1 = new FTccMerge();
	tcc_merge1->InitMultiRefs(false); // RefCount = 1
	tcc_circle1 = new FTccCircle();
	tcc_circle1->InitMultiRefs(false); // RefCount = 1
	tcc_scatter1 = new FTccScatter();
	tcc_scatter1->InitMultiRefs(false); // RefCount = 1
	tcc_vex1 = new FTccVex();
	tcc_vex1->InitMultiRefs(false); // RefCount = 1
	tcc_instancer1 = new FTccInstancer();
	tcc_instancer1->InitMultiRefs(false); // RefCount = 1
	tcc_merge3 = new FTccMerge();
	tcc_merge3->InitMultiRefs(false); // RefCount = 1
}
 FTcrMushroom03::~FTcrMushroom03() 
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
	delete tcc_pack4; 
	delete tcr_mushroom_stem3; 
	delete mi_trunk3; 
	delete tcr_mushroom_umb3; 
	delete tcc_pack5; 
	delete tcc_merge1; 
	delete tcc_circle1; 
	delete tcc_scatter1; 
	delete tcc_vex1; 
	delete tcc_instancer1; 
	delete tcc_merge3; 
}
void FTcrMushroom03::Cook() 
{
	{
		// Node: tcr_mushroom_stem
		tcr_mushroom_stem->RadiusShape = ETccRampInterp::Bezier;
		tcr_mushroom_stem->RadiusShape.ResizeRampPoints(7);
		tcr_mushroom_stem->RadiusShape.AddRampPoint(0.0000f, 0.6458f);
		tcr_mushroom_stem->RadiusShape.AddRampPoint(0.1245f, 1.0000f);
		tcr_mushroom_stem->RadiusShape.AddRampPoint(0.1925f, 0.9167f);
		tcr_mushroom_stem->RadiusShape.AddRampPoint(0.4367f, 0.7407f);
		tcr_mushroom_stem->RadiusShape.AddRampPoint(0.7377f, 0.5370f);
		tcr_mushroom_stem->RadiusShape.AddRampPoint(0.9021f, 0.5021f);
		tcr_mushroom_stem->RadiusShape.AddRampPoint(1.0000f, 0.5000f);
		tcr_mushroom_stem->CurlS = ETccRampInterp::Linear;
		tcr_mushroom_stem->CurlS.ResizeRampPoints(2);
		tcr_mushroom_stem->CurlS.AddRampPoint(0.0000f, 1.0000f);
		tcr_mushroom_stem->CurlS.AddRampPoint(1.0000f, 0.0000f);
		tcr_mushroom_stem->Gseed = 56;
		tcr_mushroom_stem->Ori = FVector3f(0.000000f, -0.090000f, 0.000000f);
		tcr_mushroom_stem->H = 0.165600f;
		tcr_mushroom_stem->SegsV = 9;
		tcr_mushroom_stem->StemR = 0.029000f;
		tcr_mushroom_stem->Pitch0 = 90.000000f;
		tcr_mushroom_stem->PitchRange = FVector2f(0.000000f, 0.500000f);
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
		tcr_mushroom_umb->ShapeTop.AddRampPoint(0.4868f, 1.0000f);
		tcr_mushroom_umb->ShapeTop.AddRampPoint(1.0000f, 1.0000f);
		tcr_mushroom_umb->ShapeBot = ETccRampInterp::Bezier;
		tcr_mushroom_umb->ShapeBot.ResizeRampPoints(4);
		tcr_mushroom_umb->ShapeBot.AddRampPoint(0.0000f, 0.5000f);
		tcr_mushroom_umb->ShapeBot.AddRampPoint(0.0855f, 0.1823f);
		tcr_mushroom_umb->ShapeBot.AddRampPoint(0.7211f, 0.6406f);
		tcr_mushroom_umb->ShapeBot.AddRampPoint(1.0000f, 0.5625f);
		tcr_mushroom_umb->NoiseRamp = ETccRampInterp::Linear;
		tcr_mushroom_umb->NoiseRamp.ResizeRampPoints(2);
		tcr_mushroom_umb->NoiseRamp.AddRampPoint(0.0000f, 1.0000f);
		tcr_mushroom_umb->NoiseRamp.AddRampPoint(1.0000f, 1.0000f);
		tcr_mushroom_umb->ScatterDensity = ETccRampInterp::Linear;
		tcr_mushroom_umb->ScatterDensity.ResizeRampPoints(4);
		tcr_mushroom_umb->ScatterDensity.AddRampPoint(0.0000f, 0.0000f);
		tcr_mushroom_umb->ScatterDensity.AddRampPoint(0.0211f, 1.0000f);
		tcr_mushroom_umb->ScatterDensity.AddRampPoint(0.3789f, 0.0000f);
		tcr_mushroom_umb->ScatterDensity.AddRampPoint(1.0000f, 0.0000f);
		tcr_mushroom_umb->SliceShape = ETccRampInterp::Bezier;
		tcr_mushroom_umb->SliceShape.ResizeRampPoints(4);
		tcr_mushroom_umb->SliceShape.AddRampPoint(0.0000f, 0.5000f);
		tcr_mushroom_umb->SliceShape.AddRampPoint(0.1000f, 0.5000f);
		tcr_mushroom_umb->SliceShape.AddRampPoint(0.1898f, 0.6042f);
		tcr_mushroom_umb->SliceShape.AddRampPoint(1.0000f, 0.5625f);
		tcr_mushroom_umb->Gseed = int32(Gseed);
		tcr_mushroom_umb->R = 0.111300f;
		tcr_mushroom_umb->Segs = 16;
		tcr_mushroom_umb->StemInters = 0.004310f;
		tcr_mushroom_umb->H1 = 0.110000f;
		tcr_mushroom_umb->H2 = 0.046200f;
		tcr_mushroom_umb->Segs2 = 5;
		tcr_mushroom_umb->EnableScatter = 1;
		tcr_mushroom_umb->FastRemoveR = 0.013000f;
		tcr_mushroom_umb->Npts = 124;
		tcr_mushroom_umb->RotRange = 21.700001f;
		tcr_mushroom_umb->SScale = 0.006000f;
		tcr_mushroom_umb->SScaleR = 0.635000f;
		tcr_mushroom_umb->Cook();
	}
	{
		// Node: tcr_mushroom_stem1
		tcr_mushroom_stem1->RadiusShape = ETccRampInterp::Bezier;
		tcr_mushroom_stem1->RadiusShape.ResizeRampPoints(7);
		tcr_mushroom_stem1->RadiusShape.AddRampPoint(0.0000f, 0.6458f);
		tcr_mushroom_stem1->RadiusShape.AddRampPoint(0.1245f, 1.0000f);
		tcr_mushroom_stem1->RadiusShape.AddRampPoint(0.1925f, 0.9167f);
		tcr_mushroom_stem1->RadiusShape.AddRampPoint(0.4367f, 0.7407f);
		tcr_mushroom_stem1->RadiusShape.AddRampPoint(0.7377f, 0.5370f);
		tcr_mushroom_stem1->RadiusShape.AddRampPoint(0.9021f, 0.5021f);
		tcr_mushroom_stem1->RadiusShape.AddRampPoint(1.0000f, 0.5000f);
		tcr_mushroom_stem1->CurlS = ETccRampInterp::Linear;
		tcr_mushroom_stem1->CurlS.ResizeRampPoints(2);
		tcr_mushroom_stem1->CurlS.AddRampPoint(0.0000f, 1.0000f);
		tcr_mushroom_stem1->CurlS.AddRampPoint(1.0000f, 0.0000f);
		tcr_mushroom_stem1->Gseed = 56;
		tcr_mushroom_stem1->Ori = FVector3f(0.000000f, 0.070000f, 0.000000f);
		tcr_mushroom_stem1->H = 0.102400f;
		tcr_mushroom_stem1->SegsV = 9;
		tcr_mushroom_stem1->StemR = 0.021800f;
		tcr_mushroom_stem1->Pitch0 = 76.000000f;
		tcr_mushroom_stem1->PitchRange = FVector2f(0.000000f, 0.500000f);
		tcr_mushroom_stem1->Freq = 7.400000f;
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
		tcr_mushroom_umb1->ShapeTop.ResizeRampPoints(4);
		tcr_mushroom_umb1->ShapeTop.AddRampPoint(0.0000f, 0.5000f);
		tcr_mushroom_umb1->ShapeTop.AddRampPoint(0.0100f, 0.7368f);
		tcr_mushroom_umb1->ShapeTop.AddRampPoint(0.4868f, 1.0000f);
		tcr_mushroom_umb1->ShapeTop.AddRampPoint(1.0000f, 1.0000f);
		tcr_mushroom_umb1->ShapeBot = ETccRampInterp::Bezier;
		tcr_mushroom_umb1->ShapeBot.ResizeRampPoints(4);
		tcr_mushroom_umb1->ShapeBot.AddRampPoint(0.0000f, 0.5000f);
		tcr_mushroom_umb1->ShapeBot.AddRampPoint(0.0855f, 0.1823f);
		tcr_mushroom_umb1->ShapeBot.AddRampPoint(0.7211f, 0.6406f);
		tcr_mushroom_umb1->ShapeBot.AddRampPoint(1.0000f, 0.5625f);
		tcr_mushroom_umb1->NoiseRamp = ETccRampInterp::Linear;
		tcr_mushroom_umb1->NoiseRamp.ResizeRampPoints(2);
		tcr_mushroom_umb1->NoiseRamp.AddRampPoint(0.0000f, 1.0000f);
		tcr_mushroom_umb1->NoiseRamp.AddRampPoint(1.0000f, 1.0000f);
		tcr_mushroom_umb1->ScatterDensity = ETccRampInterp::Linear;
		tcr_mushroom_umb1->ScatterDensity.ResizeRampPoints(4);
		tcr_mushroom_umb1->ScatterDensity.AddRampPoint(0.0000f, 0.0000f);
		tcr_mushroom_umb1->ScatterDensity.AddRampPoint(0.0211f, 1.0000f);
		tcr_mushroom_umb1->ScatterDensity.AddRampPoint(0.3789f, 0.0000f);
		tcr_mushroom_umb1->ScatterDensity.AddRampPoint(1.0000f, 0.0000f);
		tcr_mushroom_umb1->SliceShape = ETccRampInterp::Bezier;
		tcr_mushroom_umb1->SliceShape.ResizeRampPoints(4);
		tcr_mushroom_umb1->SliceShape.AddRampPoint(0.0000f, 0.5000f);
		tcr_mushroom_umb1->SliceShape.AddRampPoint(0.1000f, 0.5000f);
		tcr_mushroom_umb1->SliceShape.AddRampPoint(0.1898f, 0.6042f);
		tcr_mushroom_umb1->SliceShape.AddRampPoint(1.0000f, 0.5625f);
		tcr_mushroom_umb1->Gseed = int32(Gseed);
		tcr_mushroom_umb1->R = 0.088100f;
		tcr_mushroom_umb1->Segs = 16;
		tcr_mushroom_umb1->StemInters = 0.004310f;
		tcr_mushroom_umb1->H1 = 0.075800f;
		tcr_mushroom_umb1->H2 = 0.046200f;
		tcr_mushroom_umb1->Segs2 = 5;
		tcr_mushroom_umb1->EnableScatter = 1;
		tcr_mushroom_umb1->FastRemoveR = 0.013000f;
		tcr_mushroom_umb1->Npts = 124;
		tcr_mushroom_umb1->RotRange = 21.700001f;
		tcr_mushroom_umb1->SScale = 0.006000f;
		tcr_mushroom_umb1->SScaleR = 0.635000f;
		tcr_mushroom_umb1->Cook();
	}
	{
		// Node: tcr_mushroom_stem2
		tcr_mushroom_stem2->RadiusShape = ETccRampInterp::Bezier;
		tcr_mushroom_stem2->RadiusShape.ResizeRampPoints(7);
		tcr_mushroom_stem2->RadiusShape.AddRampPoint(0.0000f, 0.6458f);
		tcr_mushroom_stem2->RadiusShape.AddRampPoint(0.1245f, 1.0000f);
		tcr_mushroom_stem2->RadiusShape.AddRampPoint(0.1925f, 0.9167f);
		tcr_mushroom_stem2->RadiusShape.AddRampPoint(0.4367f, 0.7407f);
		tcr_mushroom_stem2->RadiusShape.AddRampPoint(0.7377f, 0.5370f);
		tcr_mushroom_stem2->RadiusShape.AddRampPoint(0.9021f, 0.5021f);
		tcr_mushroom_stem2->RadiusShape.AddRampPoint(1.0000f, 0.5000f);
		tcr_mushroom_stem2->CurlS = ETccRampInterp::Linear;
		tcr_mushroom_stem2->CurlS.ResizeRampPoints(2);
		tcr_mushroom_stem2->CurlS.AddRampPoint(0.0000f, 1.0000f);
		tcr_mushroom_stem2->CurlS.AddRampPoint(1.0000f, 0.0000f);
		tcr_mushroom_stem2->Gseed = 56;
		tcr_mushroom_stem2->H = 0.050400f;
		tcr_mushroom_stem2->SegsV = 9;
		tcr_mushroom_stem2->StemR = 0.006900f;
		tcr_mushroom_stem2->Pitch0 = 90.000000f;
		tcr_mushroom_stem2->PitchRange = FVector2f(0.000000f, 0.500000f);
		tcr_mushroom_stem2->Freq = 7.400000f;
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
		tcr_mushroom_umb2->ShapeTop.AddRampPoint(0.4868f, 1.0000f);
		tcr_mushroom_umb2->ShapeTop.AddRampPoint(1.0000f, 1.0000f);
		tcr_mushroom_umb2->ShapeBot = ETccRampInterp::Bezier;
		tcr_mushroom_umb2->ShapeBot.ResizeRampPoints(4);
		tcr_mushroom_umb2->ShapeBot.AddRampPoint(0.0000f, 0.5000f);
		tcr_mushroom_umb2->ShapeBot.AddRampPoint(0.0855f, 0.1823f);
		tcr_mushroom_umb2->ShapeBot.AddRampPoint(0.7211f, 0.6406f);
		tcr_mushroom_umb2->ShapeBot.AddRampPoint(1.0000f, 0.5625f);
		tcr_mushroom_umb2->NoiseRamp = ETccRampInterp::Linear;
		tcr_mushroom_umb2->NoiseRamp.ResizeRampPoints(2);
		tcr_mushroom_umb2->NoiseRamp.AddRampPoint(0.0000f, 1.0000f);
		tcr_mushroom_umb2->NoiseRamp.AddRampPoint(1.0000f, 1.0000f);
		tcr_mushroom_umb2->ScatterDensity = ETccRampInterp::Linear;
		tcr_mushroom_umb2->ScatterDensity.ResizeRampPoints(4);
		tcr_mushroom_umb2->ScatterDensity.AddRampPoint(0.0000f, 0.0000f);
		tcr_mushroom_umb2->ScatterDensity.AddRampPoint(0.0211f, 1.0000f);
		tcr_mushroom_umb2->ScatterDensity.AddRampPoint(0.3789f, 0.0000f);
		tcr_mushroom_umb2->ScatterDensity.AddRampPoint(1.0000f, 0.0000f);
		tcr_mushroom_umb2->SliceShape = ETccRampInterp::Bezier;
		tcr_mushroom_umb2->SliceShape.ResizeRampPoints(4);
		tcr_mushroom_umb2->SliceShape.AddRampPoint(0.0000f, 0.5000f);
		tcr_mushroom_umb2->SliceShape.AddRampPoint(0.1000f, 0.5000f);
		tcr_mushroom_umb2->SliceShape.AddRampPoint(0.1898f, 0.6042f);
		tcr_mushroom_umb2->SliceShape.AddRampPoint(1.0000f, 0.5625f);
		tcr_mushroom_umb2->Gseed = int32(Gseed);
		tcr_mushroom_umb2->R = 0.031800f;
		tcr_mushroom_umb2->Segs = 16;
		tcr_mushroom_umb2->StemInters = 0.004310f;
		tcr_mushroom_umb2->H1 = 0.030800f;
		tcr_mushroom_umb2->Segs1 = 5;
		tcr_mushroom_umb2->H2 = 0.046200f;
		tcr_mushroom_umb2->Segs2 = 5;
		tcr_mushroom_umb2->FastRemoveR = 0.013000f;
		tcr_mushroom_umb2->Npts = 124;
		tcr_mushroom_umb2->RotRange = 21.700001f;
		tcr_mushroom_umb2->SScale = 0.006000f;
		tcr_mushroom_umb2->SScaleR = 0.635000f;
		tcr_mushroom_umb2->Cook();
	}
	{
		// Node: tcc_pack4
		tcc_pack4->SetInput(0, tcr_mushroom_umb2);
		tcc_pack4->GeoName = TEXT("small01");
		tcc_pack4->EnableId = 1;
		tcc_pack4->Cook();
	}
	{
		// Node: tcr_mushroom_stem3
		tcr_mushroom_stem3->RadiusShape = ETccRampInterp::Bezier;
		tcr_mushroom_stem3->RadiusShape.ResizeRampPoints(7);
		tcr_mushroom_stem3->RadiusShape.AddRampPoint(0.0000f, 0.6458f);
		tcr_mushroom_stem3->RadiusShape.AddRampPoint(0.0659f, 1.0000f);
		tcr_mushroom_stem3->RadiusShape.AddRampPoint(0.2972f, 0.9167f);
		tcr_mushroom_stem3->RadiusShape.AddRampPoint(0.4367f, 0.7407f);
		tcr_mushroom_stem3->RadiusShape.AddRampPoint(0.7377f, 0.5370f);
		tcr_mushroom_stem3->RadiusShape.AddRampPoint(0.9021f, 0.5021f);
		tcr_mushroom_stem3->RadiusShape.AddRampPoint(1.0000f, 0.5000f);
		tcr_mushroom_stem3->CurlS = ETccRampInterp::Linear;
		tcr_mushroom_stem3->CurlS.ResizeRampPoints(2);
		tcr_mushroom_stem3->CurlS.AddRampPoint(0.0000f, 1.0000f);
		tcr_mushroom_stem3->CurlS.AddRampPoint(1.0000f, 0.0000f);
		tcr_mushroom_stem3->Gseed = 56;
		tcr_mushroom_stem3->H = 0.056000f;
		tcr_mushroom_stem3->SegsV = 9;
		tcr_mushroom_stem3->StemR = 0.011400f;
		tcr_mushroom_stem3->Pitch0 = 90.000000f;
		tcr_mushroom_stem3->PitchRange = FVector2f(0.000000f, 0.500000f);
		tcr_mushroom_stem3->Freq = 7.400000f;
		tcr_mushroom_stem3->Cook();
	}
	{
		// Node: mi_trunk3
		mi_trunk3->SetInput(0, tcr_mushroom_stem3);
		mi_trunk3->MatPath = TEXT("/Game/ForestDemo/Materials/MI_TreeBig_Trunk.MI_TreeBig_Trunk");
		mi_trunk3->Cook();
	}
	{
		// Node: tcr_mushroom_umb3
		tcr_mushroom_umb3->SetInput(0, mi_trunk3);
		tcr_mushroom_umb3->ShapeTop = ETccRampInterp::Bezier;
		tcr_mushroom_umb3->ShapeTop.ResizeRampPoints(4);
		tcr_mushroom_umb3->ShapeTop.AddRampPoint(0.0000f, 0.5000f);
		tcr_mushroom_umb3->ShapeTop.AddRampPoint(0.0100f, 0.7368f);
		tcr_mushroom_umb3->ShapeTop.AddRampPoint(0.4868f, 1.0000f);
		tcr_mushroom_umb3->ShapeTop.AddRampPoint(1.0000f, 1.0000f);
		tcr_mushroom_umb3->ShapeBot = ETccRampInterp::Bezier;
		tcr_mushroom_umb3->ShapeBot.ResizeRampPoints(4);
		tcr_mushroom_umb3->ShapeBot.AddRampPoint(0.0000f, 0.5000f);
		tcr_mushroom_umb3->ShapeBot.AddRampPoint(0.0855f, 0.1823f);
		tcr_mushroom_umb3->ShapeBot.AddRampPoint(0.7211f, 0.6406f);
		tcr_mushroom_umb3->ShapeBot.AddRampPoint(1.0000f, 0.5625f);
		tcr_mushroom_umb3->NoiseRamp = ETccRampInterp::Linear;
		tcr_mushroom_umb3->NoiseRamp.ResizeRampPoints(2);
		tcr_mushroom_umb3->NoiseRamp.AddRampPoint(0.0000f, 1.0000f);
		tcr_mushroom_umb3->NoiseRamp.AddRampPoint(1.0000f, 1.0000f);
		tcr_mushroom_umb3->ScatterDensity = ETccRampInterp::Linear;
		tcr_mushroom_umb3->ScatterDensity.ResizeRampPoints(4);
		tcr_mushroom_umb3->ScatterDensity.AddRampPoint(0.0000f, 0.0000f);
		tcr_mushroom_umb3->ScatterDensity.AddRampPoint(0.0211f, 1.0000f);
		tcr_mushroom_umb3->ScatterDensity.AddRampPoint(0.3789f, 0.0000f);
		tcr_mushroom_umb3->ScatterDensity.AddRampPoint(1.0000f, 0.0000f);
		tcr_mushroom_umb3->SliceShape = ETccRampInterp::Bezier;
		tcr_mushroom_umb3->SliceShape.ResizeRampPoints(4);
		tcr_mushroom_umb3->SliceShape.AddRampPoint(0.0000f, 0.5000f);
		tcr_mushroom_umb3->SliceShape.AddRampPoint(0.1000f, 0.5000f);
		tcr_mushroom_umb3->SliceShape.AddRampPoint(0.1898f, 0.6042f);
		tcr_mushroom_umb3->SliceShape.AddRampPoint(1.0000f, 0.5625f);
		tcr_mushroom_umb3->Gseed = int32(Gseed);
		tcr_mushroom_umb3->R = 0.034000f;
		tcr_mushroom_umb3->Segs = 16;
		tcr_mushroom_umb3->StemInters = 0.004310f;
		tcr_mushroom_umb3->H1 = 0.021900f;
		tcr_mushroom_umb3->Segs1 = 5;
		tcr_mushroom_umb3->H2 = 0.041600f;
		tcr_mushroom_umb3->Segs2 = 5;
		tcr_mushroom_umb3->FastRemoveR = 0.013000f;
		tcr_mushroom_umb3->Npts = 124;
		tcr_mushroom_umb3->RotRange = 21.700001f;
		tcr_mushroom_umb3->SScale = 0.006000f;
		tcr_mushroom_umb3->SScaleR = 0.635000f;
		tcr_mushroom_umb3->Cook();
	}
	{
		// Node: tcc_pack5
		tcc_pack5->SetInput(0, tcr_mushroom_umb3);
		tcc_pack5->GeoName = TEXT("small02");
		tcc_pack5->EnableId = 1;
		tcc_pack5->InsId = 1;
		tcc_pack5->Cook();
	}
	{
		// Node: tcc_merge1
		tcc_merge1->SetInput(0, tcc_pack4);
		tcc_merge1->SetInput(1, tcc_pack5);
		tcc_merge1->Cook();
	}
	{
		// Node: tcc_circle1
		tcc_circle1->R = 0.160000f;
		tcc_circle1->Divs = 10;
		tcc_circle1->Cook();
	}
	{
		// Node: tcc_scatter1
		tcc_scatter1->SetInput(0, tcc_circle1);
		tcc_scatter1->Npts = int32(Npts);
		tcc_scatter1->ScatterSeed = int32(Gseed);
		tcc_scatter1->FastRemove = int32(FastRemove);
		tcc_scatter1->FastRemoveR = float(FastRemoveR);
		tcc_scatter1->Cook();
	}
	{
		// Node: tcc_vex1
		tcc_vex1->SetInput(0, tcc_scatter1);
		FVector2f _scale_range = FVector2f(0.780000f, 1.200000f);
		tcc_vex1->Cook();
		{
			FTccGeometryPtr Geo0 = tcc_vex1->GetGeoRef(0);
			FTccAttribPtr attr_pscale = Geo0->AddPointAttrib("pscale", ETccAttribType::F);
			FTccAttribPtr attr_instance_id = Geo0->AddPointAttrib("instance_id", ETccAttribType::I);
			const int32 seed = Gseed;
			const FVector2f s_range = _scale_range;
			const int32 _numpt = Geo0->GetNumPoints();
			for(int32 i = 0; i < _numpt; i++)
			{
				const int32 _ptnum = i;
				float& _pscale = attr_pscale->GetData<float>()[i];
				int32& _instance_id = attr_instance_id->GetData<int32>()[i];
				int32 local_seed = seed + _ptnum * 11 + 25;
				_pscale = vex_fit01(vex_rand(local_seed), s_range.X, s_range.Y);
				_instance_id = (int)(vex_rand(local_seed + 2813) * 1.99f);
			}
		}
	}
	{
		// Node: tcc_instancer1
		tcc_instancer1->SetInput(0, tcc_merge1);
		tcc_instancer1->SetInput(1, tcc_vex1);
		tcc_instancer1->Useidattrib = 1;
		tcc_instancer1->Cook();
	}
	{
		// Node: tcc_merge3
		tcc_merge3->SetInput(0, tcr_mushroom_umb);
		tcc_merge3->SetInput(1, tcr_mushroom_umb1);
		tcc_merge3->SetInput(2, tcc_instancer1);
		tcc_merge3->Cook();
	}
	SetGeoResult(UTcrMushroom03::output0, tcc_merge3->GetGeoResult(0));
}
