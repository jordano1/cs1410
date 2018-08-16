#include <string>
#include <iostream>

void reverser(char arr[]);

using namespace std;

void reverser(char arr[]) {	
	
	char c = 'w';
	char arr2[] = "";
	for (int i = 0; i < strlen(arr); i++)
	{
		//making s = array[i] at 0 is H (for "hello world!")
		//char *s = &arr[i];
		//taking h from s, and putting it into arr
		//cout << "arr 1 value: " << arr << endl;
		char *p = &arr[i];
		//why is p the whole value of arr
		cout << "this is p: " << p << endl;
		//why is *p the index, I get how to use *(p + 1) which is p index of 1 from the array, but 
		cout << "this is *p: " << *p << endl;
		c = *p;
		arr2[i] = c;
		//*s points to the reference of array[i] which will be array[0++];
		//shows array value
		
	}


}
