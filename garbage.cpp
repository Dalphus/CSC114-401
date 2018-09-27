#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main() {
	int x;
	cout << "test: ";
	cin >> x;
	cout << x << endl;

	cin.clear();
	cin.ignore(256, '\n');

	cout << "test2: ";
	cin >> x;
	cout << x << endl;


	_getch();
	return 0;
}