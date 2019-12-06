#include "CPeople.h"

CPEOPLE::CPEOPLE()
{
	mX = screenSizePlay_L / 2;
	mY = screenSizePlay_W - 1;
	level = 1;
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

bool CPEOPLE::isImpact(const vector<CVEHICLE *>&vehicle)
{
	//if (mY != vehicle[0].mY)
	//	return false;
	//for (int i = 0; i < level; i++) {
	//	if ((mX <= vehicle[i].mX + 4 && mX >= vehicle[i].mX) || (mX + 2 <= vehicle[i].mX && mX + 2 >= vehicle[i].mX)) {
	//		mState = false;
	//		return true;
	//	}
	//}
	//return false;
	for (int i =0; i< vehicle.size(); i++)
	{
		if (vehicle[i]->mX = mX && vehicle[i]->mY == mY)
			return true;
	}
	return false;
}

bool CPEOPLE::isImpact(const vector<CANIMAL *>&animal)
{
	//if (mY != animal[0].mY)
	//	return false;
	//for (int i = 0; i < level; i++) {
	//	if ((mX <= animal[i].mX + 4 && mX >= animal[i].mX) || (mX + 2 <= animal[i].mX && mX + 2 >= animal[i].mX)) {
	//		mState = false;
	//		return true;
	//	}
	//}
	//return false;
	for (int i = 0; i < animal.size(); i++)
	{
		if (animal[i]->mX = mX && animal[i]->mY == mY)
			return true;
	}
	return false;
}

bool CPEOPLE::isFinish()
{
	if (level == 10)
		return true;
	return false;
}

void CPEOPLE::increaseLevel()
{
	if (level < 10) {
		++level;
	}
}


void CPEOPLE::drawPeople(int x, int y)
{
	gotoXY(x, y);
	TextColor(14);
	cout << (char)234;
	TextColor(7);
}

void CPEOPLE::move()
{
	mX = screenSizePlay_L / 2 - 1;
	mY = screenSizePlay_W - 1;
	drawPeople(mX, mY);
	while (true)
	{
		//cin.ignore();
		char key = _getch();
		while (true)
		{
			if (key == key_Up || key == 'w')	//di len
			{
				if (mY <= 1)
					break;
				else {
					delPeople(mX, mY);
					mY -= 1;
					gotoXY(mX, mY);
					drawPeople(mX, mY);
					break;
				}

			}
			if (key == key_Down || key == 's')	//di xuong
			{
				if (mY >= screenSizePlay_W - 1)
					break;
				else {
					delPeople(mX, mY);
					mY += 1;
					gotoXY(mX, mY);
					drawPeople(mX, mY);
					break;
				}

			}
			if (key == key_Left || key == 'a')	//qua trai
			{
				if (mX <= 1)
					break;
				else {
					delPeople(mX, mY);
					mX -= 1;
					gotoXY(mX, mY);
					drawPeople(mX, mY);
					break;
				}

			}
			if (key == key_Right || key == 'd')	//qua phai
			{
				if (mX > screenSizePlay_L - 2)
					break;
				else {
					delPeople(mX, mY);
					mX += 1;
					gotoXY(mX, mY);
					drawPeople(mX, mY);
					break;
				}
			}
			//if (key == key_Esc) Menu(cg, KEY);
			else break;

		}
	}

}
void CPEOPLE::delPeople(int x, int y)
{
	gotoXY(x, y);
	if (y % 4 == 0)
		cout << (char)196;
	else
		cout << " ";
}
void CPEOPLE::changeState(bool x)
{
	mState = x;
}
void CPEOPLE::move(int m)
{
	int key = m;
	if (key == key_Up || key == 'w')	//di len
	{
		if (mY <= 1)
			return;
		else {
			delPeople(mX, mY);
			mY -= 1;
			gotoXY(mX, mY);
			drawPeople(mX, mY);
			return;
		}

	}
	if (key == key_Down || key == 's')	//di xuong
	{
		if (mY >= screenSizePlay_W - 1)
			return;
		else {
			delPeople(mX, mY);
			mY += 1;
			gotoXY(mX, mY);
			drawPeople(mX, mY);
			return;
		}

	}
	if (key == key_Left || key == 'a')	//qua trai
	{
		if (mX <= 1)
			return;
		else {
			delPeople(mX, mY);
			mX -= 1;
			gotoXY(mX, mY);
			drawPeople(mX, mY);
			return;
		}

	}
	if (key == key_Right || key == 'd')	//qua phai
	{
		if (mX > screenSizePlay_L - 2)
			return;
		else {
			delPeople(mX, mY);
			mX += 1;
			gotoXY(mX, mY);
			drawPeople(mX, mY);
			return;
		}
	}
	//if (key == key_Esc) Menu();
	else return;
}
bool CPEOPLE::isDead()
{
	if (mState == 0)
		return true;
	else
		return false;
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
	for (int j = 1; j < screenSizePlay_W; j++) {
		gotoXY(screenSizePlay_L + 1, j);
		cout << (char)186;

	}
	for (int i = 4; i < screenSizePlay_W; i += 4) {
		gotoXY(0, i);
		cout << (char)199;
		for (int j = 1; j <= screenSizePlay_L; j++)
			cout << (char)196;
		cout << (char)182;
		/*gotoXY(0, i+1);
		cout << (char)204;
		for (int j = 1; j <= screenSizePlay_L; j++)
			cout << (char)205;
		cout << (char)185;*/
	}

}