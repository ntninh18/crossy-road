#include "Library.h"
#include "CGame.h"




int main() {
	system("color 0E");
	FixConsoleWindow();
	resizeConsole(1300, 600);
	Text(30, 5);

	Menu();

	//CGAME cg;
	//while (1)
	//{
	//	cg.updatePosVehicle();
	//	Sleep(25);
	//	cg.updatePosAnimal();
	//}
	return 0;
}