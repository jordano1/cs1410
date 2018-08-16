#include "Author.h"

class Book {

public:
	Book();
	~Book();
	Book(Author *, string, int, double);

	Author* getAuthor() const;
	string	getTitle() const;
	int	getNumPages() const;
	double	getPrice() const;
	virtual void Book::writeData(ofstream&);
	virtual void Book::readData(ifstream&);
	void display(void);

protected:
	Author *author;
	string title;
	int numPages;
	double price;
};
