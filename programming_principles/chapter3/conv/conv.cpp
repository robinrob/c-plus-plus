/* Unsafe conversions. */

#include "../../std_lib_facilities.h"

int main()
{
	int a = 2000;
	char c = a;
	int b = c;
	if (a != b) {
		cout << "oops!: " << a << " != " << b << endl;
	}
	else {
		cout << "Wow, we have large characters!" << endl;
	}
	return 0;
}
