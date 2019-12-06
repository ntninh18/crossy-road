#include "Library.h"

void CVEHICLE::draw() 
{
	int x = mX;
	int y = mY;
	gotoXY(x, y);
	cout << "   " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;
	gotoXY(x, y + 1);
	cout << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;
	gotoXY(x, y + 2);
	cout << "   O     O";
}

CVEHICLE::CVEHICLE()
{
	mX = 0;
	mY = 0;
}

CVEHICLE::CVEHICLE(int x, int y)
{
	mX = x;
	mY = y;
}

void CCAR::Move(int x, int y)
{
	if (x >= screenSizePlay_L-8)
	{
		earseVeh();
		mX = 2;
		mY = y;
		return;
	}
	mX = x;
	mY = y;
	draw();


}
void CCAR::draw()
{
	int x = mX;
	int y = mY;
	gotoXY(x, y);
	cout << "   " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;
	gotoXY(x, y + 1);
	cout << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;
	gotoXY(x, y + 2);
	cout << "   O     O";
}
CCAR::CCAR(): CVEHICLE()
{

}
CCAR::CCAR(int x, int y) : CVEHICLE(x, y)
{
}
void CTRUCK::Move(int x, int y)
{
	if (x >= screenSizePlay_L-8)
	{
		earseVeh();
		mX = 2;
		mY = y;
		return;
	}
	mX = x;
	mY = y;
	draw();

}

void CTRUCK::draw()
{
	int x = mX;
	int y = mY;
	gotoXY(x, y);
	cout << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;
	gotoXY(x, y + 1);
	cout << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;
	gotoXY(x, y + 2);
	cout << "  O     O";
}

CTRUCK::CTRUCK(): CVEHICLE()
{

}

CTRUCK::CTRUCK(int x, int y): CVEHICLE(x,y)
{
}

void CVEHICLE::earseVeh()
{
	int x = mX;
	int y = mY;
	gotoXY(x, y);
	cout << "            ";
	gotoXY(x, y + 1);
	cout << "            ";
	gotoXY(x, y + 2);
	cout << "            ";
}

void CVEHICLE::Move(int, int)
{
	return;
}
