#pragma once
class Round
{
public:
	Round();
	~Round();
	Round& operator=(const Round& Po);
	Round(const Round& Po);
	double getArea();
	double getPerimeter();
	bool isInside(const Point&);
	char* type();
	void spin(double angle);
};