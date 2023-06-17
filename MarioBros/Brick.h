#pragma once

#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"
#include "AssetIDs.h"

#define ID_ANI_BRICK 10000

#define BRICK_WIDTH 16
#define BRICK_BBOX_WIDTH 16
#define BRICK_BBOX_HEIGHT 16

class CBrick : public CGameObject {

	int type;

public:
	CBrick(float x, float y, int type) : CGameObject(x, y) {
		this->x = x;
		this->y = y;
		this->type = type;
	}


	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};