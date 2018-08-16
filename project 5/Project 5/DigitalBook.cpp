#include "DigitalBook.h"

DigitalBook::DigitalBook()
{
	format = "";
}

DigitalBook::DigitalBook(Author* a, string t, int np, double p, string f) : Book(a, t, np, p)
{	
	format = f;
}

string DigitalBook::getFormat(void)
{
	return format;
}

DigitalBook::~DigitalBook()
{

}

//step 2
void DigitalBook::writeData(ofstream& out) {
	Book::writeData(out);
	//step 3
	out << format << endl;
}


void DigitalBook::readData(ifstream& in) {
	Book::readData(in);
	//step 3
	getline(in, format);
	//convert from int to strings
}

void DigitalBook::display() {
	cout << "DIGITAL BOOK" << endl;
	author->display();
	cout << title << endl;
	cout << numPages << endl;
	cout << price << endl;
	cout << "The format of this book is " << format << endl;
	cout << endl;
}