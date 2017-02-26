#pragma once
#include "Graphics.h"
#include "Vec2.h"


class TT
{
public:
	TT() = default;
	TT(const Vec2& vec) : pos(vec) { }

	void Update()
	{
		pos.y -= 1;
	}

	void Draw(Graphics& gfx)
	{
		gfx.DrawRect(RectF::FromCenter(pos,width,height), c);
	}

	static constexpr float width = 47.0f;
	static constexpr float height = 40.0f;
	static constexpr Color c = Colors::Cyan;

	Vec2 pos;
};

