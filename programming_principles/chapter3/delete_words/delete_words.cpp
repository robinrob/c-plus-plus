/* Delete repeated words.
 * Note: for a string, >> reads white-spaced separated words.
 * I.e. for input of "Robin Smith", cin >> current would read
 * in only "Robin". */

#include "../../std_lib_facilities.h"

int main()
{
	string previous = "";
	string current;

	while (cin >> current) {
		if (previous == current) {
			cout << "Repeated word: " << current << endl;
		}
		previous = current;
	}

	return 0;
}
