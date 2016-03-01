#include "Square.h"
#include "Point.h"
#include <cmath>
#include <iostream>
using namespace std;
Square::Square()
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
//void Square::setPoints(Point p[4])
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
double Square::getArea()
{
	return fabs(pow((p2.x - p1.x),2) + pow((p2.y- p1.y),2));
}   
double Square::getPerimeter()
{
	return 4*sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));
} 
double Square::findBarycenter()
{
	Point bc;
	bc.x=7;
	bc.y=8;
	

	return (bc.x,bc.y);
}
int Square::isInside(Point dot)
{
	double Cx[4],Cy[4];
	Cx[0]=p1.x;
	Cx[1]=p2.x;
	Cx[2]=p3.x;
	Cx[3]=p4.x;
	Cy[0]=p1.y;
	Cy[1]=p2.y;
	Cy[2]=p3.y;
	Cy[3]=p4.y;
int i, j, c = 0;
for (i = 0, j = 3; i < 4; j = i++) {
if ( ((Cy[i]>dot.y) != (Cy[j]>dot.y)) &&
(dot.x < (Cx[j]-Cx[i]) * (dot.y-Cy[i]) / (Cy[j]-Cy[i]) + Cx[i]) )
c = !c;
}
return c;
}

double Square::findSide()
{
	
		return sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p2.y),2));

}
void Square::type()
{
	cout<<"The figure is Square"<<endl
		<<"o o o o o"<<endl
		<<"o       o"<<endl
		<<"o       o"<<endl
		<<"o       o"<<endl
		<<"o o o o o"<<endl<<endl;
		
}
void Square::spin(double angle,Point _p1,Point _p2,Point _p3,Point _p4)
{
	
	
	cout<<"Input angle in radians"<<endl<<endl;
		cin>>angle;
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

//void Square::vpOkr()
//{
//	if(sq.getArea() == 0)
//		cout<<"No circle"<<endl<<endl;
//	else
//		sq.p1.x + 
//		cout<<"The coordinates of the center are: "<<
//}
