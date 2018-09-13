/*CSC114-401
Matthew Gilliam
Lab 5*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int size = 0;
	cout << "Input a number no greater than 15: ";
	cin >> size;
	if (cin.fail() || size < 1 || size > 15) {
		cout << "invlaid input";
		_getch();
		return 0;
	}
	
	for (int i = 0; i < size*size; i++) {
		if (i%size == 0) cout << endl;
		cout << "X";
	}

	_getch();
	return 0;
}