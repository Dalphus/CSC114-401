/*CSC114-401
Matthew Gilliam
Lab 10*/

#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

struct MovieData {
	string title;
	string director;
	int year_released;
	int run_time;
};

MovieData movieInfo(string title, string director, int year, int time) {
	MovieData x;
	x.title = title;
	x.director = director;
	x.year_released = year;
	x.run_time = time;

	return x;
}

void formatMovie(MovieData movie) {
	cout << left;
	cout << setw(15) << "Title:" << movie.title << endl
		<< setw(15) << "Director:" << movie.director << endl
		<< setw(15) << "Year Released:" << movie.year_released << endl
		<< setw(15) << "Runtime(min):" << movie.run_time << endl;
}

int main() {
	MovieData movie1, movie2;
	movie1 = movieInfo("Jurassic Park", "Steven Spielberg", 1990, 2*60+7);
	movie2 = movieInfo("Raiders of the Lost Ark", "Steven Spielberg", 1981, 60+55);
	
	formatMovie(movie1);
	cout << endl;
	formatMovie(movie2);

	_getch();
	return 0;
}