/*CSC114-401
Matthew Gilliam
Lab 9*/

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main() {
	int valid_ids[18] = {
		5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
		8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
		1005231, 6545231, 3852085, 7576651, 7881200, 4581002
	};
	int input = 0;
	bool input_recognized = false;

	cout << "Enter your accout number: ";
	cin >> input;

	for each(int i in valid_ids) {
		if (input == i) {
			input_recognized = true;
			break;
		}
	}
	
	if (input_recognized)
		cout << "valid number" << endl;
	else
		cout << "invalid number" << endl;
	
	_getch();
	return 0;
}