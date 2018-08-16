#include "MyVector.h"
//over ride : only happens w/ inheritance ( have to have same signature )
//overload : different signatures

//data = new int [capacity];
//size == capacity to check if i need a new array;
//new array = capacity

//int *data; //  pointing to the array
//int size_used; // how many values that are in the array
//int arr_capacity; // contains the capacity of the array
//display

//default constructor
MyVector::MyVector() {
	data = nullptr; //  pointing to the array
	size_used = 0; // how many values that are in the array
	arr_capacity = 2;
	data = new int [arr_capacity];
};

//parameterized constructor
MyVector::MyVector(int num) {
	 data = nullptr; //  pointing to the array
	 size_used = 0; // how many values that are in the array
	 arr_capacity = num;

	if (num < 0) {
		num = 0;
		throw num;
	}
	data = new int[arr_capacity];
	
	
};

//destructor
MyVector::~MyVector() {

};

//shows size
int MyVector::size() const{
	return size_used;
	//probs use - 1 here
	//how to show the amount used?
};

//shows what's inside
int MyVector::capacity() const {
	return arr_capacity;
};

//empties vector
void MyVector::clear() {
	data = new int[arr_capacity];
	//data[arr_capacity] = { 0 };
	data[arr_capacity];
	arr_capacity = 2;
	size_used = 0;
};

//push_back just like the regular vector

void MyVector::push_back(int n) {
	if (arr_capacity == 0) {
		arr_capacity = 1;
	}
	if (size_used == arr_capacity) {
		//double capacity
		arr_capacity *= 2;
		int *temp;
		//new temp with new array capacity

		temp = new int[arr_capacity];

		for (int i = 0; i < size_used; i++)
		{
			//Putting value in data[i], into temp[i]
			temp[i] = data[i];
		}
		//delete data array
		//point data to temp
		//*data = temp[arr_capacity]; 
		delete[] data;
		data = temp;


	}
	data[size_used] = n;
	size_used++;
};

//returns vector index
//how do i find that out
int MyVector::at(int n) {
	if (data[n]< 0)
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
	
};