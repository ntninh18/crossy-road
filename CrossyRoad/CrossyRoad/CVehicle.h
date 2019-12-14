#pragma once
#ifndef CVEHICLE_H
#define CVEHICLE_H
#include "Library.h"
const int car = 1;
const int truck = 0;
class CVEHICLE {
protected:
	int mX, mY;
	int type;
public:
	virtual void Move(int, int);
	virtual void draw();
	friend class CPEOPLE;
	friend class CGAME;
	CVEHICLE();
	CVEHICLE(int x, int y);
	void eraseVehicle();
	// ...
};
class CTRUCK : public CVEHICLE {
public:
	void Move(int, int);
	void draw();
	CTRUCK();
	CTRUCK(int x, int y);
};
class CCAR : public CVEHICLE {
public:
	void Move(int, int);
	void draw();
	CCAR();
	CCAR(int x, int y);
};
#endif