﻿// CS2_HW6_ex04 (14.3)
// Madelyn Carlson
// 6/14/18

#include "stdafx.h"
#include <iostream>
#include <string>
#include <circle_h>
#define circle_h
#ifndef circle_h
using namespace std;

//PT -- need to implement the Circle operators outside of main().
// 10/20

class Circle
{
public:
	Circle();
	Circle(double);
	double getArea()  onst;
	double getRadius() const;
	void setRadius(double);
	static int getNumberOfObjects();

private:
	double radius;
	static int numberOfObjects;
};

#endif

//get area function
double getArea()
{
	Area = radius * radius * 3.14;
}

double getRadius()
{
	return radius;
}

int main()
{
	int Circle::compareTo(circle1& circle2)
	{
		c operator<(circle1, circle2);
		return(circle1 < circle2);
	}

	int Circle::compareTo(circle1& circle2)
	{
		c operator<(circle1, circle2);
		return(circle1 = circle2);
	}

	int Circle::compareTo(circle1& circle2)
	{
		c operator<(circle1, circle2);
		return(circle1 <= circle2);
	}

	int Circle::compareTo(circle1& circle2)
	{
		c operator<(circle1, circle2);
		return(circle1 != circle2);
	}
    return 0;
}

