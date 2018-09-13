/*CSC114-401
Matthew Gilliam
Lab 8*/

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main() {
	int numbers[10], *min = &numbers[0], *max = &numbers[0];
	string suffix[4] = { "st","nd","rd","th" };

	for (int i = 0; i < 10; i++) {
		cout << i+1 << suffix[i*(i<3)+3*(i>=3)] << " number: ";
		cin >> numbers[i];
		if (numbers[i] < *min) min = &numbers[i];
		if (numbers[i] > *max) max = &numbers[i];
	}
	cout << endl;

	cout << "Min value: " << *min << endl;
	cout << "Max value: " << *max << endl;

	_getch();
	return 0;
}