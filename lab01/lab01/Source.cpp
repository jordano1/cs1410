//Demonstration #
//Author: Jordan Olson
//Date last modified: 8/24/2016
//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string halsName = "Hello, my name is Hal, what is your name?\n";
string usersName = "";


int main()
{
	cout << halsName << endl;
	cin >> usersName;
	cout << "Welcome to C++ " << usersName << ", let the adventure begin!\n";
	system("PAUSE");
	return 0;
}