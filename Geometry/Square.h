#pragma once
#include "Point.h"
#include "Shape.h"
/*
#ifindef Square_h
#define Square_h
....
#endif Square_h
*/
class Square : public Shape
{
public:
	Square();
	//void setPoints(Point p[4]);
	double getArea();
	 int isInside(Point dot);
	double findSide();
	double getPerimeter();
	void type();
	void spin(double angle,Point _p1,Point _p2,Point _p3,Point _p4);
	double findBarycenter(); // ???
	//void findRect();
	//void vpOkr();
	friend  istream & operator>>(istream &stream, Square & obj )
		{
		stream>>obj.p1.x>>obj.p1.y>>obj.p2.x>>obj.p2.y>>obj.p3.x>>obj.p3.y>>obj.p4.x>>obj.p4.y;
		return stream;
		}
protected:
	Point p1,p2,p3,p4;
};

