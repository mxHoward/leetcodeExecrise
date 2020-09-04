/* Created with CLion,
 * Author: Howard
 * Date: 2020/9/4
 * Time: 10:55 上午
 * Copyright (c) Howard. All rights reserved.
 */

// Description:

#include "solution206.h"

// iterative solution
list_node* solution206::revers_list(list_node *head)
{
	list_node *prev = nullptr;  // the head pointer of reversed list
	list_node *curr = head;     // use current pointer to reverse the list

	while(curr != nullptr)
	{
		list_node *temp = curr->next();  // save the next node
		// swap the next pointer of current pointer and prev pointer
		curr->set_next(prev);
		prev = curr;
		curr = temp;
	}

	return prev;
}

// recursive solution
list_node* solution206::revers_list2(list_node *head)
{
	// if head equals to null or the list only contains one node
	if(head == nullptr || head->next() == nullptr)
		return head; // return head itself
	// there are more than one nodes

	list_node *p = revers_list2(head->next());
	head->next()->set_next(head); // head.next.next = head
	head->set_next(nullptr);

	return p;
}
