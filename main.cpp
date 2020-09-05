#include <iostream>
#include "257/solution257.h"
#include "utility/tree_node.h"

using namespace std;

int main()
{
	solution257 s1;
	tree_node *A, *B, *C, *D, *E, *F;
	F = new tree_node(6);
	E = new tree_node(5);
	D = new tree_node(4);
	C = new tree_node(3, D, E);
	B = new tree_node(2);
	B->set_left(F);
	A = new tree_node(1, B, C);
	vector<string> res = s1.binary_tree_paths(A);
	for (int i = 0; i < res.size(); ++i)
	{
		cout << res[i] <<endl;
	}
	cout<<endl;


	return 0;
}
