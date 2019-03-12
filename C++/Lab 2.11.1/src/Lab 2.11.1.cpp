#include <iostream>
using namespace std;

int main()
{
	struct time_of_day{
		int hours, minutes ;
	}start_time, endtime, runtime;

	cout << "Enter The Starting Hours: " << endl;
	cin >> start_time.hours;
	cout << "Enter the Starting Minutes: " << endl;
	cin >> start_time.minutes;
	cout << "Enter the length of the event in minutes: " << endl;
	cin >> runtime.minutes;

		endtime.minutes = start_time.minutes + runtime.minutes;
		endtime.hours = start_time.hours;

		while(endtime.minutes >= 60)
		{
			endtime.minutes = endtime.minutes - 60;
			endtime.hours = endtime.hours + 1;
		}
		while(endtime.hours >= 24)
		{
			endtime.hours = endtime.hours - 24;
		}
		cout << "The ending time will be" << endl;
			cout <<	"|" << endtime.hours << ":" << endtime.minutes << "|" << endl;
}
