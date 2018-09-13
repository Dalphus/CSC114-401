/*CSC114-401
Matthew Gilliam
Lab 7*/

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void coinToss() {
	switch (rand() % 2 + 1) {
	case(1):
		cout << "heads";
		break;
	case(2):
		cout << "tails";
		break;
	default:
		cout << "error";
		break;
	}
	cout << endl;
}

int main() {
	int coinTosses;
	cout << "Number of coins to flip: ";
	cin >> coinTosses;
	cout << endl;

	srand(time(0));
	for (int i = 0; i < coinTosses; i++) coinToss();

	_getch();
	return 0;
}