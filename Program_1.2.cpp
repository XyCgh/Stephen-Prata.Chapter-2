#include "pch.h"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
	int a, b;
	cout << "Enter a distance in furlongs: ";
	cin >> a;
	b = a * 220;
	cout << "Distance in yards: " << b << endl;
	system("pause");
	return 0;
}