#include <iostream>
#include <conio.h>
#include <iostream>
using namespace std;

int main() {
	int x = 6;
	while (x > 0) {
		cout << "Enter a number: "; cin >> x;
		int a = 2 * x - 1;
		for (int i = 0; i <= x; i++) {
			for (int j = 0; j < x - i; j++)
				cout << ' ';
			for (int j = x - i; j <= x + i; j++)
				cout << '*';
			cout << endl;
		}
		for (int i = x - 1; i >= 0; i--) {
			for (int j = 0; j < x - i; j++)
				cout << ' ';
			for (int j = x - i; j <= x + i; j++)
				cout << '*';
			cout << endl;
		}
	}

	_getch();
	return 0;
}