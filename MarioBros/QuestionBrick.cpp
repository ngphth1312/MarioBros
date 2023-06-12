#include "QuestionBrick.h"
#include "Mario.h"
#include "PlayScene.h"
#include "Coin.h"

CQuestionBrick::CQuestionBrick(float x, float y, int type) :CGameObject(x, y)
{
	this->startX = x;
	this->startY = y;
	this->type = type;
	this->ay = 0;
	this->minY = y - QUESTION_BRICK_BBOX_HEIGHT + ADJUST_UP_DOWN;
}

void CQuestionBrick::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{
	left = x - QUESTION_BRICK_BBOX_WIDTH / 2;
	top = y - QUESTION_BRICK_BBOX_HEIGHT / 2;
	right = left + QUESTION_BRICK_BBOX_WIDTH;
	bottom = top + QUESTION_BRICK_BBOX_HEIGHT;
}

void CQuestionBrick::OnNoCollision(DWORD dt)
{

};


void CQuestionBrick::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	CCollision::GetInstance()->Process(this, dt, coObjects);
}

void CQuestionBrick::Render()
{
	int aniId;

	if (isEmpty) 
		aniId = ID_ANI_QUESTION_BRICK_EMPTY;
	else 
		aniId = ID_ANI_QUESTION_BRICK;

	CAnimations::GetInstance()->Get(aniId)->Render(x, y);
	//RenderBoundingBox()
}

