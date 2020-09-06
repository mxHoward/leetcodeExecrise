#include <iostream>
#include "83/solution83.h"

using namespace std;

int main()
{
	solution83 s1;
	list_node *A, *B, *C, *D, *E, *F;
	F = new list_node(6, nullptr);
	E = new list_node(3, F);
	D = new list_node(3, E);
	C = new list_node(2, D);
	B = new list_node(2, C);
	A = new list_node(1, B);
	list_node * ans = s1.delete_duplicates(A);
	while (ans != nullptr)
	{
		cout << ans->get_val() << " ";
		ans = ans->next();
	}
	cout << endl;
	return 0;
}
