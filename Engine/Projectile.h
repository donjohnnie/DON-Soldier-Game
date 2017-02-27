#pragma once
#include "Vec2.h"
#include "Graphics.h"

class Projectile
{
public:
	Projectile() = default;
	Projectile(const Vec2& v) :pos(v) { }
	Projectile(const Vec2& pos_in, const Vec2& vel_in, const Color& col) : pos(pos_in), vel(vel_in), c(col) { }

	void Draw(Graphics& gfx) const;
	void Update(float dt);
	void setOut() { out = true; }

	void outOfBounds();
	bool isOut() const { return out; }
	RectF GetRect() const { return RectF::MakeRect(pos, width, height); }
	Vec2 getPos() const { return pos; }
	Vec2 getVel() const { return vel; }

	//no twice-dodging functions
	bool isDodged() const { return dodged; }
	void setDodged() { dodged = true; }

private:
	static constexpr float speed = 150.0f;
	Color c;
	static constexpr float width = 5.0f;
	static constexpr float height = 7.0f;
	Vec2 pos;
	Vec2 vel;

	bool out = false;

	//an Enemy can't dodge the same bullet twice, so no more glitching between the edge and a bullet;
	bool dodged = false;
};