#include "CPeople.h"

CPEOPLE::CPEOPLE()
{
	mX = screenSizePlay_L / 2;
	mY = screenSizePlay_W - 3;
	level = 1;
}

void CPEOPLE::Up()
{
	mY -= 4;
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
	mY += 4;
	if (mY > screenSizePlay_W - 3)
		mX = screenSizePlay_W - 3;
}

bool CPEOPLE::isImpact(const vector<CVEHICLE *>& vehicle)
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
	for (int i =0; i < vehicle.size(); i++)
	{
		if ((vehicle[i]->mX-4 <= mX && (mX <= (vehicle[i]->mX + 12))) && vehicle[i]->mY == mY) {
			mState = false;
			return true;
		}
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

	for (int i = 0; i < animal.size(); i++)				//coi lai ham nay
	{
		if ((animal[i]->mX-4 <= mX) && (mX <= animal[i]->mX + 7) && animal[i]->mY == mY) {
			mState = false;
			return true;
		}
	}
	return false;
}

bool CPEOPLE::isFinish()
{
	if (level == 5 && mY==3)
		return true;
	return false;
}

void CPEOPLE::increaseLevel(CGAME test)
{
	if (level < 5) {
		++level;
	}
	CANIMAL* tempA = new CDINOSAUR(2, 25);
	gotoXY(90, 21);
	cout << level;
	test.addMore(tempA);
}

/*
  ___
 (o-o)
 /___\
*/
void CPEOPLE::drawPeople(int x, int y)
{
	//gotoXY(x, y);
	//cout << "  ()";
	//gotoXY(x, y + 1);
	//cout << " /||\\";
	//gotoXY(x, y + 2);
	//cout << "  /\\";

	if (!isDead()) {
		gotoXY(x, y);
		cout << "  ___";
		gotoXY(x, y + 1);
		cout << " (o-o)";
		gotoXY(x, y + 2);
		cout << " /___\\";
	}
	else {
		TextColor(236);
		gotoXY(x, y);
		cout << "  ___";
		gotoXY(x, y + 1);
		cout << " (x-x)";
		gotoXY(x, y + 2);
		cout << " /___\\";
		TextColor(214);
	}
}

void CPEOPLE::erasePeople(int x, int y)
{
	gotoXY(x, y);
	cout << "      ";
	gotoXY(x, y + 1);
	cout << "       ";
	gotoXY(x, y + 2);
	cout << "        ";
}
void CPEOPLE::changeState(bool x)
{
	mState = x;
}
void CPEOPLE::move(int m, CGAME test)
{
	int key = m;
	if (key == key_Up || key == 'w')	//di len
	{
		if (mY < 3)
		{
			erasePeople(mX, mY);
			increaseLevel(test);
		
			mX = screenSizePlay_L / 2;
			mY = screenSizePlay_W - 3;
			drawPeople(mX, mY);
		}
		else {
			erasePeople(mX, mY);
			mY -= 4;
			gotoXY(mX, mY);
			drawPeople(mX, mY);
			return;
		}

	}
	if (key == key_Down || key == 's')	//di xuong
	{
		if (mY >= screenSizePlay_W - 3)
			return;
		else {
			erasePeople(mX, mY);
			mY += 4;
			gotoXY(mX, mY);
			drawPeople(mX, mY);
			return;
		}

	}
	if (key == key_Left || key == 'a')	//qua trai
	{
		if (mX <= 2)
			return;
		else {
			erasePeople(mX, mY);
			mX -= 2;
			gotoXY(mX, mY);
			drawPeople(mX, mY);
			return;
		}

	}
	if (key == key_Right || key == 'd')	//qua phai
	{
		if (mX >= screenSizePlay_L - 4)
			return;
		else {
			erasePeople(mX, mY);
			mX += 2;
			gotoXY(mX, mY);
			drawPeople(mX, mY);
			return;
		}
	}
	// if (key == key_Esc) Menu();
	else return;
}
int CPEOPLE::getLevel()
{
	return level;
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
	}

}