#include "book.h"
#include <iostream>
Book::Book() {
	author = "";
	title = "";
}

Book::Book(string a, string t, double p)
{

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
	cout << price << endl;
	cout << author << endl;
}




