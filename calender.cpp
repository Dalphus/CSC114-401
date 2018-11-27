#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>

using namespace std;

int dayOfWeek(int year, int month) {
	month = (month + 10) % 12 + 1;
	year -= month > 10;
	int D = year % 100, C = (year - D) / 100;

	int f = 1 + ((13 * month - 1) / 5) + D + (D / 4) + (C / 4) - (2 * C);

	return ((f % 7) + 7) % 7;
}

int main() {
	cout << left;
	string months[] = {
		"January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December"
	};
	int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int month = 0;
	int year = 2018;
	int weekday = dayOfWeek(year,month);

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