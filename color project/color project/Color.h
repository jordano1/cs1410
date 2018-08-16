#include <iostream>
using namespace std;
#pragma once
class Color {

public:
	int red;
	int green;
	int blue;
	
	Color(int r, int g, int b) {
		red = r;
		green = g;
		blue = b;
	}

	void display()
	{
		cout << "red: " << red << endl;
		cout << "green: " << green << endl;
		cout << "blue: " << blue << endl;
	}

	//passing by reference so the compiler doesn't have to make a copy of the object, it's faster.
	//passing const so we don't mess with the original
	//pass by ref is faster
	//with const value is safer
	void mixIn(const Color& c)
	{

		red = (red + c.red) / 2;
		green = (green + c.green)/2;
		blue = (blue + c.blue)/2;
//debugging statement
display();
	}

	void operator + (const Color& c)
	{

		red = (red + c.red) / 2;
		green = (green + c.green) / 2;
		blue = (blue + c.blue) / 2;
		//debugging statement
		display();
	}
};

//do a normal function, get it working, then convert it to an operator overload