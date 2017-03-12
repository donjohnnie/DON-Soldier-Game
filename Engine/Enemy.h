#pragma once
#include "RectF.h"
#include "Projectile.h"
#include "Soldier.h"
#include <vector>
#include "Health.h"

class Enemy
{
	friend bool checkGameWon(std::vector<Enemy>& v);
	friend void restartEnemies(std::vector<Enemy>& v);
public:
	Enemy() = default;
	Enemy(const Vec2& v1, const Vec2& v2) : pos(v1), vel(v2) { }

	Enemy& operator--();

	// Update & Draw Functions;
	void Draw(Graphics& gfx) const;
	void DrawProj(Graphics& gfx) const;
	void DrawHealth(Graphics & gfx) const;
	void Update(float dt, const Soldier& s);
	void UpdateProj(float dt);
	void Hit(Soldier& sol);
	void HitSoldier(Soldier& sol);
	void HitCrate(Crate& c) const;
	void evade(Soldier& sol);

	// Utility Functions;
	void setDodgeTrue();
	void setDodgeFalse();
	bool dodgeCheck() const { return canDodge; }
	bool isDead() const { return health == 0; }
	void setSucces() { succes = true; }
	bool checkSucces() const { return succes; }

	Vec2 GetCenter() const { return Vec2(pos.x + width / 2, pos.y + height / 2); }
	RectF GetRect() const { return RectF::MakeRect(pos, width, height); }

private:
	static constexpr float cooldown = 1.75f;
	static constexpr Color c = Colors::Magenta;
	static constexpr float speed = 25.0f;
	static constexpr float width = 31.0f;
	static constexpr float height = 52.0f;
	float actual = 0.0f;

	Vec2 pos;
	Vec2 vel;
	Health health = Health(2);
	std::vector<Projectile> ps;

	bool hit = false;
	bool succes = false;
	//can dodge a bullet if true; set to false when the Enemy object dodges a Soldier bullet;
	//set to true whenever it hits a wall;
	bool canDodge = true;

};