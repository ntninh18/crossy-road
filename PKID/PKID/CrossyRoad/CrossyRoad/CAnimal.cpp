#include "Library.h"
void CDINOSAUR::Move(int x, int y)
{
	if (x >= screenSizePlay_L-12)
	{
		eraseAn();
		mX = 2;
		mY = y;
		return;
	}
	this->mX = x;
	this->mY = y;
	draw();

}

void CDINOSAUR::draw()
{
	int x = mX;
	int y = mY;
	gotoXY(x, y);
	cout << "   .___";
	gotoXY(x, y+1);
	cout << "  /  o o  <( henlo fren! )";
	gotoXY(x, y+2);
	cout << " /   vvv";
}

void CDINOSAUR::Tell()
{
}

CDINOSAUR::CDINOSAUR(): CANIMAL()
{
}

CDINOSAUR::CDINOSAUR(int x, int y): CANIMAL(x,y)
{
}

void CANIMAL::Move(int , int)
{
	return;
}

void CANIMAL::draw()
{
}

void CANIMAL::Tell()
{
	return;
}

CANIMAL::CANIMAL()
{
	mX = 0; 
	mY = 0;
}

CANIMAL::CANIMAL(int x, int y)
{
	mX = x;
	mY = y;
}

void CANIMAL::eraseAn()
{
	int x = mX;
	int y = mY;
	gotoXY(x, y);
	cout << "            ";
	gotoXY(x, y + 1);
	cout << "                         ";
	gotoXY(x, y + 2);
	cout << "             ";
}

void CBIRD::Move(int x, int y)
{
	if (x >= screenSizePlay_L-8)
	{
		eraseAn();
		mX = 2;
		mY = y;
		return;
	}
	this->mX = x;
	this->mY = y;
	draw();
	if (x == 70)
	{
		gotoXY(x - 3, y - 1); cout << "       ";
		gotoXY(x - 5, y); cout << "               ";
		gotoXY(x - 3, y + 1); cout << "       ";
	}
}

void CBIRD::Tell()
{
}

void CBIRD::draw()
{
	int x = mX;
	int y = mY;
	if (1) {
		gotoXY(x - 3, y);
		cout << " (  o)";
		cout << '>';
		int temp = x % 3;
		if (temp % 3 == 0) {
			gotoXY(x - 1, y - 1);
			cout << "   /\\ ";
		}
		else if (temp % 3 == 1) {
			gotoXY(x - 2, y);
			cout << "  _";
		}
		else {
			gotoXY(x - 1, y + 1);
			cout <<  "   \\/ ";
		}
	}
	else {
		gotoXY(x - 3, y);
		cout << ' <';
		cout << " (o  )";
		int temp = x % 3;
		if (temp % 3 == 0) {
			gotoXY(x - 1, y - 1);
			cout << "   /\\ ";
		}
		else if (temp % 3 == 1) {
			gotoXY(x, y);
			cout << " _ ";
		}
		else {
			gotoXY(x - 1, y + 1);
			cout << "   \\/ ";
		}
	}
}

CBIRD::CBIRD()
{
	mX = 0;
	mY = 0;
}

CBIRD::CBIRD(int x, int y): CANIMAL(x,y)
{
}
