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

void CCAR::Move(int x, int y)
{
	mX = x;
	mY = y;
	draw();
	if (x == 70)
	{
		gotoXY(x, y);
		cout << "   ";
		gotoXY(x, y + 1);
		cout << "   ";
		gotoXY(x, y + 2);
		cout << "   ";
	}

}
void CCAR::draw()
{
}
void CTRUCK::Move(int x, int y)
{
	mX = x;
	mY = y;
	draw();
	if (x == 70)
	{
		gotoXY(x, y);
		cout << "   ";
		gotoXY(x, y + 1);
		cout << "   ";
		gotoXY(x, y + 2);
		cout << "   ";
	}
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

void CVEHICLE::Move(int, int)
{
	return;
}
