#include "pch.h"
#include <iostream>
using namespace std;  

int main(int argc, const char * argv[])
{
	double temperature, temperature_1;
	cout << "Please enter a Celsius value: ";
	cin >> temperature;
	temperature_1 = 1.8 * temperature + 32.0;
	cout << temperature << " degrees Celsius is " << temperature_1 << " degrees Fahrenheit" << endl;
	system("pause");
	return 0;
}
