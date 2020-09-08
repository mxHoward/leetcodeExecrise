/* Created with CLion,
 * Author: Howard
 * Date: 2020/9/8
 * Time: 9:33 上午
 * Copyright (c) Howard. All rights reserved.
 */

// Description:

#include "solution77.h"

vector<vector<int>> solution77::combination(int n, int k)
{
	dfs(1, n, k);
	return ans;
}

void solution77::dfs(int curr, int n, int k)
{
	// if the sum of size of temp and remaining room is smaller than k
	// there is no correct answer left.
	if (temp.size() + (n - curr + 1) < k)
		return;

	// return when size of temp is k
	if (temp.size() == k)
	{
		ans.emplace_back(temp);
		return;
	}
	// choose current element
	temp.emplace_back(curr);
	dfs(curr + 1, n, k);
	temp.pop_back();
	// not choose current element
	dfs(curr + 1, n, k);
}