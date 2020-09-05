/* Created with CLion,
 * Author: Howard
 * Date: 2020/9/5
 * Time: 8:23 下午
 * Copyright (c) Howard. All rights reserved.
 */

// Description:

#include "tree_node.h"
#include <algorithm>


tree_node::tree_node(int val)
{
	this->val = val;
	this->left = nullptr;
	this->right = nullptr;
}

tree_node::tree_node(int val, tree_node *l, tree_node *r)
{
	this->val = val;
	this->left = l;
	this->right = r;
}

void tree_node::set_val(int val)
{
	this->val = val;
}

void tree_node::set_left(tree_node *l)
{
	this->left = l;
}

void tree_node::set_right(tree_node *r)
{
	this->right = r;
}

int tree_node::get_val()
{
	return this->val;
}

tree_node *tree_node::get_left()
{
	return this->left;
}

tree_node *tree_node::get_right()
{
	return this->right;
}

bool tree_node::is_leaf()
{
	return this->left == nullptr && this->right == nullptr;
}

int tree_node::height()
{
	if (this->is_leaf())
		return 1;
	return max(this->left->height(), this->right->height());
}
