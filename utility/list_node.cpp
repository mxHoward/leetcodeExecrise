/* Created with CLion.
 * Author: Howard
 * Date: 2020/8/31
 * Time: ${Time}
 * Copyright (c) to Howard. All rights reserved.
 */

// Description:

#include "list_node.h"

list_node::list_node()
{
	this->val = 0;
	this->next_ptr = nullptr;
}

list_node::list_node(int val, list_node *next_ptr)
{
	this->val = val;
	this->next_ptr = next_ptr;
}

string list_node::to_string()
{
	return ::to_string(this->get_val());
}


void list_node::set_val(int val)
{
	this->val = val;
	return;
}

int list_node::get_val() const
{
	return this->val;
}

list_node *list_node::next()
{
	return this->next_ptr;
}

void list_node::set_next(list_node *next_ptr)
{
	this->next_ptr = next_ptr;
	return;
}