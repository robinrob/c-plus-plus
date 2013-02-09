/* Spot the hard-to-find error. */

#include "../../std_lib_facilities.h"

int main()
{
	vector<int> v;
	int i;
	while (cin >> i) v.push_back(i);
	for (int i = 0; i <= v.size(); ++i)
			cout << "v[" << i << "]: " << v[i] << endl;
	return 0;
}


