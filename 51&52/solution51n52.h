/* Created with CLion,
 * Author: Howard
 * Date: 2020/9/4
 * Time: 11:38 上午
 * Copyright (c) Howard. All rights reserved.
 */

// Description:

#ifndef TEST_SOLUTION51N52_H
#define TEST_SOLUTION51N52_H

#include <vector>
#include <string>

using namespace std;

class solution51n52
{
private:
	vector<vector<string>> result;
	vector<bool> row;
	vector<bool> diagnose1;
	vector<bool> diagnose2;
	vector<vector<bool>> queens;

public:
	vector<vector<string>> solve_N_queens(int n);

	int total_N_queens(int n);

private:
	void initialize(int &n);

	void solve(int index, int &n, vector<vector<bool>> queens, vector<bool> row, vector<bool> diagnose1,
			   vector<bool> diagnose2);
};


#endif //TEST_SOLUTION51N52_H
