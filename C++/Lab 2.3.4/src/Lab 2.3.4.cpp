
/*
 * Lab 2.3.4
 */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int n;
	double p = 2;

	cout << "Enter a value from 0 to 63: " << endl;
	cin >> n;

	if (n >= 0 && n < 64)
	{
		for(long g = 0; g <= n; g++)
		{
			p = p / 2;
		}
	}
	else
	{
		cout << "NO!  THAT'S NOT A VALID VALUE!" << endl;
	}
	cout << setprecision(20) << p;
	return 0;
}
