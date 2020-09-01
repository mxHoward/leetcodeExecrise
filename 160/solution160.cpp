/* Created with CLion.
 * Author: Howard
 * Date: 2020/8/31
 * Time: ${Time}
 * Copyright (c) Howard. All rights reserved.
 */

// Description:

#include "solution160.h"
#include <iostream>

using namespace std;

list_node *solution160::get_intersection_node(list_node *headA, list_node *headB)
{
	list_node *temp1 = headA;
	list_node *temp2 = headB;
	while (temp1 != temp2)
	{
		temp1 = temp1 != nullptr ? temp1->next() : headB;
		temp2 = temp2 != nullptr ? temp2->next() : headB;
	}
	return temp1;
}