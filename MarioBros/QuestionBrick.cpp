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
	//checkIsInCamera();
	
	CGameObject::Update(dt, coObjects);
	CCollision::GetInstance()->Process(this, dt, coObjects);
}


void CQuestionBrick::Render()
{
	//checkIsInCamera();

	int aniId = ID_ANI_QUESTION_BRICK;

	CAnimations::GetInstance()->Get(aniId)->Render(x, y);
	//RenderBoundingBox();
}

void CQuestionBrick::SetState(int state)
{
	CGameObject::SetState(state);
	switch (state)
	{
	case QUESTION_BRICK_STATE_UP:
		vy = -QUESTION_BRICK_SPEED_UP;
		break;
	}
}