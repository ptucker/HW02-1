﻿// Program: HW3 ex03_02
// Name: Madelyn Carlson
// Date: 5/29/18

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

//PT -- 10/20

/*UML diagram
class: QuadraticEquation

{Properties: int a, b, c
discriminant
root

Behavior: 
calculate roots
user input
*/

//PT -- shouldn't need global variables for this assignment
double discriminant = (pow(b, 2) - 4 * a * c);
double root1;
double root2;

class QuadraticEquation
{
public:
	//PT -- make these private
	int a;
	int b;
	int c;

	//constructor
	QuadraticEquation(a, b, c);
	//PT -- assign these -1
	/*
	{
		this->a - a;
		this->b = b;
		this->c = c;
	}
	*/

	//get functions
	int getA()
	{
		return a;
	}

	int getB()
	{
		return b;
	}

	int getC()
	{
		return c;
	}

	//discriminate function
	 double getDiscriminant()
	{
		 //PT -- calculate the discriminant here (rather than as a global variable)
		 /*
		 double discriminant = b*b - 4*a*c;
		 -3
		 */
		 if (discriminant > 0)
			 return discriminant;
		 else
			 return 0;
	}

	 //root functions
	double getRoot1()
	 {
		//PT -- do the calculations
		/*
		double d = getDiscriminant();
		double root1 = (-b + sqrt(d)) / (2*a);
		-3
		*/
		return root1;
	 }

	double getRoot2()
	{
		//PT -- do the calculations
		/*
		double d = getDiscriminant();
		double root1 = (-b - sqrt(d)) / (2*a);
		-3
		*/
		return root2;
	}
};
	



int main()
{
	cout << "Enter a value for a: ";
	cin a;
	cout << "Enter a value for b: ";
	cin b;
	cout << "Enter a value for c: ";
	cin c;

	double getDiscriminant();
	if (discriminant > 0)
	{
		cout << "Root 1 is: ";
		cin >> root1;
		cout << "Root 2 is: ";
		cin >> root2;

		if (discriminant == 0)
			cout << "Root 1 is: ";
		cin >> root1;

		else
			cout << "The equation has no real roots";
	}
    return 0;
}

