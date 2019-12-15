#include "Library.h"
#include "CGame.h"

int main() {
	system("color E0");
	SetConsoleTitle("Crossy Road - CS202 Project");
	FixConsoleWindow();
	normalSize();
	Text(15, 5);
	// Menu();

	//CGAME cg;
	//while (1)
	//{
	//	cg.updatePosVehicle();
	//	Sleep(25);
	//	cg.updatePosAnimal();
	//}
	_getch();
	Menu();
	return 0;
}
