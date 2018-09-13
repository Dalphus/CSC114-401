/*CSC114-401
Matthew Gilliam
Lab 4*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int total, sum = 0;
	cout << "Input a positive integer: ";
	cin >> total;
	if (cin.fail() || total < 1) {
		cout << "invlaid input";
		_getch();
		return 0;
	}

	for (int i = 0; i < total; i++) sum += i;
	cout << "The sum of all numbers between 1 and " << total << " is " << sum << endl;

	_getch();
	return 0;
}