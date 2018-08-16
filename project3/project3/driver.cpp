#pragma once
#include "driver.h"
int main()
{

	int* p = nullptr;
	int seven = 7;
	p = &seven;
	*(p + 1) = 8;
	*(p + 2) = 10;
	int i = 0;
	while (i < 10)
	{
		cout << *(p + i) << endl;
		++i;
	}
	system("PAUSE");
	return 0;
}