#include "CGame.h"

CGAME::CGAME()
{
}

CGAME::~CGAME()
{
	delete[] axt, axh, akl, ac;
	axt = nullptr;
	axh = nullptr;
	akl = nullptr;
	ac = nullptr;
}

CPEOPLE CGAME::getPeople()
{
	return cn;
}

CVEHICLE * CGAME::getVehicle()
{
	int numberOfVehicle = sizeof(axt) + sizeof(axh);
	CVEHICLE * ret = new CVEHICLE[ numberOfVehicle];
	int count = 0;
	for (count; count < sizeof(axt); count++)
		ret[count] = axt[count];
	int countTemp = 0;
	for (count; count < numberOfVehicle; count++)
	{
		ret[count] = axh[countTemp];
		countTemp++;
	}
	return ret ;
}
