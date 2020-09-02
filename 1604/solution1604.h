/* Created with CLion.
 * Author: Howard
 * Date: 2020/9/2
 * Time: 8:52
 * Copyright (c) Howard. All rights reserved.
 */

// Description:

#ifndef TEST_SOLUTION1604_H
#define TEST_SOLUTION1604_H

#include <string>

using namespace std;

class solution1604
{
public:
	bool is_number(string s);

private:
	bool scan_integer(const char **s);

	bool scan_unsigned_integer(const char **s);
};


#endif //TEST_SOLUTION1604_H
