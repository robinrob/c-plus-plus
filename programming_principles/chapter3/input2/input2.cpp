/* Multiple inputs and outputs. */

#include "../../std_lib_facilities.h"

int main()
{
	cout << "Please enter a string and an int:" << endl;
	string word = "???"; //"???" means "don't know the name"
	int number = -1; //-1 means "don't know the age"
	cin >> word >> number;
	cout << "You entered " << word << " and " << number << endl;
	return 0;
}
