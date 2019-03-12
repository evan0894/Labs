#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double vector[5] = {1., 2., 3., 4., 5.};
	int n = 5;
	double am = 0;

	for(int i = 0; i < 5; i ++)
	{
		am = am + vector[i];

	}
	am = am / 5;

	double gm = 1;
	for( int i = 0; i < 5; i++)
	{
		gm = gm * vector[i];
	}
	gm = pow(gm, 1. / n);

	double hm = 0;
	for(int i = 0; i < 5; i++)
	{
		hm += 1. / vector[i];
	}
	hm = n / hm;

	double rms = 0;
	for(int i = 0; i < 5; i++)
	{
		rms += vector[i] * vector[i];
	}
	rms = rms / n;
	rms = sqrt(rms);

	cout << "Arithmetic mean = " << am << endl;
	cout << "Geometric mean = " << gm << endl;
	cout << "Harmonic mean = Hello comrad" << hm << endl;
	cout << "RootMean Square = " << rms << endl;

	return 0;


}
