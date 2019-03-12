//============================================================================
// Name        : 3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a;
	int b;
	int c;
	int d;

	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;

	if (a > 0 && a < 256 && b > 0 && b < 256 && c > 0 && c < 256 && d > 0 && d < 256)
	{
		cout << a << "." << b << "." << c << "." << d << endl;
	}
return 0;

}
