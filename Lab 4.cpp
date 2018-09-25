/*CSC114-401
Matthew Gilliam
Lab 4*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int n, sum = 0;

	//loop for input
	while (true) {
		//prompt user for input
		cout << "Input a positive integer: ";
		cin >> n;

		//stop code if input is not an integer
		if (cin.fail()) {
			cout << "invlaid input";
			_getch();
			return 0;
		}

		//break out of loop if x > 0
		if (n > 0)
			break;
		else
			cout << "That is not a positive integer" << endl;
	}
	cout << endl;

	//display sum of all numbers 1...n
	cout << "The sum of all numbers between 1 and " << n << " is " << (n*n+n)/2 << endl;

	_getch();
	return 0;
}