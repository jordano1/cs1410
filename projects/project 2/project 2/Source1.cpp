/*
Michael Tyau
CS 142 SECTION MWF LAB 7

//TEST CASES//
1. When chosen to begin the tournament and the number is not equal to 2^n then the tounrament does not run. If it is it runs.
verified
2. When you choose to shuffle the restaurants no duplicates are made and the program shuffles the existing restaurants.
verified
3. You may, as the user, remove a existing restaurant.
verified
4. You may, as the user, add a program that doesn't already exist.
verified
5. When you choose to quit the program quits the program. If not chosen the program continues to run until you begin the tournament, whereafter you finish the tournament it will close.
verified
*/
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <ctime>
using namespace std;
int find(vector<string> list, string remove_name)
{
	for (int i = 0; i < list.size(); i++)
	{
		if (list[i] == remove_name)
		{
			return i;
		}
	}
	return -1;
}
void display(vector <string>& list)
{
	for (int i = 0; i < list.size(); i++)
	{
		cout << list[i] << ", ";
	}
	cout << endl;
}
void add(vector <string>& list)
{
	string add_name;
	int index;
	cout << "Enter restaurant name\n";
	getline(cin, add_name);
	index = find(list, add_name);
	if (index == -1)
	{	//add restaurant
		list.push_back(add_name);
		cout << "Congratulations Restaurant added\n\n";
		for (int i = 0; i < list.size(); i++)
		{
			cout << list[i] << endl;
		}
	}
	else
	{   //do nothing
		cout << "Restaurant already exists\n";
	}
}

void remove(vector <string>& list)
{
	string remove_name;
	int index;
	cout << "Enter restaurant name\n";
	getline(cin, remove_name);
	index = find(list, remove_name);
	if (index != -1)
	{	//remove restaurant
		for (int i = index; i < list.size() - 1; i++)
		{
			list[i] = list[i + 1];
		}
		list.pop_back();
		cout << "Restaurant removed\n\n";
		for (int i = 0; i < list.size(); i++)
		{
			cout << list[i] << endl;
		}
	}
	else
	{	//do nothing
		cout << "Restaurant does not exist\n";
	}
}
void shuffle(vector <string>& list)
{
	for (int i = 0; i< list.size(); i++)
	{
		int random = rand() % list.size();
		string temp = list[i];
		list[i] = list[random];
		list[random] = temp;
	}
}
bool tournament(vector <string>& list)
{
	string name;
	int index;
	bool valid = true;
	for (int n = 0; n<list.size(); n++)
	{
		if (list.size() == pow(2.0, n))
		{
			valid = true;
			vector<string> winners;
			while (list.size() != 1)
			{
				for (int i = 0; i<list.size(); i++)
				{
					cout << list[i] << " or " << list[i + 1] << endl;
					getline(cin, name);
					if (list[i] == name)
					{
						winners.push_back(name);
						i++;
					}
					else if (list[i + 1] == name)
					{
						winners.push_back(name);
						i++;
					}

				}
				list = winners;
			}
			cout << winners[0] << endl;
			return false;
		}
		return true;
	}
}

int main()
{
	vector<string>list;
	list.push_back("Cafe de Coral");
	list.push_back("Come Buy");
	list.push_back("Galaxy");
	list.push_back("Taam Jai");
	list.push_back("McDonalds");
	list.push_back("KFC");
	list.push_back("Cafe Rio");
	list.push_back("Denny's");
	list.push_back("Outback Steakhouse");
	list.push_back("Del Taco");
	list.push_back("Wild Ginger");
	list.push_back("Subway");
	list.push_back("Chick fil a");
	list.push_back("Jamba Juice");
	list.push_back("Burger Supreme");
	list.push_back("Beto's");

	string choice;
	bool On = true;
	while (On)
	{
		cout << "1. Display all restaurants\n2. Add a restaurant\n3. Remove a restaurant\n";
		cout << "4. Shuffle the vector\n5. Begin the tournament\n6. Quit program\n";
		getline(cin, choice);
		if (choice == "1")
		{
			display(list);
		}

		else if (choice == "2")
		{
			add(list);
		}

		else if (choice == "3")
		{
			remove(list);
		}

		else if (choice == "4")
		{
			shuffle(list);
		}

		else if (choice == "5")
		{
			On = tournament(list);

		}

		else if (choice == "6")
		{
			return 0;
		}

		else
		{
			On = true;
		}
	}
	system("pause");
	return 0;
}