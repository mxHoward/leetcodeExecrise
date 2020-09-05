/* Created with CLion,
 * Author: Howard
 * Date: 2020/9/5
 * Time: 8:22 下午
 * Copyright (c) Howard. All rights reserved.
 */

// Description:

#include "solution257.h"

vector<string> solution257::binary_tree_paths(tree_node *root)
{
	vector<string> paths;
	construct_paths(root, "", paths);
	return paths;
}

void solution257::construct_paths(tree_node *root, string path, vector<string> &paths)
{
	if (root != nullptr)
	{
		path += to_string(root->get_val());
		if(root->is_leaf())
			paths.push_back(path);
		else
		{
			path += "->";
			construct_paths(root->get_left(), path, paths);
			construct_paths(root->get_right(), path,paths);
		}
	}
}
