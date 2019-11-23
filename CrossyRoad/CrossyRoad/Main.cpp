
#include "Library.h"

int main() {
	system("color 5");
	FixConsoleWindow();
	resizeConsole(1300, 700);
	Text(30, 5);
	CTRUCK car;
	for (int i = 10; i < 120; i++) {
		car.Move(i, 30);
		Sleep(20);
	}
	Menu();

	return 0;
}