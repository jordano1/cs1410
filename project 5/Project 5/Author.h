//project 5
//Author: Jordan Olson
//Date last modified: 10/24/2016
//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
// CS 1410 Programming Project #5
// Copyright 2016, Utah Valley University
//Author: Jordan Olson
// Date last modified: oct 2016
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Author {
public:
	Author(); // default constructor
	~Author(); //destructor
	Author(string, string);//parameterized constructor
	string getName() const; //getter for name
	string getAddress() const; //getter for address
	void writeData(ofstream&);
	void readData(ifstream&);
	void display(void);
private:
	string name; //private variable name
	string address; //private variable address
};
