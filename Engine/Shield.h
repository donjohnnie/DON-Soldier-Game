#pragma once
#include "Graphics.h"
#include "RectF.h"

class Shield
{
	friend class Soldier;
public:
	Shield() = default;
	Shield(const Vec2& vec) : pos(vec) { }

	void Draw(Graphics& gfx) const;

	Vec2 GetCenter() const { return Vec2(pos.x + width / 2, pos.y + height / 2); }
	const RectF GetRect() const { return RectF::MakeRect(pos, width, height); }

private:
	static constexpr float width = 20.0f;
	static constexpr float height = 24.0f;
	static constexpr float distance = 5.0f;
	Vec2 pos;

};

