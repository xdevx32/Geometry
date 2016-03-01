#pragma once
#include <cmath>
#include <iostream>
using namespace std;
template <class T> const T& mini ( const T& a, const T& b ) {
  return !(b<a)?a:b;     // or: return !comp(b,a)?a:b; for the comp version
}
template <class T> const T& maxi ( const T& a, const T& b ) {
  return (a<b)?b:a;     // or: return comp(a,b)?b:a; for the comp version
}

struct Point
{
	
	double x,y;
	Point()
	{
		x=0;
		y=0;
	}
};

