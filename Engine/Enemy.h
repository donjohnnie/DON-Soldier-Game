#pragma once
#include "RectF.h"
#include "Projectile.h"
#include "Soldier.h"
#include <vector>

class Enemy
{
	friend bool verifySucces(std::vector<Enemy>& v)
	{
		for (auto& el : v)
		{
			if (el.checkSucces())
			{
				return true;
			}
		}
		return false;
	}
public:
	Enemy() = default;
	Enemy(const Vec2& v1, const Vec2& v2) : pos(v1), vel(v2) { }

	void Draw(Graphics& gfx) const;
	void DrawProj(Graphics& gfx) const;
	void Update(float dt, const Soldier& s);
	void UpdateProj(float dt);
	void Hit(Soldier& sol);
	bool isHit() const { return hit; }
	void HitSoldier(Soldier& sol);
	void evade(Soldier& sol);
	void setSucces() { succes = true; }
	bool checkSucces() const { return succes; }

	void setDodgeTrue();
	void setDodgeFalse();
	bool dodgeCheck() const { return canDodge; }
	
	Vec2 GetCenter() const { return Vec2(pos.x + width / 2, pos.y + height / 2); }
	RectF GetRect() const { return RectF::MakeRect(pos, width, height); }
private:
	static constexpr float cooldown = 2.0f;
	float actual = 0.0f;
	static constexpr Color c = Colors::Magenta;
	static constexpr float speed = 15.0f;
	static constexpr float width = 31.0f;
	static constexpr float height = 52.0f;
	Vec2 pos;
	Vec2 vel;

	std::vector<Projectile> ps;
	bool hit = false;
	bool succes = false;

	//can dodge a bullet if true; set to false when the Enemy object dodges a Soldier bullet;
	//set to true whenever it hits a wall;
	bool canDodge = true;

};