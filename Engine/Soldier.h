#pragma once
#include "Graphics.h"
#include "Vec2.h"
#include "Keyboard.h"
#include "Mouse.h"
#include "RectF.h"
#include "Colors.h"
#include "Projectile.h"
#include "Shield.h"
#include "Health.h"
#include "Crate.h"
#include <vector>



class Soldier
{
	enum class Weapon
	{
		Pistol,
		AssaultRifle
	};

	friend class Enemy;
	friend class Health;
public:
	Soldier() = default;
	Soldier(Vec2& in) : pos(in) { }
	Soldier(const float& xx, const float& yy) :Soldier(Vec2(xx, yy)) { }

	Soldier& operator--();

	// Update & Draw Functions;
	void Draw(Graphics& gfx) const;
	void DrawWithRifle(Graphics& gfx) const;
	void DrawWithPistol(Graphics& gfx) const;
	void DrawProj(Graphics& gfx) const;
	void DrawShield(Graphics& gfx) const;
	void DrawHealth(Graphics& gfx) const;
	void Update(Keyboard& kbd, Mouse& mouse, float dt);
	void UpdateProj(float dt);
	void UpdateShield();
	void CheckAttack(Keyboard& kbd);
	void CheckAttack(Mouse& mouse);
	void ChangeWeapon();
	void ClampToScreen();
	void ClampToScreenLeft();
	void ClampToScreenRight();

	void Restart();
	void HitCrate(Crate& c);

	// Utility Functions;
	Vec2 GetCenter() const { return Vec2(pos.x + width / 2, pos.y + height / 2); }
	const RectF GetRect() const { return RectF::MakeRect(pos, width, height); }
	std::vector<Projectile>& bullets() { return ps; }

	inline bool isDead() const { return health == 0; }
	void setDead() { dead = true; }
	

private:
	float cooldown = 1.3f;
	float actual = 0.0f;
	static constexpr Color c = Colors::Red;
	static constexpr float speed = 130.0f;
	static constexpr float width = 36.0f;
	static constexpr float height = 49.0f;

	Vec2 pos = Vec2(500.0f,500.0f);
	Health health;
	std::vector<Projectile> ps;
	Shield shield;
	Weapon weapon = Weapon::Pistol;

	bool dead = false;
};
