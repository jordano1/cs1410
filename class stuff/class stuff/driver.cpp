#include "header.h"
double factorial(double n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}

int sumHelper(vector<int> nums, int total)
{
	int sum = 0;
	if (nums.empty())
	{
		return sum;
	}
	sum = nums.back() + total;
	nums.pop_back();
	return sumHelper(nums, total);
}
int sum(vector<int>& nums)
{
	return sumHelper(nums, 0);
}



int main()
{
	cout << factorial(24) << endl;

	system("PAUSE");
	return 0;
}