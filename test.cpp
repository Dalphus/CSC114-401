/*Some comment*/

#include <iostream> //cin and cout
#include <conio.h> //keyboard input
#include <string> //strings, duh
#include <iomanip> //input/output manipulation
#include <cmath> //sin, cos, sqrt, that stuff
#include <cstdlib> //rand(), srand(), other stuff amybe

using namespace std;

const int MAX = 5;
int primeNums[MAX];

int main(void)
{
	primeNums[0] = 2;
	int step = 0;

	while (step < MAX) {

		int num = primeNums[step];

		bool isPrime = 0;
		while (!isPrime) {
			num++;
			cout << "prime " << num << endl;
			isPrime = 1;
			for (int prime = 0; prime <= step; 1) {
				cout << "test " << primeNums[prime] << endl;
				if (!num % primeNums[prime]) {
					isPrime = 0;
					break;
				}
			}
		}
		primeNums[step++] = num;
	}

	for each (int number in primeNums) {
		cout << number << endl;
	}

	_getch();
	return 0;
}