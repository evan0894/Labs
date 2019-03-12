#include <iostream>
using namespace std;

int main(void)
{
	double matrix[][4] = { { 1, 2, 3, 4 },

			{ 2, 2, 3, 1 },

			{ 3, 3, 3, 2 },

			{ 4, 1, 2, 4 } };

	bool issymmetric = true;



	for(int r = 0; r < 3; r++)
	{
		for(int c = r + 1; c < 4; c ++){
			if (matrix[r][c] != matrix[c][r])
			{
				issymmetric = false;
				break;
			}

		}
	}

	if(issymmetric)

		cout << "The matrix is symmetric" << endl;

	else

		cout << "The matrix is not symmetric" << endl;

	return 0;
}
