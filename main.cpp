#include <iostream>
#include "812\solution812.h"

using namespace std;

int main()
{
	vector<int> a = {1, 2};
	vector<int> b = {-1, 2};
	vector<int> c = {3, 4};
	vector<int> d = {0, 1};
	vector<vector<int>> tri = {a, b, c, d};
	solution812 s;
	cout << s.largest_triangle_area(tri) << endl;
	return 0;
}
