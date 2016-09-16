#include "Shape.h"

#ifndef RECTANGLE_H

#endif // !RECTANGLE_H


class Rectangle : public Shape {

public:
	double width;
	double perimeter;

	Rectangle(double width, double perimeter) {
		this->width = width;
		this->perimeter = perimeter;
	}


};