/*CSC114-401
Matthew Gilliam
Exam 1 code portion*/
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>

using namespace std;

//Method to add characters after a string to reach a specified length
//Used to make the menu look nice
string addChars(string message, char c, int targetLength) {
	if (message.length() < targetLength)
		for (int i = message.length(); i < targetLength; i++)
			message += c;

	return message;
}

//Minimum gap between menu item and price
const int MENUSIZE = 25;

int main() {
	//Variable declaration and intialization
	int INT_soda = 0, INT_cPizza = 0, INT_sPizza = 0;
	float total = 0.0, FLOT_tip = 0.0, sPizzaPrice = 0;
	char CHAR_sPizza = '\0', CHAR_tip = '\0';

	//Printing and formating menu
	cout << left << fixed << setprecision(2);
	cout << setw(MENUSIZE) << "Item"                 << "Price" << endl
	     << addChars("Soda", '.', MENUSIZE)          << "$1.75" << endl
		 << addChars("Cheese Pizza", '.', MENUSIZE)  << "$10"   << endl
		 << "Specialty Pizzas:" << endl
		 << addChars("Supreme", '.', MENUSIZE)       << "$20"   << endl
		 << addChars("Veggie Lovers", '.', MENUSIZE) << "$18"   << endl
		 << addChars("Meat Lovers", '.', MENUSIZE)   << "$18"   << endl;
	cout << endl;

	//Input for sodas, cheese pizza, and specialty pizza
	cout << "Number of Sodas: "; cin >> INT_soda;
	cout << "Number of Cheese Pizzas: "; cin >> INT_cPizza;
	cout << "Number of Specialty Pizzas: "; cin >> INT_sPizza;
	cout << endl;
	//Adding soda and cheese pizza price to total
	total += 1.75 * INT_soda;
	total += 10.0 * INT_cPizza;

	//Check if any specialt pizzas were ordered
	if (INT_sPizza > 0) {
		cout << "What type of specialty pizza would you like?" << endl
			<< "(S) Supreme" << endl
			<< "(V) Veggie Lovers" << endl
			<< "(M) Meat Lovers" << endl;
		cin >> CHAR_sPizza;
		//Switch statement for each specialty pizza
		switch (CHAR_sPizza) {
		case 'S':
			total += 20.0 * INT_sPizza;
			sPizzaPrice = 20.0;
			break;
		case 'V':
			total += 18.0 * INT_sPizza;
			sPizzaPrice = 18.0;
			break;
		case 'M':
			total += 18.0 * INT_sPizza;
			sPizzaPrice = 18.0;
			break;
		default:
			cout << "Not a valid choice";
			return 0;
		}
		cout << endl;
	}

	//Asking for tip
	cout << "Would you like to leave a tip? (Y/N)" << endl;
	cin >> CHAR_tip;
	if (CHAR_tip == 'Y' || CHAR_tip == 'y') {
		cout << "Tip percentage: %";
		cin >> FLOT_tip;
	}
	cout << endl;
	//Tip calculations
	FLOT_tip *= 0.01; FLOT_tip += 1;

	//Printing and formatting recipt
	cout << "Soda x " << setw(MENUSIZE - 7) << INT_soda << INT_soda*1.75 << endl;
	cout << "Cheese Pizza x " << setw(MENUSIZE - 15) << INT_cPizza << INT_cPizza*10.0 << endl;
	cout << "Specialty Pizza x " << setw(MENUSIZE - 18) << INT_sPizza << INT_sPizza*sPizzaPrice << endl;
	cout << setw(MENUSIZE) << "Subtotal:" << total << endl;
	cout << setw(MENUSIZE) << "Total (with tip):" << total*FLOT_tip;

	_getch();
	return 0;
}