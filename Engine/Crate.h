#pragma once
#include "Graphics.h"
#include "RectF.h"
#include <random>

class Crate
{
public:
	Crate() = default;
	Crate(const Vec2& vec) : pos(vec) { }

	void Draw(Graphics& gfx) const;
	void UpdateTime(float dt);

	void Restart();

	void setActivated() { activated = true; }
	void setOnScreen();

	RectF GetRect() const { return RectF::MakeRect(pos, width, height); }
	bool getState() const { return !activated && onScreen; }

private:
	static constexpr float activationTime = 10.0f;
	static constexpr float width = 24.0f;
	static constexpr float height = 24.0f;
	float totalTime = 0.0f;
	Vec2 pos;

	bool activated = false;
	bool onScreen = false;
};
