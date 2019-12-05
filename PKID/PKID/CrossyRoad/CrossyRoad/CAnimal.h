#ifndef CANIMAL_H
#define CANIMAL_H
#include "Library.h"

class CANIMAL {
protected:
	int mX, mY;
public:
	virtual void Move(int, int);
	virtual void Tell();
	friend class CPEOPLE;
};
class CDINOSAUR : public CANIMAL {
public:
	void Move(int, int);
	void Tell();

};
class CBIRD : public CANIMAL {
public:
	void Move(int, int);
	void Tell();

};
#endif
