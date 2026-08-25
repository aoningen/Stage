#pragma once
#include "DxLib.h"

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
	int modelHandle;

	//ステージの位置
	VECTOR position;
};