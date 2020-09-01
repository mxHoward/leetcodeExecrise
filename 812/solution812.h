/* Created with CLion.
 * Author: Howard
 * Date: 2020/9/1
 * Time: 17:03
 * Copyright (c) Howard. All rights reserved.
 */

// Description:

#ifndef TEST_SOLUTION812_H
#define TEST_SOLUTION812_H

#include <vector>

using namespace std;

class solution812
{
public:
	double largest_triangle_area(vector<vector<int>> &points);

private:
	double area(vector<int> P, vector<int> Q, vector<int> R);

};


#endif //TEST_SOLUTION812_H
