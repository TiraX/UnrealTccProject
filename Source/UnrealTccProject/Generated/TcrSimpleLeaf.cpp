// Auto generated by UnrealTcc. 

#include "TcrSimpleLeaf.h"
#include "Generated/TccTemplates.h"
#include "TccForBlock.h"
#include "TccSwitch.h"
#include "TccAttribute.h"
#include "TccGeometry.h"
#include "Vex.h"
#include "HScript.h"

 UTcrSimpleLeaf::UTcrSimpleLeaf() 
{
	Shape.ResizeRampPoints(7);
	Shape.AddRampPoint(0.0000f, 0.0885f);
	Shape.AddRampPoint(0.1035f, 0.7708f);
	Shape.AddRampPoint(0.3643f, 1.0000f);
	Shape.AddRampPoint(0.5442f, 1.0000f);
	Shape.AddRampPoint(0.7965f, 0.8125f);
	Shape.AddRampPoint(0.9337f, 0.1667f);
	Shape.AddRampPoint(1.0000f, 0.0000f);
}
FTccNodePtr UTcrSimpleLeaf::CreateNode() 
{
	TSharedPtr<FTcrSimpleLeaf> Node = MakeShared<FTcrSimpleLeaf>();
	SyncParams(Node);
	return Node;
}
void UTcrSimpleLeaf::SyncParams(FTccNodePtr InNode) 
{
	TSharedPtr<FTcrSimpleLeaf> Node = StaticCastSharedPtr<FTcrSimpleLeaf>(InNode);
	Node->Shape = Shape;
	Node->Size = Size;
	Node->Rows = Rows;
	Node->Cols = Cols;
	Node->EnableBend = EnableBend;
	Node->Bend = Bend;
	Node->EnableCurl = EnableCurl;
	Node->Curl = Curl;
}

 FTcrSimpleLeaf::FTcrSimpleLeaf() 
{
	InitInputsCount(0);
	tcc_grid1 = new FTccGrid();
	tcc_grid1->InitMultiRefs(false); // RefCount = 1
	leaf_shape3 = new FTccVex();
	leaf_shape3->InitMultiRefs(false); // RefCount = 1
	enable_bend = new FTccSwitch();
	enable_bend->InitMultiRefs(false); // RefCount = 1
		bend_z = new FTccBend();
		bend_z->InitMultiRefs(false); // RefCount = 1
	enable_curl = new FTccSwitch();
	enable_curl->InitMultiRefs(false); // RefCount = 1
		bend_l = new FTccBend();
		bend_l->InitMultiRefs(false); // RefCount = 1
	uv_to_vertices = new FTccAttribPromote();
	uv_to_vertices->InitMultiRefs(false); // RefCount = 1
	rename_fmuv_to_uv = new FTccAttribRename();
	rename_fmuv_to_uv->InitMultiRefs(false); // RefCount = 1
	Shape.ResizeRampPoints(7);
	Shape.AddRampPoint(0.0000f, 0.0885f);
	Shape.AddRampPoint(0.1035f, 0.7708f);
	Shape.AddRampPoint(0.3643f, 1.0000f);
	Shape.AddRampPoint(0.5442f, 1.0000f);
	Shape.AddRampPoint(0.7965f, 0.8125f);
	Shape.AddRampPoint(0.9337f, 0.1667f);
	Shape.AddRampPoint(1.0000f, 0.0000f);
}
 FTcrSimpleLeaf::~FTcrSimpleLeaf() 
{
	delete tcc_grid1; 
	delete leaf_shape3; 
	delete enable_bend; 
		delete bend_z; 
	delete enable_curl; 
		delete bend_l; 
	delete uv_to_vertices; 
	delete rename_fmuv_to_uv; 
}
void FTcrSimpleLeaf::Cook() 
{
	{
		tcc_grid1->Size = FVector2f(Size.X, Size.Y);
		tcc_grid1->T = FVector3f(0.000000f, tcc_grid1->Size.Y * 0.5f, 0.000000f);
		tcc_grid1->Rows = int32(Rows);
		tcc_grid1->Cols = int32(Cols);
		tcc_grid1->Cook();
	}
	{
		leaf_shape3->SetInput(0, tcc_grid1);
		float _shrink = 0.900000f;
		leaf_shape3->Cook();
		{
			FTccGeometryPtr Geo0 = leaf_shape3->GetGeoResult(0);
			FTccAttribPtr attr_uv = Geo0->AddPointAttrib("uv", FTccAttrib::EAttrType::F2);
			const FVector2f s = Size;
			const float shrink = _shrink;
			const int32 _numpt = Geo0->GetPointsCount();
			for(int32 i = 0; i < _numpt; i++)
			{
				const int32 _ptnum = i;
				FVector3f& _P = Geo0->GetPositions()[i];
				FVector2f& _uv = attr_uv->GetData<FVector2f>()[i];
				FVector2f uv;
				uv.Y = _P.Y / s.Y;
				float w = Shape.Lookup(uv.Y);
				_P.X = _P.X * w;
				uv.X = _P.X / s.X + 0.5f;
				// shrink uv
				uv.Y = uv.Y * shrink + (1 - shrink) * 0.5f;
				uv.X = uv.X * shrink + (1 - shrink) * 0.5f;
				_uv = uv;
			}
		}
	}
	{
		enable_bend->SetInput(0, leaf_shape3);
		enable_bend->Input = int32(EnableBend);
		enable_bend->NumCases = 2;
		enable_bend->Cook();
		FTccGeometryPtr SwitchResult = nullptr;
		const int32 Selection = enable_bend->Input;
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
					bend_z->SetInput(0, leaf_shape3);
					bend_z->Bend = float(Bend);
					bend_z->Length = float(Size.Y);
					bend_z->Cook();
				}
				
				SwitchResult = bend_z->GetGeoResult(0);
			}
			break;
			default:
			{
				checkNoEntry();
			}
			break;
		}
		enable_bend->SetValidGeoResult(0, SwitchResult);
	}
	{
		enable_curl->SetInput(0, enable_bend);
		enable_curl->Input = int32(EnableCurl);
		enable_curl->NumCases = 2;
		enable_curl->Cook();
		FTccGeometryPtr SwitchResult = nullptr;
		const int32 Selection = enable_curl->Input;
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
					bend_l->SetInput(0, enable_bend);
					bend_l->Bend = float(Curl);
					bend_l->Dir = FVector3f(1.000000f, 0.000000f, 0.000000f);
					bend_l->Length = float(Size.X);
					bend_l->Symmetricdeformation = 1;
					bend_l->Cook();
				}
				
				SwitchResult = bend_l->GetGeoResult(0);
			}
			break;
			default:
			{
				checkNoEntry();
			}
			break;
		}
		enable_curl->SetValidGeoResult(0, SwitchResult);
	}
	{
		uv_to_vertices->SetInput(0, enable_curl);
		uv_to_vertices->Inname = TEXT("uv");
		uv_to_vertices->Outclass = UTccAttribPromote::Vertices;
		uv_to_vertices->Deletein = 1;
		uv_to_vertices->DoFirstMatch = 1;
		uv_to_vertices->Cook();
	}
	{
		rename_fmuv_to_uv->SetInput(0, uv_to_vertices);
		rename_fmuv_to_uv->Fromvtx0 = TEXT("fm_uv");
		rename_fmuv_to_uv->Tovtx0 = TEXT("uv");
		rename_fmuv_to_uv->Cook();
	}
	SetGeoResult(UTcrSimpleLeaf::output0, rename_fmuv_to_uv->GetGeoResult(0));
}
