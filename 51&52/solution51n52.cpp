/* Created with CLion,
 * Author: Howard
 * Date: 2020/9/4
 * Time: 11:38 上午
 * Copyright (c) Howard. All rights reserved.
 */

// Description:

#include "solution51n52.h"

void solution51n52::initialize(int &n)
{
	row.resize(n, false);
	diagnose1.resize(2 * n - 1, false);
	diagnose2.resize(2 * n - 1, false);
	queens.resize(n, row);
	//result.resize(n, vector<string>(n, ""));
}

void solution51n52::solve(int index, int &n, vector<vector<bool>> queens, vector<bool> row, vector<bool> diagnose1,
						  vector<bool> diagnose2)
{
	if (index == n)
	{
		string curr_row = "";
		vector<string> curr_board;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (queens[i][j])
					curr_row.push_back('Q');
				else
					curr_row.push_back('.');
			}
			curr_board.push_back(curr_row);
			curr_row.clear();
		}
		result.push_back(curr_board);
		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (row[i] || diagnose1[index + n - i - 1] || diagnose2[index + i])
			continue;
		diagnose1[index + n - i - 1] = true;
		diagnose2[index + i] = true;
		queens[index][i] = true;
		row[i] = true;

		solve(index + 1, n, queens, row, diagnose1, diagnose2);

		diagnose1[index + n - i - 1] = false;
		diagnose2[index + i] = false;
		queens[index][i] = false;
		row[i] = false;
	}
}

vector<vector<string>> solution51n52::solve_N_queens(int n)
{
	initialize(n);
	solve(0, n, queens, row, diagnose1, diagnose2);
	return result;
}

int solution51n52::total_N_queens(int n)
{
	initialize(n);
	solve(0, n, queens, row, diagnose1, diagnose2);
	return result.size();
}