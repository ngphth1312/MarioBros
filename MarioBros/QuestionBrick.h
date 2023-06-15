#pragma once
#include "GameObject.h"

#define QUESTION_BRICK_BBOX_WIDTH 16
#define QUESTION_BRICK_BBOX_HEIGHT 16

#define ID_ANI_QUESTION_BRICK 16001
#define ID_ANI_QUESTION_BRICK_EMPTY 16002
#define QUESTION_BRICK_SPEED_UP 0.04f

#define QUESTION_BRICK_MAX_HEIGHT 10
#define QUESTION_BRICK_SPEED_DOWN 0.04f

#define TYPE_QUESTION_BRICK_COIN 1
#define TYPE_QUESTION_BRICK_ITEM 2

#define QUESTION_BRICK_STATE_UP 100

#define ADJUST_UP_DOWN 13

class CQuestionBrick : public CGameObject
{
protected:
	float startY;
	float startX;
	
	int type;//use later to specify item type or coin type

	float ay;
	float minY;

	BOOLEAN isUnbox = false;
	BOOLEAN isEmpty = false;


public:

	CQuestionBrick(float x, float y, int type);
	void SetState(int state);
	float GetMinY() { return minY; }

	void SetIsUnbox(BOOLEAN boolean) { isUnbox = boolean; }
	void SetIsEmpty(BOOLEAN boolean){ isEmpty = boolean; }
	BOOLEAN GetIsUnbox() { return isUnbox; }
	BOOLEAN GetIsEmpty() { return isEmpty; }

	void SetType(int type) { this->type = type; }
	int GetType() { return type; }

	void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
	void Render();

	int IsCollidable() { return 0; }
	int IsBlocking() { return 1; }
	void OnNoCollision(DWORD dt);

	CGameObject* item = NULL;
};