#include "driver.h"
// index_of function
// Parameters: two strings
// Returns: indexHelper function
// Purpose: uses helper to find if string t is located in string s
int index_of(string& s, string& t)
{
	if (s.length() < t.length())
	{
		return -1;
	}
	else
	{
		return index_helper(s, t, 0);
	}
}

// index_helper function
// Parameters: two strings and one int
// Returns: -1 or int position
// Purpose: helper for index_of function. finds if string t is located in string s and its location
int index_helper(string& a, string& b, int position)
{	
	//if 0 > length of string s, or string t
	if (position > (a.length() - b.length()))
	{
		return -1;
	}
	else
	{
		//if s.string(0 4 == 4)
		//return 0
		if (a.substr(position, b.length()) == b)
		{
			return position;
		}
		//else increment 0 with the s and t values
		else
		{
			return index_helper(a, b, position + 1);
		}
	}
}

int main()
{
	int index = 0;
	string s = "";
	string t = "";

	cout << "Please your first string" << endl;
	getline(cin, s);
	cout << "Please input your second string" << endl;
	getline(cin, t);
	index = index_of(s, t);
	if (index == -1)
	{
		cout << "string not found" << endl;
	}else{
		cout << "the index of the substring is: " << index << endl;
	}


	system("PAUSE");
	return 0;
}


