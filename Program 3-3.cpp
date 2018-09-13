/*CSC114-410
Matthew Gilliam
Program 3-3*/

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main() {
	int const MAX = 5;
	double testScores[MAX];
	
	for (int i = 0; i < 5; i++) {
		cout << "Input test score " << i + 1 << ": ";
		cin >> testScores[i];
	}
	cout << endl;

	double average = 0;
	for each(double i in testScores) {
		average += i;
	}
	average /= MAX;

	cout << fixed << setprecision(1) << "Test average is " << average << endl;

	_getch();
	return 0;
}