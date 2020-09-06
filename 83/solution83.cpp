/* Created with CLion,
 * Author: Howard
 * Date: 2020/9/6
 * Time: 9:07 下午
 * Copyright (c) Howard. All rights reserved.
 */

// Description: leetcode 83
// link:https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list/

#include "solution83.h"

list_node *solution83::delete_duplicates(list_node *head)
{
	list_node *curr = head;
	while (curr != nullptr && curr->next() != nullptr)
	{
		if (curr->next()->get_val() == curr->get_val())
			curr->set_next(curr->next()->next());
		else
			curr = curr->next();
	}
	return head;
}