#include <iostream>
using namespace std;

int main()
{
	long long a, b, c=1, d=1;
	cout << "Input a number" << endl;
	cin >> a;

	if (a == 1)
	{
		 cout << c << endl;
	}
	else if (a == 2)
	{
		cout << c << endl;
	}
	else if (a > 2)
	{
		for  ( b = 3; b <= a; b++)
		{
			if (b % 2 == 0)
			{
				c = c + d;
			}
			else
			{
				d = c + d;
			}
		}
		if (a % 2 == 0)
			cout << c << endl;
		else
			cout << d << endl;
	}
	return 0;
}
