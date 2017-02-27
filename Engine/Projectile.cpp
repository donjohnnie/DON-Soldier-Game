#include "Projectile.h"


void Projectile::Draw(Graphics & gfx) const
{
	if (!isOut())
	{
		gfx.DrawRect(GetRect(), c);
	}
}

void Projectile::Update(float dt)
{
	outOfBounds();
	pos += vel *dt* speed;
}

void Projectile::outOfBounds()
{
	const auto r2 = GetRect();
	const auto r = RectF(r2.left - 10.0f, r2.right + 10.0f, r2.top - 10.0f, r2.bottom + 10.0f);
	if (!isOut())
	{
		if (r.left < 0 || r.right > Graphics::ScreenWidth || r.top < 0 || r.bottom > Graphics::ScreenHeight)
		{
			out = true;
		}
		else
		{
			out = false;
		}
	}
}

void checkOut(std::vector<Projectile>& ps)
{
	for (int i = 0; i < ps.size(); i++)
	{
		if (ps[i].isOut())
		{
			ps.erase(ps.begin() + i);
		}
	}
}