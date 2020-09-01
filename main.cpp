#include <iostream>
#include "486\solution486.h"

using namespace std;

int main()
{
	vector<int> a = {1, 2, 532, 52, 124, 255, 231, 521, 4, 2, 5};
	solution486 s;
	cout << s.predict_the_winner(a) << endl;
	return 0;
}
