/* Created with CLion,
 * Author: Howard
 * Date: 2020/9/6
 * Time: 10:44 上午
 * Copyright (c) Howard. All rights reserved.
 */

// Description:

#include "solution107.h"
#include <queue>
#include <algorithm>

vector<vector<int>> solution107::level_order_bottom(tree_node *root)
{
	auto level_order = vector<vector<int>>();
	if (root == nullptr)
		return level_order;
	queue<tree_node *> q;
	q.push(root);
	while (!q.empty())
	{
		auto level = vector<int>();
		int size = q.size();
		for (int i = 0; i < size; ++i)
		{
			auto node = q.front();
			q.pop();
			level.push_back(node->get_val());
			if (node->get_left() != nullptr)
				q.push(node->get_left());
			if (node->get_right() != nullptr)
				q.push(node->get_right());
		}
		level_order.push_back(level);
	}
	reverse(level_order.begin(), level_order.end());
	return level_order;
}
