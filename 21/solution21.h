/* Created with CLion,
 * Author: Howard
 * Date: 2020/9/6
 * Time: 8:41 下午
 * Copyright (c) Howard. All rights reserved.
 */

// Description: leetcode 21.
// link: https://leetcode-cn.com/problems/merge-two-sorted-lists/

#ifndef TEST_SOLUTION21_H
#define TEST_SOLUTION21_H

#include "../utility/list_node.h"

class solution21
{
public:
	// iterative solution
	list_node *merge_two_lists(list_node *l1, list_node *l2);

	// recursive solution
	list_node *merge_two_lists2(list_node *l1, list_node *l2);
};


#endif //TEST_SOLUTION21_H
