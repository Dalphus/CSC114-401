#include <iostream>
#include <conio.h>
#include <cmath>
#include <Windows.h>

using namespace std;

int numRings;
int *rings = NULL;

void setCursorPosition(int x, int y) { 
    static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    cout.flush();
    COORD coord = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(hOut, coord);
}

void printRing(int x) {
	for (int i = 0; i < numRings - x; i++) cout << ' ';
	if (x)
		for (int i = 0; i < x * 2 + 1; i++) cout << '-';
	else cout << '|';
	for (int i = 0; i < numRings - x; i++) cout << ' ';
}

void printTowers(int step) {
    setCursorPosition(0, 0);
    cout << "Step " << step + 1 << " of " << int(pow(2,numRings))-1 << endl;
	for (int i = 0; i < numRings * 3 - 3; i++) cout << '*';
	cout << "Tower of Hanoi";
	for (int i = 0; i < numRings * 3 - 3; i++) cout << '*';
	cout << endl << endl;

	int t[] = { 0,0,0 };
	for (int i = 0; i < numRings; i++)
		t[rings[i]]++;
    
	for (int i = numRings-1; i >= 0; i--) {
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
    while (!(cin >> numRings) || cin.peek() != '\n' || numRings <= 0) {
        cin.clear(); cin.ignore(256, '\n');
        cout << "Must be a positive integer: ";
    }
	rings = new int[numRings];
	for (int i = 0; i < numRings; i++) rings[i] = 0;

    system("CLS");
    printTowers(-1);

	int aux;
    numRings % 2 ? aux = 1 : aux = 2;

	for (int i = 0; i < pow(2, numRings) - 1; i++) {
        _getch(); _getch();

        int j = 0;
        for (j = 0; rings[j] == aux; j++) ;
        rings[j] = 3 - rings[j] - aux;
        
        printTowers(i);

        numRings % 2 ? aux++ : aux += 5;
        aux %= 3;
	}

    cout << "Ta Da!";
	_getch();
	return 0;
}