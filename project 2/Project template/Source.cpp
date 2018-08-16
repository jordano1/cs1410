#include "Header.h"
using namespace std;

class Animal //abstract
{
public:
	virtual void speak() = 0; //pure virtual function
};

class Duck : public Animal
{
public:
	void speak()
	{
		cout << "quack" << endl;
	}
};

class Mouse : public Animal
{
public:
	void speak()
	{
		cout << "squeak" << endl;
	}
};

class Dog : public Animal
{
public:
	void speak()
	{
		cout << "bark" << endl;
	}
};

class Pig : public Animal
{
public:
	void speak() //forced to create speak() because speak() is a pure virtual function
	{
		cout << "oink" << endl;
	}
};

int main()
{
	//Animal adam; //can't directly create a generic Animal because it's abstract
	Duck darcy;
	darcy.speak();
	Animal* a = new Duck();
	a->speak();

	Mouse mary;
	Dog doug;
	Pig peggy;
	Pig* bacon = &peggy;
	bacon->speak(); //call peggy the Pig's speak method via bacon
	(*bacon).speak();// re-write line 55 in the alternate form

					 //adam.speak();
	darcy.speak();
	mary.speak();
	doug.speak();
	peggy.speak();

	cout << "----------------------" << endl;
	vector<Animal*> ark; //Can't store Animal objects in a vector because of slicing problem
						 //ark.push_back(&adam);
	ark.push_back(&darcy);
	ark.push_back(&mary);
	ark.push_back(&doug);
	ark.push_back(&peggy);

	for (int i = 0; i < ark.size(); ++i)
	{
		ark[i]->speak();
		//(*ark[i]).speak(); 
	}
	system("PAUSE");
	return 0;
}