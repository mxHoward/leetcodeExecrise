/* Created with CLion,
 * Author: Howard
 * Date: 2020/9/5
 * Time: 8:55 下午
 * Copyright (c) Howard. All rights reserved.
 */

// Description:

#include "solution60.h"
#include <algorithm>
#include <string>

using namespace std;

// decrease and conquer method
string solution60::get_permutation(int n, int k)
{
	--k;
	string ans;
	vector<int> valid(n+1, 1);
	for (int i = 1; i <= n; ++i)
	{
		int order = k /factorial[n -i] + 1;
		for (int j = 1; j <= n; ++j)
		{
			order -= valid[j];
			if(!order)
			{
				ans += (j + '0');
				valid[j] = 0;
				break;
			}
		}
		k %= factorial[n -i];
	}
	return ans;
}

// use library function of stl ---- next_permutation
// next_permutation return true if there is next permutation of
// current string based on alphabetically order.
string solution60::get_permutation2(int n, int k)
{
	int permutation[n];
	for (int i = 0; i < n; ++i)
		permutation[i] = i + 1;
	int count = 1;
	while(count++ != k && next_permutation(permutation, permutation +n));
	string ans;
	for (int i = 0; i < n; ++i)
		ans.append(to_string(permutation[i]));
	return ans;
}