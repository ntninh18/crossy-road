#include "CGame.h"

CGAME::CGAME()
{
	cn = new CPEOPLE;
	CVEHICLE* temp = new CCAR(30, 17);
	veh.push_back(temp);
	/*temp = new CCAR(15, 21);
	veh.push_back(temp);*/
	temp = new CCAR(3, 9);
	veh.push_back(temp);
	temp = new CTRUCK(60, 5);
	veh.push_back(temp);
	temp = new CTRUCK(30, 5);
	veh.push_back(temp);

	temp = new CTRUCK(25, 1);
	veh.push_back(temp);
	CANIMAL* tempA = new CBIRD(41, 26);
	ani.push_back(tempA);
	tempA = new CDINOSAUR(69, 13);
	ani.push_back(tempA);



}

//void CGAME::drawBoard(int x, int y, int width, int height, int curPosX, int curPosY)
//{
	//gotoXY(x, y);
	//cout << "X";
	//for (int i = 1; i < width; i++)
	//	cout << "X";
	//cout << "X";
	//gotoXY(x, height + y);
	//cout << "X";
	//for (int i = 1; i < height; i++)
	//	cout << "X";
	//cout << "X";
	//for (int i = y + 1; i < height + y; i++)
	//{
	//	gotoXY(x, i);
	//	cout << "X";
	//	gotoXY(x + width, i);
	//	cout << "X";
	//}
	//gotoXY(curPosX, curPosY);
//}

void CGAME::drawGame()
{
	//cn->drawPeople(cn->mX, cn->mY);
	system("cls");
	gotoXY(0, 0);
	cout << (char)201;
	for (int i = 0; i < screenSizePlay_L; i++) {
		cout << (char)205;
	}
	cout << (char)187;
	for (int j = 1; j < screenSizePlay_W; j++) {
		gotoXY(0, j);
		cout << (char)186;
	}
	gotoXY(0, screenSizePlay_W);
	cout << (char)200;
	for (int i = 0; i <= screenSizePlay_L - 1; i++) {
		cout << (char)205;
	}
	cout << (char)188;
	for (int j = 1; j < screenSizePlay_W; j++) {
		gotoXY(screenSizePlay_L + 1, j);
		cout << (char)186;

	}
	for (int i = 4; i < screenSizePlay_W; i += 4) {
		gotoXY(0, i);
		cout << (char)199;
		for (int j = 1; j <= screenSizePlay_L; j++)
			cout << (char)196;
		cout << (char)182;
	}

}

CGAME::~CGAME()
{
	//delete[] axt, axh, akl, ac;
	//axt = nullptr;
	//axh = nullptr;
	//akl = nullptr;
	//ac = nullptr;
}

CPEOPLE* CGAME::getPeople()
{
	return cn;
}

vector<CVEHICLE*>& CGAME::getVehicle()
{
	//int numberOfVehicle = sizeof(axt) + sizeof(axh);
	//CVEHICLE * ret = new CVEHICLE[numberOfVehicle];
	//int count = 0;
	//for (count; count < sizeof(axt); count++)
	//	ret[count] = axt[count];
	//int countTemp = 0;
	//for (count; count < numberOfVehicle; count++)
	//{
	//	ret[count] = axh[countTemp];
	//	countTemp++;
	//}
	//return ret;
	return veh;
}

vector <CANIMAL*>& CGAME::getAnimal()
{
	//int numberOfAni = sizeof(akl) + sizeof(ac);
	//CANIMAL * ret = new CANIMAL[numberOfAni];
	//int count = 0;
	//for (count; count < sizeof(akl); count++)
	//	ret[count] = akl[count];
	//int countTemp = 0;
	//for (count; count < numberOfAni; count++)
	//{
	//	ret[count] = ac[countTemp];
	//	countTemp++;
	//}
	//return ret;
	return ani;
}

void CGAME::resetGame()
{
	//cn.Right();
	//speed = 3;	//Toc do dau game
	////Mang Xe
	//if (axt == nullptr && axh == nullptr && akl == nullptr && ac == nullptr)
	//{
	//	int truck = rand() % (MAX_CAR);
	//	axt = new  CTRUCK[truck];
	//	int car = rand() % (MAX_CAR - truck);
	//	axh = new CCAR[car];
	//	int dino = rand() % (MAX_CAR - truck - car);
	//	akl = new CDINOSAUR[dino];
	//	int bird = rand() % (MAX_CAR - truck - car - dino);
	//	ac = new CBIRD[bird];

	//	//for (int i = 0; i < MAX_CAR; i++)
	//	//{
	//	//	int temp = (rand() % (WIDTH_CONSOLE - MAX_CAR_LENGTH)) + 1;
	//	//	for (int j = 0; j < MAX_CAR_LENGTH; j++)
	//	//	{
	//	//		axt[i].Move(temp + j, 1 + i);
	//	//	}
	//	//}
	//	for (int i = 0; i < truck; i++)
	//	{
	//		for (int j = 0; j < MAX_CAR_LENGTH; j++)
	//		{
	//			Sleep(50 * (6 - speed));
	//			axt[i].Move(1 + j, 1 );
	//		}
	//	}

	//}
	////currpos[0] = NULL; currpos[1] = NULL;
	//system("cls");
	////drawBoard(0, 0, WIDTH_CONSOLE, HEIGH_CONSOLE);
}

void CGAME::exitGame(HANDLE t)
{
	TerminateThread(t, 0);
	//~CGAME();
	exit(1);
}

void CGAME::startGame()
{
	//resetGame();
	//cn.changeState(true);
	cn = new CPEOPLE;

	cn->mState = true;
	cn->changeState(true);
	pause = false;
	drawGame();
}

void CGAME::pauseGame(HANDLE t)
{
	pause = true;
}

void CGAME::resumeGame(HANDLE)
{
	pause = false;
}

void CGAME::updatePosPeople(char mov)
{
	cn->move(mov);
}

void CGAME::updatePosVehicle()
{
	for (int i = 0; i < veh.size(); i++)
	{
		veh[i]->Move(veh[i]->mX + 1, veh[i]->mY);
	}
}

void CGAME::updatePosAnimal()
{
	for (int i = 0; i < ani.size(); i++)
	{
		ani[i]->Move(ani[i]->mX + 1, ani[i]->mY);
	}
}

bool CGAME::getPause()
{
	return pause;
}

void CGAME::setPause(bool x)
{
	pause = x;
}
