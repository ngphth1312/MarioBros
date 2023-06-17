#include "Brick.h"

void CBrick::Render()
{
	//NEED A WAY TO AVOID TYPING INVALID TYPE OF BRICK
	CSprites* s = CSprites::GetInstance();
	if (type == 1)
		s->Get(ID_SPRITE_BRICK_UNBREAKABLE)->Draw(x, y);

	RenderBoundingBox();
}

void CBrick::GetBoundingBox(float &l, float &t, float &r, float &b)
{
	l = x - BRICK_BBOX_WIDTH/2;
	t = y - BRICK_BBOX_HEIGHT/2;
	r = l + BRICK_BBOX_WIDTH;
	b = t + BRICK_BBOX_HEIGHT;
}