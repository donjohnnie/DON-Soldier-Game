#include "Crate.h"

void Crate::Draw(Graphics& gfx) const
{
	if (!activated && onScreen)
	{
		const int in_x = int(pos.x);
		const int in_y = int(pos.y);

		gfx.PutPixel(0 + in_x, 0 + in_y, 118, 38, 6);
		gfx.PutPixel(1 + in_x, 0 + in_y, 116, 35, 5);
		gfx.PutPixel(2 + in_x, 0 + in_y, 112, 33, 2);
		gfx.PutPixel(3 + in_x, 0 + in_y, 112, 33, 2);
		gfx.PutPixel(4 + in_x, 0 + in_y, 112, 33, 2);
		gfx.PutPixel(5 + in_x, 0 + in_y, 112, 33, 2);
		gfx.PutPixel(6 + in_x, 0 + in_y, 112, 33, 2);
		gfx.PutPixel(7 + in_x, 0 + in_y, 114, 34, 3);
		gfx.PutPixel(8 + in_x, 0 + in_y, 116, 35, 5);
		gfx.PutPixel(9 + in_x, 0 + in_y, 112, 33, 2);
		gfx.PutPixel(10 + in_x, 0 + in_y, 112, 33, 2);
		gfx.PutPixel(11 + in_x, 0 + in_y, 112, 33, 2);
		gfx.PutPixel(12 + in_x, 0 + in_y, 112, 33, 2);
		gfx.PutPixel(13 + in_x, 0 + in_y, 112, 33, 2);
		gfx.PutPixel(14 + in_x, 0 + in_y, 112, 33, 2);
		gfx.PutPixel(15 + in_x, 0 + in_y, 116, 35, 5);
		gfx.PutPixel(16 + in_x, 0 + in_y, 115, 35, 4);
		gfx.PutPixel(17 + in_x, 0 + in_y, 112, 33, 2);
		gfx.PutPixel(18 + in_x, 0 + in_y, 112, 33, 2);
		gfx.PutPixel(19 + in_x, 0 + in_y, 112, 33, 2);
		gfx.PutPixel(20 + in_x, 0 + in_y, 112, 33, 2);
		gfx.PutPixel(21 + in_x, 0 + in_y, 112, 33, 2);
		gfx.PutPixel(22 + in_x, 0 + in_y, 115, 35, 4);
		gfx.PutPixel(23 + in_x, 0 + in_y, 118, 38, 6);
		gfx.PutPixel(0 + in_x, 1 + in_y, 115, 35, 5);
		gfx.PutPixel(1 + in_x, 1 + in_y, 133, 53, 22);
		gfx.PutPixel(2 + in_x, 1 + in_y, 157, 77, 46);
		gfx.PutPixel(3 + in_x, 1 + in_y, 156, 76, 45);
		gfx.PutPixel(4 + in_x, 1 + in_y, 156, 76, 45);
		gfx.PutPixel(5 + in_x, 1 + in_y, 155, 75, 44);
		gfx.PutPixel(6 + in_x, 1 + in_y, 156, 76, 45);
		gfx.PutPixel(7 + in_x, 1 + in_y, 145, 65, 34);
		gfx.PutPixel(8 + in_x, 1 + in_y, 130, 50, 19);
		gfx.PutPixel(9 + in_x, 1 + in_y, 152, 72, 41);
		gfx.PutPixel(10 + in_x, 1 + in_y, 155, 76, 45);
		gfx.PutPixel(11 + in_x, 1 + in_y, 155, 75, 44);
		gfx.PutPixel(12 + in_x, 1 + in_y, 156, 76, 45);
		gfx.PutPixel(13 + in_x, 1 + in_y, 156, 76, 45);
		gfx.PutPixel(14 + in_x, 1 + in_y, 154, 74, 43);
		gfx.PutPixel(15 + in_x, 1 + in_y, 132, 52, 21);
		gfx.PutPixel(16 + in_x, 1 + in_y, 141, 61, 30);
		gfx.PutPixel(17 + in_x, 1 + in_y, 156, 76, 45);
		gfx.PutPixel(18 + in_x, 1 + in_y, 155, 75, 44);
		gfx.PutPixel(19 + in_x, 1 + in_y, 155, 75, 44);
		gfx.PutPixel(20 + in_x, 1 + in_y, 156, 76, 45);
		gfx.PutPixel(21 + in_x, 1 + in_y, 157, 77, 46);
		gfx.PutPixel(22 + in_x, 1 + in_y, 139, 59, 28);
		gfx.PutPixel(23 + in_x, 1 + in_y, 115, 35, 5);
		gfx.PutPixel(0 + in_x, 2 + in_y, 111, 33, 2);
		gfx.PutPixel(1 + in_x, 2 + in_y, 157, 77, 46);
		gfx.PutPixel(2 + in_x, 2 + in_y, 218, 138, 107);
		gfx.PutPixel(3 + in_x, 2 + in_y, 210, 130, 99);
		gfx.PutPixel(4 + in_x, 2 + in_y, 211, 131, 100);
		gfx.PutPixel(5 + in_x, 2 + in_y, 212, 132, 101);
		gfx.PutPixel(6 + in_x, 2 + in_y, 215, 135, 104);
		gfx.PutPixel(7 + in_x, 2 + in_y, 186, 106, 75);
		gfx.PutPixel(8 + in_x, 2 + in_y, 150, 70, 39);
		gfx.PutPixel(9 + in_x, 2 + in_y, 205, 125, 94);
		gfx.PutPixel(10 + in_x, 2 + in_y, 214, 135, 103);
		gfx.PutPixel(11 + in_x, 2 + in_y, 212, 132, 101);
		gfx.PutPixel(12 + in_x, 2 + in_y, 210, 130, 99);
		gfx.PutPixel(13 + in_x, 2 + in_y, 212, 132, 101);
		gfx.PutPixel(14 + in_x, 2 + in_y, 210, 130, 99);
		gfx.PutPixel(15 + in_x, 2 + in_y, 155, 75, 44);
		gfx.PutPixel(16 + in_x, 2 + in_y, 177, 97, 66);
		gfx.PutPixel(17 + in_x, 2 + in_y, 217, 136, 106);
		gfx.PutPixel(18 + in_x, 2 + in_y, 212, 132, 101);
		gfx.PutPixel(19 + in_x, 2 + in_y, 211, 131, 100);
		gfx.PutPixel(20 + in_x, 2 + in_y, 210, 130, 99);
		gfx.PutPixel(21 + in_x, 2 + in_y, 217, 137, 106);
		gfx.PutPixel(22 + in_x, 2 + in_y, 172, 92, 61);
		gfx.PutPixel(23 + in_x, 2 + in_y, 112, 33, 2);
		gfx.PutPixel(0 + in_x, 3 + in_y, 112, 33, 2);
		gfx.PutPixel(1 + in_x, 3 + in_y, 156, 76, 45);
		gfx.PutPixel(2 + in_x, 3 + in_y, 210, 130, 99);
		gfx.PutPixel(3 + in_x, 3 + in_y, 135, 55, 24);
		gfx.PutPixel(4 + in_x, 3 + in_y, 150, 70, 39);
		gfx.PutPixel(5 + in_x, 3 + in_y, 186, 106, 75);
		gfx.PutPixel(6 + in_x, 3 + in_y, 184, 104, 74);
		gfx.PutPixel(7 + in_x, 3 + in_y, 168, 88, 57);
		gfx.PutPixel(8 + in_x, 3 + in_y, 149, 69, 38);
		gfx.PutPixel(9 + in_x, 3 + in_y, 203, 123, 92);
		gfx.PutPixel(10 + in_x, 3 + in_y, 200, 120, 89);
		gfx.PutPixel(11 + in_x, 3 + in_y, 177, 97, 66);
		gfx.PutPixel(12 + in_x, 3 + in_y, 128, 48, 17);
		gfx.PutPixel(13 + in_x, 3 + in_y, 149, 69, 38);
		gfx.PutPixel(14 + in_x, 3 + in_y, 184, 104, 73);
		gfx.PutPixel(15 + in_x, 3 + in_y, 150, 69, 39);
		gfx.PutPixel(16 + in_x, 3 + in_y, 176, 96, 65);
		gfx.PutPixel(17 + in_x, 3 + in_y, 210, 130, 99);
		gfx.PutPixel(18 + in_x, 3 + in_y, 189, 109, 78);
		gfx.PutPixel(19 + in_x, 3 + in_y, 159, 79, 48);
		gfx.PutPixel(20 + in_x, 3 + in_y, 126, 46, 15);
		gfx.PutPixel(21 + in_x, 3 + in_y, 179, 99, 68);
		gfx.PutPixel(22 + in_x, 3 + in_y, 156, 76, 45);
		gfx.PutPixel(23 + in_x, 3 + in_y, 115, 35, 4);
		gfx.PutPixel(0 + in_x, 4 + in_y, 112, 33, 2);
		gfx.PutPixel(1 + in_x, 4 + in_y, 156, 76, 45);
		gfx.PutPixel(2 + in_x, 4 + in_y, 212, 132, 101);
		gfx.PutPixel(3 + in_x, 4 + in_y, 151, 71, 40);
		gfx.PutPixel(4 + in_x, 4 + in_y, 158, 78, 47);
		gfx.PutPixel(5 + in_x, 4 + in_y, 180, 100, 68);
		gfx.PutPixel(6 + in_x, 4 + in_y, 179, 99, 69);
		gfx.PutPixel(7 + in_x, 4 + in_y, 165, 85, 54);
		gfx.PutPixel(8 + in_x, 4 + in_y, 149, 69, 38);
		gfx.PutPixel(9 + in_x, 4 + in_y, 203, 123, 92);
		gfx.PutPixel(10 + in_x, 4 + in_y, 197, 117, 86);
		gfx.PutPixel(11 + in_x, 4 + in_y, 173, 93, 62);
		gfx.PutPixel(12 + in_x, 4 + in_y, 144, 64, 33);
		gfx.PutPixel(13 + in_x, 4 + in_y, 157, 77, 46);
		gfx.PutPixel(14 + in_x, 4 + in_y, 178, 98, 67);
		gfx.PutPixel(15 + in_x, 4 + in_y, 148, 68, 37);
		gfx.PutPixel(16 + in_x, 4 + in_y, 176, 96, 65);
		gfx.PutPixel(17 + in_x, 4 + in_y, 210, 130, 99);
		gfx.PutPixel(18 + in_x, 4 + in_y, 183, 103, 72);
		gfx.PutPixel(19 + in_x, 4 + in_y, 163, 83, 52);
		gfx.PutPixel(20 + in_x, 4 + in_y, 143, 63, 32);
		gfx.PutPixel(21 + in_x, 4 + in_y, 176, 97, 66);
		gfx.PutPixel(22 + in_x, 4 + in_y, 153, 73, 42);
		gfx.PutPixel(23 + in_x, 4 + in_y, 115, 35, 4);
		gfx.PutPixel(0 + in_x, 5 + in_y, 112, 33, 2);
		gfx.PutPixel(1 + in_x, 5 + in_y, 154, 74, 43);
		gfx.PutPixel(2 + in_x, 5 + in_y, 209, 129, 98);
		gfx.PutPixel(3 + in_x, 5 + in_y, 184, 104, 73);
		gfx.PutPixel(4 + in_x, 5 + in_y, 178, 98, 67);
		gfx.PutPixel(5 + in_x, 5 + in_y, 176, 96, 65);
		gfx.PutPixel(6 + in_x, 5 + in_y, 178, 99, 68);
		gfx.PutPixel(7 + in_x, 5 + in_y, 164, 84, 53);
		gfx.PutPixel(8 + in_x, 5 + in_y, 149, 69, 38);
		gfx.PutPixel(9 + in_x, 5 + in_y, 202, 123, 92);
		gfx.PutPixel(10 + in_x, 5 + in_y, 197, 117, 86);
		gfx.PutPixel(11 + in_x, 5 + in_y, 176, 96, 65);
		gfx.PutPixel(12 + in_x, 5 + in_y, 182, 102, 71);
		gfx.PutPixel(13 + in_x, 5 + in_y, 180, 100, 69);
		gfx.PutPixel(14 + in_x, 5 + in_y, 177, 97, 66);
		gfx.PutPixel(15 + in_x, 5 + in_y, 148, 68, 37);
		gfx.PutPixel(16 + in_x, 5 + in_y, 176, 96, 65);
		gfx.PutPixel(17 + in_x, 5 + in_y, 210, 130, 99);
		gfx.PutPixel(18 + in_x, 5 + in_y, 182, 101, 71);
		gfx.PutPixel(19 + in_x, 5 + in_y, 178, 98, 67);
		gfx.PutPixel(20 + in_x, 5 + in_y, 182, 102, 71);
		gfx.PutPixel(21 + in_x, 5 + in_y, 182, 102, 71);
		gfx.PutPixel(22 + in_x, 5 + in_y, 153, 73, 42);
		gfx.PutPixel(23 + in_x, 5 + in_y, 115, 35, 4);
		gfx.PutPixel(0 + in_x, 6 + in_y, 116, 35, 5);
		gfx.PutPixel(1 + in_x, 6 + in_y, 131, 51, 20);
		gfx.PutPixel(2 + in_x, 6 + in_y, 154, 73, 43);
		gfx.PutPixel(3 + in_x, 6 + in_y, 150, 70, 39);
		gfx.PutPixel(4 + in_x, 6 + in_y, 150, 70, 39);
		gfx.PutPixel(5 + in_x, 6 + in_y, 150, 70, 39);
		gfx.PutPixel(6 + in_x, 6 + in_y, 150, 70, 39);
		gfx.PutPixel(7 + in_x, 6 + in_y, 148, 68, 37);
		gfx.PutPixel(8 + in_x, 6 + in_y, 151, 71, 40);
		gfx.PutPixel(9 + in_x, 6 + in_y, 203, 123, 92);
		gfx.PutPixel(10 + in_x, 6 + in_y, 197, 117, 86);
		gfx.PutPixel(11 + in_x, 6 + in_y, 176, 96, 65);
		gfx.PutPixel(12 + in_x, 6 + in_y, 178, 98, 67);
		gfx.PutPixel(13 + in_x, 6 + in_y, 178, 98, 67);
		gfx.PutPixel(14 + in_x, 6 + in_y, 177, 97, 66);
		gfx.PutPixel(15 + in_x, 6 + in_y, 148, 68, 37);
		gfx.PutPixel(16 + in_x, 6 + in_y, 176, 96, 65);
		gfx.PutPixel(17 + in_x, 6 + in_y, 210, 130, 99);
		gfx.PutPixel(18 + in_x, 6 + in_y, 182, 102, 71);
		gfx.PutPixel(19 + in_x, 6 + in_y, 177, 97, 66);
		gfx.PutPixel(20 + in_x, 6 + in_y, 178, 98, 67);
		gfx.PutPixel(21 + in_x, 6 + in_y, 182, 102, 71);
		gfx.PutPixel(22 + in_x, 6 + in_y, 153, 73, 42);
		gfx.PutPixel(23 + in_x, 6 + in_y, 115, 35, 4);
		gfx.PutPixel(0 + in_x, 7 + in_y, 115, 35, 4);
		gfx.PutPixel(1 + in_x, 7 + in_y, 139, 59, 28);
		gfx.PutPixel(2 + in_x, 7 + in_y, 173, 93, 62);
		gfx.PutPixel(3 + in_x, 7 + in_y, 161, 81, 50);
		gfx.PutPixel(4 + in_x, 7 + in_y, 159, 79, 48);
		gfx.PutPixel(5 + in_x, 7 + in_y, 159, 79, 48);
		gfx.PutPixel(6 + in_x, 7 + in_y, 160, 80, 49);
		gfx.PutPixel(7 + in_x, 7 + in_y, 154, 74, 43);
		gfx.PutPixel(8 + in_x, 7 + in_y, 150, 70, 39);
		gfx.PutPixel(9 + in_x, 7 + in_y, 203, 123, 92);
		gfx.PutPixel(10 + in_x, 7 + in_y, 197, 117, 86);
		gfx.PutPixel(11 + in_x, 7 + in_y, 176, 96, 65);
		gfx.PutPixel(12 + in_x, 7 + in_y, 178, 98, 67);
		gfx.PutPixel(13 + in_x, 7 + in_y, 178, 98, 67);
		gfx.PutPixel(14 + in_x, 7 + in_y, 177, 97, 66);
		gfx.PutPixel(15 + in_x, 7 + in_y, 148, 68, 37);
		gfx.PutPixel(16 + in_x, 7 + in_y, 176, 96, 65);
		gfx.PutPixel(17 + in_x, 7 + in_y, 210, 130, 99);
		gfx.PutPixel(18 + in_x, 7 + in_y, 182, 101, 71);
		gfx.PutPixel(19 + in_x, 7 + in_y, 177, 97, 66);
		gfx.PutPixel(20 + in_x, 7 + in_y, 178, 98, 67);
		gfx.PutPixel(21 + in_x, 7 + in_y, 182, 102, 71);
		gfx.PutPixel(22 + in_x, 7 + in_y, 153, 73, 42);
		gfx.PutPixel(23 + in_x, 7 + in_y, 115, 35, 4);
		gfx.PutPixel(0 + in_x, 8 + in_y, 112, 33, 2);
		gfx.PutPixel(1 + in_x, 8 + in_y, 156, 76, 45);
		gfx.PutPixel(2 + in_x, 8 + in_y, 215, 135, 104);
		gfx.PutPixel(3 + in_x, 8 + in_y, 181, 101, 70);
		gfx.PutPixel(4 + in_x, 8 + in_y, 177, 97, 66);
		gfx.PutPixel(5 + in_x, 8 + in_y, 180, 100, 69);
		gfx.PutPixel(6 + in_x, 8 + in_y, 182, 101, 70);
		gfx.PutPixel(7 + in_x, 8 + in_y, 166, 86, 55);
		gfx.PutPixel(8 + in_x, 8 + in_y, 149, 69, 38);
		gfx.PutPixel(9 + in_x, 8 + in_y, 203, 123, 92);
		gfx.PutPixel(10 + in_x, 8 + in_y, 197, 117, 86);
		gfx.PutPixel(11 + in_x, 8 + in_y, 176, 96, 65);
		gfx.PutPixel(12 + in_x, 8 + in_y, 178, 98, 67);
		gfx.PutPixel(13 + in_x, 8 + in_y, 178, 98, 67);
		gfx.PutPixel(14 + in_x, 8 + in_y, 177, 97, 66);
		gfx.PutPixel(15 + in_x, 8 + in_y, 148, 68, 37);
		gfx.PutPixel(16 + in_x, 8 + in_y, 176, 96, 65);
		gfx.PutPixel(17 + in_x, 8 + in_y, 210, 130, 99);
		gfx.PutPixel(18 + in_x, 8 + in_y, 181, 101, 71);
		gfx.PutPixel(19 + in_x, 8 + in_y, 177, 97, 66);
		gfx.PutPixel(20 + in_x, 8 + in_y, 178, 98, 67);
		gfx.PutPixel(21 + in_x, 8 + in_y, 182, 102, 71);
		gfx.PutPixel(22 + in_x, 8 + in_y, 153, 73, 42);
		gfx.PutPixel(23 + in_x, 8 + in_y, 115, 35, 4);
		gfx.PutPixel(0 + in_x, 9 + in_y, 112, 33, 2);
		gfx.PutPixel(1 + in_x, 9 + in_y, 156, 76, 45);
		gfx.PutPixel(2 + in_x, 9 + in_y, 210, 130, 99);
		gfx.PutPixel(3 + in_x, 9 + in_y, 130, 50, 19);
		gfx.PutPixel(4 + in_x, 9 + in_y, 145, 65, 34);
		gfx.PutPixel(5 + in_x, 9 + in_y, 182, 102, 71);
		gfx.PutPixel(6 + in_x, 9 + in_y, 180, 100, 69);
		gfx.PutPixel(7 + in_x, 9 + in_y, 165, 85, 54);
		gfx.PutPixel(8 + in_x, 9 + in_y, 149, 69, 38);
		gfx.PutPixel(9 + in_x, 9 + in_y, 203, 123, 92);
		gfx.PutPixel(10 + in_x, 9 + in_y, 197, 117, 86);
		gfx.PutPixel(11 + in_x, 9 + in_y, 176, 96, 65);
		gfx.PutPixel(12 + in_x, 9 + in_y, 178, 98, 67);
		gfx.PutPixel(13 + in_x, 9 + in_y, 178, 98, 67);
		gfx.PutPixel(14 + in_x, 9 + in_y, 177, 97, 66);
		gfx.PutPixel(15 + in_x, 9 + in_y, 148, 68, 37);
		gfx.PutPixel(16 + in_x, 9 + in_y, 176, 96, 65);
		gfx.PutPixel(17 + in_x, 9 + in_y, 210, 130, 99);
		gfx.PutPixel(18 + in_x, 9 + in_y, 182, 102, 71);
		gfx.PutPixel(19 + in_x, 9 + in_y, 177, 97, 66);
		gfx.PutPixel(20 + in_x, 9 + in_y, 178, 98, 67);
		gfx.PutPixel(21 + in_x, 9 + in_y, 182, 102, 71);
		gfx.PutPixel(22 + in_x, 9 + in_y, 153, 73, 42);
		gfx.PutPixel(23 + in_x, 9 + in_y, 115, 35, 4);
		gfx.PutPixel(0 + in_x, 10 + in_y, 111, 33, 2);
		gfx.PutPixel(1 + in_x, 10 + in_y, 156, 76, 45);
		gfx.PutPixel(2 + in_x, 10 + in_y, 211, 131, 100);
		gfx.PutPixel(3 + in_x, 10 + in_y, 149, 69, 38);
		gfx.PutPixel(4 + in_x, 10 + in_y, 157, 77, 46);
		gfx.PutPixel(5 + in_x, 10 + in_y, 180, 100, 69);
		gfx.PutPixel(6 + in_x, 10 + in_y, 180, 100, 69);
		gfx.PutPixel(7 + in_x, 10 + in_y, 165, 85, 54);
		gfx.PutPixel(8 + in_x, 10 + in_y, 149, 69, 38);
		gfx.PutPixel(9 + in_x, 10 + in_y, 203, 123, 92);
		gfx.PutPixel(10 + in_x, 10 + in_y, 197, 117, 86);
		gfx.PutPixel(11 + in_x, 10 + in_y, 176, 96, 65);
		gfx.PutPixel(12 + in_x, 10 + in_y, 178, 98, 67);
		gfx.PutPixel(13 + in_x, 10 + in_y, 178, 98, 67);
		gfx.PutPixel(14 + in_x, 10 + in_y, 177, 97, 66);
		gfx.PutPixel(15 + in_x, 10 + in_y, 148, 68, 37);
		gfx.PutPixel(16 + in_x, 10 + in_y, 176, 96, 65);
		gfx.PutPixel(17 + in_x, 10 + in_y, 210, 130, 99);
		gfx.PutPixel(18 + in_x, 10 + in_y, 182, 101, 71);
		gfx.PutPixel(19 + in_x, 10 + in_y, 177, 97, 66);
		gfx.PutPixel(20 + in_x, 10 + in_y, 178, 98, 67);
		gfx.PutPixel(21 + in_x, 10 + in_y, 182, 102, 71);
		gfx.PutPixel(22 + in_x, 10 + in_y, 153, 73, 41);
		gfx.PutPixel(23 + in_x, 10 + in_y, 115, 35, 4);
		gfx.PutPixel(0 + in_x, 11 + in_y, 112, 33, 2);
		gfx.PutPixel(1 + in_x, 11 + in_y, 155, 75, 44);
		gfx.PutPixel(2 + in_x, 11 + in_y, 212, 132, 101);
		gfx.PutPixel(3 + in_x, 11 + in_y, 185, 105, 74);
		gfx.PutPixel(4 + in_x, 11 + in_y, 179, 99, 68);
		gfx.PutPixel(5 + in_x, 11 + in_y, 178, 98, 67);
		gfx.PutPixel(6 + in_x, 11 + in_y, 180, 100, 69);
		gfx.PutPixel(7 + in_x, 11 + in_y, 165, 85, 54);
		gfx.PutPixel(8 + in_x, 11 + in_y, 149, 69, 38);
		gfx.PutPixel(9 + in_x, 11 + in_y, 203, 123, 92);
		gfx.PutPixel(10 + in_x, 11 + in_y, 197, 117, 86);
		gfx.PutPixel(11 + in_x, 11 + in_y, 176, 96, 65);
		gfx.PutPixel(12 + in_x, 11 + in_y, 178, 98, 67);
		gfx.PutPixel(13 + in_x, 11 + in_y, 178, 98, 67);
		gfx.PutPixel(14 + in_x, 11 + in_y, 177, 97, 66);
		gfx.PutPixel(15 + in_x, 11 + in_y, 148, 68, 37);
		gfx.PutPixel(16 + in_x, 11 + in_y, 176, 96, 65);
		gfx.PutPixel(17 + in_x, 11 + in_y, 210, 130, 99);
		gfx.PutPixel(18 + in_x, 11 + in_y, 182, 102, 71);
		gfx.PutPixel(19 + in_x, 11 + in_y, 177, 97, 66);
		gfx.PutPixel(20 + in_x, 11 + in_y, 178, 98, 67);
		gfx.PutPixel(21 + in_x, 11 + in_y, 182, 102, 71);
		gfx.PutPixel(22 + in_x, 11 + in_y, 153, 73, 42);
		gfx.PutPixel(23 + in_x, 11 + in_y, 115, 35, 4);
		gfx.PutPixel(0 + in_x, 12 + in_y, 112, 33, 2);
		gfx.PutPixel(1 + in_x, 12 + in_y, 155, 75, 44);
		gfx.PutPixel(2 + in_x, 12 + in_y, 212, 132, 101);
		gfx.PutPixel(3 + in_x, 12 + in_y, 182, 102, 71);
		gfx.PutPixel(4 + in_x, 12 + in_y, 177, 97, 66);
		gfx.PutPixel(5 + in_x, 12 + in_y, 178, 98, 67);
		gfx.PutPixel(6 + in_x, 12 + in_y, 180, 100, 69);
		gfx.PutPixel(7 + in_x, 12 + in_y, 165, 85, 54);
		gfx.PutPixel(8 + in_x, 12 + in_y, 149, 69, 38);
		gfx.PutPixel(9 + in_x, 12 + in_y, 203, 123, 92);
		gfx.PutPixel(10 + in_x, 12 + in_y, 196, 116, 86);
		gfx.PutPixel(11 + in_x, 12 + in_y, 176, 96, 65);
		gfx.PutPixel(12 + in_x, 12 + in_y, 178, 98, 67);
		gfx.PutPixel(13 + in_x, 12 + in_y, 178, 98, 67);
		gfx.PutPixel(14 + in_x, 12 + in_y, 177, 97, 66);
		gfx.PutPixel(15 + in_x, 12 + in_y, 148, 68, 37);
		gfx.PutPixel(16 + in_x, 12 + in_y, 176, 96, 65);
		gfx.PutPixel(17 + in_x, 12 + in_y, 210, 130, 99);
		gfx.PutPixel(18 + in_x, 12 + in_y, 182, 101, 71);
		gfx.PutPixel(19 + in_x, 12 + in_y, 178, 98, 67);
		gfx.PutPixel(20 + in_x, 12 + in_y, 182, 102, 71);
		gfx.PutPixel(21 + in_x, 12 + in_y, 182, 102, 71);
		gfx.PutPixel(22 + in_x, 12 + in_y, 152, 73, 42);
		gfx.PutPixel(23 + in_x, 12 + in_y, 115, 35, 4);
		gfx.PutPixel(0 + in_x, 13 + in_y, 112, 33, 2);
		gfx.PutPixel(1 + in_x, 13 + in_y, 155, 75, 44);
		gfx.PutPixel(2 + in_x, 13 + in_y, 212, 132, 101);
		gfx.PutPixel(3 + in_x, 13 + in_y, 182, 102, 71);
		gfx.PutPixel(4 + in_x, 13 + in_y, 177, 97, 66);
		gfx.PutPixel(5 + in_x, 13 + in_y, 178, 98, 67);
		gfx.PutPixel(6 + in_x, 13 + in_y, 180, 100, 69);
		gfx.PutPixel(7 + in_x, 13 + in_y, 165, 85, 54);
		gfx.PutPixel(8 + in_x, 13 + in_y, 149, 69, 38);
		gfx.PutPixel(9 + in_x, 13 + in_y, 203, 123, 92);
		gfx.PutPixel(10 + in_x, 13 + in_y, 197, 117, 86);
		gfx.PutPixel(11 + in_x, 13 + in_y, 176, 96, 65);
		gfx.PutPixel(12 + in_x, 13 + in_y, 178, 98, 67);
		gfx.PutPixel(13 + in_x, 13 + in_y, 178, 98, 67);
		gfx.PutPixel(14 + in_x, 13 + in_y, 177, 97, 66);
		gfx.PutPixel(15 + in_x, 13 + in_y, 148, 68, 37);
		gfx.PutPixel(16 + in_x, 13 + in_y, 176, 96, 65);
		gfx.PutPixel(17 + in_x, 13 + in_y, 210, 130, 99);
		gfx.PutPixel(18 + in_x, 13 + in_y, 183, 103, 73);
		gfx.PutPixel(19 + in_x, 13 + in_y, 167, 87, 56);
		gfx.PutPixel(20 + in_x, 13 + in_y, 153, 73, 42);
		gfx.PutPixel(21 + in_x, 13 + in_y, 179, 99, 68);
		gfx.PutPixel(22 + in_x, 13 + in_y, 154, 74, 43);
		gfx.PutPixel(23 + in_x, 13 + in_y, 115, 35, 4);
		gfx.PutPixel(0 + in_x, 14 + in_y, 112, 33, 2);
		gfx.PutPixel(1 + in_x, 14 + in_y, 155, 75, 44);
		gfx.PutPixel(2 + in_x, 14 + in_y, 212, 132, 101);
		gfx.PutPixel(3 + in_x, 14 + in_y, 182, 102, 71);
		gfx.PutPixel(4 + in_x, 14 + in_y, 177, 97, 66);
		gfx.PutPixel(5 + in_x, 14 + in_y, 178, 98, 67);
		gfx.PutPixel(6 + in_x, 14 + in_y, 180, 100, 69);
		gfx.PutPixel(7 + in_x, 14 + in_y, 165, 85, 54);
		gfx.PutPixel(8 + in_x, 14 + in_y, 149, 69, 38);
		gfx.PutPixel(9 + in_x, 14 + in_y, 203, 123, 92);
		gfx.PutPixel(10 + in_x, 14 + in_y, 197, 117, 86);
		gfx.PutPixel(11 + in_x, 14 + in_y, 176, 96, 65);
		gfx.PutPixel(12 + in_x, 14 + in_y, 178, 98, 67);
		gfx.PutPixel(13 + in_x, 14 + in_y, 178, 98, 67);
		gfx.PutPixel(14 + in_x, 14 + in_y, 177, 97, 66);
		gfx.PutPixel(15 + in_x, 14 + in_y, 148, 68, 37);
		gfx.PutPixel(16 + in_x, 14 + in_y, 176, 96, 65);
		gfx.PutPixel(17 + in_x, 14 + in_y, 210, 130, 99);
		gfx.PutPixel(18 + in_x, 14 + in_y, 184, 104, 73);
		gfx.PutPixel(19 + in_x, 14 + in_y, 152, 72, 41);
		gfx.PutPixel(20 + in_x, 14 + in_y, 115, 35, 4);
		gfx.PutPixel(21 + in_x, 14 + in_y, 173, 93, 62);
		gfx.PutPixel(22 + in_x, 14 + in_y, 153, 73, 42);
		gfx.PutPixel(23 + in_x, 14 + in_y, 114, 35, 4);
		gfx.PutPixel(0 + in_x, 15 + in_y, 112, 33, 2);
		gfx.PutPixel(1 + in_x, 15 + in_y, 155, 75, 44);
		gfx.PutPixel(2 + in_x, 15 + in_y, 212, 132, 101);
		gfx.PutPixel(3 + in_x, 15 + in_y, 182, 102, 71);
		gfx.PutPixel(4 + in_x, 15 + in_y, 177, 97, 66);
		gfx.PutPixel(5 + in_x, 15 + in_y, 178, 98, 67);
		gfx.PutPixel(6 + in_x, 15 + in_y, 180, 100, 69);
		gfx.PutPixel(7 + in_x, 15 + in_y, 165, 85, 54);
		gfx.PutPixel(8 + in_x, 15 + in_y, 149, 69, 38);
		gfx.PutPixel(9 + in_x, 15 + in_y, 203, 123, 92);
		gfx.PutPixel(10 + in_x, 15 + in_y, 197, 117, 86);
		gfx.PutPixel(11 + in_x, 15 + in_y, 176, 96, 65);
		gfx.PutPixel(12 + in_x, 15 + in_y, 178, 98, 67);
		gfx.PutPixel(13 + in_x, 15 + in_y, 178, 98, 67);
		gfx.PutPixel(14 + in_x, 15 + in_y, 177, 97, 66);
		gfx.PutPixel(15 + in_x, 15 + in_y, 148, 68, 37);
		gfx.PutPixel(16 + in_x, 15 + in_y, 178, 98, 67);
		gfx.PutPixel(17 + in_x, 15 + in_y, 213, 133, 102);
		gfx.PutPixel(18 + in_x, 15 + in_y, 160, 80, 49);
		gfx.PutPixel(19 + in_x, 15 + in_y, 147, 67, 36);
		gfx.PutPixel(20 + in_x, 15 + in_y, 144, 64, 33);
		gfx.PutPixel(21 + in_x, 15 + in_y, 153, 73, 42);
		gfx.PutPixel(22 + in_x, 15 + in_y, 138, 58, 27);
		gfx.PutPixel(23 + in_x, 15 + in_y, 116, 35, 5);
		gfx.PutPixel(0 + in_x, 16 + in_y, 112, 33, 2);
		gfx.PutPixel(1 + in_x, 16 + in_y, 155, 75, 44);
		gfx.PutPixel(2 + in_x, 16 + in_y, 212, 132, 101);
		gfx.PutPixel(3 + in_x, 16 + in_y, 182, 102, 71);
		gfx.PutPixel(4 + in_x, 16 + in_y, 177, 97, 66);
		gfx.PutPixel(5 + in_x, 16 + in_y, 178, 98, 67);
		gfx.PutPixel(6 + in_x, 16 + in_y, 180, 100, 69);
		gfx.PutPixel(7 + in_x, 16 + in_y, 165, 85, 54);
		gfx.PutPixel(8 + in_x, 16 + in_y, 149, 69, 38);
		gfx.PutPixel(9 + in_x, 16 + in_y, 203, 123, 92);
		gfx.PutPixel(10 + in_x, 16 + in_y, 197, 117, 86);
		gfx.PutPixel(11 + in_x, 16 + in_y, 176, 96, 65);
		gfx.PutPixel(12 + in_x, 16 + in_y, 178, 98, 67);
		gfx.PutPixel(13 + in_x, 16 + in_y, 178, 98, 67);
		gfx.PutPixel(14 + in_x, 16 + in_y, 177, 97, 66);
		gfx.PutPixel(15 + in_x, 16 + in_y, 150, 70, 39);
		gfx.PutPixel(16 + in_x, 16 + in_y, 162, 82, 51);
		gfx.PutPixel(17 + in_x, 16 + in_y, 179, 99, 68);
		gfx.PutPixel(18 + in_x, 16 + in_y, 150, 70, 39);
		gfx.PutPixel(19 + in_x, 16 + in_y, 146, 66, 35);
		gfx.PutPixel(20 + in_x, 16 + in_y, 148, 68, 37);
		gfx.PutPixel(21 + in_x, 16 + in_y, 149, 69, 38);
		gfx.PutPixel(22 + in_x, 16 + in_y, 134, 54, 23);
		gfx.PutPixel(23 + in_x, 16 + in_y, 116, 35, 5);
		gfx.PutPixel(0 + in_x, 17 + in_y, 112, 33, 2);
		gfx.PutPixel(1 + in_x, 17 + in_y, 155, 75, 44);
		gfx.PutPixel(2 + in_x, 17 + in_y, 212, 132, 101);
		gfx.PutPixel(3 + in_x, 17 + in_y, 182, 102, 71);
		gfx.PutPixel(4 + in_x, 17 + in_y, 177, 97, 66);
		gfx.PutPixel(5 + in_x, 17 + in_y, 178, 98, 67);
		gfx.PutPixel(6 + in_x, 17 + in_y, 180, 100, 69);
		gfx.PutPixel(7 + in_x, 17 + in_y, 165, 85, 54);
		gfx.PutPixel(8 + in_x, 17 + in_y, 149, 69, 38);
		gfx.PutPixel(9 + in_x, 17 + in_y, 203, 123, 92);
		gfx.PutPixel(10 + in_x, 17 + in_y, 197, 117, 86);
		gfx.PutPixel(11 + in_x, 17 + in_y, 176, 96, 65);
		gfx.PutPixel(12 + in_x, 17 + in_y, 178, 98, 67);
		gfx.PutPixel(13 + in_x, 17 + in_y, 178, 98, 67);
		gfx.PutPixel(14 + in_x, 17 + in_y, 177, 97, 66);
		gfx.PutPixel(15 + in_x, 17 + in_y, 152, 72, 41);
		gfx.PutPixel(16 + in_x, 17 + in_y, 147, 66, 36);
		gfx.PutPixel(17 + in_x, 17 + in_y, 147, 67, 36);
		gfx.PutPixel(18 + in_x, 17 + in_y, 149, 69, 38);
		gfx.PutPixel(19 + in_x, 17 + in_y, 149, 69, 39);
		gfx.PutPixel(20 + in_x, 17 + in_y, 149, 69, 38);
		gfx.PutPixel(21 + in_x, 17 + in_y, 150, 70, 39);
		gfx.PutPixel(22 + in_x, 17 + in_y, 135, 55, 24);
		gfx.PutPixel(23 + in_x, 17 + in_y, 116, 35, 5);
		gfx.PutPixel(0 + in_x, 18 + in_y, 112, 33, 2);
		gfx.PutPixel(1 + in_x, 18 + in_y, 155, 75, 44);
		gfx.PutPixel(2 + in_x, 18 + in_y, 212, 132, 101);
		gfx.PutPixel(3 + in_x, 18 + in_y, 185, 105, 74);
		gfx.PutPixel(4 + in_x, 18 + in_y, 179, 99, 68);
		gfx.PutPixel(5 + in_x, 18 + in_y, 178, 98, 67);
		gfx.PutPixel(6 + in_x, 18 + in_y, 180, 100, 69);
		gfx.PutPixel(7 + in_x, 18 + in_y, 165, 85, 54);
		gfx.PutPixel(8 + in_x, 18 + in_y, 149, 69, 38);
		gfx.PutPixel(9 + in_x, 18 + in_y, 203, 123, 92);
		gfx.PutPixel(10 + in_x, 18 + in_y, 197, 116, 86);
		gfx.PutPixel(11 + in_x, 18 + in_y, 176, 96, 65);
		gfx.PutPixel(12 + in_x, 18 + in_y, 181, 101, 70);
		gfx.PutPixel(13 + in_x, 18 + in_y, 180, 100, 69);
		gfx.PutPixel(14 + in_x, 18 + in_y, 177, 97, 66);
		gfx.PutPixel(15 + in_x, 18 + in_y, 148, 68, 37);
		gfx.PutPixel(16 + in_x, 18 + in_y, 173, 92, 62);
		gfx.PutPixel(17 + in_x, 18 + in_y, 203, 123, 92);
		gfx.PutPixel(18 + in_x, 18 + in_y, 178, 98, 67);
		gfx.PutPixel(19 + in_x, 18 + in_y, 175, 96, 65);
		gfx.PutPixel(20 + in_x, 18 + in_y, 177, 96, 66);
		gfx.PutPixel(21 + in_x, 18 + in_y, 153, 73, 42);
		gfx.PutPixel(22 + in_x, 18 + in_y, 134, 54, 23);
		gfx.PutPixel(23 + in_x, 18 + in_y, 116, 35, 5);
		gfx.PutPixel(0 + in_x, 19 + in_y, 112, 33, 2);
		gfx.PutPixel(1 + in_x, 19 + in_y, 156, 76, 45);
		gfx.PutPixel(2 + in_x, 19 + in_y, 212, 132, 101);
		gfx.PutPixel(3 + in_x, 19 + in_y, 160, 80, 49);
		gfx.PutPixel(4 + in_x, 19 + in_y, 164, 84, 53);
		gfx.PutPixel(5 + in_x, 19 + in_y, 180, 100, 69);
		gfx.PutPixel(6 + in_x, 19 + in_y, 181, 101, 70);
		gfx.PutPixel(7 + in_x, 19 + in_y, 165, 85, 54);
		gfx.PutPixel(8 + in_x, 19 + in_y, 149, 69, 38);
		gfx.PutPixel(9 + in_x, 19 + in_y, 203, 123, 92);
		gfx.PutPixel(10 + in_x, 19 + in_y, 197, 117, 86);
		gfx.PutPixel(11 + in_x, 19 + in_y, 175, 95, 64);
		gfx.PutPixel(12 + in_x, 19 + in_y, 154, 74, 43);
		gfx.PutPixel(13 + in_x, 19 + in_y, 164, 84, 53);
		gfx.PutPixel(14 + in_x, 19 + in_y, 179, 99, 68);
		gfx.PutPixel(15 + in_x, 19 + in_y, 148, 68, 37);
		gfx.PutPixel(16 + in_x, 19 + in_y, 177, 97, 66);
		gfx.PutPixel(17 + in_x, 19 + in_y, 212, 132, 101);
		gfx.PutPixel(18 + in_x, 19 + in_y, 184, 104, 74);
		gfx.PutPixel(19 + in_x, 19 + in_y, 169, 89, 58);
		gfx.PutPixel(20 + in_x, 19 + in_y, 153, 73, 42);
		gfx.PutPixel(21 + in_x, 19 + in_y, 150, 70, 39);
		gfx.PutPixel(22 + in_x, 19 + in_y, 135, 55, 24);
		gfx.PutPixel(23 + in_x, 19 + in_y, 116, 35, 5);
		gfx.PutPixel(0 + in_x, 20 + in_y, 112, 33, 2);
		gfx.PutPixel(1 + in_x, 20 + in_y, 155, 75, 44);
		gfx.PutPixel(2 + in_x, 20 + in_y, 207, 127, 96);
		gfx.PutPixel(3 + in_x, 20 + in_y, 125, 45, 14);
		gfx.PutPixel(4 + in_x, 20 + in_y, 141, 61, 30);
		gfx.PutPixel(5 + in_x, 20 + in_y, 180, 100, 69);
		gfx.PutPixel(6 + in_x, 20 + in_y, 178, 98, 67);
		gfx.PutPixel(7 + in_x, 20 + in_y, 164, 84, 53);
		gfx.PutPixel(8 + in_x, 20 + in_y, 149, 69, 38);
		gfx.PutPixel(9 + in_x, 20 + in_y, 203, 123, 92);
		gfx.PutPixel(10 + in_x, 20 + in_y, 197, 117, 86);
		gfx.PutPixel(11 + in_x, 20 + in_y, 171, 91, 60);
		gfx.PutPixel(12 + in_x, 20 + in_y, 117, 37, 6);
		gfx.PutPixel(13 + in_x, 20 + in_y, 140, 60, 29);
		gfx.PutPixel(14 + in_x, 20 + in_y, 179, 99, 68);
		gfx.PutPixel(15 + in_x, 20 + in_y, 149, 69, 38);
		gfx.PutPixel(16 + in_x, 20 + in_y, 176, 96, 65);
		gfx.PutPixel(17 + in_x, 20 + in_y, 210, 130, 99);
		gfx.PutPixel(18 + in_x, 20 + in_y, 184, 104, 73);
		gfx.PutPixel(19 + in_x, 20 + in_y, 151, 71, 40);
		gfx.PutPixel(20 + in_x, 20 + in_y, 114, 34, 3);
		gfx.PutPixel(21 + in_x, 20 + in_y, 146, 66, 35);
		gfx.PutPixel(22 + in_x, 20 + in_y, 136, 56, 25);
		gfx.PutPixel(23 + in_x, 20 + in_y, 116, 35, 5);
		gfx.PutPixel(0 + in_x, 21 + in_y, 115, 35, 4);
		gfx.PutPixel(1 + in_x, 21 + in_y, 134, 54, 23);
		gfx.PutPixel(2 + in_x, 21 + in_y, 159, 79, 48);
		gfx.PutPixel(3 + in_x, 21 + in_y, 147, 67, 36);
		gfx.PutPixel(4 + in_x, 21 + in_y, 149, 69, 38);
		gfx.PutPixel(5 + in_x, 21 + in_y, 154, 74, 43);
		gfx.PutPixel(6 + in_x, 21 + in_y, 153, 73, 42);
		gfx.PutPixel(7 + in_x, 21 + in_y, 151, 71, 40);
		gfx.PutPixel(8 + in_x, 21 + in_y, 153, 73, 42);
		gfx.PutPixel(9 + in_x, 21 + in_y, 209, 129, 98);
		gfx.PutPixel(10 + in_x, 21 + in_y, 189, 109, 78);
		gfx.PutPixel(11 + in_x, 21 + in_y, 150, 70, 39);
		gfx.PutPixel(12 + in_x, 21 + in_y, 146, 66, 35);
		gfx.PutPixel(13 + in_x, 21 + in_y, 149, 69, 38);
		gfx.PutPixel(14 + in_x, 21 + in_y, 154, 74, 43);
		gfx.PutPixel(15 + in_x, 21 + in_y, 146, 66, 35);
		gfx.PutPixel(16 + in_x, 21 + in_y, 180, 100, 69);
		gfx.PutPixel(17 + in_x, 21 + in_y, 214, 134, 103);
		gfx.PutPixel(18 + in_x, 21 + in_y, 161, 81, 50);
		gfx.PutPixel(19 + in_x, 21 + in_y, 148, 68, 37);
		gfx.PutPixel(20 + in_x, 21 + in_y, 146, 66, 35);
		gfx.PutPixel(21 + in_x, 21 + in_y, 151, 71, 40);
		gfx.PutPixel(22 + in_x, 21 + in_y, 136, 56, 25);
		gfx.PutPixel(23 + in_x, 21 + in_y, 116, 35, 5);
		gfx.PutPixel(0 + in_x, 22 + in_y, 116, 36, 6);
		gfx.PutPixel(1 + in_x, 22 + in_y, 124, 44, 13);
		gfx.PutPixel(2 + in_x, 22 + in_y, 135, 55, 24);
		gfx.PutPixel(3 + in_x, 22 + in_y, 136, 56, 25);
		gfx.PutPixel(4 + in_x, 22 + in_y, 135, 55, 24);
		gfx.PutPixel(5 + in_x, 22 + in_y, 134, 54, 23);
		gfx.PutPixel(6 + in_x, 22 + in_y, 134, 54, 23);
		gfx.PutPixel(7 + in_x, 22 + in_y, 134, 54, 23);
		gfx.PutPixel(8 + in_x, 22 + in_y, 137, 57, 26);
		gfx.PutPixel(9 + in_x, 22 + in_y, 168, 88, 57);
		gfx.PutPixel(10 + in_x, 22 + in_y, 156, 76, 45);
		gfx.PutPixel(11 + in_x, 22 + in_y, 133, 53, 22);
		gfx.PutPixel(12 + in_x, 22 + in_y, 136, 56, 25);
		gfx.PutPixel(13 + in_x, 22 + in_y, 135, 55, 24);
		gfx.PutPixel(14 + in_x, 22 + in_y, 134, 54, 23);
		gfx.PutPixel(15 + in_x, 22 + in_y, 133, 53, 22);
		gfx.PutPixel(16 + in_x, 22 + in_y, 152, 72, 41);
		gfx.PutPixel(17 + in_x, 22 + in_y, 170, 90, 59);
		gfx.PutPixel(18 + in_x, 22 + in_y, 139, 59, 28);
		gfx.PutPixel(19 + in_x, 22 + in_y, 134, 54, 23);
		gfx.PutPixel(20 + in_x, 22 + in_y, 136, 56, 25);
		gfx.PutPixel(21 + in_x, 22 + in_y, 137, 57, 26);
		gfx.PutPixel(22 + in_x, 22 + in_y, 128, 48, 17);
		gfx.PutPixel(23 + in_x, 22 + in_y, 116, 36, 6);
		gfx.PutPixel(0 + in_x, 23 + in_y, 118, 38, 6);
		gfx.PutPixel(1 + in_x, 23 + in_y, 117, 36, 6);
		gfx.PutPixel(2 + in_x, 23 + in_y, 116, 35, 5);
		gfx.PutPixel(3 + in_x, 23 + in_y, 116, 35, 5);
		gfx.PutPixel(4 + in_x, 23 + in_y, 116, 35, 5);
		gfx.PutPixel(5 + in_x, 23 + in_y, 116, 35, 5);
		gfx.PutPixel(6 + in_x, 23 + in_y, 116, 35, 5);
		gfx.PutPixel(7 + in_x, 23 + in_y, 116, 35, 5);
		gfx.PutPixel(8 + in_x, 23 + in_y, 116, 35, 5);
		gfx.PutPixel(9 + in_x, 23 + in_y, 112, 33, 2);
		gfx.PutPixel(10 + in_x, 23 + in_y, 114, 34, 3);
		gfx.PutPixel(11 + in_x, 23 + in_y, 116, 35, 5);
		gfx.PutPixel(12 + in_x, 23 + in_y, 116, 35, 5);
		gfx.PutPixel(13 + in_x, 23 + in_y, 116, 35, 5);
		gfx.PutPixel(14 + in_x, 23 + in_y, 116, 35, 5);
		gfx.PutPixel(15 + in_x, 23 + in_y, 117, 36, 6);
		gfx.PutPixel(16 + in_x, 23 + in_y, 115, 35, 4);
		gfx.PutPixel(17 + in_x, 23 + in_y, 112, 33, 2);
		gfx.PutPixel(18 + in_x, 23 + in_y, 116, 35, 5);
		gfx.PutPixel(19 + in_x, 23 + in_y, 116, 35, 5);
		gfx.PutPixel(20 + in_x, 23 + in_y, 116, 35, 5);
		gfx.PutPixel(21 + in_x, 23 + in_y, 116, 35, 5);
		gfx.PutPixel(22 + in_x, 23 + in_y, 117, 36, 6);
		gfx.PutPixel(23 + in_x, 23 + in_y, 118, 38, 6);
	}

}

void Crate::UpdateTime(float dt)
{
	if (!onScreen)
	{
		totalTime += dt;
		if (totalTime > activationTime)
		{
			setOnScreen();
		}
	}
}

void Crate::Restart()
{
	activated = false;
	onScreen = false;
	totalTime = 0.0f;
}

void Crate::setOnScreen()
{
	onScreen = true;

	std::random_device e;
	std::mt19937 rng(e());
	std::uniform_real_distribution<float> xDist(25, 600);
	std::uniform_real_distribution<float> yDist(25, 200);

	pos = Vec2(xDist(rng), yDist(rng));
}
