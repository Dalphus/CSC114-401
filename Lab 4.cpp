/*CSC114-401
Matthew Gilliam
Lab 4*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int n = 0, sum = 0;

	//loop for input
	cout << "Input a number between 1 and 50: ";
	while (!(cin >> n) || cin.get() != '\n' || n < 1 || n > 50) {
		cout << "Invalid input, try again: ";
		cin.clear();
		cin.ignore(256, '\n');
	}
	cout << endl;

	//display sum of all numbers 1...n
	cout << "The sum of all numbers between 1 and " << n << " is " << (n*n+n)/2 << endl;

	_getch();
	return 0;
}