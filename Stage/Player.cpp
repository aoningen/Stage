#include "Player.h"

Player::Player() :modelHandle(-1), position(VGet(0.0f, 0.0f, 0.0f)), moveSpeed(5.0f), collisionRadius(10.0f)
{
}

Player::~Player()
{
	if (modelHandle != -1)
	{
		MV1DeleteModel(modelHandle);
	}
}

bool Player::Load()
{
	//プレイヤーモデルの読み込み
	modelHandle = MV1LoadModel();
	if (modelHandle == -1)
	{
		return false;
	}
	return true;
}

