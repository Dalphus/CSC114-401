#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int a = 9, *x = &a, b;
	b = *x;

	cout << x << endl;
	cout << &b << endl;

	_getch();
	return 0;
}