#include <iostream>
#include "Circle.h"
#include <cmath>
#include "Point.h"
using namespace std;
const double pi = 3.14159265358979;
Circle::Circle()
{
	center.x=0;
	center.y=0;
	radius=0;
}
//void Circle::setCenterAndRadius(Point p,double rad)
//{
//	
//	center.x = p.x;
//	center.y = p.y;
//	radius = rad;
//}
double Circle::getArea()
{
	return pi*radius*radius;
}
double Circle::getPerimeter()
{
	return 2*pi*radius;
}
bool Circle::isInside(Point dot)
{
	cout<<"Put the coordinates of the point you wanna check if it is inside the figure"<<endl;
	cin>>dot.x>>dot.y;
	if( pow((dot.x - center.x),2) + pow((dot.y - center.y),2) <= pow(radius,2))
	return true;
	else
	return false;
}
void Circle::type()
{
	cout<<"The figure is circle"<<endl;
}
void Circle::spin()
{
	double angle;
	Point _center;
	cout<<"Input angle in radians"<<endl<<endl;
	cin>>angle;
	_center.x=center.x*cos(angle) - center.y*sin(angle);
	_center.y=center.x*sin(angle) + center.y*cos(angle);
	center.x = _center.x;
	center.y = _center.y;
	cout<<"The new coordinates after the rotation are: "<<_center.x<<" "<<_center.y<<
		endl<<"And of course the radius stays the same"<<endl;
}
void Circle::findRect()
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
