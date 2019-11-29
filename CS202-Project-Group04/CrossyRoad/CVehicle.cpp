#include "CVehicle.h"

void CCAR::Move(int x, int y)
{
	gotoXY(x, y);
	cout << "    " << (char)219 << (char)219 << (char)219 << (char)219;
	gotoXY(x, y + 1);
	cout << "  " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219;
	gotoXY(x, y + 2);
	cout << "    O  O";

}
void CTRUCK::Move(int x, int y)
{
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
