#include <iostream>
#include "347/solution347.h"

using namespace std;

int main()
{
	solution347 s1;
	vector<int> nums = {1, 4, 4, 4, 1, 2, 2, 3, 3, 3, 9, 5, 6};
	vector<int> res = s1.top_k_frequent2(nums, 2);
	for (int i = 0; i < res.size(); ++i)
	{
		cout << res[i] << " ";
	}
	cout << endl;
	return 0;
}
