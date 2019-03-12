#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	unsigned long long n;
	unsigned long long p = 2;

	cout << "Enter a integer from 1 to 63: " << endl;
	cin >> n;
	if (n < 64 && n > 0)
	{
		for (unsigned long long g = 1; g < n; g++)
		{
			p = p * 2;
		}
	}
	else
	{
		cout << "Error, number was not in designated range." << endl;
	}
	cout << p;
	return 0;
}
