/* Created with CLion,
 * Author: Howard
 * Date: 2020/9/6
 * Time: 8:41 下午
 * Copyright (c) Howard. All rights reserved.
 */

// Description: leetcode 21.
// link: https://leetcode-cn.com/problems/merge-two-sorted-lists/

#include "solution21.h"

// iterative solution
list_node *solution21::merge_two_lists(list_node *l1, list_node *l2)
{
	list_node *prev_head = new list_node(-1, nullptr);
	list_node *prev = prev_head; // current pointer

	while (l1 != nullptr && l2 != nullptr)
	{
		if (l1->get_val() < l2->get_val())
		{
			prev->set_next(l1);
			l1 = l1->next();
		} else
		{
			prev->set_next(l2);
			l2 = l2->next();
		}
		prev = prev->next();
	}
	// there is only one remaining list at most.
	// merge it into the whole list
	prev->set_next(l1 == nullptr ? l2 : l1);
	return prev_head->next();
}

// recursive solution
list_node *solution21::merge_two_lists2(list_node *l1, list_node *l2)
{
	if (l1 == nullptr)
		return l2;
	else if (l2 == nullptr)
		return l1;
	else if (l1->get_val() < l2->get_val())
	{
		//l1->next = merge_two_lists2(l1->next, l2)
		l1->set_next(merge_two_lists2(l1->next(), l2));
		return l1;
	} else
	{
		l2->set_next(merge_two_lists2(l1, l2->next()));
		return l2;
	}
}