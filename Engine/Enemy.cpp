#include "Enemy.h"


Enemy& Enemy::operator--()
{
	health.decrease();
	return *this;
}

void Enemy::Draw(Graphics & gfx) const
{
	if (!isDead())
	{
		const int in_x = int(pos.x);
		const int in_y = int(pos.y);

		gfx.PutPixel(11 + in_x, 2 + in_y, 1, 1, 1);
		gfx.PutPixel(12 + in_x, 2 + in_y, 18, 13, 10);
		gfx.PutPixel(13 + in_x, 2 + in_y, 21, 16, 11);
		gfx.PutPixel(14 + in_x, 2 + in_y, 21, 15, 11);
		gfx.PutPixel(15 + in_x, 2 + in_y, 21, 15, 11);
		gfx.PutPixel(16 + in_x, 2 + in_y, 21, 15, 11);
		gfx.PutPixel(17 + in_x, 2 + in_y, 21, 15, 11);
		gfx.PutPixel(18 + in_x, 2 + in_y, 21, 15, 11);
		gfx.PutPixel(19 + in_x, 2 + in_y, 21, 15, 11);
		gfx.PutPixel(20 + in_x, 2 + in_y, 21, 15, 11);
		gfx.PutPixel(21 + in_x, 2 + in_y, 21, 15, 11);
		gfx.PutPixel(22 + in_x, 2 + in_y, 21, 16, 11);
		gfx.PutPixel(23 + in_x, 2 + in_y, 16, 13, 8);
		gfx.PutPixel(11 + in_x, 3 + in_y, 1, 0, 0);
		gfx.PutPixel(12 + in_x, 3 + in_y, 40, 29, 21);
		gfx.PutPixel(13 + in_x, 3 + in_y, 44, 33, 22);
		gfx.PutPixel(14 + in_x, 3 + in_y, 43, 31, 22);
		gfx.PutPixel(15 + in_x, 3 + in_y, 43, 31, 22);
		gfx.PutPixel(16 + in_x, 3 + in_y, 43, 31, 22);
		gfx.PutPixel(17 + in_x, 3 + in_y, 43, 32, 22);
		gfx.PutPixel(18 + in_x, 3 + in_y, 43, 31, 22);
		gfx.PutPixel(19 + in_x, 3 + in_y, 39, 28, 23);
		gfx.PutPixel(20 + in_x, 3 + in_y, 38, 28, 23);
		gfx.PutPixel(21 + in_x, 3 + in_y, 40, 29, 21);
		gfx.PutPixel(22 + in_x, 3 + in_y, 43, 31, 20);
		gfx.PutPixel(23 + in_x, 3 + in_y, 34, 24, 17);
		gfx.PutPixel(7 + in_x, 4 + in_y, 8, 6, 4);
		gfx.PutPixel(8 + in_x, 4 + in_y, 11, 8, 6);
		gfx.PutPixel(9 + in_x, 4 + in_y, 12, 9, 6);
		gfx.PutPixel(10 + in_x, 4 + in_y, 14, 11, 7);
		gfx.PutPixel(11 + in_x, 4 + in_y, 16, 12, 8);
		gfx.PutPixel(12 + in_x, 4 + in_y, 42, 31, 22);
		gfx.PutPixel(13 + in_x, 4 + in_y, 45, 33, 23);
		gfx.PutPixel(14 + in_x, 4 + in_y, 44, 33, 23);
		gfx.PutPixel(15 + in_x, 4 + in_y, 44, 33, 23);
		gfx.PutPixel(16 + in_x, 4 + in_y, 44, 33, 23);
		gfx.PutPixel(17 + in_x, 4 + in_y, 44, 32, 23);
		gfx.PutPixel(18 + in_x, 4 + in_y, 45, 33, 23);
		gfx.PutPixel(19 + in_x, 4 + in_y, 67, 49, 17);
		gfx.PutPixel(20 + in_x, 4 + in_y, 74, 54, 16);
		gfx.PutPixel(21 + in_x, 4 + in_y, 61, 48, 26);
		gfx.PutPixel(22 + in_x, 4 + in_y, 51, 43, 39);
		gfx.PutPixel(23 + in_x, 4 + in_y, 45, 37, 32);
		gfx.PutPixel(24 + in_x, 4 + in_y, 15, 11, 7);
		gfx.PutPixel(25 + in_x, 4 + in_y, 14, 11, 7);
		gfx.PutPixel(26 + in_x, 4 + in_y, 4, 2, 2);
		gfx.PutPixel(7 + in_x, 5 + in_y, 31, 23, 16);
		gfx.PutPixel(8 + in_x, 5 + in_y, 43, 32, 23);
		gfx.PutPixel(9 + in_x, 5 + in_y, 48, 35, 25);
		gfx.PutPixel(10 + in_x, 5 + in_y, 57, 42, 29);
		gfx.PutPixel(11 + in_x, 5 + in_y, 56, 41, 29);
		gfx.PutPixel(12 + in_x, 5 + in_y, 55, 40, 28);
		gfx.PutPixel(13 + in_x, 5 + in_y, 54, 40, 28);
		gfx.PutPixel(14 + in_x, 5 + in_y, 54, 40, 28);
		gfx.PutPixel(15 + in_x, 5 + in_y, 54, 40, 28);
		gfx.PutPixel(16 + in_x, 5 + in_y, 54, 40, 28);
		gfx.PutPixel(17 + in_x, 5 + in_y, 53, 39, 28);
		gfx.PutPixel(18 + in_x, 5 + in_y, 57, 41, 28);
		gfx.PutPixel(19 + in_x, 5 + in_y, 145, 106, 4);
		gfx.PutPixel(20 + in_x, 5 + in_y, 172, 125, 0);
		gfx.PutPixel(21 + in_x, 5 + in_y, 122, 101, 41);
		gfx.PutPixel(22 + in_x, 5 + in_y, 76, 80, 90);
		gfx.PutPixel(23 + in_x, 5 + in_y, 76, 74, 74);
		gfx.PutPixel(24 + in_x, 5 + in_y, 57, 42, 30);
		gfx.PutPixel(25 + in_x, 5 + in_y, 58, 42, 29);
		gfx.PutPixel(26 + in_x, 5 + in_y, 14, 10, 7);
		gfx.PutPixel(3 + in_x, 6 + in_y, 1, 1, 0);
		gfx.PutPixel(4 + in_x, 6 + in_y, 1, 1, 0);
		gfx.PutPixel(5 + in_x, 6 + in_y, 1, 1, 0);
		gfx.PutPixel(6 + in_x, 6 + in_y, 1, 1, 0);
		gfx.PutPixel(7 + in_x, 6 + in_y, 30, 22, 16);
		gfx.PutPixel(8 + in_x, 6 + in_y, 42, 31, 22);
		gfx.PutPixel(9 + in_x, 6 + in_y, 46, 34, 24);
		gfx.PutPixel(10 + in_x, 6 + in_y, 55, 41, 28);
		gfx.PutPixel(11 + in_x, 6 + in_y, 54, 40, 28);
		gfx.PutPixel(12 + in_x, 6 + in_y, 54, 40, 28);
		gfx.PutPixel(13 + in_x, 6 + in_y, 54, 40, 28);
		gfx.PutPixel(14 + in_x, 6 + in_y, 54, 40, 28);
		gfx.PutPixel(15 + in_x, 6 + in_y, 54, 40, 28);
		gfx.PutPixel(16 + in_x, 6 + in_y, 54, 40, 28);
		gfx.PutPixel(17 + in_x, 6 + in_y, 53, 39, 28);
		gfx.PutPixel(18 + in_x, 6 + in_y, 56, 41, 28);
		gfx.PutPixel(19 + in_x, 6 + in_y, 143, 105, 5);
		gfx.PutPixel(20 + in_x, 6 + in_y, 169, 123, 0);
		gfx.PutPixel(21 + in_x, 6 + in_y, 122, 100, 39);
		gfx.PutPixel(22 + in_x, 6 + in_y, 79, 81, 86);
		gfx.PutPixel(23 + in_x, 6 + in_y, 78, 74, 70);
		gfx.PutPixel(24 + in_x, 6 + in_y, 55, 41, 29);
		gfx.PutPixel(25 + in_x, 6 + in_y, 56, 41, 28);
		gfx.PutPixel(26 + in_x, 6 + in_y, 15, 11, 7);
		gfx.PutPixel(27 + in_x, 6 + in_y, 1, 1, 1);
		gfx.PutPixel(28 + in_x, 6 + in_y, 1, 1, 0);
		gfx.PutPixel(2 + in_x, 7 + in_y, 17, 13, 8);
		gfx.PutPixel(3 + in_x, 7 + in_y, 37, 27, 18);
		gfx.PutPixel(4 + in_x, 7 + in_y, 34, 25, 18);
		gfx.PutPixel(5 + in_x, 7 + in_y, 34, 25, 18);
		gfx.PutPixel(6 + in_x, 7 + in_y, 34, 25, 18);
		gfx.PutPixel(7 + in_x, 7 + in_y, 48, 35, 24);
		gfx.PutPixel(8 + in_x, 7 + in_y, 53, 39, 27);
		gfx.PutPixel(9 + in_x, 7 + in_y, 53, 39, 27);
		gfx.PutPixel(10 + in_x, 7 + in_y, 54, 40, 28);
		gfx.PutPixel(11 + in_x, 7 + in_y, 54, 40, 28);
		gfx.PutPixel(12 + in_x, 7 + in_y, 54, 40, 28);
		gfx.PutPixel(13 + in_x, 7 + in_y, 54, 40, 28);
		gfx.PutPixel(14 + in_x, 7 + in_y, 54, 40, 28);
		gfx.PutPixel(15 + in_x, 7 + in_y, 54, 40, 28);
		gfx.PutPixel(16 + in_x, 7 + in_y, 54, 40, 28);
		gfx.PutPixel(17 + in_x, 7 + in_y, 52, 39, 28);
		gfx.PutPixel(18 + in_x, 7 + in_y, 57, 42, 28);
		gfx.PutPixel(19 + in_x, 7 + in_y, 180, 132, 5);
		gfx.PutPixel(20 + in_x, 7 + in_y, 210, 154, 0);
		gfx.PutPixel(21 + in_x, 7 + in_y, 198, 147, 7);
		gfx.PutPixel(22 + in_x, 7 + in_y, 195, 147, 14);
		gfx.PutPixel(23 + in_x, 7 + in_y, 169, 126, 16);
		gfx.PutPixel(24 + in_x, 7 + in_y, 57, 42, 28);
		gfx.PutPixel(25 + in_x, 7 + in_y, 53, 39, 28);
		gfx.PutPixel(26 + in_x, 7 + in_y, 47, 35, 25);
		gfx.PutPixel(27 + in_x, 7 + in_y, 48, 35, 24);
		gfx.PutPixel(28 + in_x, 7 + in_y, 32, 25, 17);
		gfx.PutPixel(2 + in_x, 8 + in_y, 22, 15, 11);
		gfx.PutPixel(3 + in_x, 8 + in_y, 46, 33, 23);
		gfx.PutPixel(4 + in_x, 8 + in_y, 42, 31, 22);
		gfx.PutPixel(5 + in_x, 8 + in_y, 41, 30, 21);
		gfx.PutPixel(6 + in_x, 8 + in_y, 41, 30, 21);
		gfx.PutPixel(7 + in_x, 8 + in_y, 51, 37, 26);
		gfx.PutPixel(8 + in_x, 8 + in_y, 55, 40, 28);
		gfx.PutPixel(9 + in_x, 8 + in_y, 54, 40, 28);
		gfx.PutPixel(10 + in_x, 8 + in_y, 54, 40, 28);
		gfx.PutPixel(11 + in_x, 8 + in_y, 54, 40, 28);
		gfx.PutPixel(12 + in_x, 8 + in_y, 54, 40, 28);
		gfx.PutPixel(13 + in_x, 8 + in_y, 54, 40, 28);
		gfx.PutPixel(14 + in_x, 8 + in_y, 54, 40, 28);
		gfx.PutPixel(15 + in_x, 8 + in_y, 54, 40, 28);
		gfx.PutPixel(16 + in_x, 8 + in_y, 54, 40, 28);
		gfx.PutPixel(17 + in_x, 8 + in_y, 52, 39, 28);
		gfx.PutPixel(18 + in_x, 8 + in_y, 57, 42, 28);
		gfx.PutPixel(19 + in_x, 8 + in_y, 196, 142, 1);
		gfx.PutPixel(20 + in_x, 8 + in_y, 229, 166, 0);
		gfx.PutPixel(21 + in_x, 8 + in_y, 222, 162, 0);
		gfx.PutPixel(22 + in_x, 8 + in_y, 226, 165, 0);
		gfx.PutPixel(23 + in_x, 8 + in_y, 194, 141, 3);
		gfx.PutPixel(24 + in_x, 8 + in_y, 57, 42, 28);
		gfx.PutPixel(25 + in_x, 8 + in_y, 52, 39, 28);
		gfx.PutPixel(26 + in_x, 8 + in_y, 55, 41, 29);
		gfx.PutPixel(27 + in_x, 8 + in_y, 59, 43, 30);
		gfx.PutPixel(28 + in_x, 8 + in_y, 41, 31, 22);
		gfx.PutPixel(2 + in_x, 9 + in_y, 21, 15, 11);
		gfx.PutPixel(3 + in_x, 9 + in_y, 44, 32, 22);
		gfx.PutPixel(4 + in_x, 9 + in_y, 42, 31, 22);
		gfx.PutPixel(5 + in_x, 9 + in_y, 48, 35, 25);
		gfx.PutPixel(6 + in_x, 9 + in_y, 48, 35, 25);
		gfx.PutPixel(7 + in_x, 9 + in_y, 53, 39, 27);
		gfx.PutPixel(8 + in_x, 9 + in_y, 55, 40, 28);
		gfx.PutPixel(9 + in_x, 9 + in_y, 54, 40, 28);
		gfx.PutPixel(10 + in_x, 9 + in_y, 54, 40, 28);
		gfx.PutPixel(11 + in_x, 9 + in_y, 54, 40, 28);
		gfx.PutPixel(12 + in_x, 9 + in_y, 54, 40, 28);
		gfx.PutPixel(13 + in_x, 9 + in_y, 54, 40, 28);
		gfx.PutPixel(14 + in_x, 9 + in_y, 54, 40, 28);
		gfx.PutPixel(15 + in_x, 9 + in_y, 54, 40, 28);
		gfx.PutPixel(16 + in_x, 9 + in_y, 54, 40, 28);
		gfx.PutPixel(17 + in_x, 9 + in_y, 53, 40, 28);
		gfx.PutPixel(18 + in_x, 9 + in_y, 56, 42, 29);
		gfx.PutPixel(19 + in_x, 9 + in_y, 132, 105, 38);
		gfx.PutPixel(20 + in_x, 9 + in_y, 147, 120, 44);
		gfx.PutPixel(21 + in_x, 9 + in_y, 167, 128, 20);
		gfx.PutPixel(22 + in_x, 9 + in_y, 193, 141, 0);
		gfx.PutPixel(23 + in_x, 9 + in_y, 165, 121, 5);
		gfx.PutPixel(24 + in_x, 9 + in_y, 57, 42, 28);
		gfx.PutPixel(25 + in_x, 9 + in_y, 53, 39, 28);
		gfx.PutPixel(26 + in_x, 9 + in_y, 54, 40, 28);
		gfx.PutPixel(27 + in_x, 9 + in_y, 57, 42, 29);
		gfx.PutPixel(28 + in_x, 9 + in_y, 40, 30, 21);
		gfx.PutPixel(2 + in_x, 10 + in_y, 21, 15, 11);
		gfx.PutPixel(3 + in_x, 10 + in_y, 43, 32, 22);
		gfx.PutPixel(4 + in_x, 10 + in_y, 43, 32, 22);
		gfx.PutPixel(5 + in_x, 10 + in_y, 55, 41, 29);
		gfx.PutPixel(6 + in_x, 10 + in_y, 55, 41, 29);
		gfx.PutPixel(7 + in_x, 10 + in_y, 54, 40, 28);
		gfx.PutPixel(8 + in_x, 10 + in_y, 54, 40, 28);
		gfx.PutPixel(9 + in_x, 10 + in_y, 54, 40, 28);
		gfx.PutPixel(10 + in_x, 10 + in_y, 54, 40, 28);
		gfx.PutPixel(11 + in_x, 10 + in_y, 54, 40, 28);
		gfx.PutPixel(12 + in_x, 10 + in_y, 54, 40, 28);
		gfx.PutPixel(13 + in_x, 10 + in_y, 54, 40, 28);
		gfx.PutPixel(14 + in_x, 10 + in_y, 54, 40, 28);
		gfx.PutPixel(15 + in_x, 10 + in_y, 54, 40, 28);
		gfx.PutPixel(16 + in_x, 10 + in_y, 54, 40, 28);
		gfx.PutPixel(17 + in_x, 10 + in_y, 53, 39, 26);
		gfx.PutPixel(18 + in_x, 10 + in_y, 52, 40, 28);
		gfx.PutPixel(19 + in_x, 10 + in_y, 68, 69, 76);
		gfx.PutPixel(20 + in_x, 10 + in_y, 66, 74, 93);
		gfx.PutPixel(21 + in_x, 10 + in_y, 115, 96, 42);
		gfx.PutPixel(22 + in_x, 10 + in_y, 167, 121, 0);
		gfx.PutPixel(23 + in_x, 10 + in_y, 140, 103, 3);
		gfx.PutPixel(24 + in_x, 10 + in_y, 54, 40, 27);
		gfx.PutPixel(25 + in_x, 10 + in_y, 52, 38, 27);
		gfx.PutPixel(26 + in_x, 10 + in_y, 52, 39, 27);
		gfx.PutPixel(27 + in_x, 10 + in_y, 55, 41, 28);
		gfx.PutPixel(28 + in_x, 10 + in_y, 39, 29, 20);
		gfx.PutPixel(2 + in_x, 11 + in_y, 21, 15, 11);
		gfx.PutPixel(3 + in_x, 11 + in_y, 43, 32, 22);
		gfx.PutPixel(4 + in_x, 11 + in_y, 43, 32, 22);
		gfx.PutPixel(5 + in_x, 11 + in_y, 52, 38, 27);
		gfx.PutPixel(6 + in_x, 11 + in_y, 52, 38, 27);
		gfx.PutPixel(7 + in_x, 11 + in_y, 54, 40, 28);
		gfx.PutPixel(8 + in_x, 11 + in_y, 54, 40, 28);
		gfx.PutPixel(9 + in_x, 11 + in_y, 54, 40, 28);
		gfx.PutPixel(10 + in_x, 11 + in_y, 54, 40, 28);
		gfx.PutPixel(11 + in_x, 11 + in_y, 54, 40, 28);
		gfx.PutPixel(12 + in_x, 11 + in_y, 54, 40, 28);
		gfx.PutPixel(13 + in_x, 11 + in_y, 54, 40, 28);
		gfx.PutPixel(14 + in_x, 11 + in_y, 54, 40, 28);
		gfx.PutPixel(15 + in_x, 11 + in_y, 54, 40, 28);
		gfx.PutPixel(16 + in_x, 11 + in_y, 56, 42, 30);
		gfx.PutPixel(17 + in_x, 11 + in_y, 62, 47, 33);
		gfx.PutPixel(18 + in_x, 11 + in_y, 62, 48, 35);
		gfx.PutPixel(19 + in_x, 11 + in_y, 80, 74, 70);
		gfx.PutPixel(20 + in_x, 11 + in_y, 80, 79, 83);
		gfx.PutPixel(21 + in_x, 11 + in_y, 117, 96, 44);
		gfx.PutPixel(22 + in_x, 11 + in_y, 157, 115, 10);
		gfx.PutPixel(23 + in_x, 11 + in_y, 135, 100, 14);
		gfx.PutPixel(24 + in_x, 11 + in_y, 63, 48, 34);
		gfx.PutPixel(25 + in_x, 11 + in_y, 61, 46, 34);
		gfx.PutPixel(26 + in_x, 11 + in_y, 62, 47, 34);
		gfx.PutPixel(27 + in_x, 11 + in_y, 65, 49, 35);
		gfx.PutPixel(28 + in_x, 11 + in_y, 46, 35, 25);
		gfx.PutPixel(2 + in_x, 12 + in_y, 21, 15, 11);
		gfx.PutPixel(3 + in_x, 12 + in_y, 44, 32, 22);
		gfx.PutPixel(4 + in_x, 12 + in_y, 41, 30, 21);
		gfx.PutPixel(5 + in_x, 12 + in_y, 41, 30, 21);
		gfx.PutPixel(6 + in_x, 12 + in_y, 41, 30, 21);
		gfx.PutPixel(7 + in_x, 12 + in_y, 51, 37, 26);
		gfx.PutPixel(8 + in_x, 12 + in_y, 55, 40, 28);
		gfx.PutPixel(9 + in_x, 12 + in_y, 54, 40, 28);
		gfx.PutPixel(10 + in_x, 12 + in_y, 54, 40, 28);
		gfx.PutPixel(11 + in_x, 12 + in_y, 54, 40, 28);
		gfx.PutPixel(12 + in_x, 12 + in_y, 54, 40, 28);
		gfx.PutPixel(13 + in_x, 12 + in_y, 54, 40, 28);
		gfx.PutPixel(14 + in_x, 12 + in_y, 54, 40, 28);
		gfx.PutPixel(15 + in_x, 12 + in_y, 52, 38, 26);
		gfx.PutPixel(16 + in_x, 12 + in_y, 66, 50, 37);
		gfx.PutPixel(17 + in_x, 12 + in_y, 101, 80, 62);
		gfx.PutPixel(18 + in_x, 12 + in_y, 99, 79, 61);
		gfx.PutPixel(19 + in_x, 12 + in_y, 99, 80, 62);
		gfx.PutPixel(20 + in_x, 12 + in_y, 99, 80, 62);
		gfx.PutPixel(21 + in_x, 12 + in_y, 100, 80, 62);
		gfx.PutPixel(22 + in_x, 12 + in_y, 101, 81, 61);
		gfx.PutPixel(23 + in_x, 12 + in_y, 100, 80, 61);
		gfx.PutPixel(24 + in_x, 12 + in_y, 99, 79, 61);
		gfx.PutPixel(25 + in_x, 12 + in_y, 99, 79, 61);
		gfx.PutPixel(26 + in_x, 12 + in_y, 99, 79, 61);
		gfx.PutPixel(27 + in_x, 12 + in_y, 104, 83, 64);
		gfx.PutPixel(28 + in_x, 12 + in_y, 73, 58, 46);
		gfx.PutPixel(2 + in_x, 13 + in_y, 22, 16, 11);
		gfx.PutPixel(3 + in_x, 13 + in_y, 46, 33, 23);
		gfx.PutPixel(4 + in_x, 13 + in_y, 42, 31, 22);
		gfx.PutPixel(5 + in_x, 13 + in_y, 41, 30, 21);
		gfx.PutPixel(6 + in_x, 13 + in_y, 41, 30, 21);
		gfx.PutPixel(7 + in_x, 13 + in_y, 50, 36, 26);
		gfx.PutPixel(8 + in_x, 13 + in_y, 54, 39, 27);
		gfx.PutPixel(9 + in_x, 13 + in_y, 53, 39, 27);
		gfx.PutPixel(10 + in_x, 13 + in_y, 53, 39, 27);
		gfx.PutPixel(11 + in_x, 13 + in_y, 53, 39, 27);
		gfx.PutPixel(12 + in_x, 13 + in_y, 52, 39, 27);
		gfx.PutPixel(13 + in_x, 13 + in_y, 52, 39, 27);
		gfx.PutPixel(14 + in_x, 13 + in_y, 52, 39, 27);
		gfx.PutPixel(15 + in_x, 13 + in_y, 51, 37, 25);
		gfx.PutPixel(16 + in_x, 13 + in_y, 63, 48, 36);
		gfx.PutPixel(17 + in_x, 13 + in_y, 97, 79, 62);
		gfx.PutPixel(18 + in_x, 13 + in_y, 95, 78, 61);
		gfx.PutPixel(19 + in_x, 13 + in_y, 95, 77, 60);
		gfx.PutPixel(20 + in_x, 13 + in_y, 95, 77, 60);
		gfx.PutPixel(21 + in_x, 13 + in_y, 94, 77, 61);
		gfx.PutPixel(22 + in_x, 13 + in_y, 94, 77, 61);
		gfx.PutPixel(23 + in_x, 13 + in_y, 95, 77, 61);
		gfx.PutPixel(24 + in_x, 13 + in_y, 99, 80, 62);
		gfx.PutPixel(25 + in_x, 13 + in_y, 99, 80, 62);
		gfx.PutPixel(26 + in_x, 13 + in_y, 98, 79, 61);
		gfx.PutPixel(27 + in_x, 13 + in_y, 103, 83, 64);
		gfx.PutPixel(28 + in_x, 13 + in_y, 72, 58, 45);
		gfx.PutPixel(2 + in_x, 14 + in_y, 4, 3, 3);
		gfx.PutPixel(3 + in_x, 14 + in_y, 11, 8, 6);
		gfx.PutPixel(4 + in_x, 14 + in_y, 16, 11, 8);
		gfx.PutPixel(5 + in_x, 14 + in_y, 40, 29, 21);
		gfx.PutPixel(6 + in_x, 14 + in_y, 40, 29, 20);
		gfx.PutPixel(7 + in_x, 14 + in_y, 68, 50, 34);
		gfx.PutPixel(8 + in_x, 14 + in_y, 79, 59, 40);
		gfx.PutPixel(9 + in_x, 14 + in_y, 77, 57, 39);
		gfx.PutPixel(10 + in_x, 14 + in_y, 77, 57, 39);
		gfx.PutPixel(11 + in_x, 14 + in_y, 78, 58, 40);
		gfx.PutPixel(12 + in_x, 14 + in_y, 87, 69, 52);
		gfx.PutPixel(13 + in_x, 14 + in_y, 88, 70, 53);
		gfx.PutPixel(14 + in_x, 14 + in_y, 88, 70, 53);
		gfx.PutPixel(15 + in_x, 14 + in_y, 82, 67, 51);
		gfx.PutPixel(16 + in_x, 14 + in_y, 121, 86, 64);
		gfx.PutPixel(17 + in_x, 14 + in_y, 215, 137, 93);
		gfx.PutPixel(18 + in_x, 14 + in_y, 215, 135, 92);
		gfx.PutPixel(19 + in_x, 14 + in_y, 215, 135, 92);
		gfx.PutPixel(20 + in_x, 14 + in_y, 215, 135, 92);
		gfx.PutPixel(21 + in_x, 14 + in_y, 215, 135, 92);
		gfx.PutPixel(22 + in_x, 14 + in_y, 215, 136, 93);
		gfx.PutPixel(23 + in_x, 14 + in_y, 202, 128, 90);
		gfx.PutPixel(24 + in_x, 14 + in_y, 135, 96, 78);
		gfx.PutPixel(25 + in_x, 14 + in_y, 132, 95, 78);
		gfx.PutPixel(26 + in_x, 14 + in_y, 150, 107, 88);
		gfx.PutPixel(27 + in_x, 14 + in_y, 163, 117, 95);
		gfx.PutPixel(28 + in_x, 14 + in_y, 115, 82, 68);
		gfx.PutPixel(4 + in_x, 15 + in_y, 5, 4, 3);
		gfx.PutPixel(5 + in_x, 15 + in_y, 38, 27, 20);
		gfx.PutPixel(6 + in_x, 15 + in_y, 38, 27, 19);
		gfx.PutPixel(7 + in_x, 15 + in_y, 67, 51, 36);
		gfx.PutPixel(8 + in_x, 15 + in_y, 79, 62, 43);
		gfx.PutPixel(9 + in_x, 15 + in_y, 77, 60, 42);
		gfx.PutPixel(10 + in_x, 15 + in_y, 77, 60, 42);
		gfx.PutPixel(11 + in_x, 15 + in_y, 78, 61, 43);
		gfx.PutPixel(12 + in_x, 15 + in_y, 92, 78, 62);
		gfx.PutPixel(13 + in_x, 15 + in_y, 94, 79, 63);
		gfx.PutPixel(14 + in_x, 15 + in_y, 94, 78, 62);
		gfx.PutPixel(15 + in_x, 15 + in_y, 86, 74, 59);
		gfx.PutPixel(16 + in_x, 15 + in_y, 137, 99, 73);
		gfx.PutPixel(17 + in_x, 15 + in_y, 255, 162, 108);
		gfx.PutPixel(18 + in_x, 15 + in_y, 255, 159, 107);
		gfx.PutPixel(19 + in_x, 15 + in_y, 255, 159, 107);
		gfx.PutPixel(20 + in_x, 15 + in_y, 255, 159, 107);
		gfx.PutPixel(21 + in_x, 15 + in_y, 255, 159, 107);
		gfx.PutPixel(22 + in_x, 15 + in_y, 255, 161, 108);
		gfx.PutPixel(23 + in_x, 15 + in_y, 243, 149, 103);
		gfx.PutPixel(24 + in_x, 15 + in_y, 149, 103, 85);
		gfx.PutPixel(25 + in_x, 15 + in_y, 145, 101, 84);
		gfx.PutPixel(26 + in_x, 15 + in_y, 170, 118, 99);
		gfx.PutPixel(27 + in_x, 15 + in_y, 187, 130, 108);
		gfx.PutPixel(28 + in_x, 15 + in_y, 132, 91, 76);
		gfx.PutPixel(4 + in_x, 16 + in_y, 10, 7, 5);
		gfx.PutPixel(5 + in_x, 16 + in_y, 56, 42, 29);
		gfx.PutPixel(6 + in_x, 16 + in_y, 55, 41, 28);
		gfx.PutPixel(7 + in_x, 16 + in_y, 126, 78, 48);
		gfx.PutPixel(8 + in_x, 16 + in_y, 151, 92, 55);
		gfx.PutPixel(9 + in_x, 16 + in_y, 149, 90, 54);
		gfx.PutPixel(10 + in_x, 16 + in_y, 149, 90, 54);
		gfx.PutPixel(11 + in_x, 16 + in_y, 150, 91, 55);
		gfx.PutPixel(12 + in_x, 16 + in_y, 158, 100, 66);
		gfx.PutPixel(13 + in_x, 16 + in_y, 159, 100, 66);
		gfx.PutPixel(14 + in_x, 16 + in_y, 159, 105, 73);
		gfx.PutPixel(15 + in_x, 16 + in_y, 154, 107, 77);
		gfx.PutPixel(16 + in_x, 16 + in_y, 184, 118, 81);
		gfx.PutPixel(17 + in_x, 16 + in_y, 255, 148, 92);
		gfx.PutPixel(18 + in_x, 16 + in_y, 255, 146, 92);
		gfx.PutPixel(19 + in_x, 16 + in_y, 255, 146, 92);
		gfx.PutPixel(20 + in_x, 16 + in_y, 255, 146, 92);
		gfx.PutPixel(21 + in_x, 16 + in_y, 255, 146, 92);
		gfx.PutPixel(22 + in_x, 16 + in_y, 255, 148, 92);
		gfx.PutPixel(23 + in_x, 16 + in_y, 237, 139, 91);
		gfx.PutPixel(24 + in_x, 16 + in_y, 147, 102, 84);
		gfx.PutPixel(25 + in_x, 16 + in_y, 143, 100, 84);
		gfx.PutPixel(26 + in_x, 16 + in_y, 167, 116, 97);
		gfx.PutPixel(27 + in_x, 16 + in_y, 183, 128, 106);
		gfx.PutPixel(28 + in_x, 16 + in_y, 129, 90, 75);
		gfx.PutPixel(4 + in_x, 17 + in_y, 14, 10, 7);
		gfx.PutPixel(5 + in_x, 17 + in_y, 83, 63, 42);
		gfx.PutPixel(6 + in_x, 17 + in_y, 80, 61, 42);
		gfx.PutPixel(7 + in_x, 17 + in_y, 217, 119, 66);
		gfx.PutPixel(8 + in_x, 17 + in_y, 255, 140, 75);
		gfx.PutPixel(9 + in_x, 17 + in_y, 255, 138, 75);
		gfx.PutPixel(10 + in_x, 17 + in_y, 255, 140, 76);
		gfx.PutPixel(11 + in_x, 17 + in_y, 255, 140, 76);
		gfx.PutPixel(12 + in_x, 17 + in_y, 255, 137, 73);
		gfx.PutPixel(13 + in_x, 17 + in_y, 255, 135, 71);
		gfx.PutPixel(14 + in_x, 17 + in_y, 255, 149, 93);
		gfx.PutPixel(15 + in_x, 17 + in_y, 255, 160, 108);
		gfx.PutPixel(16 + in_x, 17 + in_y, 255, 151, 96);
		gfx.PutPixel(17 + in_x, 17 + in_y, 255, 131, 70);
		gfx.PutPixel(18 + in_x, 17 + in_y, 255, 133, 71);
		gfx.PutPixel(19 + in_x, 17 + in_y, 255, 135, 73);
		gfx.PutPixel(20 + in_x, 17 + in_y, 255, 136, 73);
		gfx.PutPixel(21 + in_x, 17 + in_y, 255, 134, 72);
		gfx.PutPixel(22 + in_x, 17 + in_y, 255, 133, 71);
		gfx.PutPixel(23 + in_x, 17 + in_y, 237, 128, 73);
		gfx.PutPixel(24 + in_x, 17 + in_y, 145, 101, 84);
		gfx.PutPixel(25 + in_x, 17 + in_y, 141, 99, 84);
		gfx.PutPixel(26 + in_x, 17 + in_y, 167, 116, 97);
		gfx.PutPixel(27 + in_x, 17 + in_y, 184, 128, 106);
		gfx.PutPixel(28 + in_x, 17 + in_y, 129, 90, 75);
		gfx.PutPixel(4 + in_x, 18 + in_y, 15, 11, 8);
		gfx.PutPixel(5 + in_x, 18 + in_y, 89, 66, 46);
		gfx.PutPixel(6 + in_x, 18 + in_y, 87, 65, 46);
		gfx.PutPixel(7 + in_x, 18 + in_y, 213, 118, 68);
		gfx.PutPixel(8 + in_x, 18 + in_y, 255, 139, 77);
		gfx.PutPixel(9 + in_x, 18 + in_y, 248, 131, 72);
		gfx.PutPixel(10 + in_x, 18 + in_y, 237, 125, 68);
		gfx.PutPixel(11 + in_x, 18 + in_y, 238, 125, 68);
		gfx.PutPixel(12 + in_x, 18 + in_y, 254, 135, 75);
		gfx.PutPixel(13 + in_x, 18 + in_y, 255, 135, 73);
		gfx.PutPixel(14 + in_x, 18 + in_y, 255, 147, 93);
		gfx.PutPixel(15 + in_x, 18 + in_y, 255, 156, 106);
		gfx.PutPixel(16 + in_x, 18 + in_y, 255, 149, 96);
		gfx.PutPixel(17 + in_x, 18 + in_y, 255, 135, 74);
		gfx.PutPixel(18 + in_x, 18 + in_y, 255, 135, 75);
		gfx.PutPixel(19 + in_x, 18 + in_y, 240, 126, 69);
		gfx.PutPixel(20 + in_x, 18 + in_y, 237, 124, 68);
		gfx.PutPixel(21 + in_x, 18 + in_y, 246, 130, 71);
		gfx.PutPixel(22 + in_x, 18 + in_y, 255, 137, 76);
		gfx.PutPixel(23 + in_x, 18 + in_y, 238, 131, 77);
		gfx.PutPixel(24 + in_x, 18 + in_y, 155, 106, 85);
		gfx.PutPixel(25 + in_x, 18 + in_y, 151, 104, 85);
		gfx.PutPixel(26 + in_x, 18 + in_y, 167, 116, 96);
		gfx.PutPixel(27 + in_x, 18 + in_y, 180, 126, 105);
		gfx.PutPixel(28 + in_x, 18 + in_y, 128, 89, 74);
		gfx.PutPixel(4 + in_x, 19 + in_y, 28, 19, 16);
		gfx.PutPixel(5 + in_x, 19 + in_y, 165, 115, 95);
		gfx.PutPixel(6 + in_x, 19 + in_y, 166, 117, 98);
		gfx.PutPixel(7 + in_x, 19 + in_y, 232, 143, 99);
		gfx.PutPixel(8 + in_x, 19 + in_y, 255, 162, 107);
		gfx.PutPixel(9 + in_x, 19 + in_y, 165, 99, 65);
		gfx.PutPixel(10 + in_x, 19 + in_y, 18, 9, 5);
		gfx.PutPixel(11 + in_x, 19 + in_y, 34, 20, 12);
		gfx.PutPixel(12 + in_x, 19 + in_y, 238, 142, 94);
		gfx.PutPixel(13 + in_x, 19 + in_y, 255, 155, 103);
		gfx.PutPixel(14 + in_x, 19 + in_y, 255, 153, 102);
		gfx.PutPixel(15 + in_x, 19 + in_y, 255, 154, 103);
		gfx.PutPixel(16 + in_x, 19 + in_y, 255, 154, 102);
		gfx.PutPixel(17 + in_x, 19 + in_y, 255, 154, 102);
		gfx.PutPixel(18 + in_x, 19 + in_y, 251, 150, 99);
		gfx.PutPixel(19 + in_x, 19 + in_y, 57, 33, 21);
		gfx.PutPixel(20 + in_x, 19 + in_y, 18, 9, 5);
		gfx.PutPixel(21 + in_x, 19 + in_y, 137, 81, 53);
		gfx.PutPixel(22 + in_x, 19 + in_y, 255, 162, 107);
		gfx.PutPixel(23 + in_x, 19 + in_y, 254, 152, 101);
		gfx.PutPixel(24 + in_x, 19 + in_y, 247, 150, 102);
		gfx.PutPixel(25 + in_x, 19 + in_y, 247, 152, 103);
		gfx.PutPixel(26 + in_x, 19 + in_y, 172, 115, 90);
		gfx.PutPixel(27 + in_x, 19 + in_y, 149, 105, 88);
		gfx.PutPixel(28 + in_x, 19 + in_y, 109, 76, 63);
		gfx.PutPixel(4 + in_x, 20 + in_y, 29, 20, 17);
		gfx.PutPixel(5 + in_x, 20 + in_y, 169, 119, 101);
		gfx.PutPixel(6 + in_x, 20 + in_y, 171, 121, 105);
		gfx.PutPixel(7 + in_x, 20 + in_y, 233, 145, 103);
		gfx.PutPixel(8 + in_x, 20 + in_y, 255, 165, 110);
		gfx.PutPixel(9 + in_x, 20 + in_y, 151, 92, 62);
		gfx.PutPixel(11 + in_x, 20 + in_y, 2, 2, 1);
		gfx.PutPixel(12 + in_x, 20 + in_y, 241, 145, 97);
		gfx.PutPixel(13 + in_x, 20 + in_y, 255, 160, 107);
		gfx.PutPixel(14 + in_x, 20 + in_y, 255, 156, 104);
		gfx.PutPixel(15 + in_x, 20 + in_y, 255, 156, 103);
		gfx.PutPixel(16 + in_x, 20 + in_y, 255, 156, 103);
		gfx.PutPixel(17 + in_x, 20 + in_y, 255, 159, 106);
		gfx.PutPixel(18 + in_x, 20 + in_y, 255, 154, 102);
		gfx.PutPixel(19 + in_x, 20 + in_y, 28, 17, 12);
		gfx.PutPixel(21 + in_x, 20 + in_y, 119, 72, 49);
		gfx.PutPixel(22 + in_x, 20 + in_y, 255, 165, 111);
		gfx.PutPixel(23 + in_x, 20 + in_y, 255, 155, 104);
		gfx.PutPixel(24 + in_x, 20 + in_y, 255, 156, 105);
		gfx.PutPixel(25 + in_x, 20 + in_y, 255, 158, 106);
		gfx.PutPixel(26 + in_x, 20 + in_y, 169, 113, 89);
		gfx.PutPixel(27 + in_x, 20 + in_y, 141, 100, 86);
		gfx.PutPixel(28 + in_x, 20 + in_y, 104, 73, 61);
		gfx.PutPixel(4 + in_x, 21 + in_y, 37, 21, 14);
		gfx.PutPixel(5 + in_x, 21 + in_y, 221, 127, 82);
		gfx.PutPixel(6 + in_x, 21 + in_y, 224, 130, 84);
		gfx.PutPixel(7 + in_x, 21 + in_y, 247, 147, 98);
		gfx.PutPixel(8 + in_x, 21 + in_y, 255, 159, 106);
		gfx.PutPixel(9 + in_x, 21 + in_y, 218, 132, 88);
		gfx.PutPixel(10 + in_x, 21 + in_y, 158, 96, 64);
		gfx.PutPixel(11 + in_x, 21 + in_y, 160, 97, 66);
		gfx.PutPixel(12 + in_x, 21 + in_y, 185, 119, 89);
		gfx.PutPixel(13 + in_x, 21 + in_y, 184, 121, 91);
		gfx.PutPixel(14 + in_x, 21 + in_y, 198, 129, 98);
		gfx.PutPixel(15 + in_x, 21 + in_y, 207, 135, 103);
		gfx.PutPixel(16 + in_x, 21 + in_y, 200, 130, 99);
		gfx.PutPixel(17 + in_x, 21 + in_y, 185, 121, 91);
		gfx.PutPixel(18 + in_x, 21 + in_y, 186, 121, 91);
		gfx.PutPixel(19 + in_x, 21 + in_y, 163, 100, 69);
		gfx.PutPixel(20 + in_x, 21 + in_y, 158, 97, 65);
		gfx.PutPixel(21 + in_x, 21 + in_y, 207, 125, 84);
		gfx.PutPixel(22 + in_x, 21 + in_y, 255, 159, 106);
		gfx.PutPixel(23 + in_x, 21 + in_y, 255, 152, 100);
		gfx.PutPixel(24 + in_x, 21 + in_y, 255, 142, 84);
		gfx.PutPixel(25 + in_x, 21 + in_y, 255, 142, 84);
		gfx.PutPixel(26 + in_x, 21 + in_y, 224, 136, 93);
		gfx.PutPixel(27 + in_x, 21 + in_y, 214, 140, 101);
		gfx.PutPixel(28 + in_x, 21 + in_y, 158, 99, 71);
		gfx.PutPixel(4 + in_x, 22 + in_y, 43, 22, 12);
		gfx.PutPixel(5 + in_x, 22 + in_y, 255, 133, 70);
		gfx.PutPixel(6 + in_x, 22 + in_y, 255, 136, 71);
		gfx.PutPixel(7 + in_x, 22 + in_y, 255, 149, 95);
		gfx.PutPixel(8 + in_x, 22 + in_y, 255, 154, 104);
		gfx.PutPixel(9 + in_x, 22 + in_y, 255, 157, 105);
		gfx.PutPixel(10 + in_x, 22 + in_y, 255, 163, 109);
		gfx.PutPixel(11 + in_x, 22 + in_y, 255, 158, 108);
		gfx.PutPixel(12 + in_x, 22 + in_y, 155, 107, 88);
		gfx.PutPixel(13 + in_x, 22 + in_y, 141, 100, 86);
		gfx.PutPixel(14 + in_x, 22 + in_y, 165, 116, 99);
		gfx.PutPixel(15 + in_x, 22 + in_y, 181, 127, 108);
		gfx.PutPixel(16 + in_x, 22 + in_y, 170, 119, 101);
		gfx.PutPixel(17 + in_x, 22 + in_y, 143, 102, 86);
		gfx.PutPixel(18 + in_x, 22 + in_y, 148, 104, 87);
		gfx.PutPixel(19 + in_x, 22 + in_y, 249, 152, 105);
		gfx.PutPixel(20 + in_x, 22 + in_y, 255, 164, 110);
		gfx.PutPixel(21 + in_x, 22 + in_y, 255, 159, 107);
		gfx.PutPixel(22 + in_x, 22 + in_y, 255, 156, 105);
		gfx.PutPixel(23 + in_x, 22 + in_y, 255, 151, 99);
		gfx.PutPixel(24 + in_x, 22 + in_y, 255, 132, 70);
		gfx.PutPixel(25 + in_x, 22 + in_y, 255, 131, 69);
		gfx.PutPixel(26 + in_x, 22 + in_y, 255, 151, 95);
		gfx.PutPixel(27 + in_x, 22 + in_y, 255, 165, 110);
		gfx.PutPixel(28 + in_x, 22 + in_y, 193, 116, 77);
		gfx.PutPixel(4 + in_x, 23 + in_y, 42, 22, 12);
		gfx.PutPixel(5 + in_x, 23 + in_y, 251, 132, 72);
		gfx.PutPixel(6 + in_x, 23 + in_y, 255, 135, 73);
		gfx.PutPixel(7 + in_x, 23 + in_y, 255, 149, 95);
		gfx.PutPixel(8 + in_x, 23 + in_y, 255, 155, 104);
		gfx.PutPixel(9 + in_x, 23 + in_y, 255, 154, 103);
		gfx.PutPixel(10 + in_x, 23 + in_y, 255, 156, 104);
		gfx.PutPixel(11 + in_x, 23 + in_y, 244, 148, 100);
		gfx.PutPixel(12 + in_x, 23 + in_y, 118, 81, 65);
		gfx.PutPixel(13 + in_x, 23 + in_y, 105, 73, 62);
		gfx.PutPixel(14 + in_x, 23 + in_y, 121, 84, 70);
		gfx.PutPixel(15 + in_x, 23 + in_y, 131, 91, 76);
		gfx.PutPixel(16 + in_x, 23 + in_y, 124, 86, 72);
		gfx.PutPixel(17 + in_x, 23 + in_y, 106, 74, 62);
		gfx.PutPixel(18 + in_x, 23 + in_y, 110, 76, 63);
		gfx.PutPixel(19 + in_x, 23 + in_y, 231, 141, 96);
		gfx.PutPixel(20 + in_x, 23 + in_y, 255, 157, 105);
		gfx.PutPixel(21 + in_x, 23 + in_y, 255, 151, 99);
		gfx.PutPixel(22 + in_x, 23 + in_y, 255, 149, 95);
		gfx.PutPixel(23 + in_x, 23 + in_y, 255, 147, 93);
		gfx.PutPixel(24 + in_x, 23 + in_y, 255, 139, 80);
		gfx.PutPixel(25 + in_x, 23 + in_y, 255, 138, 80);
		gfx.PutPixel(26 + in_x, 23 + in_y, 255, 150, 97);
		gfx.PutPixel(27 + in_x, 23 + in_y, 255, 162, 109);
		gfx.PutPixel(28 + in_x, 23 + in_y, 189, 114, 76);
		gfx.PutPixel(4 + in_x, 24 + in_y, 42, 22, 12);
		gfx.PutPixel(5 + in_x, 24 + in_y, 251, 132, 72);
		gfx.PutPixel(6 + in_x, 24 + in_y, 255, 135, 73);
		gfx.PutPixel(7 + in_x, 24 + in_y, 255, 149, 95);
		gfx.PutPixel(8 + in_x, 24 + in_y, 255, 155, 105);
		gfx.PutPixel(9 + in_x, 24 + in_y, 255, 154, 103);
		gfx.PutPixel(10 + in_x, 24 + in_y, 255, 157, 105);
		gfx.PutPixel(11 + in_x, 24 + in_y, 236, 143, 96);
		gfx.PutPixel(12 + in_x, 24 + in_y, 9, 5, 2);
		gfx.PutPixel(19 + in_x, 24 + in_y, 211, 128, 85);
		gfx.PutPixel(20 + in_x, 24 + in_y, 255, 160, 108);
		gfx.PutPixel(21 + in_x, 24 + in_y, 255, 144, 87);
		gfx.PutPixel(22 + in_x, 24 + in_y, 255, 131, 69);
		gfx.PutPixel(23 + in_x, 24 + in_y, 255, 136, 77);
		gfx.PutPixel(24 + in_x, 24 + in_y, 255, 155, 103);
		gfx.PutPixel(25 + in_x, 24 + in_y, 255, 155, 104);
		gfx.PutPixel(26 + in_x, 24 + in_y, 255, 154, 104);
		gfx.PutPixel(27 + in_x, 24 + in_y, 255, 161, 109);
		gfx.PutPixel(28 + in_x, 24 + in_y, 189, 114, 76);
		gfx.PutPixel(4 + in_x, 25 + in_y, 42, 22, 12);
		gfx.PutPixel(5 + in_x, 25 + in_y, 251, 132, 72);
		gfx.PutPixel(6 + in_x, 25 + in_y, 255, 135, 73);
		gfx.PutPixel(7 + in_x, 25 + in_y, 255, 148, 93);
		gfx.PutPixel(8 + in_x, 25 + in_y, 255, 153, 102);
		gfx.PutPixel(9 + in_x, 25 + in_y, 255, 153, 102);
		gfx.PutPixel(10 + in_x, 25 + in_y, 255, 157, 105);
		gfx.PutPixel(11 + in_x, 25 + in_y, 238, 144, 96);
		gfx.PutPixel(12 + in_x, 25 + in_y, 34, 21, 14);
		gfx.PutPixel(13 + in_x, 25 + in_y, 18, 11, 7);
		gfx.PutPixel(14 + in_x, 25 + in_y, 18, 11, 7);
		gfx.PutPixel(15 + in_x, 25 + in_y, 18, 11, 7);
		gfx.PutPixel(16 + in_x, 25 + in_y, 18, 11, 7);
		gfx.PutPixel(17 + in_x, 25 + in_y, 18, 11, 7);
		gfx.PutPixel(18 + in_x, 25 + in_y, 22, 13, 9);
		gfx.PutPixel(19 + in_x, 25 + in_y, 216, 131, 87);
		gfx.PutPixel(20 + in_x, 25 + in_y, 255, 160, 108);
		gfx.PutPixel(21 + in_x, 25 + in_y, 255, 144, 88);
		gfx.PutPixel(22 + in_x, 25 + in_y, 255, 132, 70);
		gfx.PutPixel(23 + in_x, 25 + in_y, 255, 137, 78);
		gfx.PutPixel(24 + in_x, 25 + in_y, 255, 154, 102);
		gfx.PutPixel(25 + in_x, 25 + in_y, 255, 154, 103);
		gfx.PutPixel(26 + in_x, 25 + in_y, 255, 153, 101);
		gfx.PutPixel(27 + in_x, 25 + in_y, 255, 159, 106);
		gfx.PutPixel(28 + in_x, 25 + in_y, 189, 113, 74);
		gfx.PutPixel(4 + in_x, 26 + in_y, 42, 22, 12);
		gfx.PutPixel(5 + in_x, 26 + in_y, 251, 132, 72);
		gfx.PutPixel(6 + in_x, 26 + in_y, 255, 135, 74);
		gfx.PutPixel(7 + in_x, 26 + in_y, 255, 135, 75);
		gfx.PutPixel(8 + in_x, 26 + in_y, 255, 135, 73);
		gfx.PutPixel(9 + in_x, 26 + in_y, 255, 143, 85);
		gfx.PutPixel(10 + in_x, 26 + in_y, 255, 155, 105);
		gfx.PutPixel(11 + in_x, 26 + in_y, 254, 153, 103);
		gfx.PutPixel(12 + in_x, 26 + in_y, 238, 144, 96);
		gfx.PutPixel(13 + in_x, 26 + in_y, 237, 143, 96);
		gfx.PutPixel(14 + in_x, 26 + in_y, 237, 143, 96);
		gfx.PutPixel(15 + in_x, 26 + in_y, 237, 143, 96);
		gfx.PutPixel(16 + in_x, 26 + in_y, 237, 143, 96);
		gfx.PutPixel(17 + in_x, 26 + in_y, 237, 143, 96);
		gfx.PutPixel(18 + in_x, 26 + in_y, 237, 143, 96);
		gfx.PutPixel(19 + in_x, 26 + in_y, 252, 152, 102);
		gfx.PutPixel(20 + in_x, 26 + in_y, 255, 155, 105);
		gfx.PutPixel(21 + in_x, 26 + in_y, 255, 144, 88);
		gfx.PutPixel(22 + in_x, 26 + in_y, 255, 132, 70);
		gfx.PutPixel(23 + in_x, 26 + in_y, 255, 137, 78);
		gfx.PutPixel(24 + in_x, 26 + in_y, 255, 154, 103);
		gfx.PutPixel(25 + in_x, 26 + in_y, 255, 155, 104);
		gfx.PutPixel(26 + in_x, 26 + in_y, 255, 140, 83);
		gfx.PutPixel(27 + in_x, 26 + in_y, 255, 141, 77);
		gfx.PutPixel(28 + in_x, 26 + in_y, 189, 100, 56);
		gfx.PutPixel(4 + in_x, 27 + in_y, 45, 23, 13);
		gfx.PutPixel(5 + in_x, 27 + in_y, 255, 141, 77);
		gfx.PutPixel(6 + in_x, 27 + in_y, 255, 144, 79);
		gfx.PutPixel(7 + in_x, 27 + in_y, 255, 136, 74);
		gfx.PutPixel(8 + in_x, 27 + in_y, 255, 132, 70);
		gfx.PutPixel(9 + in_x, 27 + in_y, 255, 142, 84);
		gfx.PutPixel(10 + in_x, 27 + in_y, 255, 156, 107);
		gfx.PutPixel(11 + in_x, 27 + in_y, 255, 155, 105);
		gfx.PutPixel(12 + in_x, 27 + in_y, 255, 158, 107);
		gfx.PutPixel(13 + in_x, 27 + in_y, 255, 158, 107);
		gfx.PutPixel(14 + in_x, 27 + in_y, 255, 158, 107);
		gfx.PutPixel(15 + in_x, 27 + in_y, 255, 158, 107);
		gfx.PutPixel(16 + in_x, 27 + in_y, 255, 158, 107);
		gfx.PutPixel(17 + in_x, 27 + in_y, 255, 158, 107);
		gfx.PutPixel(18 + in_x, 27 + in_y, 255, 158, 107);
		gfx.PutPixel(19 + in_x, 27 + in_y, 255, 156, 105);
		gfx.PutPixel(20 + in_x, 27 + in_y, 255, 156, 107);
		gfx.PutPixel(21 + in_x, 27 + in_y, 255, 144, 88);
		gfx.PutPixel(22 + in_x, 27 + in_y, 255, 131, 68);
		gfx.PutPixel(23 + in_x, 27 + in_y, 255, 136, 76);
		gfx.PutPixel(24 + in_x, 27 + in_y, 255, 154, 103);
		gfx.PutPixel(25 + in_x, 27 + in_y, 255, 155, 104);
		gfx.PutPixel(26 + in_x, 27 + in_y, 255, 145, 84);
		gfx.PutPixel(27 + in_x, 27 + in_y, 255, 148, 79);
		gfx.PutPixel(28 + in_x, 27 + in_y, 201, 105, 57);
		gfx.PutPixel(4 + in_x, 28 + in_y, 21, 11, 6);
		gfx.PutPixel(5 + in_x, 28 + in_y, 126, 66, 36);
		gfx.PutPixel(6 + in_x, 28 + in_y, 128, 68, 37);
		gfx.PutPixel(7 + in_x, 28 + in_y, 222, 117, 64);
		gfx.PutPixel(8 + in_x, 28 + in_y, 255, 137, 74);
		gfx.PutPixel(9 + in_x, 28 + in_y, 255, 138, 79);
		gfx.PutPixel(10 + in_x, 28 + in_y, 255, 145, 89);
		gfx.PutPixel(11 + in_x, 28 + in_y, 255, 144, 88);
		gfx.PutPixel(12 + in_x, 28 + in_y, 255, 144, 88);
		gfx.PutPixel(13 + in_x, 28 + in_y, 255, 144, 88);
		gfx.PutPixel(14 + in_x, 28 + in_y, 255, 144, 88);
		gfx.PutPixel(15 + in_x, 28 + in_y, 255, 144, 88);
		gfx.PutPixel(16 + in_x, 28 + in_y, 255, 144, 88);
		gfx.PutPixel(17 + in_x, 28 + in_y, 255, 144, 88);
		gfx.PutPixel(18 + in_x, 28 + in_y, 255, 144, 88);
		gfx.PutPixel(19 + in_x, 28 + in_y, 255, 144, 88);
		gfx.PutPixel(20 + in_x, 28 + in_y, 255, 144, 88);
		gfx.PutPixel(21 + in_x, 28 + in_y, 255, 144, 88);
		gfx.PutPixel(22 + in_x, 28 + in_y, 255, 144, 88);
		gfx.PutPixel(23 + in_x, 28 + in_y, 255, 146, 91);
		gfx.PutPixel(24 + in_x, 28 + in_y, 255, 154, 103);
		gfx.PutPixel(25 + in_x, 28 + in_y, 255, 158, 106);
		gfx.PutPixel(26 + in_x, 28 + in_y, 161, 90, 54);
		gfx.PutPixel(27 + in_x, 28 + in_y, 128, 70, 38);
		gfx.PutPixel(28 + in_x, 28 + in_y, 95, 50, 27);
		gfx.PutPixel(7 + in_x, 29 + in_y, 194, 101, 55);
		gfx.PutPixel(8 + in_x, 29 + in_y, 255, 147, 80);
		gfx.PutPixel(9 + in_x, 29 + in_y, 255, 140, 76);
		gfx.PutPixel(10 + in_x, 29 + in_y, 255, 139, 74);
		gfx.PutPixel(11 + in_x, 29 + in_y, 255, 139, 74);
		gfx.PutPixel(12 + in_x, 29 + in_y, 255, 139, 74);
		gfx.PutPixel(13 + in_x, 29 + in_y, 255, 139, 74);
		gfx.PutPixel(14 + in_x, 29 + in_y, 255, 139, 74);
		gfx.PutPixel(15 + in_x, 29 + in_y, 255, 139, 74);
		gfx.PutPixel(16 + in_x, 29 + in_y, 255, 139, 74);
		gfx.PutPixel(17 + in_x, 29 + in_y, 255, 139, 74);
		gfx.PutPixel(18 + in_x, 29 + in_y, 255, 139, 74);
		gfx.PutPixel(19 + in_x, 29 + in_y, 255, 139, 74);
		gfx.PutPixel(20 + in_x, 29 + in_y, 255, 138, 72);
		gfx.PutPixel(21 + in_x, 29 + in_y, 255, 151, 92);
		gfx.PutPixel(22 + in_x, 29 + in_y, 255, 164, 112);
		gfx.PutPixel(23 + in_x, 29 + in_y, 255, 162, 109);
		gfx.PutPixel(24 + in_x, 29 + in_y, 255, 161, 108);
		gfx.PutPixel(25 + in_x, 29 + in_y, 255, 168, 112);
		gfx.PutPixel(26 + in_x, 29 + in_y, 57, 35, 25);
		gfx.PutPixel(7 + in_x, 30 + in_y, 139, 72, 40);
		gfx.PutPixel(8 + in_x, 30 + in_y, 189, 104, 56);
		gfx.PutPixel(9 + in_x, 30 + in_y, 189, 99, 54);
		gfx.PutPixel(10 + in_x, 30 + in_y, 189, 99, 54);
		gfx.PutPixel(11 + in_x, 30 + in_y, 189, 99, 54);
		gfx.PutPixel(12 + in_x, 30 + in_y, 189, 99, 54);
		gfx.PutPixel(13 + in_x, 30 + in_y, 189, 99, 54);
		gfx.PutPixel(14 + in_x, 30 + in_y, 189, 99, 54);
		gfx.PutPixel(15 + in_x, 30 + in_y, 189, 99, 54);
		gfx.PutPixel(16 + in_x, 30 + in_y, 189, 99, 54);
		gfx.PutPixel(17 + in_x, 30 + in_y, 189, 99, 54);
		gfx.PutPixel(18 + in_x, 30 + in_y, 189, 99, 54);
		gfx.PutPixel(19 + in_x, 30 + in_y, 189, 99, 54);
		gfx.PutPixel(20 + in_x, 30 + in_y, 189, 99, 53);
		gfx.PutPixel(21 + in_x, 30 + in_y, 189, 107, 65);
		gfx.PutPixel(22 + in_x, 30 + in_y, 189, 115, 78);
		gfx.PutPixel(23 + in_x, 30 + in_y, 189, 114, 76);
		gfx.PutPixel(24 + in_x, 30 + in_y, 189, 114, 76);
		gfx.PutPixel(25 + in_x, 30 + in_y, 188, 119, 79);
		gfx.PutPixel(26 + in_x, 30 + in_y, 49, 30, 20);
		gfx.PutPixel(7 + in_x, 32 + in_y, 1, 1, 1);
		gfx.PutPixel(8 + in_x, 32 + in_y, 2, 2, 1);
		gfx.PutPixel(9 + in_x, 32 + in_y, 2, 1, 1);
		gfx.PutPixel(10 + in_x, 32 + in_y, 1, 0, 0);
		gfx.PutPixel(11 + in_x, 32 + in_y, 1, 1, 1);
		gfx.PutPixel(12 + in_x, 32 + in_y, 3, 2, 1);
		gfx.PutPixel(13 + in_x, 32 + in_y, 3, 2, 2);
		gfx.PutPixel(14 + in_x, 32 + in_y, 3, 2, 2);
		gfx.PutPixel(15 + in_x, 32 + in_y, 4, 2, 2);
		gfx.PutPixel(16 + in_x, 32 + in_y, 3, 2, 2);
		gfx.PutPixel(17 + in_x, 32 + in_y, 2, 2, 1);
		gfx.PutPixel(18 + in_x, 32 + in_y, 2, 2, 1);
		gfx.PutPixel(19 + in_x, 32 + in_y, 1, 1, 1);
		gfx.PutPixel(20 + in_x, 32 + in_y, 0, 1, 0);
		gfx.PutPixel(21 + in_x, 32 + in_y, 2, 1, 1);
		gfx.PutPixel(22 + in_x, 32 + in_y, 3, 2, 2);
		gfx.PutPixel(23 + in_x, 32 + in_y, 3, 2, 1);
		gfx.PutPixel(24 + in_x, 32 + in_y, 3, 2, 1);
		gfx.PutPixel(25 + in_x, 32 + in_y, 3, 2, 2);
		gfx.PutPixel(7 + in_x, 33 + in_y, 101, 76, 51);
		gfx.PutPixel(8 + in_x, 33 + in_y, 149, 110, 74);
		gfx.PutPixel(9 + in_x, 33 + in_y, 109, 80, 54);
		gfx.PutPixel(10 + in_x, 33 + in_y, 54, 40, 27);
		gfx.PutPixel(11 + in_x, 33 + in_y, 68, 49, 33);
		gfx.PutPixel(12 + in_x, 33 + in_y, 156, 115, 79);
		gfx.PutPixel(13 + in_x, 33 + in_y, 163, 121, 83);
		gfx.PutPixel(14 + in_x, 33 + in_y, 195, 125, 84);
		gfx.PutPixel(15 + in_x, 33 + in_y, 213, 130, 87);
		gfx.PutPixel(16 + in_x, 33 + in_y, 194, 122, 82);
		gfx.PutPixel(17 + in_x, 33 + in_y, 136, 102, 69);
		gfx.PutPixel(18 + in_x, 33 + in_y, 136, 101, 69);
		gfx.PutPixel(19 + in_x, 33 + in_y, 73, 53, 37);
		gfx.PutPixel(20 + in_x, 33 + in_y, 51, 38, 25);
		gfx.PutPixel(21 + in_x, 33 + in_y, 112, 83, 56);
		gfx.PutPixel(22 + in_x, 33 + in_y, 170, 125, 85);
		gfx.PutPixel(23 + in_x, 33 + in_y, 164, 120, 82);
		gfx.PutPixel(24 + in_x, 33 + in_y, 165, 120, 82);
		gfx.PutPixel(25 + in_x, 33 + in_y, 169, 125, 85);
		gfx.PutPixel(26 + in_x, 33 + in_y, 42, 31, 20);
		gfx.PutPixel(7 + in_x, 34 + in_y, 131, 98, 67);
		gfx.PutPixel(8 + in_x, 34 + in_y, 195, 144, 98);
		gfx.PutPixel(9 + in_x, 34 + in_y, 141, 104, 70);
		gfx.PutPixel(10 + in_x, 34 + in_y, 67, 49, 33);
		gfx.PutPixel(11 + in_x, 34 + in_y, 84, 61, 41);
		gfx.PutPixel(12 + in_x, 34 + in_y, 196, 145, 99);
		gfx.PutPixel(13 + in_x, 34 + in_y, 205, 152, 104);
		gfx.PutPixel(14 + in_x, 34 + in_y, 246, 157, 106);
		gfx.PutPixel(15 + in_x, 34 + in_y, 255, 163, 109);
		gfx.PutPixel(16 + in_x, 34 + in_y, 243, 152, 102);
		gfx.PutPixel(17 + in_x, 34 + in_y, 166, 124, 85);
		gfx.PutPixel(18 + in_x, 34 + in_y, 166, 124, 84);
		gfx.PutPixel(19 + in_x, 34 + in_y, 90, 66, 45);
		gfx.PutPixel(20 + in_x, 34 + in_y, 63, 46, 31);
		gfx.PutPixel(21 + in_x, 34 + in_y, 139, 103, 70);
		gfx.PutPixel(22 + in_x, 34 + in_y, 212, 156, 106);
		gfx.PutPixel(23 + in_x, 34 + in_y, 206, 151, 103);
		gfx.PutPixel(24 + in_x, 34 + in_y, 216, 158, 107);
		gfx.PutPixel(25 + in_x, 34 + in_y, 223, 163, 112);
		gfx.PutPixel(26 + in_x, 34 + in_y, 49, 36, 24);
		gfx.PutPixel(4 + in_x, 35 + in_y, 14, 10, 7);
		gfx.PutPixel(5 + in_x, 35 + in_y, 82, 59, 40);
		gfx.PutPixel(6 + in_x, 35 + in_y, 87, 64, 44);
		gfx.PutPixel(7 + in_x, 35 + in_y, 83, 61, 42);
		gfx.PutPixel(8 + in_x, 35 + in_y, 89, 66, 45);
		gfx.PutPixel(9 + in_x, 35 + in_y, 79, 58, 40);
		gfx.PutPixel(10 + in_x, 35 + in_y, 70, 52, 35);
		gfx.PutPixel(11 + in_x, 35 + in_y, 79, 58, 39);
		gfx.PutPixel(12 + in_x, 35 + in_y, 161, 119, 81);
		gfx.PutPixel(13 + in_x, 35 + in_y, 168, 124, 85);
		gfx.PutPixel(14 + in_x, 35 + in_y, 195, 133, 90);
		gfx.PutPixel(15 + in_x, 35 + in_y, 210, 139, 94);
		gfx.PutPixel(16 + in_x, 35 + in_y, 203, 137, 93);
		gfx.PutPixel(17 + in_x, 35 + in_y, 181, 134, 91);
		gfx.PutPixel(18 + in_x, 35 + in_y, 179, 132, 90);
		gfx.PutPixel(19 + in_x, 35 + in_y, 90, 66, 45);
		gfx.PutPixel(20 + in_x, 35 + in_y, 62, 46, 31);
		gfx.PutPixel(21 + in_x, 35 + in_y, 127, 94, 64);
		gfx.PutPixel(22 + in_x, 35 + in_y, 190, 140, 96);
		gfx.PutPixel(23 + in_x, 35 + in_y, 167, 123, 84);
		gfx.PutPixel(24 + in_x, 35 + in_y, 100, 73, 50);
		gfx.PutPixel(25 + in_x, 35 + in_y, 102, 75, 51);
		gfx.PutPixel(26 + in_x, 35 + in_y, 78, 57, 39);
		gfx.PutPixel(27 + in_x, 35 + in_y, 77, 57, 39);
		gfx.PutPixel(28 + in_x, 35 + in_y, 52, 38, 26);
		gfx.PutPixel(4 + in_x, 36 + in_y, 29, 21, 15);
		gfx.PutPixel(5 + in_x, 36 + in_y, 174, 128, 87);
		gfx.PutPixel(6 + in_x, 36 + in_y, 184, 136, 93);
		gfx.PutPixel(7 + in_x, 36 + in_y, 38, 27, 18);
		gfx.PutPixel(9 + in_x, 36 + in_y, 20, 15, 11);
		gfx.PutPixel(10 + in_x, 36 + in_y, 75, 55, 37);
		gfx.PutPixel(11 + in_x, 36 + in_y, 77, 57, 38);
		gfx.PutPixel(12 + in_x, 36 + in_y, 130, 95, 65);
		gfx.PutPixel(13 + in_x, 36 + in_y, 134, 99, 67);
		gfx.PutPixel(14 + in_x, 36 + in_y, 151, 113, 77);
		gfx.PutPixel(15 + in_x, 36 + in_y, 161, 121, 83);
		gfx.PutPixel(16 + in_x, 36 + in_y, 171, 128, 87);
		gfx.PutPixel(17 + in_x, 36 + in_y, 201, 148, 101);
		gfx.PutPixel(18 + in_x, 36 + in_y, 197, 145, 98);
		gfx.PutPixel(19 + in_x, 36 + in_y, 92, 68, 46);
		gfx.PutPixel(20 + in_x, 36 + in_y, 62, 46, 31);
		gfx.PutPixel(21 + in_x, 36 + in_y, 119, 88, 60);
		gfx.PutPixel(22 + in_x, 36 + in_y, 176, 130, 89);
		gfx.PutPixel(23 + in_x, 36 + in_y, 136, 100, 68);
		gfx.PutPixel(26 + in_x, 36 + in_y, 106, 77, 53);
		gfx.PutPixel(27 + in_x, 36 + in_y, 161, 119, 81);
		gfx.PutPixel(28 + in_x, 36 + in_y, 109, 80, 55);
		gfx.PutPixel(4 + in_x, 37 + in_y, 27, 20, 14);
		gfx.PutPixel(5 + in_x, 37 + in_y, 163, 120, 82);
		gfx.PutPixel(6 + in_x, 37 + in_y, 173, 128, 87);
		gfx.PutPixel(7 + in_x, 37 + in_y, 43, 31, 21);
		gfx.PutPixel(9 + in_x, 37 + in_y, 27, 20, 14);
		gfx.PutPixel(10 + in_x, 37 + in_y, 74, 55, 37);
		gfx.PutPixel(11 + in_x, 37 + in_y, 78, 58, 38);
		gfx.PutPixel(12 + in_x, 37 + in_y, 144, 106, 72);
		gfx.PutPixel(13 + in_x, 37 + in_y, 150, 111, 75);
		gfx.PutPixel(14 + in_x, 37 + in_y, 155, 114, 77);
		gfx.PutPixel(15 + in_x, 37 + in_y, 156, 115, 79);
		gfx.PutPixel(16 + in_x, 37 + in_y, 166, 123, 83);
		gfx.PutPixel(17 + in_x, 37 + in_y, 193, 142, 97);
		gfx.PutPixel(18 + in_x, 37 + in_y, 189, 139, 95);
		gfx.PutPixel(19 + in_x, 37 + in_y, 91, 67, 46);
		gfx.PutPixel(20 + in_x, 37 + in_y, 63, 47, 31);
		gfx.PutPixel(21 + in_x, 37 + in_y, 115, 85, 58);
		gfx.PutPixel(22 + in_x, 37 + in_y, 168, 124, 85);
		gfx.PutPixel(23 + in_x, 37 + in_y, 132, 97, 66);
		gfx.PutPixel(24 + in_x, 37 + in_y, 3, 2, 1);
		gfx.PutPixel(26 + in_x, 37 + in_y, 111, 81, 56);
		gfx.PutPixel(27 + in_x, 37 + in_y, 163, 120, 82);
		gfx.PutPixel(28 + in_x, 37 + in_y, 111, 81, 56);
		gfx.PutPixel(4 + in_x, 38 + in_y, 27, 20, 14);
		gfx.PutPixel(5 + in_x, 38 + in_y, 163, 120, 82);
		gfx.PutPixel(6 + in_x, 38 + in_y, 173, 128, 87);
		gfx.PutPixel(7 + in_x, 38 + in_y, 43, 31, 21);
		gfx.PutPixel(9 + in_x, 38 + in_y, 27, 20, 14);
		gfx.PutPixel(10 + in_x, 38 + in_y, 73, 54, 37);
		gfx.PutPixel(11 + in_x, 38 + in_y, 81, 60, 40);
		gfx.PutPixel(12 + in_x, 38 + in_y, 186, 138, 94);
		gfx.PutPixel(13 + in_x, 38 + in_y, 201, 148, 101);
		gfx.PutPixel(14 + in_x, 38 + in_y, 148, 109, 74);
		gfx.PutPixel(15 + in_x, 38 + in_y, 112, 83, 56);
		gfx.PutPixel(16 + in_x, 38 + in_y, 131, 96, 65);
		gfx.PutPixel(17 + in_x, 38 + in_y, 168, 124, 84);
		gfx.PutPixel(18 + in_x, 38 + in_y, 164, 121, 82);
		gfx.PutPixel(19 + in_x, 38 + in_y, 87, 64, 44);
		gfx.PutPixel(20 + in_x, 38 + in_y, 66, 49, 33);
		gfx.PutPixel(21 + in_x, 38 + in_y, 95, 70, 48);
		gfx.PutPixel(22 + in_x, 38 + in_y, 126, 93, 62);
		gfx.PutPixel(23 + in_x, 38 + in_y, 100, 74, 49);
		gfx.PutPixel(24 + in_x, 38 + in_y, 2, 1, 1);
		gfx.PutPixel(26 + in_x, 38 + in_y, 144, 106, 73);
		gfx.PutPixel(27 + in_x, 38 + in_y, 213, 156, 106);
		gfx.PutPixel(28 + in_x, 38 + in_y, 144, 106, 73);
		gfx.PutPixel(4 + in_x, 39 + in_y, 26, 20, 14);
		gfx.PutPixel(5 + in_x, 39 + in_y, 160, 118, 81);
		gfx.PutPixel(6 + in_x, 39 + in_y, 170, 126, 86);
		gfx.PutPixel(7 + in_x, 39 + in_y, 42, 30, 21);
		gfx.PutPixel(9 + in_x, 39 + in_y, 27, 20, 14);
		gfx.PutPixel(10 + in_x, 39 + in_y, 73, 54, 37);
		gfx.PutPixel(11 + in_x, 39 + in_y, 81, 60, 40);
		gfx.PutPixel(12 + in_x, 39 + in_y, 190, 140, 96);
		gfx.PutPixel(13 + in_x, 39 + in_y, 206, 152, 103);
		gfx.PutPixel(14 + in_x, 39 + in_y, 148, 109, 74);
		gfx.PutPixel(15 + in_x, 39 + in_y, 108, 80, 55);
		gfx.PutPixel(16 + in_x, 39 + in_y, 128, 95, 64);
		gfx.PutPixel(17 + in_x, 39 + in_y, 167, 123, 83);
		gfx.PutPixel(18 + in_x, 39 + in_y, 163, 120, 81);
		gfx.PutPixel(19 + in_x, 39 + in_y, 87, 64, 44);
		gfx.PutPixel(20 + in_x, 39 + in_y, 66, 49, 33);
		gfx.PutPixel(21 + in_x, 39 + in_y, 94, 70, 48);
		gfx.PutPixel(22 + in_x, 39 + in_y, 124, 91, 61);
		gfx.PutPixel(23 + in_x, 39 + in_y, 98, 72, 48);
		gfx.PutPixel(24 + in_x, 39 + in_y, 2, 1, 1);
		gfx.PutPixel(26 + in_x, 39 + in_y, 144, 107, 73);
		gfx.PutPixel(27 + in_x, 39 + in_y, 213, 156, 107);
		gfx.PutPixel(28 + in_x, 39 + in_y, 144, 107, 73);
		gfx.PutPixel(4 + in_x, 40 + in_y, 38, 27, 16);
		gfx.PutPixel(5 + in_x, 40 + in_y, 228, 159, 98);
		gfx.PutPixel(6 + in_x, 40 + in_y, 234, 169, 104);
		gfx.PutPixel(7 + in_x, 40 + in_y, 60, 41, 25);
		gfx.PutPixel(9 + in_x, 40 + in_y, 27, 20, 14);
		gfx.PutPixel(10 + in_x, 40 + in_y, 74, 55, 37);
		gfx.PutPixel(11 + in_x, 40 + in_y, 77, 56, 39);
		gfx.PutPixel(12 + in_x, 40 + in_y, 134, 99, 67);
		gfx.PutPixel(13 + in_x, 40 + in_y, 139, 102, 69);
		gfx.PutPixel(14 + in_x, 40 + in_y, 147, 109, 74);
		gfx.PutPixel(15 + in_x, 40 + in_y, 152, 112, 77);
		gfx.PutPixel(16 + in_x, 40 + in_y, 162, 120, 81);
		gfx.PutPixel(17 + in_x, 40 + in_y, 190, 140, 95);
		gfx.PutPixel(18 + in_x, 40 + in_y, 186, 137, 93);
		gfx.PutPixel(19 + in_x, 40 + in_y, 91, 67, 45);
		gfx.PutPixel(20 + in_x, 40 + in_y, 65, 48, 32);
		gfx.PutPixel(21 + in_x, 40 + in_y, 103, 76, 52);
		gfx.PutPixel(22 + in_x, 40 + in_y, 143, 105, 71);
		gfx.PutPixel(23 + in_x, 40 + in_y, 112, 83, 56);
		gfx.PutPixel(24 + in_x, 40 + in_y, 2, 1, 1);
		gfx.PutPixel(26 + in_x, 40 + in_y, 178, 124, 77);
		gfx.PutPixel(27 + in_x, 40 + in_y, 244, 182, 113);
		gfx.PutPixel(28 + in_x, 40 + in_y, 178, 124, 77);
		gfx.PutPixel(4 + in_x, 41 + in_y, 45, 31, 18);
		gfx.PutPixel(5 + in_x, 41 + in_y, 255, 184, 110);
		gfx.PutPixel(6 + in_x, 41 + in_y, 255, 196, 117);
		gfx.PutPixel(7 + in_x, 41 + in_y, 71, 48, 29);
		gfx.PutPixel(9 + in_x, 41 + in_y, 26, 19, 14);
		gfx.PutPixel(10 + in_x, 41 + in_y, 72, 53, 36);
		gfx.PutPixel(11 + in_x, 41 + in_y, 72, 53, 37);
		gfx.PutPixel(12 + in_x, 41 + in_y, 109, 81, 54);
		gfx.PutPixel(13 + in_x, 41 + in_y, 110, 81, 55);
		gfx.PutPixel(14 + in_x, 41 + in_y, 147, 109, 74);
		gfx.PutPixel(15 + in_x, 41 + in_y, 170, 126, 86);
		gfx.PutPixel(16 + in_x, 41 + in_y, 176, 131, 89);
		gfx.PutPixel(17 + in_x, 41 + in_y, 201, 148, 101);
		gfx.PutPixel(18 + in_x, 41 + in_y, 197, 145, 98);
		gfx.PutPixel(19 + in_x, 41 + in_y, 88, 65, 44);
		gfx.PutPixel(20 + in_x, 41 + in_y, 58, 43, 29);
		gfx.PutPixel(21 + in_x, 41 + in_y, 106, 78, 53);
		gfx.PutPixel(22 + in_x, 41 + in_y, 155, 114, 77);
		gfx.PutPixel(23 + in_x, 41 + in_y, 121, 89, 60);
		gfx.PutPixel(24 + in_x, 41 + in_y, 2, 1, 1);
		gfx.PutPixel(26 + in_x, 41 + in_y, 202, 138, 83);
		gfx.PutPixel(27 + in_x, 41 + in_y, 255, 203, 122);
		gfx.PutPixel(28 + in_x, 41 + in_y, 202, 138, 83);
		gfx.PutPixel(4 + in_x, 42 + in_y, 25, 18, 10);
		gfx.PutPixel(5 + in_x, 42 + in_y, 155, 107, 63);
		gfx.PutPixel(6 + in_x, 42 + in_y, 158, 114, 68);
		gfx.PutPixel(7 + in_x, 42 + in_y, 41, 28, 17);
		gfx.PutPixel(9 + in_x, 42 + in_y, 34, 25, 17);
		gfx.PutPixel(10 + in_x, 42 + in_y, 93, 69, 47);
		gfx.PutPixel(11 + in_x, 42 + in_y, 92, 68, 47);
		gfx.PutPixel(12 + in_x, 42 + in_y, 133, 98, 66);
		gfx.PutPixel(13 + in_x, 42 + in_y, 136, 100, 68);
		gfx.PutPixel(14 + in_x, 42 + in_y, 148, 110, 75);
		gfx.PutPixel(15 + in_x, 42 + in_y, 155, 115, 78);
		gfx.PutPixel(16 + in_x, 42 + in_y, 163, 120, 82);
		gfx.PutPixel(17 + in_x, 42 + in_y, 186, 137, 93);
		gfx.PutPixel(18 + in_x, 42 + in_y, 183, 135, 92);
		gfx.PutPixel(19 + in_x, 42 + in_y, 120, 88, 60);
		gfx.PutPixel(20 + in_x, 42 + in_y, 105, 77, 52);
		gfx.PutPixel(21 + in_x, 42 + in_y, 111, 82, 56);
		gfx.PutPixel(22 + in_x, 42 + in_y, 118, 87, 59);
		gfx.PutPixel(23 + in_x, 42 + in_y, 96, 70, 47);
		gfx.PutPixel(24 + in_x, 42 + in_y, 2, 1, 1);
		gfx.PutPixel(26 + in_x, 42 + in_y, 117, 81, 48);
		gfx.PutPixel(27 + in_x, 42 + in_y, 158, 119, 72);
		gfx.PutPixel(28 + in_x, 42 + in_y, 117, 81, 48);
		gfx.PutPixel(9 + in_x, 43 + in_y, 46, 34, 22);
		gfx.PutPixel(10 + in_x, 43 + in_y, 125, 92, 63);
		gfx.PutPixel(11 + in_x, 43 + in_y, 123, 92, 62);
		gfx.PutPixel(12 + in_x, 43 + in_y, 165, 122, 82);
		gfx.PutPixel(13 + in_x, 43 + in_y, 170, 126, 86);
		gfx.PutPixel(14 + in_x, 43 + in_y, 150, 110, 75);
		gfx.PutPixel(15 + in_x, 43 + in_y, 135, 100, 68);
		gfx.PutPixel(16 + in_x, 43 + in_y, 145, 107, 72);
		gfx.PutPixel(17 + in_x, 43 + in_y, 165, 122, 82);
		gfx.PutPixel(18 + in_x, 43 + in_y, 164, 121, 83);
		gfx.PutPixel(19 + in_x, 43 + in_y, 169, 125, 85);
		gfx.PutPixel(20 + in_x, 43 + in_y, 177, 130, 89);
		gfx.PutPixel(21 + in_x, 43 + in_y, 119, 88, 60);
		gfx.PutPixel(22 + in_x, 43 + in_y, 62, 46, 31);
		gfx.PutPixel(23 + in_x, 43 + in_y, 56, 41, 28);
		gfx.PutPixel(24 + in_x, 43 + in_y, 1, 1, 1);
		gfx.PutPixel(9 + in_x, 44 + in_y, 46, 33, 22);
		gfx.PutPixel(10 + in_x, 44 + in_y, 125, 92, 63);
		gfx.PutPixel(11 + in_x, 44 + in_y, 122, 91, 62);
		gfx.PutPixel(12 + in_x, 44 + in_y, 161, 119, 80);
		gfx.PutPixel(13 + in_x, 44 + in_y, 165, 123, 83);
		gfx.PutPixel(14 + in_x, 44 + in_y, 150, 110, 75);
		gfx.PutPixel(15 + in_x, 44 + in_y, 138, 102, 69);
		gfx.PutPixel(16 + in_x, 44 + in_y, 146, 108, 73);
		gfx.PutPixel(17 + in_x, 44 + in_y, 164, 122, 82);
		gfx.PutPixel(18 + in_x, 44 + in_y, 163, 121, 82);
		gfx.PutPixel(19 + in_x, 44 + in_y, 164, 121, 82);
		gfx.PutPixel(20 + in_x, 44 + in_y, 170, 125, 85);
		gfx.PutPixel(21 + in_x, 44 + in_y, 121, 90, 61);
		gfx.PutPixel(22 + in_x, 44 + in_y, 74, 55, 37);
		gfx.PutPixel(23 + in_x, 44 + in_y, 65, 47, 32);
		gfx.PutPixel(24 + in_x, 44 + in_y, 1, 1, 1);
		gfx.PutPixel(9 + in_x, 45 + in_y, 52, 39, 27);
		gfx.PutPixel(10 + in_x, 45 + in_y, 145, 107, 73);
		gfx.PutPixel(11 + in_x, 45 + in_y, 139, 102, 69);
		gfx.PutPixel(12 + in_x, 45 + in_y, 142, 104, 71);
		gfx.PutPixel(13 + in_x, 45 + in_y, 141, 105, 71);
		gfx.PutPixel(14 + in_x, 45 + in_y, 147, 108, 73);
		gfx.PutPixel(15 + in_x, 45 + in_y, 151, 111, 76);
		gfx.PutPixel(16 + in_x, 45 + in_y, 148, 109, 74);
		gfx.PutPixel(17 + in_x, 45 + in_y, 141, 105, 71);
		gfx.PutPixel(18 + in_x, 45 + in_y, 142, 104, 71);
		gfx.PutPixel(19 + in_x, 45 + in_y, 150, 111, 75);
		gfx.PutPixel(20 + in_x, 45 + in_y, 153, 112, 76);
		gfx.PutPixel(21 + in_x, 45 + in_y, 149, 109, 74);
		gfx.PutPixel(22 + in_x, 45 + in_y, 150, 110, 74);
		gfx.PutPixel(23 + in_x, 45 + in_y, 121, 90, 61);
		gfx.PutPixel(24 + in_x, 45 + in_y, 3, 2, 1);
		gfx.PutPixel(9 + in_x, 46 + in_y, 55, 41, 28);
		gfx.PutPixel(10 + in_x, 46 + in_y, 153, 112, 78);
		gfx.PutPixel(11 + in_x, 46 + in_y, 145, 107, 73);
		gfx.PutPixel(12 + in_x, 46 + in_y, 144, 105, 72);
		gfx.PutPixel(13 + in_x, 46 + in_y, 142, 105, 72);
		gfx.PutPixel(14 + in_x, 46 + in_y, 153, 112, 76);
		gfx.PutPixel(15 + in_x, 46 + in_y, 160, 118, 80);
		gfx.PutPixel(16 + in_x, 46 + in_y, 155, 114, 78);
		gfx.PutPixel(17 + in_x, 46 + in_y, 145, 108, 73);
		gfx.PutPixel(18 + in_x, 46 + in_y, 147, 108, 73);
		gfx.PutPixel(19 + in_x, 46 + in_y, 155, 114, 77);
		gfx.PutPixel(20 + in_x, 46 + in_y, 156, 115, 78);
		gfx.PutPixel(21 + in_x, 46 + in_y, 157, 115, 78);
		gfx.PutPixel(22 + in_x, 46 + in_y, 162, 119, 80);
		gfx.PutPixel(23 + in_x, 46 + in_y, 131, 97, 66);
		gfx.PutPixel(24 + in_x, 46 + in_y, 3, 2, 1);
		gfx.PutPixel(9 + in_x, 47 + in_y, 29, 21, 11);
		gfx.PutPixel(10 + in_x, 47 + in_y, 81, 58, 30);
		gfx.PutPixel(11 + in_x, 47 + in_y, 77, 57, 30);
		gfx.PutPixel(12 + in_x, 47 + in_y, 89, 68, 41);
		gfx.PutPixel(13 + in_x, 47 + in_y, 91, 71, 44);
		gfx.PutPixel(14 + in_x, 47 + in_y, 70, 52, 34);
		gfx.PutPixel(15 + in_x, 47 + in_y, 58, 42, 29);
		gfx.PutPixel(16 + in_x, 47 + in_y, 56, 41, 28);
		gfx.PutPixel(17 + in_x, 47 + in_y, 53, 39, 27);
		gfx.PutPixel(18 + in_x, 47 + in_y, 54, 40, 27);
		gfx.PutPixel(19 + in_x, 47 + in_y, 76, 56, 30);
		gfx.PutPixel(20 + in_x, 47 + in_y, 81, 59, 30);
		gfx.PutPixel(21 + in_x, 47 + in_y, 87, 66, 38);
		gfx.PutPixel(22 + in_x, 47 + in_y, 97, 75, 47);
		gfx.PutPixel(23 + in_x, 47 + in_y, 78, 60, 38);
		gfx.PutPixel(24 + in_x, 47 + in_y, 2, 2, 1);
		gfx.PutPixel(9 + in_x, 48 + in_y, 12, 9, 0);
		gfx.PutPixel(10 + in_x, 48 + in_y, 36, 25, 0);
		gfx.PutPixel(11 + in_x, 48 + in_y, 35, 26, 2);
		gfx.PutPixel(12 + in_x, 48 + in_y, 55, 46, 23);
		gfx.PutPixel(13 + in_x, 48 + in_y, 60, 50, 27);
		gfx.PutPixel(14 + in_x, 48 + in_y, 16, 14, 7);
		gfx.PutPixel(19 + in_x, 48 + in_y, 27, 19, 0);
		gfx.PutPixel(20 + in_x, 48 + in_y, 33, 24, 0);
		gfx.PutPixel(21 + in_x, 48 + in_y, 45, 36, 12);
		gfx.PutPixel(22 + in_x, 48 + in_y, 59, 50, 27);
		gfx.PutPixel(23 + in_x, 48 + in_y, 46, 39, 21);
		gfx.PutPixel(24 + in_x, 48 + in_y, 1, 1, 0);
		gfx.PutPixel(9 + in_x, 49 + in_y, 10, 7, 1);
		gfx.PutPixel(10 + in_x, 49 + in_y, 30, 21, 2);
		gfx.PutPixel(11 + in_x, 49 + in_y, 29, 22, 4);
		gfx.PutPixel(12 + in_x, 49 + in_y, 42, 35, 18);
		gfx.PutPixel(13 + in_x, 49 + in_y, 45, 38, 21);
		gfx.PutPixel(14 + in_x, 49 + in_y, 16, 13, 7);
		gfx.PutPixel(18 + in_x, 49 + in_y, 1, 1, 0);
		gfx.PutPixel(19 + in_x, 49 + in_y, 24, 16, 2);
		gfx.PutPixel(20 + in_x, 49 + in_y, 28, 20, 1);
		gfx.PutPixel(21 + in_x, 49 + in_y, 36, 28, 11);
		gfx.PutPixel(22 + in_x, 49 + in_y, 45, 38, 21);
		gfx.PutPixel(23 + in_x, 49 + in_y, 36, 30, 16);
		gfx.PutPixel(24 + in_x, 49 + in_y, 1, 1, 0);

	}
}

void Enemy::DrawProj(Graphics & gfx) const
{
	for (auto& el : ps)
	{
		el.Draw(gfx);
	}
}

void Enemy::Update(float dt, const Soldier& s)
{
	if (!isDead())
	{
		pos += vel * dt * speed;
		if (!ps.empty())
		{
			checkOut(ps);
		}
		const float right = pos.x + width;
		if (pos.x < 0)
		{
			pos.x = 0;
			vel.x = -vel.x;
			setDodgeTrue();
		}
		else if (right >= float(Graphics::ScreenWidth))
		{
			pos.x = float(Graphics::ScreenWidth - 1) - width;
			vel.x = -vel.x;
			setDodgeTrue();
		}

		const float bottom = pos.y + height;
		if (pos.y < 0)
		{
			pos.y = 0;
			vel.y = -vel.y;
			setDodgeTrue();
		}
		else if (bottom >= float(Graphics::ScreenHeight))
		{
			pos.y = float(Graphics::ScreenHeight - 1) - height;
			vel.y = -vel.y;
			setDodgeTrue();
		}

		actual += dt;
		if (actual > cooldown)
		{
			ps.push_back(Projectile(GetCenter(), (s.GetCenter() - GetCenter()).GetNormalized()*1.0f, c));
			actual = 0.0f;
		}
		for (auto& el : ps)
		{
			if (el.GetRect().IsOverlappingWith(s.shield.GetRect()))
			{
				el.setOut();
			}
		}
	}
}

void Enemy::UpdateProj(float dt)
{
	for (auto& el : ps)
	{
		el.Update(dt);
	}
}

void Enemy::Hit(Soldier& sol)
{
	if (!isDead())
	{
		for (auto& el : sol.bullets())
		{
			if (el.GetRect().IsOverlappingWith(GetRect()))
			{
				--*this;
				el.setOut();
				return;
			}
		}
	}
}

void Enemy::HitSoldier(Soldier & sol)
{
	if (!isDead())
	{
		for (auto& el : ps)
		{
			if (el.GetRect().IsOverlappingWith(sol.GetRect()))
			{
				sol.setDead();
				--sol;
				el.setOut();
				setSucces();
				return;
			}
		}
	}
}

void Enemy::HitCrate(Crate & c) const
{
	if (GetRect().IsOverlappingWith(c.GetRect()))
	{
		c.setActivated();
	}
}

void Enemy::evade(Soldier& sol)
{
	if (dodgeCheck() && !isDead())
	{
		for (auto& el : sol.bullets())
		{
			if (!el.isDodged() && (el.getPos() - pos).GetLengthSq() <= 105.0f*105.0f)
			{
				setDodgeFalse(); // enemy can't dodge again until it hits the wall;
				el.setDodged(); // can't touch this (this bullet is now undodgeable [is that even a word?, well it is now])
				vel.y = -vel.y;
				vel.x = -vel.x;
			}
		}
	}
}

void Enemy::setDodgeTrue()
{
	canDodge = true;
}

void Enemy::setDodgeFalse()
{
	canDodge = false;
}


bool verifySucces(std::vector<Enemy>& v)
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

bool checkGameWon(std::vector<Enemy>& v)
{
	for (auto& el : v)
	{
		if (!el.isDead())
		{
			return false;
		}
	}
	return true;
}

void restartEnemies(std::vector<Enemy>& v)
{
	std::random_device e;
	std::mt19937 rng(e());
	std::uniform_real_distribution<float> xDist(50,500);
	std::uniform_real_distribution<float> yDist(50, 150);
	std::uniform_real_distribution<float> vDist(5.0f, 7.0f);

	for(auto& el : v)
	{
		for (auto& el2 : el.ps)
		{
			el2.setOut();
		}
		el = Enemy(Vec2(xDist(rng), yDist(rng)), Vec2(vDist(rng), vDist(rng)));
		el.hit = false;
		el.health = Health(2);
		el.setDodgeTrue();
	}
}

void Enemy::DrawHealth(Graphics & gfx) const
{
	if ( pos.y - health.getHeight() > 0.0f && pos.x > 0.0f )
	{
		gfx.DrawRect(int(pos.x), int(pos.y - 5), int(pos.x + health.getWidth()), int(pos.y + health.getHeight() - 5), Colors::Cyan);
	}
}