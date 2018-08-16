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
	Author();
	~Author();
	Author(string name, string address);
	void setAddress(string setAddress);
	void setName(string name);
	string getName()const;
	string getAddress()const;
private:
	string name = "";
	string address = "";
};
void Author::setAddress(string setAddress) {
	address = setAddress;
}
void Author::setName(string setName) {
	name = setName;
}
string Author::getName() const{
	return name;
}
string Author::getAddress() const{
	return address;
}
Author::Author() {
	//constructor
}
Author::~Author() {
	//destructor
}

Author::Author(string setName, string setAddress){
	name = setName;
	address = setAddress;
}



class Book {

public:
	Book();
	~Book();
	Book(Author newAuthor, string setTitle, int setPages, double setPrice);
void setTitle(string setTitle);
void setPages(int setPages);
void setPrice(double setPrice);

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
Book::Book() {
	//constructor
}
Book::~Book() {
	//destructor
}
Author Book::getAuthor() const{
	return author;
}
void Book::setTitle(string setTitle) {
	title = setTitle;
}
void Book::setPages(int setPages) {
	pages = setPages;
}
void Book::setPrice(double setPrice) {
	price = setPrice;
}
string Book::getTitle() const{
	return title;
}
int Book::getPages() const{
	return pages;
}
double Book::getPrice() const{
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