#include <iostream>
using namespace std;

int main()
{
	unsigned long long a, b, c = 1;
	cout << "Input a positive value: " << endl;
	cin >> a;

	for(b = 1; b <= a; b++)
	{
		c = c * b;
	}
	cout << c << endl;

	return 0;
}
