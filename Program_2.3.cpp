#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[])
{
	int k, g;
	float result;
	cout << "Enter the distance you have traveled (in kilometers): ";
	cin >> k;
	cout << "Enter the amount of gasoline consumed (in liters): ";
	cin >> g;
	result = (k/g)*100;
	cout << "Gasoline consumption in liters per 100 km: " << result << endl;
	system("pause");
	return 0;
}