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
	// ...
};
class CTRUCK : public CVEHICLE {
public:
	void Move(int, int);
	void draw();
};
class CCAR : public CVEHICLE {
public:
	void Move(int, int);
	void draw();
};
#endif
