#include "Library.h"
#include <thread>
void moveLeft()
{
	CBIRD bird;
	for (int i = 150; i > 10; i--) {
		bird.deleteBird(i, 5);
		bird.Draw(i, 5, 0);
		Sleep(100);
	}
}
void moveRight()
{
	CBIRD bird;
	for (int i = 10; i < 150; i++) {
		bird.deleteBird(i, 9);
		bird.Draw(i, 9, 1);
		Sleep(100);
	}

}

int main() {
	system("color 0E");
	FixConsoleWindow();
	resizeConsole(1300, 600);
	//Text(30, 5);
	moveLeft();
	//thread th1(moveRight);
	//thread th2(moveLeft);


	//th1.join();
	//th2.join();
	
	
	/*Menu();*/



	return 0;
}