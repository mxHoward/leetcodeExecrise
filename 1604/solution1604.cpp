/* Created with CLion.
 * Author: Howard
 * Date: 2020/9/2
 * Time: 8:52
 * Copyright (c) Howard. All rights reserved.
 */

// Description:

#include "solution1604.h"


bool solution1604::is_number(string s)
{
	if (s.compare("") == 0)
		return false;
	s.erase(0, s.find_first_not_of(" "));
	s.erase(s.find_last_not_of(" ") + 1);

	const char *num = s.c_str();
	bool is_number = scan_integer(&num);

	if (*num == '.')
	{
		++num;

		is_number = scan_unsigned_integer(&num) || is_number;
	}

	if (*num == 'e' || *num == 'E')
	{
		++num;

		is_number = is_number && scan_integer(&num);
	}
	return is_number && *num == '\0';
}

bool solution1604::scan_unsigned_integer(const char **s)
{
	const char *before = *s;
	while (**s != '\0' && **s >= '0' && **s <= '9')
		++(*s);
	return *s > before;
}

bool solution1604::scan_integer(const char **s)
{
	if (**s == '+' || **s == '-')
		++(*s);
	return scan_unsigned_integer(s);
}