#pragma once
#pragma once

#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"

class CPipe : public CGameObject {

protected:
	int bodyLength;
	int spriteIdTopLeft;
	int spriteIdTopRight;
	int spriteIdBodyLeft;
	int spriteIdBodyRight;

public:
	CPipe(float x, float y, int body_length,
		int sprite_id_topLeft, int sprite_id_topRight, int sprite_id_bodyLeft, int sprite_id_bodyRight) : CGameObject(x, y)
	{
		this->x = x;
		this->y = y;
		this->bodyLength = body_length;
		this->spriteIdTopLeft = sprite_id_topLeft;
		this->spriteIdTopRight = sprite_id_topRight;
		this->spriteIdBodyLeft = sprite_id_bodyLeft;
		this->spriteIdBodyRight = sprite_id_bodyRight;
	}
	void Render();
	void Update(DWORD dt) {}
	void RenderBoundingBox();
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};