#pragma once
#include "Book.h"
class AudioBook : public Book
{
public:
	AudioBook();
	AudioBook(Author*, string, int, double, int);
	~AudioBook();
	//step 2
	void writeData(ofstream& out);
	void readData(ifstream& in);
	void display(void);

private:
	int length;
};