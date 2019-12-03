#include "Library.h"
#include "Console.h"
void CDINOSAUR::Move(int x, int y)
{

}
void CBIRD::Move(int, int)
{
}
void CBIRD::Draw(int x, int y, bool direction) {
	if (direction) {
		gotoXY(x - 3, y);
		cout << "(  o)";
		cout << '>';
		int temp = x % 3;
		if (temp % 3 == 0) {
			gotoXY(x - 1, y - 1);
			cout << "/\\ ";
		}
		else if (temp % 3 == 1) {
			gotoXY(x - 1, y);
			cout << "__";
		}
		else {
			gotoXY(x - 1, y + 1);
			cout << "\\/ ";
		}
	}
	else {
		gotoXY(x - 3, y);
		cout << '<';
		cout << "(o  )";
		int temp = x % 3;
		if (temp % 3 == 0) {
			gotoXY(x - 1, y - 1);
			cout << "/\\ ";
		}
		else if (temp % 3 == 1) {
			gotoXY(x - 1, y);
			cout << "__";
		}
		else {
			gotoXY(x - 1, y + 1);
			cout << "\\/ ";
		}
	}
}
void CBIRD::deleteBird(int x, int y) {
	gotoXY(x - 3, y - 1); cout << "       ";
	gotoXY(x - 5, y); cout << "               ";
	gotoXY(x - 3, y + 1); cout << "       ";
}
/*     .___
      /  o o  <( henlo fren! )
     /   vvv  
    /    r  r
   /       |
   (   \_   \_

*/