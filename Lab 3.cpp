/*CSC114-401
MAtthew Gilliam
Lab 3*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int num;
	bool validInput = 0;

	cout << "Input an integer 1-10: ";
	cin >> num;
	if (cin.fail() || num < 1 || num > 10) {
		cout << "invalid input";
		_getch();
		return 0;
	}

	cout << "The Roman numeral for " << num << " is: ";

	switch (num) {
	case 1:
		cout << "I";
		break;
	case 2:
		cout << "II";
		break;
	case 3:
		cout << "III";
		break;
	case 4:
		cout << "IV";
		break;
	case 5:
		cout << "V";
		break;
	case 6:
		cout << "VI";
		break;
	case 7:
		cout << "VII";
		break;
	case 8:
		cout << "VIII";
		break;
	case 9:
		cout << "IX";
		break;
	case 10:
		cout << "X";
		break;
	default:
		cout << "Error";
	}
	
	_getch();
	return 0;
}