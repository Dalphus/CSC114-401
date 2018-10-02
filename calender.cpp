#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>

using namespace std;

int dayOfWeek(int year, int month) {
	f = 1 + floor((13 * month - 1) / 5) + D + floor(D / 4) + floor(C / 4) - 2 * C.
}

int main() {
	cout << left;
	string months[] = {
		"January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December"
	};
	int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

	int month = 1;
	int year = 2000;
	int weekday = 1;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		days[1]++;

	cout << months[month] + " " << year << endl
		<< "S   M   T   W   T   F   S" << endl;
	
	for (int i = 0; i < weekday; i++)
		cout << "    ";

	for (int i = 1; i <= days[month]; i++) {
		cout << setw(4) << i;
		if ((i + weekday) % 7 == 0)
			cout << endl;
	}
	_getch();
	return 0;
}