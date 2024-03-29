// Auto generated by UnrealTcc. 

#include "TctrTreeBig.h"
#include "Generated/TccTemplates.h"
#include "TccForBlock.h"
#include "TccSwitch.h"
#include "TctTexVex.h"
#include "TccAttribute.h"
#include "TccGeometry.h"
#include "Vex.h"
#include "HScript.h"

 UTctrTreeBig::UTctrTreeBig() 
{
	InitNetworkNodes(NumNodes);
	NetworkNodes[normal] = CreateDefaultSubobject<UTctUniformColor>("normal", true); // RefCount = 1
	NetworkNodes[normal]->CreateHelperNodes();
	NetworkNodes[ao] = CreateDefaultSubobject<UTctUniformColor>("ao", true); // RefCount = 1
	NetworkNodes[ao]->CreateHelperNodes();
	NetworkNodes[height] = CreateDefaultSubobject<UTctUniformColor>("height", true); // RefCount = 1
	NetworkNodes[height]->CreateHelperNodes();
	NetworkNodes[albedo] = CreateDefaultSubobject<UTctUniformColor>("albedo", true); // RefCount = 1
	NetworkNodes[albedo]->CreateHelperNodes();
	InitTextures(OUT_Count);
}
void UTctrTreeBig::UpdateParameters() 
{
	{
		// Node: normal
		UTctUniformColor* _normal = Cast<UTctUniformColor>(NetworkNodes[normal]);
		_normal->Size = FIntVector2(Res.X, Res.Y);
		_normal->Color = FVector4f(0.500000f, 0.500000f, 1.000000f, 1.000000f);
		_normal->UpdateHelperNodeParameters();
	}
	{
		// Node: ao
		UTctUniformColor* _ao = Cast<UTctUniformColor>(NetworkNodes[ao]);
		_ao->Size = FIntVector2(Res.X, Res.Y);
		_ao->Color = FVector4f(1.000000f, 1.000000f, 1.000000f, 1.000000f);
		_ao->UpdateHelperNodeParameters();
	}
	{
		// Node: height
		UTctUniformColor* _height = Cast<UTctUniformColor>(NetworkNodes[height]);
		_height->Size = FIntVector2(Res.X, Res.Y);
		_height->Color = FVector4f(1.000000f, 1.000000f, 1.000000f, 1.000000f);
		_height->UpdateHelperNodeParameters();
	}
	{
		// Node: albedo
		UTctUniformColor* _albedo = Cast<UTctUniformColor>(NetworkNodes[albedo]);
		_albedo->Size = FIntVector2(Res.X, Res.Y);
		_albedo->Color = FVector4f(0.500000f, 0.250000f, 0.000000f, 1.000000f);
		_albedo->UpdateHelperNodeParameters();
	}
}
void UTctrTreeBig::FillComputeGraph(UTccComputeGraph* InComputeGraph,int32 InOutputIndex,TObjectPtr<UTexture2D> OutTexture) 
{
	{
		// Node: normal
		NetworkNodes[normal]->FillComputeGraph(InComputeGraph, OUT_Normal_Trunk, Textures[OUT_Normal_Trunk]); 
	}
	{
		// Node: ao
		NetworkNodes[ao]->FillComputeGraph(InComputeGraph, OUT_AO_Trunk, Textures[OUT_AO_Trunk]); 
	}
	{
		// Node: height
		NetworkNodes[height]->FillComputeGraph(InComputeGraph, OUT_Height_Trunk, Textures[OUT_Height_Trunk]); 
	}
	{
		// Node: albedo
		NetworkNodes[albedo]->FillComputeGraph(InComputeGraph, OUT_Albedo_Trunk, Textures[OUT_Albedo_Trunk]); 
	}
}

