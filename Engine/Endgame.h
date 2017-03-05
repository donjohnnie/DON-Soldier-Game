#pragma once
#include "Graphics.h"
#include "Vec2.h"


class Endgame
{
public:
	Endgame() = default;
	Endgame(const Vec2& vec) : pos(vec) { }

	void DrawGameWon(Graphics& gfx);
	void DrawGameLost(Graphics& gfx);

private:
	Vec2 pos;
};

