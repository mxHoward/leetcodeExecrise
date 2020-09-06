#include <iostream>
#include "19/solution19.h"

using namespace std;

int main()
{
	solution19 s1;
	list_node *A, *B, *C, *D, *E, *F;
	F = new list_node(6, nullptr);
	E = new list_node(5, F);
	D = new list_node(4, E);
	C = new list_node(3, D);
	B = new list_node(2, C);
	A = new list_node(1, B);
	list_node * ans = s1.remove_nth_from_end2(A, 3);
	while (ans != nullptr)
	{
		cout << ans->get_val() << " ";
		ans = ans->next();
	}
	cout << endl;
	return 0;
}
