#ifndef CVEHICLE_H
#define CVEHICLE_H
#include "Console.h"

class CVEHICLE {
	int mX, mY;
public:
	virtual void Move(int, int) = 0;
	//...
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
