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
	if (mX < 5)
		mX = 5;
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

void CPEOPLE::drawPeople(int x, int y)
{
	/*
	 ()
	/||\
	 /\
	*/
	gotoXY(x, y);
	cout << "  ()";
	gotoXY(x, y + 1);
	cout << " /||\\";
	gotoXY(x, y + 2);
	cout << "  /\\";
}

void move() {

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
}