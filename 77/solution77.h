/* Created with CLion,
 * Author: Howard
 * Date: 2020/9/8
 * Time: 9:33 上午
 * Copyright (c) Howard. All rights reserved.
 */

// Description:

#ifndef TEST_SOLUTION77_H
#define TEST_SOLUTION77_H

#include <vector>

using namespace std;

class solution77
{
public:
	vector<vector<int>> combination(int n, int k);

private:
	vector<int> temp;
	vector<vector<int>> ans;

	void dfs(int curr, int n, int k);
};


#endif //TEST_SOLUTION77_H
