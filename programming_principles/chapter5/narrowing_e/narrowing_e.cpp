/* Narrowing errors.
 * NOTE: < > brackets are called "template arguments".
 * They are used to express an idea rather than a value.
 * Used for convert a value when we are not sure
 * "if it will fit".
 */

#include "../../std_lib_facilities.h"

int main()
{
	try {
		int i1 = narrow_cast<int>(2.9); //throws
	}
	catch (runtime_error& e)
	{
		cout << "error: " << e.what() << endl;
	}
	int i2 = narrow_cast<int>(2.0);		//OK
	char c1 = narrow_cast<char>(1066);	//throws
	char c2 = narrow_cast<char>(85);	//OK
	return 0;
}
