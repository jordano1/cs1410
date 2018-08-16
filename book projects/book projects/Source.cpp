#include <iostream>
#include <string>
using namespace std;
int main(){
	string fName = "";
	string lName = "";
	cout << "Please put in your first name: ";
	cin >> fName;
	cout << "Please put in your last name: ";
	cin >> lName;
	
	cout << lName[0] << lName[1];

	system("PAUSE");
return 0;
}