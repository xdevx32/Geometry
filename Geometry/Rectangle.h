#pragma once
#include "Shape.h"
/*
#ifindef Square_h
#define Square_h
....
#endif Square_h
*/

class Rectangle : public Shape
{
public:
	Rectangle(); 
	//void setPoints(Point p[4]);
	double getArea();
	double getPerimeter();
	bool isInside();
	void type();
	void spin();
	//additional
	double findHeight();
	double findLenght();
	double findBarycenter();
	void findRect();
	friend  istream & operator>>(istream &stream, Rectangle & obj )
		{
		stream>>obj.p1.x>>obj.p1.y>>obj.p2.x>>obj.p2.y>>obj.p3.x>>obj.p3.y>>obj.p4.x>>obj.p4.y;
		return stream;
		}

protected:
	Point p1,p2,p3,p4;
};