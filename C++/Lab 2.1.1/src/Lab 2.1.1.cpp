
#include <iostream>

using namespace std;

int main() {
	int year;

	cout << "Enter a year: ";
	cin >> year;

	if (year >= 1582)
	{
		if (year % 4 != 0)
		{
			cout << "Common year";
		}
		else if (year % 100 != 0)
		{
			cout << "Leap year";
		}
		else if (year % 400 != 0)
		{
			cout << "Common year";
		}
		else
		{
			cout << "Leap year";
		}
	}
	else
	{
		cout << "INVALID";
	}
	return 0;
}
