#pragma once
#include "DxLib.h"

const int OBJECT_NUM = 10;

class Object3D
{
public:
	Object3D();
	~Object3D();

	bool Load(const char*fileName,float radius);
	void SetPosition(VECTOR pos);
	VECTOR GetPositon() const;
	float GetCollisionRadius() const;

	void Draw();


private:
	int modelHandle;
	VECTOR position;
	float collisionRadius;

};
