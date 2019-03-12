
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	cout << "Enter a integer between 2 and 20: " << endl;
	cin >> n;
	if (n > 1 && n < 21)
	{
		cout << "+";
		for(int i = 0; i < n - 2; i++)
		{
			cout << "-";
		}
		cout << "+" << endl;
		for(int i = 0; i < n-2; i++)
		{
			cout << "|";
			for(int i = 0; i < n-2; i++)
			{
				cout << " ";
			}
			cout << "|" << endl;
		}
		cout << "+";
		for(int i = 0; i < n-2; i++)
		{
			cout << "-";
		}
		cout << "+" << endl;
	}
	else if (n >= 21)
	{
		cout << "Error: Number is too large, try again." << endl;
	}
	else
	{
		cout << "Error" << endl;
	}
	return 0;
}
