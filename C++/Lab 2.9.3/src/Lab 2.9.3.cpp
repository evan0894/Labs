#include <iostream>
using namespace std;
int main()
{
	int vector[7] = {1, 7, 3, 8, 3, 7, 1};
	bool ispalindrome = true;
	int li = 0;
	int hi = 6;
	int l = vector[li];
	int h = vector[hi];

	for(int i = 0; i < 3; i++)
	{
		if( l != h)
		{
			ispalindrome = false;
			break;
		}
		li = li + 1;
		hi = hi - 1;
		l = vector[ li ];
		h = vector[ hi ];
	}
	if(ispalindrome)
	{
		cout << "It is a palindrome.";
	}
	else
	{
		cout << "It is not a palindrome.";
	}
	cout << endl;
	return 0;
}
