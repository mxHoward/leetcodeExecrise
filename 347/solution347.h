/* Created with CLion,
 * Author: Howard
 * Date: 2020/9/7
 * Time: 5:12 下午
 * Copyright (c) Howard. All rights reserved.
 */

// Description: leetcode 347. top k frequent element
// link:https://leetcode-cn.com/problems/top-k-frequent-elements/

#ifndef TEST_SOLUTION347_H
#define TEST_SOLUTION347_H

#include <vector>

using namespace std;

class solution347
{
public:
	// solve with priority queue/minimum heap
	vector<int> top_k_frequent(vector<int> &nums, int k);

	// solve with quick sort-based method
	vector<int> top_k_frequent2(vector<int> &nums, int k);

private:
	// comparison function
	static bool cmp(pair<int, int> &m, pair<int, int> &n);

	// quick sort implementation
	void quick_sort(vector<pair<int, int>> &v, int start, int end, vector<int> &ans, int k);
};


#endif //TEST_SOLUTION347_H
