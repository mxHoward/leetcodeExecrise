/* Created with CLion,
 * Author: Howard
 * Date: 2020/9/6
 * Time: 9:36 下午
 * Copyright (c) Howard. All rights reserved.
 */

// Description:

#include "solution19.h"


list_node *solution19::remove_nth_from_end(list_node *head, int n)
{
	list_node *node = new list_node(0, head);
	list_node *curr = head;
	int length = 0;
	while (curr != nullptr)
	{
		++length;
		curr = curr->next();
	}

	length -= n;
	curr = node;

	while (length-- > 0)
		curr = curr->next();
	// curr.next = curr.next.next;
	curr->set_next(curr->next()->next());
	return node->next();
}

list_node *solution19::remove_nth_from_end2(list_node *head, int n)
{
	list_node *node = new list_node(0, head);
	list_node *pointer1 = node;
	list_node *pointer2 = node;

	for (int i = 1; i <= n + 1; ++i)
		pointer1 = pointer1->next();

	while (pointer1 != nullptr)
	{
		pointer1 = pointer1->next();
		pointer2 = pointer2->next();
	}
	// pointer2.next = pointer2.next.next;
	pointer2->set_next(pointer2->next()->next());

	return node->next();
}