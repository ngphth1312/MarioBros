#include "Pipe.h"

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

	//RenderBoundingBox();
}

void CPipe::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - 16 / 2;
	t = y - 16 / 2;
	r = l + 16;
	b = t + 16;
}