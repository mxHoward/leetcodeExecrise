#include <iostream>
#include "51&52/solution51n52.h"

using namespace std;

int main()
{
	solution51n52 s1, s2;
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
			cout << s1.solve_N_queens(8)[i][j];
		cout << endl;
	}
	cout<<s2.total_N_queens(8);
	cout<<endl;


	return 0;
}
