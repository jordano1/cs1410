class Point {
protected:
	int x, y;
};

class Quadrilateral : public Point
{
protected:
	Point A, B, C, D;
};

class Trapezoid : public Quadrilateral
{
public:
	bool isTrapezoid() {
		if (A.y == B.y && C.y == D.y)
			return true;
		return false;
	}
};