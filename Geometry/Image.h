#pragma once
#include "Shape.h"
#include "Point.h"
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include "Range.h"
class Image : public Shape
{
public:
	void addSquare();
	void addRectangle();
	void addTriangle();
	void addCircle();
	void addRange();
	void delSquare();
	void delRectangle();
	void delTriangle();
	void delCircle();
	void delRange();

};