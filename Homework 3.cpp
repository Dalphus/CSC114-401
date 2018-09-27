/*CSC114-401
Matthew Gilliam
Homework 3*/

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main() {
	//arrays for storing input and calculations
	double rect[4], area[2];
	string terms[] = {"width","height"};

	//loop for user input
	for (int i = 0; i < 4; i++) {
		//prompt user for input
		cout << "Input "<< terms[(i%2)] << " of rectangle " << (i/2)+1 << ": ";
		
		cin >> rect[i];
		//input validation, if user input is not a number or negative, stop program
		if (cin.fail() || rect[i] < 0) {
			cout << "invalid input";
			_getch();
			return 0;
		}
	}
	cout << endl;

	//rectangle area calulation
	area[0] = rect[0] * rect[1];
	area[1] = rect[2] * rect[3];

	//display which rectangle is bigger
	if (area[0] > area[1])
		cout << "Rectangle 1 has a larger area of " << area[0];
	else if (area[1] > area[0])
		cout << "Rectangle 2 has a larger area of " << area[1];
	else
		cout << "Both rectangles have an area of " << area[0];
	cout << endl;

	_getch();
	return 0;
}