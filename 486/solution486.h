/* Created with CLion.
 * Author: Howard
 * Date: 2020/9/1
 * Time: 17:16
 * Copyright (c) Howard. All rights reserved.
 */

// Description:

#ifndef TEST_SOLUTION486_H
#define TEST_SOLUTION486_H

#include <vector>

using namespace std;

class solution486
{
public:
	bool predict_the_winner(vector<int>& nums);

private:
	int utility(vector<int>& nums, int left, int right, vector<vector<int>> & memory);
};


#endif //TEST_SOLUTION486_H
