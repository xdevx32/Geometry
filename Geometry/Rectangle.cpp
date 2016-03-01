#include "Rectangle.h"
#include "Point.h"
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
Rectangle::Rectangle()
{
	p1.x=0;
	p1.y=0;
	p2.x=0;
	p2.y=0;
	p3.x=0;
	p3.y=0;
	p4.x=0;
	p4.y=0;
}
//void Rectangle::setPoints(Point p[4])
//{
//	
//	p1.x=p[0].x;
//	p1.y=p[0].y;
//	p2.x=p[1].x;
//	p2.y=p[1].y;
//	p3.x=p[2].x;
//	p3.y=p[2].y;
//	p4.x=p[3].x;
//	p4.y=p[3].y;
//
//}
double Rectangle::getArea()
{
	double a = sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));
	double b = sqrt(pow((p3.x - p2.x),2) + pow((p3.y - p2.y),2));
	return a*b;
}
double Rectangle::getPerimeter()
{
	double a = sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));
	double b = sqrt(pow((p3.x - p2.x),2) + pow((p3.y - p2.y),2));
	return 2*(a+b);
}
bool Rectangle::isInside()
{
	Point dot;
	dot.x=0;
	dot.y=0;
	cout<<"Put the coordinates of the point you wanna check if it is inside the figure"<<endl;
	cin>>dot.x>>dot.y;
if(dot.x >= p1.x && dot.y >= p1.y && 
	dot.x <= p2.x && dot.y >= p2.y &&
	dot.x <= p3.x && dot.y <= p3.y &&
	dot.x >= p4.x && dot.y <= p4.y)
	return true;
	else 
	{
		return false;
	}
}
void Rectangle::type()
{
	cout<<"The figure is Rectangle"<<endl
		<<"o o o o o"<<endl
		<<"o       o"<<endl
	    <<"o o o o o"<<endl;
}
void Rectangle::spin()
{
	double angle;
	cout<<"Input angle in radians "<<endl<<endl;
	cin>>angle;
	Point _p1,_p2,_p3,_p4;
	_p1.x=p1.x*cos(angle) - p1.y*sin(angle);
	_p1.y=p1.x*sin(angle) + p1.y*cos(angle);
	_p2.x=p2.x*cos(angle) - p2.y*sin(angle);
	_p2.y=p2.x*sin(angle) + p2.y*cos(angle);
	_p3.x=p3.x*cos(angle) - p3.y*sin(angle);
	_p3.y=p3.x*sin(angle) + p3.y*cos(angle);
	_p4.x=p4.x*cos(angle) - p4.y*sin(angle);
	_p4.y=p4.x*sin(angle) + p4.y*cos(angle);
	
	p1.x=_p1.x;
	p1.y=_p1.y;
	p2.x=_p2.x;
	p2.y=_p2.y;
	p3.x=_p3.x;
	p3.y=_p3.y;
	p4.x=_p4.x;
	p4.y=_p4.y;

	cout<<"The coordinates after the rotation are: "<<endl<<
		_p1.x<<" "<<_p1.y<<" "<<
		_p2.x<<" "<<_p2.y<<" "<<
		_p3.x<<" "<<_p3.y<<" "<<
		_p4.x<<" "<<_p4.y<<endl<<endl;
}
double Rectangle::findHeight()
{
	return sqrt(pow((p4.x - p1.x),2) + pow((p4.y - p1.y),2));
}
double Rectangle::findLenght()
{
	return sqrt( pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2) );
}
double Rectangle::findBarycenter()
{
	return 0.0;
}
//void findRect()
//{
//	
//	Point pfRe[4];
//	
//		pfRe[0].x = mini(mini(mini(p1.x,p3.x),mini(p1.x,p2.x)),p4.x);
//		pfRe[0].y = mini(mini(mini(p1.y,p3.y),mini(p1.y,p2.y)),p4.y);
//		pfRe[1].x = maxi(maxi(maxi(p1.x,p3.x),maxi(p1.x,p2.x)),p4.x);
//		pfRe[1].y = mini(mini(mini(p1.y,p3.y),mini(p1.y,p2.y)),p4.y);
//		pfRe[2].x = maxi(maxi(maxi(p1.x,p3.x),maxi(p1.x,p2.x)),p4.x);
//		pfRe[2].y = maxi(maxi(maxi(p1.y,p3.y),maxi(p1.y,p2.y)),p4.y);
//		pfRe[3].x = mini(mini(mini(p1.x,p3.x),mini(p1.x,p2.x)),p4.x);
//		pfRe[3].y = maxi(maxi(maxi(p1.y,p3.y),maxi(p1.y,p2.y)),p4.y);
//		
//	cout<<"The rectangle's coordinates are: "
//		<<pfRe[0].x<<" "<<pfRe[0].y<<" "
//		<<pfRe[1].x<<" "<<pfRe[1].y<<" "
//		<<pfRe[2].x<<" "<<pfRe[2].y<<" "
//		<<pfRe[3].x<<" "<<pfRe[3].y<<" ";
//}
//
