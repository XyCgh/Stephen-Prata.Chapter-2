#include "pch.h"
#include <iostream>
using namespace std;

void func_1(void);
void func_2(void);
int main()
{
	func_1();
	func_1();
	func_2();
	func_2();
	system("pause");
	return 0;
}
void func_1()
{
	cout << "Three blind mice" << endl;
}
void func_2()
{
	cout << "See how they run" << endl;
}