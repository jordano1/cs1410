#include "Author.h"

Author::Author() {
	//constructor
	name = "";
	address = "";
}


Author::~Author() {
	//destructor
}


//string Author::readData(ifstream& file) {
//	getline(file, name);
//	getline(file, address);
//}
//
//
//string Author::writeData(ofstream& file2) {
//	file2 << name << endl;
//	file2 << address << endl;
//}

Author::Author(string n, string a) {
	name = n;
	address = a;
}


string Author::getName() const { //getname method
	return name;
}


string Author::getAddress() const { //getaddress
	return address;
}

void Author::display() {
	cout << name << endl;
	cout << address << endl;
}

void Author::writeData(ofstream& out) {
	out << name << endl;
	out << address << endl;
}

void Author::readData(ifstream& in) {
	getline(in, name);
	getline(in, address);
}