#include "Soldier.h"

void Soldier::Draw(Graphics & gfx) const
{
	if (!isDead())
	{
		const int int_x = int(pos.x);
		const int int_y = int(pos.y);

		gfx.PutPixel(8 + int_x, 2 + int_y, 10, 10, 10);
		gfx.PutPixel(9 + int_x, 2 + int_y, 17, 17, 17);
		gfx.PutPixel(10 + int_x, 2 + int_y, 16, 16, 16);
		gfx.PutPixel(11 + int_x, 2 + int_y, 16, 16, 16);
		gfx.PutPixel(12 + int_x, 2 + int_y, 16, 16, 16);
		gfx.PutPixel(13 + int_x, 2 + int_y, 16, 16, 16);
		gfx.PutPixel(14 + int_x, 2 + int_y, 16, 16, 16);
		gfx.PutPixel(15 + int_x, 2 + int_y, 16, 16, 16);
		gfx.PutPixel(16 + int_x, 2 + int_y, 16, 16, 16);
		gfx.PutPixel(17 + int_x, 2 + int_y, 16, 16, 16);
		gfx.PutPixel(18 + int_x, 2 + int_y, 16, 16, 16);
		gfx.PutPixel(19 + int_x, 2 + int_y, 16, 16, 16);
		gfx.PutPixel(20 + int_x, 2 + int_y, 16, 16, 16);
		gfx.PutPixel(21 + int_x, 2 + int_y, 16, 16, 16);
		gfx.PutPixel(22 + int_x, 2 + int_y, 16, 16, 16);
		gfx.PutPixel(23 + int_x, 2 + int_y, 16, 16, 16);
		gfx.PutPixel(24 + int_x, 2 + int_y, 16, 16, 16);
		gfx.PutPixel(25 + int_x, 2 + int_y, 16, 16, 16);
		gfx.PutPixel(26 + int_x, 2 + int_y, 17, 17, 17);
		gfx.PutPixel(27 + int_x, 2 + int_y, 11, 11, 11);
		gfx.PutPixel(8 + int_x, 3 + int_y, 39, 39, 39);
		gfx.PutPixel(9 + int_x, 3 + int_y, 66, 66, 66);
		gfx.PutPixel(10 + int_x, 3 + int_y, 63, 63, 63);
		gfx.PutPixel(11 + int_x, 3 + int_y, 63, 63, 63);
		gfx.PutPixel(12 + int_x, 3 + int_y, 63, 63, 63);
		gfx.PutPixel(13 + int_x, 3 + int_y, 63, 63, 63);
		gfx.PutPixel(14 + int_x, 3 + int_y, 63, 63, 63);
		gfx.PutPixel(15 + int_x, 3 + int_y, 63, 63, 63);
		gfx.PutPixel(16 + int_x, 3 + int_y, 63, 63, 63);
		gfx.PutPixel(17 + int_x, 3 + int_y, 63, 63, 63);
		gfx.PutPixel(18 + int_x, 3 + int_y, 63, 63, 63);
		gfx.PutPixel(19 + int_x, 3 + int_y, 63, 63, 63);
		gfx.PutPixel(20 + int_x, 3 + int_y, 63, 63, 63);
		gfx.PutPixel(21 + int_x, 3 + int_y, 63, 63, 63);
		gfx.PutPixel(22 + int_x, 3 + int_y, 63, 63, 63);
		gfx.PutPixel(23 + int_x, 3 + int_y, 63, 63, 63);
		gfx.PutPixel(24 + int_x, 3 + int_y, 63, 63, 63);
		gfx.PutPixel(25 + int_x, 3 + int_y, 63, 63, 63);
		gfx.PutPixel(26 + int_x, 3 + int_y, 66, 66, 66);
		gfx.PutPixel(27 + int_x, 3 + int_y, 47, 47, 47);
		gfx.PutPixel(8 + int_x, 4 + int_y, 37, 37, 37);
		gfx.PutPixel(9 + int_x, 4 + int_y, 64, 64, 64);
		gfx.PutPixel(10 + int_x, 4 + int_y, 61, 61, 61);
		gfx.PutPixel(11 + int_x, 4 + int_y, 60, 60, 60);
		gfx.PutPixel(12 + int_x, 4 + int_y, 60, 60, 60);
		gfx.PutPixel(13 + int_x, 4 + int_y, 60, 60, 60);
		gfx.PutPixel(14 + int_x, 4 + int_y, 60, 60, 60);
		gfx.PutPixel(15 + int_x, 4 + int_y, 60, 60, 60);
		gfx.PutPixel(16 + int_x, 4 + int_y, 60, 60, 60);
		gfx.PutPixel(17 + int_x, 4 + int_y, 60, 60, 60);
		gfx.PutPixel(18 + int_x, 4 + int_y, 60, 60, 60);
		gfx.PutPixel(19 + int_x, 4 + int_y, 60, 60, 60);
		gfx.PutPixel(20 + int_x, 4 + int_y, 60, 60, 60);
		gfx.PutPixel(21 + int_x, 4 + int_y, 60, 60, 60);
		gfx.PutPixel(22 + int_x, 4 + int_y, 60, 60, 60);
		gfx.PutPixel(23 + int_x, 4 + int_y, 60, 60, 60);
		gfx.PutPixel(24 + int_x, 4 + int_y, 60, 60, 60);
		gfx.PutPixel(25 + int_x, 4 + int_y, 60, 60, 60);
		gfx.PutPixel(26 + int_x, 4 + int_y, 63, 63, 63);
		gfx.PutPixel(27 + int_x, 4 + int_y, 43, 43, 43);
		gfx.PutPixel(5 + int_x, 5 + int_y, 12, 12, 12);
		gfx.PutPixel(6 + int_x, 5 + int_y, 32, 32, 32);
		gfx.PutPixel(7 + int_x, 5 + int_y, 31, 31, 31);
		gfx.PutPixel(8 + int_x, 5 + int_y, 50, 50, 50);
		gfx.PutPixel(9 + int_x, 5 + int_y, 63, 63, 63);
		gfx.PutPixel(10 + int_x, 5 + int_y, 61, 61, 61);
		gfx.PutPixel(11 + int_x, 5 + int_y, 71, 71, 71);
		gfx.PutPixel(12 + int_x, 5 + int_y, 74, 74, 74);
		gfx.PutPixel(13 + int_x, 5 + int_y, 73, 73, 73);
		gfx.PutPixel(14 + int_x, 5 + int_y, 73, 73, 73);
		gfx.PutPixel(15 + int_x, 5 + int_y, 73, 73, 73);
		gfx.PutPixel(16 + int_x, 5 + int_y, 73, 73, 73);
		gfx.PutPixel(17 + int_x, 5 + int_y, 73, 73, 73);
		gfx.PutPixel(18 + int_x, 5 + int_y, 73, 73, 73);
		gfx.PutPixel(19 + int_x, 5 + int_y, 73, 73, 73);
		gfx.PutPixel(20 + int_x, 5 + int_y, 73, 73, 73);
		gfx.PutPixel(21 + int_x, 5 + int_y, 73, 73, 73);
		gfx.PutPixel(22 + int_x, 5 + int_y, 73, 73, 73);
		gfx.PutPixel(23 + int_x, 5 + int_y, 73, 73, 73);
		gfx.PutPixel(24 + int_x, 5 + int_y, 73, 73, 73);
		gfx.PutPixel(25 + int_x, 5 + int_y, 73, 73, 73);
		gfx.PutPixel(26 + int_x, 5 + int_y, 75, 75, 75);
		gfx.PutPixel(27 + int_x, 5 + int_y, 65, 65, 65);
		gfx.PutPixel(28 + int_x, 5 + int_y, 43, 43, 43);
		gfx.PutPixel(29 + int_x, 5 + int_y, 45, 45, 45);
		gfx.PutPixel(30 + int_x, 5 + int_y, 22, 22, 22);
		gfx.PutPixel(5 + int_x, 6 + int_y, 24, 24, 24);
		gfx.PutPixel(6 + int_x, 6 + int_y, 68, 68, 68);
		gfx.PutPixel(7 + int_x, 6 + int_y, 65, 65, 65);
		gfx.PutPixel(8 + int_x, 6 + int_y, 62, 62, 62);
		gfx.PutPixel(9 + int_x, 6 + int_y, 61, 61, 61);
		gfx.PutPixel(10 + int_x, 6 + int_y, 61, 61, 61);
		gfx.PutPixel(11 + int_x, 6 + int_y, 82, 82, 82);
		gfx.PutPixel(12 + int_x, 6 + int_y, 88, 88, 88);
		gfx.PutPixel(13 + int_x, 6 + int_y, 87, 87, 87);
		gfx.PutPixel(14 + int_x, 6 + int_y, 87, 87, 87);
		gfx.PutPixel(15 + int_x, 6 + int_y, 87, 87, 87);
		gfx.PutPixel(16 + int_x, 6 + int_y, 87, 87, 87);
		gfx.PutPixel(17 + int_x, 6 + int_y, 87, 87, 87);
		gfx.PutPixel(18 + int_x, 6 + int_y, 87, 87, 87);
		gfx.PutPixel(19 + int_x, 6 + int_y, 87, 87, 87);
		gfx.PutPixel(20 + int_x, 6 + int_y, 87, 87, 87);
		gfx.PutPixel(21 + int_x, 6 + int_y, 87, 87, 87);
		gfx.PutPixel(22 + int_x, 6 + int_y, 87, 87, 87);
		gfx.PutPixel(23 + int_x, 6 + int_y, 87, 87, 87);
		gfx.PutPixel(24 + int_x, 6 + int_y, 87, 87, 87);
		gfx.PutPixel(25 + int_x, 6 + int_y, 87, 87, 87);
		gfx.PutPixel(26 + int_x, 6 + int_y, 86, 86, 86);
		gfx.PutPixel(27 + int_x, 6 + int_y, 88, 88, 88);
		gfx.PutPixel(28 + int_x, 6 + int_y, 90, 90, 90);
		gfx.PutPixel(29 + int_x, 6 + int_y, 96, 96, 96);
		gfx.PutPixel(30 + int_x, 6 + int_y, 46, 46, 46);
		gfx.PutPixel(5 + int_x, 7 + int_y, 23, 23, 23);
		gfx.PutPixel(6 + int_x, 7 + int_y, 64, 64, 64);
		gfx.PutPixel(7 + int_x, 7 + int_y, 61, 61, 61);
		gfx.PutPixel(8 + int_x, 7 + int_y, 60, 60, 60);
		gfx.PutPixel(9 + int_x, 7 + int_y, 60, 60, 60);
		gfx.PutPixel(10 + int_x, 7 + int_y, 60, 60, 60);
		gfx.PutPixel(11 + int_x, 7 + int_y, 81, 81, 81);
		gfx.PutPixel(12 + int_x, 7 + int_y, 86, 86, 86);
		gfx.PutPixel(13 + int_x, 7 + int_y, 85, 85, 85);
		gfx.PutPixel(14 + int_x, 7 + int_y, 85, 85, 85);
		gfx.PutPixel(15 + int_x, 7 + int_y, 85, 85, 85);
		gfx.PutPixel(16 + int_x, 7 + int_y, 85, 85, 85);
		gfx.PutPixel(17 + int_x, 7 + int_y, 85, 85, 85);
		gfx.PutPixel(18 + int_x, 7 + int_y, 85, 85, 85);
		gfx.PutPixel(19 + int_x, 7 + int_y, 85, 85, 85);
		gfx.PutPixel(20 + int_x, 7 + int_y, 85, 85, 85);
		gfx.PutPixel(21 + int_x, 7 + int_y, 85, 85, 85);
		gfx.PutPixel(22 + int_x, 7 + int_y, 85, 85, 85);
		gfx.PutPixel(23 + int_x, 7 + int_y, 85, 85, 85);
		gfx.PutPixel(24 + int_x, 7 + int_y, 85, 85, 85);
		gfx.PutPixel(25 + int_x, 7 + int_y, 85, 85, 85);
		gfx.PutPixel(26 + int_x, 7 + int_y, 85, 85, 85);
		gfx.PutPixel(27 + int_x, 7 + int_y, 85, 85, 85);
		gfx.PutPixel(28 + int_x, 7 + int_y, 85, 85, 85);
		gfx.PutPixel(29 + int_x, 7 + int_y, 90, 90, 90);
		gfx.PutPixel(30 + int_x, 7 + int_y, 43, 43, 43);
		gfx.PutPixel(5 + int_x, 8 + int_y, 23, 23, 23);
		gfx.PutPixel(6 + int_x, 8 + int_y, 64, 64, 64);
		gfx.PutPixel(7 + int_x, 8 + int_y, 60, 60, 60);
		gfx.PutPixel(8 + int_x, 8 + int_y, 72, 72, 72);
		gfx.PutPixel(9 + int_x, 8 + int_y, 80, 80, 80);
		gfx.PutPixel(10 + int_x, 8 + int_y, 79, 79, 79);
		gfx.PutPixel(11 + int_x, 8 + int_y, 84, 84, 84);
		gfx.PutPixel(12 + int_x, 8 + int_y, 85, 85, 85);
		gfx.PutPixel(13 + int_x, 8 + int_y, 85, 85, 85);
		gfx.PutPixel(14 + int_x, 8 + int_y, 85, 85, 85);
		gfx.PutPixel(15 + int_x, 8 + int_y, 85, 85, 85);
		gfx.PutPixel(16 + int_x, 8 + int_y, 85, 85, 85);
		gfx.PutPixel(17 + int_x, 8 + int_y, 85, 85, 85);
		gfx.PutPixel(18 + int_x, 8 + int_y, 85, 85, 85);
		gfx.PutPixel(19 + int_x, 8 + int_y, 85, 85, 85);
		gfx.PutPixel(20 + int_x, 8 + int_y, 85, 85, 85);
		gfx.PutPixel(21 + int_x, 8 + int_y, 85, 85, 85);
		gfx.PutPixel(22 + int_x, 8 + int_y, 85, 85, 85);
		gfx.PutPixel(23 + int_x, 8 + int_y, 85, 85, 85);
		gfx.PutPixel(24 + int_x, 8 + int_y, 85, 85, 85);
		gfx.PutPixel(25 + int_x, 8 + int_y, 85, 85, 85);
		gfx.PutPixel(26 + int_x, 8 + int_y, 85, 85, 85);
		gfx.PutPixel(27 + int_x, 8 + int_y, 85, 85, 85);
		gfx.PutPixel(28 + int_x, 8 + int_y, 85, 85, 85);
		gfx.PutPixel(29 + int_x, 8 + int_y, 90, 90, 90);
		gfx.PutPixel(30 + int_x, 8 + int_y, 43, 43, 43);
		gfx.PutPixel(5 + int_x, 9 + int_y, 23, 23, 23);
		gfx.PutPixel(6 + int_x, 9 + int_y, 65, 65, 65);
		gfx.PutPixel(7 + int_x, 9 + int_y, 61, 61, 61);
		gfx.PutPixel(8 + int_x, 9 + int_y, 78, 78, 78);
		gfx.PutPixel(9 + int_x, 9 + int_y, 89, 89, 89);
		gfx.PutPixel(10 + int_x, 9 + int_y, 88, 88, 88);
		gfx.PutPixel(11 + int_x, 9 + int_y, 87, 87, 87);
		gfx.PutPixel(12 + int_x, 9 + int_y, 87, 87, 87);
		gfx.PutPixel(13 + int_x, 9 + int_y, 87, 87, 87);
		gfx.PutPixel(14 + int_x, 9 + int_y, 87, 87, 87);
		gfx.PutPixel(15 + int_x, 9 + int_y, 87, 87, 87);
		gfx.PutPixel(16 + int_x, 9 + int_y, 87, 87, 87);
		gfx.PutPixel(17 + int_x, 9 + int_y, 87, 87, 87);
		gfx.PutPixel(18 + int_x, 9 + int_y, 87, 87, 87);
		gfx.PutPixel(19 + int_x, 9 + int_y, 87, 87, 87);
		gfx.PutPixel(20 + int_x, 9 + int_y, 87, 87, 87);
		gfx.PutPixel(21 + int_x, 9 + int_y, 87, 87, 87);
		gfx.PutPixel(22 + int_x, 9 + int_y, 87, 87, 87);
		gfx.PutPixel(23 + int_x, 9 + int_y, 87, 87, 87);
		gfx.PutPixel(24 + int_x, 9 + int_y, 87, 87, 87);
		gfx.PutPixel(25 + int_x, 9 + int_y, 87, 87, 87);
		gfx.PutPixel(26 + int_x, 9 + int_y, 87, 87, 87);
		gfx.PutPixel(27 + int_x, 9 + int_y, 87, 87, 87);
		gfx.PutPixel(28 + int_x, 9 + int_y, 87, 87, 87);
		gfx.PutPixel(29 + int_x, 9 + int_y, 92, 92, 92);
		gfx.PutPixel(30 + int_x, 9 + int_y, 43, 43, 43);
		gfx.PutPixel(3 + int_x, 10 + int_y, 4, 4, 4);
		gfx.PutPixel(4 + int_x, 10 + int_y, 5, 5, 5);
		gfx.PutPixel(5 + int_x, 10 + int_y, 24, 24, 24);
		gfx.PutPixel(6 + int_x, 10 + int_y, 59, 59, 59);
		gfx.PutPixel(7 + int_x, 10 + int_y, 56, 56, 56);
		gfx.PutPixel(8 + int_x, 10 + int_y, 71, 71, 71);
		gfx.PutPixel(9 + int_x, 10 + int_y, 80, 80, 80);
		gfx.PutPixel(10 + int_x, 10 + int_y, 79, 79, 79);
		gfx.PutPixel(11 + int_x, 10 + int_y, 79, 79, 79);
		gfx.PutPixel(12 + int_x, 10 + int_y, 79, 79, 79);
		gfx.PutPixel(13 + int_x, 10 + int_y, 79, 79, 79);
		gfx.PutPixel(14 + int_x, 10 + int_y, 79, 79, 79);
		gfx.PutPixel(15 + int_x, 10 + int_y, 79, 79, 79);
		gfx.PutPixel(16 + int_x, 10 + int_y, 79, 79, 79);
		gfx.PutPixel(17 + int_x, 10 + int_y, 79, 79, 79);
		gfx.PutPixel(18 + int_x, 10 + int_y, 79, 79, 79);
		gfx.PutPixel(19 + int_x, 10 + int_y, 79, 79, 79);
		gfx.PutPixel(20 + int_x, 10 + int_y, 79, 79, 79);
		gfx.PutPixel(21 + int_x, 10 + int_y, 79, 79, 79);
		gfx.PutPixel(22 + int_x, 10 + int_y, 79, 79, 79);
		gfx.PutPixel(23 + int_x, 10 + int_y, 79, 79, 79);
		gfx.PutPixel(24 + int_x, 10 + int_y, 79, 79, 79);
		gfx.PutPixel(25 + int_x, 10 + int_y, 79, 79, 79);
		gfx.PutPixel(26 + int_x, 10 + int_y, 79, 79, 79);
		gfx.PutPixel(27 + int_x, 10 + int_y, 79, 79, 79);
		gfx.PutPixel(28 + int_x, 10 + int_y, 79, 79, 79);
		gfx.PutPixel(29 + int_x, 10 + int_y, 84, 84, 84);
		gfx.PutPixel(30 + int_x, 10 + int_y, 43, 43, 43);
		gfx.PutPixel(31 + int_x, 10 + int_y, 6, 6, 6);
		gfx.PutPixel(32 + int_x, 10 + int_y, 6, 6, 6);
		gfx.PutPixel(33 + int_x, 10 + int_y, 3, 3, 3);
		gfx.PutPixel(2 + int_x, 11 + int_y, 8, 8, 8);
		gfx.PutPixel(3 + int_x, 11 + int_y, 56, 56, 56);
		gfx.PutPixel(4 + int_x, 11 + int_y, 60, 60, 60);
		gfx.PutPixel(5 + int_x, 11 + int_y, 37, 37, 37);
		gfx.PutPixel(6 + int_x, 11 + int_y, 5, 5, 5);
		gfx.PutPixel(7 + int_x, 11 + int_y, 4, 4, 4);
		gfx.PutPixel(8 + int_x, 11 + int_y, 5, 5, 5);
		gfx.PutPixel(9 + int_x, 11 + int_y, 6, 6, 6);
		gfx.PutPixel(10 + int_x, 11 + int_y, 6, 6, 6);
		gfx.PutPixel(11 + int_x, 11 + int_y, 6, 6, 6);
		gfx.PutPixel(12 + int_x, 11 + int_y, 6, 6, 6);
		gfx.PutPixel(13 + int_x, 11 + int_y, 6, 6, 6);
		gfx.PutPixel(14 + int_x, 11 + int_y, 6, 6, 6);
		gfx.PutPixel(15 + int_x, 11 + int_y, 6, 6, 6);
		gfx.PutPixel(16 + int_x, 11 + int_y, 6, 6, 6);
		gfx.PutPixel(17 + int_x, 11 + int_y, 6, 6, 6);
		gfx.PutPixel(18 + int_x, 11 + int_y, 6, 6, 6);
		gfx.PutPixel(19 + int_x, 11 + int_y, 6, 6, 6);
		gfx.PutPixel(20 + int_x, 11 + int_y, 6, 6, 6);
		gfx.PutPixel(21 + int_x, 11 + int_y, 6, 6, 6);
		gfx.PutPixel(22 + int_x, 11 + int_y, 6, 6, 6);
		gfx.PutPixel(23 + int_x, 11 + int_y, 6, 6, 6);
		gfx.PutPixel(24 + int_x, 11 + int_y, 6, 6, 6);
		gfx.PutPixel(25 + int_x, 11 + int_y, 6, 6, 6);
		gfx.PutPixel(26 + int_x, 11 + int_y, 6, 6, 6);
		gfx.PutPixel(27 + int_x, 11 + int_y, 6, 6, 6);
		gfx.PutPixel(28 + int_x, 11 + int_y, 6, 6, 6);
		gfx.PutPixel(29 + int_x, 11 + int_y, 6, 6, 6);
		gfx.PutPixel(30 + int_x, 11 + int_y, 43, 43, 43);
		gfx.PutPixel(31 + int_x, 11 + int_y, 85, 85, 85);
		gfx.PutPixel(32 + int_x, 11 + int_y, 82, 82, 82);
		gfx.PutPixel(33 + int_x, 11 + int_y, 20, 20, 20);
		gfx.PutPixel(2 + int_x, 12 + int_y, 10, 10, 10);
		gfx.PutPixel(3 + int_x, 12 + int_y, 61, 61, 61);
		gfx.PutPixel(4 + int_x, 12 + int_y, 66, 66, 66);
		gfx.PutPixel(5 + int_x, 12 + int_y, 38, 38, 38);
		gfx.PutPixel(30 + int_x, 12 + int_y, 43, 43, 43);
		gfx.PutPixel(31 + int_x, 12 + int_y, 93, 93, 93);
		gfx.PutPixel(32 + int_x, 12 + int_y, 90, 90, 90);
		gfx.PutPixel(33 + int_x, 12 + int_y, 22, 22, 22);
		gfx.PutPixel(2 + int_x, 13 + int_y, 10, 10, 10);
		gfx.PutPixel(3 + int_x, 13 + int_y, 60, 60, 60);
		gfx.PutPixel(4 + int_x, 13 + int_y, 65, 65, 65);
		gfx.PutPixel(5 + int_x, 13 + int_y, 38, 38, 38);
		gfx.PutPixel(8 + int_x, 13 + int_y, 41, 30, 20);
		gfx.PutPixel(9 + int_x, 13 + int_y, 66, 51, 35);
		gfx.PutPixel(10 + int_x, 13 + int_y, 65, 48, 33);
		gfx.PutPixel(11 + int_x, 13 + int_y, 11, 8, 5);
		gfx.PutPixel(13 + int_x, 13 + int_y, 5, 3, 2);
		gfx.PutPixel(14 + int_x, 13 + int_y, 61, 45, 31);
		gfx.PutPixel(15 + int_x, 13 + int_y, 66, 49, 34);
		gfx.PutPixel(16 + int_x, 13 + int_y, 66, 48, 33);
		gfx.PutPixel(17 + int_x, 13 + int_y, 66, 48, 33);
		gfx.PutPixel(18 + int_x, 13 + int_y, 66, 48, 33);
		gfx.PutPixel(19 + int_x, 13 + int_y, 66, 48, 33);
		gfx.PutPixel(20 + int_x, 13 + int_y, 66, 48, 33);
		gfx.PutPixel(21 + int_x, 13 + int_y, 66, 50, 34);
		gfx.PutPixel(22 + int_x, 13 + int_y, 17, 12, 9);
		gfx.PutPixel(24 + int_x, 13 + int_y, 5, 3, 2);
		gfx.PutPixel(25 + int_x, 13 + int_y, 61, 45, 31);
		gfx.PutPixel(26 + int_x, 13 + int_y, 66, 51, 35);
		gfx.PutPixel(27 + int_x, 13 + int_y, 49, 36, 25);
		gfx.PutPixel(30 + int_x, 13 + int_y, 43, 43, 43);
		gfx.PutPixel(31 + int_x, 13 + int_y, 91, 91, 91);
		gfx.PutPixel(32 + int_x, 13 + int_y, 88, 88, 88);
		gfx.PutPixel(33 + int_x, 13 + int_y, 22, 22, 22);
		gfx.PutPixel(2 + int_x, 14 + int_y, 10, 10, 10);
		gfx.PutPixel(3 + int_x, 14 + int_y, 60, 60, 60);
		gfx.PutPixel(4 + int_x, 14 + int_y, 65, 65, 65);
		gfx.PutPixel(5 + int_x, 14 + int_y, 38, 38, 38);
		gfx.PutPixel(8 + int_x, 14 + int_y, 164, 120, 82);
		gfx.PutPixel(9 + int_x, 14 + int_y, 255, 206, 141);
		gfx.PutPixel(10 + int_x, 14 + int_y, 255, 191, 131);
		gfx.PutPixel(11 + int_x, 14 + int_y, 44, 32, 22);
		gfx.PutPixel(13 + int_x, 14 + int_y, 19, 13, 9);
		gfx.PutPixel(14 + int_x, 14 + int_y, 245, 180, 123);
		gfx.PutPixel(15 + int_x, 14 + int_y, 255, 198, 135);
		gfx.PutPixel(16 + int_x, 14 + int_y, 255, 194, 133);
		gfx.PutPixel(17 + int_x, 14 + int_y, 255, 194, 133);
		gfx.PutPixel(18 + int_x, 14 + int_y, 255, 194, 133);
		gfx.PutPixel(19 + int_x, 14 + int_y, 255, 194, 133);
		gfx.PutPixel(20 + int_x, 14 + int_y, 255, 194, 133);
		gfx.PutPixel(21 + int_x, 14 + int_y, 255, 201, 138);
		gfx.PutPixel(22 + int_x, 14 + int_y, 68, 50, 34);
		gfx.PutPixel(24 + int_x, 14 + int_y, 19, 13, 9);
		gfx.PutPixel(25 + int_x, 14 + int_y, 245, 180, 123);
		gfx.PutPixel(26 + int_x, 14 + int_y, 255, 206, 141);
		gfx.PutPixel(27 + int_x, 14 + int_y, 196, 144, 98);
		gfx.PutPixel(30 + int_x, 14 + int_y, 43, 43, 43);
		gfx.PutPixel(31 + int_x, 14 + int_y, 91, 91, 91);
		gfx.PutPixel(32 + int_x, 14 + int_y, 88, 88, 88);
		gfx.PutPixel(33 + int_x, 14 + int_y, 22, 22, 22);
		gfx.PutPixel(2 + int_x, 15 + int_y, 11, 11, 11);
		gfx.PutPixel(3 + int_x, 15 + int_y, 64, 64, 64);
		gfx.PutPixel(4 + int_x, 15 + int_y, 69, 69, 69);
		gfx.PutPixel(5 + int_x, 15 + int_y, 34, 36, 37);
		gfx.PutPixel(8 + int_x, 15 + int_y, 152, 112, 76);
		gfx.PutPixel(9 + int_x, 15 + int_y, 255, 200, 137);
		gfx.PutPixel(10 + int_x, 15 + int_y, 252, 184, 126);
		gfx.PutPixel(11 + int_x, 15 + int_y, 42, 31, 21);
		gfx.PutPixel(13 + int_x, 15 + int_y, 18, 13, 9);
		gfx.PutPixel(14 + int_x, 15 + int_y, 238, 174, 119);
		gfx.PutPixel(15 + int_x, 15 + int_y, 255, 191, 130);
		gfx.PutPixel(16 + int_x, 15 + int_y, 255, 187, 128);
		gfx.PutPixel(17 + int_x, 15 + int_y, 255, 187, 128);
		gfx.PutPixel(18 + int_x, 15 + int_y, 255, 187, 128);
		gfx.PutPixel(19 + int_x, 15 + int_y, 255, 187, 128);
		gfx.PutPixel(20 + int_x, 15 + int_y, 255, 187, 128);
		gfx.PutPixel(21 + int_x, 15 + int_y, 255, 194, 133);
		gfx.PutPixel(22 + int_x, 15 + int_y, 66, 48, 33);
		gfx.PutPixel(24 + int_x, 15 + int_y, 18, 13, 9);
		gfx.PutPixel(25 + int_x, 15 + int_y, 238, 174, 119);
		gfx.PutPixel(26 + int_x, 15 + int_y, 255, 200, 137);
		gfx.PutPixel(27 + int_x, 15 + int_y, 185, 136, 93);
		gfx.PutPixel(30 + int_x, 15 + int_y, 38, 40, 42);
		gfx.PutPixel(31 + int_x, 15 + int_y, 97, 97, 97);
		gfx.PutPixel(32 + int_x, 15 + int_y, 94, 94, 94);
		gfx.PutPixel(33 + int_x, 15 + int_y, 23, 23, 23);
		gfx.PutPixel(2 + int_x, 16 + int_y, 5, 5, 5);
		gfx.PutPixel(3 + int_x, 16 + int_y, 30, 30, 30);
		gfx.PutPixel(4 + int_x, 16 + int_y, 33, 33, 33);
		gfx.PutPixel(5 + int_x, 16 + int_y, 68, 55, 44);
		gfx.PutPixel(6 + int_x, 16 + int_y, 128, 98, 67);
		gfx.PutPixel(7 + int_x, 16 + int_y, 128, 94, 64);
		gfx.PutPixel(8 + int_x, 16 + int_y, 207, 152, 104);
		gfx.PutPixel(9 + int_x, 16 + int_y, 255, 194, 133);
		gfx.PutPixel(10 + int_x, 16 + int_y, 251, 184, 126);
		gfx.PutPixel(11 + int_x, 16 + int_y, 42, 31, 21);
		gfx.PutPixel(13 + int_x, 16 + int_y, 18, 13, 9);
		gfx.PutPixel(14 + int_x, 16 + int_y, 237, 174, 119);
		gfx.PutPixel(15 + int_x, 16 + int_y, 255, 191, 130);
		gfx.PutPixel(16 + int_x, 16 + int_y, 255, 187, 128);
		gfx.PutPixel(17 + int_x, 16 + int_y, 255, 187, 128);
		gfx.PutPixel(18 + int_x, 16 + int_y, 255, 187, 128);
		gfx.PutPixel(19 + int_x, 16 + int_y, 255, 187, 128);
		gfx.PutPixel(20 + int_x, 16 + int_y, 255, 187, 128);
		gfx.PutPixel(21 + int_x, 16 + int_y, 255, 194, 133);
		gfx.PutPixel(22 + int_x, 16 + int_y, 66, 48, 33);
		gfx.PutPixel(24 + int_x, 16 + int_y, 18, 13, 9);
		gfx.PutPixel(25 + int_x, 16 + int_y, 237, 174, 119);
		gfx.PutPixel(26 + int_x, 16 + int_y, 255, 195, 133);
		gfx.PutPixel(27 + int_x, 16 + int_y, 222, 163, 112);
		gfx.PutPixel(28 + int_x, 16 + int_y, 128, 94, 64);
		gfx.PutPixel(29 + int_x, 16 + int_y, 128, 100, 68);
		gfx.PutPixel(30 + int_x, 16 + int_y, 86, 69, 54);
		gfx.PutPixel(31 + int_x, 16 + int_y, 46, 46, 46);
		gfx.PutPixel(32 + int_x, 16 + int_y, 44, 44, 44);
		gfx.PutPixel(33 + int_x, 16 + int_y, 11, 11, 11);
		gfx.PutPixel(5 + int_x, 17 + int_y, 101, 73, 50);
		gfx.PutPixel(6 + int_x, 17 + int_y, 255, 209, 143);
		gfx.PutPixel(7 + int_x, 17 + int_y, 255, 199, 136);
		gfx.PutPixel(8 + int_x, 17 + int_y, 255, 192, 131);
		gfx.PutPixel(9 + int_x, 17 + int_y, 255, 188, 129);
		gfx.PutPixel(10 + int_x, 17 + int_y, 251, 184, 126);
		gfx.PutPixel(11 + int_x, 17 + int_y, 40, 29, 20);
		gfx.PutPixel(13 + int_x, 17 + int_y, 15, 11, 8);
		gfx.PutPixel(14 + int_x, 17 + int_y, 237, 174, 119);
		gfx.PutPixel(15 + int_x, 17 + int_y, 255, 191, 130);
		gfx.PutPixel(16 + int_x, 17 + int_y, 255, 187, 128);
		gfx.PutPixel(17 + int_x, 17 + int_y, 255, 187, 128);
		gfx.PutPixel(18 + int_x, 17 + int_y, 255, 187, 128);
		gfx.PutPixel(19 + int_x, 17 + int_y, 255, 187, 128);
		gfx.PutPixel(20 + int_x, 17 + int_y, 255, 187, 128);
		gfx.PutPixel(21 + int_x, 17 + int_y, 255, 194, 133);
		gfx.PutPixel(22 + int_x, 17 + int_y, 64, 46, 32);
		gfx.PutPixel(24 + int_x, 17 + int_y, 15, 11, 8);
		gfx.PutPixel(25 + int_x, 17 + int_y, 237, 174, 119);
		gfx.PutPixel(26 + int_x, 17 + int_y, 255, 191, 130);
		gfx.PutPixel(27 + int_x, 17 + int_y, 255, 190, 130);
		gfx.PutPixel(28 + int_x, 17 + int_y, 255, 199, 136);
		gfx.PutPixel(29 + int_x, 17 + int_y, 255, 212, 145);
		gfx.PutPixel(30 + int_x, 17 + int_y, 133, 97, 65);
		gfx.PutPixel(5 + int_x, 18 + int_y, 97, 71, 49);
		gfx.PutPixel(6 + int_x, 18 + int_y, 255, 196, 134);
		gfx.PutPixel(7 + int_x, 18 + int_y, 255, 187, 128);
		gfx.PutPixel(8 + int_x, 18 + int_y, 255, 187, 128);
		gfx.PutPixel(9 + int_x, 18 + int_y, 255, 189, 129);
		gfx.PutPixel(10 + int_x, 18 + int_y, 251, 184, 126);
		gfx.PutPixel(11 + int_x, 18 + int_y, 46, 34, 23);
		gfx.PutPixel(12 + int_x, 18 + int_y, 4, 3, 2);
		gfx.PutPixel(13 + int_x, 18 + int_y, 22, 16, 11);
		gfx.PutPixel(14 + int_x, 18 + int_y, 237, 174, 119);
		gfx.PutPixel(15 + int_x, 18 + int_y, 255, 191, 130);
		gfx.PutPixel(16 + int_x, 18 + int_y, 255, 187, 128);
		gfx.PutPixel(17 + int_x, 18 + int_y, 255, 187, 128);
		gfx.PutPixel(18 + int_x, 18 + int_y, 255, 187, 128);
		gfx.PutPixel(19 + int_x, 18 + int_y, 255, 187, 128);
		gfx.PutPixel(20 + int_x, 18 + int_y, 255, 187, 128);
		gfx.PutPixel(21 + int_x, 18 + int_y, 255, 194, 133);
		gfx.PutPixel(22 + int_x, 18 + int_y, 69, 50, 35);
		gfx.PutPixel(23 + int_x, 18 + int_y, 5, 3, 2);
		gfx.PutPixel(24 + int_x, 18 + int_y, 22, 16, 11);
		gfx.PutPixel(25 + int_x, 18 + int_y, 237, 174, 119);
		gfx.PutPixel(26 + int_x, 18 + int_y, 255, 191, 130);
		gfx.PutPixel(27 + int_x, 18 + int_y, 255, 187, 128);
		gfx.PutPixel(28 + int_x, 18 + int_y, 255, 187, 128);
		gfx.PutPixel(29 + int_x, 18 + int_y, 255, 199, 136);
		gfx.PutPixel(30 + int_x, 18 + int_y, 128, 94, 64);
		gfx.PutPixel(5 + int_x, 19 + int_y, 97, 71, 49);
		gfx.PutPixel(6 + int_x, 19 + int_y, 255, 196, 134);
		gfx.PutPixel(7 + int_x, 19 + int_y, 255, 187, 128);
		gfx.PutPixel(8 + int_x, 19 + int_y, 255, 187, 128);
		gfx.PutPixel(9 + int_x, 19 + int_y, 255, 187, 128);
		gfx.PutPixel(10 + int_x, 19 + int_y, 255, 187, 128);
		gfx.PutPixel(11 + int_x, 19 + int_y, 233, 172, 118);
		gfx.PutPixel(12 + int_x, 19 + int_y, 229, 169, 116);
		gfx.PutPixel(13 + int_x, 19 + int_y, 232, 171, 117);
		gfx.PutPixel(14 + int_x, 19 + int_y, 255, 197, 135);
		gfx.PutPixel(15 + int_x, 19 + int_y, 255, 200, 137);
		gfx.PutPixel(16 + int_x, 19 + int_y, 255, 200, 137);
		gfx.PutPixel(17 + int_x, 19 + int_y, 255, 200, 137);
		gfx.PutPixel(18 + int_x, 19 + int_y, 255, 200, 137);
		gfx.PutPixel(19 + int_x, 19 + int_y, 255, 200, 137);
		gfx.PutPixel(20 + int_x, 19 + int_y, 255, 200, 137);
		gfx.PutPixel(21 + int_x, 19 + int_y, 255, 201, 138);
		gfx.PutPixel(22 + int_x, 19 + int_y, 228, 167, 115);
		gfx.PutPixel(23 + int_x, 19 + int_y, 213, 156, 107);
		gfx.PutPixel(24 + int_x, 19 + int_y, 216, 158, 109);
		gfx.PutPixel(25 + int_x, 19 + int_y, 252, 185, 127);
		gfx.PutPixel(26 + int_x, 19 + int_y, 255, 188, 128);
		gfx.PutPixel(27 + int_x, 19 + int_y, 255, 187, 128);
		gfx.PutPixel(28 + int_x, 19 + int_y, 255, 187, 128);
		gfx.PutPixel(29 + int_x, 19 + int_y, 255, 199, 136);
		gfx.PutPixel(30 + int_x, 19 + int_y, 128, 94, 64);
		gfx.PutPixel(5 + int_x, 20 + int_y, 100, 73, 51);
		gfx.PutPixel(6 + int_x, 20 + int_y, 255, 202, 138);
		gfx.PutPixel(7 + int_x, 20 + int_y, 255, 193, 132);
		gfx.PutPixel(8 + int_x, 20 + int_y, 255, 189, 130);
		gfx.PutPixel(9 + int_x, 20 + int_y, 255, 188, 128);
		gfx.PutPixel(10 + int_x, 20 + int_y, 253, 186, 127);
		gfx.PutPixel(11 + int_x, 20 + int_y, 155, 115, 78);
		gfx.PutPixel(12 + int_x, 20 + int_y, 136, 99, 67);
		gfx.PutPixel(13 + int_x, 20 + int_y, 135, 100, 68);
		gfx.PutPixel(14 + int_x, 20 + int_y, 128, 94, 65);
		gfx.PutPixel(15 + int_x, 20 + int_y, 127, 94, 64);
		gfx.PutPixel(16 + int_x, 20 + int_y, 127, 94, 65);
		gfx.PutPixel(17 + int_x, 20 + int_y, 127, 94, 65);
		gfx.PutPixel(18 + int_x, 20 + int_y, 127, 94, 65);
		gfx.PutPixel(19 + int_x, 20 + int_y, 127, 94, 65);
		gfx.PutPixel(20 + int_x, 20 + int_y, 127, 94, 65);
		gfx.PutPixel(21 + int_x, 20 + int_y, 127, 93, 63);
		gfx.PutPixel(22 + int_x, 20 + int_y, 228, 168, 115);
		gfx.PutPixel(23 + int_x, 20 + int_y, 255, 198, 135);
		gfx.PutPixel(24 + int_x, 20 + int_y, 255, 193, 132);
		gfx.PutPixel(25 + int_x, 20 + int_y, 255, 187, 128);
		gfx.PutPixel(26 + int_x, 20 + int_y, 255, 187, 128);
		gfx.PutPixel(27 + int_x, 20 + int_y, 255, 189, 129);
		gfx.PutPixel(28 + int_x, 20 + int_y, 255, 193, 132);
		gfx.PutPixel(29 + int_x, 20 + int_y, 255, 206, 140);
		gfx.PutPixel(30 + int_x, 20 + int_y, 132, 97, 66);
		gfx.PutPixel(5 + int_x, 21 + int_y, 81, 59, 41);
		gfx.PutPixel(6 + int_x, 21 + int_y, 213, 164, 112);
		gfx.PutPixel(7 + int_x, 21 + int_y, 213, 156, 107);
		gfx.PutPixel(8 + int_x, 21 + int_y, 239, 175, 120);
		gfx.PutPixel(9 + int_x, 21 + int_y, 255, 191, 130);
		gfx.PutPixel(10 + int_x, 21 + int_y, 251, 184, 126);
		gfx.PutPixel(11 + int_x, 21 + int_y, 28, 21, 14);
		gfx.PutPixel(22 + int_x, 21 + int_y, 185, 136, 93);
		gfx.PutPixel(23 + int_x, 21 + int_y, 255, 197, 134);
		gfx.PutPixel(24 + int_x, 21 + int_y, 255, 187, 128);
		gfx.PutPixel(25 + int_x, 21 + int_y, 255, 187, 128);
		gfx.PutPixel(26 + int_x, 21 + int_y, 255, 189, 129);
		gfx.PutPixel(27 + int_x, 21 + int_y, 244, 179, 123);
		gfx.PutPixel(28 + int_x, 21 + int_y, 213, 156, 107);
		gfx.PutPixel(29 + int_x, 21 + int_y, 213, 166, 114);
		gfx.PutPixel(30 + int_x, 21 + int_y, 107, 79, 53);
		gfx.PutPixel(5 + int_x, 22 + int_y, 2, 1, 1);
		gfx.PutPixel(6 + int_x, 22 + int_y, 5, 3, 2);
		gfx.PutPixel(7 + int_x, 22 + int_y, 5, 3, 2);
		gfx.PutPixel(8 + int_x, 22 + int_y, 160, 117, 80);
		gfx.PutPixel(9 + int_x, 22 + int_y, 255, 199, 136);
		gfx.PutPixel(10 + int_x, 22 + int_y, 251, 184, 126);
		gfx.PutPixel(11 + int_x, 22 + int_y, 35, 26, 18);
		gfx.PutPixel(22 + int_x, 22 + int_y, 187, 137, 94);
		gfx.PutPixel(23 + int_x, 22 + int_y, 255, 196, 134);
		gfx.PutPixel(24 + int_x, 22 + int_y, 255, 187, 128);
		gfx.PutPixel(25 + int_x, 22 + int_y, 255, 187, 128);
		gfx.PutPixel(26 + int_x, 22 + int_y, 255, 196, 134);
		gfx.PutPixel(27 + int_x, 22 + int_y, 190, 140, 96);
		gfx.PutPixel(28 + int_x, 22 + int_y, 5, 3, 2);
		gfx.PutPixel(29 + int_x, 22 + int_y, 5, 4, 2);
		gfx.PutPixel(30 + int_x, 22 + int_y, 2, 2, 1);
		gfx.PutPixel(8 + int_x, 23 + int_y, 167, 123, 84);
		gfx.PutPixel(9 + int_x, 23 + int_y, 255, 210, 144);
		gfx.PutPixel(10 + int_x, 23 + int_y, 255, 198, 136);
		gfx.PutPixel(11 + int_x, 23 + int_y, 216, 159, 109);
		gfx.PutPixel(12 + int_x, 23 + int_y, 205, 151, 103);
		gfx.PutPixel(13 + int_x, 23 + int_y, 205, 151, 104);
		gfx.PutPixel(14 + int_x, 23 + int_y, 205, 151, 104);
		gfx.PutPixel(15 + int_x, 23 + int_y, 205, 151, 104);
		gfx.PutPixel(16 + int_x, 23 + int_y, 205, 151, 104);
		gfx.PutPixel(17 + int_x, 23 + int_y, 205, 151, 104);
		gfx.PutPixel(18 + int_x, 23 + int_y, 205, 151, 104);
		gfx.PutPixel(19 + int_x, 23 + int_y, 205, 151, 104);
		gfx.PutPixel(20 + int_x, 23 + int_y, 205, 151, 104);
		gfx.PutPixel(21 + int_x, 23 + int_y, 205, 151, 103);
		gfx.PutPixel(22 + int_x, 23 + int_y, 254, 187, 128);
		gfx.PutPixel(23 + int_x, 23 + int_y, 255, 201, 138);
		gfx.PutPixel(24 + int_x, 23 + int_y, 255, 199, 136);
		gfx.PutPixel(25 + int_x, 23 + int_y, 255, 199, 136);
		gfx.PutPixel(26 + int_x, 23 + int_y, 255, 209, 143);
		gfx.PutPixel(27 + int_x, 23 + int_y, 200, 147, 101);
		gfx.PutPixel(8 + int_x, 24 + int_y, 78, 58, 40);
		gfx.PutPixel(9 + int_x, 24 + int_y, 128, 98, 67);
		gfx.PutPixel(10 + int_x, 24 + int_y, 128, 94, 64);
		gfx.PutPixel(11 + int_x, 24 + int_y, 137, 101, 70);
		gfx.PutPixel(12 + int_x, 24 + int_y, 139, 103, 71);
		gfx.PutPixel(13 + int_x, 24 + int_y, 139, 102, 70);
		gfx.PutPixel(14 + int_x, 24 + int_y, 137, 100, 68);
		gfx.PutPixel(15 + int_x, 24 + int_y, 137, 100, 68);
		gfx.PutPixel(16 + int_x, 24 + int_y, 137, 100, 68);
		gfx.PutPixel(17 + int_x, 24 + int_y, 137, 100, 68);
		gfx.PutPixel(18 + int_x, 24 + int_y, 137, 100, 68);
		gfx.PutPixel(19 + int_x, 24 + int_y, 137, 100, 68);
		gfx.PutPixel(20 + int_x, 24 + int_y, 137, 100, 68);
		gfx.PutPixel(21 + int_x, 24 + int_y, 137, 100, 68);
		gfx.PutPixel(22 + int_x, 24 + int_y, 130, 95, 65);
		gfx.PutPixel(23 + int_x, 24 + int_y, 128, 93, 64);
		gfx.PutPixel(24 + int_x, 24 + int_y, 128, 94, 64);
		gfx.PutPixel(25 + int_x, 24 + int_y, 128, 94, 64);
		gfx.PutPixel(26 + int_x, 24 + int_y, 128, 98, 67);
		gfx.PutPixel(27 + int_x, 24 + int_y, 95, 70, 48);
		gfx.PutPixel(15 + int_x, 25 + int_y, 0, 0, 1);
		gfx.PutPixel(16 + int_x, 25 + int_y, 0, 0, 1);
		gfx.PutPixel(17 + int_x, 25 + int_y, 0, 0, 1);
		gfx.PutPixel(18 + int_x, 25 + int_y, 0, 0, 1);
		gfx.PutPixel(19 + int_x, 25 + int_y, 0, 0, 1);
		gfx.PutPixel(20 + int_x, 25 + int_y, 0, 0, 1);
		gfx.PutPixel(21 + int_x, 25 + int_y, 0, 0, 1);
		gfx.PutPixel(13 + int_x, 26 + int_y, 6, 6, 6);
		gfx.PutPixel(14 + int_x, 26 + int_y, 115, 115, 115);
		gfx.PutPixel(15 + int_x, 26 + int_y, 125, 125, 125);
		gfx.PutPixel(16 + int_x, 26 + int_y, 124, 124, 124);
		gfx.PutPixel(17 + int_x, 26 + int_y, 124, 124, 124);
		gfx.PutPixel(18 + int_x, 26 + int_y, 124, 124, 124);
		gfx.PutPixel(19 + int_x, 26 + int_y, 124, 124, 124);
		gfx.PutPixel(20 + int_x, 26 + int_y, 124, 124, 124);
		gfx.PutPixel(21 + int_x, 26 + int_y, 128, 128, 128);
		gfx.PutPixel(22 + int_x, 26 + int_y, 30, 30, 30);
		gfx.PutPixel(10 + int_x, 27 + int_y, 2, 2, 2);
		gfx.PutPixel(11 + int_x, 27 + int_y, 56, 56, 56);
		gfx.PutPixel(12 + int_x, 27 + int_y, 70, 70, 70);
		gfx.PutPixel(13 + int_x, 27 + int_y, 65, 65, 65);
		gfx.PutPixel(14 + int_x, 27 + int_y, 38, 38, 38);
		gfx.PutPixel(15 + int_x, 27 + int_y, 36, 36, 36);
		gfx.PutPixel(16 + int_x, 27 + int_y, 34, 34, 34);
		gfx.PutPixel(17 + int_x, 27 + int_y, 31, 31, 31);
		gfx.PutPixel(18 + int_x, 27 + int_y, 32, 32, 32);
		gfx.PutPixel(19 + int_x, 27 + int_y, 32, 32, 32);
		gfx.PutPixel(20 + int_x, 27 + int_y, 32, 32, 32);
		gfx.PutPixel(21 + int_x, 27 + int_y, 33, 33, 33);
		gfx.PutPixel(22 + int_x, 27 + int_y, 55, 55, 55);
		gfx.PutPixel(23 + int_x, 27 + int_y, 66, 66, 66);
		gfx.PutPixel(24 + int_x, 27 + int_y, 63, 63, 63);
		gfx.PutPixel(25 + int_x, 27 + int_y, 63, 63, 63);
		gfx.PutPixel(26 + int_x, 27 + int_y, 66, 66, 66);
		gfx.PutPixel(27 + int_x, 27 + int_y, 47, 47, 47);
		gfx.PutPixel(10 + int_x, 28 + int_y, 2, 2, 2);
		gfx.PutPixel(11 + int_x, 28 + int_y, 56, 56, 56);
		gfx.PutPixel(12 + int_x, 28 + int_y, 70, 70, 70);
		gfx.PutPixel(13 + int_x, 28 + int_y, 62, 62, 62);
		gfx.PutPixel(17 + int_x, 28 + int_y, 18, 18, 18);
		gfx.PutPixel(18 + int_x, 28 + int_y, 18, 18, 18);
		gfx.PutPixel(19 + int_x, 28 + int_y, 18, 18, 18);
		gfx.PutPixel(20 + int_x, 28 + int_y, 18, 18, 18);
		gfx.PutPixel(21 + int_x, 28 + int_y, 17, 17, 17);
		gfx.PutPixel(22 + int_x, 28 + int_y, 72, 72, 72);
		gfx.PutPixel(23 + int_x, 28 + int_y, 94, 94, 94);
		gfx.PutPixel(24 + int_x, 28 + int_y, 91, 91, 91);
		gfx.PutPixel(25 + int_x, 28 + int_y, 91, 91, 91);
		gfx.PutPixel(26 + int_x, 28 + int_y, 95, 95, 95);
		gfx.PutPixel(27 + int_x, 28 + int_y, 67, 67, 67);
		gfx.PutPixel(5 + int_x, 29 + int_y, 2, 2, 2);
		gfx.PutPixel(6 + int_x, 29 + int_y, 6, 6, 6);
		gfx.PutPixel(7 + int_x, 29 + int_y, 6, 6, 6);
		gfx.PutPixel(8 + int_x, 29 + int_y, 2, 2, 2);
		gfx.PutPixel(16 + int_x, 29 + int_y, 21, 21, 21);
		gfx.PutPixel(17 + int_x, 29 + int_y, 85, 85, 85);
		gfx.PutPixel(18 + int_x, 29 + int_y, 82, 82, 82);
		gfx.PutPixel(19 + int_x, 29 + int_y, 82, 82, 82);
		gfx.PutPixel(20 + int_x, 29 + int_y, 82, 82, 82);
		gfx.PutPixel(21 + int_x, 29 + int_y, 82, 82, 82);
		gfx.PutPixel(22 + int_x, 29 + int_y, 80, 80, 80);
		gfx.PutPixel(23 + int_x, 29 + int_y, 79, 79, 79);
		gfx.PutPixel(24 + int_x, 29 + int_y, 79, 79, 79);
		gfx.PutPixel(25 + int_x, 29 + int_y, 79, 79, 79);
		gfx.PutPixel(26 + int_x, 29 + int_y, 83, 83, 83);
		gfx.PutPixel(27 + int_x, 29 + int_y, 58, 58, 58);
		gfx.PutPixel(5 + int_x, 30 + int_y, 30, 30, 30);
		gfx.PutPixel(6 + int_x, 30 + int_y, 83, 83, 83);
		gfx.PutPixel(7 + int_x, 30 + int_y, 83, 83, 83);
		gfx.PutPixel(8 + int_x, 30 + int_y, 30, 30, 30);
		gfx.PutPixel(11 + int_x, 30 + int_y, 1, 1, 3);
		gfx.PutPixel(12 + int_x, 30 + int_y, 0, 0, 4);
		gfx.PutPixel(13 + int_x, 30 + int_y, 0, 0, 3);
		gfx.PutPixel(16 + int_x, 30 + int_y, 2, 2, 2);
		gfx.PutPixel(17 + int_x, 30 + int_y, 6, 6, 6);
		gfx.PutPixel(5 + int_x, 31 + int_y, 34, 34, 34);
		gfx.PutPixel(6 + int_x, 31 + int_y, 95, 95, 95);
		gfx.PutPixel(7 + int_x, 31 + int_y, 95, 95, 95);
		gfx.PutPixel(8 + int_x, 31 + int_y, 34, 34, 34);
		gfx.PutPixel(11 + int_x, 31 + int_y, 0, 0, 3);
		gfx.PutPixel(12 + int_x, 31 + int_y, 46, 33, 11);
		gfx.PutPixel(13 + int_x, 31 + int_y, 89, 60, 9);
		gfx.PutPixel(14 + int_x, 31 + int_y, 0, 1, 0);
		gfx.PutPixel(17 + int_x, 31 + int_y, 4, 4, 4);
		gfx.PutPixel(18 + int_x, 31 + int_y, 78, 78, 78);
		gfx.PutPixel(19 + int_x, 31 + int_y, 85, 85, 85);
		gfx.PutPixel(20 + int_x, 31 + int_y, 84, 84, 84);
		gfx.PutPixel(21 + int_x, 31 + int_y, 84, 84, 84);
		gfx.PutPixel(22 + int_x, 31 + int_y, 84, 84, 84);
		gfx.PutPixel(23 + int_x, 31 + int_y, 84, 84, 84);
		gfx.PutPixel(24 + int_x, 31 + int_y, 84, 84, 84);
		gfx.PutPixel(25 + int_x, 31 + int_y, 84, 84, 84);
		gfx.PutPixel(26 + int_x, 31 + int_y, 84, 84, 84);
		gfx.PutPixel(27 + int_x, 31 + int_y, 84, 84, 84);
		gfx.PutPixel(28 + int_x, 31 + int_y, 85, 85, 85);
		gfx.PutPixel(29 + int_x, 31 + int_y, 85, 85, 85);
		gfx.PutPixel(30 + int_x, 31 + int_y, 85, 85, 85);
		gfx.PutPixel(31 + int_x, 31 + int_y, 85, 85, 85);
		gfx.PutPixel(32 + int_x, 31 + int_y, 89, 89, 89);
		gfx.PutPixel(33 + int_x, 31 + int_y, 22, 22, 22);
		gfx.PutPixel(5 + int_x, 32 + int_y, 24, 24, 24);
		gfx.PutPixel(6 + int_x, 32 + int_y, 66, 66, 66);
		gfx.PutPixel(7 + int_x, 32 + int_y, 66, 66, 66);
		gfx.PutPixel(8 + int_x, 32 + int_y, 22, 23, 23);
		gfx.PutPixel(9 + int_x, 32 + int_y, 14, 11, 9);
		gfx.PutPixel(10 + int_x, 32 + int_y, 61, 45, 31);
		gfx.PutPixel(11 + int_x, 32 + int_y, 9, 8, 9);
		gfx.PutPixel(12 + int_x, 32 + int_y, 55, 38, 9);
		gfx.PutPixel(13 + int_x, 32 + int_y, 107, 74, 8);
		gfx.PutPixel(14 + int_x, 32 + int_y, 39, 29, 3);
		gfx.PutPixel(15 + int_x, 32 + int_y, 38, 26, 3);
		gfx.PutPixel(16 + int_x, 32 + int_y, 26, 19, 2);
		gfx.PutPixel(17 + int_x, 32 + int_y, 7, 7, 7);
		gfx.PutPixel(18 + int_x, 32 + int_y, 95, 95, 95);
		gfx.PutPixel(19 + int_x, 32 + int_y, 104, 104, 104);
		gfx.PutPixel(20 + int_x, 32 + int_y, 102, 102, 102);
		gfx.PutPixel(21 + int_x, 32 + int_y, 102, 102, 102);
		gfx.PutPixel(22 + int_x, 32 + int_y, 102, 102, 102);
		gfx.PutPixel(23 + int_x, 32 + int_y, 102, 102, 102);
		gfx.PutPixel(24 + int_x, 32 + int_y, 102, 102, 102);
		gfx.PutPixel(25 + int_x, 32 + int_y, 102, 103, 103);
		gfx.PutPixel(26 + int_x, 32 + int_y, 102, 102, 103);
		gfx.PutPixel(27 + int_x, 32 + int_y, 101, 101, 103);
		gfx.PutPixel(28 + int_x, 32 + int_y, 101, 101, 103);
		gfx.PutPixel(29 + int_x, 32 + int_y, 101, 101, 103);
		gfx.PutPixel(30 + int_x, 32 + int_y, 102, 101, 103);
		gfx.PutPixel(31 + int_x, 32 + int_y, 101, 102, 103);
		gfx.PutPixel(32 + int_x, 32 + int_y, 107, 106, 107);
		gfx.PutPixel(33 + int_x, 32 + int_y, 26, 26, 27);
		gfx.PutPixel(8 + int_x, 33 + int_y, 1, 1, 1);
		gfx.PutPixel(9 + int_x, 33 + int_y, 68, 51, 44);
		gfx.PutPixel(10 + int_x, 33 + int_y, 244, 179, 121);
		gfx.PutPixel(11 + int_x, 33 + int_y, 40, 29, 19);
		gfx.PutPixel(13 + int_x, 33 + int_y, 4, 4, 1);
		gfx.PutPixel(14 + int_x, 33 + int_y, 123, 87, 9);
		gfx.PutPixel(15 + int_x, 33 + int_y, 142, 100, 11);
		gfx.PutPixel(16 + int_x, 33 + int_y, 99, 69, 8);
		gfx.PutPixel(26 + int_x, 33 + int_y, 0, 0, 2);
		gfx.PutPixel(27 + int_x, 33 + int_y, 0, 0, 1);
		gfx.PutPixel(32 + int_x, 33 + int_y, 0, 0, 1);
		gfx.PutPixel(8 + int_x, 34 + int_y, 128, 95, 67);
		gfx.PutPixel(9 + int_x, 34 + int_y, 232, 171, 120);
		gfx.PutPixel(10 + int_x, 34 + int_y, 243, 179, 123);
		gfx.PutPixel(11 + int_x, 34 + int_y, 41, 30, 20);
		gfx.PutPixel(13 + int_x, 34 + int_y, 1, 1, 0);
		gfx.PutPixel(14 + int_x, 34 + int_y, 22, 15, 3);
		gfx.PutPixel(15 + int_x, 34 + int_y, 25, 17, 3);
		gfx.PutPixel(16 + int_x, 34 + int_y, 17, 12, 2);
		gfx.PutPixel(25 + int_x, 34 + int_y, 0, 0, 4);
		gfx.PutPixel(26 + int_x, 34 + int_y, 75, 51, 11);
		gfx.PutPixel(27 + int_x, 34 + int_y, 127, 85, 12);
		gfx.PutPixel(28 + int_x, 34 + int_y, 117, 82, 8);
		gfx.PutPixel(29 + int_x, 34 + int_y, 117, 82, 9);
		gfx.PutPixel(30 + int_x, 34 + int_y, 121, 83, 10);
		gfx.PutPixel(31 + int_x, 34 + int_y, 111, 76, 14);
		gfx.PutPixel(32 + int_x, 34 + int_y, 8, 8, 8);
		gfx.PutPixel(33 + int_x, 34 + int_y, 0, 0, 2);
		gfx.PutPixel(8 + int_x, 35 + int_y, 77, 57, 38);
		gfx.PutPixel(9 + int_x, 35 + int_y, 130, 95, 63);
		gfx.PutPixel(10 + int_x, 35 + int_y, 113, 83, 57);
		gfx.PutPixel(11 + int_x, 35 + int_y, 20, 14, 9);
		gfx.PutPixel(19 + int_x, 35 + int_y, 22, 22, 22);
		gfx.PutPixel(20 + int_x, 35 + int_y, 45, 45, 45);
		gfx.PutPixel(21 + int_x, 35 + int_y, 43, 43, 43);
		gfx.PutPixel(22 + int_x, 35 + int_y, 43, 43, 43);
		gfx.PutPixel(23 + int_x, 35 + int_y, 44, 44, 44);
		gfx.PutPixel(24 + int_x, 35 + int_y, 40, 40, 40);
		gfx.PutPixel(25 + int_x, 35 + int_y, 3, 3, 6);
		gfx.PutPixel(26 + int_x, 35 + int_y, 45, 30, 5);
		gfx.PutPixel(27 + int_x, 35 + int_y, 71, 49, 5);
		gfx.PutPixel(28 + int_x, 35 + int_y, 58, 40, 0);
		gfx.PutPixel(29 + int_x, 35 + int_y, 58, 40, 0);
		gfx.PutPixel(30 + int_x, 35 + int_y, 65, 46, 2);
		gfx.PutPixel(31 + int_x, 35 + int_y, 66, 45, 6);
		gfx.PutPixel(32 + int_x, 35 + int_y, 5, 4, 5);
		gfx.PutPixel(13 + int_x, 36 + int_y, 2, 2, 2);
		gfx.PutPixel(14 + int_x, 36 + int_y, 20, 21, 20);
		gfx.PutPixel(15 + int_x, 36 + int_y, 24, 24, 24);
		gfx.PutPixel(16 + int_x, 36 + int_y, 16, 16, 16);
		gfx.PutPixel(19 + int_x, 36 + int_y, 46, 46, 46);
		gfx.PutPixel(20 + int_x, 36 + int_y, 96, 96, 96);
		gfx.PutPixel(21 + int_x, 36 + int_y, 91, 91, 91);
		gfx.PutPixel(22 + int_x, 36 + int_y, 91, 91, 91);
		gfx.PutPixel(23 + int_x, 36 + int_y, 93, 93, 93);
		gfx.PutPixel(24 + int_x, 36 + int_y, 84, 84, 84);
		gfx.PutPixel(25 + int_x, 36 + int_y, 6, 6, 6);
		gfx.PutPixel(27 + int_x, 36 + int_y, 8, 7, 8);
		gfx.PutPixel(28 + int_x, 36 + int_y, 58, 45, 34);
		gfx.PutPixel(29 + int_x, 36 + int_y, 58, 46, 35);
		gfx.PutPixel(30 + int_x, 36 + int_y, 25, 18, 16);
		gfx.PutPixel(13 + int_x, 37 + int_y, 6, 6, 6);
		gfx.PutPixel(14 + int_x, 37 + int_y, 85, 85, 85);
		gfx.PutPixel(15 + int_x, 37 + int_y, 98, 98, 98);
		gfx.PutPixel(16 + int_x, 37 + int_y, 68, 68, 68);
		gfx.PutPixel(19 + int_x, 37 + int_y, 45, 45, 45);
		gfx.PutPixel(20 + int_x, 37 + int_y, 93, 93, 93);
		gfx.PutPixel(21 + int_x, 37 + int_y, 88, 88, 88);
		gfx.PutPixel(22 + int_x, 37 + int_y, 88, 88, 88);
		gfx.PutPixel(23 + int_x, 37 + int_y, 90, 90, 90);
		gfx.PutPixel(24 + int_x, 37 + int_y, 82, 82, 82);
		gfx.PutPixel(25 + int_x, 37 + int_y, 6, 6, 6);
		gfx.PutPixel(27 + int_x, 37 + int_y, 71, 52, 36);
		gfx.PutPixel(28 + int_x, 37 + int_y, 255, 208, 142);
		gfx.PutPixel(29 + int_x, 37 + int_y, 255, 214, 146);
		gfx.PutPixel(30 + int_x, 37 + int_y, 137, 100, 69);
		gfx.PutPixel(13 + int_x, 38 + int_y, 2, 2, 2);
		gfx.PutPixel(14 + int_x, 38 + int_y, 21, 21, 21);
		gfx.PutPixel(15 + int_x, 38 + int_y, 24, 24, 24);
		gfx.PutPixel(16 + int_x, 38 + int_y, 16, 16, 16);
		gfx.PutPixel(19 + int_x, 38 + int_y, 11, 11, 11);
		gfx.PutPixel(20 + int_x, 38 + int_y, 23, 23, 23);
		gfx.PutPixel(21 + int_x, 38 + int_y, 22, 22, 22);
		gfx.PutPixel(22 + int_x, 38 + int_y, 22, 22, 22);
		gfx.PutPixel(23 + int_x, 38 + int_y, 22, 22, 22);
		gfx.PutPixel(24 + int_x, 38 + int_y, 20, 20, 20);
		gfx.PutPixel(25 + int_x, 38 + int_y, 2, 2, 2);
		gfx.PutPixel(27 + int_x, 38 + int_y, 17, 13, 9);
		gfx.PutPixel(28 + int_x, 38 + int_y, 66, 51, 35);
		gfx.PutPixel(29 + int_x, 38 + int_y, 66, 53, 36);
		gfx.PutPixel(30 + int_x, 38 + int_y, 33, 25, 16);
		gfx.PutPixel(11 + int_x, 40 + int_y, 5, 5, 5);
		gfx.PutPixel(12 + int_x, 40 + int_y, 6, 6, 6);
		gfx.PutPixel(13 + int_x, 40 + int_y, 6, 6, 6);
		gfx.PutPixel(14 + int_x, 40 + int_y, 9, 9, 9);
		gfx.PutPixel(15 + int_x, 40 + int_y, 10, 10, 9);
		gfx.PutPixel(16 + int_x, 40 + int_y, 10, 10, 9);
		gfx.PutPixel(17 + int_x, 40 + int_y, 10, 10, 9);
		gfx.PutPixel(18 + int_x, 40 + int_y, 10, 10, 9);
		gfx.PutPixel(19 + int_x, 40 + int_y, 10, 10, 9);
		gfx.PutPixel(20 + int_x, 40 + int_y, 10, 10, 9);
		gfx.PutPixel(21 + int_x, 40 + int_y, 10, 10, 9);
		gfx.PutPixel(22 + int_x, 40 + int_y, 10, 10, 9);
		gfx.PutPixel(23 + int_x, 40 + int_y, 10, 10, 9);
		gfx.PutPixel(24 + int_x, 40 + int_y, 9, 9, 8);
		gfx.PutPixel(25 + int_x, 40 + int_y, 1, 1, 1);
		gfx.PutPixel(10 + int_x, 41 + int_y, 2, 2, 2);
		gfx.PutPixel(11 + int_x, 41 + int_y, 66, 66, 66);
		gfx.PutPixel(12 + int_x, 41 + int_y, 81, 81, 81);
		gfx.PutPixel(13 + int_x, 41 + int_y, 83, 83, 82);
		gfx.PutPixel(14 + int_x, 41 + int_y, 125, 125, 114);
		gfx.PutPixel(15 + int_x, 41 + int_y, 129, 129, 118);
		gfx.PutPixel(16 + int_x, 41 + int_y, 128, 128, 117);
		gfx.PutPixel(17 + int_x, 41 + int_y, 128, 128, 117);
		gfx.PutPixel(18 + int_x, 41 + int_y, 128, 128, 117);
		gfx.PutPixel(19 + int_x, 41 + int_y, 128, 128, 117);
		gfx.PutPixel(20 + int_x, 41 + int_y, 128, 128, 117);
		gfx.PutPixel(21 + int_x, 41 + int_y, 128, 128, 117);
		gfx.PutPixel(22 + int_x, 41 + int_y, 128, 128, 117);
		gfx.PutPixel(23 + int_x, 41 + int_y, 131, 131, 119);
		gfx.PutPixel(24 + int_x, 41 + int_y, 119, 119, 109);
		gfx.PutPixel(25 + int_x, 41 + int_y, 9, 9, 8);
		gfx.PutPixel(10 + int_x, 42 + int_y, 2, 2, 2);
		gfx.PutPixel(11 + int_x, 42 + int_y, 72, 72, 72);
		gfx.PutPixel(12 + int_x, 42 + int_y, 89, 89, 89);
		gfx.PutPixel(13 + int_x, 42 + int_y, 91, 91, 90);
		gfx.PutPixel(14 + int_x, 42 + int_y, 137, 137, 125);
		gfx.PutPixel(15 + int_x, 42 + int_y, 141, 141, 129);
		gfx.PutPixel(16 + int_x, 42 + int_y, 143, 143, 130);
		gfx.PutPixel(17 + int_x, 42 + int_y, 148, 148, 135);
		gfx.PutPixel(18 + int_x, 42 + int_y, 148, 148, 135);
		gfx.PutPixel(19 + int_x, 42 + int_y, 148, 148, 135);
		gfx.PutPixel(20 + int_x, 42 + int_y, 148, 148, 135);
		gfx.PutPixel(21 + int_x, 42 + int_y, 148, 148, 135);
		gfx.PutPixel(22 + int_x, 42 + int_y, 143, 143, 130);
		gfx.PutPixel(23 + int_x, 42 + int_y, 143, 143, 130);
		gfx.PutPixel(24 + int_x, 42 + int_y, 130, 130, 119);
		gfx.PutPixel(25 + int_x, 42 + int_y, 10, 10, 9);
		gfx.PutPixel(10 + int_x, 43 + int_y, 2, 2, 2);
		gfx.PutPixel(11 + int_x, 43 + int_y, 71, 71, 71);
		gfx.PutPixel(12 + int_x, 43 + int_y, 87, 87, 87);
		gfx.PutPixel(13 + int_x, 43 + int_y, 89, 89, 88);
		gfx.PutPixel(14 + int_x, 43 + int_y, 134, 134, 123);
		gfx.PutPixel(15 + int_x, 43 + int_y, 141, 141, 129);
		gfx.PutPixel(16 + int_x, 43 + int_y, 124, 124, 114);
		gfx.PutPixel(17 + int_x, 43 + int_y, 86, 86, 78);
		gfx.PutPixel(18 + int_x, 43 + int_y, 86, 86, 78);
		gfx.PutPixel(19 + int_x, 43 + int_y, 86, 86, 78);
		gfx.PutPixel(20 + int_x, 43 + int_y, 86, 86, 78);
		gfx.PutPixel(21 + int_x, 43 + int_y, 86, 86, 78);
		gfx.PutPixel(22 + int_x, 43 + int_y, 124, 124, 114);
		gfx.PutPixel(23 + int_x, 43 + int_y, 143, 143, 130);
		gfx.PutPixel(24 + int_x, 43 + int_y, 128, 128, 117);
		gfx.PutPixel(25 + int_x, 43 + int_y, 10, 10, 9);
		gfx.PutPixel(10 + int_x, 44 + int_y, 2, 2, 2);
		gfx.PutPixel(11 + int_x, 44 + int_y, 71, 71, 71);
		gfx.PutPixel(12 + int_x, 44 + int_y, 87, 87, 87);
		gfx.PutPixel(13 + int_x, 44 + int_y, 89, 89, 88);
		gfx.PutPixel(14 + int_x, 44 + int_y, 134, 134, 123);
		gfx.PutPixel(15 + int_x, 44 + int_y, 145, 145, 133);
		gfx.PutPixel(16 + int_x, 44 + int_y, 100, 100, 91);
		gfx.PutPixel(22 + int_x, 44 + int_y, 100, 100, 91);
		gfx.PutPixel(23 + int_x, 44 + int_y, 147, 147, 134);
		gfx.PutPixel(24 + int_x, 44 + int_y, 128, 128, 117);
		gfx.PutPixel(25 + int_x, 44 + int_y, 10, 10, 9);
		gfx.PutPixel(10 + int_x, 45 + int_y, 2, 2, 2);
		gfx.PutPixel(11 + int_x, 45 + int_y, 75, 75, 75);
		gfx.PutPixel(12 + int_x, 45 + int_y, 91, 91, 91);
		gfx.PutPixel(13 + int_x, 45 + int_y, 93, 93, 92);
		gfx.PutPixel(14 + int_x, 45 + int_y, 141, 141, 129);
		gfx.PutPixel(15 + int_x, 45 + int_y, 152, 152, 140);
		gfx.PutPixel(16 + int_x, 45 + int_y, 107, 107, 98);
		gfx.PutPixel(22 + int_x, 45 + int_y, 107, 107, 98);
		gfx.PutPixel(23 + int_x, 45 + int_y, 154, 154, 141);
		gfx.PutPixel(24 + int_x, 45 + int_y, 134, 134, 123);
		gfx.PutPixel(25 + int_x, 45 + int_y, 11, 11, 9);
		gfx.PutPixel(10 + int_x, 46 + int_y, 1, 1, 1);
		gfx.PutPixel(11 + int_x, 46 + int_y, 27, 27, 27);
		gfx.PutPixel(12 + int_x, 46 + int_y, 33, 33, 33);
		gfx.PutPixel(13 + int_x, 46 + int_y, 34, 34, 33);
		gfx.PutPixel(14 + int_x, 46 + int_y, 51, 51, 47);
		gfx.PutPixel(15 + int_x, 46 + int_y, 55, 55, 51);
		gfx.PutPixel(16 + int_x, 46 + int_y, 38, 38, 35);
		gfx.PutPixel(22 + int_x, 46 + int_y, 39, 39, 35);
		gfx.PutPixel(23 + int_x, 46 + int_y, 56, 56, 51);
		gfx.PutPixel(24 + int_x, 46 + int_y, 49, 49, 44);
		gfx.PutPixel(25 + int_x, 46 + int_y, 4, 4, 4);
	}
}


void Soldier::DrawProj(Graphics & gfx) const
{
	for (auto& el : ps)
	{
		el.Draw(gfx);
	}
}

void Soldier::DrawShield(Graphics & gfx) const
{
	if(shield.dir!=Shield::Direction::NotUsed)
	{
	shield.Draw(gfx);
}
}

void Soldier::Update(Keyboard & kbd, Mouse& mouse, float dt)
{
	if (!isDead())
	{
		switch (shield.dir)
		{
		case Shield::Direction::Left:
			ClampToScreenLeft();
			break;
		case Shield::Direction::Right:
			ClampToScreenRight();
			break;
		default:
			ClampToScreen();
			break;
		}

		//CheckAttack(kbd); unchecked for using mouse controls

		CheckAttack(mouse);
		actual += dt;

		if (!ps.empty())
		{
			checkOut(ps);
		}
		Vec2 vel(0.0f, 0.0f);

		if (kbd.KeyIsPressed(VK_RIGHT))
		{
			vel.x += 1.0f;
		}
		if (kbd.KeyIsPressed(VK_LEFT))
		{
			vel.x -= 1.0f;
		}
		if (kbd.KeyIsPressed(VK_DOWN))
		{
			vel.y += 1.0f;
		}
		if (kbd.KeyIsPressed(VK_UP))
		{
			vel.y -= 1.0f;
		}
		pos += vel.GetNormalized() * speed * dt;
		shield.pos += vel.GetNormalized() * speed * dt;
		if (kbd.KeyIsPressed('A') && shield.checkNextPos(pos.x, Shield::Direction::Left))
		{
			shield.dir = Shield::Direction::Left;
		}
		else
		{
			if (kbd.KeyIsPressed('D') && shield.checkNextPos(pos.x + width, Shield::Direction::Right))
			{
				shield.dir = Shield::Direction::Right;
			}
		}
		UpdateShield();
	}
}

void Soldier::UpdateProj(float dt)
{
	for (auto& el : ps)
	{
		el.Update(dt);
	}
}

void Soldier::UpdateShield()
{
	if (shield.dir != Shield::Direction::NotUsed)
	{
		switch (shield.dir)
		{
		case Shield::Direction::Left:
			shield.pos.x = pos.x - Shield::width;
			shield.pos.y = pos.y + height / 3;
			break;
		case Shield::Direction::Right:
			shield.pos.x = pos.x + width;
			shield.pos.y = pos.y + height / 3;
		}
	}
}

void Soldier::CheckAttack(Keyboard & kbd)
{
	if (kbd.KeyIsPressed(VK_NUMPAD4))
	{
		if (actual > cooldown)
		{
			ps.push_back(Projectile((GetCenter()), Vec2(-1.0f, 0.0f), c));
			actual = 0.0f;
		}
	}
	else
	{
		if (kbd.KeyIsPressed(VK_NUMPAD6))
		{
			if (actual > cooldown)
			{
				ps.push_back(Projectile((GetCenter()), Vec2(1.0f, 0.0f), c));
				actual = 0.0f;
			}
		}
		else
		{
			if (kbd.KeyIsPressed(VK_NUMPAD8))
			{
				if (actual > cooldown)
				{
					ps.push_back(Projectile((GetCenter()), Vec2(0.0f, -1.0f), c));
					actual = 0.0f;
				}
			}
			else
			{
				if (kbd.KeyIsPressed(VK_NUMPAD5))
				{
					if (actual > cooldown)
					{
						ps.push_back(Projectile((GetCenter()), Vec2(0.0f, 1.0f), c));
						actual = 0.0f;
					}
				}
			}
		}
	}
}

void Soldier::CheckAttack(Mouse & mouse)
{
	if (mouse.LeftIsPressed())
	{
		if (actual > cooldown)
		{
			Vec2 vec = Vec2(float(mouse.GetPosX()), float(mouse.GetPosY()));
			ps.push_back(Projectile((GetCenter()), (vec - GetCenter()).GetNormalized()*0.75f, c));
			actual = 0.0f;
		}
	}
}

void Soldier::ClampToScreen()
{
	const float right = pos.x + width;
	if (pos.x < 0.0f)
	{
		pos.x = 0.0f;
	}

	if (right >= Graphics::ScreenWidth)
	{
		pos.x = Graphics::ScreenWidth - 1 - width;
	}

	const float bottom = pos.y + height;
	if (pos.y < 0.0f)
	{
		pos.y = 0.0f;
	}

	if (bottom >= Graphics::ScreenHeight)
	{
		pos.y = Graphics::ScreenHeight - 1 - height;
	}
}

void Soldier::ClampToScreenLeft()
{
	const float right = pos.x + width;
	const float shieldRight = shield.pos.x + Shield::width;

	if (pos.x < 0.0f + Shield::width + Shield::distance)
	{
		pos.x = 0.0f + Shield::width + Shield::distance;
	}
	if (shield.pos.x < 0.0f)
	{
		shield.pos.x = 0.0f;
	}

	if (right >= Graphics::ScreenWidth)
	{
		pos.x = (Graphics::ScreenWidth - 1) - width;
	}

	const float bottom = pos.y + height;
	const float shieldBottom = shield.pos.y + Shield::height;

	if (pos.y < 0)
	{
		pos.y = 0;
	}
	else if (bottom >= float(Graphics::ScreenHeight))
	{
		pos.y = float(Graphics::ScreenHeight - 1) - height;
	}
}

void Soldier::ClampToScreenRight()
{
	const float shieldRight = shield.pos.x + Shield::width;
	const float right = pos.x + width;
	if (pos.x < 0.0f)
	{
		pos.x = 0.0f;
	}
	if (right + Shield::width + Shield::distance >= Graphics::ScreenWidth)
	{
		pos.x = Graphics::ScreenWidth - 1 - Shield::width - Shield::distance - width;
	}

	const float bottom = pos.y + height;

	if (pos.y < 0.0f)
	{
		pos.y = 0.0f;
	}

	if (bottom > Graphics::ScreenHeight)
	{
		pos.y = Graphics::ScreenHeight - 1 - height;
	}
	
}