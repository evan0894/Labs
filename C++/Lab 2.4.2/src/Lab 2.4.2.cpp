#include <iostream>
using namespace std;

int main()
{
	unsigned short int val, mask1 = 1, mask2 = 1, maskc1, maskc2;
	bool ispalindrome = true;
	cout << "Value = ";
	cin >> val;

	mask2 = mask2 << 15;

	for(int i = 0; i < 8; i++)
	{
			maskc1 = mask1 & val;
			maskc2 = mask2 & val;
			if ((maskc1 == 0 && maskc2 != 0) || (maskc1 != 0 && maskc2 == 0))
			{
				ispalindrome = false;
				break;
			}
			mask1 = mask1 << 1;
			mask2 = mask2 >> 1;
	}
	if(ispalindrome == true)
	{
		cout << val << " Is a bitwise palindrome" << endl;
	}
	else
	{
		cout << val << " Is not a bitwise palindrome" << endl;
	}
	return 0;
}
