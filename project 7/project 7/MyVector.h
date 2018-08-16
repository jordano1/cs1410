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
	MyVector(const int);

	//vector const vector copy constructor
	MyVector(const MyVector&);

	//destructor
	//this will use delete, make sure to delete the array so arr[];
	~MyVector();

	//operator to shift one vector into another
	MyVector operator=(const MyVector&);

	//operator<<
	/*A non - member function can access the private and protected members 
	of a class if it is declared a friend of that class.That is done by including a 
	declaration of this external function within the class, and preceding it with the keyword 
	friend :*/
	friend ostream& operator<<(ostream&, const MyVector&);


	//shows size
	const int size() const;

	//shows what's inside
	const int capacity() const;

	//empties vector
	//delete the array in the vector, then make a new array
	void clear();

	//push_back just like the regular vector
	//this will use new
	void push_back(const int);

	//returns vector index
	//this will use new
	const int at(const int) const;

private:
	void empty();
	void deep_copy(const MyVector&);
	int *data; //  pointing to the array
	int size_used; // how many values that are in the array
	int arr_capacity; // contains the capacity of the array
};


