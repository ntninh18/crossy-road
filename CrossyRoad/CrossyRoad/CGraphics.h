#pragma once
#ifndef CGRAPHIC_H_
#define CGRAPHIC_H_
#include <iostream>
#include "Console.h"
#include "CGame.h"
using namespace std;
//int test();
string space(int k);
string block(int k);
void Text(int x, int y);
void Menu(CGAME& cg, int& K);
void Test();

#endif // !GRAPHIC_H_