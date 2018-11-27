/*
 * CSC114-401
 * Matthew Gilliam
 * Homework 6
*/


#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

const string regions[] = { "North", "East", "South", "West", "Central" };

int getNumAccidents(string cityRegion) {
	cout << "How many accidents were in the " << cityRegion << " region last year? ";
	int accidents = 0;
	while (!(cin >> accidents) || cin.peek() != '\n' || accidents < 0) {
		cout << "\tNumber of accidents must be a positive integer." << endl
			 << "\tHow many accidents were in the " << cityRegion << " region? ";
		cin.clear(); cin.ignore(256, '\n');
	}

	return accidents;
}

void findLowest(int accidents[]) {
	int lowest = 0;
	for (int i = 1; i < 5; i++)
		if (accidents[i] < accidents[lowest])
			lowest = i;

	cout << "The " << regions[lowest] << " region has the lowest accident total of " << accidents[lowest] << endl;
}

int main() {
	int accidents[5];
	for (int i = 0; i < 5; i++)
		accidents[i] = getNumAccidents(regions[i]);
	cout << endl;

	findLowest(accidents);

	_getch();
}