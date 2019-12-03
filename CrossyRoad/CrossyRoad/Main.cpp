
#include "Library.h"

int main() {
	system("color 0E");
	FixConsoleWindow();
	resizeConsole(1300, 600);
	//Text(30, 5);

	CBIRD bird;
	for (int i = 150; i >10 ; i--) {
		bird.deleteBird(i, 5);
		bird.Draw(i, 5, 0);
		Sleep(100);
	}
	/*Menu();*/



	return 0;
}