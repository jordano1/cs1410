#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


class Author {
public:
	Author(); // default constructor
	~Author(); //destructor
	Author(string, string);//parameterized constructor
	string getName() const; //getter for name
	string getAddress() const; //getter for address
	void writeData(ofstream&);
	void readData(ifstream&);
	void display(void);
private:
	string name; //private variable name
	string address; //private variable address
};