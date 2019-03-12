#include <iostream>
using namespace std;

int main()
{
	unsigned int n, c, v = 1, i = 4;

	cout << "Enter an odd integer: " << endl;
	cin >> n;

	if(n > 2 && n % 2 != 0)
	{
		for(c = 2; c < n; c++)
		{
			v = v + i;
			i = i + 8;
			c = c + 1;
		}
		cout << v;
	}
	else
	{
		cout << "Error: invalid input." << endl;
	}
	return 0;
}
