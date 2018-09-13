/*CSC114-401
Matthew Gilliam
Lab 6*/

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

double calculateRetail(double cost, double markup) {
	return cost * ((markup+100) / 100);
}

int main() {
	double cost, markup;
	cout << "Items wholesale cost: $";
	cin >> cost;
	cout << "Markup perctentage: ";
	cin >> markup;

	cout << "Retail cost: $" << fixed << setprecision(2) << calculateRetail(cost,markup) << endl;

	_getch();
	return 0;
}