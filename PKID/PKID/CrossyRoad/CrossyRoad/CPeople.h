#pragma once
#ifndef CPEOPLE_H
#define CPEOPLE_H
//#include"Library.h"
#include "CGame.h"
#include "CAnimal.h"
#include "CVehicle.h"
using namespace std;
const int screenSizePlay_W = 32;
const int screenSizePlay_L = 70;

class CPEOPLE {
	int mX, mY;
	bool mState; //Trạng thái sống chết
	int level;
public:
	CPEOPLE();
	void Up();
	void Left();
	void Right();
	void Down();
	bool isImpact(const vector<CVEHICLE*>& vihecle);
	bool isImpact(const vector<CANIMAL*>& animal);
	bool isFinish();
	void increaseLevel();
	void drawPeople(int, int);
	bool isDead();
	void move();
	void delPeople(int, int);
	void changeState(bool);
	void move(int m);
	friend class CGAME;
};

void drawScreen();
#endif
