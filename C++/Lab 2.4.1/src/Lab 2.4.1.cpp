#include <iostream>
using namespace std;

int main()
{
	unsigned long x;
	unsigned long n = 1;
	int count = 0;

	cout << "Enter a value: " << endl;
	cin >> x;

	for(int i = 0; i < 32; i++)
	{
		if ((x & n) != 0)
		{
			count ++;
		}
		n = n << 1;
	}
	cout << count;
	return 0;
}
