#pragma once
#include "Types.h"

struct Vertex
{
	Vec3 position;
	// Color color;
	Vec2 uv;
};

struct TransformData
{
	Vec3 offset;
	float dummy; // 16byte정렬 하기위한 맞추기 위한 쓰레기 값
};
