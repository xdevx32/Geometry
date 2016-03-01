#include "Range.h"
#include "Point.h"
#include <cmath>
#include <iostream>
using namespace std;
const double pi=3.14159265;
Range::Range()
{
	center.x=0;
	center.y=0;
	radius=0;
}
double Range::getArea()
{
	return pi*radius*radius;
} 
double Range::getPerimeter()
{
	return 2*pi*radius;
}
bool Range::isInside()
{
	Point dot;
	dot.x = 0;
	dot.y = 0;
	if( pow((dot.x - center.x),2) + pow((dot.y - center.y),2) == pow(radius,2))
	return true;
	else
	return false;
}
void Range::spin()
{
	double angle;
	cout<<"Input angle in radians"<<endl<<endl;
	cin>>angle;
	Point _center;
	_center.x=center.x*cos(angle) - center.y*sin(angle);
	_center.y=center.x*sin(angle) + center.y*cos(angle);
}
void Range::type()
{
	cout<<"The figure is Range"<<endl;
}
void Range::findRect()
{
	Point p[4];
	p[0].x = center.x - radius; 
	p[0].y = center.y - radius;
	p[1].x = center.x + radius;
	p[1].y = center.y - radius;
	p[2].x = center.x + radius;
	p[2].y = center.y + radius;
	p[3].x = center.x - radius;
	p[3].y = center.y + radius;
	cout<<"The rectangle's coordinates are: "
		<<p[0].x<<" "<<p[0].y<<" "
		<<p[1].x<<" "<<p[1].y<<" "
		<<p[2].x<<" "<<p[2].y<<" "
		<<p[3].x<<" "<<p[3].y<<" ";
}

