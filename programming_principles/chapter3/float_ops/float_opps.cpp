/* Simple program to exercise operators. */

#include "../../std_lib_facilities.h"

int main()
{
	cout << "Please enter a floating-point value: ";
	double n;
	cin >> n;
	cout << "n == " << n
			<< "\nn + 1 == " << n + 1
			<< "\nthree times n == " << 3 * n
			<< "\ntwice n == " << 2 * n
			<< "\nn squared == " << n * n
			<< "\nhalf of n == " << n / 2
			<< "\nsqrt(n) == " << sqrt(n)
			<< endl;	//another name for newline ("end of line")
	return 0;
}

