#include "Book.h"

Book::Book() {
	title = "";
	numPages = 0;
	price = 0.0;
	author = new Author();
}


Book::~Book() {
	//destructor
}


Book::Book(Author *a, string t, int np, double p) {
	author = a;
	title = t;
	numPages = np;
	price = p;
}


Author* Book::getAuthor() const {
	return author;
}


string Book::getTitle() const {
	return title;
}


int Book::getNumPages() const {
	return numPages;
}


double Book::getPrice() const {
	return price;
}


void Book::writeData(ofstream& out) {
	author->writeData(out);
	out << title << endl;
	out << numPages << endl;
	out << price << endl;
}


void Book::readData(ifstream& in) {
	string temp = "";
	author->readData(in);
	getline(in, title);
	getline(in, temp);
	numPages = stoi(temp);
	getline(in, temp);
	//creating temp variable to convert variables values
	price = stod(temp);
	//convert from int to strings
}


void Book::display() {
	author->display();
	cout << title << endl;
	cout << numPages << endl;
	cout << price << endl;
}




