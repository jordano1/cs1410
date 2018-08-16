#include "driver.h"

int countChars(const string& str, int count)

{
	cout << "here is str: " << str << endl;
	cout << "here is &str: " << &str << endl;
	if (str == "") {
	return count;
	}
	else if (str[0] == 'a' || str[0] == 'A')
	{
		count++;// add a character to the count
	}
	return countChars(str.substr(1), count);// function calls itself
}
int main()

{
	int count = 0;
	cout << "Please put in a value" << endl;
	string str = "";
	getline(cin, str);
	cout << countChars(str, count) << endl;
	system("PAUSE");
	return 0;
}