#include "File.h"

bool File::saveFile(vector<CPEOPLE> people) {
	ofstream fout;
	fout.open("save.txt", ios::binary);
	if (!fout.is_open())
		return false;
	int n = people.size();
	fout << n;
	for (int i = 0; i < n; i++) {

	}
	fout.close();
	return true;
}
bool File::readFile(vector<CPEOPLE> &people) {
	ifstream fin;
	fin.open("save.txt", ios::binary);
	if (!fin.is_open())
		return false;
	int n = 0;
	fin >> n;
	for (int i = 0; i < n; i++) {

	}
	fin.close();
	return true;
}