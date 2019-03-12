#include <iostream>
using namespace std;

bool isLeap(int year)
{
	bool returnvalue = false;

	if (year >= 1582)
	{
		if (year % 4 != 0)
		{
			returnvalue = false;
		}
		else if (year % 100 != 0)
		{
			returnvalue = true;
		}
		else if (year % 400 != 0)
		{
			returnvalue = false;
		}
		else
		{
			returnvalue = true;
		}
	}
	else
	{
		cout << "INVALID ";
	}

	return returnvalue;
}
int main()
{
	for(int yr = 1995; yr < 2017; yr++)
	{
		cout << yr << " -> " << isLeap(yr) << endl;
	}
	return 0;
}
