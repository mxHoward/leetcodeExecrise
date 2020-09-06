#include <iostream>
#include "107/solution107.h"

using namespace std;

int main()
{
	solution107 s1;
	tree_node *A, *B, *C, *D, *E, *F;
	F = new tree_node(6);
	E = new tree_node(5);
	D = new tree_node(4);
	C = new tree_node(3, D, E);
	B = new tree_node(2);
	B->set_left(F);
	A = new tree_node(1, B, C);
	auto res = s1.level_order_bottom(A);
	for (int i =0;i<res.size();i++)
	{
		for (int j = 0; j < res[i].size(); ++j)
			cout << res[i][j] << " ";
		cout<<endl;
	}
	cout << endl;


	return 0;
}
