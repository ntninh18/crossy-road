#include <stdio.h>
#include <conio.h>
#include "Console.h"


int inputKey()
{
	if (_kbhit())
	{
		int key = _getch();

		if (key == 224)	// special key
		{
			key = _getch();
			return key + 1000;
		}

		return key;
	}
	else
	{
		return key_none;
	}

	return key_none;
}


//-------------------------Screen-------------------------
void clrscr()
{
	CONSOLE_SCREEN_BUFFER_INFO	csbiInfo;
	HANDLE	hConsoleOut;
	COORD	Home = { 0,0 };
	DWORD	dummy;

	hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hConsoleOut, &csbiInfo);

	FillConsoleOutputCharacter(hConsoleOut, ' ', csbiInfo.dwSize.X * csbiInfo.dwSize.Y, Home, &dummy);
	csbiInfo.dwCursorPosition.X = 0;
	csbiInfo.dwCursorPosition.Y = 0;
	SetConsoleCursorPosition(hConsoleOut, csbiInfo.dwCursorPosition);
}


//screen: goto [x,y]
void gotoXY(int column, int line)
{
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


//screen: get [x]
int whereX()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
		return csbi.dwCursorPosition.X;
	return -1;
}


//screen: get [y]
int whereY()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
		return csbi.dwCursorPosition.Y;
	return -1;
}


void TextColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void showLoginMenu()		//co sua toa do
{
	Point staffPosition = { 70,24 };
	char staffText[] = "STAFF";

	Point studentPosition = { 70,27 };
	char studentText[] = "STUDENT";

	Point lecturePosition = { 70,30 };
	char lectureText[] = "LECTURE";

	Point exitPosition = { 45,21 };
	char exitText[] = "EXIT";

	DrawFrame(staffPosition, 15, 1, staffText);
	DrawFrame(studentPosition, 15, 1, studentText);
	DrawFrame(lecturePosition, 15, 1, lectureText);
	DrawFrame(exitPosition, 15, 1, exitText);
}

void clearScn()
{
	HANDLE hOut;
	COORD Position;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}

void DrawFrame(Point positionToDraw, int length, int height, char text[])
{
	gotoXY(positionToDraw.x - height, positionToDraw.y - height);

	cout << char(218);

	for (int i = 0; i < length; ++i)
		cout << char(196);
	cout << char(191);

	for (int i = -height + 1; i <= height - 1; ++i) {
		gotoXY(positionToDraw.x - height, positionToDraw.y + i);
		cout << char(179);
	}

	gotoXY(positionToDraw.x - height, positionToDraw.y + height);
	cout << char(192);

	for (int i = 0; i < length; ++i)
		cout << char(196);
	cout << char(217);

	for (int i = -height + 1; i <= height - 1; ++i) {
		gotoXY(positionToDraw.x + length + 1 - height, positionToDraw.y + i);
		cout << char(179);
	}

	int alignTextToCenter = (length - strlen(text)) /2-11;		
	gotoXY(positionToDraw.x + alignTextToCenter, positionToDraw.y);
	cout << text;
}

void FixConsoleWindow()
{
	HWND consoleWindow = GetConsoleWindow();
	LONG style = GetWindowLong(consoleWindow, GWL_STYLE);
	style = style & ~(WS_MAXIMIZEBOX) & ~(WS_THICKFRAME);
	SetWindowLong(consoleWindow, GWL_STYLE, style);
}

void TargetButton(int whichButton, bool on)
{
	if (on) {
		TextColor(9);
	}
	else {
		TextColor(ColorCode_White);
	}
	Point position;
	char text[] = "";
	switch (whichButton) {
	case 0:
		position = { 45, 12 };
		DrawFrame(position, 10, 1, text);
		break;
	case 1:
		position = { 45, 15 };
		DrawFrame(position, 10, 1, text);
		break;
	case 2:
		position = { 45, 18 };
		DrawFrame(position, 10, 1, text);
		break;
	case 3:
		position = { 45, 21 };
		DrawFrame(position, 10, 1, text);
		break;
	}
	TextColor(15);
}
