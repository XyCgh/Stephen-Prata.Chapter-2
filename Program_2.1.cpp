#include "pch.h"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
	const int Funt_1 = 12;
	unsigned short int duim;
	int Funt_R, duim_R;
	cout << "Enter your height:___\b\b\b";
	cin >> duim;
	Funt_R = duim / Funt_1;
	duim_R = duim % Funt_1;
	cout << "Your height: " << Funt_R << " fut and " << duim_R << " duim." << endl;
	system("pause");
	return 0;
}