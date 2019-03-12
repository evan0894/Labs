

#include <iostream>
using namespace std;

int year, a, b, c, d, e;

int main() {
	cout << "Enter a Year:" << endl;
	cin >> year;
	if ( year > 0)
	{
		a = year % 19;
		b = year % 4;
		c = year % 7;
		a = a * 19;
		a = a + 24;
		d = a % 30;
		e = ((2*b) + (4 * c) + (6 * d) + 5) % 7;
		if ( (d + e) < 10)
		{
			cout << "March " << d + e + 22 << endl;
		}
		else
		{
			cout << "April "  << d + e - 9 << endl;
		}
	}
	return 0;
}

