#pragma once
#include "Point.h"
class Shape
{
public:
	virtual double getArea()=0;
	virtual double getPerimeter()=0;
	//virtual bool isInside(Point)=0;
	virtual void type()=0;
	//virtual void spin()=0;
	//virtual void findRect()=0;

};