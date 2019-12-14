#include "CGraphics.h"
#include "CGame.h"
#include <chrono>
#include <ctime>
bool isRun = true;
int KEY = NULL;
int light = 0;
CGAME cg;

void subThread()
{
	while (isRun) {
		while (!cg.getPause())
		{
			//srand(time(0));
			light = rand() % 2 + 1;
			if (light == 1)
			{
				gotoXY(75, 30);
				//Ve Cuc mau Do o day
				system("color E0");
				cg.updatePosVehicle();
			}
			else
			{
				gotoXY(75, 30);
				//Ve Cuc Mau Xanh o day
			}
			cg.updatePosAnimal();
			if (cg.getPeople()->getLevel() == 5)
				Sleep(30);		//Speed
			else if (cg.getPeople()->getLevel() == 4)
				Sleep(50);
			else if (cg.getPeople()->getLevel() == 3)
				Sleep(100);
			else if (cg.getPeople()->getLevel() == 2)
				Sleep(150);
			else Sleep(200);

		}

	}
}

void threadCheckImpact()
{
	while (isRun)
	{
		if (cg.getPeople()->isImpact(cg.getVehicle()) || cg.getPeople()->isImpact(cg.getAnimal())) {
			isRun = false;
			cg.setPause(true);
			PlaySound("sound/crash.WAV", NULL, SND_ASYNC);
			_getch();
			exit(0);
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
	clrscr();
	int key = 999;
	setFontSize(40);
	resizeConsole(1080, 575);
	char menu_text[3][100] = { "NEW GAME","LOAD GAME","SETTINGS" };

	int x = 45, y = 17, Y = 17;
	gotoXY(x, 17); cout << menu_text[0];
	gotoXY(x - 1, 18); cout << menu_text[1];
	gotoXY(x, 19); cout << menu_text[2];
	do {
		gotoXY(x, y);
		switch (y)
		{
		case 17: gotoXY(x, Y); cout << menu_text[0]; break;
		case 18: gotoXY(x - 1, Y+1); cout << menu_text[1]; break;
		case 19: gotoXY(x, Y+2); cout << menu_text[2]; break;
		}
		if (key != key_Enter)
			key = _getch();
		if (key == key_Up)
		{
			gotoXY(x, y);
			switch (y)
			{
			case 17: gotoXY(x, Y); cout << menu_text[0]; break;
			case 18: gotoXY(x - 1, Y+1); cout << menu_text[1]; break;
			case 19: gotoXY(x, Y+2); cout << menu_text[2]; break;
			}
			y--;
			if (y < Y)
				y = Y+2;
		}
		else if (key == key_Down)
		{
			gotoXY(x, y);
			switch (y)
			{
			case 17: gotoXY(x, Y); cout << menu_text[0]; break;
			case 18: gotoXY(x - 1, Y+1); cout << menu_text[1]; break;
			case 19: gotoXY(x, Y+2); cout << menu_text[2]; break;
			}
			y++;
			if (y > Y+2)
				y = Y;
		}
		if (y == Y && key == key_Enter)
		{

			gotoXY(80, 25);
			cout << "NHan";
			PlaySound("sound/click.WAV", NULL, SND_ASYNC);
			//Test();
			cg.startGame();
			//drawGame();
			thread t(subThread);
			thread t1(threadCheckImpact);
			//gotoXY(90, 3);
			//Viet loi huong dan cho game
			//VD: Nhan t de load game, Nhan l de luu game, Nhan Space de pause game.
			while (isRun)
			{
				int temp = _getch();
				KEY = temp;
				if (KEY == key_Space)
				{
					if (cg.getPause() == false)
						cg.setPause(true);
					else cg.setPause(false);
				}
				if (KEY == 'l' || KEY == 'L')
				{
					cg.setPause(true);
					char name[50];
					gotoXY(95, 10);
					cout << "Save at: ";
					cin >> name;
					cg.saveGame(name);
					gotoXY(95, 10);
					cout << "                         ";
				}
				if (KEY == 't' || KEY == 'T')
				{
					cg.setPause(true);
					char namE[50];
					gotoXY(95, 10);
					cout << "Load at: ";
					cin >> namE;
					cg.loadGame(namE);
					gotoXY(95, 10);
					cout << "                         ";
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
		}
		if (y == 18 && key == key_Enter)
		{
			PlaySound("sound/bgm.WAV", NULL, SND_ASYNC);
			char namE[50];
			gotoXY(30, 10);
			cout << "Load at: ";
			cin >> namE;
			cg.loadGame(namE);
			y = Y;
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
void normalSize() {
	setFontSize(16);
	resizeConsole(1080, 575);
}