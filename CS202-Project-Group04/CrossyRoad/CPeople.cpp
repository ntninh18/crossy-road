#include"Library.h"
#include "CPeople.h"

CPEOPLE::CPEOPLE()
{
}

void CPEOPLE::Up()
{
	mY -= 1;
	if (mY < 0)
		mY = 0;
}

void CPEOPLE::Left()
{
	mX -= 1;
	if (mX < 5)
		mX = 5;
}

void CPEOPLE::Right()
{
	mX += 1;
	/*if (mX > )
		mX = ;*/
}

void CPEOPLE::Down()
{
	mY += 1;
	//if (mY > )
		//mY = ;
}
