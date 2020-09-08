#include <iostream>
#include "77/solution77.h"

using namespace std;

int main()
{
	solution77 s1;
	vector<vector<int>> res = s1.combination(10, 3);
	for (int i = 0; i < res.size(); ++i)
	{
		for (int j = 0; j < res[i].size(); ++j)
			cout << res[i][j] << ",";
		cout << endl;
	}
	cout << endl;
	return 0;
}
