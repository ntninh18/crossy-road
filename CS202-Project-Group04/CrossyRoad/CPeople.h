#pragma once
#ifndef CPEOPLE_H
#define CPEOPLE_H
//#include"Library.h"
#include "CVehicle.h"
#include "CAnimal.h" 
class CPEOPLE {
	int mX, mY;
	bool mState; //Trạng thái sống chết
public:
	CPEOPLE();
	void Up();
	void Left();
	void Right();
	void Down();
	bool isImpact(const CVEHICLE*&);
	bool isImpact(const CANIMAL*&);
	bool isFinish();
	bool isDead();
};
#endif
