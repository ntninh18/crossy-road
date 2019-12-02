
#pragma once
#ifndef _FILE_H
#define _FILE_H_
#include "Library.h"
#include <fstream>

using namespace std;


class File {
public:
	bool saveFile(vector<CPEOPLE> people);
	bool readFile(vector<CPEOPLE> &people);
};
#endif 
