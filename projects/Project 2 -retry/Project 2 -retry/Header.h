#pragma once
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

// The displayBooks function
// Purpose: Display all of the data about a book
// Parameters: A vector of Book objects
// Returns: none
void displayBooks(const vector<Book>&);