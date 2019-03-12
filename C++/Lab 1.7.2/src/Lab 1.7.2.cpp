//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;
int main() {

	int x;
	int y;
	float a;
	float b;

	cin >> x;
	cin >> y;

	a = 1 / (float) x;
	b = 1 / (float) y;


	if (fabs(a - b) < 0.000001)
	{
		cout << "Results Are Equal" << endl;
	}
	else
	{
		cout << "Results Are Not Equal" << endl;
	}

}
