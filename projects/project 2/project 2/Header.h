//Demonstration #
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
// Header file for main - constants and function prologues
// =================================================
#include <iostream>
#include <string>
#include <vector>
using namespace std;


//Auther.h
class Author {
public:
	Author(); // default constructor
	~Author(); //destructor
	Author(string setName, string setAddress);//parameterized constructor
	string getName() const; //getter for name
	string getAddress() const; //getter for address
private:
	string name = ""; //private variable name
	string address = ""; //private variable address
};
//Author.cpp
string Author::getName() const { //getname method
	return name;
}
string Author::getAddress() const { //getaddress
	return address;
}
Author::Author() {
	//constructor
}
Author::~Author() {
	//destructor
}

Author::Author(string setName, string setAddress) {
	name = setName;
	address = setAddress;
}
//Book.h
class Book {

public:
	Book();
	~Book();
	Book(Author newAuthor, string setTitle, int setPages, double setPrice);


	Author getAuthor() const;
	string	getTitle() const;
	int	getPages() const;
	double	getPrice() const;

private:
	Author author;
	string title = "";
	int pages = 0;
	double price = 0;
};


//Book.cpp
Author Book::getAuthor() const {
	return author;
}
Book::Book() {
	//constructor
}
Book::~Book() {
	//destructor
}

string Book::getTitle() const {
	return title;
}
int Book::getPages() const {
	return pages;
}
double Book::getPrice() const {
	return price;
}
Book::Book(Author newAuthor, string setTitle, int setPages, double setPrice) {
	author = newAuthor;
	title = setTitle;
	pages = setPages;
	price = setPrice;
}
