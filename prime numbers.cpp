#include <iostream>
#include <conio.h>

using namespace std;

const int MAX = 10;
int primeNums[MAX], index = 1;

int main() {
	primeNums[0] = 2;
	for (int i = 2; i <= MAX; i++) {
		bool isPrime = true;
		for (int j : primeNums) {
			if (i%j == 0) {
				isPrime = false;
				break;
			}
			if (isPrime) {
				primeNums[index] = i;
				index++;
			}
		}
	}

	for (int number : primeNums) {
		cout << number << endl;
	}

	_getch();
	return 0;
}