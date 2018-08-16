#pragma once
#include <string>
using namespace std;
class Book {

public:
	Book();
	~Book();
	Book(string, string, double);
	string getTitle(void);
	string getAuthor(void);
	
	double getPrice(void);
	void display(void);

protected:
	double price;
	string title;
	string author;
};