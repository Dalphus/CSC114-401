#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>

using namespace std;

int SIZE = 3;
int *rings = NULL;

void printRing(int x) {
	for (int i = 0; i < SIZE - x; i++) cout << ' ';
	if (x)
		for (int i = 0; i < x * 2 + 1; i++) cout << '-';
	else cout << '|';
	for (int i = 0; i < SIZE - x; i++) cout << ' ';
}

void printTowers(int step) {
	system("CLS");
	cout << "Step " << step + 1 << " of " << pow(2,SIZE)-1 << endl;
	for (int i = 0; i < SIZE * 3 - 3; i++) cout << '*';
	cout << "Tower of Hanoi";
	for (int i = 0; i < SIZE * 3 - 3; i++) cout << '*';
	cout << endl << endl;

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
				printRing(k+1);
			}
			else printRing(0);
			cout << "  ";
		}
		cout << endl;
	}
}

int main() {
	cout << "Number of rings: ";
    while (!(cin >> SIZE) || cin.peek() != '\n' || SIZE <= 0) {
        cin.clear(); cin.ignore(256, '\n');
        cout << "Must be a positive integer: ";
    }
	rings = new int[SIZE];
	for (int i = 0; i < SIZE; i++) rings[i] = 0;

    printTowers(-1);

	int aux = 0;
    SIZE % 2 ? aux = 1 : aux = 2;

	for (int i = 0; i < pow(2, SIZE) - 1; i++) {
        _getch(); _getch();

        int num1 = SIZE, num2 = SIZE;
        for (int j = SIZE-1; j >= 0; j--) {
            if (rings[j] == (aux + 1) % 3) num1 = j;
            if (rings[j] == (aux + 5) % 3) num2 = j;
        }
        if (num1 < num2) rings[num1] = (aux + 5) % 3;
        else rings[num2] = (aux + 1) % 3;

        printTowers(i);

        SIZE % 2 ? aux++ : aux += 5;
        aux %= 3;
	}

    cout << "Ta Da!";
	_getch();
	return 0;
}