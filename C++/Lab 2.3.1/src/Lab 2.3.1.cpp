

#include <iostream>
using namespace std;

int main() {
	int c0;
	int counter;
	counter = 0;
	cout << "Enter a number.  But don't make it a negative or a zero. The computer will get angry at you." << endl;
	cin >> c0;

	if ( c0 > 0 )

		while (c0 != 1)
		{
			if (c0 % 2 == 1)
			{
				 ( c0 = (c0 * 3) + 1);
				cout << c0 << endl;

			}
			else
			{
				  c0 = c0 / 2;
				  cout << c0 << endl;
			}
			counter++;
		}
	else
	{
		cout << ">:(" << endl;
	}
	cout << "Steps = " << counter << endl;
		return 0;
	}

