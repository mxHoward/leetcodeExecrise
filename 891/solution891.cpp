/* Created with CLion.
 * Author: Howard
 * Date: 2020/9/1
 * Time: 16:49
 * Copyright (c) Howard. All rights reserved.
 */

// Description:

#include "solution891.h"
#include <algorithm>

typedef long long ll;
const ll MOD = 1e9 +7;

int solution891::sum_subseq_widths(vector<int> &A)
{
	int n = A.size();
	sort(A.begin(), A.end());
	vector<ll> two(n + 1);
	two[0] = 1;
	for (int i = 1; i <= n; ++i)
		two[i] = (two[i - 1] << 1) % MOD;
	ll ans = 0;
	for (int i = 0; i < n; ++i) {
		int left = i;
		int right = n - i - 1;
		ans = (ans + (two[left] - two[right]) * A[i]) % MOD;
	}
	return (ans + MOD) % MOD;
}