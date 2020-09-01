#include <iostream>
#include "160\solution160.h"

using namespace std;

int main()
{
	list_node *A3 = new list_node(1, nullptr);
	list_node *A2 = new list_node(2, A3);
	list_node *A1 = new list_node(3, A2);
	list_node *B1 = new list_node(0, A2);
	list_node *ans = nullptr;
	solution160 s;
	ans = s.get_intersection_node(A1, B1);
	cout << ans->get_val() << endl;
	return 0;
}
