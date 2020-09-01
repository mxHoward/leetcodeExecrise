#include <iostream>
#include "891\solution891.h"

using namespace std;

int main()
{
	vector<int> a = {1, 2, 3, 4, 5, 6, 1, 23, 5, 7, 39, 12, 54};
	solution891 s;
	cout<<s.sum_subseq_widths(a)<<endl;
	return 0;
}
