#pragma once
#include "AudioBook.h"
class DigitalBook : public Book
{
public:
	DigitalBook();
	~DigitalBook();
	DigitalBook(Author *a, string t, int np, double p, string f);
	string getFormat(void);
	void writeData(ofstream& out);
	void readData(ifstream& in);
	void display(void);

private:
	string format;
};