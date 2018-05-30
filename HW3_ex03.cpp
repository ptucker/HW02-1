﻿// Program: HW3 ex03
// Name: Madelyn Carlson
// Date: 5/29/18

//18/20

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

/*UML diagram
class:EvenNumber

Properties:int value
int next
int previous

Behaviors:
display even
plus one
minus one

*/

class EvenNumber
{
public:
	//PT -- make these private
	int value;
	int next;
	int previous;

	//no arg constructor
	EvenNumber()
	{
		value = 0;
	}

	//constructor
	EvenNumber(int newValue)
	{
		value = newValue;
	}

	int getValue()
	{
		return value;
	}

	int getNext()
	{
		//PT -- value+2, since we're looking for even numbers.
		//-1
		return next + 1;
	}

	int getPrevious()
	{
		//PT -- value-2, since we're looking for even numbers.
		//-1
		return previous - 1;
	}



};

int main()
{
	//calling functions
	EvenNumber even(16);
	//PT -- cout << "Even number is: " << even.getValue() << endl;
	cout << "Even number is: " << getValue;

	//PT -- cout << "Even number is: " << even.getNext() << endl;
	cout << "The next number is: " << getNext;

	//PT -- cout << "Even number is: " << even.getPrevious() << endl;
	cout << "The previous number is: " << getPrevious;
    return 0;
}

