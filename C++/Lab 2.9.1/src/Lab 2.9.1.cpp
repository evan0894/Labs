#include <iostream>
using namespace std;

int main(void)
{
	int auxiliary;
	int vector1[7] = {4, 7, 2, 8, 1, 3, 0};

	int vector2[7];

	for(int i = 0; i < 6; i++)
	{
		auxiliary = vector1[i];
		vector2[i+1] = auxiliary;



	}
	vector2[0] = vector1[6];
	for(int i=0; i < 7; i++)
	{
		cout << vector2[i] << ' ';
	}

	cout << endl;

	return 0;
}
