#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[])
{
	float a, b, c;
	float d, e, IMT;
	const short int funt = 12;
	const float metre = 0.0254;
	const float kilogram = 2.2;
	cout << "Enter your height in feet:___\b\b\b";
	cin >> a;
	cout << "Enter your height in inches:___\b\b\b";
	cin >> b;
	cout << "Enter your weight in pounds:___\b\b\b";
	cin >> c;
	d = ((a * funt) + b) * metre;
	e = c/ kilogram;
	IMT = e /( d * d);
	cout << "Your IMT: " << IMT << endl;
	system("pause");
	return 0;
}