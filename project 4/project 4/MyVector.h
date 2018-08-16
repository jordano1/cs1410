//lab 7
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
#include <iostream>
#include <vector>
#include <iostream>
using namespace std;
//the class is the vector, the array inside of it is what we're manipulating
class MyVector {
	public:
	//to display my array
	//default constructor
	//this will use new
	MyVector();
	//parameterized constructor
	//this will use new
	MyVector(int);

	//destructor
	//this will use delete, make sure to delete the array so arr[];
	~MyVector();
	
	//shows size
	int size() const;

	//shows what's inside
	int capacity() const;

	//empties vector
	//delete the array in the vector, then make a new array
	void clear();

	//push_back just like the regular vector
	//this will use new
	void push_back(int);

	//returns vector index
	//this will use new
	int at(int);

	private:
	int *data; //  pointing to the array
	int size_used; // how many values that are in the array
	int arr_capacity; // contains the capacity of the array
};


