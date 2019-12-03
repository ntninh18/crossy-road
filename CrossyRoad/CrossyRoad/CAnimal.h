#ifndef CANIMAL_H
#define CANIMAL_H
#include "Library.h"

class CANIMAL {
	int mX, mY;
public:
	virtual void Move(int, int) = 0;
	//virtual void Tell();
};
class CDINOSAUR : public CANIMAL {
public:
	void Move(int, int);
};
class CBIRD : public CANIMAL {
private: 
	bool Direction;
public:
	void Move(int, int);
	void Draw(int, int, bool);
	void deleteBird(int, int);
};
#endif
