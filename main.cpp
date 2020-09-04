#include <iostream>
#include "206/solution206.h"

using namespace std;

int main()
{
	solution206 s;
	list_node *node[10];
	for (int i = 0; i < 10; ++i)
		node[i] = new list_node(i << 1, nullptr);
	for (int i = 0; i < 9; ++i)
		node[i]->set_next(node[i + 1]);
	list_node *curr;
	curr = node[0];
	while(curr != nullptr)
	{
		cout << curr->get_val() << "->";
		curr = curr->next();
	}
	cout<<endl;
	curr = s.revers_list2(node[0]);
	while(curr != nullptr)
	{
		cout << curr->get_val() << "->";
		curr = curr->next();
	}
	cout<<endl;


	return 0;
}
