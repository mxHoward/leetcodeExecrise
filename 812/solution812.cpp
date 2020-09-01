/* Created with CLion.
 * Author: Howard
 * Date: 2020/9/1
 * Time: 17:03
 * Copyright (c) Howard. All rights reserved.
 */

// Description:

#include "solution812.h"
#include <cmath>

double solution812::largest_triangle_area(vector<vector<int>>& points) {
	double res = 0;
	int N = points.size();
	for (int i = 0; i < N - 2; ++i)
		for (int j = i + 1; j < N - 1; ++j)
			for (int k = j + 1; k < N; ++k)
				res = max(res, area(points[i], points[j], points[k]));
	return res;
}

double solution812::area(vector<int> P, vector<int> Q, vector<int> R){
	return double(abs(P[0] * Q[1] + Q[0] * R[1] + R[0] * P[1]
					  - P[1] * Q[0] - Q[1] * R[0] - R[1] * P[0])) / 2;
}
