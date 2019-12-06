
#include "Library.h"
#include "CGame.h"
bool isRun = true;
int KEY = NULL;
CGAME cg;
void subThread()
{
	while (isRun) {
		if (!cg.getPause()) {
			if (KEY != NULL) {
				cg.updatePosPeople(KEY);
				KEY = NULL;
			}
			cg.updatePosVehicle();
			if (cg.getPeople()->isImpact(cg.getVehicle()) || cg.getPeople()->isImpact(cg.getAnimal())) {
				isRun = false;
			}
		}
		Sleep(25);



	}
}

int main() {
	system("color 0E");
	FixConsoleWindow();
	resizeConsole(1300, 600);
	Text(30, 5);

	thread t1(subThread);
	Menu(cg,KEY);


	return 0;
}