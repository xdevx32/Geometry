#pragma once
#include "Shape.h"
/*
#ifindef Square_h
#define Square_h
....
#endif Square_h
*/

class Range : public Shape
{
public:
	Range();
	double getArea();
	double getPerimeter();
	bool isInside();
	void type();
	void spin();
	void findRect();
	friend  istream & operator>>(istream &stream, Range & obj )
		{
		stream>>obj.center.x>>obj.center.y>>obj.radius;
		return stream;
		}
protected:
	Point center;
	double radius;
};