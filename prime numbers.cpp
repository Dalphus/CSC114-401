#include <iostream>
#include <conio.h>

using namespace std;

const int MAX = 2000;
int primeNums[MAX];

int main() {
	primeNums[0] = 2;
	primeNums[1] = 3;

	int step = 1;
	while (step < MAX) {
		bool isPrime = 0;
		int num = primeNums[step];
		while (!isPrime) {
			num += 2;
			for (int prime = 0; prime <= step; prime++) {
				isPrime = 1;
				if (num % primeNums[prime] == 0) {
					isPrime = 0;
					break;
				}
			}
		}
		primeNums[++step] = num;
	}

	for each (int number in primeNums) {
		cout << number << endl;
	}

	_getch();
	return 0;
}