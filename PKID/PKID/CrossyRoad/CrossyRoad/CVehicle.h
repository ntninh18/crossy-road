#pragma once
#ifndef CVEHICLE_H
#define CVEHICLE_H
#include "Library.h"

class CVEHICLE {
protected:
	int mX, mY;
public:
	virtual void Move(int, int);
	virtual void draw();
	friend class CPEOPLE;
	friend class CGAME;
	CVEHICLE();
	CVEHICLE(int x, int y);
	void earseVeh();
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
