#include <iostream>

using namespace std;

int main(void) {

int sys;

float m, ft, in;

cout << "Enter '0' for Metric system or '1' for Imperial system." << endl;

cin >> sys;

	if (sys == 0)
	{
		cout << "Enter meters:" << endl;
		cin >> m;
		ft = m * 3.28;
		in = (ft - (int)ft) * 12;
		ft = (int)ft;
		cout << ft << "'" << in << "\"" << endl;
	}
	else if (sys == 1)
	{
		cout << "Enter feet" << endl;
		cin >> ft;
		cout << "Enter inches" << endl;
		cin >> in;
		ft = ft / 3.2808399;
		in = in / (12 * 3.2808399);
		m = ft + in;
		cout << m << "m" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
return 0;
}
