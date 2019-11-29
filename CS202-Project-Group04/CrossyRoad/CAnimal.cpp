//#include "Library.h"
#include "CAnimal.h"
void CDINAUSOR::Move(int x, int y)
{
	this->mX = x;
	this->mY = y;
}

void CDINAUSOR::Tell()
{
}


void CBIRD::Move(int x, int y)
{
	this->mX = x;
	this->mY = y;
}

void CBIRD::Tell()
{

}

void CANIMAL::Move(int, int)
{
	return;
}

void CANIMAL::Tell()
{
	return;
}
