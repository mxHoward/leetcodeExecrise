#include <iostream>
#include "60/solution60.h"

using namespace std;

int main()
{
	solution60 s1;
	for (int i = 100; i < 1000; i = i + 5)
	{
		cout << s1.get_permutation(9, i) << endl;
	}
	cin.get();
	for (int i = 100; i < 1000; i = i + 5)
	{
		cout << s1.get_permutation2(9, i) << endl;
	}
	cout << endl;


	return 0;
}
