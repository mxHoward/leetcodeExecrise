#include <iostream>
#include "1604/solution1604.h"

using namespace std;

int main()
{
	string s[] = {"1.3-2","0", "12 ","+23.e+2","+321.23e-23", "a"};
	solution1604 so;
	for (int i = 0; i < 6; ++i)
	{
		cout << so.is_number(s[i]) <<endl;
	}

	return 0;
}
