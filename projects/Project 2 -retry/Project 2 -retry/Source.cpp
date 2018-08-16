// Copyright 2015, Utah Valley University
//Author: Roger deBry
// Date last modified: October 2015
// Driver code, Programming Project #2
// =======================================
#include "Header.h"

int main()
{

	// create a vector for storing the account objects
	vector<Book> myBooks;

	// create three Author objects
	Author p1("J.K.Rowling", "Edinburgh, Scotland");
	Author p2("Suzanne Collins", "Connecticut, USA");
	Author p3("J.R.R. Tolkien", "Bournmouth, England");

	// Create three Book objects
	Book b1(p1, "Harry Potter and the Sorcerer's Stone", 256, 24.95);
	Book b2(p2, "Mockingjay", 400, 12.99);
	Book b3(p3, "The Hobbit", 322, 14.29);

	// add the books to the vector
	myBooks.push_back(b1);
	myBooks.push_back(b2);
	myBooks.push_back(b3);

	// call the displayBooks function to display the books
	displayBooks(myBooks);
	cout << "\n\n";

	system("PAUSE");
	return 0;
}

void displayBooks(const vector<Book>& books)
{
	for (int i = 0; i < books.size(); i++)
	{
		
		cout << books[i].getPrice() << endl;
		cout << books[i].getAuthor().getName() << endl;
		cout << books[i].getPrice() << endl;
	}
}