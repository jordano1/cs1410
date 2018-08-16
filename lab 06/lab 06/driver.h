//lab 6
//Author: Jordan Olson
//Date last modified: 8/24/2016
//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
// CS 1410 Programming Project #2
// Copyright 2016, Utah Valley University
//Author: Jordan Olson
// Date last modified: Sept 2016
#pragma once
#include <iostream>
#include <string>
using namespace std;


void reverser(char *cp);



void reverser(char *cp) {
	//function pointer cp
	//n = 0;
	int n = 0;
	//while pointer cp + n does not equal endline eliminator
	while (*(cp + n)!= '\0')
	{
		//incriment n
		n++;
		//dereference : accessing value 
		//reference  : accessing address
	}
	n--;
	for (int i = 0; i < (n+1)/2; ++i)
	{
		char temp = *(cp + i);
		cout << temp << endl;
		*(cp + i) = *(cp + n - i);
		cout << *(cp + i) << endl;

		*(cp + n - i) = temp;
		//move front one up
		//move back one back

	}
	cout << cp << endl;

}