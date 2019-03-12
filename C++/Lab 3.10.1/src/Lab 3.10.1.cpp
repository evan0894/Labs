#include <iostream>

#include <cstdlib>

#include <ctime>

using namespace std;

int main(void)
{
	int maxball;
	int ballsno;

	do {
		cout << "Max number of balls? " << endl;
		cin >> maxball;
	}
	while (maxball < 1);
	do
	{
		cout << "How many balls? ";
		cin >> ballsno;
	}
	while (ballsno < 1 || ballsno > maxball);

	srand(time(NULL));

	int *selection = new int [ballsno];

	for (int i = 0; i < ballsno; i++)
	{


		bool unique;

		int rnd = 0;

		do
		{
			unique = true;

			rnd = (rand() % maxball) + 1;

			for(int j = 0; j < i; j++)
			{
				if (rnd == selection[j])
				{
					unique = false;
				}
			}
		}
		while (unique == false);
		selection[i] = rnd;
		cout << rnd << " " << endl;
	}
	return 0;

}




