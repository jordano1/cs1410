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
	string getName(string a);
	string getAddress(string a);
	Author();
	~Author();
	Author(string a, string b);//have to create this so it passes into this area
private:
	string name = "";
	string address = "";
};

Author::Author() {
	//constructor
}
Author::~Author() {
	//destructor
}

Author::Author(string a, string b){
	name = a;
	address = b;
}
string Author::getName(string a) {
	name = a;
	return name;
}
string Author::getAddress(string a) {
	address = a;
	return address;
}

class Book {

public:
	Book();
	~Book();
	Book(Author newAuthor, string a, int b, double c);
	string getTitle(string a);
	int getPages(int a);
	double getPrice(double a);
private:
	Author author;
	string title = "";
	int pages = 0;
	double price = 0;
};
Book::Book() {
	//constructor
}
Book::~Book() {
	//destructor
}

Book::Book(Author newAuthor, string a, int b, double c) {
	author = newAuthor;


}

string Book::getTitle(string a) {
	title = a;
	return title;
}
int Book::getPages(int a) {
	pages = a;
	return pages;
}
double Book::getPrice(double a) {
	price = a;
	return price;
}
// The displayBooks function
// Purpose: Display all of the data about a book
// Parameters: A vector of Book objects
// Returns: none
void displayBooks(const vector<Book>&);