/* Created with CLion.
 * Author: Howard
 * Date: 2020/9/1
 * Time: 17:16
 * Copyright (c) Howard. All rights reserved.
 */

// Description:

#include "solution486.h"

bool solution486::predict_the_winner(vector<int>& nums) {
	int n = nums.size();
	vector<vector<int>> memory(n, vector<int>(n, 0));
	return utility(nums, 0, n - 1, memory) >= 0;
}

int solution486::utility(vector<int>& nums, int left, int right, vector<vector<int>> & memory)
{
	if(memory[left][right]) return memory[left][right];
	if(left == right)
	{
		memory[left][right] = nums[left];
		return nums[left];
	}
	else
	{
		int pick_left = nums[left] - utility(nums, left + 1, right, memory);
		int pick_right = nums[right] - utility(nums, left, right - 1, memory);
		int res = max(pick_left, pick_right);
		memory[left][right] = res;
		return res;
	}
}