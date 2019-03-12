#include <iostream>

using namespace std;

int main(void)
{
double pi4 = 0., y , z;

long n,x;

cout << "Number of iterations? ";

cin >> n;

for ( x = 0, y = 1, z = 1; x != n; x++){

	pi4 = pi4 + (z / y);

	z = z * -1;

	y = y + 2;
}



cout.precision(20);

cout << "Pi = " << (pi4 * 4.) << endl;

return 0;
}
