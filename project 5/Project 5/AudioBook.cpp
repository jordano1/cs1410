#include "AudioBook.h"

	
AudioBook::AudioBook()
{
	//Book();
	length = 0;
}


AudioBook::AudioBook(Author* a, string t, int np, double p, int l) : Book(a, t, np, p)
{
	//Difference between the inhereted book above? Book();
	length = l;
}

AudioBook::~AudioBook()
{

}

//step 2
void AudioBook::writeData(ofstream& out) {
	Book::writeData(out);
	//step 3
	out << length << endl;
}


void AudioBook::readData(ifstream& in) {
	//creating temp variable to convert variables values
	string temp = "";

	Book::readData(in);
	getline(in, temp);
	length = stoi(temp); 
}

void AudioBook::display() {
	cout << "AUDIO BOOK" << endl;
	author->display();
	cout << title << endl;
	cout << numPages << endl;
	cout << price << endl;
	cout << "The length of this book is " << length << " minutes" << endl;
	cout << endl;
}