#include <iostream>
using namespace std;
int main()
{
	int v;
	cout << "Put in a positive value " << endl;
	cin >> v;

	while(v >= 50)
	{
		v = v - 50;
		cout << "50 ";
	}
	while (v >= 20)
	{
		v = v - 20;
		cout << "20 ";
	}
	while (v >= 10)
	{
		v = v - 10;
		cout << "10 ";
	}
	while (v >= 5)
	{
		v = v - 5;
		cout << "5 ";
	}
	while (v >= 1)
	{
		v = v - 1;
		cout << "1 ";
	}
	cout << endl;
	return 0;
}
