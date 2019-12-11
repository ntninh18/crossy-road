#include "CGraphics.h"
#include "CGame.h"
#include <chrono>
bool isRun = true;
int KEY = NULL;
CGAME cg;
void subThread()
{
	while (isRun) {
		while (!cg.getPause())
		{
			cg.updatePosVehicle();
			cg.updatePosAnimal();
			if (cg.getPeople()->getLevel() == 5)
				Sleep(30);		//Speed
			else if (cg.getPeople()->getLevel() == 4)
				Sleep(50);
			else if (cg.getPeople()->getLevel() == 3)
				Sleep(100);
			else if (cg.getPeople()->getLevel() == 3)
				Sleep(150);
			else Sleep(200);

		}
		//}
		//Sleep(100);
	}
	//while (isRun)
	//{
	//	if (!cg.getPause())
	//	{
	//		if (KEY != NULL)
	//		{
	//			cg.updatePosPeople(KEY);
	//			KEY = NULL;
	//		}
	//		cg.updatePosAnimal();
	//		cg.updatePosVehicle();
	//		if (cg.getPeople()->isImpact(cg.getVehicle()) || cg.getPeople()->isImpact(cg.getAnimal())) {
	//			isRun = false;
	//			cout << "Bi dung roi nha\n";
	//		}
	//	}
	//	Sleep(25);
	//}
}

void threadCheckImpact()
{
	while (isRun)
	{
		if (cg.getPeople()->isImpact(cg.getVehicle()) || cg.getPeople()->isImpact(cg.getAnimal())) {
			isRun = false;
			cg.setPause(true);
			cout << "Bi dung roi nha\n";
		}

	}
	
}

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
	gotoXY(x, 17); cout << menu_text[0];
	gotoXY(x - 1, 18); cout << menu_text[1];
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
			gotoXY(x, y);
			switch (y)
			{
			case 17: gotoXY(x, 17); cout << menu_text[0]; break;
			case 18: gotoXY(x - 1, 18); cout << menu_text[1]; break;
			case 19: gotoXY(x, 19); cout << menu_text[2]; break;
			}
			y--;
			if (y < 17)
				y = 19;
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
				y = 17;
		}
		if (y == 17 && key == key_Enter)
		{
			PlaySound("sound/click.WAV", NULL, SND_ASYNC);
			//Test();
			cg.startGame();
			PlaySound("sound/bgm.WAV", NULL, SND_ASYNC);
			thread t(subThread);
		
			thread t1(threadCheckImpact);
			while (isRun)
			{
				int temp = _getch();
				KEY = temp;
				if (KEY == 32)
				{
					if (cg.getPause() == false)
						cg.setPause(true);
					else cg.setPause(false);
				}

				if (!cg.getPause())
				{

					if (KEY != NULL)
					{
						cg.updatePosPeople(KEY);
						KEY = NULL;
					}


				}
			}
			t.join();
			t1.join();


			//while (true)
			//{
			//	int temp = toupper(_getch());
			//	KEY = temp;

			//}

	/*		while (true) {
				if (!cg.getPause()) {
					if (KEY != NULL) {
						cg.updatePosPeople(KEY);
						KEY = NULL;
					}
					while (true)
					{
						int temp = _getch();
						KEY = temp;

					}
				}
			}*/

		}
		if (y == 18 && key == key_Enter)
		{
			PlaySound("sound/bgm.WAV", NULL, SND_ASYNC);
		}
		else if (y == 19 && key == key_Enter)
		{
			PlaySound("sound/crash.WAV", NULL, SND_ASYNC);
		}
	} while (true);
}


void Test() {
	clrscr();
	PlaySound("sound/bgm.WAV", NULL, SND_ASYNC);
	drawScreen();
	CPEOPLE a;
	//a.drawPeople(screenSizePlay_L / 2-1, screenSizePlay_W-3);
	//a.move();
	CGAME m;
	m.resetGame();
}