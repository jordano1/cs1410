#include "MyRectangle.h"

using namespace std;


int main() {
	
	MyRectangle Rect;
	cout << Rect.getHeight(4) << endl;
	cout << Rect.getWidth(7) << endl;
	cout << Rect.getArea() << endl;

	system("PAUSE");
	return 0;
}