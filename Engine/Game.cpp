/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game(MainWindow& wnd)
	:
	wnd(wnd),
	gfx(wnd),
	xDist(50,500),
	yDist(50,500),
	rng(e()),
	end(Vec2(335,150))
{
	std::uniform_real_distribution<float> vDist(5.0f, 7.0f);
	for (int i = 0; i < enemyNum; i++)
	{
		enemies.push_back(Enemy(Vec2(xDist(rng), yDist(rng)), Vec2(vDist(rng), vDist(rng))));
	}
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	if (!verifySucces(enemies) && !checkGameWon(enemies))
	{
		const auto dt = ft.Mark();
		soldier.Update(wnd.kbd, wnd.mouse, dt);
		crate.UpdateTime(dt);
		soldier.UpdateProj(dt);
		soldier.HitCrate(crate);
		for (auto& el : enemies)
		{
			el.Update(dt, soldier);
			el.Hit(soldier);
			el.HitSoldier(soldier);
			el.HitCrate(crate);
			el.UpdateProj(dt);
			el.evade(soldier);
		}
	}
	else
	{
		if (wnd.kbd.KeyIsPressed(VK_RETURN))
		{
			Restart();
		}
	}
}

void Game::Restart()
{
	soldier.Restart();
	restartEnemies(enemies);
	crate.Restart();
}

void Game::ComposeFrame()
{
	soldier.Draw(gfx);
	crate.Draw(gfx);
	soldier.DrawShield(gfx);
	soldier.DrawProj(gfx);
	for (auto& el : enemies)
	{
		el.Draw(gfx);
		el.DrawProj(gfx);
	}
	if (checkGameWon(enemies))
	{
		end.DrawGameWon(gfx);
	}
	else if (verifySucces(enemies))
	{
		end.DrawGameLost(gfx);
	}
}
