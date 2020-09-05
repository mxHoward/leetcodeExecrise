/* Created with CLion,
 * Author: Howard
 * Date: 2020/9/5
 * Time: 8:55 下午
 * Copyright (c) Howard. All rights reserved.
 */

// Description:

#ifndef TEST_SOLUTION60_H
#define TEST_SOLUTION60_H

#include <vector>

using namespace std;

class solution60
{
private:
	const vector<int> factorial = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
public:
	string get_permutation(int n, int k);   // decrease-n-conquer solution
	string get_permutation2(int n, int k);// stl solution
};


#endif //TEST_SOLUTION60_H
