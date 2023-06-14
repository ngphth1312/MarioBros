#pragma once

//
// This file contains all IDs of game assets 
//

#define ID_TEX_MARIO 0
#define ID_TEX_ENEMY 10
#define ID_TEX_MISC 20
#define ID_TEX_WORLD11 30

#define OBJECT_TYPE_MARIO	0
#define OBJECT_TYPE_BRICK	1
#define OBJECT_TYPE_GOOMBA	2
#define OBJECT_TYPE_KOOPAS	3
#define OBJECT_TYPE_COIN	4
#define OBJECT_TYPE_PLATFORM	5
#define OBJECT_TYPE_QUESTION_BRICK_COIN	6
#define OBJECT_TYPE_QUESTION_BRICK_ITEM	7
#define OBJECT_TYPE_PIPE	8

#define OBJECT_TYPE_PORTAL	50


#pragma region MARIO 

#define ID_SPRITE_MARIO 10000
#define ID_SPRITE_MARIO_BIG (ID_SPRITE_MARIO + 1000)
#define ID_SPRITE_MARIO_BIG_IDLE (ID_SPRITE_MARIO_BIG + 100)
#define ID_SPRITE_MARIO_BIG_IDLE_LEFT (ID_SPRITE_MARIO_BIG_IDLE + 10)
#define ID_SPRITE_MARIO_BIG_IDLE_RIGHT (ID_SPRITE_MARIO_BIG_IDLE + 20)

#define ID_SPRITE_MARIO_BIG_WALKING (ID_SPRITE_MARIO_BIG + 200)
#define ID_SPRITE_MARIO_BIG_WALKING_LEFT (ID_SPRITE_MARIO_BIG_WALKING + 10)
#define ID_SPRITE_MARIO_BIG_WALKING_RIGHT (ID_SPRITE_MARIO_BIG_WALKING + 20)
#define ID_SPRITE_MARIO_BIG_RUNNING (ID_SPRITE_MARIO_BIG + 300)
#define ID_SPRITE_MARIO_BIG_RUNNING_LEFT (ID_SPRITE_MARIO_BIG_RUNNING + 10)
#define ID_SPRITE_MARIO_BIG_RUNNING_RIGHT (ID_SPRITE_MARIO_BIG_RUNNING + 20)
#define ID_SPRITE_MARIO_BIG_JUMP (ID_SPRITE_MARIO_BIG + 400)
#define ID_SPRITE_MARIO_BIG_JUMP_WALK (ID_SPRITE_MARIO_BIG_JUMP + 10)
#define ID_SPRITE_MARIO_BIG_JUMP_WALK_LEFT (ID_SPRITE_MARIO_BIG_JUMP_WALK + 2)
#define ID_SPRITE_MARIO_BIG_JUMP_WALK_RIGHT (ID_SPRITE_MARIO_BIG_JUMP_WALK + 6)
#define ID_SPRITE_MARIO_BIG_JUMP_RUN (ID_SPRITE_MARIO_BIG_JUMP + 20)
#define ID_SPRITE_MARIO_BIG_JUMP_RUN_LEFT (ID_SPRITE_MARIO_BIG_JUMP_RUN + 2)
#define ID_SPRITE_MARIO_BIG_JUMP_RUN_RIGHT (ID_SPRITE_MARIO_BIG_JUMP_RUN + 6)
#define ID_SPRITE_MARIO_BIG_SIT (ID_SPRITE_MARIO_BIG + 500)
#define ID_SPRITE_MARIO_BIG_SIT_LEFT (ID_SPRITE_MARIO_BIG_SIT + 10)
#define ID_SPRITE_MARIO_BIG_SIT_RIGHT (ID_SPRITE_MARIO_BIG_SIT + 20)
#define ID_SPRITE_MARIO_BIG_BRACE (ID_SPRITE_MARIO_BIG + 600)
#define ID_SPRITE_MARIO_BIG_BRACE_LEFT (ID_SPRITE_MARIO_BIG_BRACE + 10)
#define ID_SPRITE_MARIO_BIG_BRACE_RIGHT (ID_SPRITE_MARIO_BIG_BRACE + 20)

#define ID_SPRITE_MARIO_DIE (ID_SPRITE_MARIO + 3000)

#define ID_SPRITE_MARIO_SMALL (ID_SPRITE_MARIO + 2000)
#define ID_SPRITE_MARIO_SMALL_IDLE (ID_SPRITE_MARIO_SMALL + 100)
#define ID_SPRITE_MARIO_SMALL_IDLE_LEFT (ID_SPRITE_MARIO_SMALL_IDLE + 10)
#define ID_SPRITE_MARIO_SMALL_IDLE_RIGHT (ID_SPRITE_MARIO_SMALL_IDLE + 20)

#define ID_SPRITE_MARIO_SMALL_WALKING (ID_SPRITE_MARIO_SMALL + 200)
#define ID_SPRITE_MARIO_SMALL_WALKING_LEFT (ID_SPRITE_MARIO_SMALL_WALKING + 10)
#define ID_SPRITE_MARIO_SMALL_WALKING_RIGHT (ID_SPRITE_MARIO_SMALL_WALKING + 20)
#define ID_SPRITE_MARIO_SMALL_RUNNING (ID_SPRITE_MARIO_SMALL + 300)
#define ID_SPRITE_MARIO_SMALL_RUNNING_LEFT (ID_SPRITE_MARIO_SMALL_RUNNING + 10)
#define ID_SPRITE_MARIO_SMALL_RUNNING_RIGHT (ID_SPRITE_MARIO_SMALL_RUNNING + 20)
#define ID_SPRITE_MARIO_SMALL_JUMP (ID_SPRITE_MARIO_SMALL + 400)
#define ID_SPRITE_MARIO_SMALL_JUMP_WALK (ID_SPRITE_MARIO_SMALL_JUMP + 10)
#define ID_SPRITE_MARIO_SMALL_JUMP_WALK_LEFT (ID_SPRITE_MARIO_SMALL_JUMP_WALK + 2)
#define ID_SPRITE_MARIO_SMALL_JUMP_WALK_RIGHT (ID_SPRITE_MARIO_SMALL_JUMP_WALK + 6)
#define ID_SPRITE_MARIO_SMALL_JUMP_RUN (ID_SPRITE_MARIO_SMALL_JUMP + 20)
#define ID_SPRITE_MARIO_SMALL_JUMP_RUN_LEFT (ID_SPRITE_MARIO_SMALL_JUMP_RUN + 2)
#define ID_SPRITE_MARIO_SMALL_JUMP_RUN_RIGHT (ID_SPRITE_MARIO_SMALL_JUMP_RUN + 6)

#define ID_SPRITE_MARIO_SMALL_SIT (ID_SPRITE_MARIO_SMALL + 500)
#define ID_SPRITE_MARIO_SMALL_SIT_LEFT (ID_SPRITE_MARIO_SMALL_SIT + 10)
#define ID_SPRITE_MARIO_SMALL_SIT_RIGHT (ID_SPRITE_MARIO_SMALL_SIT + 20)

#define ID_SPRITE_MARIO_SMALL_BRACE (ID_SPRITE_MARIO_SMALL + 500)
#define ID_SPRITE_MARIO_SMALL_BRACE_LEFT (ID_SPRITE_MARIO_SMALL_BRACE + 10)
#define ID_SPRITE_MARIO_SMALL_BRACE_RIGHT (ID_SPRITE_MARIO_SMALL_BRACE + 20)

#pragma endregion 

#define ID_SPRITE_INNER_BRICK 20000
#define ID_SPRITE_OUTER_BRICK 20010

#define ID_SPRITE_GOOMBA 30000
#define ID_SPRITE_GOOMBA_WALK (ID_SPRITE_GOOMBA + 1000)
#define ID_SPRITE_GOOMBA_DIE (ID_SPRITE_GOOMBA + 2000)

#define ID_SPRITE_COIN 40000

//#define ID_SPRITE_CLOUD 50000
//#define ID_SPRITE_CLOUD_BEGIN (ID_SPRITE_CLOUD+1000)
//#define ID_SPRITE_CLOUD_MIDDLE (ID_SPRITE_CLOUD+2000)
//#define ID_SPRITE_CLOUD_END (ID_SPRITE_CLOUD+3000)
#pragma region Platform

#define ID_SPRITE_INVISIBLE_SPRITE -99

#define ID_SPRITE_PLATFORM 50000

//GROUND
#define ID_SPRITE_PLATFORM_GROUND_1_BEGIN (ID_SPRITE_PLATFORM + 10)//500x0
#define ID_SPRITE_PLATFORM_GROUND_1_MIDDLE (ID_SPRITE_PLATFORM + 20)
#define ID_SPRITE_PLATFORM_GROUND_1_END (ID_SPRITE_PLATFORM + 30)

//GROUND 2
#define ID_SPRITE_PLATFORM_GROUND_2_BEGIN (ID_SPRITE_PLATFORM + 110)//501x0
#define ID_SPRITE_PLATFORM_GROUND_2_MIDDLE (ID_SPRITE_PLATFORM + 120)
#define ID_SPRITE_PLATFORM_GROUND_2_END (ID_SPRITE_PLATFORM + 130)

//SMALL BUSH
#define ID_SPRITE_PLATFORM_SMALLBUSH (ID_SPRITE_PLATFORM + 210)//502x0

//BIG BUSH
#define ID_SPRITE_PLATFORM_BIGBUSH_TOP_BEGIN (ID_SPRITE_PLATFORM + 410)//504x0
#define ID_SPRITE_PLATFORM_BIGBUSH_TOP_END (ID_SPRITE_PLATFORM + 420)
#define ID_SPRITE_PLATFORM_BIGBUSH_TOP_OVERLAP_BEGIN (ID_SPRITE_PLATFORM + 430)
#define ID_SPRITE_PLATFORM_BIGBUSH_TOP_OVERLAP_END (ID_SPRITE_PLATFORM + 440)

#define ID_SPRITE_PLATFORM_BIGBUSH_BOTTOM_BEGIN (ID_SPRITE_PLATFORM + 450)
#define ID_SPRITE_PLATFORM_BIGBUSH_BOTTOM_MIDDLE (ID_SPRITE_PLATFORM + 460)
#define ID_SPRITE_PLATFORM_BIGBUSH_BOTTOM_END (ID_SPRITE_PLATFORM + 470)

//CLOUD
#define ID_SPRITE_PLATFORM_CLOUD_TOP_BEGIN (ID_SPRITE_PLATFORM + 310)//503x0
#define ID_SPRITE_PLATFORM_CLOUD_TOP_MIDDLE (ID_SPRITE_PLATFORM + 320)
#define ID_SPRITE_PLATFORM_CLOUD_TOP_END (ID_SPRITE_PLATFORM + 330)

#define ID_SPRITE_PLATFORM_CLOUD_BOTTOM_BEGIN (ID_SPRITE_PLATFORM + 340)
#define ID_SPRITE_PLATFORM_CLOUD_BOTTOM_MIDDLE (ID_SPRITE_PLATFORM + 350)
#define ID_SPRITE_PLATFORM_CLOUD_BOTTOM_END (ID_SPRITE_PLATFORM + 360)

//PINK BLOCK	51XXX
#define ID_SPRITE_PLATFORM_PINK_TOP_BEGIN (ID_SPRITE_PLATFORM + 1110)//511x0
#define ID_SPRITE_PLATFORM_PINK_TOP_MIDDLE (ID_SPRITE_PLATFORM + 1120)
#define ID_SPRITE_PLATFORM_PINK_TOP_END (ID_SPRITE_PLATFORM + 1130)

#define ID_SPRITE_PLATFORM_PINK_BODY_BEGIN (ID_SPRITE_PLATFORM + 1210)//512x0
#define ID_SPRITE_PLATFORM_PINK_BODY_MIDDLE (ID_SPRITE_PLATFORM + 1220)
#define ID_SPRITE_PLATFORM_PINK_BODY_OVERLAP_1_MIDDLE (ID_SPRITE_PLATFORM + 1240)//
#define ID_SPRITE_PLATFORM_PINK_BODY_OVERLAP_2_MIDDLE (ID_SPRITE_PLATFORM + 1250)//
#define ID_SPRITE_PLATFORM_PINK_BODY_END (ID_SPRITE_PLATFORM + 1230)

#define ID_SPRITE_PLATFORM_PINK_BOTTOM_BEGIN (ID_SPRITE_PLATFORM + 1310)//513x0
#define ID_SPRITE_PLATFORM_PINK_BOTTOM_MIDDLE (ID_SPRITE_PLATFORM + 1320)
#define ID_SPRITE_PLATFORM_PINK_BOTTOM_OVERLAP_MIDDLE (ID_SPRITE_PLATFORM + 1340)//
#define ID_SPRITE_PLATFORM_PINK_BOTTOM_END (ID_SPRITE_PLATFORM + 1330)

//BLUE BLOCK	52XXX
#define ID_SPRITE_PLATFORM_BLUE_TOP_BEGIN (ID_SPRITE_PLATFORM + 2110)//521x0
#define ID_SPRITE_PLATFORM_BLUE_TOP_MIDDLE (ID_SPRITE_PLATFORM + 2120)
#define ID_SPRITE_PLATFORM_BLUE_TOP_END (ID_SPRITE_PLATFORM + 2130)

#define ID_SPRITE_PLATFORM_BLUE_BODY_BEGIN (ID_SPRITE_PLATFORM + 2210)//522x0
#define ID_SPRITE_PLATFORM_BLUE_BODY_MIDDLE (ID_SPRITE_PLATFORM + 2220)
#define ID_SPRITE_PLATFORM_BLUE_BODY_OVERLAP_1_MIDDLE (ID_SPRITE_PLATFORM + 2230)
#define ID_SPRITE_PLATFORM_BLUE_BODY_OVERLAP_2_MIDDLE (ID_SPRITE_PLATFORM + 2240)
#define ID_SPRITE_PLATFORM_BLUE_BODY_END (ID_SPRITE_PLATFORM + 2250)

#define ID_SPRITE_PLATFORM_BLUE_BOTTOM_OVERLAP_MIDDLE (ID_SPRITE_PLATFORM + 2310)//523x0
#define ID_SPRITE_PLATFORM_BLUE_BOTTOM_END (ID_SPRITE_PLATFORM + 2320)

//WHITE BLOCK	53XXX
#define ID_SPRITE_PLATFORM_WHITE_TOP_BEGIN (ID_SPRITE_PLATFORM + 3110)//531x0
#define ID_SPRITE_PLATFORM_WHITE_TOP_MIDDLE (ID_SPRITE_PLATFORM + 3120)
#define ID_SPRITE_PLATFORM_WHITE_TOP_END (ID_SPRITE_PLATFORM + 3130)

#define ID_SPRITE_PLATFORM_WHITE_BODY_BEGIN (ID_SPRITE_PLATFORM + 3210)//532x0
#define ID_SPRITE_PLATFORM_WHITE_BODY_MIDDLE (ID_SPRITE_PLATFORM + 3220)
#define ID_SPRITE_PLATFORM_WHITE_BODY_OVERLAP_1_MIDDLE (ID_SPRITE_PLATFORM + 3230)
#define ID_SPRITE_PLATFORM_WHITE_BODY_OVERLAP_2_MIDDLE (ID_SPRITE_PLATFORM + 3240)
#define ID_SPRITE_PLATFORM_WHITE_BODY_END (ID_SPRITE_PLATFORM + 3250)

//GREEN BLOCK	54XXX
#define ID_SPRITE_PLATFORM_GREEN_TOP_BEGIN (ID_SPRITE_PLATFORM + 4110)//541x0
#define ID_SPRITE_PLATFORM_GREEN_TOP_MIDDLE (ID_SPRITE_PLATFORM + 4120)
#define ID_SPRITE_PLATFORM_GREEN_TOP_END (ID_SPRITE_PLATFORM + 4130)

#define ID_SPRITE_PLATFORM_GREEN_BODY_BEGIN (ID_SPRITE_PLATFORM + 4210)//542x0
#define ID_SPRITE_PLATFORM_GREEN_BODY_MIDDLE (ID_SPRITE_PLATFORM + 4220)
#define ID_SPRITE_PLATFORM_GREEN_BODY_END (ID_SPRITE_PLATFORM + 4230)

#define ID_SPRITE_PLATFORM_GREEN_BOTTOM_BEGIN (ID_SPRITE_PLATFORM + 4310)//543x0
#define ID_SPRITE_PLATFORM_GREEN_BOTTOM_MIDDLE (ID_SPRITE_PLATFORM + 4320)
#define ID_SPRITE_PLATFORM_GREEN_BOTTOM_END (ID_SPRITE_PLATFORM + 4330)

//PIPE			56XXX
#define ID_SPRITE_PLATFORM_PIPE_TOP_BEGIN (ID_SPRITE_PLATFORM + 6011)//5601x
#define ID_SPRITE_PLATFORM_PIPE_TOP_END (ID_SPRITE_PLATFORM + 6012)

#define ID_SPRITE_PLATFORM_PIPE_BOTTOM_BEGIN (ID_SPRITE_PLATFORM + 6021)//5602x
#define ID_SPRITE_PLATFORM_PIPE_BOTTOM_END (ID_SPRITE_PLATFORM + 6022)

//OUTER SHADER
#define ID_SPRITE_PLATFORM_OUTTERSHADER_TOP (ID_SPRITE_PLATFORM + 9001)//5900x
#define ID_SPRITE_PLATFORM_OUTTERSHADER_BODY (ID_SPRITE_PLATFORM + 9002)

#pragma endregion