﻿//CS2_HW4_ex04 (11.9)
//Madelyn Carlson
//6/6/18

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

// 10/20

/*UML diagram
class: 
Rectangle2D

Properties:
+double x
+double y
+double height
+double width

Behaviors:
+getArea()
+getPerimeter()
+contains()
+overlaps()
*/

//PT -- we don't need global variables for this. They can be calculated in the member functions
double center; 
int perimeter;
int area;

class Rectangle2D
{
public:

	//x and y data fields
	double x;
	double y;

	//PT -- I don't think these functions need ptr.
	const double setCenter(int* ptr)
	{
		return center;
	}
	const double getCenter(int* ptr)
	{
		return center
	}

	//width and height data fields
	double width;
	double height;

	const double setWidth()
	{
		return width;
	}

	const double setHeight()
	{
		return height;
	}

	//no arg constructor

	Rectangle2D(int x, int y)
	{
		//PT -- need to set x and y member variables
		// this->x = x;
		// this->y = y;
		width = 1;
		height = 1;
	}

	//area function
	const int getArea()
	{
		//PT -- calculate this
		// -2
		// return width * height;
		return area;
	}

	//perimeter function
	const int getPerimeter()
	{
		//PT -- calculate this
		// -2
		// return width*2 + height*2;
		return perimeter;
	}

	//other constant functions
	const int contains(const Rectangle2D &r)
	{
		// PT -- need to calculate these
		// -2
		return true;
	}

	const int contains(double x, double y)
	{
		// PT -- need to calculate these
		// -2
		return true;
	}

	const int overlaps(const Rectangle2D &r)
	{
		// PT -- need to calculate these
		// -2
		return true;
	}
};

int main()
{
	Rectangle2D r1(int 2, 2, 5.5, 4.9)
	{
		cout << getWidth(&width) << endl;
	}

	Rectangle2D r2(int 4, 5, 10.5, 3.2)
	{
		cout << getHeight(&height) << endl;
	}

	Rectangle2D r1(int 2, 2, 5.5, 4.9)
	{
		cout << getArea(&area) << endl;
	}

	Rectangle2D r1(int 2, 2, 5.5, 4.9)
	{
		cout << getperimeter(&perimeter) << endl;
	}

	Rectangle2D contains;
	{
		cout << r1.contains(3, 3) << endl;
	}
	
	Rectangle2D contains;
	{
		cout << r1.contains(r2) << endl;
	}

	Rectangle2D overlaps;
	{
		cout << r1.overlaps(r3) << endl;
	}
	getCenter(&center);

		Rectangle2D(0, 0);

    return 0;
}

