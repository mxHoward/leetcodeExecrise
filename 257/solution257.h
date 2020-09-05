/* Created with CLion,
 * Author: Howard
 * Date: 2020/9/5
 * Time: 8:22 下午
 * Copyright (c) Howard. All rights reserved.
 */

// Description:

#ifndef TEST_SOLUTION257_H
#define TEST_SOLUTION257_H

#include <vector>
#include <string>
#include "../utility/tree_node.h"

class solution257
{
public:
	vector<string> binary_tree_paths(tree_node *root);

private:
	void construct_paths(tree_node *root, string path, vector<string> &paths);
};


#endif //TEST_SOLUTION257_H
