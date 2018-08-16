#include "driver.h"
int intToStr(string a)
{
	int b = 0;
	b = atoi(a.c_str());
	return b;
}
int main()
{
	Money mon;
	Money mon2;
	string again = "";
	int usrInput = 0;
	do
	{
		system("CLS");
		//d1 = dollar 1  c1 = cent 1
		int d1 = 0;
		int c1 = 0;
		int d2 = 0;
		int c2 = 0;
		string temp = "";
		do
		{
			cout << "For Mon1, Please input your first monetary value: ";
			getline(cin, temp);
			d1 = intToStr(temp);
			mon.getDollars(d1);

			cout << "For Mon1, Please input your second monetary value: ";
			getline(cin, temp);
			c1 = intToStr(temp);
			mon.getCents(c1);
			//display the values put in
			if (d1 >= 0 && c1 <= 0) {
				cout << "your cents are negative!" << endl;
			}
			if (d1 <= 0 && c1 >= 0) {
				cout << "your dollars are negative!" << endl;
			}
			if (d1 <= 0 && c1 <= 0) {
				cout << "both of your values are negative, please make sure you're putting in all positive values!" << endl;
			}
		} while (d1 >= 0 && c1 <= 0 || d1 <= 0 && c1 >= 0 || d1 <= 0 && c1 <= 0);
		mon.display();



		do
		{
			cout << "For Mon2, Please input your first monetary value: ";
			getline(cin, temp);
			d2 = intToStr(temp);
			mon2.getDollars(d2);

			cout << "For Mon2, Please input your second monetary value: ";
			getline(cin, temp);
			c2 = intToStr(temp);
			mon2.getCents(c2);
			if (d2 >= 0 && c2 <= 0) {
				cout << "your cents are negative or characters!" << endl;
			}
			if (d2 <= 0 && c2 >= 0) {
				cout << "your dollars are negative or characters!" << endl;
			}
			if (d2 <= 0 && c2 <= 0) {
				cout << "both of your values are negative, or your values were not numeric! Please make sure you're putting in all positive values!" << endl;
			}
		} while (d2 >= 0 && c2 <= 0 || d2 <= 0 && c2 >= 0 || d2 <= 0 && c2 <= 0);
		//display the values put in
		cout << "press 1 if you would like to subtract the two monetary values, or 2 if you would like to add them together." << endl;
		getline(cin, temp);
		usrInput = intToStr(temp);

		if (usrInput == 1) {
			if (d1 > d2 || c1 > c2) {
				cout << "you cannot subtract from your first monetary value because there is not enough money to subtract from." << endl;
			}
			else {
				mon - mon2;
			}
		}else {
			mon + mon2;
		}
		//check if user puts in anything but y/Y, if they do, tell them to put in y/Y
		cout << "press y/Y to restart the program." << endl;
		getline(cin, again);

	} while (again == "y" || again == "Y");

	system("PAUSE");
	return 0;

}
