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
	rng(e())
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
	if (!verifySucces(enemies))
	{
		const auto dt = ft.Mark();
		soldier.Update(wnd.kbd, dt);
		soldier.UpdateProj(dt);
		for (auto& el : enemies)
		{
			el.Update(dt, soldier);
			el.Hit(soldier);
			el.HitSoldier(soldier);
			el.UpdateProj(dt);
			el.evade(soldier);
		}
	}
}

void Game::ComposeFrame()
{
	if (!verifySucces(enemies))
	{
		soldier.Draw(gfx);
		soldier.DrawProj(gfx);
		for (auto& el : enemies)
		{
			el.Draw(gfx);
			el.DrawProj(gfx);
		}
	}
}
