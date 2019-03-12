#include <iostream>
using namespace std;

int main()
{
	struct time_of_day{
		int hours, minutes;
	}start_time, endtime;

	cout << "Enter The Starting Hours: " << endl;
	cin >> start_time.hours;
	cout << "Enter The Starting Minutes: " << endl;
	cin >> start_time.minutes;
	cout << "Enter the Ending Hours: " << endl;
	cin >> endtime.hours;
	cout << "Enter The Ending Minutes: " << endl;
	cin >> endtime.minutes;

	endtime.hours = endtime.hours - start_time.hours;
	endtime.minutes = endtime.minutes - start_time.minutes;

	while(endtime.hours >= 24)
	{
		endtime.hours = endtime.hours - 24;
	}

	while(endtime.minutes < 0)
	{
		endtime.minutes = endtime.minutes + 60;
		endtime.hours = endtime.hours - 1;
	}
	cout << "The Duration of the Event is: " << endtime.hours << ":" << endtime.minutes << endl;
	return 0;
}
