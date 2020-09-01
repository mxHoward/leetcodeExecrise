/* Created with CLion.
 * Author: Howard
 * Date: 2020/8/31
 * Time: ${Time}
 * Copyright (c) to Howard. All rights reserved.
 */

// Description:
#ifndef UTILITY_LIST_NODE_H
#define UTILITY_LIST_NODE_H

#include <string>

using namespace std;


class list_node
{
private:
	int val;
	list_node *next_ptr;

public:
	list_node();

	list_node(int, list_node *);

	list_node *next();

	int get_val() const;

	void set_next(list_node *);

	void set_val(int);

	string to_string();
};


#endif //UTILITY_LIST_NODE_H
