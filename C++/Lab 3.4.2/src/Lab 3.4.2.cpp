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
int monthLength(int year, int month)
{
int retval = 0;

switch(month)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
	retval = 31;
	break;
case 2:
	if(isLeap(year)) // FEBRUARY
	{
		retval = 29;
	}
	else
	{
		retval = 28;
	}
	break;
case 4:
case 6:
case 9:
case 11:
	retval = 30;
	break;
}



return retval;
}
int main(void)
{

	for(int yr = 2000; yr < 2002; yr++)
	{

		for(int mo = 1; mo <= 12; mo++)

			cout << monthLength(yr,mo) << " ";

		cout << endl;
	}
	return 0;
}
