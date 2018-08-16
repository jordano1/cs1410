//lab 8
//Author: Jordan Olson
//Date last modified: 11/24/2016
//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
// CS 1410 Programming Project #8
// Copyright 2016, Utah Valley University
//Author: Jordan Olson
// Date last modified: Nov 2016

//the class is the vector, the array inside of it is what we're manipulating
#pragma once
#include <ostream>

template <class T>
class MyVector {

	/***************************Private VARIABLES***************************/
private:
	T *data; //  pointing to the array
	int size_used; // how many values that are in the array
	int arr_capacity; // contains the capacity of the array
	//clears array data
	void empty()
	{
		if (data != nullptr)
		{
			//clearing the data in data
			delete[] data;
			//pointing data to nullptr
			data = nullptr;
		}
	}

	//copies info from class object array to another
	void deep_copy(const MyVector<T>& rho)
	{
		size_used = rho.size();
		//capacity(); Returns the size of the storage space currently allocated for the vector, expressed in terms of elements.
		arr_capacity = rho.capacity();
		data = new T[arr_capacity];
		for (int i = 0; i < size_used; i++)
		{
			data[i] = rho.at(i);
		}
	}



/***************************PUBLIC VARIABLES***************************/
public:
	//over ride : only happens w/ inheritance ( have to have same signature )
	//overload : different signatures
	//default constructor
	MyVector() {
		data = nullptr; //  pointing to the array
		size_used = 0; // how many values that are in the array
		arr_capacity = 2;
		data = new T[arr_capacity];
	}

	//parameterized constructor
	MyVector(const int &num) {
		data = nullptr; //  pointing to the array
		size_used = 0; // how many values that are in the array
		arr_capacity = num;
		data = new T[arr_capacity];

		if (num < 0) {
			throw num;
		}


	}

	//parameterized constructor 2 checkin' if there's data in or not of the vector
	MyVector(const MyVector<T>& Vector)
	{
		if (Vector.data == nullptr)
		{
			data = nullptr;
		}
		else
		{
			deep_copy(Vector);
		}
	}

	//destructor
	~MyVector() {
		empty();
	}

	//check if it's not rho, if it is, remove it's data and copy rho to the new object
	MyVector<T> operator=(const MyVector<T>& rho)
	{
		if (this != &rho)
		{
			empty();
			deep_copy(rho);
		}
		return *this;
	}

	//shows size
	const int size() const {
		return size_used;
		//probs use - 1 here
		//how to show the amount used?
	}

	//shows what's inside
	const int capacity() const {
		return arr_capacity;
	}


	//empties vector
	void clear() {
		empty();
		data = new T[arr_capacity];
		//data[arr_capacity] = { 0 };
		data[arr_capacity];
		arr_capacity = 2;
		size_used = 0;
	}

	//push_back just like the regular vector

	void push_back(const T &n) {
		if (arr_capacity == 0) {
			arr_capacity = 1;
		}
		if (size_used == arr_capacity) {
			//double capacity
			arr_capacity *= 2;
			T *temp = 0;
			//new temp with new array capacity
			temp = new T[arr_capacity];
			for (int i = 0; i <= size_used; i++)
			{
				//Putting value in data[i], into temp[i]
				temp[i] = data[i];
			}
			//delete data array
			//point data to temp
			//*data = temp[arr_capacity]; the fuck is this
			delete[] data;
			//point data to temp
			data = temp;

		}
		data[size_used] = n;
		size_used++;
	}


	//returns vector index
	//how do i find that out
	const int at(const int &n) const
	{
		if (n < 0 || n >= size_used)
		{
			throw n;
		}

		return data[n];
		/*A function at(int n) that returns the
		value of the integer stored at index n of the vector.
		If the index outside the range of the vector(no element at that index),
		this function should throw an exception.Instead of creating an exception class for
		this case, just throw an integer value that represents the index parameter passed
		to the function.*/

	}
	//couldn't find a way for this to work any other way other than doing std::
	friend std::ostream& operator<<(std::ostream &display, const MyVector<T> &v)
	{
		for (int i = 0; i < v.size(); i++)
		{
			display << " " << v.at(i);
		}
		return display;
	}
	
};