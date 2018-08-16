#include "driver.h"

Money::Money()
{
	dollars = 0;
	cents = 0;
}

Money::Money(int d, int c)
{
	dollars = d;
	cents = c;
}

void Money::getDollars(int d) 
{
	dollars = d;
}
void Money::getCents(int c) 
{
	cents = c;
}

void Money::display()
{  
	//setfixed
	cout << "here is the value: " << "$" << dollars << "." << cents << endl;
}

void Money::concat(const Money&)
{
	cout << "$" << dollars << "." << cents << endl;
}

void Money::operator+(const Money& add)
{
	dollars = add.dollars + dollars;
	cents = add.cents + cents;
	
	cout << "Here is the value added: " << endl;
	display();
}

void Money::operator-(const Money& sub)
{
	
	dollars = sub.dollars - dollars;
	cents = sub.cents - cents;
	cout << "Here is the value subtracted: " << endl;
	display();
}



Money::~Money()
{
}