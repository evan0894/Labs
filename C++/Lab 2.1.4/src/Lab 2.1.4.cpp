
#include <iostream>

#include <iomanip>
using namespace std;

int main() {

	int year, month, day;
	cout << "Enter a year" << endl;
	cin >> year;
	cout << "Enter a month" << endl;
	cin >> month;
	cout << "Enter a day" << endl;
	cin >> day;

	month = month - 2;

	if ( month <= 0)
	{
		month += 12;

		year -= 1;

	}
	month *= 83;
	month /= 32;
	month = month + day;
	month = month + year;
	month = month + (year / 4);
	month = month - (year / 100);
	month = month + (year / 400);
	int remainder = month % 7;
	cout << remainder << endl;

	return 0;
}
