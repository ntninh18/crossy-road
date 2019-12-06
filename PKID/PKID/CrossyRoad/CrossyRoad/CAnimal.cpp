#include "Library.h"
void CDINOSAUR::Move(int x, int y)
{
	this->mX = x;
	this->mY = y;
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

void CDINOSAUR::draw()
{

}

void CDINOSAUR::Tell()
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

void CBIRD::Move(int x, int y)
{
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
		cout << "(  o)";
		cout << '>';
		int temp = x % 3;
		if (temp % 3 == 0) {
			gotoXY(x - 1, y - 1);
			cout << "/\\ ";
		}
		else if (temp % 3 == 1) {
			gotoXY(x - 2, y);
			cout << " _";
		}
		else {
			gotoXY(x - 1, y + 1);
			cout << "\\/ ";
		}
	}
	else {
		gotoXY(x - 3, y);
		cout << '<';
		cout << "(o  )";
		int temp = x % 3;
		if (temp % 3 == 0) {
			gotoXY(x - 1, y - 1);
			cout << " /\\ ";
		}
		else if (temp % 3 == 1) {
			gotoXY(x, y);
			cout << "_ ";
		}
		else {
			gotoXY(x - 1, y + 1);
			cout << " \\/ ";
		}
	}
}
