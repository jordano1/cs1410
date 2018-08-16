#include "driver.h"

int main()
{
	Pair<char> letters('a', 'd');
	cout << "\nThe first letter is: " << letters.get_first();
	cout << "\nThe second letter is: " << letters.get_second();
	cout << endl;
	system("Pause");
	return 0;
}