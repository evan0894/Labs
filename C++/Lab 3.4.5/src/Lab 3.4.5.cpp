#include <iostream>
#include <ctime>
using namespace std;

struct Date
{
int year;
int month;
int day;
};
Date today(void)
{
Date rd = { };

time_t t = time(NULL);

tm tl = *localtime(&t);

//Obtain year field of rd from the tm_year field of tl
//Use appropriate offset

rd.year = tl.tm_year + 1900;
rd.month = tl.tm_mon + 1;
rd.day = tl.tm_mday;

return rd;
}
int main(void)
{
Date t = today();

cout << t.year << "-" << t.month << "-" << t.day << endl;

return 0;
}
