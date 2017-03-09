#pragma once
#include "Graphics.h"
#include "RectF.h"

class Health
{
public:
	Health() = default;
	Health(const int& n) : hp(n) {}


	void decrease() { if (hp != 0) hp--; }

	bool operator==(const int& n) const;

	int getWidth() const { return int(width * hp); }
	int getHeight() const { return int(height); }

private:
	static constexpr float width = 10.0f;
	static constexpr float height = 4.0f;
	int hp = 3;
};