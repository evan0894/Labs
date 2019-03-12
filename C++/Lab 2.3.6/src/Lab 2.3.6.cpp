#include <iostream>
using namespace std;
int main(void)
{
	int h;
	cout << "Enter the height of your pyramids: " << endl;
	cin >> h;

	if (h > 2 && h < 9)
	{
		for(int m = 0; m < 3; m++)
		{
			for ( int i = 0; i < h -1; i++)
			{
				cout << " ";
			}
			cout << "*";
			for ( int i = 0; i < h -1; i++)
			{
				cout << " ";
			}
			cout << " ";
		}
	cout << endl;
	int j = 1;
	int s = h -2;
	for(int n = h - 1; n > 1; n--)
	{
		for(int m = 0; m < 3; m++)
		{
			for(int i = 0; i < s; i++)
			{
				cout << " ";
			}
			cout << "*";
			for(int i = 0; i < j; i++)
			{
				cout << " ";
			}
			cout << "*";
			for(int i = 0; i < s; i++)
			{
				cout << " ";
			}
			cout << " ";
		}
		s--;
		j += 2;
		cout << endl;
	}
	for(int m = 0; m < 3; m++)
	{
		for(int i = 0; i < 2 * h - 1; i++)
		{
				cout << "*";
		}
		cout << " ";
	}
	cout << endl;
	}
	return 0;
}
