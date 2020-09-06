/* Created with CLion,
 * Author: Howard
 * Date: 2020/9/6
 * Time: 9:36 下午
 * Copyright (c) Howard. All rights reserved.
 */

// Description: leetcode 19. remove n-th node from end of list
// link:https://leetcode-cn.com/problems/remove-nth-node-from-end-of-list/

#ifndef TEST_SOLUTION19_H
#define TEST_SOLUTION19_H

#include "../utility/list_node.h"

class solution19
{
public:
	// brute-force solution. travel the list for two times.
	list_node *remove_nth_from_end(list_node *head, int n);

	// use two pointers to optimize above solution. travel the list for only one time.
	list_node *remove_nth_from_end2(list_node *head, int n);
};


#endif //TEST_SOLUTION19_H
