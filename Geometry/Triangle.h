#pragma once
#include "Shape.h"
#include "Point.h"
#include <iostream>
using namespace std;

/*
#ifindef Square_h
#define Square_h
....
#endif Square_h
*/

class Triangle : public Shape
{
	
public:
	Triangle();
	//void setPoints(Point p[3]);
	double getArea();
	double getPerimeter();
	bool isInside();
	void spin();
	void type();
	double findAlpha();
	double findBetha();
	double findGamma();
	double findBarycenter();
	void findRect();
	friend  istream & operator>>(istream &stream, Triangle & obj )
		{
			
		stream>>obj.p1.x>>obj.p1.y>>obj.p2.x>>obj.p2.y>>obj.p3.x>>obj.p3.y;
		return stream;
		}
protected:
	Point p1,p2,p3;
};