#include <iostream>
using namespace std;

struct Date
{
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
int daysBetween(Date d1, Date d2)
{
int retval = 0;

if(d2.year < d1.year)
{
	return -1;
}

if(d2.year == d1.year && d2.month == d1.month && d2.day < d1.day)
{
	return -1;
}

int dayNumber1 = dayOfYear(d1);
int dayNumber2 = dayOfYear(d2);

if(dayNumber1 == 0 or dayNumber2 == 0)
{
	return -1;
}
for(int i = d1.year; i < d2.year; i++)
{
	retval += 365;
	if(isLeap(i)) retval++;
}
retval += dayNumber2 - dayNumber1;

return retval;
}
int main(void)
{
Date since,till;

cout << "Enter first date (y m d): ";

cin >> since.year >> since.month >> since.day;

cout << "Enter second date (y m d): ";

cin >> till.year >> till.month >> till.day;

cout << daysBetween(since,till) << endl;

return 0;
}
