#include <iostream>

using namespace std;

struct Date {

	int year;

	int month;

	int day;

};
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
int dayOfYear(Date date)
{
	int numDays = 0;
	if(date.month < 1 || date.month > 12)
	{
		return 0;
	}
	if(date.day < 1 || date.day > monthLength(date.year,date.month))
	{
		return 0;
	}
	for(int i = 1; i < date.month; i++)
	{
		numDays += monthLength(date.year, i);
	}
	numDays += date.day;
	return numDays;
}
int main(void)
{
	Date d;
	cout << "Enter year month day: ";
	cin >> d.year >> d.month >> d.day;
	cout << dayOfYear(d) << endl;
	return 0;
}
