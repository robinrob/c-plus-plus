/* A better way of calculating min, max & average values. */

#include "../../std_lib_facilities.h"

int main()
{
	vector<double> temps;

	double temp = 0.0;
	double sum = 0.0;
	double high_temp = -1000;
	double low_temp = 1000;
	int no_of_temps = 0;

	while (cin >> temp) {
		++no_of_temps;
		sum += temp;
		if (temp > high_temp) high_temp = temp;
		if (temp < low_temp) low_temp = temp;
	}

	cout << "High temperature: " << high_temp << endl;
	cout << "Low temperature: " << low_temp << endl;
	cout << "Average temperature: " << sum / no_of_temps << endl;
}

