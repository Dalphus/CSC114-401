/* CSC114-401
Matthew Gilliam
Program 1-1*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	double hours, rate, pay;

	cout << "How many hours do you work? ";
	cin >> hours;

	cout << "How much do you get paid per hour? ";
	cin >> rate;

	pay = hours * rate;
	cout << "You have earned $" << pay << endl;

	_getch();
	return 0;
}