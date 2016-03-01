//
//  Header.h
//  Geometry
//
//  Created by Angel Kukushev on 9/9/14.
//  Copyright (c) 2014 Cranial Ink. All rights reserved.
//

#pragma once
#include "Shape.h"
#include "Rectangle.h"
/*
 #ifindef Square_h
 #define Square_h
 ....
 #endif Square_h
 */
class Circle : public Shape
{
public:
	Circle();
	//void setCenterAndRadius(Point p,double rad);
	double getArea();
	double getPerimeter();
	bool isInside(Point dot);
	void type();
	void spin();
	void findRect();
	friend  istream & operator>>(istream &stream, Circle & obj )
    {
		stream>>obj.center.x>>obj.center.y>>obj.radius;
		return stream;
    }
protected:
	Point center;
	double radius;
    
};