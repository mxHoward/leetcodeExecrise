#include <iostream>
#include "21/solution21.h"

using namespace std;

int main()
{
	solution21 s1;
	list_node *A, *B, *C, *D, *E, *F;
	F = new list_node(6, nullptr);
	E = new list_node(4, F);
	D = new list_node(3, E);
	C = new list_node(7, nullptr);
	B = new list_node(4, C);
	A = new list_node(1, B);
	list_node * ans = s1.merge_two_lists2(A, D);
	while (ans != nullptr)
	{
		cout << ans->get_val() << " ";
		ans = ans->next();
	}
	cout << endl;


	return 0;
}
