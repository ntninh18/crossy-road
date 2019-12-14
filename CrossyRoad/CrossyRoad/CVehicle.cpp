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
	if (x >= screenSizePlay_L - 12)
	{
		eraseVehicle();
		mX = 2;
		mY = y;
		return;
	}
	mX = x;
	mY = y;
	draw();
}
/*
   ______
  /|_||_\\__
 |_ o___o ___\
 */
void CCAR::draw()
{
	int x = mX;
	int y = mY;
	gotoXY(x, y);
	//cout << "   " << (char)219 << (char)219 << (char)219 << (char)219;
	//gotoXY(x, y + 1);
	//cout << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;
	//gotoXY(x, y + 2);
	//cout << "   O   O";
	cout << "   ______";
	gotoXY(x, y + 1);
	cout << "  /|_||_\\\\___";
	gotoXY(x, y + 2);
	cout << " |_ o___o ___|";
}
CCAR::CCAR() : CVEHICLE()
{
	type = car;
}
CCAR::CCAR(int x, int y) : CVEHICLE(x, y)
{
	type = car;
}
void CTRUCK::Move(int x, int y)
{
	eraseVehicle();
	if (x >= screenSizePlay_L - 12)
	{
		eraseVehicle();
		mX = 2;
		mY = y;
		return;
	}
	mX = x;
	mY = y;
	draw();
	//Sleep(250);

}

/*
   _________.
  | |_| |_| |_
  |_ o___o ___|
 */

void CTRUCK::draw()
{
	int x = mX;
	int y = mY;
	gotoXY(x, y);
	//cout << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;
	//gotoXY(x, y + 1);
	//cout << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;
	//gotoXY(x, y + 2);
	//cout << "  O   O";
	cout << " _________ ";
	gotoXY(x, y + 1);
	cout << "| |_| |_| |_" ;
	gotoXY(x, y + 2);
	cout << "|_ o___o ___|";
}

CTRUCK::CTRUCK() : CVEHICLE()
{
	type = truck;
}

CTRUCK::CTRUCK(int x, int y) : CVEHICLE(x, y)
{
	type = truck;
}

void CVEHICLE::eraseVehicle()
{
	int x = mX;
	int y = mY;
	gotoXY(x, y);
	cout << "            ";
	gotoXY(x, y + 1);
	cout << "             ";
	gotoXY(x, y + 2);
	cout << "              ";
}

void CVEHICLE::Move(int, int)
{
	return;
}