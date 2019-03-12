#include <iostream>
using namespace std;

int main(void) {

int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13, 52, 40  };

int n = sizeof(vector) / sizeof(vector[0]);

int *p = vector;

int idxSmallest = 0;

for(int iCompare = idxSmallest + 1; iCompare < n; iCompare++)
{
	if( *(p + iCompare) < *(p + idxSmallest))
	{
		idxSmallest = iCompare;
	}
}
cout << "The smallest element of the vector is " << vector[idxSmallest] << endl;
return 0;
}
