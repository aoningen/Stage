#pragma once
#include "DxLib.h"

const int STAGE_MODEL_NUM = 2;

class Stage
{
public:
	//コンストラクタとデストラクタ
	Stage();
	~Stage();
	//ステージを読みこむ
	bool Load();

	//ステージの位置を設定
	void SetPosition(VECTOR pos);

	//ステージを描画
	void Draw();

private:
	//ステージの3Dモデル
	int modelHandle[STAGE_MODEL_NUM];

	//ステージの位置
	VECTOR position[STAGE_MODEL_NUM];
};