#include "Author.h"

class Book {

public:
	Book();
	~Book();
	Book(Author newAuthor, string setTitle, string setPages, string setPrice);

	Author getAuthor() const;
	string	getTitle() const;
	string	getNumPages() const;
	string	getPrice() const;
	void Book::writeData(ofstream&);
	void Book::readData(ifstream&);
	void display(void);

private:
	Author author;
	string title;
	string pages;
	string price;
}; 
