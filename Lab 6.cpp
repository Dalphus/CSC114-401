/*CSC114-401
Matthew Gilliam
Lab 6*/

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main() {
	double cost, markup;
	cout << "Items wholesale cost: $";
	cin >> cost;
	cout << "Markup perctentage: ";
	cin >> markup;

	cout << "Retail cost: $" << fixed << setprecision(2) << cost * ((markup+100) / 100) << endl;

	_getch();
	return 0;
}