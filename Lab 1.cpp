/*CSC114-401
Matthew Gilliam
Lab 1*/

#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	string name = "John Smith";
	char grade = 'B';
	const float GPA = 3.0;
	int age = 19;

	cout << left;
	cout << setw(8) << "Name:" << name << endl
		<< setw(8) << "Grade:" << grade << endl
		<< setw(8) << "GPA:" << GPA << endl
		<< setw(8) << "Age:" << age << endl;
	_getch();
	
	return 0;
}
