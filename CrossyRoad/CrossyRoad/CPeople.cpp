#include"Library.h"
#include "CPeople.h"

CPEOPLE::CPEOPLE()
{
	mX = screenSizePlay_L / 2;
	mY = screenSizePlay_W - 1;
}

void CPEOPLE::Up()
{
	mY -= 1;
	if (mY < 0)
		mY = 0;
}

void CPEOPLE::Left()
{
	mX -= 1;
	if (mX < 1)
		mX = 1;
}

void CPEOPLE::Right()
{
	mX += 1;
	if (mY > screenSizePlay_L)
		mX = screenSizePlay_L;
}

void CPEOPLE::Down()
{
	mY += 1;

	if (mY > screenSizePlay_W - 3)
		mX = screenSizePlay_W - 3;
}


void CPEOPLE::drawPeople (int x, int y)
{
	gotoXY(x, y);
	TextColor(14);
	cout << (char)157<<(char)157;
	TextColor(7);
}

void CPEOPLE::move ()
{
	mX = screenSizePlay_L / 2 - 1;
	mY = screenSizePlay_W -1;
	drawPeople (mX, mY);
	while (true)
	{
		//cin.ignore();
		char key = _getch();
		while (true)
		{
			if (key == -32 || key == 'w')	//di len
			{
				if (mY <= 1)
					break;
				else {
					delPeople (mX, mY);
					mY -= 1;
					gotoXY(mX, mY);
					drawPeople (mX, mY);
					break;
				}

			}
			if (key == 80 || key == 's')	//di xuong
			{
				if (mY >= screenSizePlay_W - 1)
					break;
				else {
					delPeople (mX, mY);
					mY += 1;
					gotoXY(mX, mY);
					drawPeople (mX, mY);
					break;
				}

			}
			if (key == 75 || key == 'a')	//qua trai
			{
				if (mX <= 1)
					break;
				else {
					delPeople (mX, mY);
					mX -= 1;
					gotoXY(mX, mY);
					drawPeople (mX, mY);
					break;
				}

			}
			if (key == 77 || key == 'd')	//qua phai
			{
				if (mX > screenSizePlay_L - 2)
					break;
				else {
					delPeople (mX, mY);
					mX += 1;
					gotoXY(mX, mY);
					drawPeople (mX, mY);
					break;
				}

			}
			else break;

		}
	}

}
void CPEOPLE::delPeople (int x, int y)
{
	gotoXY(x, y);
	if (y % 4 == 0)
		cout << (char)205 << (char)205;
	else
	cout << "  ";
}
bool CPEOPLE::isDead()
{
	if (mState == 0)
		return 1;
	else
		return 0;

}

void drawScreen()
{
	gotoXY(0, 0);
	cout << (char)201;
	for (int i = 0; i < screenSizePlay_L; i++) {
		cout << (char)205;
	}
	cout << (char)187;
	for (int j = 1; j < screenSizePlay_W; j++) {
		gotoXY(0, j);
		cout << (char)186;
	}
	gotoXY(0, screenSizePlay_W);
	cout << (char)200;
	for (int i = 0; i <= screenSizePlay_L - 1; i++) {
		cout << (char)205;
	}
	cout << (char)188;
	for (int j = 1; j < screenSizePlay_W ; j++) {
		gotoXY(screenSizePlay_L + 1, j);
		cout << (char)186;

	}
	for (int i = 4; i < screenSizePlay_W; i += 4){
		gotoXY(0, i);
		cout << (char)204;
		for (int j = 1; j <= screenSizePlay_L; j++)
			cout << (char)205;
		cout << (char)185;
		/*gotoXY(0, i+1);
		cout << (char)204;
		for (int j = 1; j <= screenSizePlay_L; j++)
			cout << (char)205;
		cout << (char)185;*/
	}
	
}