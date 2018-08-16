#include "book.h"
#include <iostream>
Book::Book() {
	title = "";
	author = "";
	price = 0;
}

Book::Book( const string a, const string t, double p)
{
	title = a;
	author = t;
	price = p;
}

Book::~Book()
{
	//destructor
}

string Book::getTitle()
{
	return title;
}

string Book::getAuthor()
{
	return author;
}
double Book::getPrice()
{
	return price;
}

void Book::display() {
	cout << title << endl;
	cout << author << endl;
	cout << price << endl;
}




