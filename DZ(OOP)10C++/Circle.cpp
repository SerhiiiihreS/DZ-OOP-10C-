#include "Circle.h"

Circle::Circle(int r)
{
	if (r > 0) {
		radius = r;
	}
}

void Circle::Print()
{
	cout << "radius ->" << radius;
}
