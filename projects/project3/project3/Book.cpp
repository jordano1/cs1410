#include "Book.h"

Book::Book() {
	title = "";
	pages = "";
	price = "";
}


Book::~Book() {
	//destructor
}




Book::Book(Author a, string t, string np, string p) {
	author = a;
	title = t;
	pages = np;
	price = p;
}


Author Book::getAuthor() const {
	return author;
}


string Book::getTitle() const {
	return title;
}


string Book::getNumPages() const {
	return pages;
}


string Book::getPrice() const {
	return price;
}


void Book::writeData(ofstream& out) {
	author.writeData(out);
	out << title << endl;
	out << pages << endl;
	out << price << endl;
}


void Book::readData(ifstream& in) {


	author.readData(in);
	getline(in, title);
	getline(in, pages);
	getline(in, price);
	//convert from int to strings
}


void Book::display() {
	author.display();
	cout << title << endl;
	cout << pages << endl;
	cout << price << endl;
}




