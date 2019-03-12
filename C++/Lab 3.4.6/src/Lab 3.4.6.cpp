#include <iostream>

#include <cmath>

using namespace std;

bool isPrime(int num)
{
	bool tisPrime = true;

	if (num >= 2)
	{
		int uLim = int(sqrt(num));
		for(int i = 2; i <= uLim; i++)
		{
			if(isPrime(i))
			{
				if(num % i == 0)
				{
					tisPrime = false;
				}
			}
		}
	}
	else
	{
		tisPrime = false;
	}

	return tisPrime;
}
int main(void)
{
	for(int i = 0; i <= 21; i++)

		if(isPrime(i))

			cout << i << " ";

	cout << endl;

	return 0;
}
