/*CSC114-401
Matthew Gilliam
Homework 4*/

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main() {
	double budget, expenses = 0, expense_input = 0;

	//budget input validation
	cout << "Enter budget: $";
	while (!(cin >> budget) || budget < 0) {
		cout << "Must have a positive budget: $";
		cin.clear();
		cin.ignore(256, '\n');
	}
	cout << endl;

	//expense calculation loop
	while (expense_input >= 0) {

		//expense input validation
		cout << "Enter your expense (0 to exit): $";
		while (!(cin >> expense_input) || cin.get() != '\n') {
			cout << "Invlaid expense, please enter a positve expense (0 to exit): $";
			cin.clear();
			cin.ignore(256, '\n');
		}

		//don't add expense if sentinal value is given
		if (expense_input >= 0)
			expenses += expense_input;
	}
	cout << endl;

	//display budget and expenses
	cout << setprecision(2) << fixed;
	cout << "Your budget is $" << budget << ". Your expenses are $" << expenses << endl;
	cout << "You are $" << abs(expenses - budget);
	if (expenses - budget >= 0) cout << " over budget.";
	else cout << " under budget.";

	_getch();
	return 0;
}