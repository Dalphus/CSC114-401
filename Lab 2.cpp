/*CSC114-410
Matthew Gilliam
Lab2*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	float maxGallons, maxMiles;

	cout << "How many gallons of gasoline can your car hold?" << endl;
	cin >> maxGallons;

	cout << "How many miles can you drive on a full tank of gas?" << endl;
	cin >> maxMiles;

	cout << endl << "Your gas milage is " << maxMiles / maxGallons << " miles per gallon" << endl;

	_getch();
	return 0;
}