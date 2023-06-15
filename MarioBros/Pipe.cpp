#include "Pipe.h"
#include "Textures.h"

void CPipe::Render()
{
	if (this->bodyLength <= 0) return;
	float xx = x;
	float yy = y;
	CSprites* s = CSprites::GetInstance();

	s->Get(this->spriteIdTopLeft)->Draw(xx, y);
	xx += 16;// cell width, cell height = 16
	s->Get(this->spriteIdTopRight)->Draw(xx, y);

	for (int i = 1; i <= this->bodyLength; i++)
	{
		xx = x;
		yy += 16;
		s->Get(this->spriteIdBodyLeft)->Draw(xx, yy);
		xx += 16;// cell width, cell height = 16
		s->Get(this->spriteIdBodyRight)->Draw(xx, yy);
	}

	RenderBoundingBox();
}

void CPipe::RenderBoundingBox()
{
	D3DXVECTOR3 p(x, y, 0);
	RECT rect;

	LPTEXTURE bbox = CTextures::GetInstance()->Get(ID_TEX_BBOX);

	float l, t, r, b;

	GetBoundingBox(l, t, r, b);
	rect.left = 0;
	rect.top = 0;
	rect.right = (int)r - (int)l;
	rect.bottom = (int)b - (int)t;

	float cx, cy;
	CGame::GetInstance()->GetCamPos(cx, cy);

	float xx = x - 16 / 2 + rect.right / 2;
	float yy = y - 16 / 2 + rect.bottom / 2;

	CGame::GetInstance()->Draw(xx - cx, yy - cy, bbox, nullptr, BBOX_ALPHA, rect.right - 1, rect.bottom - 1);
}

void CPipe::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - 16 / 2;
	t = y - 16 / 2;
	r = l + 16 * 2;
	b = t + 16 * (bodyLength + 1);
}