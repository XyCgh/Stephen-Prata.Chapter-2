#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main(int argc, const char * argv[])
{
	char s1[500];
	string name;
	cout << "Input your name: ";
	getline(cin, name);
	cout << "Enter your address: ";
	gets_s(s1);
	cout << "Your name: " << name << endl;
	cout << "Your address: " << s1 << endl;
	return 0;
}