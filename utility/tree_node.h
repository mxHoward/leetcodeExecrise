/* Created with CLion,
 * Author: Howard
 * Date: 2020/9/5
 * Time: 8:23 下午
 * Copyright (c) Howard. All rights reserved.
 */

// Description:

#ifndef TEST_TREE_NODE_H
#define TEST_TREE_NODE_H

using namespace std;

class tree_node
{
private:
	int val;
	tree_node *left;
	tree_node *right;

public:
	tree_node(int val);

	tree_node(int val, tree_node *l, tree_node *r = nullptr);

	void set_val(int val);

	void set_left(tree_node *l);

	void set_right(tree_node *r);

	int get_val();

	tree_node *get_left();

	tree_node *get_right();

	bool is_leaf();

	int height();
};


#endif //TEST_TREE_NODE_H
