#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

const int SIZE = 5;

void printRing(int x) {
	for (int i = 0; i < SIZE - x - 1; i++) cout << ' ';
	for (int i = 0; i < x * 2 + 1; i++) cout << '-';
	for (int i = 0; i < SIZE - x - 1; i++) cout << ' ';
}

void printRod() {
	for (int i = 0; i < SIZE - 1; i++) cout << ' ';
	cout << '|';
	for (int i = 0; i < SIZE - 1; i++) cout << ' ';
}

void printTowers(int rings[]) {
	int t[] = { 0,0,0 };
	for (int i = 0; i < SIZE; i++)
		t[rings[i]]++;

	for (int i = SIZE-1; i >= 0; i--) {
		for (int j = 0; j < 3; j++) {
			int k = 0, l = t[j]-i-1;
			if (l >= 0) {
				while (rings[k] != j || l) {
					if (rings[k] == j) l--;
					k++;
				}
				printRing(k);
			}
			else printRod();
			cout << "  ";
		}
		cout << endl;
	}
}

int main() {
	int rings[SIZE] = { 0 };

	printTowers(rings);

	_getch();
	return 0;
}