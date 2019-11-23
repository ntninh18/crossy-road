#include "CGraphics.h"

string space(int k)
{
	string ret = "";
	for (int i = 0; i < k; i++)
		ret += "  ";
	return ret;
}
string block(int k) {
	string ret = "";
	for (int i = 0; i < k; i++) {
		ret += (char)219;
		ret += (char)219;
	}
	return ret;
}

void Text(int x, int y) {
	gotoXY(x, y);     cout << space(1) << block(5) << space(1) << block(5) << space(3) << block(5) << space(4) << block(5) << space(4) << block(5) << space(2) << block(4) << space(3) << block(3) << endl;
	gotoXY(x, y + 1); cout << block(6) << space(1) << block(5) << space(2) << block(7) << space(2) << block(6) << space(3) << block(6) << space(3) << block(3) << space(3) << block(3) << endl;
	gotoXY(x, y + 2); cout << block(3) << space(4) << block(4) << space(2) << block(3) << space(2) << block(3) << space(1) << block(3) << space(6) << block(3) << space(7) << block(3) << space(2) << block(3) << endl;
	gotoXY(x, y + 3); cout << block(2) << space(5) << block(2) << space(4) << block(3) << space(2) << block(3) << space(1) << block(5) << space(4) << block(5) << space(6) << block(3) << space(1) << block(3) << endl;
	gotoXY(x, y + 4); cout << block(2) << space(5) << block(2) << space(4) << block(3) << space(2) << block(3) << space(2) << block(6) << space(3) << block(6) << space(4) << block(3) << space(1) << block(3) << endl;
	gotoXY(x, y + 5); cout << block(2) << space(5) << block(2) << space(4) << block(3) << space(2) << block(3) << space(4) << block(5) << space(4) << block(5) << space(4) << block(5) << endl;
	gotoXY(x, y + 6); cout << block(3) << space(4) << block(2) << space(4) << block(3) << space(2) << block(3) << space(1) << block(1) << space(4) << block(3) << space(1) << block(1) << space(4) << block(3) << space(4) << block(5) << endl;
	gotoXY(x, y + 7); cout << block(6) << space(1) << block(2) << space(5) << block(7) << space(2) << block(7) << space(2) << block(7) << space(4) << block(5) << endl;
	gotoXY(x, y + 8); cout << space(1) << block(5) << space(1) << block(2) << space(6) << block(5) << space(3) << block(6) << space(3) << block(6) << space(6) << block(3) << endl;
	gotoXY(x, y + 9); cout << space(44) << block(3) << endl;
	gotoXY(x, y + 10); cout << space(41) << block(5) << endl;
	gotoXY(x, y + 11); cout << space(9) << block(5) << space(2) << block(5) << space(4) << block(5) << space(2) << block(6) << space(3) << block(5) << endl;
	gotoXY(x, y + 12); cout << space(9) << block(5) << space(1) << block(7) << space(2) << block(7) << space(1) << block(7) << space(2) << block(2) << endl;
	gotoXY(x, y + 13); cout << space(9) << block(4) << space(1) << block(3) << space(2) << block(3) << space(6) << block(3) << space(1) << block(3) << space(2) << block(3) << endl;
	gotoXY(x, y + 14); cout << space(9) << block(2) << space(3) << block(3) << space(2) << block(3) << space(6) << block(3) << space(1) << block(3) << space(3) << block(2) << endl;
	gotoXY(x, y + 15); cout << space(9) << block(2) << space(3) << block(3) << space(2) << block(3) << space(2) << block(7) << space(1) << block(3) << space(3) << block(2) << endl;
	gotoXY(x, y + 16); cout << space(9) << block(2) << space(3) << block(3) << space(2) << block(3) << space(2) << block(7) << space(1) << block(3) << space(3) << block(2) << endl;
	gotoXY(x, y + 17); cout << space(9) << block(2) << space(3) << block(3) << space(2) << block(3) << space(2) << block(2) << space(2) << block(3) << space(1) << block(3) << space(2) << block(3) << endl;
	gotoXY(x, y + 18); cout << space(9) << block(2) << space(4) << block(7) << space(2) << block(7) << space(1) << block(7) << endl;
	gotoXY(x, y + 19); cout << space(9) << block(2) << space(5) << block(5) << space(3) << block(4) << space(1) << block(2) << space(1) << block(6) << endl;
}

void Menu()
{
	int key;
	char menu_text[3][100] = { "NEW GAME","LOAD GAME","SETTINGS" };
	SetConsoleTitle("Crossy Road - CS202 Project");
	Text(30, 5);

	int x = 36, y = 17;
	gotoXY(x , 17); cout << menu_text[0];
	gotoXY(x - 1 , 18); cout << menu_text[1];
	gotoXY(x, 19); cout << menu_text[2];
	do {
		gotoXY(x, y);
		switch (y)
		{
		case 17: gotoXY(x, 17); cout << menu_text[0]; break;
		case 18: gotoXY(x - 1, 18); cout << menu_text[1]; break;
		case 19: gotoXY(x, 19); cout << menu_text[2]; break;
		}
		key = _getch();
		if (key == key_Up)
		{
			TextColor(221);
			gotoXY(x, y);
			switch (y)
			{
			case 17: gotoXY(x, 17); cout << menu_text[0]; break;
			case 18: gotoXY(x - 1, 18); cout << menu_text[1]; break;
			case 19: gotoXY(x, 19); cout << menu_text[2]; break;
			}
			y--;
			if (y < 17)
			{
				y = 19;
			}
		}
		else if (key == key_Down)
		{
			gotoXY(x, y);
			switch (y)
			{
			case 17: gotoXY(x, 17); cout << menu_text[0]; break;
			case 18: gotoXY(x - 1, 18); cout << menu_text[1]; break;
			case 19: gotoXY(x, 19); cout << menu_text[2]; break;
			}
			y++;
			if (y > 19)
			{
				y = 17;
			}
		}
		if (y == 17 && key == key_Enter)
		{
			
		}
		if (y == 18 && key == key_Enter)
		{

		}
		else if (y == 19 && key == key_Enter)
		{
			
		}
	} while (true);
}