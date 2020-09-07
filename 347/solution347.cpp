/* Created with CLion,
 * Author: Howard
 * Date: 2020/9/7
 * Time: 5:12 下午
 * Copyright (c) Howard. All rights reserved.
 */

// Description: leetcode 347. top k frequent element
// link:https://leetcode-cn.com/problems/top-k-frequent-elements/

#include "solution347.h"
#include <queue>
#include <unordered_map>

bool solution347::cmp(pair<int, int> &m, pair<int, int> &n)
{
	return m.second > n.second;
}

vector<int> solution347::top_k_frequent(vector<int> &nums, int k)
{
	// use hash map to record occurrences of every element in array.
	unordered_map<int, int> occurrence;
	for (auto &k : nums)
		++occurrence[k];

	priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(&cmp)> q(cmp);

	// construct priority queue
	for (auto &[num, count] : occurrence)
	{
		// when the size of queue equals to k
		if (q.size() == k)
		{
			// compare the top element to current element
			if (q.top().second < count)
			{
				// if the current element is more frequent, replace it.
				q.pop();
				q.emplace(num, count);
			}
		}
		else
			q.emplace(num, count);
	}

	// construct result
	vector<int> res;
	while (!q.empty())
	{
		res.emplace_back(q.top().first);
		q.pop();
	}
	return res;
}

// quick sort implementation
void solution347::quick_sort(vector<pair<int, int>> &v, int start, int end, vector<int> &ans, int k)
{
	int selected = rand() % (end - start + 1) + start;
	swap(v[selected], v[start]);

	int pivot = v[start].second;
	int index = start;
	for (int i = start + 1; i <= end; ++i)
	{
		if (v[i].second >= pivot)
		{
			swap(v[index + 1], v[i]);
			++index;
		}
	}
	swap(v[index], v[start]);

	if (k <= index - start)
		quick_sort(v, start, index - 1, ans, k);
	else
	{
		for (int i = start; i <= index; ++i)
			ans.emplace_back(v[i].first);
		if (k > index - start + 1)
			quick_sort(v, index + 1, end, ans, k - (index - start + 1));
	}
}

vector<int> solution347::top_k_frequent2(vector<int> &nums, int k)
{
	// use hash map to record occurrences of every element in array.
	unordered_map<int, int> occurrence;
	for (auto &k : nums)
		++occurrence[k];

	vector<pair<int, int>> values;
	for (auto &k :occurrence)
		values.emplace_back(k);

	vector<int> res;
	quick_sort(values, 0, values.size() - 1, res, k);
	return res;
}
