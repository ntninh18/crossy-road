#include "CGraphics.h"

string space(int k)
{
	string ret = "";
	for (int i = 0; i < k; i++)
		ret += "  ";
	return ret;
}
string draw(int k) {
	string ret = "";
	for (int i = 0; i < k; i++) {
		ret += (char)219;
		ret += (char)219;
	}
	return ret;
}
void text() {

}
void Text(int x, int y) {
	gotoXY(x, y);     cout << space(1) << draw(5) << space(1) << draw(5) << space(3) << draw(5) << space(4) << draw(5) << space(4) << draw(5) << space(2) << draw(4) << space(3) << draw(3) << endl;
	gotoXY(x, y + 1); cout << draw(6) << space(1) << draw(5) << space(2) << draw(7) << space(2) << draw(6) << space(3) << draw(6) << space(3) << draw(3) << space(3) << draw(3) << endl;
	gotoXY(x, y + 2); cout << draw(3) << space(4) << draw(4) << space(2) << draw(3) << space(2) << draw(3) << space(1) << draw(3) << space(6) << draw(3) << space(7) << draw(3) << space(2) << draw(3) << endl;
	gotoXY(x, y + 3); cout << draw(2) << space(5) << draw(2) << space(4) << draw(3) << space(2) << draw(3) << space(1) << draw(5) << space(4) << draw(5) << space(6) << draw(3) << space(1) << draw(3) << endl;
	gotoXY(x, y + 4); cout << draw(2) << space(5) << draw(2) << space(4) << draw(3) << space(2) << draw(3) << space(2) << draw(6) << space(3) << draw(6) << space(4) << draw(3) << space(1) << draw(3) << endl;
	gotoXY(x, y + 5); cout << draw(2) << space(5) << draw(2) << space(4) << draw(3) << space(2) << draw(3) << space(4) << draw(5) << space(4) << draw(5) << space(4) << draw(5) << endl;
	gotoXY(x, y + 6); cout << draw(3) << space(4) << draw(2) << space(4) << draw(3) << space(2) << draw(3) << space(1) << draw(1) << space(4) << draw(3) << space(1) << draw(1) << space(4) << draw(3) << space(4) << draw(5) << endl;
	gotoXY(x, y + 7); cout << draw(6) << space(1) << draw(2) << space(5) << draw(7) << space(2) << draw(7) << space(2) << draw(7) << space(4) << draw(5) << endl;
	gotoXY(x, y + 8); cout << space(1) << draw(6) << space(1) << draw(2) << space(5) << draw(7) << space(2) << draw(7) << space(2) << draw(7) << space(4) << draw(5) << endl;
}