#include "driver.h"
#include "Color.h"

int main()
{
	cout << "Hello World" << endl;

	Color purple(230, 0, 228);
	purple.display();

	Color green(0, 255, 0);
	purple.display();

	purple.mixIn(green);

	purple + green;
	purple.display();



	system("PAUSE");
	return 0;
}

//to mix colors, we take the average of the two
//important things, just make sure the operator overloading is working, then check if cents are negative, if they are, then catch
//milestones are to get things done even though you know milestone 3 might have issues