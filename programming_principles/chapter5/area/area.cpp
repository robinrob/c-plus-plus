/* Area program - dealing with errors.
 * Note: throwing exceptions from callee functions and
 * using try-catch blocks in the caller functions
 * separates exception throwing from exception handling.
 * This is better.
 */

#include "../../std_lib_facilities.h"

class Bad_area {};

//calculate area of a rectangle
int area(int length, int width)
{
	if (length <= 0 || width <= 0) throw Bad_area();
	return length * width;
}

//calculate area within frame
int framed_area(int x, int y)
{
	return area(x - 2, y - 2);
}

int main()
{
	try {
		int x = -1;
		int y = 2;
		int z = 4;

		//caller catches errors (very bad!)
//		if (x <= 0) error("non-positive x");
//		if (y <= 0) error("non-positive y");
		int area1 = area(x, y);
		int area2 = framed_area(1, z);
		int area3 = framed_area(y, z);
		double ratio = double(area1) / area3;
		return 0;			//error code for normal exit
	}
	catch (Bad_area&) {
		cout << "Oops! bad arguments to area()\n";
		return 1;			//error code for Bad_area exception
	}
	return 0;
}
