/*Some comment*/

#include <iostream> //cin and cout
#include <conio.h> //keyboard input
#include <string> //strings, duh
#include <iomanip> //input/output manipulation
#include <cmath> //sin, cos, sqrt, that stuff
#include <cstdlib> //rand(), srand(), other stuff

using namespace std;

const int MAX = 5;
int primeNums[MAX];

int main(void)
{
	bool f = false;
	bool t = true;
	int five = 5;

	cout << "t > f: " << (t > f) << endl;
	cout << "t < f: " << (t < f) << endl;
	cout << "t + f: " << (t + f) << endl;
	cout << "!!five: " << (!!five) << endl;

	_getch();
	return 0;
}