//Demonstration #
//Author: Jordan Olson
//Date last modified: 8/24/2016
//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part,
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;
int loops = 1;
double taxed = 0;
double money = 0;
bool globalLoop = true;
bool userLoop = true;
string userInput = "";
char redo;
//SINGLE
//returning a double, so making this function a double
double single(double taxIncome) {	
	/*********************************TAX RATINGS**********************************/
	const double LOW_TAX = .022;
	const double MODERATE_TAX = .033;
	const double HIGH_TAX = .062;
	const double MAX_TAX = .075;
	/*********************************SINGLE*************************************/
	//don't have low because low = 0.
	const int SINGLE_SUBTRACT_MODERATE = 863;
	const int SINGLE_SUBTRACT_HIGH = 2588;
	const int SINGLE_SUBTRACT_MAX = 4313;

	const int SINGLE_LOW = 863;
	const int SINGLE_MODERATE = 2588;
	const int SINGLE_HIGH = 4313;

	const int SINGLE_ADD_MODERATE = 25;
	const int SINGLE_ADD_HIGH = 85;
	const int SINGLE_ADD_MAX = 181;
	/***************end constants*****************/

	
	if (taxIncome <= SINGLE_SUBTRACT_MODERATE) {
		//add nothing
		taxIncome = ((taxIncome - 0) * LOW_TAX) + 0;
		//example
		cout << "Your taxable income is $" << money << endl;
		cout << "and you are filing a single return." << endl;
		cout << fixed << setprecision(2) << "(single low) Your income tax will be $" << taxIncome << endl;
		return taxIncome;
	} else if (taxIncome <= SINGLE_SUBTRACT_HIGH) {
		taxIncome = ((taxIncome - SINGLE_SUBTRACT_MODERATE) * MODERATE_TAX) + SINGLE_ADD_MODERATE;
		cout << "Your taxable income is $" << money << endl;
		cout << "and you are filing a single return." << endl;
		cout << fixed << setprecision(2) << "(single medium) Your income tax will be $" << taxIncome << endl;

	} else if (taxIncome <= SINGLE_SUBTRACT_MAX) {
		taxIncome = ((taxIncome - SINGLE_SUBTRACT_HIGH) * HIGH_TAX) + SINGLE_ADD_HIGH;
		cout << "Your taxable income is $" << money << endl;
		cout << "and you are filing a single return." << endl;
		cout << fixed << setprecision(2) << "(single high) Your income tax will be $" << taxIncome << endl;
	} else if (taxIncome > SINGLE_SUBTRACT_MAX) {
		taxIncome = ((taxIncome - SINGLE_SUBTRACT_MAX) * MAX_TAX) + SINGLE_ADD_MAX;
		cout << "Your taxable income is $" << money << endl;
		cout << "and you are filing a single return." << endl;
		cout << fixed << setprecision(2) << "(single max) Your income tax will be $" << taxIncome << endl;
	}
	return taxIncome;
}

//MARRIED
//returning a double, so making this function a double
double married(double taxIncome) {
	/*********************************TAX RATINGS**********************************/
	const double LOW_TAX = .022;
	const double MODERATE_TAX = .033;
	const double HIGH_TAX = .062;
	const double MAX_TAX = .075;
	/*********************************MARRIED********************************/
	//don't have low because low = 0.
	const int MARRIED_SUBTRACT_MODERATE = 1726;
	const int MARRIED_SUBTRACT_HIGH = 5176;
	const int MARRIED_SUBTRACT_MAX = 8626;

	const int MARRIED_LOW = 1726;
	const int MARRIED_MODERATE = 5176;
	const int MARRIED_HIGH = 8626;

	const int MARRIED_ADD_MODERATE = 40;
	const int MARRIED_ADD_HIGH = 175;
	const int MARRIED_ADD_MAX = 390;
	/***************end constants*****************/

	double subtract = 0;
	double taxRate = 0;
	double add = 0;
	double marriedTaxed = ((taxIncome - subtract) * taxRate) + add;

	if (taxIncome <= MARRIED_SUBTRACT_MODERATE) {
		//add nothing
		taxIncome = ((taxIncome - 0) * LOW_TAX) + 0;
		//example
		cout << fixed << setprecision(2) << "(married low) Your income tax will be $" << taxIncome << endl;
	}
	else if (taxIncome <= MARRIED_SUBTRACT_HIGH) {
		taxIncome = ((taxIncome - MARRIED_SUBTRACT_MODERATE) * MODERATE_TAX) + MARRIED_ADD_MODERATE;
		cout << "Your taxable income is $" << money << endl;
		cout << "and you are filing a joint return." << endl;
		cout << fixed << setprecision(2) << "(married medium) Your income tax will be $" << taxIncome << endl;
	}
	else if (taxIncome <= MARRIED_SUBTRACT_MAX) {
		taxIncome = ((taxIncome - MARRIED_SUBTRACT_HIGH) * HIGH_TAX) + MARRIED_ADD_HIGH;
		cout << "Your taxable income is $" << money << endl;
		cout << "and you are filing a joint return." << endl;
		cout << fixed << setprecision(2) << "(married high) Your income tax will be $" << taxIncome << endl;
		
	}
	else if (taxIncome > MARRIED_SUBTRACT_MAX) {
		taxIncome = ((taxIncome - MARRIED_SUBTRACT_MAX) * MAX_TAX) + MARRIED_ADD_MAX;
		cout << "Your taxable income is $" << money << endl;
		cout << "and you are filing a joint return." << endl;
		cout << fixed << setprecision(2) << "(married max) Your income tax will be $" << taxIncome << endl;

	}
	return taxIncome;
}

int main()
{
	do {
		system("CLS");

		//asking for positive income value
		do {
			cout << "Please enter your taxable income.\nThis value must be positive: " << endl;
			//putting that value in userIncome
			getline(cin, userInput);
			//converting userIncome from a string to a float and storing the value to money:
			money = atof(userInput.c_str());
			//asking if joint or single return
		} while (money <= 0);
		do {
			userInput = "";
			cout << "Please enter an 'M' if you are married and filing a joint return, or 'S' if filing a single return: \n" << endl;
			//storing that input
			getline(cin, userInput);
			redo = userInput[0];

			if (userInput == "s" || userInput == "S") {
				taxed = single(money);
				userLoop = false;
			}
			else if (userInput == "m" || userInput == "M") {
				taxed = married(money);
				userLoop = false;
			}
			else {
				if (loops <= 1) {
					cout << "Invalid entry, please try again!\n" << endl;
					cout << "You made this error: " << loops << " time." << endl;
					userLoop = true;
					
				}
				else {
					cout << "Invalid entry, please try again!\n" << endl;
					cout << "You made this error: " << loops << " times." << endl;
					userLoop = true;
				}
				loops++;
			}
		} while (userLoop);


		do {
			cout << "\nrerun? (Y/N)\n";
			getline(cin, userInput);
			redo = userInput[0];
		} while (redo != 'y' && redo != 'Y' && redo != 'n' && redo != 'N');
	} while (redo == 'y' || redo == 'Y');
	system("PAUSE");
	return 0;
}