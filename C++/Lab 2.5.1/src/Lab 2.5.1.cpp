#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
	int m;
	double a, b;

	do
	{
		cout << "THIS IS A CALCULATOR" << endl << "0 - Cancel and Exit" << endl << "1 - Addition" << endl;
		cout << "2 - Subtraction" << endl << "3 - Multiplication" << endl << "4 - Division" << endl;
		cin >> m;

		switch(m)
		{
		case 0: cout << "Goodbye for now" << endl; break;
		case 1: cout << "Enter two values you want to add:" << endl;
		cin >> a; cin >> b;
		cout << "The answer is " << a + b << endl; sleep(5); break;
		case 2: cout << "Enter the two values you want to subtract:" << endl;
		cin >> a; cin >> b;
		cout << "The answer is " << a - b << endl; sleep(5); break;
		case 3: cout << "Enter the two values you want to multiply:" << endl;
		cin >> a; cin >> b;
		cout << "The answer is " << a * b << endl; sleep(5); break;
		case 4: cout << "Enter the two values you want to divide:" << endl;
		cin >> a; cin >> b;
		if ( b == 0)
		{
			cout << "Error: can't divide by zero." << endl;
		}
		else
		{
		cout << "The answer is " << a / b << endl;
		}
		sleep(5); break;
		default: cout << "ERROR: UNASSIGNED OPTION!" << endl; sleep(6); break;
		}
	}while(m != 0);
	return 0;
	}



