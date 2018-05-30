﻿// Program: HW3 ex03_01
// Name: Madelyn Carlson
// Date: 5/29/18

//PT -- 12/20

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

/*UML diagram
class: Fan

properties: int speed;
	bool on;
	double radius
behaviors: 
getSpeed
getRadius
*/

class Fan
{
public:
	//PT -- make these private.
	// -1
	int speed;
	bool on;
	double radius;

	//constructor
		Fan::fan()
	{
			speed = 1;
			radius = 5;
			//PT -- on = false;
			// -1
	}
		//fan object
		Fan(double newRadius, int newSpeed)
		{
			radius = newRadius;
			speed = newSpeed;
			//PT -- on = false
			//PT -- or have a third parameter to set a value for on.
		}

		//return speed
		double getSpeed()
		{
			return speed;
		}

		//return radius
		int getRadius()
		{
			return radius;
		}

	//PT -- bool getOn() { return on; }
	// -1
	
	//PT -- need set functions
	// -5
};

int main()
{
	//creating object for radius
	Fan fan1(10);
	Fan fan2(5);
	//PT -- you either need to call the no-arg constructor or the 2-arg constructor.
	// Fan fan1(10, 1);
	// Fan fan2();

	cout << "The radius of the fan " << fan1.radius << "is " << fan1.getRadius() << endl;
	cout << "The radius of the fan " << fan2.radius << "is " << fan2.getRadius() << endl;

	//creating object for speed
	Fan fan1(3);
	Fan fan2(2);

	cout << "The speed of the fan " << fan1.speed << "is " << fan1.getSpeed() << endl;
	cout << "The speed of the fan " << fan2.speed << "is " << fan2.getSpeed() << endl;
	
    return 0;
}

