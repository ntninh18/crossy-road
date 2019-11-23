
#include "Library.h"

int main() {
	FixConsoleWindow();
	resizeConsole(1000, 800);
	//xt(30, 5);
	//CCAR car;
	//for (int i = 5; i < 50; i++) {
	//	car.Move(i, 20);
	//	Sleep(50);
	//}
	drawScreen();
	CPEOPLE a;
	//a.drawPeople(screenSizePlay_L / 2-1, screenSizePlay_W-3);
	a.move();
	_getch();
	return 0;
}