#pragma once
#include "Graphics.h"
#include "Vec2.h"
#include "Keyboard.h"
#include "RectF.h"
#include "Colors.h"
#include "Projectile.h"
#include <vector>

class Soldier
{
public:
	Soldier() = default;
	Soldier(Vec2& in) : pos(in) { }
	Soldier(const float& xx, const float& yy) :Soldier(Vec2(xx, yy)) { }

	// Update & Draw Functions;
	void Draw(Graphics& gfx) const;
	void DrawProj(Graphics& gfx) const;
	void Update(Keyboard& kbd, float dt);
	void UpdateProj(float dt);
	void CheckAttack(Keyboard& kbd);
	void ClampToScreen();

	// Utility Functions;
	Vec2 GetCenter() const { return Vec2(pos.x + width / 2, pos.y + height / 2); }
	const RectF GetRect() const { return RectF::MakeRect(pos, width, height); }
	std::vector<Projectile>& bullets() { return ps; }

	bool isDead() const { return dead; }
	void setDead() { dead = true; }

private:
	static constexpr float cooldown = 0.5f;
	float actual = 0.0f;
	static constexpr Color c = Colors::Red;
	static constexpr float speed = 100.0f;
	static constexpr float width = 36.0f;
	static constexpr float height = 49.0f;
	Vec2 pos = Vec2(500.0f,500.0f);
	std::vector<Projectile> ps;

	bool dead = false;
};
