#include "Header.h"
#include "ExceptionClass.h"

string convert = "";
double conversion = 0;
double returnValue = 0;

int main() {
	bool falsy = false;

	do {
		falsy = false;
		try
		{
			cout << "please input a number greater than 0" << endl;
			
			getline(cin, convert);
			conversion = atof(convert.c_str());
		
			Exception foo(conversion);
			cout << "squared value: " << foo.square(conversion) << endl;
			
		}
		catch (double a)
		{
			cout << "input fail: cannot square 0" << endl;
			cout << "The value of your input: " << a << endl;
			falsy = true;

		}
		cout << "try again? y/n ";
		getline(cin, convert);
		if (convert == "y" || convert == "Y") {
			falsy = true;
		}
		else {
			falsy = false;
		}

	} while (falsy);

	
	system("PAUSE");
	return 0;
}


/*Pass this value to a function named calculateSquare.
This function will only work on positive, non-zero values.
Since the function has no idea where the data came from it
has no way to recover if the parameter it receives is invalid.
If the value passed is zero or negative the function will throw an exception
that (1) indicates what the error was, and (2) what the value of the offending parameter is.
If the parameter is okay, it calculates and returns the square of the number.
You will have to create an exception class capable of storing informaton
about what the error was, and the value passed to the function.*/