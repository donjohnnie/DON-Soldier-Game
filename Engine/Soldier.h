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

	void Draw(Graphics& gfx) const;
	void DrawProj(Graphics& gfx) const;
	void Update(Keyboard& kbd, float dt);
	void UpdateProj(float dt);
	void CheckAttack(Keyboard& kbd)
	{
		if (!isDead())
		{
			if (kbd.KeyIsPressed(VK_NUMPAD4))
			{
				ps.push_back(Projectile((GetCenter()), Vec2(-1.0f, 0.0f), c));
			}
			if (kbd.KeyIsPressed(VK_NUMPAD6))
			{
				ps.push_back(Projectile((GetCenter()), Vec2(1.0f, 0.0f), c));
			}
			if (kbd.KeyIsPressed(VK_NUMPAD8))
			{
				ps.push_back(Projectile((GetCenter()), Vec2(0.0f, -1.0f), c));
			}
			if (kbd.KeyIsPressed(VK_NUMPAD5))
			{
				ps.push_back(Projectile((GetCenter()), Vec2(0.0f, 1.0f), c));
			}
		}
	}

	std::vector<Projectile>& bullets() { return ps; }
	void checkOut();

	const RectF GetRect() const
	{
		return RectF::MakeRect(pos, width, height);
	}
	void ClampToScreen();

	Vec2 GetCenter() const { return Vec2(pos.x + width / 2, pos.y + height / 2); }

	void Attack()
	{
		ps.push_back(Projectile(GetCenter()));
	}

	bool isDead() const { return dead; }
	void setDead() { dead = true; }

private:
	static constexpr float cooldown = 0.5f;
	float actual = 0.0f;
	static constexpr Color c = Colors::Red;
	static constexpr float speed = 100.0f;
	static constexpr float width = 36.0f;
	static constexpr float height = 49.0f;
	Vec2 pos;
	std::vector<Projectile> ps;

	bool dead = false;
};
