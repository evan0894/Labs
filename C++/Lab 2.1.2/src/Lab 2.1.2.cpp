

#include <iostream>
using namespace std;

int main() {
	float grossprice, taxrate, netprice, taxvalue;

	cout << "Enter a gross price: ";

	cin >> grossprice;

	cout << "Enter a tax rate: ";

	cin >> taxrate;

	if (grossprice > 0)
	{
		if (taxrate > 0 && taxrate < 100)
		{
			netprice = grossprice / ( 1 + (taxrate / 100) );
			taxvalue = netprice * ( taxrate / 100);

			cout << "Net price: " << netprice << endl;

			cout << "Tax value: " << taxvalue << endl;
		}
		else
		{
			cout << "NOPE!";
		}
	}	else
	{
		cout << "Nah";
	}



	return 0;
}
