/* Uncaught exception. */

#include "../../std_lib_facilities.h"

void throw_error(string s)
{
	throw runtime_error(s);
}

int main()
{
	throw_error("bollocks");
	return 0;
}


