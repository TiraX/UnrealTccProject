// Recipe tcr_simple_leaf, auto generated by UnrealTcc.

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
	MaxInputs = 0;
	tcc_grid1 = UTccNode::CreateNodeWithDefine<UTccGrid>(this, TEXT("tcc_grid1"));
	leaf_shape3 = UTccNode::CreateNodeWithDefine<UTccVex>(this, TEXT("leaf_shape3"));
	enable_bend = UTccNode::CreateNodeWithDefine<UTccSwitch>(this, TEXT("enable_bend"));
		bend_z = UTccNode::CreateNodeWithDefine<UTccBend>(this, TEXT("bend_z"));
	enable_curl = UTccNode::CreateNodeWithDefine<UTccSwitch>(this, TEXT("enable_curl"));
		bend_l = UTccNode::CreateNodeWithDefine<UTccBend>(this, TEXT("bend_l"));
	uv_to_vertices = UTccNode::CreateNodeWithDefine<UTccAttribPromote>(this, TEXT("uv_to_vertices"));
	rename_fmuv_to_uv = UTccNode::CreateNodeWithDefine<UTccAttribRename>(this, TEXT("rename_fmuv_to_uv"));
	Shape.ResizeRampPoints(7);
	Shape.AddRampPoint(0.0000f, 0.0885f);
	Shape.AddRampPoint(0.1035f, 0.7708f);
	Shape.AddRampPoint(0.3643f, 1.0000f);
	Shape.AddRampPoint(0.5442f, 1.0000f);
	Shape.AddRampPoint(0.7965f, 0.8125f);
	Shape.AddRampPoint(0.9337f, 0.1667f);
	Shape.AddRampPoint(1.0000f, 0.0000f);
}
void UTcrSimpleLeaf::Execute(UTccNode* InNode) 
{
	{
		UTccGrid* Define1 = Cast<UTccGrid>(tcc_grid1->GetDefine()); 
		Define1->Size = FVector2f(Size.X, Size.Y);
		Define1->T = FVector3f(0.000000f, 0.000000f, Cast<UTccGrid>(tcc_grid1->GetDefine())->Size.Y * 0.5f);
		Define1->Rows = int32(Rows);
		Define1->Cols = int32(Cols);
		tcc_grid1->Cook();
	}
	{
		leaf_shape3->SetInput(0, tcc_grid1);
		UTccVex* Define1 = Cast<UTccVex>(leaf_shape3->GetDefine()); 
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
		UTccSwitch* Define1 = Cast<UTccSwitch>(enable_bend->GetDefine()); 
		Define1->Input = int32(EnableBend);
		Define1->NumCases = 2;
		enable_bend->Cook();
		FTccGeometryPtr SwitchResult = nullptr;
		const int32 Selection = Define1->Input;
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
					UTccBend* Define2 = Cast<UTccBend>(bend_z->GetDefine()); 
					Define2->Bend = float(Bend);
					Define2->Length = float(Size.Y);
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
		UTccSwitch* Define1 = Cast<UTccSwitch>(enable_curl->GetDefine()); 
		Define1->Input = int32(EnableCurl);
		Define1->NumCases = 2;
		enable_curl->Cook();
		FTccGeometryPtr SwitchResult = nullptr;
		const int32 Selection = Define1->Input;
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
					UTccBend* Define2 = Cast<UTccBend>(bend_l->GetDefine()); 
					Define2->Bend = float(Curl);
					Define2->Dir = FVector3f(1.000000f, 0.000000f, 0.000000f);
					Define2->Length = float(Size.X);
					Define2->Symmetricdeformation = 1;
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
		UTccAttribPromote* Define1 = Cast<UTccAttribPromote>(uv_to_vertices->GetDefine()); 
		Define1->Inname = TEXT("uv");
		Define1->Outclass = UTccAttribPromote::Vertices;
		Define1->Deletein = 1;
		Define1->DoFirstMatch = 1;
		uv_to_vertices->Cook();
	}
	{
		rename_fmuv_to_uv->SetInput(0, uv_to_vertices);
		UTccAttribRename* Define1 = Cast<UTccAttribRename>(rename_fmuv_to_uv->GetDefine()); 
		Define1->Fromvtx0 = TEXT("fm_uv");
		Define1->Tovtx0 = TEXT("uv");
		rename_fmuv_to_uv->Cook();
	}
	InNode->SetGeoResult(output0, rename_fmuv_to_uv->GetGeoResult(0));
}

