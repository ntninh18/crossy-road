#pragma once
#ifndef CVEHICLE_H
#define CVEHICLE_H
#include "Library.h"

class CVEHICLE {
protected:
	int mX, mY;
public:
	virtual void Move(int, int);
	friend class CPEOPLE;
	// ...
};
class CTRUCK : public CVEHICLE {
public:
	void Move(int, int);
};
class CCAR : public CVEHICLE {
public:
	void Move(int, int);
};
#endif
