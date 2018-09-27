/*CSC114-401
Matthew Gilliam
Multiplication Tables*/

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>

using namespace std;

//formats product of two numbers
void entry(int x, int y) {
	cout << setw(2) << x << " * "
		<< setw(2) << y << " = "
		<< setw(3) << x * y << "   ";
}

//size of multiplication table
const int MIN_PRODUCT = 12;

int main() {
	int collumns = 0, rows;

	while (true) {
		//input validation
		cout << "Enter collumns: ";
		while (!(cin >> collumns) || cin.get() != '\n' || collumns > MIN_PRODUCT) {
			cout << "Invlaid input, must be an integer less than " << MIN_PRODUCT << endl
				<< "Enter collumns: ";
			cin.clear();
			cin.ignore(256, '\n');
		}

		//sentinal value
		if (collumns <= 0) break;

		//row calculation
		rows = ceil(1.0 * MIN_PRODUCT / collumns);

		//printing multiplication table
		for (int i = 1; i <= rows; i++) {
			for (int k = 1; k <= MIN_PRODUCT; k++) {
				for (int j = 0; j < collumns; j++) {
					int x = i + j * rows;
					entry(x, k);
				}
				cout << endl;
			}
			cout << endl;
		}
		cout << "Enter 0 to exit" << endl;
	}
	return 0;
}