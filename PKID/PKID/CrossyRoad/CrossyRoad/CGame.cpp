#include "CGame.h"

CGAME::CGAME()
{
}

void CGAME::drawBoard(int x, int y, int width, int height, int curPosX, int curPosY)
{
	gotoXY(x, y);
	cout << "X";
	for (int i = 1; i < width; i++)
		cout << "X";
	cout << "X";
	gotoXY(x, height + y);
	cout << "X";
	for (int i = 1; i < height; i++)
		cout << "X";
	cout << "X";
	for (int i = y + 1; i < height + y; i++)
	{
		gotoXY(x, i);
		cout << "X";
		gotoXY(x + width, i);
		cout << "X";
	}
	gotoXY(curPosX, curPosY);
}

CGAME::~CGAME()
{
	delete[] axt, axh, akl, ac;
	axt = nullptr;
	axh = nullptr;
	akl = nullptr;
	ac = nullptr;
}

CPEOPLE CGAME::getPeople()
{
	return cn;
}

CVEHICLE * CGAME::getVehicle()
{
	int numberOfVehicle = sizeof(axt) + sizeof(axh);
	CVEHICLE * ret = new CVEHICLE[numberOfVehicle];
	int count = 0;
	for (count; count < sizeof(axt); count++)
		ret[count] = axt[count];
	int countTemp = 0;
	for (count; count < numberOfVehicle; count++)
	{
		ret[count] = axh[countTemp];
		countTemp++;
	}
	return ret;
}

CANIMAL * CGAME::getAnimal()
{
	int numberOfAni = sizeof(akl) + sizeof(ac);
	CANIMAL * ret = new CANIMAL[numberOfAni];
	int count = 0;
	for (count; count < sizeof(akl); count++)
		ret[count] = akl[count];
	int countTemp = 0;
	for (count; count < numberOfAni; count++)
	{
		ret[count] = ac[countTemp];
		countTemp++;
	}
	return ret;
}

void CGAME::resetGame()
{
	cn.Right();
	speed = 3;	//Toc do dau game
	//Mang Xe
	if (axt == nullptr && axh == nullptr && akl == nullptr && ac == nullptr)
	{
		int truck = rand() % (MAX_CAR);
		axt = new  CTRUCK[truck];
		int car = rand() % (MAX_CAR - truck);
		axh = new CCAR[car];
		int dino = rand() % (MAX_CAR - truck - car);
		akl = new CDINOSAUR[dino];
		int bird = rand() % (MAX_CAR - truck - car - dino);
		ac = new CBIRD[bird];

		//for (int i = 0; i < MAX_CAR; i++)
		//{
		//	int temp = (rand() % (WIDTH_CONSOLE - MAX_CAR_LENGTH)) + 1;
		//	for (int j = 0; j < MAX_CAR_LENGTH; j++)
		//	{
		//		axt[i].Move(temp + j, 1 + i);
		//	}
		//}
		for (int i = 0; i < truck; i++)
		{
			for (int j = 0; j < MAX_CAR_LENGTH; j++)
			{
				tsleep(speed);
				axt[i].Move(1 + j, 1 + i);
			}
		}

	}
	//currpos[0] = NULL; currpos[1] = NULL;
	system("cls");
	//drawBoard(0, 0, WIDTH_CONSOLE, HEIGH_CONSOLE);
}

void CGAME::exitGame(HANDLE t)
{
	TerminateThread(t, 0);
	~CGAME();
	exit(1);
}

void CGAME::startGame()
{
	resetGame();
	cn.changeState(true);
}

void tsleep(int x)
{

	time_t  ttime;
	long v = time(&ttime);
	while (true) {
		if (time(&ttime) - v == x) {  //check with the diff
			v = time(&ttime);  // update v to the current time
			break;  //once the check is true then break
		}
	}

}
