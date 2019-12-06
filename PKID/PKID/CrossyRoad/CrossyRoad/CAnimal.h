#ifndef CANIMAL_H
#define CANIMAL_H
#include "Library.h"

class CANIMAL {
protected:
	int mX, mY;
public:
	virtual void Move(int, int);
	virtual void draw();
	virtual void Tell();
	friend class CPEOPLE;
	friend class CGAME;
	CANIMAL();
	CANIMAL(int x, int y);
	void eraseAn();
};
class CDINOSAUR : public CANIMAL {
public:
	void Move(int, int);
	void draw();
	void Tell();
	CDINOSAUR();
	CDINOSAUR(int x, int y);
};
class CBIRD : public CANIMAL {
public:
	void Move(int, int);
	void Tell();
	void draw();
	CBIRD();
	CBIRD(int x, int y);
};
#endif
